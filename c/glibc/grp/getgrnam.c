/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:12 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:24 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:53:54 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 12日 星期二 15:07:31 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:09 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:47 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:26:54 CST. */
/*


struct group * getgrnam (const char *name) [Function]
This function returns a pointer to a statically-allocated structure containing informa
tion about the group whose group name is name. This structure may be overwritten
by subsequent calls to getgrnam.
A null pointer indicates there is no group named name.
int getgrnam_r (const char *name, struct group *result_buf, char [Function]
*buffer, size t buflen, struct group **result)
This function is similar to getgrnam in that is returns information about the group
whose group name is name. Like getgrgid_r, it uses the user supplied buﬀers in
result buf and buﬀer, not a static buﬀer.
The return values are the same as for getgrgid_r ERANGE

*/
#include <stdio.h>
#include <grp.h>

int main()
{
    
    struct group *g = getgrgid(getgid());
    
    struct group *group = getgrnam(g->gr_name);
    
    printf("%s:%d:%s\n", group->gr_name, group->gr_gid, group->gr_mem[0]);
    
    
    
    return 0;
}   