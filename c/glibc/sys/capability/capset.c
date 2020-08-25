#include <sys/capability.h>

int capget(cap_user_header_t hdrp, cap_user_data_t datap);
int capset(cap_user_header_t hdrp, const cap_user_data_t datap);

#if 0
typedef struct __user_cap_header_struct {
  __u32 version;
  int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
  __u32 effective;
  __u32 permitted;
  __u32 inheritable;
} *cap_user_data_t;
#endif

int main()
{
	cap_user_header_t hdrp;
	cap_user_data_t datap;

	capget(hdrp, datap);

	printf("%d,%d: %d,%d,%d\n", 
			hdrp->version, hdrp->pid,
			datap->effective, datap->permitted, datap->inheritable);

	return 0;
}
