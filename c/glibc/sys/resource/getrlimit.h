
#include <sys/time.h>
#include <sys/resource.h>

//get/set resource limits
int getrlimit(int resource, struct rlimit *rlim);


SYSCALL_DEFINE2(getrlimit, unsigned int, resource, struct rlimit __user *, rlim)
{
	struct rlimit value;
	int ret;

	ret = do_prlimit(current, resource, NULL, &value);
	if (!ret)
		ret = copy_to_user(rlim, &value, sizeof(*rlim)) ? -EFAULT : 0;

	return ret;
}

#ifdef CONFIG_COMPAT

COMPAT_SYSCALL_DEFINE2(setrlimit, unsigned int, resource,
		       struct compat_rlimit __user *, rlim)
{
	struct rlimit r;
	struct compat_rlimit r32;

	if (copy_from_user(&r32, rlim, sizeof(struct compat_rlimit)))
		return -EFAULT;

	if (r32.rlim_cur == COMPAT_RLIM_INFINITY)
		r.rlim_cur = RLIM_INFINITY;
	else
		r.rlim_cur = r32.rlim_cur;
	if (r32.rlim_max == COMPAT_RLIM_INFINITY)
		r.rlim_max = RLIM_INFINITY;
	else
		r.rlim_max = r32.rlim_max;
	return do_prlimit(current, resource, &r, NULL);
}

COMPAT_SYSCALL_DEFINE2(getrlimit, unsigned int, resource,
		       struct compat_rlimit __user *, rlim)
{
	struct rlimit r;
	int ret;

	ret = do_prlimit(current, resource, NULL, &r);
	if (!ret) {
		struct compat_rlimit r32;
		if (r.rlim_cur > COMPAT_RLIM_INFINITY)
			r32.rlim_cur = COMPAT_RLIM_INFINITY;
		else
			r32.rlim_cur = r.rlim_cur;
		if (r.rlim_max > COMPAT_RLIM_INFINITY)
			r32.rlim_max = COMPAT_RLIM_INFINITY;
		else
			r32.rlim_max = r.rlim_max;

		if (copy_to_user(rlim, &r32, sizeof(struct compat_rlimit)))
			return -EFAULT;
	}
	return ret;
}

#endif

