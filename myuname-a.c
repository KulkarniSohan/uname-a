#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/utsname.h>

static int uname_init(void)
{
	printk(KERN_ALERT "In my module");
	struct new_utsname *my;
	printk(KERN_ALERT "SYSNAME : %s\n",my->sysname);
	printk(KERN_ALERT "NODENAME : %s\n",my->nodename);
	printk(KERN_ALERT "RELEASE : %s\n",my->release);
	printk(KERN_ALERT "VERSION : %s\n",my->version);
	printk(KERN_ALERT "MACHINE : %s\n",my->machine);
	printk(KERN_ALERT "DOMAIN NAME : %s\n",my->domainname);
	return 0;
}

static void uname_exit(void)
{
	printk(KERN_ALERT "module unloading\n");
}

module_init(uname_init);
module_exit(uname_exit);
MODULE_LICENSE("GPL");
