/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:27 CST. */


#include <sys/mman.h>

void *mmap(void *addr, size_t length, int prot, int flags,
			                     int fd, off_t offset);
int munmap(void *addr, size_t length);

//See NOTES for information on feature test macro requirements.

SYSCALL_DEFINE2(munmap, unsigned long, addr, size_t, len)
{
	addr = untagged_addr(addr);
	profile_munmap(addr);
	return __vm_munmap(addr, len, true);
}

