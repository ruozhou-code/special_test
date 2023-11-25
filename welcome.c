KERNELDIR := /home/alientek/rk3568_linux_sdk/kernel
CURRENT_PATH := $(shell pwd)
obj-m := chrdevbase.o

build: kernel_modules
kernel_modules:
$(MAKE) -C $(KERNELDIR) M=$(CURRENT_PATH) modules
clean:
$(MAKE) -C $(KERNELDIR) M=$(CURRENT_PATH) clean