#include <unistd.h>

//change data segment size
int brk(void *addr);

void *sbrk(intptr_t increment);
	   
