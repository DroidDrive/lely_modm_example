#if !LELY_NO_MALLOC
#error Static object dictionaries are only supported when dynamic memory allocation is disabled.
#endif

#include <lely/co/detail/dev.h>
#include <lely/co/detail/obj.h>
#include <lely/util/cmp.h>

#define CO_DEV_STRING(s) s

static co_dev_t MySlave1 = {
	.netid = 0,
	.id = 255,
	.tree = { .cmp = &uint16_cmp },
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING(""),
	.vendor_name = CO_DEV_STRING("Lely Industries N.V."),
#endif
	.vendor_id = 0x00000360,
#if !LELY_NO_CO_OBJ_NAME
	.product_name = CO_DEV_STRING(""),
#endif
	.product_code = 0x00000000,
	.revision = 0x00000000,
#if !LELY_NO_CO_OBJ_NAME
	.order_code = CO_DEV_STRING(""),
#endif
	.baud = 0 | CO_BAUD_10 | CO_BAUD_20 | CO_BAUD_50 | CO_BAUD_125 | CO_BAUD_250 | CO_BAUD_500 | CO_BAUD_800 | CO_BAUD_1000,
	.rate = 1000,
	.lss = 1,
	.dummy = 0x0F7F00FE
};

static struct {
	co_unsigned32_t sub0;
} MySlave1_1000_val = {
	.sub0 = 0x00000000,
};

static co_obj_t MySlave1_1000 = {
	.node = { .key = &MySlave1_1000.idx },
	.idx = 0x1000,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1000_val,
	.size = sizeof(MySlave1_1000_val)
};

static co_sub_t MySlave1_1000sub0 = {
	.node = { .key = &MySlave1_1000sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1000_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
} MySlave1_1001_val = {
	.sub0 = 0x00,
};

static co_obj_t MySlave1_1001 = {
	.node = { .key = &MySlave1_1001.idx },
	.idx = 0x1001,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error register"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1001_val,
	.size = sizeof(MySlave1_1001_val)
};

static co_sub_t MySlave1_1001sub0 = {
	.node = { .key = &MySlave1_1001sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error register"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1001_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned32_t sub2;
	co_unsigned32_t sub3;
	co_unsigned32_t sub4;
	co_unsigned32_t sub5;
} MySlave1_1003_val = {
	.sub0 = 0x05,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
};

static co_obj_t MySlave1_1003 = {
	.node = { .key = &MySlave1_1003.idx },
	.idx = 0x1003,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1003_val,
	.size = sizeof(MySlave1_1003_val)
};

static co_sub_t MySlave1_1003sub0 = {
	.node = { .key = &MySlave1_1003sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NrOfObjects"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x05 },
#endif
	.val = &MySlave1_1003_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1003sub1 = {
	.node = { .key = &MySlave1_1003sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1003_val.sub1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1003sub2 = {
	.node = { .key = &MySlave1_1003sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1003_val.sub2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1003sub3 = {
	.node = { .key = &MySlave1_1003sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1003_val.sub3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1003sub4 = {
	.node = { .key = &MySlave1_1003sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1003_val.sub4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1003sub5 = {
	.node = { .key = &MySlave1_1003sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1003_val.sub5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned32_t sub0;
} MySlave1_1005_val = {
	.sub0 = 0x00000080,
};

static co_obj_t MySlave1_1005 = {
	.node = { .key = &MySlave1_1005.idx },
	.idx = 0x1005,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID SYNC message"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1005_val,
	.size = sizeof(MySlave1_1005_val)
};

static co_sub_t MySlave1_1005sub0 = {
	.node = { .key = &MySlave1_1005sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID SYNC message"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000080 },
#endif
	.val = &MySlave1_1005_val.sub0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned32_t sub0;
} MySlave1_1014_val = {
	.sub0 = 0x0000017F,
};

static co_obj_t MySlave1_1014 = {
	.node = { .key = &MySlave1_1014.idx },
	.idx = 0x1014,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID EMCY"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1014_val,
	.size = sizeof(MySlave1_1014_val)
};

static co_sub_t MySlave1_1014sub0 = {
	.node = { .key = &MySlave1_1014sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID EMCY"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x0000017F },
#endif
	.val = &MySlave1_1014_val.sub0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0 | CO_OBJ_FLAGS_DEF_NODEID | CO_OBJ_FLAGS_VAL_NODEID,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned16_t sub0;
} MySlave1_1015_val = {
	.sub0 = 0x0000,
};

static co_obj_t MySlave1_1015 = {
	.node = { .key = &MySlave1_1015.idx },
	.idx = 0x1015,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Inhibit time EMCY"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1015_val,
	.size = sizeof(MySlave1_1015_val)
};

static co_sub_t MySlave1_1015sub0 = {
	.node = { .key = &MySlave1_1015sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Inhibit time EMCY"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1015_val.sub0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
} MySlave1_1016_val = {
	.sub0 = 0x01,
	.sub1 = 0x00000000,
};

static co_obj_t MySlave1_1016 = {
	.node = { .key = &MySlave1_1016.idx },
	.idx = 0x1016,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1016_val,
	.size = sizeof(MySlave1_1016_val)
};

static co_sub_t MySlave1_1016sub0 = {
	.node = { .key = &MySlave1_1016sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NrOfObjects"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x01 },
#endif
	.val = &MySlave1_1016_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1016sub1 = {
	.node = { .key = &MySlave1_1016sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1016_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned16_t sub0;
} MySlave1_1017_val = {
	.sub0 = 0x0000,
};

static co_obj_t MySlave1_1017 = {
	.node = { .key = &MySlave1_1017.idx },
	.idx = 0x1017,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Producer heartbeat time"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1017_val,
	.size = sizeof(MySlave1_1017_val)
};

static co_sub_t MySlave1_1017sub0 = {
	.node = { .key = &MySlave1_1017sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Producer heartbeat time"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1017_val.sub0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned32_t sub2;
	co_unsigned32_t sub3;
	co_unsigned32_t sub4;
} MySlave1_1018_val = {
	.sub0 = 0x04,
	.sub1 = 0x00000360,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
};

static co_obj_t MySlave1_1018 = {
	.node = { .key = &MySlave1_1018.idx },
	.idx = 0x1018,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Identity object"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1018_val,
	.size = sizeof(MySlave1_1018_val)
};

static co_sub_t MySlave1_1018sub0 = {
	.node = { .key = &MySlave1_1018sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Highest sub-index supported"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x04 },
#endif
	.val = &MySlave1_1018_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1018sub1 = {
	.node = { .key = &MySlave1_1018sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor-ID"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000360 },
#endif
	.val = &MySlave1_1018_val.sub1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1018sub2 = {
	.node = { .key = &MySlave1_1018sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1018_val.sub2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1018sub3 = {
	.node = { .key = &MySlave1_1018sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision number"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1018_val.sub3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1018sub4 = {
	.node = { .key = &MySlave1_1018sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1018_val.sub4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned8_t sub1;
} MySlave1_1029_val = {
	.sub0 = 0x01,
	.sub1 = 0x00,
};

static co_obj_t MySlave1_1029 = {
	.node = { .key = &MySlave1_1029.idx },
	.idx = 0x1029,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1029_val,
	.size = sizeof(MySlave1_1029_val)
};

static co_sub_t MySlave1_1029sub0 = {
	.node = { .key = &MySlave1_1029sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NrOfObjects"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x01 },
#endif
	.val = &MySlave1_1029_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1029sub1 = {
	.node = { .key = &MySlave1_1029sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1029_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned8_t sub2;
	co_unsigned16_t sub3;
	co_unsigned8_t sub4;
	co_unsigned16_t sub5;
} MySlave1_1400_val = {
	.sub0 = 0x05,
	.sub1 = 0x000002FF,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
};

static co_obj_t MySlave1_1400 = {
	.node = { .key = &MySlave1_1400.idx },
	.idx = 0x1400,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO1 communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1400_val,
	.size = sizeof(MySlave1_1400_val)
};

static co_sub_t MySlave1_1400sub0 = {
	.node = { .key = &MySlave1_1400sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("highest sub-index supported"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x05 },
#endif
	.val = &MySlave1_1400_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1400sub1 = {
	.node = { .key = &MySlave1_1400sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by RPDO1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x000002FF },
#endif
	.val = &MySlave1_1400_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0 | CO_OBJ_FLAGS_DEF_NODEID | CO_OBJ_FLAGS_VAL_NODEID,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1400sub2 = {
	.node = { .key = &MySlave1_1400sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("transmission type"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x01 },
#endif
	.val = &MySlave1_1400_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1400sub3 = {
	.node = { .key = &MySlave1_1400sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("inhibit time"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1400_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1400sub4 = {
	.node = { .key = &MySlave1_1400sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("compatibility entry"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1400_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1400sub5 = {
	.node = { .key = &MySlave1_1400sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("event-timer"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1400_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned8_t sub2;
	co_unsigned16_t sub3;
	co_unsigned8_t sub4;
	co_unsigned16_t sub5;
} MySlave1_1401_val = {
	.sub0 = 0x05,
	.sub1 = 0x000003FF,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
};

static co_obj_t MySlave1_1401 = {
	.node = { .key = &MySlave1_1401.idx },
	.idx = 0x1401,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO2 communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1401_val,
	.size = sizeof(MySlave1_1401_val)
};

static co_sub_t MySlave1_1401sub0 = {
	.node = { .key = &MySlave1_1401sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("highest sub-index supported"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x05 },
#endif
	.val = &MySlave1_1401_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1401sub1 = {
	.node = { .key = &MySlave1_1401sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by RPDO2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x000003FF },
#endif
	.val = &MySlave1_1401_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0 | CO_OBJ_FLAGS_DEF_NODEID | CO_OBJ_FLAGS_VAL_NODEID,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1401sub2 = {
	.node = { .key = &MySlave1_1401sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("transmission type"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x01 },
#endif
	.val = &MySlave1_1401_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1401sub3 = {
	.node = { .key = &MySlave1_1401sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("inhibit time"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1401_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1401sub4 = {
	.node = { .key = &MySlave1_1401sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("compatibility entry"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1401_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1401sub5 = {
	.node = { .key = &MySlave1_1401sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("event-timer"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1401_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
} MySlave1_1600_val = {
	.sub0 = 0x01,
	.sub1 = 0x40000020,
};

static co_obj_t MySlave1_1600 = {
	.node = { .key = &MySlave1_1600.idx },
	.idx = 0x1600,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO1 mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1600_val,
	.size = sizeof(MySlave1_1600_val)
};

static co_sub_t MySlave1_1600sub0 = {
	.node = { .key = &MySlave1_1600sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NrOfObjects"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x01 },
#endif
	.val = &MySlave1_1600_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1600sub1 = {
	.node = { .key = &MySlave1_1600sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO1 mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1600_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned32_t sub2;
} MySlave1_1601_val = {
	.sub0 = 0x02,
	.sub1 = 0x60400010,
	.sub2 = 0x607A0020,
};

static co_obj_t MySlave1_1601 = {
	.node = { .key = &MySlave1_1601.idx },
	.idx = 0x1601,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO2 mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1601_val,
	.size = sizeof(MySlave1_1601_val)
};

static co_sub_t MySlave1_1601sub0 = {
	.node = { .key = &MySlave1_1601sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NrOfObjects"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x02 },
#endif
	.val = &MySlave1_1601_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1601sub1 = {
	.node = { .key = &MySlave1_1601sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO2 mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1601_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1601sub2 = {
	.node = { .key = &MySlave1_1601sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO2 mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1601_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned8_t sub2;
	co_unsigned16_t sub3;
	co_unsigned8_t sub4;
	co_unsigned16_t sub5;
	co_unsigned8_t sub6;
} MySlave1_1800_val = {
	.sub0 = 0x06,
	.sub1 = 0x0000027F,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
	.sub6 = 0x00,
};

static co_obj_t MySlave1_1800 = {
	.node = { .key = &MySlave1_1800.idx },
	.idx = 0x1800,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO1 communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1800_val,
	.size = sizeof(MySlave1_1800_val)
};

static co_sub_t MySlave1_1800sub0 = {
	.node = { .key = &MySlave1_1800sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("highest sub-index supported"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x06 },
#endif
	.val = &MySlave1_1800_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1800sub1 = {
	.node = { .key = &MySlave1_1800sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by TPDO1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x0000027F },
#endif
	.val = &MySlave1_1800_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0 | CO_OBJ_FLAGS_DEF_NODEID | CO_OBJ_FLAGS_VAL_NODEID,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1800sub2 = {
	.node = { .key = &MySlave1_1800sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("transmission type"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x01 },
#endif
	.val = &MySlave1_1800_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1800sub3 = {
	.node = { .key = &MySlave1_1800sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("inhibit time"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1800_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1800sub4 = {
	.node = { .key = &MySlave1_1800sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("reserved"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1800_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1800sub5 = {
	.node = { .key = &MySlave1_1800sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("event timer"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1800_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1800sub6 = {
	.node = { .key = &MySlave1_1800sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("SYNC start value"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1800_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned8_t sub2;
	co_unsigned16_t sub3;
	co_unsigned8_t sub4;
	co_unsigned16_t sub5;
	co_unsigned8_t sub6;
} MySlave1_1801_val = {
	.sub0 = 0x06,
	.sub1 = 0x0000037F,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
	.sub6 = 0x00,
};

static co_obj_t MySlave1_1801 = {
	.node = { .key = &MySlave1_1801.idx },
	.idx = 0x1801,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO2 communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1801_val,
	.size = sizeof(MySlave1_1801_val)
};

static co_sub_t MySlave1_1801sub0 = {
	.node = { .key = &MySlave1_1801sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("highest sub-index supported"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x06 },
#endif
	.val = &MySlave1_1801_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1801sub1 = {
	.node = { .key = &MySlave1_1801sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by TPDO2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x0000037F },
#endif
	.val = &MySlave1_1801_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0 | CO_OBJ_FLAGS_DEF_NODEID | CO_OBJ_FLAGS_VAL_NODEID,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1801sub2 = {
	.node = { .key = &MySlave1_1801sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("transmission type"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x01 },
#endif
	.val = &MySlave1_1801_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1801sub3 = {
	.node = { .key = &MySlave1_1801sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("inhibit time"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1801_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1801sub4 = {
	.node = { .key = &MySlave1_1801sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("reserved"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1801_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1801sub5 = {
	.node = { .key = &MySlave1_1801sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("event timer"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_1801_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1801sub6 = {
	.node = { .key = &MySlave1_1801sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("SYNC start value"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MySlave1_1801_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned32_t sub2;
} MySlave1_1A00_val = {
	.sub0 = 0x02,
	.sub1 = 0x40010010,
	.sub2 = 0x40020010,
};

static co_obj_t MySlave1_1A00 = {
	.node = { .key = &MySlave1_1A00.idx },
	.idx = 0x1A00,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO1 mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1A00_val,
	.size = sizeof(MySlave1_1A00_val)
};

static co_sub_t MySlave1_1A00sub0 = {
	.node = { .key = &MySlave1_1A00sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NrOfObjects"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x02 },
#endif
	.val = &MySlave1_1A00_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1A00sub1 = {
	.node = { .key = &MySlave1_1A00sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO1 mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1A00_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1A00sub2 = {
	.node = { .key = &MySlave1_1A00sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO1 mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1A00_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
	co_unsigned32_t sub2;
} MySlave1_1A01_val = {
	.sub0 = 0x02,
	.sub1 = 0x60410010,
	.sub2 = 0x60640020,
};

static co_obj_t MySlave1_1A01 = {
	.node = { .key = &MySlave1_1A01.idx },
	.idx = 0x1A01,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO2 mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_1A01_val,
	.size = sizeof(MySlave1_1A01_val)
};

static co_sub_t MySlave1_1A01sub0 = {
	.node = { .key = &MySlave1_1A01sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NrOfObjects"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x02 },
#endif
	.val = &MySlave1_1A01_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1A01sub1 = {
	.node = { .key = &MySlave1_1A01sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO2 mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1A01_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MySlave1_1A01sub2 = {
	.node = { .key = &MySlave1_1A01sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO2 mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_1A01_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned32_t sub0;
} MySlave1_4000_val = {
	.sub0 = 0x00000000,
};

static co_obj_t MySlave1_4000 = {
	.node = { .key = &MySlave1_4000.idx },
	.idx = 0x4000,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("UNSIGNED32 received by slave"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_4000_val,
	.size = sizeof(MySlave1_4000_val)
};

static co_sub_t MySlave1_4000sub0 = {
	.node = { .key = &MySlave1_4000sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("UNSIGNED32 received by slave"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MySlave1_4000_val.sub0,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned16_t sub0;
} MySlave1_4001_val = {
	.sub0 = 0x0000,
};

static co_obj_t MySlave1_4001 = {
	.node = { .key = &MySlave1_4001.idx },
	.idx = 0x4001,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("UNSIGNED16 sent from slave"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_4001_val,
	.size = sizeof(MySlave1_4001_val)
};

static co_sub_t MySlave1_4001sub0 = {
	.node = { .key = &MySlave1_4001sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("UNSIGNED16 sent from slave"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_4001_val.sub0,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned16_t sub0;
} MySlave1_4002_val = {
	.sub0 = 0x0000,
};

static co_obj_t MySlave1_4002 = {
	.node = { .key = &MySlave1_4002.idx },
	.idx = 0x4002,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("UNSIGNED16 sent from slave"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_4002_val,
	.size = sizeof(MySlave1_4002_val)
};

static co_sub_t MySlave1_4002sub0 = {
	.node = { .key = &MySlave1_4002sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("UNSIGNED16 sent from slave"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_4002_val.sub0,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned16_t sub0;
} MySlave1_6040_val = {
	.sub0 = 0x0000,
};

static co_obj_t MySlave1_6040 = {
	.node = { .key = &MySlave1_6040.idx },
	.idx = 0x6040,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Controlword"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_6040_val,
	.size = sizeof(MySlave1_6040_val)
};

static co_sub_t MySlave1_6040sub0 = {
	.node = { .key = &MySlave1_6040sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Controlword"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_6040_val.sub0,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned16_t sub0;
} MySlave1_6041_val = {
	.sub0 = 0x0000,
};

static co_obj_t MySlave1_6041 = {
	.node = { .key = &MySlave1_6041.idx },
	.idx = 0x6041,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Statusword"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_6041_val,
	.size = sizeof(MySlave1_6041_val)
};

static co_sub_t MySlave1_6041sub0 = {
	.node = { .key = &MySlave1_6041sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Statusword"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MySlave1_6041_val.sub0,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_integer8_t sub0;
} MySlave1_6060_val = {
	.sub0 = 0,
};

static co_obj_t MySlave1_6060 = {
	.node = { .key = &MySlave1_6060.idx },
	.idx = 0x6060,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Modes of operation"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_6060_val,
	.size = sizeof(MySlave1_6060_val)
};

static co_sub_t MySlave1_6060sub0 = {
	.node = { .key = &MySlave1_6060sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_INTEGER8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Modes of operation"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i8 = CO_INTEGER8_MIN },
	.max = { .i8 = CO_INTEGER8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i8 = 0 },
#endif
	.val = &MySlave1_6060_val.sub0,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_integer32_t sub0;
} MySlave1_6064_val = {
	.sub0 = 0,
};

static co_obj_t MySlave1_6064 = {
	.node = { .key = &MySlave1_6064.idx },
	.idx = 0x6064,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Position actual value"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_6064_val,
	.size = sizeof(MySlave1_6064_val)
};

static co_sub_t MySlave1_6064sub0 = {
	.node = { .key = &MySlave1_6064sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_INTEGER32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Position actual value"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i32 = CO_INTEGER32_MIN },
	.max = { .i32 = CO_INTEGER32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i32 = 0 },
#endif
	.val = &MySlave1_6064_val.sub0,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_integer32_t sub0;
} MySlave1_606C_val = {
	.sub0 = 0,
};

static co_obj_t MySlave1_606C = {
	.node = { .key = &MySlave1_606C.idx },
	.idx = 0x606C,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Velocity actual value"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_606C_val,
	.size = sizeof(MySlave1_606C_val)
};

static co_sub_t MySlave1_606Csub0 = {
	.node = { .key = &MySlave1_606Csub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_INTEGER32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Velocity actual value"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i32 = CO_INTEGER32_MIN },
	.max = { .i32 = CO_INTEGER32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i32 = 0 },
#endif
	.val = &MySlave1_606C_val.sub0,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_integer16_t sub0;
} MySlave1_6071_val = {
	.sub0 = 0,
};

static co_obj_t MySlave1_6071 = {
	.node = { .key = &MySlave1_6071.idx },
	.idx = 0x6071,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Target torque"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_6071_val,
	.size = sizeof(MySlave1_6071_val)
};

static co_sub_t MySlave1_6071sub0 = {
	.node = { .key = &MySlave1_6071sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_INTEGER16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Target torque"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i16 = CO_INTEGER16_MIN },
	.max = { .i16 = CO_INTEGER16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i16 = 0 },
#endif
	.val = &MySlave1_6071_val.sub0,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_integer16_t sub0;
} MySlave1_6077_val = {
	.sub0 = 0,
};

static co_obj_t MySlave1_6077 = {
	.node = { .key = &MySlave1_6077.idx },
	.idx = 0x6077,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Torque actual value"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_6077_val,
	.size = sizeof(MySlave1_6077_val)
};

static co_sub_t MySlave1_6077sub0 = {
	.node = { .key = &MySlave1_6077sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_INTEGER16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Torque actual value"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i16 = CO_INTEGER16_MIN },
	.max = { .i16 = CO_INTEGER16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i16 = 0 },
#endif
	.val = &MySlave1_6077_val.sub0,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_integer32_t sub0;
} MySlave1_607A_val = {
	.sub0 = 0,
};

static co_obj_t MySlave1_607A = {
	.node = { .key = &MySlave1_607A.idx },
	.idx = 0x607A,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Target position"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_607A_val,
	.size = sizeof(MySlave1_607A_val)
};

static co_sub_t MySlave1_607Asub0 = {
	.node = { .key = &MySlave1_607Asub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_INTEGER32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Target position"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i32 = CO_INTEGER32_MIN },
	.max = { .i32 = CO_INTEGER32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i32 = 0 },
#endif
	.val = &MySlave1_607A_val.sub0,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_integer32_t sub0;
} MySlave1_60FF_val = {
	.sub0 = 0,
};

static co_obj_t MySlave1_60FF = {
	.node = { .key = &MySlave1_60FF.idx },
	.idx = 0x60FF,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Target velocity"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MySlave1_60FF_val,
	.size = sizeof(MySlave1_60FF_val)
};

static co_sub_t MySlave1_60FFsub0 = {
	.node = { .key = &MySlave1_60FFsub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_INTEGER32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Target velocity"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i32 = CO_INTEGER32_MIN },
	.max = { .i32 = CO_INTEGER32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i32 = 0 },
#endif
	.val = &MySlave1_60FF_val.sub0,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

// suppress missing-prototype warning
co_dev_t * MySlave1_init(void);
co_dev_t *
MySlave1_init(void) {
	static co_dev_t *dev = NULL;
	if (!dev) {
		dev = &MySlave1;

		co_dev_insert_obj(&MySlave1, &MySlave1_1000);
		co_obj_insert_sub(&MySlave1_1000, &MySlave1_1000sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_1001);
		co_obj_insert_sub(&MySlave1_1001, &MySlave1_1001sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_1003);
		co_obj_insert_sub(&MySlave1_1003, &MySlave1_1003sub0);
		co_obj_insert_sub(&MySlave1_1003, &MySlave1_1003sub1);
		co_obj_insert_sub(&MySlave1_1003, &MySlave1_1003sub2);
		co_obj_insert_sub(&MySlave1_1003, &MySlave1_1003sub3);
		co_obj_insert_sub(&MySlave1_1003, &MySlave1_1003sub4);
		co_obj_insert_sub(&MySlave1_1003, &MySlave1_1003sub5);

		co_dev_insert_obj(&MySlave1, &MySlave1_1005);
		co_obj_insert_sub(&MySlave1_1005, &MySlave1_1005sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_1014);
		co_obj_insert_sub(&MySlave1_1014, &MySlave1_1014sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_1015);
		co_obj_insert_sub(&MySlave1_1015, &MySlave1_1015sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_1016);
		co_obj_insert_sub(&MySlave1_1016, &MySlave1_1016sub0);
		co_obj_insert_sub(&MySlave1_1016, &MySlave1_1016sub1);

		co_dev_insert_obj(&MySlave1, &MySlave1_1017);
		co_obj_insert_sub(&MySlave1_1017, &MySlave1_1017sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_1018);
		co_obj_insert_sub(&MySlave1_1018, &MySlave1_1018sub0);
		co_obj_insert_sub(&MySlave1_1018, &MySlave1_1018sub1);
		co_obj_insert_sub(&MySlave1_1018, &MySlave1_1018sub2);
		co_obj_insert_sub(&MySlave1_1018, &MySlave1_1018sub3);
		co_obj_insert_sub(&MySlave1_1018, &MySlave1_1018sub4);

		co_dev_insert_obj(&MySlave1, &MySlave1_1029);
		co_obj_insert_sub(&MySlave1_1029, &MySlave1_1029sub0);
		co_obj_insert_sub(&MySlave1_1029, &MySlave1_1029sub1);

		co_dev_insert_obj(&MySlave1, &MySlave1_1400);
		co_obj_insert_sub(&MySlave1_1400, &MySlave1_1400sub0);
		co_obj_insert_sub(&MySlave1_1400, &MySlave1_1400sub1);
		co_obj_insert_sub(&MySlave1_1400, &MySlave1_1400sub2);
		co_obj_insert_sub(&MySlave1_1400, &MySlave1_1400sub3);
		co_obj_insert_sub(&MySlave1_1400, &MySlave1_1400sub4);
		co_obj_insert_sub(&MySlave1_1400, &MySlave1_1400sub5);

		co_dev_insert_obj(&MySlave1, &MySlave1_1401);
		co_obj_insert_sub(&MySlave1_1401, &MySlave1_1401sub0);
		co_obj_insert_sub(&MySlave1_1401, &MySlave1_1401sub1);
		co_obj_insert_sub(&MySlave1_1401, &MySlave1_1401sub2);
		co_obj_insert_sub(&MySlave1_1401, &MySlave1_1401sub3);
		co_obj_insert_sub(&MySlave1_1401, &MySlave1_1401sub4);
		co_obj_insert_sub(&MySlave1_1401, &MySlave1_1401sub5);

		co_dev_insert_obj(&MySlave1, &MySlave1_1600);
		co_obj_insert_sub(&MySlave1_1600, &MySlave1_1600sub0);
		co_obj_insert_sub(&MySlave1_1600, &MySlave1_1600sub1);

		co_dev_insert_obj(&MySlave1, &MySlave1_1601);
		co_obj_insert_sub(&MySlave1_1601, &MySlave1_1601sub0);
		co_obj_insert_sub(&MySlave1_1601, &MySlave1_1601sub1);
		co_obj_insert_sub(&MySlave1_1601, &MySlave1_1601sub2);

		co_dev_insert_obj(&MySlave1, &MySlave1_1800);
		co_obj_insert_sub(&MySlave1_1800, &MySlave1_1800sub0);
		co_obj_insert_sub(&MySlave1_1800, &MySlave1_1800sub1);
		co_obj_insert_sub(&MySlave1_1800, &MySlave1_1800sub2);
		co_obj_insert_sub(&MySlave1_1800, &MySlave1_1800sub3);
		co_obj_insert_sub(&MySlave1_1800, &MySlave1_1800sub4);
		co_obj_insert_sub(&MySlave1_1800, &MySlave1_1800sub5);
		co_obj_insert_sub(&MySlave1_1800, &MySlave1_1800sub6);

		co_dev_insert_obj(&MySlave1, &MySlave1_1801);
		co_obj_insert_sub(&MySlave1_1801, &MySlave1_1801sub0);
		co_obj_insert_sub(&MySlave1_1801, &MySlave1_1801sub1);
		co_obj_insert_sub(&MySlave1_1801, &MySlave1_1801sub2);
		co_obj_insert_sub(&MySlave1_1801, &MySlave1_1801sub3);
		co_obj_insert_sub(&MySlave1_1801, &MySlave1_1801sub4);
		co_obj_insert_sub(&MySlave1_1801, &MySlave1_1801sub5);
		co_obj_insert_sub(&MySlave1_1801, &MySlave1_1801sub6);

		co_dev_insert_obj(&MySlave1, &MySlave1_1A00);
		co_obj_insert_sub(&MySlave1_1A00, &MySlave1_1A00sub0);
		co_obj_insert_sub(&MySlave1_1A00, &MySlave1_1A00sub1);
		co_obj_insert_sub(&MySlave1_1A00, &MySlave1_1A00sub2);

		co_dev_insert_obj(&MySlave1, &MySlave1_1A01);
		co_obj_insert_sub(&MySlave1_1A01, &MySlave1_1A01sub0);
		co_obj_insert_sub(&MySlave1_1A01, &MySlave1_1A01sub1);
		co_obj_insert_sub(&MySlave1_1A01, &MySlave1_1A01sub2);

		co_dev_insert_obj(&MySlave1, &MySlave1_4000);
		co_obj_insert_sub(&MySlave1_4000, &MySlave1_4000sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_4001);
		co_obj_insert_sub(&MySlave1_4001, &MySlave1_4001sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_4002);
		co_obj_insert_sub(&MySlave1_4002, &MySlave1_4002sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_6040);
		co_obj_insert_sub(&MySlave1_6040, &MySlave1_6040sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_6041);
		co_obj_insert_sub(&MySlave1_6041, &MySlave1_6041sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_6060);
		co_obj_insert_sub(&MySlave1_6060, &MySlave1_6060sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_6064);
		co_obj_insert_sub(&MySlave1_6064, &MySlave1_6064sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_606C);
		co_obj_insert_sub(&MySlave1_606C, &MySlave1_606Csub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_6071);
		co_obj_insert_sub(&MySlave1_6071, &MySlave1_6071sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_6077);
		co_obj_insert_sub(&MySlave1_6077, &MySlave1_6077sub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_607A);
		co_obj_insert_sub(&MySlave1_607A, &MySlave1_607Asub0);

		co_dev_insert_obj(&MySlave1, &MySlave1_60FF);
		co_obj_insert_sub(&MySlave1_60FF, &MySlave1_60FFsub0);
	}
	return dev;
}
