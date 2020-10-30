#include <sys/eventfd.h>



/* Increment event counter.  */
extern int eventfd_write (int __fd, eventfd_t __value);

