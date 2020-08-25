/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 09月 19日 星期四 08:43:11 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:34 CST. */


/* NAME
 * truncate - truncate a file to a specified length
 *	将参数指定的文件大小改为指定大小length， 如果大于length，则删除大于部分。
 *
 * SYNOPSIS */
#include <unistd.h>

int truncate(const char *path, off_t length);

