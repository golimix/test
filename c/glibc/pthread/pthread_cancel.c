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
/**
 *	线程取消		P148
 *
 *	We alluded to a problem with Figure 8.4 if the calling thread gets blocked in the call to
 *	pthread-cond-wait and the thread is then canceled. A thread may be canceled by
 *	any other thread in the same process when the other thread calls pthread-cancel, a
 *	fundion whose only argument is the thread ID to cancel.
 */
#include <pthread.h>

int pthread_cancel(pthread_t tid);

/**
 *	Under normal circumstances, a thread terminates when it exits normally, either by
 *	returning from its thread function or by calling pthread_exit. However, it is possible
 *	for a thread to request that another thread terminate.This is called canceling a thread.
 *	To cancel a thread, call pthread_cancel, passing the thread ID of the thread to be
 *	canceled. A canceled thread may later be joined; in fact, you should join a canceled
 *	thread to free up its resources, unless the thread is detached (see Section 4.1.5,“Thread
 *	Attributes”).The return value of a canceled thread is the special value given by
 *	PTHREAD_CANCELED.
 */
#include <pthread.h>
#include <stdio.h>
#include <string.h>
/* An array of balances in accounts, indexed by account number. */
float* account_balances;
/* Transfer DOLLARS from account FROM_ACCT to account TO_ACCT. Return
 * 0 if the transaction succeeded, or 1 if the balance FROM_ACCT is
 * too small. */
int process_transaction (int from_acct, int to_acct, float dollars)
{
	int old_cancel_state;
	/* Check the balance in FROM_ACCT. */
	if (account_balances[from_acct] < dollars)
		return 1;
	/* Begin critical section. */
	pthread_setcancelstate (PTHREAD_CANCEL_DISABLE, &old_cancel_state);
	/* Move the money. */
	account_balances[to_acct] += dollars;
	account_balances[from_acct] -= dollars;
	/* End critical section. */
	pthread_setcancelstate (old_cancel_state, NULL);
	return 0;
}







