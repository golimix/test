#include <sys/time.h>
#include <sys/resource.h>

//get/set resource limits
int setrlimit(int resource, const struct rlimit *rlim);

