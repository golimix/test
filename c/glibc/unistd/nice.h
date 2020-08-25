//The kernel uses a system call nice(int increment) to change current process’s priority
//
#include <unistd.h>

int nice(int incr);
