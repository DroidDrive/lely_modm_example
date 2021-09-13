#pragma once

#include <chrono>
#include <modm/board.hpp>
#include <type_traits>

using namespace std::chrono_literals;

#include <include/canopen/SlaveDriver.hpp>

#include <etl/delegate.h>
#include <etl/set.h>
#include <etl/string.h>
#include <etl/unordered_map.h>

namespace CiA402 {

/// functor used for hashing enum class types,
/// which is necessary when using etl maps and such
struct EnumClassHash {
    template <typename T> std::size_t operator()(T t) const { return static_cast<std::size_t>(t); }
};

template <typename E> constexpr auto to_underlying(E e) noexcept { return static_cast<std::underlying_type_t<E>>(e); }

enum class NodeType : uint8_t { Master = 0x00, Slave = 0x01 };

enum class CiA402DictionaryIDs : uint16_t {
    ModesOfOperation = 0x6060,
    HomingMethod = 0x6098,
    HomingOffsetMoveDistance = 0x30B1,
    HomingSpeed = 0x6099,
    HomingAcceleration = 0x609A,
    HomingPosition = 0x30B0,
    CurrentThreshold = 0x30B2,
    QuickStopDeceleration = 0x6085,
    ControlWord = 0x6040,
    StatusWord = 0x6041,
    InterpolationTimePeriod = 0x60C2,
    ActualTorque = 0x6077,
    ActualVelocity = 0x606C,
    ActualPosition = 0x6064,
    TargetTorque = 0x6071,
    TargetVelocity = 0x60ff,
    TargetPosition = 0x607a
};

struct CiA402DictionaryEntry {
    std::uint8_t subindex;
    std::uint8_t size; // [bytes]
};

const static etl::unordered_map<CiA402::CiA402DictionaryIDs, CiA402::CiA402DictionaryEntry, 11, 11, EnumClassHash>
    CiA402LookupDict {
        { CiA402::CiA402DictionaryIDs::ModesOfOperation, { 0x00, 1 } },
        { CiA402::CiA402DictionaryIDs::HomingMethod, { 0x00, 1 } },
        { CiA402::CiA402DictionaryIDs::HomingOffsetMoveDistance, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::HomingSpeed, { 0x01, 4 } },
        { CiA402::CiA402DictionaryIDs::HomingAcceleration, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::HomingPosition, { 0x00, 2 } },
        { CiA402::CiA402DictionaryIDs::CurrentThreshold, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::QuickStopDeceleration, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::ControlWord, { 0x00, 2 } },
        { CiA402::CiA402DictionaryIDs::StatusWord, { 0x00, 2 } },
        { CiA402::CiA402DictionaryIDs::InterpolationTimePeriod, { 0x01, 1 } },
        { CiA402::CiA402DictionaryIDs::StatusWord, { 0x00, 2 } },
        { CiA402::CiA402DictionaryIDs::ActualTorque, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::ActualVelocity, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::ActualPosition, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::TargetTorque, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::TargetVelocity, { 0x00, 4 } },
        { CiA402::CiA402DictionaryIDs::TargetPosition, { 0x00, 4 } },
    };

/*
Not ready to switch on	xxxx xxxx x00x 0000	Drive function is disabled
Switch on disabled	xxxx xxxx x10x 0000	Drive initialization is complete. Drive parameters may be changed. Drive
function is disabled.
Ready to switch on	xxxx xxxx x01x 0001	Drive parameters may be changed. Drive function is disabled.
Switched on	xxxx xxxx x01x 0011	Drive function is disabled. Current offset calibration done.
Operation enabled	xxxx xxxx x01x 0111	No faults have been detected. Drive function is enabled and power is
applied to the motor.
Quick stop active	xxxx xxxx x00x 0111	«Quick stop» function is being executed. Drive function is enabled and
power is applied to the motor.
Fault reaction active	xxxx xxxx x00x 1111	A fault has occured in the drive. Selected fault reaction is being
executed. Fault	xxxx xxxx x00x 1000	A fault has occured in the drive. Drive parameters may have changed. Drive
function is disabled.
*/

enum class State : uint16_t {
    None = 0xffff,
    NotReadyToSwitchOn = 0x0000,
    SwitchOnDisabled = 0x0040,
    ReadyToSwitchOn = 0x0021,
    SwitchedOn = 0x0023,
    OperationEnabled = 0x0027,
    QuickStopActive = 0x0007,
    FaultReactionActive = 0x000f,
    Fault = 0x0008
};

/*
Shutdown	0xxx x110	                2, 6, 8
Switch on	0xxx x111	                3
Switch on & Enable operation 0xxx 1111	3, 4 (*1)
Disable voltage	0xxx xx0x	            7, 9, 10, 12
Quick stop	0xxx x01x	                11
Disable operation	0xxx 0111	        5
Enable operation	0xxx 1111	        4, 16
Fault reset	0xxx xxxx -> 1xxx xxxx	    14, 15
*/
enum class ControlWord : uint16_t {
    None = 0xffff,
    Shutdown = 0x0006,
    SwitchOn = 0x0007,
    // SwitchOnEnableOperation = 0x000f,
    DisableVoltage = 0x0000,
    QuickStop = 0x0002,
    DisableOperation = 0x0006,
    EnableOperation = 0x000f,
    FaultReset = 0x0080
};

enum class OperationMode : uint16_t {
    ProfilePositionMode = 0x01,
    ProfileVelocityMode = 0x03,
    HomingMode = 0x06,
    CyclicSynchronousPositionMode = 0x08,
    CyclicSynchronousVelocityMode = 0x09,
    CyclicSynchronousTorqueMode = 0x0A
};

class StateFactory {
public:
    constexpr static uint16_t STATEMASK = 0x006f;
    constexpr static State create(unsigned int sw) { return State(sw & STATEMASK); }
};

class ControlWordFactory {
public:
    constexpr static ControlWord create(unsigned int cw) {
        if ((cw & 0x0087) == to_underlying(ControlWord::Shutdown))
            return ControlWord::Shutdown;
        else if ((cw & 0x008f) == to_underlying(ControlWord::EnableOperation))
            return ControlWord::EnableOperation;
        else if ((cw & 0x0087) == to_underlying(ControlWord::SwitchOn))
            return ControlWord::SwitchOn;
        else if ((cw & 0x0082) == to_underlying(ControlWord::DisableVoltage))
            return ControlWord::DisableVoltage;
        else if ((cw & 0x0086) == to_underlying(ControlWord::QuickStop))
            return ControlWord::QuickStop;
        else if ((cw & 0x008f) == to_underlying(ControlWord::DisableOperation))
            return ControlWord::DisableOperation;
        else if ((cw & 0x0080) == to_underlying(ControlWord::FaultReset))
            return ControlWord::FaultReset;
        else
            return ControlWord::None;
    }
};

template <class ProfileImpl> class ProfileAdapter {
public:
    ProfileAdapter(const lely_modm::Driver& driver)
        : driver_ { driver } { }

public:
    void OnCanState(lely::io::CanState new_state, lely::io::CanState old_state) noexcept {
        (void)new_state;
        (void)old_state;
    }
    void OnCanError(lely::io::CanError error) noexcept { (void)error; }
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
    void OnBoot(lely::canopen::NmtState st, char es, const std::string& what) noexcept {
        (void)st;
        (void)es;
        (void)what;
    }
    void OnConfig(std::function<void(std::error_code ec)> res) noexcept { (void)res; }
    void OnDeconfig(std::function<void(std::error_code ec)> res) noexcept { (void)res; }
    void OnRpdoWrite(uint16_t idx, uint8_t subidx) noexcept {
        (void)subidx;
        switch (idx) {
        case to_underlying(CiA402DictionaryIDs::StatusWord): {
            // template keyword required here for some reason... y u mad, compiler?
            auto val = this->getDriver().template receiveSync<uint16_t>(idx, subidx);
            CiA402::State s = CiA402::StateFactory::create(val);
            /// set new state to state machine (because we have read a new statusword)
            /// and also notify the user code, that a state change happened
            /// as well as finding out if a proper next control word should be sent
            /// automatically
            static_cast<ProfileImpl*>(this)->getStateMachine().applyStateTransition(s);
            break;
        }
        default: {
            break;
        }
        }
    }

public:
    /// return a reference to driver and also remove its const
    lely_modm::Driver& getDriver() const { return const_cast<lely_modm::Driver&>(this->driver_); }

private:
    const lely_modm::Driver& driver_;
};

enum class Error : uint16_t { NO_ERROR = 0x0000, XOXO = 0x1337 };

struct EventData {
    bool errorOccured = false;
    CiA402::Error errors[10] = { CiA402::Error::NO_ERROR };
    size_t errorCount;
};

/// forward declaration of Profile class
template <class UseCaseAdapter> class ProfileImpl;

/// state machine class implementation
template <class Context, CiA402::NodeType TYPE = CiA402::NodeType::Master> class StateMachine {

    using P = Context;

    /// type aliases for internal TransitionData types
    using StateTransitionSet = etl::set<State, 4>;
    using StateEventFunction = etl::delegate<bool(P&, const EventData&)>;

    /// data holder for TransitionData inside Transition Dict
    struct ControlWordData {
        StateTransitionSet sourceStates;
        CiA402::State targetState;
        uint16_t mask;
    };
    struct StateChangeData {
        CiA402::ControlWord nextPositiveControlWord;
        StateEventFunction eventFunction;
    };

    /// type alias for transition dict and state event dict
    using ControlWordLookupDict_t = etl::unordered_map<CiA402::ControlWord, ControlWordData, 7, 7, EnumClassHash>;
    using StateEventLookupDict_t = etl::unordered_map<CiA402::State, StateChangeData, 8, 8, EnumClassHash>;

    const static inline ControlWordLookupDict_t ControlWordLookupDict {
        { { ControlWord::Shutdown,
            ControlWordData { StateTransitionSet { CiA402::State::SwitchOnDisabled,
                                                   CiA402::State::SwitchedOn,
                                                   CiA402::State::OperationEnabled },
                              CiA402::State::ReadyToSwitchOn,
                              0x0087 } },
          { ControlWord::SwitchOn,
            ControlWordData {
                StateTransitionSet { CiA402::State::ReadyToSwitchOn }, CiA402::State::SwitchedOn, 0x0087 } },
          { ControlWord::DisableVoltage,
            ControlWordData { StateTransitionSet { CiA402::State::ReadyToSwitchOn,
                                                   CiA402::State::OperationEnabled,
                                                   CiA402::State::SwitchedOn,
                                                   CiA402::State::QuickStopActive },
                              CiA402::State::SwitchOnDisabled,
                              0x0082 } },
          { ControlWord::QuickStop,
            ControlWordData {
                StateTransitionSet { CiA402::State::OperationEnabled }, CiA402::State::QuickStopActive, 0x0086 } },
          { ControlWord::DisableOperation,
            ControlWordData {
                StateTransitionSet { CiA402::State::OperationEnabled }, CiA402::State::SwitchedOn, 0x008f } },
          { ControlWord::EnableOperation,
            ControlWordData { StateTransitionSet { CiA402::State::SwitchedOn, CiA402::State::QuickStopActive },
                              CiA402::State::OperationEnabled,
                              0x008f } },
          { ControlWord::FaultReset,
            ControlWordData { StateTransitionSet { CiA402::State::Fault }, CiA402::State::SwitchOnDisabled, 0x0080 } } }
    };

    const static inline StateEventLookupDict_t StateChangeLookupDict { {
        /// if we are in state NotReadyToSwitchOn, there is nothing the master can do because the slave's state from
        /// NotReadyToSwitchOn to SwitchOnDisabled must happen automatically -> The master will "wait" for the slave
        /// -> ControlWord::None
        { CiA402::State::NotReadyToSwitchOn,
          StateChangeData { CiA402::ControlWord::None,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onNotReadyToSwitchOn(e);
                            } } },
        { CiA402::State::ReadyToSwitchOn,
          StateChangeData { CiA402::ControlWord::SwitchOn,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onReadyToSwitchOn(e);
                            } } },
        { CiA402::State::SwitchedOn,
          StateChangeData { CiA402::ControlWord::EnableOperation,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onSwitchedOn(e);
                            } } },
        { CiA402::State::SwitchOnDisabled,
          StateChangeData { CiA402::ControlWord::Shutdown,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onSwitchOnDisabled(e);
                            } } },
        { CiA402::State::QuickStopActive,
          StateChangeData { CiA402::ControlWord::None,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onQuickStop(e);
                            } } },
        { CiA402::State::OperationEnabled,
          StateChangeData { CiA402::ControlWord::None,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onOperationEnabled(e);
                            } } },
        { CiA402::State::FaultReactionActive,
          StateChangeData { CiA402::ControlWord::None,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onFaultReaction(e);
                            } } },
        { CiA402::State::Fault,
          StateChangeData { CiA402::ControlWord::FaultReset,
                            [](P& ctx, const CiA402::EventData& e) mutable {
                                if constexpr (TYPE == CiA402::NodeType::Master)
                                    return ctx.onFaultState(e);
                            } } },
    } };

public:
    StateMachine(const P& ctx, CiA402::State s = CiA402::State::None)
        : state_ { s }
        , context_ { ctx } { }

    bool transit(CiA402::ControlWord c) {
        bool success = false;
        if (c == CiA402::ControlWord::None)
            return false;
        auto s = this->getCurrentState();
        /// find control command in dict
        auto it = StateMachine::ControlWordLookupDict.find(c);
        if (it != StateMachine::ControlWordLookupDict.end()) {
            const ControlWordData& data = it->second;
            /// are we in a valid state for this command?
            const StateTransitionSet& plausibleSourceStates = data.sourceStates;
            auto nextStateIt = plausibleSourceStates.find(s);
            if (nextStateIt != plausibleSourceStates.end()) {
                /// MASTER ONLY
                ///     signalize state change attempt by sending control word
                ///     we cannot set the state in our state machien here directly, because
                ///     this can only happen if we succesfully receive a status word from
                ///     the slave node.
                if constexpr (TYPE == CiA402::NodeType::Master) {
                    this->getContext().setControlWord(c);
                }
                /// SLAVE ONLY
                ///     set the state inside the state machine directly, because
                ///     we are essentially the slave node and should therefore
                ///     apply the state that is appropriate to the received
                ///     controlword.
                ///     signalize succesful state transition as an event
                else {
                    this->setCurrentState(data.targetState);
                    this->getContext().onStateTransition(data.targetState);
                }
                /// dont do this here, we want to asyncwrite the next state and do this on receive
                /// this is only for debugging
                // stateChangedEvent();
                success = true;
            }
        }
        return success;
    }

    const CiA402::State& getCurrentState() const { return this->state_; }
    void applyStateTransition(const CiA402::State& s) {
        bool stateIsNew = this->setCurrentState(s);
        if (stateIsNew){
            this->stateChangedEvent(s);
        }
    }
    bool setCurrentState(const CiA402::State& s) {
        bool isNew = false;
        if (s != this->getCurrentState()) {
           this->state_ = s;
           isNew = true;
        }
        return isNew;
    }
    P& getContext() const { return const_cast<P&>(this->context_); }

private:
    void stateChangedEvent(const CiA402::State& s) {
        bool autoTransitToNextState = false;
        /// find current state and it's corresponding event handler
        auto it = StateMachine::StateChangeLookupDict.find(s);
        if (it != StateMachine::StateChangeLookupDict.end()) {
            const StateChangeData& t = it->second;
            const StateEventFunction& f = t.eventFunction;
            /// create usefull eventdata here ... if possible
            /// for now, just create an empty construct
            EventData e;
            if (f.is_valid()) {
                autoTransitToNextState = f(this->getContext(), e);
                if (autoTransitToNextState) {
                    /// find control word which can be used to match the state
                    this->transit(t.nextPositiveControlWord);
                }
            }
        }
    }

public:
private:
    State state_;
    const P& context_;
};

/// status word specific flags
class StatusWordSpecificFlags {
public:
    StatusWordSpecificFlags()
        : b9_(false)
        , b10_(false)
        , b11_(false)
        , b12_(false)
        , b13_(false)
        , b8_(false)
        , b14_(false)
        , b15_(false) { }
    StatusWordSpecificFlags(uint16_t sw)
        : b9_((sw >> 9) & 1U)
        , b10_((sw >> 10) & 1U)
        , b11_((sw >> 11) & 1U)
        , b12_((sw >> 12) & 1U)
        , b13_((sw >> 13) & 1U)
        , b8_((sw >> 8) & 1U)
        , b14_((sw >> 14) & 1U)
        , b15_((sw >> 15) & 1U) { }
    /// status word bits 9, 10, 11
    bool b9_;
    bool b10_;
    bool b11_;
    // operation mode specific 12,13
    bool b12_;
    bool b13_;
    // manufacteurer specific 8,14,15
    bool b8_;
    bool b14_;
    bool b15_;
};

/// operation mode specific flags
class ControlWordOperationModeSpecificFlags {
public:
    ControlWordOperationModeSpecificFlags()
        : b4_(false)
        , b5_(false)
        , b6_(false)
        , b8_(false) { }
    ControlWordOperationModeSpecificFlags(bool b4, bool b5, bool b6, bool b8)
        : b4_(b4)
        , b5_(b5)
        , b6_(b6)
        , b8_(b8) { }
    /// control word bits 4,5,6,8
    bool b4_;
    bool b5_;
    bool b6_;
    // 7_ fault reset, DO NOT USE
    bool b8_;
};
class OperationModeHomingFlags : public CiA402::ControlWordOperationModeSpecificFlags {
public:
    OperationModeHomingFlags(bool startHoming, bool halt)
        : ControlWordOperationModeSpecificFlags(startHoming, false, false, halt) { }
};
class OperationModeProfilePositionFlags : CiA402::ControlWordOperationModeSpecificFlags {
public:
    OperationModeProfilePositionFlags(bool newSetpoint, bool changeSetpointImmediately, bool absRel, bool halt)
        : ControlWordOperationModeSpecificFlags(newSetpoint, changeSetpointImmediately, absRel, halt) { }
};

namespace HomingMethods {
    class HomingMethod { };
    class CurrentThresholdPositiveSpeed : CiA402::HomingMethods::HomingMethod {
    public:
        CurrentThresholdPositiveSpeed(
            float homingOffsetMoveDistance, float homingSpeed, float homingAcceleration, float homingPosition,
            float currentThreshold)
            : homingOffsetMoveDistance_(homingOffsetMoveDistance)
            , homingSpeed_(homingSpeed)
            , homingAcceleration_(homingAcceleration)
            , homingPosition_(homingPosition)
            , currentThreshold_(currentThreshold) { }

    private:
        float homingOffsetMoveDistance_;
        float homingSpeed_;
        float homingAcceleration_;
        float homingPosition_;
        float currentThreshold_;
    };
} // namespace HomingMethods

template <class UseCaseAdapter>
class ProfileImpl : public CiA402::ProfileAdapter<CiA402::ProfileImpl<UseCaseAdapter>> {
private:
    using StateMachineT = StateMachine<ProfileImpl<UseCaseAdapter>>;
    using P = CiA402::ProfileAdapter<CiA402::ProfileImpl<UseCaseAdapter>>;
    friend P;
    friend StateMachineT;

public:
    ProfileImpl(lely_modm::Driver& driver)
        : P::ProfileAdapter(driver)
        , stateMachine_(*this) { }

protected:
    /// CiA402 state transistion setter function for user code
    bool doShutdown(CiA402::ControlWordOperationModeSpecificFlags flags = ControlWordOperationModeSpecificFlags()) {
        (void)flags;
        return this->getStateMachine().transit(CiA402::ControlWord::Shutdown);
    }
    bool doSwitchOn(CiA402::ControlWordOperationModeSpecificFlags flags = ControlWordOperationModeSpecificFlags()) {
        (void)flags;
        return this->getStateMachine().transit(CiA402::ControlWord::SwitchOn);
    }
    bool
    doDisableVoltage(CiA402::ControlWordOperationModeSpecificFlags flags = ControlWordOperationModeSpecificFlags()) {
        (void)flags;
        return this->getStateMachine().transit(CiA402::ControlWord::DisableVoltage);
    }
    bool doQuickStop(CiA402::ControlWordOperationModeSpecificFlags flags = ControlWordOperationModeSpecificFlags()) {
        (void)flags;
        return this->getStateMachine().transit(CiA402::ControlWord::QuickStop);
    }
    bool
    doDisableOperation(CiA402::ControlWordOperationModeSpecificFlags flags = ControlWordOperationModeSpecificFlags()) {
        (void)flags;
        return this->getStateMachine().transit(CiA402::ControlWord::DisableOperation);
    }
    bool
    doEnableOperation(CiA402::ControlWordOperationModeSpecificFlags flags = ControlWordOperationModeSpecificFlags()) {
        (void)flags;
        return this->getStateMachine().transit(CiA402::ControlWord::EnableOperation);
    }
    bool doFaultReset(CiA402::ControlWordOperationModeSpecificFlags flags = ControlWordOperationModeSpecificFlags()) {
        (void)flags;
        return this->getStateMachine().transit(CiA402::ControlWord::FaultReset);
    }

    /// CiA402 state transistion event handler for user code,
    /// return value (bool) defines wether or not the state machine should automatically attempts
    /// to switch to the next possbile state in the state diagram
    virtual bool onNotReadyToSwitchOn(const CiA402::EventData& e) {
        (void)e;
        return true;
    }
    virtual bool onSwitchOnDisabled(const CiA402::EventData& e) {
        (void)e;
        return true;
    }
    virtual bool onReadyToSwitchOn(const CiA402::EventData& e) {
        (void)e;
        return true;
    }
    virtual bool onSwitchedOn(const CiA402::EventData& e) {
        (void)e;
        return true;
    }
    virtual bool onOperationEnabled(const CiA402::EventData& e) {
        (void)e;
        return true;
    }
    virtual bool onQuickStop(const CiA402::EventData& e) {
        (void)e;
        return true;
    }
    virtual bool onFaultReaction(const CiA402::EventData& e) {
        (void)e;
        return true;
    }
    /// this can only be called when a state transition to fault is acknowledged after an EMCY message was received
    /// these EMCY messages (plural, multiple) have to be buffered until this event is fired
    virtual bool onFaultState(const CiA402::EventData& e) {
        (void)e;
        return false;
    }

    /// CiA402 register access functions (set & get) accessable via user code
    template <typename T> void setTargetPosition(const T& x) {
        this->sendSync(CiA402::CiA402DictionaryIDs::TargetPosition, x);
    }
    template <typename T> void setTargetVelocity(const T& x) {
        this->sendSync(CiA402::CiA402DictionaryIDs::TargetVelocity, x);
    }
    template <typename T> void setTargetTorque(const T& x) {
        this->sendSync(CiA402::CiA402DictionaryIDs::TargetTorque, x);
    }

    template <typename T> const T getActualPosition() {
        return this->receiveSync(CiA402::CiA402DictionaryIDs::ActualPosition);
    }
    template <typename T> const T getActualVelocity() {
        return this->receiveSync(CiA402::CiA402DictionaryIDs::ActualVelocity);
    }
    template <typename T> const T getActualTorque() {
        return this->receiveSync(CiA402::CiA402DictionaryIDs::ActualTorque);
    }

    void setControlWord(const CiA402::ControlWord& c) {
        this->sendSync(CiA402::CiA402DictionaryIDs::ControlWord, to_underlying(c));
    }

    using DecodedState = etl::pair<CiA402::State, CiA402::StatusWordSpecificFlags>;
    template <typename T> const DecodedState getStatusWord() {
        auto sw = this->receiveAsync(CiA402::CiA402DictionaryIDs::StatusWord);
        CiA402::State s = CiA402::StateFactory::create(sw);
        CiA402::StatusWordSpecificFlags flags(sw);
        return DecodedState { s, flags };
    }

    /// profile specific operational functions
    bool setOperationModeToHoming() {
        sendAsync(CiA402DictionaryIDs::ModesOfOperation, to_underlying(CiA402::OperationMode::HomingMode));
        return true;
    }
    bool setOperationMode2ProfilePosition() {
        sendAsync(CiA402DictionaryIDs::ModesOfOperation, to_underlying(CiA402::OperationMode::ProfilePositionMode));
        return true;
    }
    bool setOperationMode2ProfileVelocity() {
        sendAsync(CiA402DictionaryIDs::ModesOfOperation, to_underlying(CiA402::OperationMode::ProfileVelocityMode));
        return true;
    }
    bool setOperationMode2CyclicSynchronousPosition() {
        sendAsync(
            CiA402DictionaryIDs::ModesOfOperation, to_underlying(CiA402::OperationMode::CyclicSynchronousPositionMode));
        return true;
    }
    bool setOperationMode2CyclicSynchronousVelocity() {
        sendAsync(
            CiA402DictionaryIDs::ModesOfOperation, to_underlying(CiA402::OperationMode::CyclicSynchronousVelocityMode));
        return true;
    }
    bool setOperationMode2CyclicSynchronousTorque() {
        sendAsync(
            CiA402DictionaryIDs::ModesOfOperation, to_underlying(CiA402::OperationMode::CyclicSynchronousTorqueMode));
        return true;
    }
    /// ... other modes have to be 'extracted' from the CiA402

    /// CiA402 specific device operations
    bool doHoming(const CiA402::HomingMethods::CurrentThresholdPositiveSpeed& method) {
        bool success = false;
        /// do something with 'method' object to configure and setup the homing procedure
        /// ...
        (void)method;
        /// ...
        success = this->activateHomingProcedure();
        return success;
    }

    StateMachineT& getStateMachine() { return this->stateMachine_; }

private:
    bool activateHomingProcedure() {
        bool success = false;
        /// declare operational mode homing
        this->setOperationModeToHoming();
        /// activate operational state machine
        CiA402::OperationModeHomingFlags flags { .startHoming = true, .halt = false };
        if (this->doSwitchOn())
            success = this->doEnableOperation(flags);
        return success;
    }

    template <typename T> void sendSync(CiA402::CiA402DictionaryIDs did, const T& value) {
        auto it = CiA402LookupDict.find(did);
        if (it != CiA402LookupDict.end()) {
            const CiA402::CiA402DictionaryEntry& e = it->second;
            this->getDriver().sendSync(to_underlying(did), e.subindex, value);
        }
    }
    template <typename T> void sendAsync(CiA402::CiA402DictionaryIDs did, const T& value) {
        auto it = CiA402LookupDict.find(did);
        if (it != CiA402LookupDict.end()) {
            const CiA402::CiA402DictionaryEntry& e = it->second;
            this->getDriver().sendAsync(to_underlying(did), e.subindex, value);
            this->getDriver().sendAsync(to_underlying(did), e.subindex, std::move(value));
        }
    }

    template <typename T> T receiveSync(CiA402::CiA402DictionaryIDs did) {
        auto it = CiA402LookupDict.find(did);
        if (it != CiA402LookupDict.end()) {
            const CiA402::CiA402DictionaryEntry& e = it->second;
            return this->getDriver().receiveSync(to_underlying(did), e.subindex);
        }
    }
    template <typename T> T receiveAsync(CiA402::CiA402DictionaryIDs did) {
        auto it = CiA402LookupDict.find(did);
        if (it != CiA402LookupDict.end()) {
            const CiA402::CiA402DictionaryEntry& e = it->second;
            return this->getDriver().receiveASync(to_underlying(did), e.subindex);
        }
    }

private:
    StateMachineT stateMachine_;
};

} // end namespace CiA402
