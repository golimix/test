/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:06:41 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:25:10 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:50 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:28:21 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:24:10 CST. */
#include <stdio.h>
#include <omp.h>
#include <stdlib.h>

int main()
{
#ifdef OMP_H
	printf("Hello World\n");
#endif

	int i;
#ifdef OMP_H
#pragma omp parallel for
	for(i=0; i<5; i++)
	{
		printf("%d:%d\n", i, omp_get_thread_num());
	}
#endif
}