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
	{ 0x3c0a116, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xea2a9931, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0xdab9e674, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf8ceeab6, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x8636ee30, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xeda45116, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2454d614, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe36f2898, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xf5f97fda, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x889604f8, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xc2419e0b, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xace1a41b, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x579ee14f, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xc953931f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xbfa29015, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xee3070ff, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x7295fe41, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x1c0552ff, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xd94aaf1f, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xc7858096, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xf5d4693e, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x47c7fe7d, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x9b3f67da, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x517cf29a, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa2d54dec, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xf8019aff, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x592074f4, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x2d304d1e, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x729db131, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x21585d42, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4426beff, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb4c7c730, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x791eae75, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x98a8e770, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x5b3a8e4a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x8351b9d, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xeae82dee, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x83fd9755, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x8222b757, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x95b0d9b7, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x45286cf0, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xbc7db518, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xb2af0207, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5e75e852, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9d442502, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5f43d560, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x4582437, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x76f0277d, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd06eda24, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x8de9418b, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x1612bf65, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xf4c95e69, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb0b9eb47, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0xb6b46bf4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4c1182cb, __VMLINUX_SYMBOL_STR(bitmap_scnprintf) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x5ea51195, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x2d71ef0f, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x2045287a, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x27b7a733, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xa5624868, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xec372991, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xd4657932, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x8a6f36d0, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x83aac739, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xd6a4b64, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x7bff8327, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xd762bf6b, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x2a7d131, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xe62d69d4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2dc603f, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2a265d24, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xf3275de5, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x1172c8f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd5c182be, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xff1076fc, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xd2981357, __VMLINUX_SYMBOL_STR(ath9k_cmn_count_streams) },
	{ 0x37d53ff2, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x728f98a4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xff5a34c5, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x5fdc5f57, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xa74bc011, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7b903e54, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xedaa1233, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x788588da, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x9085d988, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xc9caaa51, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x59f8aea4, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x68565378, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x77cf3495, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe31e9872, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xead444b6, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x5cb46164, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x659b5d22, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x9b189f58, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x3dd0962, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xd1eeced7, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc212259f, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5b0a4cde, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xefe78918, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xffb34cb5, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xd7209508, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xd21ce1eb, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3d51e730, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7e16f4ea, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x95e439bc, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xeb2e2ace, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xa4e08607, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x70320c2, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x1c8b81af, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x76806fef, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x94c2c55c, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xdc0accc3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd114464c, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x38d27d68, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xa6cb3160, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x821efbd2, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xc930d5a7, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BCA138D9C185FF95520B57B");
