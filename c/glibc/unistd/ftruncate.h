/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 09月 19日 星期四 08:43:11 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:34 CST. */


//truncate a file to a specified length
//文件描述符指定的文件大小改为length，fd必须是以写入模式打开的文件，
//如果大于length，则删除
//
#include <unistd.h>
#include <sys/types.h>

int truncate(const char *path, off_t length);
int ftruncate(int fd, off_t length);
