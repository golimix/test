/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:32 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:34 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:54:05 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:18 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:55 CST. */
/*
 *	struct vtimes [Data Type]
 *	This data type contains information about the resource usage of a process. Each
 *	member corresponds to a member of the struct rusage data type described
 *	above.
 *
 *	vm_utime User CPU time. Analogous to ru_utime in struct rusage
 *	vm_stime System CPU time. Analogous to ru_stime in struct rusage
 *	vm_idsrss
 *	Data and stack memory. The sum of the values that would be
 *	reported as ru_idrss and ru_isrss in struct rusage
 *	vm_ixrss Shared memory. Analogous to ru_ixrss in struct rusage
 *	vm_maxrss
 *	Maximent resident set size. Analogous to ru_maxrss in struct
 *	rusage
 *	vm_majflt
 *	Major page faults. Analogous to ru_majflt in struct rusage
 *	vm_minflt
 *	Minor page faults. Analogous to ru_minflt in struct rusage
 *	vm_nswap Swap count. Analogous to ru_nswap in struct rusage
 *	vm_inblk Disk reads. Analogous to ru_inblk in struct rusage
 *	vm_oublk Disk writes. Analogous to ru_oublk in struct rusage
 */

#include <sys/vtimes.h>

struct vtimes{
	vm_utime;
	vm_stime;
	vm_idsrss;
	vm_ixrss;
	vm_maxrss;
	vm_majflt;
	vm_minflt;
	vm_nswap;
	vm_inblk;
	vm_oublk;
};
