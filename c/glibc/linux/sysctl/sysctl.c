#include <unistd.h>
#include <linux/sysctl.h>
#include <stdio.h>

int main()
{
    struct __sysctl_args args;
    int ret = _sysctl(&args);

    
}

