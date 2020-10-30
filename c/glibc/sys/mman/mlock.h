#include <sys/mman.h>

//lock and unlock memory
//mlock()  locks  pages in the address range starting at addr and continuing for len bytes.
/**
 *	The mlock family of system calls allows a program 
 *	to lock some or all of its address space into
 *	physical memory. This prevents Linux from paging 
 *	this memory to swap space, even if the
 *	program hasn't accessed it for a while.
 * 禁止系统将该内存分页至swap交换空间
 */
int mlock(const void *addr, size_t len);
int munlock(const void *addr, size_t len);

//lock and unlock memory
//mlockall() locks all pages mapped into the address space of the calling process.
int mlockall(int flags);
int munlockall(void);



