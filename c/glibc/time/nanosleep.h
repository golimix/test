#include <time.h>

//nanosleep - high-resolution sleep
int nanosleep(const struct timespec *req, struct timespec *rem);



#ifdef CONFIG_64BIT

SYSCALL_DEFINE2(nanosleep, struct __kernel_timespec __user *, rqtp,
		struct __kernel_timespec __user *, rmtp)
{
	struct timespec64 tu;

	if (get_timespec64(&tu, rqtp))
		return -EFAULT;

	if (!timespec64_valid(&tu))
		return -EINVAL;

	current->restart_block.nanosleep.type = rmtp ? TT_NATIVE : TT_NONE;
	current->restart_block.nanosleep.rmtp = rmtp;
	return hrtimer_nanosleep(timespec64_to_ktime(tu), HRTIMER_MODE_REL,
				 CLOCK_MONOTONIC);
}

#endif


#ifdef CONFIG_COMPAT_32BIT_TIME

SYSCALL_DEFINE2(nanosleep_time32, struct old_timespec32 __user *, rqtp,
		       struct old_timespec32 __user *, rmtp)
{
	struct timespec64 tu;

	if (get_old_timespec32(&tu, rqtp))
		return -EFAULT;

	if (!timespec64_valid(&tu))
		return -EINVAL;

	current->restart_block.nanosleep.type = rmtp ? TT_COMPAT : TT_NONE;
	current->restart_block.nanosleep.compat_rmtp = rmtp;
	return hrtimer_nanosleep(timespec64_to_ktime(tu), HRTIMER_MODE_REL,
				 CLOCK_MONOTONIC);
}
#endif

