#pragma once

#include <modm/board.hpp>
using namespace Board;

#include <chrono>
#include <time.h>

#include <lely/io2/sys/clock.hpp>


using namespace modm::chrono;


constexpr std::chrono::nanoseconds timespecToDuration(timespec ts)
{
    auto duration = std::chrono::seconds{ts.tv_sec} 
        + std::chrono::nanoseconds{ts.tv_nsec};

    return std::chrono::duration_cast<std::chrono::nanoseconds>(duration);
}

constexpr timespec durationToTimespec(std::chrono::nanoseconds dur)
{
    auto secs = std::chrono::duration_cast<std::chrono::seconds>(dur);
    dur -= secs;

    return timespec{secs.count(), dur.count()};
}

constexpr std::chrono::time_point<modm::chrono::micro_clock, std::chrono::nanoseconds> timespecToTimePoint(timespec ts)
{
    return std::chrono::time_point<modm::chrono::micro_clock, std::chrono::nanoseconds>{
        std::chrono::duration_cast<modm::chrono::micro_clock::duration>(timespecToDuration(ts))};
}

constexpr timespec timepointToTimespec(std::chrono::time_point<modm::chrono::micro_clock, std::chrono::nanoseconds> tp)
{
    auto secs = std::chrono::time_point_cast<std::chrono::seconds>(tp);
    auto ns = std::chrono::time_point_cast<std::chrono::nanoseconds>(tp) -
             std::chrono::time_point_cast<std::chrono::nanoseconds>(secs);

    return timespec{secs.time_since_epoch().count(), ns.count()};
}


int clock_gettime(clockid_t clock_id, struct timespec *tp)
{
	uint32_t priMask = __get_PRIMASK();
	__disable_irq();
    auto now = modm::chrono::micro_clock::now();
	*tp = timepointToTimespec(now);
	__set_PRIMASK(priMask);

	return 0;
}

int clock_getres(clockid_t clock_id, struct timespec *tp)
{
	uint32_t tick = SysTick->LOAD + 1;
	uint32_t freq = SystemCoreClock;
	*tp = (struct timespec){
		tick / freq,
		((long)(tick % freq) / (freq / 1000000)) * 1000
	};
	return 0;
}


int clock_settime(clockid_t clock_id, const struct timespec *tp)
{
    /// kikass13
    /// impossible with modm::chrono timers?!

    /// old copy pasted solution from lely example using rtlib below

	// if (clock_id != CLOCK_REALTIME || tp->tv_nsec < 0
	// 		|| tp->tv_nsec > 1000000000l) {
	// 	errno = EINVAL;
	// 	return -1;
	// }

	// uint32_t priMask = __get_PRIMASK();
	// __disable_irq();

	// __librt_realtime.tv_sec = tp->tv_sec - __librt_monotonic.tv_sec;
	// __librt_realtime.tv_nsec = tp->tv_nsec - __librt_monotonic.tv_nsec;
	// if (__librt_realtime.tv_nsec < 0) {
	// 	__librt_realtime.tv_sec--;
	// 	__librt_realtime.tv_nsec += 1000000000l;
	// } else if (__librt_realtime.tv_nsec >= 1000000000l) {
	// 	__librt_realtime.tv_sec++;
	// 	__librt_realtime.tv_nsec -= 1000000000l;
	// }

	// __set_PRIMASK(priMask);

	return 0;
}
