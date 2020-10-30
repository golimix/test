
#include <sys/inotify.h>

//初始化一个文件系统变更通知描述符
int inotify_init(void);
int inotify_init1(int flags);



SYSCALL_DEFINE1(inotify_init1, int, flags)
{
	return do_inotify_init(flags);
}

SYSCALL_DEFINE0(inotify_init)
{
	return do_inotify_init(0);
}

