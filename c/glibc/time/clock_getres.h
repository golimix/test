#include <time.h>

struct timespec {
   time_t   tv_sec;        /* seconds */
   long     tv_nsec;       /* nanoseconds */
};

//The  function  clock_getres() finds the resolution (precision) of the specified clock clk_id, and, if res
//       is non-NULL, stores it in the struct timespec pointed to by res.  
int clock_getres(clockid_t clk_id, struct timespec *res);


//Link with -lrt (only for glibc versions before 2.17).

SYSCALL_DEFINE2(clock_getres, const clockid_t, which_clock,
		struct __kernel_timespec __user *, tp)
{
	const struct k_clock *kc = clockid_to_kclock(which_clock);
	struct timespec64 rtn_tp;
	int error;

	if (!kc)
		return -EINVAL;

	error = kc->clock_getres(which_clock, &rtn_tp);

	if (!error && tp && put_timespec64(&rtn_tp, tp))
		error = -EFAULT;

	return error;
}


