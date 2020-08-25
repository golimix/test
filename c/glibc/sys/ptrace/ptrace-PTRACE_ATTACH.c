//向其它程序注入指令
//我们追踪其它独立运行的进程时，需要使用下面的命令：
//
//ptrace(PTRACE_ATTACH, pid, NULL, NULL)
//
//使pid进程成为被追踪的tracee进程。tracee进程会被发送一个SIGTOP信号量，tracee进程不会立即停止，
//直到完成本次系统调用。如果要结束追踪，则调用PTRACE_DETACH即可。
//
//debug 设置断点的功能可以通过ptrace实现。原理是ATTACH正在运行的进程使其停止。
//然后读取该进程的指令寄存器IR（32位x86为EIP,64w的是RIP）内容所指向的指令，备份后替换成目标指令，
//再使其继续执行，此时被追踪进程就会执行我们替换的指令，运行完注入的指令之后，我们再恢复原进程的IR
//,从而达到改变原程序运行逻辑的目的。


