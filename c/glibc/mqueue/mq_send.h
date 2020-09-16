/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:15 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 21日 星期四 09:04:25 CST. */


#include <mqueue.h>

int mq_send(mqd_t mqdes, const char *msg_ptr,
                    size_t msg_len, unsigned msg_prio);

#include <time.h>
#include <mqueue.h>

int mq_timedsend(mqd_t mqdes, const char *msg_ptr,
                    size_t msg_len, unsigned msg_prio,
                    const struct timespec *abs_timeout);


