

/**
 *	NAME
 *	clone, __clone2 - create a child process
 *
 *	SYNOPSIS
 * /* Prototype for the glibc wrapper function */

#define _GNU_SOURCE
#include <sched.h>

int clone(int (*fn)(void *), void *child_stack,
		int flags, void *arg, ...
		/* pid_t *ptid, void *newtls, pid_t *ctid */ );

/* For the prototype of the raw system call, see NOTES */
/**
 * DESCRIPTION
 * clone() creates a new process, in a manner similar to fork(2).
 */
