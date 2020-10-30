
#include <unistd.h>

//make a new name for a file
int symlink(const char *oldpath, const char *newpath);


SYSCALL_DEFINE3(symlinkat, const char __user *, oldname,
		int, newdfd, const char __user *, newname)
{
	return do_symlinkat(oldname, newdfd, newname);
}

SYSCALL_DEFINE2(symlink, const char __user *, oldname, const char __user *, newname)
{
	return do_symlinkat(oldname, AT_FDCWD, newname);
}

