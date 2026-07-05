#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL"); //*
MODULE_AUTHOR("Raul"); //!
MODULE_DESCRIPTION("Our first dynamically loadable module"); //!

static int first_module_init (void) {
    printk("Hello, World! (from Raul!!)\n");
    return 0;
}

static void first_module_exit (void) {
    printk("Good, Bye! (from Raul!!)\n");
}

module_init(first_module_init);
module_exit(first_module_exit);
