/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:27 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 04月 02日 星期二 08:34:52 CST. */


/**
 *	Example of Memory-Mapped file
 *
 *				address space
 *				of process
 *	high memory +------+
 *              |      |
 *              |      |
 *              +------+--------------------------------\
 *              |      |								|
 *														|
 *														|
 *          memory mapped								|
 *          protion of file								|
 *														|
 *				|      |								|
 *return value->+------+----------------\				|
 *	of mmap  	|      |				|				|
 *	low memory  +------+				|				|
 *										|				|
 *										|				|
 *										|				|
 *										|				|
 *							+------------------------------------+
 *		file referenced by 	|           |memory mapped  |        |
 *				descriptorfd|			|protion of file|		 |
 *							+------------------------------------+
 *							| offset    |  len          |
 */	

/* NAME
 * mmap, munmap - map or unmap files or devices into memory
 *
 * SYNOPSIS*/
#include <sys/mman.h>

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);

/* See NOTES for information on feature test macro requirements. */
