# helloworld/Makefile
# simplest kernel module Makefile

PWD := $(shell pwd)
obj-m += helloworld_lkm.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
install:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules_intsall
clean:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) clean