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
	{ 0xc31a8174, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0x3c0a116, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x89997287, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xea2a9931, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0xdab9e674, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7b1ac9f6, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf8ceeab6, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x8636ee30, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x8f132be4, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0xeda45116, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2454d614, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x17dd7f8, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0xace266d4, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x63bf7b77, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x33b46d71, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x396fc8eb, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_start) },
	{ 0xf5f97fda, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x889604f8, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xc2419e0b, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xace1a41b, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x579ee14f, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb0d94c01, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x6342ab7b, __VMLINUX_SYMBOL_STR(relay_file_operations) },
	{ 0xaeb58040, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0x441f82e5, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0xe6c1d56d, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0xc953931f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x4da8c5b6, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xbfa29015, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xd6b7ef82, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0xee3070ff, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x7295fe41, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0xbb15bd54, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xc15c8611, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x41ea08e1, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0x6eb4db18, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x1c0552ff, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xd94aaf1f, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x2450aaca, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xcf70c97c, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xebff0305, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0xc7858096, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xf5d4693e, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x47c7fe7d, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xcbb7a822, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xf690d97c, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x517cf29a, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x9fc799fd, __VMLINUX_SYMBOL_STR(rate_control_send_low) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x231907ed, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9f14c292, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa2d54dec, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xba7073bd, __VMLINUX_SYMBOL_STR(ath_gen_timer_free) },
	{ 0xf8019aff, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x592074f4, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x2d304d1e, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x729db131, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x21585d42, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4426beff, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x401ae266, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0x1d32eab2, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0x9a312d52, __VMLINUX_SYMBOL_STR(relay_switch_subbuf) },
	{ 0xeca38c7b, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb4c7c730, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x791eae75, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x3eedff4b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x8351b9d, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xeae82dee, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf6ca11f5, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x99055c86, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0xbc7e1f73, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x83fd9755, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc7df9a38, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8222b757, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x95b0d9b7, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x59e7d144, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0x579c2a4a, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0xde28aa2e, __VMLINUX_SYMBOL_STR(relay_close) },
	{ 0x45286cf0, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbc7db518, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xb2af0207, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe6b89251, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9d442502, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5d344f87, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x5f43d560, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xd8ff05f8, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0x302102a, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xbbc05cd1, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_register) },
	{ 0x4582437, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x76f0277d, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd06eda24, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x8de9418b, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x1612bf65, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x54631ea7, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_stop) },
	{ 0x1d7d15c9, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x737bb347, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xb0b9eb47, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0xb6b46bf4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaaa3b254, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc3474201, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0xa928435, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xa30dbb63, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x888e353, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5ea51195, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x26719f70, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x2d71ef0f, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x2045287a, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x327183a1, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0x27b7a733, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xad62b126, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0xa5624868, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xec372991, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xd4657932, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xa896fcca, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x8a6f36d0, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x988aa8df, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0x83aac739, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xf7cd87e6, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0x17aca25, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0xd6a4b64, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x7bff8327, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x2a7d131, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xe62d69d4, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2a265d24, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xf8bfcb3, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0xf3275de5, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x1172c8f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd2981357, __VMLINUX_SYMBOL_STR(ath9k_cmn_count_streams) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe81292b0, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x37d53ff2, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x728f98a4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9376f2, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0x272449d3, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0xa74bc011, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7b903e54, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x6c7b112a, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x39d5ed6e, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0xb15c846e, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xcf889d07, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x994bf5ea, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0x4d53d0, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xa1514e66, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0x79d9a757, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0x758db92f, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x788588da, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xbb97b77, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0xba28f934, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xc9caaa51, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x56aa16cc, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0x59f8aea4, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x6853f26c, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0xb21fb61d, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x68565378, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x57679a31, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x77cf3495, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xba28ac5e, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xe31e9872, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x42217f3, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xb72edfbc, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0xead444b6, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xdbb492c6, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_unregister) },
	{ 0x5cb46164, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x9c5e6334, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x659b5d22, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x233d4a1a, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x3dd0962, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x9b189f58, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xd1eeced7, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc212259f, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5b0a4cde, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xefe78918, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xd8d49e00, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0xf9072cfd, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0x361cf348, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe49b9dd9, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x98f5fd99, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0x7a065f4a, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xffb34cb5, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xc5b3152f, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0xd7209508, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x6062c7a5, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0x7e16f4ea, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x95e439bc, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x2caad68e, __VMLINUX_SYMBOL_STR(relay_open) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xa007aa0d, __VMLINUX_SYMBOL_STR(ath_gen_timer_alloc) },
	{ 0x70320c2, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x74ed7fcb, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x357e6c79, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1c8b81af, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x3c80911e, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x76806fef, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc1f81642, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd7a2a02f, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x94c2c55c, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xdc0accc3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x38d27d68, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xa6cb3160, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x40665b55, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x899100e9, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x34e1db21, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1e6fbb2d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x48b80b9e, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0xb39bdbe1, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,mac80211,ath9k_common,cfg80211,ath";

MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");

MODULE_INFO(srcversion, "67BF6AD9A8C070A800EDDD4");
