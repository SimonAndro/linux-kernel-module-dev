//helloworld_lkm.c

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Simon");
MODULE_DESCRIPTION("helloworld_lkm: helloword program for a loadable Kernel Module (LKM)");
MODULE_LICENSE("Dual MIT/GPL");
MODULE_VERSION("0.1");

static int __int helloworld_lkm_init(void)
{
    printk(KERN_INFO "hello, world\n");
    return 0; /* success */
}

static void __exit helloworld_lkm_exit(void)
{
    printk(KERN_INFO "Goodbye, world\n");
}

module_init(helloworld_lkm_init);
module_exit(helloworld_lkm_exit);