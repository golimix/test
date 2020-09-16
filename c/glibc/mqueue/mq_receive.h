/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:15 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 21日 星期四 09:04:25 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 21日 星期四 08:27:35 CST. */



#include <mqueue.h>

ssize_t mq_receive(mqd_t mqdes, char *msg_ptr,
                        size_t msg_len, unsigned *msg_prio);

#include <time.h>
#include <mqueue.h>

ssize_t mq_timedreceive(mqd_t mqdes, char *msg_ptr,
                        size_t msg_len, unsigned *msg_prio,
                        const struct timespec *abs_timeout);

