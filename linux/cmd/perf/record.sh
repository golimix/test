# Copyright (C) Rong Tao @Sylincom Beijing, 2020年 07月 10日 星期五 16:55:08 CST. 
#!/bin/bash


perf record $*
perf report --stdio


