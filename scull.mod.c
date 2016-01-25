#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
    { 0x41572473, "module_layout" },
    { 0x354191ef, "kobject_put" },
    { 0xe81fd0f2, "cdev_del" },
    { 0xac283e02, "kmalloc_caches" },
    { 0x5a34a45c, "__kmalloc" },
    { 0xd606b81f, "cdev_init" },
    { 0x4c4fef19, "kernel_stack" },
    { 0xb85f3bbe, "pv_lock_ops" },
    { 0x3ec8886f, "param_ops_int" },
    { 0xd8e484f0, "register_chrdev_region" },
    { 0xc8b57c27, "autoremove_wake_function" },
    { 0x7204132c, "__wake_up_sync" },
    { 0x77d84e1e, "no_llseek" },
    { 0x670c0597, "down_interruptible" },
    { 0xc707e894, "kobject_set_name" },
    { 0x7485e15e, "unregister_chrdev_region" },
    { 0x54652e99, "tty_devnum" },
    { 0xeb23f3e7, "nonseekable_open" },
    { 0xe174aa7, "__init_waitqueue_head" },
    { 0x4f8b5ddb, "_copy_to_user" },
    { 0xde0bdcff, "memset" },
    { 0x23287643, "current_task" },
    { 0x27e1a049, "printk" },
    { 0x4337f700, "fasync_helper" },
    { 0xb4390f9a, "mcount" },
    { 0x1a925a66, "down" },
    { 0x8e998634, "cdev_add" },
    { 0xc6cbbc89, "capable" },
    { 0xb2fd5ceb, "__put_user_4" },
    { 0x1000e51, "schedule" },
    { 0xa963fd01, "kmem_cache_alloc_trace" },
    { 0x6443d74d, "_raw_spin_lock" },
    { 0xf09c7f68, "__wake_up" },
    { 0x37a0cba, "kfree" },
    { 0xe75663a, "prepare_to_wait" },
    { 0x57b09822, "up" },
    { 0x9eda75eb, "kill_fasync" },
    { 0xb00ccc33, "finish_wait" },
    { 0x4f6b400b, "_copy_from_user" },
    { 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EBBB9F1E7403693A8D77556");
