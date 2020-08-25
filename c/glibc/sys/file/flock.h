/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:26 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 15日 星期五 09:12:09 CST. 
*/
/**
 *NAME
 *	flock - apply or remove an advisory lock on an open file
 *	应用或者移除一个打开文件的公告锁？？
 *
 *	advisory：n. 公告、报告
 *			  adj. 顾问的，劝告的，忠告的，提供咨询的
 *
 *SYNOPSIS
 *	#include <sys/file.h>
 *  int flock(int fd, int operation);
 */

#include <sys/file.h>
int flock(int fd, int operation);


