#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


static int OurInt __initdata=2;

static char *OurString = "helpplz";
module_param(OurString, charp, 0000);
MODULE_PARM_DESC(OurString, "a character string");

static int OurInt2 = 45;
module_param(OurInt2, int, 0);
MODULE_PARM_DESC(OurInt2, "a number");


MODULE_AUTHOR("Mario");
MODULE_DESCRIPTION("Nintendo new 3DS");
MODULE_LICENSE("GPL");



int __init G11_init_module(void){


	printk(KERN_INFO "Hello Dummy World %s \n", OurString);
	return 0;
}

void __exit G11_cleanup_module(void){
	printk(KERN_INFO "Hello Cruel World %d \n", OurInt2);
	return 0;
}


module_init(G11_init_module);
module_exit(G11_cleanup_module);


