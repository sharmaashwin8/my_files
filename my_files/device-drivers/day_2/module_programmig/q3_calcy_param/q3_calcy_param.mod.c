#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1e2a3dfd, "module_layout" },
	{ 0x1317b129, "param_ops_charp" },
	{ 0x2457becf, "param_ops_int" },
	{ 0xc5850110, "printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x2196324, "__aeabi_idiv" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "178C7C854285B3A22FA7E54");
