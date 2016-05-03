#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x59caa4c3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xdab9e674, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc1a2c07d, __VMLINUX_SYMBOL_STR(csi_record_status) },
	{ 0xeae82dee, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf87584d6, __VMLINUX_SYMBOL_STR(csi_record_payload) },
	{ 0xe70e2abb, __VMLINUX_SYMBOL_STR(ath_hw_get_listen_time) },
	{ 0x53358ce3, __VMLINUX_SYMBOL_STR(ath_regd_get_band_ctl) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xb15c846e, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x68565378, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x77cf3495, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xc1f81642, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ar9003_csi,ath";


MODULE_INFO(srcversion, "659E0012DC4FB3E9F8477AD");
