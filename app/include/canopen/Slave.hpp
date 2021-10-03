#pragma once

#include <chrono>
#include <modm/board.hpp>
using namespace std::chrono_literals;

#include <lely/coapp/slave.hpp>

#include <include/canopen/cia402/CiA402Profile.hpp>

class MySlave : public lely::canopen::BasicSlave {
public:
    using BasicSlave::BasicSlave;

protected:
    // This function gets called every time a value is written to the local object
    // dictionary by an SDO or RPDO.
    void OnWrite(uint16_t idx, uint8_t subidx) noexcept override {
        if (idx == 0x4000 && subidx == 0) {
            // Read the value just written to object 4000:00, probably by RPDO 1.
            uint32_t val = (*this)[0x4000][0];
            // Copy it to object 4001:00, so that it will be sent by the next TPDO.
            (*this)[0x4001][0] = (uint16_t)val;
            (*this)[0x4002][0] = (uint16_t)val;
        }
    }
};

class MyCiA402Slave : public lely::canopen::BasicSlave {
private:
    using SlaveStateMachine = CiA402::StateMachine<MyCiA402Slave, CiA402::NodeType::Slave>;
    friend SlaveStateMachine;

public:
    MyCiA402Slave(
        ev_exec_t* exec, lely::io::TimerBase& timer, lely::io::CanChannelBase& chan, co_dev_t* staticDevice,
        uint8_t id = 0xff)
        : BasicSlave(exec, timer, chan, staticDevice, id)
        , stateMachine(*this, CiA402::State::SwitchOnDisabled) {
        this->onStateTransition(CiA402::State::SwitchOnDisabled);
    }

protected:
    // This function gets called every time a value is written to the local object
    // dictionary by an SDO or RPDO.
    void OnWrite(uint16_t idx, uint8_t subidx) noexcept override {
        switch (idx) {
        case CiA402::to_underlying(CiA402::CiA402DictionaryIDs::ControlWord): {
            uint16_t cw = (*this)[idx][subidx];
            CiA402::ControlWord controlWord = CiA402::ControlWordFactory::create(cw);
            if (stateMachine.transit(controlWord)) {
                MODM_LOG_INFO << "transit controlword " << CiA402::to_underlying(controlWord) << modm::endl;
            } else {
                // MODM_LOG_INFO << "controlword invalid" << modm::endl;
            }
            break;
        }
        case 0x4000: {
            if (subidx == 0) {
                // Read the value just written to object 4000:00, probably by RPDO 1.
                uint32_t val = (*this)[0x4000][0];
                // Copy it to object 4001:00, so that it will be sent by the next TPDO.
                (*this)[0x4001][0] = (uint16_t)val;
                (*this)[0x4002][0] = (uint16_t)val;
            }
            break;
        }
        default: {
            break;
        }
        }
    }

    /// this function is called by the state machine whenever a state was attempted to
    /// be changed, this is only necessary when we want to directly react to a state transition (only needed for slaves)
    /// so taht we can set the proper statusword register
    void onStateTransition(CiA402::State newState) {
        MODM_LOG_INFO << "State change to " << modm::hex << to_underlying(newState) << modm::endl;
        // write status word register in our local pdo to the newest state,
        // so that the master can see the state transition
        (*this)[CiA402::to_underlying(CiA402::CiA402DictionaryIDs::StatusWord)][0] = CiA402::to_underlying(newState);
    }

private:
    SlaveStateMachine stateMachine;
};
