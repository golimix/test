#include <sys/eventfd.h>

int eventfd(unsigned int initval, int flags);




SYSCALL_DEFINE1(eventfd, unsigned int, count)
{
	return do_eventfd(count, 0);
}

