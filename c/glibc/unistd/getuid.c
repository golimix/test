/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 09月 19日 星期四 08:43:11 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:34 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:35 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:54:07 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:19 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:56 CST. */
/*
 *	uid_t getuid (void) [Function]
 *	The getuid function returns the real user ID of the process.
 *	gid_t getgid (void) [Function]
 *	The getgid function returns the real group ID of the process.
 *	uid_t geteuid (void) [Function]
 *	The geteuid function returns the eﬀective user ID of the process.
 *	gid_t getegid (void) [Function]
 *	The getegid function returns the eﬀective group ID of the process.
 */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
	printf("getuid = %d, getgid = %d, geteuid = %d, getegid = %d\n", 
			getuid(), getgid(), geteuid(), getegid());


	return 0;
}