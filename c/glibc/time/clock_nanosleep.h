#include <time.h>

//clock_nanosleep - high-resolution sleep with specifiable clock
int clock_nanosleep(clockid_t clock_id, int flags,
                       const struct timespec *request,
                       struct timespec *remain);

//Link with -lrt (only for glibc versions before 2.17).
//flags
//CLOCK_REALTIME   A settable system-wide real-time clock.
//
//CLOCK_MONOTONIC  A nonsettable, monotonically increasing clock that measures time since some  unspecified
//               point in the past that does not change after system startup.
//
//CLOCK_PROCESS_CPUTIME_ID
//               A  settable  per-process  clock  that  measures  CPU time consumed by all threads in the
//               process.



SYSCALL_DEFINE4(clock_nanosleep, const clockid_t, which_clock, int, flags,
		const struct __kernel_timespec __user *, rqtp,
		struct __kernel_timespec __user *, rmtp)
{
	const struct k_clock *kc = clockid_to_kclock(which_clock);
	struct timespec64 t;

	if (!kc)
		return -EINVAL;
	if (!kc->nsleep)
		return -EOPNOTSUPP;

	if (get_timespec64(&t, rqtp))
		return -EFAULT;

	if (!timespec64_valid(&t))
		return -EINVAL;
	if (flags & TIMER_ABSTIME)
		rmtp = NULL;
	current->restart_block.nanosleep.type = rmtp ? TT_NATIVE : TT_NONE;
	current->restart_block.nanosleep.rmtp = rmtp;

	return kc->nsleep(which_clock, flags, &t);
}

#ifdef CONFIG_COMPAT_32BIT_TIME

SYSCALL_DEFINE4(clock_nanosleep_time32, clockid_t, which_clock, int, flags,
		struct old_timespec32 __user *, rqtp,
		struct old_timespec32 __user *, rmtp)
{
	const struct k_clock *kc = clockid_to_kclock(which_clock);
	struct timespec64 t;

	if (!kc)
		return -EINVAL;
	if (!kc->nsleep)
		return -EOPNOTSUPP;

	if (get_old_timespec32(&t, rqtp))
		return -EFAULT;

	if (!timespec64_valid(&t))
		return -EINVAL;
	if (flags & TIMER_ABSTIME)
		rmtp = NULL;
	current->restart_block.nanosleep.type = rmtp ? TT_COMPAT : TT_NONE;
	current->restart_block.nanosleep.compat_rmtp = rmtp;

	return kc->nsleep(which_clock, flags, &t);
}

#endif

