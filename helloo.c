#include <linux/module.h>
#include <linux/kernel.h>

static int OurInt __initdata=2;

int __init G11_init_module(void){


	printk(KERN_INFO "Hello Dummy World %d \n", OurInt);
	return 0;
}

void __exit G11_cleanup_module(void){
	printk(KERN_INFO "Hello Cruel World 2 \n");
	return 0;
}


module_init(G11_init_module);
module_exit(G11_cleanup_module);
