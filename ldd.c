#include <linux/init.h>
#include <linux/module.h>
#include <linux/proc_fs.h>

MODULE_LICENSE("GPL"); //*
MODULE_AUTHOR("Raul"); //!
MODULE_DESCRIPTION("Our first dynamically loadable module"); //!

static struct proc_dir_entry *custom_proc_node;
struct proc_ops custom_proc_ops = {

};

static int first_module_init (void) {
    printk("first_module_init: entry\n");

    custom_proc_node = proc_create("ldd_driver",
                                0,
                                NULL,
                                &custom_proc_ops);
    
    printk("first_module_init: exit\n");

    return 0;
}

static void first_module_exit (void) {
    printk("first_module_exit: entry\n");

    proc_remove(custom_proc_node);

    printk("first_module_exit: exit\n");
}

module_init(first_module_init);
module_exit(first_module_exit);
