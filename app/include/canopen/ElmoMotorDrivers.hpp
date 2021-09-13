#pragma once

#include <modm/board.hpp>
#include <modm/processing/timer/timeout.hpp>

#include <etl/delegate.h>
#include <etl/set.h>
#include <etl/string.h>
#include <etl/unordered_map.h>

#include <chrono>
using namespace std::chrono_literals;

#include <include/canopen/cia302/CiA302Profile.hpp>
#include <include/canopen/cia402/CiA402Profile.hpp>

/// ###########################################
/// #####     Profile CiA302 Adapter      #####
/// ###########################################
class ElmoMotorDriver302UserAdapter : public CiA302::ProfileImpl<ElmoMotorDriver302UserAdapter> {
public:
    using P = ElmoMotorDriver302UserAdapter;
    /// copy parent class constructorElmoMotorDriver
    using CiA302::ProfileImpl<P>::ProfileImpl;

    void OnCanState(lely::io::CanState new_state, lely::io::CanState old_state) noexcept {
        (void)new_state;
        (void)old_state;
    }
    void OnCanError(lely::io::CanError error) noexcept { (void)error; }
    // This function gets called every time a value is written to the local object
    // dictionary of the master by an RPDO (or SDO, but that is unlikely for a
    // master), *and* the object has a known mapping to an object on the slave for
    // which this class is the driver. The 'idx' and 'subidx' parameters are the
    // object index and sub-index of the object on the slave, not the local object
    // dictionary of the master.
    void OnRpdoWrite(uint16_t idx, uint8_t subidx) noexcept {
        if (idx == 0x4001 && subidx == 0) {
            // Obtain the value sent by PDO from object 4001:00 on the slave.
            // Increment the value and store it to an object in the local object
            // dictionary that will be sent by TPDO to object 4000:00 on the slave.
            auto value = this->getDriver().receiveSync<uint16_t>(idx, subidx);
            this->getDriver().sendSync<uint32_t>(0x4000, 0, ++value);
            MODM_LOG_INFO << "[Master] OnRpdoWrite() " << value << modm::endl;
        }
    }
    void OnCommand(lely::canopen::NmtCommand cs) noexcept { (void)cs; }
    void OnHeartbeat(bool occurred) noexcept { (void)occurred; }
    void OnState(lely::canopen::NmtState st) noexcept { (void)st; }
    void OnSync(uint8_t cnt, const lely::canopen::DriverBase::time_point& t) noexcept {
        (void)cnt;
        (void)t;
    }
    void OnSyncError(uint16_t eec, uint8_t er) noexcept {
        (void)eec;
        (void)er;
    }
    void OnTime(const ::std::chrono::system_clock::time_point& abs_time) noexcept { (void)abs_time; }
    void OnEmcy(uint16_t eec, uint8_t er, uint8_t msef[5]) noexcept {
        (void)eec;
        (void)er;
        (void)msef;
    }
    void OnNodeGuarding(bool occurred) noexcept { (void)occurred; }
    // This function gets called when the boot-up process of the slave completes.
    // The 'st' parameter contains the last known NMT state of the slave
    // (typically pre-operational), 'es' the error code (0 on success), and 'what'
    // a description of the error, if any.
    void OnBoot(lely::canopen::NmtState st, char es, const std::string& what) noexcept {
        if (!es || es == 'L') {
            MODM_LOG_INFO << "slave " << static_cast<int>(this->getDriver().id())
                          << " booted sucessfully [NMT:" << static_cast<int>(st) << "]" << modm::endl;
        } else {
            MODM_LOG_INFO << "slave " << static_cast<int>(this->getDriver().id())
                          << " failed to boot [NMT:" << static_cast<int>(st) << "] : " << what.c_str() << modm::endl;
        }
    }
    // This function gets called during the boot-up process for the slave. The
    // 'res' parameter is the function that MUST be invoked when the configuration
    // is complete. Because this function runs as a task inside a coroutine, it
    // can suspend itself and wait for an asynchronous function, such as an SDO
    // request, to complete.
    void OnConfig(std::function<void(std::error_code ec)> res) noexcept {
        try {
            // Perform a few SDO write requests to configure the slave. The
            // AsyncWrite() function returns a future which becomes ready once the
            // request completes, and the Wait() function suspends the coroutine for
            // this task until the future is ready.

            // Configure the slave to monitor the heartbeat of the master (node-ID 1)
            // with a timeout of 2000 ms.
            this->sendAsync<uint32_t>(CiA302::CiA302DictionaryIDs::HeartbeatConsumerRate, (1 << 16) | 2000);
            // Configure the slave to produce a heartbeat every 1000 ms.
            this->sendAsync<uint16_t>(CiA302::CiA302DictionaryIDs::HeartbeatProducerRate, 1000);
            // Configure the heartbeat consumer on the master.
            this->getDriver().ConfigHeartbeat(2000ms);

            // Reset object 4000:00 and 4001:00 on the slave to 0.
            this->getDriver().sendAsync<uint32_t>(0x4000, 0, 0);
            this->getDriver().sendAsync<uint16_t>(0x4001, 0, 0);

            // Report success (empty error code).
            res({});
        } catch (lely::canopen::SdoError& e) {
            // If one of the SDO requests resulted in an error, abort the
            // configuration and report the error code.
            res(e.code());
        }
    }
    // This function is similar to OnConfg(), but it gets called by the
    // AsyncDeconfig() method of the master. It starts the
    // deconfiguration process for all registered logical device drivers.
    void OnDeconfig(std::function<void(std::error_code ec)> res) noexcept {
        try {
            // Disable the heartbeat consumer on the master.
            this->getDriver().ConfigHeartbeat(0ms);
            // Disable the heartbeat producer on the slave.
            this->sendAsync(CiA302::CiA302DictionaryIDs::HeartbeatProducerRate, static_cast<uint16_t>(0));
            // Disable the heartbeat consumer on the slave.
            this->sendAsync(CiA302::CiA302DictionaryIDs::HeartbeatConsumerRate, static_cast<uint32_t>(0));
            res({});
        } catch (lely::canopen::SdoError& e) { res(e.code()); }
    }
};

/// ###########################################
/// #####     Profile CiA402 Adapter      #####
/// ###########################################
class ElmoMotorDriver402UserAdapter : public CiA402::ProfileImpl<ElmoMotorDriver402UserAdapter> {
public:
    using P = ElmoMotorDriver402UserAdapter;

    enum class Problem : unsigned int { SUCCESS, FAULT_ACKNOWLEDGEMENT_UNSUCCESSFUL };

    using ProblemString = etl::string<255>;

    struct ProblemData {
        P::Problem id;
        ProblemString description;
        // etl::delegate<void(void)>; /// suggested action
    };
    using ProblemLookupDict_t = etl::unordered_map<P::Problem, P::ProblemData, 16, 16, CiA402::EnumClassHash>;

    const static inline P::ProblemLookupDict_t ProblemLookupDict {
        { { P::Problem::SUCCESS, ProblemData { P::Problem::SUCCESS, ProblemString { "" } } },
          { P::Problem::FAULT_ACKNOWLEDGEMENT_UNSUCCESSFUL,
            ProblemData { P::Problem::FAULT_ACKNOWLEDGEMENT_UNSUCCESSFUL,
                          ProblemString { "Unable to properly resolve CiA402 fault state\n\0" } } } }
    };

    using ProblemCallback_t = etl::delegate<P::Problem(const P::ProblemData*, P*)>;

public:
    /// copy parent class constructorElmoMotorDriver
    using CiA402::ProfileImpl<P>::ProfileImpl;

    /// user code interfacing functions for handling this class
    void enable() {
        // this->enable_ = true;
        // this->doSwitchOn();
    }
    void disable() {
        // this->enable_ = false;
        // this->doQuickStop();
    }
    bool inputTorque(float torque, bool driveBackwards = false) {
        bool success = false;
        if (this->enable_) {
            if (!driveBackwards) {
                this->setTargetTorque(torque);
                success = true;
            } else {
                this->setTargetTorque(torque * -1.0);
                success = true;
            }
        }
        return success;
    }

    void registerUserProblemCallback(const ProblemCallback_t cb) { this->userProblemCallback_ = cb; }

    /// #######################################################################
    /// #######              cia402 state machine event api            ########
    /// #######################################################################
    bool onOperationEnabled(const CiA402::EventData& e) override {
        (void)e;
        MODM_LOG_INFO << "==============================\n[Master] onOperationEnabled\n==============================" << modm::endl;
        return true;
    }

    bool onSwitchOnDisabled(const CiA402::EventData& e) override {
        (void)e;
        MODM_LOG_INFO << "==============================\n[Master] onSwitchOnDisabled\n==============================" << modm::endl;
        return true;
    }

    bool onReadyToSwitchOn(const CiA402::EventData& e) override {
        (void)e;
        MODM_LOG_INFO << "==============================\n[Master] onReadyToSwitchOn\n==============================" << modm::endl;
        return true;
    }

    bool onSwitchedOn(const CiA402::EventData& e) override {
        (void)e;
        MODM_LOG_INFO << "==============================\n[Master] onSwitchedOn\n==============================" << modm::endl;
        return true;
    }

    bool onFaultState(const CiA402::EventData& e) override {
        MODM_LOG_INFO << "==============================\n[Master] onFaultState\n==============================" << modm::endl;
        bool fixable = true;
        bool success = false;
        /// implement fault reaction strategy
        if (e.errorOccured) {
            for (size_t i = 0; i < e.errorCount; i++) {
                CiA402::Error error = e.errors[i];
                switch (error) {
                case CiA402::Error::NO_ERROR:
                    /* code */
                    break;

                default:
                    break;
                }
            }
            if (fixable) {
                modm::Timeout timeout { 5000ms };
                while (!timeout.isExpired()) {
                    if (this->doFaultReset()) {
                        bool ackFaultState = this->doEnableOperation();
                        if (ackFaultState) {
                            success = true;
                            break;
                        } else {
                            /// this did not work, maybe next time will work
                        }
                    }
                }

                if (timeout.isExpired()) {
                    /// we are very unhappy, notify user code
                    this->reportProblem(P::Problem::FAULT_ACKNOWLEDGEMENT_UNSUCCESSFUL);
                }
            }
        }

        return success;
    }

    bool homing() {
        // CiA402Profile::HomingMethods::HomingMethod currentConfiguredMethod = this->getHomingMethod();
        float homingOffsetMoveDistance = 0.0f;
        float homingSpeed = 0.0f;
        float homingAcceleration = 0.0f;
        float homingPosition = 0.0f;
        float currentThreshold = 0.0f;

        CiA402::HomingMethods::CurrentThresholdPositiveSpeed method(
            homingOffsetMoveDistance, homingSpeed, homingAcceleration, homingPosition, currentThreshold);
        /// trigger CiA402 homing operation
        bool success = this->doHoming(method); /// for brakes
        return success;
    }
    void reportProblem(P::Problem problem) {
        auto it = this->ProblemLookupDict.find(problem);
        if (it != this->ProblemLookupDict.end()) {
            const P::ProblemData* pdata = &(it->second);
            if (this->userProblemCallback_.is_valid())
                this->userProblemCallback_(pdata, this);
        }
    }

private:
    bool enable_ = false;
    ProblemCallback_t userProblemCallback_;
};
