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
 *	pid_t vfork (void) [Function]
 *	The vfork function is similar to fork but on some systems it is more efcient; however,
 *	there are restrictions you must follow to use it safely.
 *	While fork makes a complete copy of the calling process’s address space and allows
 *	both the parent and child to execute independently, vfork does not make this copy.
 *	Instead, the child process created with vfork shares its parent’s address space until
 *	it calls _exit or one of the exec functions. In the meantime, the parent process
 *	suspends execution.
 *	You must be very careful not to allow the child process created with vfork to modify
 *	any global data or even local variables shared with the parent. Furthermore, the child
 *	process cannot return from (or do a long jump out of) the function that called vfork!
 *	This would leave the parent process’s control information very confused. If in doubt,
 *	use fork instead.
 *
 *
 */

#include <unistd.h>
#include <sys/types.h>

pid_t vfork (void);
