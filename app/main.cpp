/*
 * Copyright (c) 2016-2017, Niklas Hauser
 *
 * This file is part of the modm project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
// ----------------------------------------------------------------------------
#include <iomanip>
#include <ios>
#include <modm/board.hpp>
#include <modm/processing/timer.hpp>

using namespace Board;

/// define this firmware to initiate a canopen master; 0 for slave
#define CANOPEN_MASTER 1

/// set lely internal defines, which have to match whatever was configure
/// inside of lely (for the .eds) constructed/imported files
#define LELY_NO_CO_OBJ_NAME 0
#define LELY_NO_CO_OBJ_DEFAULT 0
#define LELY_NO_CO_OBJ_UPLOAD 0
#define LELY_NO_CO_OBJ_LIMITS 0

#if CANOPEN_MASTER == 1
/// include generated (convertEds2Hpp) slave definition
/// instead of loading the .eds file dynamically at runtime
#include <eds/eds-master.hpp>
/// include driver for slave which is used by the master to communicate with the
// #include <include/canopen/SlaveDriver.hpp>
#include <include/canopen/ElmoMotorDrivers.hpp>
#else
/// include generated (convertEds2Hpp) slave definition
/// instead of loading the .eds file dynamically at runtime
#include <eds/eds-slave.hpp>
/// include the slave class, which contains the behavior of the slave itself
#include <include/canopen/Slave.hpp>
#endif

#include <lely/coapp/master.hpp>
#include <lely/ev/loop.hpp>
#include <lely/io2/sys/clock.hpp>
#include <lely/io2/sys/io.hpp>
#include <lely/io2/user/can.hpp>
#include <lely/io2/user/timer.hpp>
#include <lely/util/chrono.hpp>

#include <lely_addons/lely_utils.hpp>

#include <include/utils/CanDriver.hpp>
#include <include/utils/TimeWrapper.hpp>

// This function is invoked by a user-defined timer whenever the expiration time
// is updated. This information can be used to make the main loop more
// efficient, but nothing needs to be done to obtain a functioning tiomer.
void on_next(const timespec* tp, void* arg) {
    (void)tp;
    (void)arg;
}

// This function is invoked by a user-defined CAN channel whenever a CAN frame
// needs to be written. In this case we forward the frame to the other channel.
int on_write(const can_msg* msg, int timeout, void* arg) {
    /// convert lely can message to modm can message
    modm::can::Message modmMsg;
    convert_can_msg(*msg, modmMsg);

    // The user-defined argument is a pointer to a pointer to the other channel.
    auto* con = static_cast<CanDriver*>(arg);

    candump(*msg, con->getId());
    // Post a task to process the CAN frame. This prevents nesting in the CAN
    // frame handlers. And since we're postponing the handling of the frame, we
    // need to create a copy.
    con->write(modmMsg.getIdentifier(), modmMsg.data, modmMsg.getLength());
    return 0;
}

// Allocate giant array inside a NOLOAD heap section
// Play around with the array size and see effect it has on HeapTable!
const uint8_t* heap_begin { nullptr };
const uint8_t* heap_end { nullptr };
extern "C" void __modm_initialize_memory() {
    bool success = HeapTable::find_largest(&heap_begin, &heap_end, modm::MemoryDefault);
    // MODM_LOG_DEBUG << "### heap_begin:" << (unsigned int) heap_begin <<
    // modm::endl; MODM_LOG_DEBUG << "### heap_end:" << (unsigned int) heap_end
    // << modm::endl; MODM_LOG_DEBUG << "### Usable HeapSize: " << ( (unsigned
    // long) *heap_end) - (unsigned long) *heap_begin) << modm::endl;
    modm_assert(success, "heap.init", "No default memory section found!");
}
const uint8_t* heap_top { heap_begin };
extern "C" void* _sbrk_r(struct _reent*, ptrdiff_t size) {
    const uint8_t* const heap = heap_top;
    heap_top += size;
    modm_assert(heap_top < heap_end, "heap.sbrk", "Heap overflowed!");
    return (void*)heap;
}

class TestTask {
public:
    TestTask(modm::Duration timeout, lely::canopen::NmtCommand nmtCommand)
        : stateChanged_ { false }
        , timeout_ { modm::Timeout { timeout } }
        , nmtCommand_ { nmtCommand } { }
    bool checkTimeout(lely::canopen::NmtCommand& cmd) {
        if (!stateChanged_) {
            if (timeout_.isExpired()) {
                stateChanged_ = true;
                cmd = nmtCommand_;
                return true;
            }
        }
        return false;
    }

private:
public:
private:
    bool stateChanged_;
    modm::Timeout timeout_;
    lely::canopen::NmtCommand nmtCommand_;
};

int main() {
    Board::initialize();
    Leds::setOutput();

    // create CAN driver object
    CanDriver con(1u);

    /// #################
    /// ###### PRE
    /// kikass13:
    /// Initialize guards, context and loop for flow control and event handling
    /// The event loop and executor can be utilized multiple times

    // Initialize the I/O library. This is required on Windows, but a no-op on
    // Linux (for now). lely::io::IoGuard io_guard; Create an I/O context to
    // synchronize I/O services during shutdown.
    lely::io::Context ctx;

    // Create a non-polling event loop.
    lely::ev::Loop loop;
    auto exec = loop.get_executor();

    /// #################
    /// ###### TIMERS
    MODM_LOG_INFO << "TIMERS" << modm::endl;
    // Create a user-defined channel. We register
    // an on_next() callback to demonstrate the syntax, but the callback doesn't
    // actually (need to) do anything.
    lely::io::UserTimer timer(ctx, exec, &on_next, nullptr);

    /// #################
    /// ###### CHANNELS
    MODM_LOG_INFO << "CHANNELS" << modm::endl;

    // Create a user-defined CAN channel. The
    // channel uses the default values for the flags, receive queue length
    // and timeout. The on_write() callback will send the CAN frame.
    auto user_flags = lely::io::CanBusFlag::NONE;
    lely::io::UserCanChannel chan(ctx, exec, user_flags, 0, 0, &on_write, &con);

    /// empty device description pointer
    co_dev_t* deviceDescription;

    /// #################
    /// ###### MASTER / SLAVE
    /// for Master:
    ///   * create the master
    ///   * create a driver for each slave to be handled
    /// for slave:
    ///   * create the slave(s)
#if CANOPEN_MASTER == 1
    // Create a CANopen master with node-ID 1. The master is asynchronous, which
    // means every user-defined callback for a CANopen event will be posted as a
    // task on the event loop, instead of being invoked during the event processing by the stack.
    MODM_LOG_INFO << "MASTER" << modm::endl;
    /// create master object using static generated eds device destription
    deviceDescription = MyMaster_init();
    lely::canopen::AsyncMaster master(timer, chan, deviceDescription, 1);
    MODM_LOG_INFO << " ... DRIVER" << modm::endl;
    // Master:Create a driver for the slave with node-ID 2.
    // MyDriver driver(exec, master, 2);

    /// Master:Create a driver for the slave with node-ID 2
    /// Policy objects (profiles) will be instantiated by the driver,
    /// all we have to do is provide the adapter classes used.
    /// we can also ignore some adapters (by providing void template arguments
    /// ...
    // CiA302::SlaveDriver<ElmoMotorDriver302Adapter, void> driver1(exec, master, 2);
    // CiA302::SlaveDriver<void, ElmoMotorDriver402Adapter> driver2(exec, master, 2);
    lely_modm::SlaveDriver<ElmoMotorDriver302UserAdapter, ElmoMotorDriver402UserAdapter> driver(exec, master, 2);

    /// register some CiA302 specific callbacks for nmt state transitions, so that
    /// we can trigger CiA402 functions (like homing etc) based on these events.
    /// we could do something else to implement this event handling or functional
    /// guarding between these two profile adapters (cia302 & cia402), but this
    /// seems more convinient for now
    driver.getCiA302Adapter().registerOnPreOperationalCallback([&]() {
        /// do something spectacular
        MODM_LOG_INFO << "Homing Ongoing ..." << modm::endl;
        bool success = false;
        //   do {
        //       success = cia402.homing();
        //       if (!success) {
        //           MODM_LOG_INFO << "Homing failed" << modm::endl;
        //       }
        //   } while (!success);
        MODM_LOG_INFO << "Homing successful" << modm::endl;
    });

    /// this specific Elmo implementation can register a callback when a problem occurs, this
    /// has nothing to do with the CiA402 specs and isa pure user based design decision
    driver.getProfileAdapter().registerUserProblemCallback(
        [](const ElmoMotorDriver402UserAdapter::ProblemData* p, ElmoMotorDriver402UserAdapter* d) {
            (void)d;
            ElmoMotorDriver402UserAdapter::Problem result = ElmoMotorDriver402UserAdapter::Problem::SUCCESS;
            if (p->id != ElmoMotorDriver402UserAdapter::Problem::SUCCESS) {
                std::string str(p->description.data(), p->description.data_end());
                MODM_LOG_INFO << str.c_str() << modm::endl;
            }
            return result;
        });

    /// reset master and all its slaves by sending a 'reset node' command
    master.Reset();
#else
    MODM_LOG_INFO << "SLAVE" << modm::endl;
    /// create slave object using static generated eds device destription
    deviceDescription = MySlave1_init();
    // Create a CANopen slave with node-ID 2.
    // MySlave slave(exec, timer, chan, deviceDescription, 2);
    MyCiA402Slave slave(exec, timer, chan, deviceDescription, 2u);
    // Start the NMT services of the slave and master by pretending to receive a 'reset node' command
    slave.Reset();
#endif

    /// main application code starts here
    MODM_LOG_INFO << "Lets goooo :)" << modm::endl;
    // Busy loop without polling.
    /*
            TestTask tasks[6] = {
                    TestTask(5s, lely::canopen::NmtCommand::STOP),
                    TestTask(10s, lely::canopen::NmtCommand::START),
                    TestTask(15s, lely::canopen::NmtCommand::RESET_COMM),
                    TestTask(20s, lely::canopen::NmtCommand::RESET_NODE),
                    TestTask(25s, lely::canopen::NmtCommand::ENTER_PREOP),
                    TestTask(30s, lely::canopen::NmtCommand::START)
            };

            lely::canopen::NmtCommand goTo;
    */
    while (true) {
        /// Update the internal clocks of the timers.
        const auto now = modm::Clock::now();
        auto lelyNow = lely::io::Clock::time_point(now.time_since_epoch());
        timer.get_clock().settime(lelyNow);

        /// read can messages from driver
        modm::can::Message modmMsg;
        if (con.read(modmMsg)) {
            /// create a lely can message and covert the modm message to it
            can_msg lelyMsg;
            convert_can_msg(modmMsg, lelyMsg);
            /// add the converted lely message to the lely input buffer via the lely executor
            chan.get_executor().post([=, &chan]() { chan.on_read(&lelyMsg); });
        }
        /*
                        #if CANOPEN_MASTER == 1
                                for (size_t i = 0; i < 6; ++i){
                                        if (tasks[i].checkTimeout(goTo)){
                                                master.Command(goTo);
                                                break;
                                        }
                                }
                        #endif
        */

        /// Execute all pending tasks without waiting.
        if (loop.poll()) {
            /// do nothing for now
        }
    }
    return 0;
}
