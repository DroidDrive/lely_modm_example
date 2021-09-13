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

namespace CiA302 {

struct EnumClassHash {
    template <typename T> std::size_t operator()(T t) const { return static_cast<std::size_t>(t); }
};

template <typename E> constexpr auto to_underlying(E e) noexcept { return static_cast<std::underlying_type_t<E>>(e); }

enum class CiA302DictionaryIDs : uint16_t { HeartbeatConsumerRate = 0x1016, HeartbeatProducerRate = 0x1017 };

struct CiA302DictionaryEntry {
    std::uint8_t subindex;
    std::uint8_t size; // [bytes]
};

const static etl::unordered_map<CiA302::CiA302DictionaryIDs, CiA302::CiA302DictionaryEntry, 11, 11, EnumClassHash>
    CiA302LookupDict {
        { CiA302::CiA302DictionaryIDs::HeartbeatConsumerRate, { 0x01, 2 } },
        { CiA302::CiA302DictionaryIDs::HeartbeatProducerRate, { 0x00, 4 } },
    };

template <class ProfileImpl> class ProfileAdapter {
public:
    using UserCallback_t = etl::delegate<void(void)>;

    ProfileAdapter(const lely_modm::Driver& driver)
        : driver_ { driver } { }

    void OnCanState(lely::io::CanState new_state, lely::io::CanState old_state) noexcept {
        static_cast<ProfileImpl*>(this)->OnCanState(new_state, old_state);
    }
    void OnCanError(lely::io::CanError error) noexcept { }
    // This function gets called every time a value is written to the local object
    // dictionary of the master by an RPDO (or SDO, but that is unlikely for a
    // master), *and* the object has a known mapping to an object on the slave for
    // which this class is the driver. The 'idx' and 'subidx' parameters are the
    // object index and sub-index of the object on the slave, not the local object
    // dictionary of the master.
    void OnRpdoWrite(uint16_t idx, uint8_t subidx) noexcept {
        static_cast<ProfileImpl*>(this)->onRpdoWrite(idx, subidx);
    }
    void OnCommand(lely::canopen::NmtCommand cs) noexcept { static_cast<ProfileImpl*>(this)->OnCommand(cs); }
    void OnHeartbeat(bool occurred) noexcept { static_cast<ProfileImpl*>(this)->OnHeartbeat(occurred); }
    void OnState(lely::canopen::NmtState st) noexcept {
        static_cast<ProfileImpl*>(this)->OnState(st);
        /// call special user registrated callbacks if existing
        if (st == lely::canopen::NmtState::PREOP) {
            if (this->onPreOperational.is_valid())
                this->onPreOperational();
        } else if (st == lely::canopen::NmtState::START) {
            if (this->onOperational.is_valid())
                this->onOperational();
        } else if (st == lely::canopen::NmtState::STOP) {
            if (this->onStop.is_valid())
                this->onStop();
        }
    }
    void OnSync(uint8_t cnt, const lely::canopen::DriverBase::time_point& t) noexcept {
        static_cast<ProfileImpl*>(this)->OnSync(cnt, t);
    }
    void OnSyncError(uint16_t eec, uint8_t er) noexcept { static_cast<ProfileImpl*>(this)->OnSyncError(eec, er); }
    void OnTime(const ::std::chrono::system_clock::time_point& abs_time) noexcept { (void)abs_time; }
    void OnEmcy(uint16_t eec, uint8_t er, uint8_t msef[5]) noexcept {
        static_cast<ProfileImpl*>(this)->OnSync(eec, er, msef);
    }
    void OnNodeGuarding(bool occurred) noexcept { static_cast<ProfileImpl*>(this)->OnNodeGuarding(occurred); }
    // This function gets called when the boot-up process of the slave completes.
    // The 'st' parameter contains the last known NMT state of the slave
    // (typically pre-operational), 'es' the error code (0 on success), and 'what'
    // a description of the error, if any.
    void OnBoot(lely::canopen::NmtState st, char es, const std::string& what) noexcept {
        static_cast<ProfileImpl*>(this)->OnBoot(st, es, what);
    }
    // This function gets called during the boot-up process for the slave. The
    // 'res' parameter is the function that MUST be invoked when the configuration
    // is complete. Because this function runs as a task inside a coroutine, it
    // can suspend itself and wait for an asynchronous function, such as an SDO
    // request, to complete.
    void OnConfig(std::function<void(std::error_code ec)> res) noexcept {
        static_cast<ProfileImpl*>(this)->OnConfig(res);
    }
    // This function is similar to OnConfg(), but it gets called by the
    // AsyncDeconfig() method of the master. It starts the
    // deconfiguration process for all registered logical device drivers.
    void OnDeconfig(std::function<void(std::error_code ec)> res) noexcept {
        static_cast<ProfileImpl*>(this)->OnDeconfig(res);
    }

    /// return a reference to driver and also remove its const
    lely_modm::Driver& getDriver() const { return const_cast<lely_modm::Driver&>(this->driver_); }

    void registerOnPreOperationalCallback(UserCallback_t cb) { this->onPreOperational = cb; }
    void registerOnOperationalCallback(UserCallback_t cb) { this->onOperational = cb; }
    void registerOnStop(UserCallback_t cb) { this->onStop = cb; }

protected:
    template <typename T> void sendSync(CiA302::CiA302DictionaryIDs did, const T& value) {
        auto it = CiA302LookupDict.find(did);
        if (it != CiA302LookupDict.end()) {
            const CiA302::CiA302DictionaryEntry& e = it->second;
            this->getDriver().sendSync(to_underlying(did), e.subindex, value);
        }
    }
    template <typename T> void sendAsync(CiA302::CiA302DictionaryIDs did, const T& value) {
        auto it = CiA302LookupDict.find(did);
        if (it != CiA302LookupDict.end()) {
            const CiA302::CiA302DictionaryEntry& e = it->second;
            this->getDriver().sendAsync(to_underlying(did), e.subindex, value);
            this->getDriver().sendAsync(to_underlying(did), e.subindex, std::move(value));
        }
    }

    template <typename T> T receiveSync(CiA302::CiA302DictionaryIDs did) {
        auto it = CiA302LookupDict.find(did);
        if (it != CiA302LookupDict.end()) {
            const CiA302::CiA302DictionaryEntry& e = it->second;
            return this->getDriver().receiveSync(to_underlying(did), e.subindex);
        }
    }
    template <typename T> T receiveAsync(CiA302::CiA302DictionaryIDs did) {
        auto it = CiA302LookupDict.find(did);
        if (it != CiA302LookupDict.end()) {
            const CiA302::CiA302DictionaryEntry& e = it->second;
            return this->getDriver().receiveASync(to_underlying(did), e.subindex);
        }
    }

protected:
    UserCallback_t onPreOperational;
    UserCallback_t onOperational;
    UserCallback_t onStop;

private:
    const lely_modm::Driver& driver_;
};

/// define a profile implementation on top of the profile adapter ...
/// in the case of cia302, the implementation and the adapter are essentially the same
/// and will therefore be set equivalent here
template <class UseCaseAdapter> using ProfileImpl = ProfileAdapter<UseCaseAdapter>;

} // namespace CiA302