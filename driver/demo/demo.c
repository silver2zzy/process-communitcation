#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ZZY");

static int hi_init(void)
{
    printk("hi init\n");
    return 0;
}

static void hi_exit(void)
{
    printk("hi exit\n");
}

module_init(hi_init);
module_exit(hi_exit);