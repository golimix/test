/**
 *	线程取消		P148
 *
 *	We alluded to a problem with Figure 8.4 if the calling thread gets blocked in the call to
 *	pthread-cond-wait and the thread is then canceled. A thread may be canceled by
 *	any other thread in the same process when the other thread calls pthread-cancel, a
 *	fundion whose only argument is the thread ID to cancel.
 */
#include <pthread.h>

//pthread_cancel - send a cancellation request to a thread
//向线程发送取消请求
int pthread_cancel(pthread_t tid);

