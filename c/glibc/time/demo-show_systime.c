/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:33 CST. */
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
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:54:06 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:18 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:55 CST. */
#include <time.h>
#include <stdio.h>
#define SIZE 256
int
main (void)
{
    char buffer[SIZE];
    time_t curtime;
    struct tm *loctime;
    
    /* Get the current time. */
    curtime = time (NULL);
    
    /* Convert it to local time representation. */
    loctime = localtime (&curtime);
    
    /* Print out the date and time in the standard format. */
    fputs (asctime (loctime), stdout);
    /* Print it out in a nice format. */
    strftime (buffer, SIZE, "Today is %A, %B %d.\n", loctime);
    
    fputs (buffer, stdout);
    
    strftime (buffer, SIZE, "The time is %I:%M %p.\n", loctime);
    
    fputs (buffer, stdout);
    
    return 0;
}