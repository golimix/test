#include <sys/eventfd.h>


/* Read event counter and possibly wait for events.  */
extern int eventfd_read (int __fd, eventfd_t *__value);

