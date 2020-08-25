obj-m += procsview.o

KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

run:
	clear
	insmod procsview.ko
	grep RTOAX /var/log/messages
	rmmod procsview
