#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0xf64ac983, "__copy_overflow" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x366d11a2, "proc_create" },
	{ 0x1ad25227, "proc_remove" },
	{ 0xd272d446, "__fentry__" },
	{ 0xe8213e80, "_printk" },
	{ 0x5cb46e6d, "validate_usercopy_range" },
	{ 0xa61fd7aa, "__check_object_size" },
	{ 0xb0c84d61, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x092a35a2,
	0x90a48d82,
	0xd272d446,
	0xf64ac983,
	0x092a35a2,
	0x366d11a2,
	0x1ad25227,
	0xd272d446,
	0xe8213e80,
	0x5cb46e6d,
	0xa61fd7aa,
	0xb0c84d61,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"_copy_from_user\0"
	"__ubsan_handle_out_of_bounds\0"
	"__x86_return_thunk\0"
	"__copy_overflow\0"
	"_copy_to_user\0"
	"proc_create\0"
	"proc_remove\0"
	"__fentry__\0"
	"_printk\0"
	"validate_usercopy_range\0"
	"__check_object_size\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BFEAA86C15B1D5742CD9642");
