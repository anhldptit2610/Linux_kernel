#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/i2c.h>

static int __init helloworld_init(void)
{
    printk(KERN_INFO "Hello world!\n");
    return 0;
}

static void __exit helloworld_exit(void)
{
    printk(KERN_INFO "Goodbye world!\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);