/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:22 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:29 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:54:00 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:13 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:51 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:26:57 CST. */
/*


int sigsuspend (const sigset t *set) [Function]
This function replaces the process’s signal mask with set and then suspends the
process until a signal is delivered whose action is either to terminate the process or
invoke a signal handling function. In other words, the program is eﬀectively suspended
until one of the signals that is not a member of set arrives.
If the process is woken up by delivery of a signal that invokes a handler function, and
the handler function returns, then sigsuspend also returns.
The mask remains set only as long as sigsuspend is waiting. The function
sigsuspend always restores the previous signal mask when it returns.
The return value and error conditions are the same as for pause.
With sigsuspend, you can replace the pause or sleep loop in the previous section with
something completely reliable:
sigset_t mask, oldmask;





*/

#include <signal.h>

#include <stdio.h>
#include <signal.h>
#include <stddef.h>



int main (void)
{   
    sigset_t mask, oldmask;
    
    
    /* Set up the mask of signals to temporarily block. */
    sigemptyset (&mask);
    sigaddset (&mask, SIGUSR1);
    
    /* Wait for a signal to arrive. */
    sigprocmask (SIG_BLOCK, &mask, &oldmask);
    
    // while (!usr_interrupt)
        // sigsuspend (&oldmask);
    
    sigprocmask (SIG_UNBLOCK, &mask, NULL);
    
    
    return 0;
}





