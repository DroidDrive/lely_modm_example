#pragma once

#include <chrono>
#include <modm/board.hpp>
using namespace std::chrono_literals;

#include <lely/coapp/fiber_driver.hpp>
#include <lely/coapp/master.hpp>

#include <etl/delegate.h>
#include <etl/set.h>
#include <etl/string.h>
#include <etl/unordered_map.h>

#include <tuple>
#include <type_traits>

namespace lely_modm {

class Driver : public lely::canopen::FiberDriver {
public:
    using FiberDriver::FiberDriver;

    template <typename T> void sendAsync(uint16_t idx, uint8_t subidx, T value) {
        this->Wait(AsyncWrite<T>(idx, subidx, std::move(value)));
    }
    template <typename T> T receiveAsync(uint16_t idx, uint8_t subidx) {
        auto future = this->Wait(AsyncRead<T>(idx, subidx));
        return future.get();
    }
    template <typename T> void sendSync(uint16_t idx, uint8_t subidx, T value) {
        this->tpdo_mapped[idx][subidx] = value;
    }
    template <typename T> T receiveSync(uint16_t idx, uint8_t subidx) { return this->rpdo_mapped[idx][subidx]; }
};

// Utility to select template parameter at index I
template <std::size_t I, class T> struct elementAt;
// recursive case
template <std::size_t I, class Head, class... Tail, template <typename...> class E>
struct elementAt<I, E<Head, Tail...>> : elementAt<I - 1, std::tuple<Tail...>> { };
// base case
template <class Head, class... Tail, template <typename...> class E> struct elementAt<0, E<Head, Tail...>> {
    using type = Head;
};
template <std::size_t I, class T> using elementAt_t = typename elementAt<I, T>::type;

/// SlaveDriverBase class which contains the adapter functions and acts as a mediator
/// between lely and the 302 & (other, 402) profiles
template <class Derived> class SlaveDriverBase : public lely_modm::Driver {
public:
    SlaveDriverBase(ev_exec_t* exec, lely::canopen::AsyncMaster& master, uint8_t id)
        : Driver(exec, master, id) { }

private:
    void OnCanState(lely::io::CanState new_state, lely::io::CanState old_state) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnCanState(new_state, old_state);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnCanState(new_state, old_state);
        }
    }

    void OnCanError(lely::io::CanError error) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnCanError(error);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnCanError(error);
        }
    }

    // This function gets called every time a value is written to the local object
    // dictionary of the master by an RPDO (or SDO, but that is unlikely for a
    // master), *and* the object has a known mapping to an object on the slave for
    // which this class is the driver. The 'idx' and 'subidx' parameters are the
    // object index and sub-index of the object on the slave, not the local object
    // dictionary of the master.
    void OnRpdoWrite(uint16_t idx, uint8_t subidx) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnRpdoWrite(idx, subidx);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnRpdoWrite(idx, subidx);
        }
    }

    void OnCommand(lely::canopen::NmtCommand cs) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnCommand(cs);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnCommand(cs);
        }
    }

    void OnHeartbeat(bool occurred) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnHeartbeat(occurred);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnHeartbeat(occurred);
        }
    }

    void OnState(lely::canopen::NmtState st) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnState(st);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnState(st);
        }
    }

    void OnSync(uint8_t cnt, const lely::canopen::DriverBase::time_point& t) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnSync(cnt, t);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnSync(cnt, t);
        }
    }

    void OnSyncError(uint16_t eec, uint8_t er) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnSyncError(eec, er);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnSyncError(eec, er);
        }
    }

    void OnTime(const ::std::chrono::system_clock::time_point& abs_time) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnTime(abs_time);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnTime(abs_time);
        }
    }

    void OnEmcy(uint16_t eec, uint8_t er, uint8_t msef[5]) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnEmcy(eec, er, msef);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnEmcy(eec, er, msef);
        }
    }

    void OnNodeGuarding(bool occurred) noexcept override { (void)occurred; }

    // This function gets called when the boot-up process of the slave completes.
    // The 'st' parameter contains the last known NMT state of the slave
    // (typically pre-operational), 'es' the error code (0 on success), and 'what'
    // a description of the error, if any.
    void OnBoot(lely::canopen::NmtState st, char es, const std::string& what) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnBoot(st, es, what);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnBoot(st, es, what);
        }
    }

    // This function gets called during the boot-up process for the slave. The
    // 'res' parameter is the function that MUST be invoked when the configuration
    // is complete. Because this function runs as a task inside a coroutine, it
    // can suspend itself and wait for an asynchronous function, such as an SDO
    // request, to complete.
    void OnConfig(std::function<void(std::error_code ec)> res) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnConfig(res);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnConfig(res);
        }
    }

    // This function is similar to OnConfg(), but it gets called by the
    // AsyncDeconfig() method of the master. It starts the
    // deconfiguration process for all registered logical device drivers.
    void OnDeconfig(std::function<void(std::error_code ec)> res) noexcept override {
        if constexpr (!std::is_void_v<elementAt_t<0, Derived>>) {
            static_cast<Derived*>(this)->getCiA302Adapter().OnDeconfig(res);
        }
        if constexpr (!std::is_void_v<elementAt_t<1, Derived>>) {
            static_cast<Derived*>(this)->getProfileAdapter().OnDeconfig(res);
        }
    }
};

/// template class for SlaveDriver
/// provides partly specializations for the class below, which has all the alternatives in it
///     SlaveDriver<CiA302Adapter, void>
///     SlaveDriver<void, CiA402Adapter>
///     SlaveDriver<CiA302Adapter, CiA402Adapter>
template <class CiA302Adapter, class Profile>
class SlaveDriver : public lely_modm::SlaveDriverBase<SlaveDriver<CiA302Adapter, Profile>> {
public:
    SlaveDriver(ev_exec_t* exec, lely::canopen::AsyncMaster& master, uint8_t id)
        : SlaveDriverBase<SlaveDriver>::SlaveDriverBase(exec, master, id)
        , cia302_(CiA302Adapter(*this))
        , profile_(Profile(*this)) { }

    CiA302Adapter& getCiA302Adapter() { return const_cast<CiA302Adapter&>(cia302_); }
    Profile& getProfileAdapter() { return const_cast<Profile&>(profile_); }

private:
    CiA302Adapter cia302_;
    Profile profile_;
};
/// partial specializations of SlaveDriver
/// ... where cia302 is present
template <class CiA302Adapter>
class SlaveDriver<CiA302Adapter, void> : public lely_modm::SlaveDriverBase<SlaveDriver<CiA302Adapter, void>> {
public:
    SlaveDriver(ev_exec_t* exec, lely::canopen::AsyncMaster& master, uint8_t id)
        : SlaveDriverBase<SlaveDriver>::SlaveDriverBase(exec, master, id)
        , cia302_(CiA302Adapter(*this)) { }
    CiA302Adapter& getCiA302Adapter() { return const_cast<CiA302Adapter&>(cia302_); }

private:
    CiA302Adapter cia302_;
};
/// ... where cia402 is present
template <class Profile> class SlaveDriver<void, Profile> : public lely_modm::SlaveDriverBase<SlaveDriver<void, Profile>> {
public:
    SlaveDriver(ev_exec_t* exec, lely::canopen::AsyncMaster& master, uint8_t id)
        : SlaveDriverBase<SlaveDriver>::SlaveDriverBase(exec, master, id)
        , profile_(Profile(*this)) { }
    Profile& getProfileAdapter() { return const_cast<Profile&>(profile_); }

private:
    Profile profile_;
};

} // end namespace lely_modm