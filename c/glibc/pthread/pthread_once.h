/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 24日 星期一 08:52:25 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:19 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:28 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 09:02:19 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:53:59 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:12 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:50 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:26:57 CST. */

#include <pthread.h>
int pthread_once(pthread_once_t *onceptr, void (*init) (void));
int pthread_key_create(pthread_key_t *keyptr, void (*destructor) (void *value));
//Both return: 0 if OK, positive Exxx value on error
//
//pthread_once is normally called every time a function that uses thread-specific data is called, but pthread_once uses the value in the variable pointed to by onceptr to guarantee that the init function is called only one time per process.
//
//pthread_key_create must be called only one time for a given key within a process. The key is returned through the keyptr pointer, and the destructor function, if the argument is a non-null pointer, will be called by each thread on termination if that thread has stored a value for this key.
//
//
pthread_key_t rl_key;
pthread_once_t rl_once = PTHREAD_ONCE_INIT;
void
readline_destructor(void *ptr)
{
	free(ptr);
}
void
readline_once(void)
{
	pthread_key_create(&rl_key, readline_destructor);
}

ssize_t
readline( ... )
{
	//...
		pthread_once(&rl_once, readline_once);
	if ( (ptr = pthread_getspecific(rl_key)) == NULL) {
		ptr = Malloc( ... );
		pthread_setspecific(rl_key, ptr);
		/* initialize memory pointed to by ptr */
	}
	//...
		/* use values pointed to by ptr */
}
