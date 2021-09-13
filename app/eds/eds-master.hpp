#if !LELY_NO_MALLOC
#error Static object dictionaries are only supported when dynamic memory allocation is disabled.
#endif

#include <lely/co/detail/dev.h>
#include <lely/co/detail/obj.h>
#include <lely/util/cmp.h>

#define CO_DEV_STRING(s) s

static co_dev_t MyMaster = {
	.netid = 0,
	.id = 255,
	.tree = { .cmp = &uint16_cmp },
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING(""),
	.vendor_name = CO_DEV_STRING(""),
#endif
	.vendor_id = 0x00000000,
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
	.dummy = 0x0F7D00FE
};

static struct {
	co_unsigned32_t sub0;
} MyMaster_1000_val = {
	.sub0 = 0x00000000,
};

static co_obj_t MyMaster_1000 = {
	.node = { .key = &MyMaster_1000.idx },
	.idx = 0x1000,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1000_val,
	.size = sizeof(MyMaster_1000_val)
};

static co_sub_t MyMaster_1000sub0 = {
	.node = { .key = &MyMaster_1000sub0.subidx },
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
	.val = &MyMaster_1000_val.sub0,
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
} MyMaster_1001_val = {
	.sub0 = 0x00,
};

static co_obj_t MyMaster_1001 = {
	.node = { .key = &MyMaster_1001.idx },
	.idx = 0x1001,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error register"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1001_val,
	.size = sizeof(MyMaster_1001_val)
};

static co_sub_t MyMaster_1001sub0 = {
	.node = { .key = &MyMaster_1001sub0.subidx },
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
	.val = &MyMaster_1001_val.sub0,
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
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
	co_unsigned32_t sub10;
	co_unsigned32_t sub11;
	co_unsigned32_t sub12;
	co_unsigned32_t sub13;
	co_unsigned32_t sub14;
	co_unsigned32_t sub15;
	co_unsigned32_t sub16;
	co_unsigned32_t sub17;
	co_unsigned32_t sub18;
	co_unsigned32_t sub19;
	co_unsigned32_t sub1A;
	co_unsigned32_t sub1B;
	co_unsigned32_t sub1C;
	co_unsigned32_t sub1D;
	co_unsigned32_t sub1E;
	co_unsigned32_t sub1F;
	co_unsigned32_t sub20;
	co_unsigned32_t sub21;
	co_unsigned32_t sub22;
	co_unsigned32_t sub23;
	co_unsigned32_t sub24;
	co_unsigned32_t sub25;
	co_unsigned32_t sub26;
	co_unsigned32_t sub27;
	co_unsigned32_t sub28;
	co_unsigned32_t sub29;
	co_unsigned32_t sub2A;
	co_unsigned32_t sub2B;
	co_unsigned32_t sub2C;
	co_unsigned32_t sub2D;
	co_unsigned32_t sub2E;
	co_unsigned32_t sub2F;
	co_unsigned32_t sub30;
	co_unsigned32_t sub31;
	co_unsigned32_t sub32;
	co_unsigned32_t sub33;
	co_unsigned32_t sub34;
	co_unsigned32_t sub35;
	co_unsigned32_t sub36;
	co_unsigned32_t sub37;
	co_unsigned32_t sub38;
	co_unsigned32_t sub39;
	co_unsigned32_t sub3A;
	co_unsigned32_t sub3B;
	co_unsigned32_t sub3C;
	co_unsigned32_t sub3D;
	co_unsigned32_t sub3E;
	co_unsigned32_t sub3F;
	co_unsigned32_t sub40;
	co_unsigned32_t sub41;
	co_unsigned32_t sub42;
	co_unsigned32_t sub43;
	co_unsigned32_t sub44;
	co_unsigned32_t sub45;
	co_unsigned32_t sub46;
	co_unsigned32_t sub47;
	co_unsigned32_t sub48;
	co_unsigned32_t sub49;
	co_unsigned32_t sub4A;
	co_unsigned32_t sub4B;
	co_unsigned32_t sub4C;
	co_unsigned32_t sub4D;
	co_unsigned32_t sub4E;
	co_unsigned32_t sub4F;
	co_unsigned32_t sub50;
	co_unsigned32_t sub51;
	co_unsigned32_t sub52;
	co_unsigned32_t sub53;
	co_unsigned32_t sub54;
	co_unsigned32_t sub55;
	co_unsigned32_t sub56;
	co_unsigned32_t sub57;
	co_unsigned32_t sub58;
	co_unsigned32_t sub59;
	co_unsigned32_t sub5A;
	co_unsigned32_t sub5B;
	co_unsigned32_t sub5C;
	co_unsigned32_t sub5D;
	co_unsigned32_t sub5E;
	co_unsigned32_t sub5F;
	co_unsigned32_t sub60;
	co_unsigned32_t sub61;
	co_unsigned32_t sub62;
	co_unsigned32_t sub63;
	co_unsigned32_t sub64;
	co_unsigned32_t sub65;
	co_unsigned32_t sub66;
	co_unsigned32_t sub67;
	co_unsigned32_t sub68;
	co_unsigned32_t sub69;
	co_unsigned32_t sub6A;
	co_unsigned32_t sub6B;
	co_unsigned32_t sub6C;
	co_unsigned32_t sub6D;
	co_unsigned32_t sub6E;
	co_unsigned32_t sub6F;
	co_unsigned32_t sub70;
	co_unsigned32_t sub71;
	co_unsigned32_t sub72;
	co_unsigned32_t sub73;
	co_unsigned32_t sub74;
	co_unsigned32_t sub75;
	co_unsigned32_t sub76;
	co_unsigned32_t sub77;
	co_unsigned32_t sub78;
	co_unsigned32_t sub79;
	co_unsigned32_t sub7A;
	co_unsigned32_t sub7B;
	co_unsigned32_t sub7C;
	co_unsigned32_t sub7D;
	co_unsigned32_t sub7E;
	co_unsigned32_t sub7F;
	co_unsigned32_t sub80;
	co_unsigned32_t sub81;
	co_unsigned32_t sub82;
	co_unsigned32_t sub83;
	co_unsigned32_t sub84;
	co_unsigned32_t sub85;
	co_unsigned32_t sub86;
	co_unsigned32_t sub87;
	co_unsigned32_t sub88;
	co_unsigned32_t sub89;
	co_unsigned32_t sub8A;
	co_unsigned32_t sub8B;
	co_unsigned32_t sub8C;
	co_unsigned32_t sub8D;
	co_unsigned32_t sub8E;
	co_unsigned32_t sub8F;
	co_unsigned32_t sub90;
	co_unsigned32_t sub91;
	co_unsigned32_t sub92;
	co_unsigned32_t sub93;
	co_unsigned32_t sub94;
	co_unsigned32_t sub95;
	co_unsigned32_t sub96;
	co_unsigned32_t sub97;
	co_unsigned32_t sub98;
	co_unsigned32_t sub99;
	co_unsigned32_t sub9A;
	co_unsigned32_t sub9B;
	co_unsigned32_t sub9C;
	co_unsigned32_t sub9D;
	co_unsigned32_t sub9E;
	co_unsigned32_t sub9F;
	co_unsigned32_t subA0;
	co_unsigned32_t subA1;
	co_unsigned32_t subA2;
	co_unsigned32_t subA3;
	co_unsigned32_t subA4;
	co_unsigned32_t subA5;
	co_unsigned32_t subA6;
	co_unsigned32_t subA7;
	co_unsigned32_t subA8;
	co_unsigned32_t subA9;
	co_unsigned32_t subAA;
	co_unsigned32_t subAB;
	co_unsigned32_t subAC;
	co_unsigned32_t subAD;
	co_unsigned32_t subAE;
	co_unsigned32_t subAF;
	co_unsigned32_t subB0;
	co_unsigned32_t subB1;
	co_unsigned32_t subB2;
	co_unsigned32_t subB3;
	co_unsigned32_t subB4;
	co_unsigned32_t subB5;
	co_unsigned32_t subB6;
	co_unsigned32_t subB7;
	co_unsigned32_t subB8;
	co_unsigned32_t subB9;
	co_unsigned32_t subBA;
	co_unsigned32_t subBB;
	co_unsigned32_t subBC;
	co_unsigned32_t subBD;
	co_unsigned32_t subBE;
	co_unsigned32_t subBF;
	co_unsigned32_t subC0;
	co_unsigned32_t subC1;
	co_unsigned32_t subC2;
	co_unsigned32_t subC3;
	co_unsigned32_t subC4;
	co_unsigned32_t subC5;
	co_unsigned32_t subC6;
	co_unsigned32_t subC7;
	co_unsigned32_t subC8;
	co_unsigned32_t subC9;
	co_unsigned32_t subCA;
	co_unsigned32_t subCB;
	co_unsigned32_t subCC;
	co_unsigned32_t subCD;
	co_unsigned32_t subCE;
	co_unsigned32_t subCF;
	co_unsigned32_t subD0;
	co_unsigned32_t subD1;
	co_unsigned32_t subD2;
	co_unsigned32_t subD3;
	co_unsigned32_t subD4;
	co_unsigned32_t subD5;
	co_unsigned32_t subD6;
	co_unsigned32_t subD7;
	co_unsigned32_t subD8;
	co_unsigned32_t subD9;
	co_unsigned32_t subDA;
	co_unsigned32_t subDB;
	co_unsigned32_t subDC;
	co_unsigned32_t subDD;
	co_unsigned32_t subDE;
	co_unsigned32_t subDF;
	co_unsigned32_t subE0;
	co_unsigned32_t subE1;
	co_unsigned32_t subE2;
	co_unsigned32_t subE3;
	co_unsigned32_t subE4;
	co_unsigned32_t subE5;
	co_unsigned32_t subE6;
	co_unsigned32_t subE7;
	co_unsigned32_t subE8;
	co_unsigned32_t subE9;
	co_unsigned32_t subEA;
	co_unsigned32_t subEB;
	co_unsigned32_t subEC;
	co_unsigned32_t subED;
	co_unsigned32_t subEE;
	co_unsigned32_t subEF;
	co_unsigned32_t subF0;
	co_unsigned32_t subF1;
	co_unsigned32_t subF2;
	co_unsigned32_t subF3;
	co_unsigned32_t subF4;
	co_unsigned32_t subF5;
	co_unsigned32_t subF6;
	co_unsigned32_t subF7;
	co_unsigned32_t subF8;
	co_unsigned32_t subF9;
	co_unsigned32_t subFA;
	co_unsigned32_t subFB;
	co_unsigned32_t subFC;
	co_unsigned32_t subFD;
	co_unsigned32_t subFE;
} MyMaster_1003_val = {
	.sub0 = 0xFE,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
	.sub10 = 0x00000000,
	.sub11 = 0x00000000,
	.sub12 = 0x00000000,
	.sub13 = 0x00000000,
	.sub14 = 0x00000000,
	.sub15 = 0x00000000,
	.sub16 = 0x00000000,
	.sub17 = 0x00000000,
	.sub18 = 0x00000000,
	.sub19 = 0x00000000,
	.sub1A = 0x00000000,
	.sub1B = 0x00000000,
	.sub1C = 0x00000000,
	.sub1D = 0x00000000,
	.sub1E = 0x00000000,
	.sub1F = 0x00000000,
	.sub20 = 0x00000000,
	.sub21 = 0x00000000,
	.sub22 = 0x00000000,
	.sub23 = 0x00000000,
	.sub24 = 0x00000000,
	.sub25 = 0x00000000,
	.sub26 = 0x00000000,
	.sub27 = 0x00000000,
	.sub28 = 0x00000000,
	.sub29 = 0x00000000,
	.sub2A = 0x00000000,
	.sub2B = 0x00000000,
	.sub2C = 0x00000000,
	.sub2D = 0x00000000,
	.sub2E = 0x00000000,
	.sub2F = 0x00000000,
	.sub30 = 0x00000000,
	.sub31 = 0x00000000,
	.sub32 = 0x00000000,
	.sub33 = 0x00000000,
	.sub34 = 0x00000000,
	.sub35 = 0x00000000,
	.sub36 = 0x00000000,
	.sub37 = 0x00000000,
	.sub38 = 0x00000000,
	.sub39 = 0x00000000,
	.sub3A = 0x00000000,
	.sub3B = 0x00000000,
	.sub3C = 0x00000000,
	.sub3D = 0x00000000,
	.sub3E = 0x00000000,
	.sub3F = 0x00000000,
	.sub40 = 0x00000000,
	.sub41 = 0x00000000,
	.sub42 = 0x00000000,
	.sub43 = 0x00000000,
	.sub44 = 0x00000000,
	.sub45 = 0x00000000,
	.sub46 = 0x00000000,
	.sub47 = 0x00000000,
	.sub48 = 0x00000000,
	.sub49 = 0x00000000,
	.sub4A = 0x00000000,
	.sub4B = 0x00000000,
	.sub4C = 0x00000000,
	.sub4D = 0x00000000,
	.sub4E = 0x00000000,
	.sub4F = 0x00000000,
	.sub50 = 0x00000000,
	.sub51 = 0x00000000,
	.sub52 = 0x00000000,
	.sub53 = 0x00000000,
	.sub54 = 0x00000000,
	.sub55 = 0x00000000,
	.sub56 = 0x00000000,
	.sub57 = 0x00000000,
	.sub58 = 0x00000000,
	.sub59 = 0x00000000,
	.sub5A = 0x00000000,
	.sub5B = 0x00000000,
	.sub5C = 0x00000000,
	.sub5D = 0x00000000,
	.sub5E = 0x00000000,
	.sub5F = 0x00000000,
	.sub60 = 0x00000000,
	.sub61 = 0x00000000,
	.sub62 = 0x00000000,
	.sub63 = 0x00000000,
	.sub64 = 0x00000000,
	.sub65 = 0x00000000,
	.sub66 = 0x00000000,
	.sub67 = 0x00000000,
	.sub68 = 0x00000000,
	.sub69 = 0x00000000,
	.sub6A = 0x00000000,
	.sub6B = 0x00000000,
	.sub6C = 0x00000000,
	.sub6D = 0x00000000,
	.sub6E = 0x00000000,
	.sub6F = 0x00000000,
	.sub70 = 0x00000000,
	.sub71 = 0x00000000,
	.sub72 = 0x00000000,
	.sub73 = 0x00000000,
	.sub74 = 0x00000000,
	.sub75 = 0x00000000,
	.sub76 = 0x00000000,
	.sub77 = 0x00000000,
	.sub78 = 0x00000000,
	.sub79 = 0x00000000,
	.sub7A = 0x00000000,
	.sub7B = 0x00000000,
	.sub7C = 0x00000000,
	.sub7D = 0x00000000,
	.sub7E = 0x00000000,
	.sub7F = 0x00000000,
	.sub80 = 0x00000000,
	.sub81 = 0x00000000,
	.sub82 = 0x00000000,
	.sub83 = 0x00000000,
	.sub84 = 0x00000000,
	.sub85 = 0x00000000,
	.sub86 = 0x00000000,
	.sub87 = 0x00000000,
	.sub88 = 0x00000000,
	.sub89 = 0x00000000,
	.sub8A = 0x00000000,
	.sub8B = 0x00000000,
	.sub8C = 0x00000000,
	.sub8D = 0x00000000,
	.sub8E = 0x00000000,
	.sub8F = 0x00000000,
	.sub90 = 0x00000000,
	.sub91 = 0x00000000,
	.sub92 = 0x00000000,
	.sub93 = 0x00000000,
	.sub94 = 0x00000000,
	.sub95 = 0x00000000,
	.sub96 = 0x00000000,
	.sub97 = 0x00000000,
	.sub98 = 0x00000000,
	.sub99 = 0x00000000,
	.sub9A = 0x00000000,
	.sub9B = 0x00000000,
	.sub9C = 0x00000000,
	.sub9D = 0x00000000,
	.sub9E = 0x00000000,
	.sub9F = 0x00000000,
	.subA0 = 0x00000000,
	.subA1 = 0x00000000,
	.subA2 = 0x00000000,
	.subA3 = 0x00000000,
	.subA4 = 0x00000000,
	.subA5 = 0x00000000,
	.subA6 = 0x00000000,
	.subA7 = 0x00000000,
	.subA8 = 0x00000000,
	.subA9 = 0x00000000,
	.subAA = 0x00000000,
	.subAB = 0x00000000,
	.subAC = 0x00000000,
	.subAD = 0x00000000,
	.subAE = 0x00000000,
	.subAF = 0x00000000,
	.subB0 = 0x00000000,
	.subB1 = 0x00000000,
	.subB2 = 0x00000000,
	.subB3 = 0x00000000,
	.subB4 = 0x00000000,
	.subB5 = 0x00000000,
	.subB6 = 0x00000000,
	.subB7 = 0x00000000,
	.subB8 = 0x00000000,
	.subB9 = 0x00000000,
	.subBA = 0x00000000,
	.subBB = 0x00000000,
	.subBC = 0x00000000,
	.subBD = 0x00000000,
	.subBE = 0x00000000,
	.subBF = 0x00000000,
	.subC0 = 0x00000000,
	.subC1 = 0x00000000,
	.subC2 = 0x00000000,
	.subC3 = 0x00000000,
	.subC4 = 0x00000000,
	.subC5 = 0x00000000,
	.subC6 = 0x00000000,
	.subC7 = 0x00000000,
	.subC8 = 0x00000000,
	.subC9 = 0x00000000,
	.subCA = 0x00000000,
	.subCB = 0x00000000,
	.subCC = 0x00000000,
	.subCD = 0x00000000,
	.subCE = 0x00000000,
	.subCF = 0x00000000,
	.subD0 = 0x00000000,
	.subD1 = 0x00000000,
	.subD2 = 0x00000000,
	.subD3 = 0x00000000,
	.subD4 = 0x00000000,
	.subD5 = 0x00000000,
	.subD6 = 0x00000000,
	.subD7 = 0x00000000,
	.subD8 = 0x00000000,
	.subD9 = 0x00000000,
	.subDA = 0x00000000,
	.subDB = 0x00000000,
	.subDC = 0x00000000,
	.subDD = 0x00000000,
	.subDE = 0x00000000,
	.subDF = 0x00000000,
	.subE0 = 0x00000000,
	.subE1 = 0x00000000,
	.subE2 = 0x00000000,
	.subE3 = 0x00000000,
	.subE4 = 0x00000000,
	.subE5 = 0x00000000,
	.subE6 = 0x00000000,
	.subE7 = 0x00000000,
	.subE8 = 0x00000000,
	.subE9 = 0x00000000,
	.subEA = 0x00000000,
	.subEB = 0x00000000,
	.subEC = 0x00000000,
	.subED = 0x00000000,
	.subEE = 0x00000000,
	.subEF = 0x00000000,
	.subF0 = 0x00000000,
	.subF1 = 0x00000000,
	.subF2 = 0x00000000,
	.subF3 = 0x00000000,
	.subF4 = 0x00000000,
	.subF5 = 0x00000000,
	.subF6 = 0x00000000,
	.subF7 = 0x00000000,
	.subF8 = 0x00000000,
	.subF9 = 0x00000000,
	.subFA = 0x00000000,
	.subFB = 0x00000000,
	.subFC = 0x00000000,
	.subFD = 0x00000000,
	.subFE = 0x00000000,
};

static co_obj_t MyMaster_1003 = {
	.node = { .key = &MyMaster_1003.idx },
	.idx = 0x1003,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1003_val,
	.size = sizeof(MyMaster_1003_val)
};

static co_sub_t MyMaster_1003sub0 = {
	.node = { .key = &MyMaster_1003sub0.subidx },
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
	.def = { .u8 = 0xFE },
#endif
	.val = &MyMaster_1003_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub1 = {
	.node = { .key = &MyMaster_1003sub1.subidx },
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
	.val = &MyMaster_1003_val.sub1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub2 = {
	.node = { .key = &MyMaster_1003sub2.subidx },
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
	.val = &MyMaster_1003_val.sub2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub3 = {
	.node = { .key = &MyMaster_1003sub3.subidx },
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
	.val = &MyMaster_1003_val.sub3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub4 = {
	.node = { .key = &MyMaster_1003sub4.subidx },
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
	.val = &MyMaster_1003_val.sub4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub5 = {
	.node = { .key = &MyMaster_1003sub5.subidx },
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
	.val = &MyMaster_1003_val.sub5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub6 = {
	.node = { .key = &MyMaster_1003sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub6,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub7 = {
	.node = { .key = &MyMaster_1003sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub7,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub8 = {
	.node = { .key = &MyMaster_1003sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub8,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub9 = {
	.node = { .key = &MyMaster_1003sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub9,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA = {
	.node = { .key = &MyMaster_1003subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB = {
	.node = { .key = &MyMaster_1003subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC = {
	.node = { .key = &MyMaster_1003subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD = {
	.node = { .key = &MyMaster_1003subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE = {
	.node = { .key = &MyMaster_1003subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF = {
	.node = { .key = &MyMaster_1003subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub10 = {
	.node = { .key = &MyMaster_1003sub10.subidx },
	.subidx = 0x10,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field16"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub10,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub11 = {
	.node = { .key = &MyMaster_1003sub11.subidx },
	.subidx = 0x11,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field17"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub11,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub12 = {
	.node = { .key = &MyMaster_1003sub12.subidx },
	.subidx = 0x12,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field18"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub12,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub13 = {
	.node = { .key = &MyMaster_1003sub13.subidx },
	.subidx = 0x13,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field19"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub13,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub14 = {
	.node = { .key = &MyMaster_1003sub14.subidx },
	.subidx = 0x14,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field20"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub14,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub15 = {
	.node = { .key = &MyMaster_1003sub15.subidx },
	.subidx = 0x15,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field21"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub15,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub16 = {
	.node = { .key = &MyMaster_1003sub16.subidx },
	.subidx = 0x16,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field22"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub16,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub17 = {
	.node = { .key = &MyMaster_1003sub17.subidx },
	.subidx = 0x17,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field23"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub17,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub18 = {
	.node = { .key = &MyMaster_1003sub18.subidx },
	.subidx = 0x18,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field24"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub18,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub19 = {
	.node = { .key = &MyMaster_1003sub19.subidx },
	.subidx = 0x19,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field25"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub19,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub1A = {
	.node = { .key = &MyMaster_1003sub1A.subidx },
	.subidx = 0x1A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field26"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub1A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub1B = {
	.node = { .key = &MyMaster_1003sub1B.subidx },
	.subidx = 0x1B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field27"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub1B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub1C = {
	.node = { .key = &MyMaster_1003sub1C.subidx },
	.subidx = 0x1C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field28"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub1C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub1D = {
	.node = { .key = &MyMaster_1003sub1D.subidx },
	.subidx = 0x1D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field29"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub1D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub1E = {
	.node = { .key = &MyMaster_1003sub1E.subidx },
	.subidx = 0x1E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field30"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub1E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub1F = {
	.node = { .key = &MyMaster_1003sub1F.subidx },
	.subidx = 0x1F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field31"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub1F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub20 = {
	.node = { .key = &MyMaster_1003sub20.subidx },
	.subidx = 0x20,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field32"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub20,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub21 = {
	.node = { .key = &MyMaster_1003sub21.subidx },
	.subidx = 0x21,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field33"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub21,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub22 = {
	.node = { .key = &MyMaster_1003sub22.subidx },
	.subidx = 0x22,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field34"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub22,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub23 = {
	.node = { .key = &MyMaster_1003sub23.subidx },
	.subidx = 0x23,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field35"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub23,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub24 = {
	.node = { .key = &MyMaster_1003sub24.subidx },
	.subidx = 0x24,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field36"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub24,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub25 = {
	.node = { .key = &MyMaster_1003sub25.subidx },
	.subidx = 0x25,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field37"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub25,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub26 = {
	.node = { .key = &MyMaster_1003sub26.subidx },
	.subidx = 0x26,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field38"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub26,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub27 = {
	.node = { .key = &MyMaster_1003sub27.subidx },
	.subidx = 0x27,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field39"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub27,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub28 = {
	.node = { .key = &MyMaster_1003sub28.subidx },
	.subidx = 0x28,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field40"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub28,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub29 = {
	.node = { .key = &MyMaster_1003sub29.subidx },
	.subidx = 0x29,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field41"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub29,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub2A = {
	.node = { .key = &MyMaster_1003sub2A.subidx },
	.subidx = 0x2A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field42"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub2A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub2B = {
	.node = { .key = &MyMaster_1003sub2B.subidx },
	.subidx = 0x2B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field43"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub2B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub2C = {
	.node = { .key = &MyMaster_1003sub2C.subidx },
	.subidx = 0x2C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field44"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub2C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub2D = {
	.node = { .key = &MyMaster_1003sub2D.subidx },
	.subidx = 0x2D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field45"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub2D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub2E = {
	.node = { .key = &MyMaster_1003sub2E.subidx },
	.subidx = 0x2E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field46"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub2E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub2F = {
	.node = { .key = &MyMaster_1003sub2F.subidx },
	.subidx = 0x2F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field47"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub2F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub30 = {
	.node = { .key = &MyMaster_1003sub30.subidx },
	.subidx = 0x30,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field48"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub30,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub31 = {
	.node = { .key = &MyMaster_1003sub31.subidx },
	.subidx = 0x31,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field49"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub31,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub32 = {
	.node = { .key = &MyMaster_1003sub32.subidx },
	.subidx = 0x32,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field50"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub32,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub33 = {
	.node = { .key = &MyMaster_1003sub33.subidx },
	.subidx = 0x33,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field51"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub33,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub34 = {
	.node = { .key = &MyMaster_1003sub34.subidx },
	.subidx = 0x34,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field52"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub34,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub35 = {
	.node = { .key = &MyMaster_1003sub35.subidx },
	.subidx = 0x35,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field53"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub35,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub36 = {
	.node = { .key = &MyMaster_1003sub36.subidx },
	.subidx = 0x36,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field54"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub36,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub37 = {
	.node = { .key = &MyMaster_1003sub37.subidx },
	.subidx = 0x37,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field55"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub37,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub38 = {
	.node = { .key = &MyMaster_1003sub38.subidx },
	.subidx = 0x38,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field56"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub38,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub39 = {
	.node = { .key = &MyMaster_1003sub39.subidx },
	.subidx = 0x39,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field57"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub39,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub3A = {
	.node = { .key = &MyMaster_1003sub3A.subidx },
	.subidx = 0x3A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field58"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub3A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub3B = {
	.node = { .key = &MyMaster_1003sub3B.subidx },
	.subidx = 0x3B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field59"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub3B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub3C = {
	.node = { .key = &MyMaster_1003sub3C.subidx },
	.subidx = 0x3C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field60"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub3C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub3D = {
	.node = { .key = &MyMaster_1003sub3D.subidx },
	.subidx = 0x3D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field61"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub3D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub3E = {
	.node = { .key = &MyMaster_1003sub3E.subidx },
	.subidx = 0x3E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field62"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub3E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub3F = {
	.node = { .key = &MyMaster_1003sub3F.subidx },
	.subidx = 0x3F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field63"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub3F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub40 = {
	.node = { .key = &MyMaster_1003sub40.subidx },
	.subidx = 0x40,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field64"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub40,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub41 = {
	.node = { .key = &MyMaster_1003sub41.subidx },
	.subidx = 0x41,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field65"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub41,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub42 = {
	.node = { .key = &MyMaster_1003sub42.subidx },
	.subidx = 0x42,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field66"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub42,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub43 = {
	.node = { .key = &MyMaster_1003sub43.subidx },
	.subidx = 0x43,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field67"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub43,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub44 = {
	.node = { .key = &MyMaster_1003sub44.subidx },
	.subidx = 0x44,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field68"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub44,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub45 = {
	.node = { .key = &MyMaster_1003sub45.subidx },
	.subidx = 0x45,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field69"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub45,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub46 = {
	.node = { .key = &MyMaster_1003sub46.subidx },
	.subidx = 0x46,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field70"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub46,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub47 = {
	.node = { .key = &MyMaster_1003sub47.subidx },
	.subidx = 0x47,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field71"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub47,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub48 = {
	.node = { .key = &MyMaster_1003sub48.subidx },
	.subidx = 0x48,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field72"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub48,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub49 = {
	.node = { .key = &MyMaster_1003sub49.subidx },
	.subidx = 0x49,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field73"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub49,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub4A = {
	.node = { .key = &MyMaster_1003sub4A.subidx },
	.subidx = 0x4A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field74"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub4A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub4B = {
	.node = { .key = &MyMaster_1003sub4B.subidx },
	.subidx = 0x4B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field75"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub4B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub4C = {
	.node = { .key = &MyMaster_1003sub4C.subidx },
	.subidx = 0x4C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field76"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub4C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub4D = {
	.node = { .key = &MyMaster_1003sub4D.subidx },
	.subidx = 0x4D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field77"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub4D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub4E = {
	.node = { .key = &MyMaster_1003sub4E.subidx },
	.subidx = 0x4E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field78"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub4E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub4F = {
	.node = { .key = &MyMaster_1003sub4F.subidx },
	.subidx = 0x4F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field79"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub4F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub50 = {
	.node = { .key = &MyMaster_1003sub50.subidx },
	.subidx = 0x50,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field80"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub50,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub51 = {
	.node = { .key = &MyMaster_1003sub51.subidx },
	.subidx = 0x51,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field81"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub51,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub52 = {
	.node = { .key = &MyMaster_1003sub52.subidx },
	.subidx = 0x52,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field82"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub52,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub53 = {
	.node = { .key = &MyMaster_1003sub53.subidx },
	.subidx = 0x53,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field83"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub53,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub54 = {
	.node = { .key = &MyMaster_1003sub54.subidx },
	.subidx = 0x54,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field84"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub54,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub55 = {
	.node = { .key = &MyMaster_1003sub55.subidx },
	.subidx = 0x55,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field85"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub55,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub56 = {
	.node = { .key = &MyMaster_1003sub56.subidx },
	.subidx = 0x56,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field86"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub56,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub57 = {
	.node = { .key = &MyMaster_1003sub57.subidx },
	.subidx = 0x57,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field87"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub57,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub58 = {
	.node = { .key = &MyMaster_1003sub58.subidx },
	.subidx = 0x58,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field88"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub58,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub59 = {
	.node = { .key = &MyMaster_1003sub59.subidx },
	.subidx = 0x59,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field89"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub59,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub5A = {
	.node = { .key = &MyMaster_1003sub5A.subidx },
	.subidx = 0x5A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field90"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub5A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub5B = {
	.node = { .key = &MyMaster_1003sub5B.subidx },
	.subidx = 0x5B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field91"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub5B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub5C = {
	.node = { .key = &MyMaster_1003sub5C.subidx },
	.subidx = 0x5C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field92"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub5C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub5D = {
	.node = { .key = &MyMaster_1003sub5D.subidx },
	.subidx = 0x5D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field93"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub5D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub5E = {
	.node = { .key = &MyMaster_1003sub5E.subidx },
	.subidx = 0x5E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field94"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub5E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub5F = {
	.node = { .key = &MyMaster_1003sub5F.subidx },
	.subidx = 0x5F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field95"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub5F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub60 = {
	.node = { .key = &MyMaster_1003sub60.subidx },
	.subidx = 0x60,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field96"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub60,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub61 = {
	.node = { .key = &MyMaster_1003sub61.subidx },
	.subidx = 0x61,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field97"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub61,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub62 = {
	.node = { .key = &MyMaster_1003sub62.subidx },
	.subidx = 0x62,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field98"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub62,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub63 = {
	.node = { .key = &MyMaster_1003sub63.subidx },
	.subidx = 0x63,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field99"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub63,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub64 = {
	.node = { .key = &MyMaster_1003sub64.subidx },
	.subidx = 0x64,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field100"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub64,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub65 = {
	.node = { .key = &MyMaster_1003sub65.subidx },
	.subidx = 0x65,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field101"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub65,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub66 = {
	.node = { .key = &MyMaster_1003sub66.subidx },
	.subidx = 0x66,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field102"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub66,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub67 = {
	.node = { .key = &MyMaster_1003sub67.subidx },
	.subidx = 0x67,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field103"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub67,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub68 = {
	.node = { .key = &MyMaster_1003sub68.subidx },
	.subidx = 0x68,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field104"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub68,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub69 = {
	.node = { .key = &MyMaster_1003sub69.subidx },
	.subidx = 0x69,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field105"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub69,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub6A = {
	.node = { .key = &MyMaster_1003sub6A.subidx },
	.subidx = 0x6A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field106"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub6A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub6B = {
	.node = { .key = &MyMaster_1003sub6B.subidx },
	.subidx = 0x6B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field107"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub6B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub6C = {
	.node = { .key = &MyMaster_1003sub6C.subidx },
	.subidx = 0x6C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field108"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub6C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub6D = {
	.node = { .key = &MyMaster_1003sub6D.subidx },
	.subidx = 0x6D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field109"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub6D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub6E = {
	.node = { .key = &MyMaster_1003sub6E.subidx },
	.subidx = 0x6E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field110"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub6E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub6F = {
	.node = { .key = &MyMaster_1003sub6F.subidx },
	.subidx = 0x6F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field111"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub6F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub70 = {
	.node = { .key = &MyMaster_1003sub70.subidx },
	.subidx = 0x70,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field112"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub70,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub71 = {
	.node = { .key = &MyMaster_1003sub71.subidx },
	.subidx = 0x71,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field113"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub71,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub72 = {
	.node = { .key = &MyMaster_1003sub72.subidx },
	.subidx = 0x72,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field114"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub72,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub73 = {
	.node = { .key = &MyMaster_1003sub73.subidx },
	.subidx = 0x73,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field115"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub73,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub74 = {
	.node = { .key = &MyMaster_1003sub74.subidx },
	.subidx = 0x74,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field116"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub74,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub75 = {
	.node = { .key = &MyMaster_1003sub75.subidx },
	.subidx = 0x75,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field117"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub75,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub76 = {
	.node = { .key = &MyMaster_1003sub76.subidx },
	.subidx = 0x76,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field118"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub76,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub77 = {
	.node = { .key = &MyMaster_1003sub77.subidx },
	.subidx = 0x77,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field119"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub77,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub78 = {
	.node = { .key = &MyMaster_1003sub78.subidx },
	.subidx = 0x78,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field120"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub78,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub79 = {
	.node = { .key = &MyMaster_1003sub79.subidx },
	.subidx = 0x79,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field121"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub79,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub7A = {
	.node = { .key = &MyMaster_1003sub7A.subidx },
	.subidx = 0x7A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field122"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub7A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub7B = {
	.node = { .key = &MyMaster_1003sub7B.subidx },
	.subidx = 0x7B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field123"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub7B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub7C = {
	.node = { .key = &MyMaster_1003sub7C.subidx },
	.subidx = 0x7C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field124"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub7C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub7D = {
	.node = { .key = &MyMaster_1003sub7D.subidx },
	.subidx = 0x7D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field125"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub7D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub7E = {
	.node = { .key = &MyMaster_1003sub7E.subidx },
	.subidx = 0x7E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field126"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub7E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub7F = {
	.node = { .key = &MyMaster_1003sub7F.subidx },
	.subidx = 0x7F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field127"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub7F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub80 = {
	.node = { .key = &MyMaster_1003sub80.subidx },
	.subidx = 0x80,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field128"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub80,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub81 = {
	.node = { .key = &MyMaster_1003sub81.subidx },
	.subidx = 0x81,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field129"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub81,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub82 = {
	.node = { .key = &MyMaster_1003sub82.subidx },
	.subidx = 0x82,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field130"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub82,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub83 = {
	.node = { .key = &MyMaster_1003sub83.subidx },
	.subidx = 0x83,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field131"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub83,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub84 = {
	.node = { .key = &MyMaster_1003sub84.subidx },
	.subidx = 0x84,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field132"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub84,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub85 = {
	.node = { .key = &MyMaster_1003sub85.subidx },
	.subidx = 0x85,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field133"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub85,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub86 = {
	.node = { .key = &MyMaster_1003sub86.subidx },
	.subidx = 0x86,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field134"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub86,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub87 = {
	.node = { .key = &MyMaster_1003sub87.subidx },
	.subidx = 0x87,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field135"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub87,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub88 = {
	.node = { .key = &MyMaster_1003sub88.subidx },
	.subidx = 0x88,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field136"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub88,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub89 = {
	.node = { .key = &MyMaster_1003sub89.subidx },
	.subidx = 0x89,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field137"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub89,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub8A = {
	.node = { .key = &MyMaster_1003sub8A.subidx },
	.subidx = 0x8A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field138"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub8A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub8B = {
	.node = { .key = &MyMaster_1003sub8B.subidx },
	.subidx = 0x8B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field139"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub8B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub8C = {
	.node = { .key = &MyMaster_1003sub8C.subidx },
	.subidx = 0x8C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field140"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub8C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub8D = {
	.node = { .key = &MyMaster_1003sub8D.subidx },
	.subidx = 0x8D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field141"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub8D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub8E = {
	.node = { .key = &MyMaster_1003sub8E.subidx },
	.subidx = 0x8E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field142"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub8E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub8F = {
	.node = { .key = &MyMaster_1003sub8F.subidx },
	.subidx = 0x8F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field143"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub8F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub90 = {
	.node = { .key = &MyMaster_1003sub90.subidx },
	.subidx = 0x90,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field144"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub90,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub91 = {
	.node = { .key = &MyMaster_1003sub91.subidx },
	.subidx = 0x91,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field145"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub91,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub92 = {
	.node = { .key = &MyMaster_1003sub92.subidx },
	.subidx = 0x92,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field146"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub92,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub93 = {
	.node = { .key = &MyMaster_1003sub93.subidx },
	.subidx = 0x93,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field147"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub93,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub94 = {
	.node = { .key = &MyMaster_1003sub94.subidx },
	.subidx = 0x94,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field148"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub94,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub95 = {
	.node = { .key = &MyMaster_1003sub95.subidx },
	.subidx = 0x95,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field149"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub95,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub96 = {
	.node = { .key = &MyMaster_1003sub96.subidx },
	.subidx = 0x96,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field150"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub96,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub97 = {
	.node = { .key = &MyMaster_1003sub97.subidx },
	.subidx = 0x97,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field151"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub97,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub98 = {
	.node = { .key = &MyMaster_1003sub98.subidx },
	.subidx = 0x98,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field152"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub98,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub99 = {
	.node = { .key = &MyMaster_1003sub99.subidx },
	.subidx = 0x99,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field153"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub99,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub9A = {
	.node = { .key = &MyMaster_1003sub9A.subidx },
	.subidx = 0x9A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field154"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub9A,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub9B = {
	.node = { .key = &MyMaster_1003sub9B.subidx },
	.subidx = 0x9B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field155"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub9B,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub9C = {
	.node = { .key = &MyMaster_1003sub9C.subidx },
	.subidx = 0x9C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field156"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub9C,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub9D = {
	.node = { .key = &MyMaster_1003sub9D.subidx },
	.subidx = 0x9D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field157"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub9D,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub9E = {
	.node = { .key = &MyMaster_1003sub9E.subidx },
	.subidx = 0x9E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field158"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub9E,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003sub9F = {
	.node = { .key = &MyMaster_1003sub9F.subidx },
	.subidx = 0x9F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field159"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.sub9F,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA0 = {
	.node = { .key = &MyMaster_1003subA0.subidx },
	.subidx = 0xA0,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field160"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA1 = {
	.node = { .key = &MyMaster_1003subA1.subidx },
	.subidx = 0xA1,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field161"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA2 = {
	.node = { .key = &MyMaster_1003subA2.subidx },
	.subidx = 0xA2,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field162"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA3 = {
	.node = { .key = &MyMaster_1003subA3.subidx },
	.subidx = 0xA3,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field163"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA4 = {
	.node = { .key = &MyMaster_1003subA4.subidx },
	.subidx = 0xA4,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field164"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA5 = {
	.node = { .key = &MyMaster_1003subA5.subidx },
	.subidx = 0xA5,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field165"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA6 = {
	.node = { .key = &MyMaster_1003subA6.subidx },
	.subidx = 0xA6,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field166"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA6,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA7 = {
	.node = { .key = &MyMaster_1003subA7.subidx },
	.subidx = 0xA7,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field167"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA7,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA8 = {
	.node = { .key = &MyMaster_1003subA8.subidx },
	.subidx = 0xA8,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field168"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA8,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subA9 = {
	.node = { .key = &MyMaster_1003subA9.subidx },
	.subidx = 0xA9,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field169"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subA9,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subAA = {
	.node = { .key = &MyMaster_1003subAA.subidx },
	.subidx = 0xAA,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field170"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subAA,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subAB = {
	.node = { .key = &MyMaster_1003subAB.subidx },
	.subidx = 0xAB,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field171"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subAB,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subAC = {
	.node = { .key = &MyMaster_1003subAC.subidx },
	.subidx = 0xAC,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field172"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subAC,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subAD = {
	.node = { .key = &MyMaster_1003subAD.subidx },
	.subidx = 0xAD,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field173"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subAD,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subAE = {
	.node = { .key = &MyMaster_1003subAE.subidx },
	.subidx = 0xAE,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field174"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subAE,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subAF = {
	.node = { .key = &MyMaster_1003subAF.subidx },
	.subidx = 0xAF,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field175"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subAF,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB0 = {
	.node = { .key = &MyMaster_1003subB0.subidx },
	.subidx = 0xB0,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field176"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB1 = {
	.node = { .key = &MyMaster_1003subB1.subidx },
	.subidx = 0xB1,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field177"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB2 = {
	.node = { .key = &MyMaster_1003subB2.subidx },
	.subidx = 0xB2,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field178"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB3 = {
	.node = { .key = &MyMaster_1003subB3.subidx },
	.subidx = 0xB3,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field179"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB4 = {
	.node = { .key = &MyMaster_1003subB4.subidx },
	.subidx = 0xB4,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field180"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB5 = {
	.node = { .key = &MyMaster_1003subB5.subidx },
	.subidx = 0xB5,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field181"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB6 = {
	.node = { .key = &MyMaster_1003subB6.subidx },
	.subidx = 0xB6,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field182"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB6,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB7 = {
	.node = { .key = &MyMaster_1003subB7.subidx },
	.subidx = 0xB7,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field183"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB7,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB8 = {
	.node = { .key = &MyMaster_1003subB8.subidx },
	.subidx = 0xB8,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field184"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB8,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subB9 = {
	.node = { .key = &MyMaster_1003subB9.subidx },
	.subidx = 0xB9,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field185"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subB9,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subBA = {
	.node = { .key = &MyMaster_1003subBA.subidx },
	.subidx = 0xBA,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field186"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subBA,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subBB = {
	.node = { .key = &MyMaster_1003subBB.subidx },
	.subidx = 0xBB,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field187"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subBB,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subBC = {
	.node = { .key = &MyMaster_1003subBC.subidx },
	.subidx = 0xBC,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field188"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subBC,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subBD = {
	.node = { .key = &MyMaster_1003subBD.subidx },
	.subidx = 0xBD,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field189"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subBD,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subBE = {
	.node = { .key = &MyMaster_1003subBE.subidx },
	.subidx = 0xBE,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field190"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subBE,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subBF = {
	.node = { .key = &MyMaster_1003subBF.subidx },
	.subidx = 0xBF,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field191"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subBF,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC0 = {
	.node = { .key = &MyMaster_1003subC0.subidx },
	.subidx = 0xC0,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field192"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC1 = {
	.node = { .key = &MyMaster_1003subC1.subidx },
	.subidx = 0xC1,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field193"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC2 = {
	.node = { .key = &MyMaster_1003subC2.subidx },
	.subidx = 0xC2,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field194"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC3 = {
	.node = { .key = &MyMaster_1003subC3.subidx },
	.subidx = 0xC3,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field195"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC4 = {
	.node = { .key = &MyMaster_1003subC4.subidx },
	.subidx = 0xC4,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field196"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC5 = {
	.node = { .key = &MyMaster_1003subC5.subidx },
	.subidx = 0xC5,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field197"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC6 = {
	.node = { .key = &MyMaster_1003subC6.subidx },
	.subidx = 0xC6,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field198"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC6,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC7 = {
	.node = { .key = &MyMaster_1003subC7.subidx },
	.subidx = 0xC7,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field199"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC7,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC8 = {
	.node = { .key = &MyMaster_1003subC8.subidx },
	.subidx = 0xC8,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field200"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC8,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subC9 = {
	.node = { .key = &MyMaster_1003subC9.subidx },
	.subidx = 0xC9,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field201"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subC9,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subCA = {
	.node = { .key = &MyMaster_1003subCA.subidx },
	.subidx = 0xCA,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field202"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subCA,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subCB = {
	.node = { .key = &MyMaster_1003subCB.subidx },
	.subidx = 0xCB,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field203"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subCB,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subCC = {
	.node = { .key = &MyMaster_1003subCC.subidx },
	.subidx = 0xCC,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field204"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subCC,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subCD = {
	.node = { .key = &MyMaster_1003subCD.subidx },
	.subidx = 0xCD,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field205"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subCD,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subCE = {
	.node = { .key = &MyMaster_1003subCE.subidx },
	.subidx = 0xCE,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field206"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subCE,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subCF = {
	.node = { .key = &MyMaster_1003subCF.subidx },
	.subidx = 0xCF,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field207"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subCF,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD0 = {
	.node = { .key = &MyMaster_1003subD0.subidx },
	.subidx = 0xD0,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field208"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD1 = {
	.node = { .key = &MyMaster_1003subD1.subidx },
	.subidx = 0xD1,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field209"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD2 = {
	.node = { .key = &MyMaster_1003subD2.subidx },
	.subidx = 0xD2,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field210"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD3 = {
	.node = { .key = &MyMaster_1003subD3.subidx },
	.subidx = 0xD3,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field211"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD4 = {
	.node = { .key = &MyMaster_1003subD4.subidx },
	.subidx = 0xD4,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field212"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD5 = {
	.node = { .key = &MyMaster_1003subD5.subidx },
	.subidx = 0xD5,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field213"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD6 = {
	.node = { .key = &MyMaster_1003subD6.subidx },
	.subidx = 0xD6,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field214"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD6,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD7 = {
	.node = { .key = &MyMaster_1003subD7.subidx },
	.subidx = 0xD7,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field215"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD7,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD8 = {
	.node = { .key = &MyMaster_1003subD8.subidx },
	.subidx = 0xD8,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field216"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD8,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subD9 = {
	.node = { .key = &MyMaster_1003subD9.subidx },
	.subidx = 0xD9,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field217"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subD9,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subDA = {
	.node = { .key = &MyMaster_1003subDA.subidx },
	.subidx = 0xDA,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field218"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subDA,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subDB = {
	.node = { .key = &MyMaster_1003subDB.subidx },
	.subidx = 0xDB,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field219"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subDB,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subDC = {
	.node = { .key = &MyMaster_1003subDC.subidx },
	.subidx = 0xDC,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field220"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subDC,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subDD = {
	.node = { .key = &MyMaster_1003subDD.subidx },
	.subidx = 0xDD,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field221"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subDD,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subDE = {
	.node = { .key = &MyMaster_1003subDE.subidx },
	.subidx = 0xDE,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field222"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subDE,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subDF = {
	.node = { .key = &MyMaster_1003subDF.subidx },
	.subidx = 0xDF,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field223"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subDF,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE0 = {
	.node = { .key = &MyMaster_1003subE0.subidx },
	.subidx = 0xE0,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field224"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE1 = {
	.node = { .key = &MyMaster_1003subE1.subidx },
	.subidx = 0xE1,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field225"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE2 = {
	.node = { .key = &MyMaster_1003subE2.subidx },
	.subidx = 0xE2,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field226"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE3 = {
	.node = { .key = &MyMaster_1003subE3.subidx },
	.subidx = 0xE3,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field227"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE4 = {
	.node = { .key = &MyMaster_1003subE4.subidx },
	.subidx = 0xE4,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field228"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE5 = {
	.node = { .key = &MyMaster_1003subE5.subidx },
	.subidx = 0xE5,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field229"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE6 = {
	.node = { .key = &MyMaster_1003subE6.subidx },
	.subidx = 0xE6,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field230"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE6,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE7 = {
	.node = { .key = &MyMaster_1003subE7.subidx },
	.subidx = 0xE7,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field231"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE7,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE8 = {
	.node = { .key = &MyMaster_1003subE8.subidx },
	.subidx = 0xE8,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field232"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE8,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subE9 = {
	.node = { .key = &MyMaster_1003subE9.subidx },
	.subidx = 0xE9,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field233"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subE9,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subEA = {
	.node = { .key = &MyMaster_1003subEA.subidx },
	.subidx = 0xEA,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field234"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subEA,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subEB = {
	.node = { .key = &MyMaster_1003subEB.subidx },
	.subidx = 0xEB,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field235"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subEB,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subEC = {
	.node = { .key = &MyMaster_1003subEC.subidx },
	.subidx = 0xEC,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field236"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subEC,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subED = {
	.node = { .key = &MyMaster_1003subED.subidx },
	.subidx = 0xED,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field237"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subED,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subEE = {
	.node = { .key = &MyMaster_1003subEE.subidx },
	.subidx = 0xEE,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field238"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subEE,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subEF = {
	.node = { .key = &MyMaster_1003subEF.subidx },
	.subidx = 0xEF,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field239"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subEF,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF0 = {
	.node = { .key = &MyMaster_1003subF0.subidx },
	.subidx = 0xF0,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field240"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF1 = {
	.node = { .key = &MyMaster_1003subF1.subidx },
	.subidx = 0xF1,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field241"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF2 = {
	.node = { .key = &MyMaster_1003subF2.subidx },
	.subidx = 0xF2,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field242"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF3 = {
	.node = { .key = &MyMaster_1003subF3.subidx },
	.subidx = 0xF3,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field243"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF4 = {
	.node = { .key = &MyMaster_1003subF4.subidx },
	.subidx = 0xF4,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field244"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF4,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF5 = {
	.node = { .key = &MyMaster_1003subF5.subidx },
	.subidx = 0xF5,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field245"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF5,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF6 = {
	.node = { .key = &MyMaster_1003subF6.subidx },
	.subidx = 0xF6,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field246"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF6,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF7 = {
	.node = { .key = &MyMaster_1003subF7.subidx },
	.subidx = 0xF7,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field247"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF7,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF8 = {
	.node = { .key = &MyMaster_1003subF8.subidx },
	.subidx = 0xF8,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field248"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF8,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subF9 = {
	.node = { .key = &MyMaster_1003subF9.subidx },
	.subidx = 0xF9,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field249"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subF9,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subFA = {
	.node = { .key = &MyMaster_1003subFA.subidx },
	.subidx = 0xFA,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field250"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subFA,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subFB = {
	.node = { .key = &MyMaster_1003subFB.subidx },
	.subidx = 0xFB,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field251"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subFB,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subFC = {
	.node = { .key = &MyMaster_1003subFC.subidx },
	.subidx = 0xFC,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field252"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subFC,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subFD = {
	.node = { .key = &MyMaster_1003subFD.subidx },
	.subidx = 0xFD,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field253"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subFD,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1003subFE = {
	.node = { .key = &MyMaster_1003subFE.subidx },
	.subidx = 0xFE,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Pre-defined error field254"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1003_val.subFE,
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
} MyMaster_1005_val = {
	.sub0 = 0x40000080,
};

static co_obj_t MyMaster_1005 = {
	.node = { .key = &MyMaster_1005.idx },
	.idx = 0x1005,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID SYNC message"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1005_val,
	.size = sizeof(MyMaster_1005_val)
};

static co_sub_t MyMaster_1005sub0 = {
	.node = { .key = &MyMaster_1005sub0.subidx },
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
	.def = { .u32 = 0x40000080 },
#endif
	.val = &MyMaster_1005_val.sub0,
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
} MyMaster_1006_val = {
	.sub0 = 0x000F4240,
};

static co_obj_t MyMaster_1006 = {
	.node = { .key = &MyMaster_1006.idx },
	.idx = 0x1006,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Communication cycle period"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1006_val,
	.size = sizeof(MyMaster_1006_val)
};

static co_sub_t MyMaster_1006sub0 = {
	.node = { .key = &MyMaster_1006sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Communication cycle period"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x000F4240 },
#endif
	.val = &MyMaster_1006_val.sub0,
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
} MyMaster_1007_val = {
	.sub0 = 0x00000000,
};

static co_obj_t MyMaster_1007 = {
	.node = { .key = &MyMaster_1007.idx },
	.idx = 0x1007,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Synchronous window length"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1007_val,
	.size = sizeof(MyMaster_1007_val)
};

static co_sub_t MyMaster_1007sub0 = {
	.node = { .key = &MyMaster_1007sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Synchronous window length"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1007_val.sub0,
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
} MyMaster_1014_val = {
	.sub0 = 0x0000017F,
};

static co_obj_t MyMaster_1014 = {
	.node = { .key = &MyMaster_1014.idx },
	.idx = 0x1014,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID EMCY"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1014_val,
	.size = sizeof(MyMaster_1014_val)
};

static co_sub_t MyMaster_1014sub0 = {
	.node = { .key = &MyMaster_1014sub0.subidx },
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
	.val = &MyMaster_1014_val.sub0,
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
} MyMaster_1015_val = {
	.sub0 = 0x0000,
};

static co_obj_t MyMaster_1015 = {
	.node = { .key = &MyMaster_1015.idx },
	.idx = 0x1015,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Inhibit time EMCY"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1015_val,
	.size = sizeof(MyMaster_1015_val)
};

static co_sub_t MyMaster_1015sub0 = {
	.node = { .key = &MyMaster_1015sub0.subidx },
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
	.val = &MyMaster_1015_val.sub0,
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
	co_unsigned32_t sub5;
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
} MyMaster_1016_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
};

static co_obj_t MyMaster_1016 = {
	.node = { .key = &MyMaster_1016.idx },
	.idx = 0x1016,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1016_val,
	.size = sizeof(MyMaster_1016_val)
};

static co_sub_t MyMaster_1016sub0 = {
	.node = { .key = &MyMaster_1016sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1016_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub1 = {
	.node = { .key = &MyMaster_1016sub1.subidx },
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
	.val = &MyMaster_1016_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub2 = {
	.node = { .key = &MyMaster_1016sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub3 = {
	.node = { .key = &MyMaster_1016sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub4 = {
	.node = { .key = &MyMaster_1016sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub5 = {
	.node = { .key = &MyMaster_1016sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub6 = {
	.node = { .key = &MyMaster_1016sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub7 = {
	.node = { .key = &MyMaster_1016sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub8 = {
	.node = { .key = &MyMaster_1016sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016sub9 = {
	.node = { .key = &MyMaster_1016sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016subA = {
	.node = { .key = &MyMaster_1016subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016subB = {
	.node = { .key = &MyMaster_1016subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016subC = {
	.node = { .key = &MyMaster_1016subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016subD = {
	.node = { .key = &MyMaster_1016subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016subE = {
	.node = { .key = &MyMaster_1016subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1016subF = {
	.node = { .key = &MyMaster_1016subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Consumer heartbeat time15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1016_val.subF,
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
} MyMaster_1017_val = {
	.sub0 = 0x0000,
};

static co_obj_t MyMaster_1017 = {
	.node = { .key = &MyMaster_1017.idx },
	.idx = 0x1017,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Producer heartbeat time"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1017_val,
	.size = sizeof(MyMaster_1017_val)
};

static co_sub_t MyMaster_1017sub0 = {
	.node = { .key = &MyMaster_1017sub0.subidx },
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
	.val = &MyMaster_1017_val.sub0,
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
} MyMaster_1018_val = {
	.sub0 = 0x04,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
};

static co_obj_t MyMaster_1018 = {
	.node = { .key = &MyMaster_1018.idx },
	.idx = 0x1018,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Identity Object"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1018_val,
	.size = sizeof(MyMaster_1018_val)
};

static co_sub_t MyMaster_1018sub0 = {
	.node = { .key = &MyMaster_1018sub0.subidx },
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
	.val = &MyMaster_1018_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1018sub1 = {
	.node = { .key = &MyMaster_1018sub1.subidx },
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
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1018_val.sub1,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1018sub2 = {
	.node = { .key = &MyMaster_1018sub2.subidx },
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
	.val = &MyMaster_1018_val.sub2,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1018sub3 = {
	.node = { .key = &MyMaster_1018sub3.subidx },
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
	.val = &MyMaster_1018_val.sub3,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1018sub4 = {
	.node = { .key = &MyMaster_1018sub4.subidx },
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
	.val = &MyMaster_1018_val.sub4,
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
} MyMaster_1019_val = {
	.sub0 = 0x00,
};

static co_obj_t MyMaster_1019 = {
	.node = { .key = &MyMaster_1019.idx },
	.idx = 0x1019,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Synchronous counter overflow value"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1019_val,
	.size = sizeof(MyMaster_1019_val)
};

static co_sub_t MyMaster_1019sub0 = {
	.node = { .key = &MyMaster_1019sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Synchronous counter overflow value"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1019_val.sub0,
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
	co_unsigned32_t sub5;
} MyMaster_1028_val = {
	.sub0 = 0x05,
	.sub1 = 0x80000000,
	.sub2 = 0x00000082,
	.sub3 = 0x80000000,
	.sub4 = 0x80000000,
	.sub5 = 0x80000000,
};

static co_obj_t MyMaster_1028 = {
	.node = { .key = &MyMaster_1028.idx },
	.idx = 0x1028,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Emergency consumer object"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1028_val,
	.size = sizeof(MyMaster_1028_val)
};

static co_sub_t MyMaster_1028sub0 = {
	.node = { .key = &MyMaster_1028sub0.subidx },
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
	.val = &MyMaster_1028_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1028sub1 = {
	.node = { .key = &MyMaster_1028sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Emergency consumer object1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x80000000 },
#endif
	.val = &MyMaster_1028_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1028sub2 = {
	.node = { .key = &MyMaster_1028sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Emergency consumer object2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x80000000 },
#endif
	.val = &MyMaster_1028_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1028sub3 = {
	.node = { .key = &MyMaster_1028sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Emergency consumer object3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x80000000 },
#endif
	.val = &MyMaster_1028_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1028sub4 = {
	.node = { .key = &MyMaster_1028sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Emergency consumer object4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x80000000 },
#endif
	.val = &MyMaster_1028_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1028sub5 = {
	.node = { .key = &MyMaster_1028sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Emergency consumer object5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x80000000 },
#endif
	.val = &MyMaster_1028_val.sub5,
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
	co_unsigned8_t sub1;
	co_unsigned8_t sub2;
	co_unsigned8_t sub3;
	co_unsigned8_t sub4;
	co_unsigned8_t sub5;
	co_unsigned8_t sub6;
	co_unsigned8_t sub7;
	co_unsigned8_t sub8;
	co_unsigned8_t sub9;
	co_unsigned8_t subA;
	co_unsigned8_t subB;
	co_unsigned8_t subC;
	co_unsigned8_t subD;
	co_unsigned8_t subE;
	co_unsigned8_t subF;
	co_unsigned8_t sub10;
	co_unsigned8_t sub11;
	co_unsigned8_t sub12;
	co_unsigned8_t sub13;
	co_unsigned8_t sub14;
	co_unsigned8_t sub15;
	co_unsigned8_t sub16;
	co_unsigned8_t sub17;
	co_unsigned8_t sub18;
	co_unsigned8_t sub19;
	co_unsigned8_t sub1A;
	co_unsigned8_t sub1B;
	co_unsigned8_t sub1C;
	co_unsigned8_t sub1D;
	co_unsigned8_t sub1E;
	co_unsigned8_t sub1F;
	co_unsigned8_t sub20;
	co_unsigned8_t sub21;
	co_unsigned8_t sub22;
	co_unsigned8_t sub23;
	co_unsigned8_t sub24;
	co_unsigned8_t sub25;
	co_unsigned8_t sub26;
	co_unsigned8_t sub27;
	co_unsigned8_t sub28;
	co_unsigned8_t sub29;
	co_unsigned8_t sub2A;
	co_unsigned8_t sub2B;
	co_unsigned8_t sub2C;
	co_unsigned8_t sub2D;
	co_unsigned8_t sub2E;
	co_unsigned8_t sub2F;
	co_unsigned8_t sub30;
	co_unsigned8_t sub31;
	co_unsigned8_t sub32;
	co_unsigned8_t sub33;
	co_unsigned8_t sub34;
	co_unsigned8_t sub35;
	co_unsigned8_t sub36;
	co_unsigned8_t sub37;
	co_unsigned8_t sub38;
	co_unsigned8_t sub39;
	co_unsigned8_t sub3A;
	co_unsigned8_t sub3B;
	co_unsigned8_t sub3C;
	co_unsigned8_t sub3D;
	co_unsigned8_t sub3E;
	co_unsigned8_t sub3F;
	co_unsigned8_t sub40;
	co_unsigned8_t sub41;
	co_unsigned8_t sub42;
	co_unsigned8_t sub43;
	co_unsigned8_t sub44;
	co_unsigned8_t sub45;
	co_unsigned8_t sub46;
	co_unsigned8_t sub47;
	co_unsigned8_t sub48;
	co_unsigned8_t sub49;
	co_unsigned8_t sub4A;
	co_unsigned8_t sub4B;
	co_unsigned8_t sub4C;
	co_unsigned8_t sub4D;
	co_unsigned8_t sub4E;
	co_unsigned8_t sub4F;
	co_unsigned8_t sub50;
	co_unsigned8_t sub51;
	co_unsigned8_t sub52;
	co_unsigned8_t sub53;
	co_unsigned8_t sub54;
	co_unsigned8_t sub55;
	co_unsigned8_t sub56;
	co_unsigned8_t sub57;
	co_unsigned8_t sub58;
	co_unsigned8_t sub59;
	co_unsigned8_t sub5A;
	co_unsigned8_t sub5B;
	co_unsigned8_t sub5C;
	co_unsigned8_t sub5D;
	co_unsigned8_t sub5E;
	co_unsigned8_t sub5F;
	co_unsigned8_t sub60;
	co_unsigned8_t sub61;
	co_unsigned8_t sub62;
	co_unsigned8_t sub63;
	co_unsigned8_t sub64;
	co_unsigned8_t sub65;
	co_unsigned8_t sub66;
	co_unsigned8_t sub67;
	co_unsigned8_t sub68;
	co_unsigned8_t sub69;
	co_unsigned8_t sub6A;
	co_unsigned8_t sub6B;
	co_unsigned8_t sub6C;
	co_unsigned8_t sub6D;
	co_unsigned8_t sub6E;
	co_unsigned8_t sub6F;
	co_unsigned8_t sub70;
	co_unsigned8_t sub71;
	co_unsigned8_t sub72;
	co_unsigned8_t sub73;
	co_unsigned8_t sub74;
	co_unsigned8_t sub75;
	co_unsigned8_t sub76;
	co_unsigned8_t sub77;
	co_unsigned8_t sub78;
	co_unsigned8_t sub79;
	co_unsigned8_t sub7A;
	co_unsigned8_t sub7B;
	co_unsigned8_t sub7C;
	co_unsigned8_t sub7D;
	co_unsigned8_t sub7E;
	co_unsigned8_t sub7F;
	co_unsigned8_t sub80;
	co_unsigned8_t sub81;
	co_unsigned8_t sub82;
	co_unsigned8_t sub83;
	co_unsigned8_t sub84;
	co_unsigned8_t sub85;
	co_unsigned8_t sub86;
	co_unsigned8_t sub87;
	co_unsigned8_t sub88;
	co_unsigned8_t sub89;
	co_unsigned8_t sub8A;
	co_unsigned8_t sub8B;
	co_unsigned8_t sub8C;
	co_unsigned8_t sub8D;
	co_unsigned8_t sub8E;
	co_unsigned8_t sub8F;
	co_unsigned8_t sub90;
	co_unsigned8_t sub91;
	co_unsigned8_t sub92;
	co_unsigned8_t sub93;
	co_unsigned8_t sub94;
	co_unsigned8_t sub95;
	co_unsigned8_t sub96;
	co_unsigned8_t sub97;
	co_unsigned8_t sub98;
	co_unsigned8_t sub99;
	co_unsigned8_t sub9A;
	co_unsigned8_t sub9B;
	co_unsigned8_t sub9C;
	co_unsigned8_t sub9D;
	co_unsigned8_t sub9E;
	co_unsigned8_t sub9F;
	co_unsigned8_t subA0;
	co_unsigned8_t subA1;
	co_unsigned8_t subA2;
	co_unsigned8_t subA3;
	co_unsigned8_t subA4;
	co_unsigned8_t subA5;
	co_unsigned8_t subA6;
	co_unsigned8_t subA7;
	co_unsigned8_t subA8;
	co_unsigned8_t subA9;
	co_unsigned8_t subAA;
	co_unsigned8_t subAB;
	co_unsigned8_t subAC;
	co_unsigned8_t subAD;
	co_unsigned8_t subAE;
	co_unsigned8_t subAF;
	co_unsigned8_t subB0;
	co_unsigned8_t subB1;
	co_unsigned8_t subB2;
	co_unsigned8_t subB3;
	co_unsigned8_t subB4;
	co_unsigned8_t subB5;
	co_unsigned8_t subB6;
	co_unsigned8_t subB7;
	co_unsigned8_t subB8;
	co_unsigned8_t subB9;
	co_unsigned8_t subBA;
	co_unsigned8_t subBB;
	co_unsigned8_t subBC;
	co_unsigned8_t subBD;
	co_unsigned8_t subBE;
	co_unsigned8_t subBF;
	co_unsigned8_t subC0;
	co_unsigned8_t subC1;
	co_unsigned8_t subC2;
	co_unsigned8_t subC3;
	co_unsigned8_t subC4;
	co_unsigned8_t subC5;
	co_unsigned8_t subC6;
	co_unsigned8_t subC7;
	co_unsigned8_t subC8;
	co_unsigned8_t subC9;
	co_unsigned8_t subCA;
	co_unsigned8_t subCB;
	co_unsigned8_t subCC;
	co_unsigned8_t subCD;
	co_unsigned8_t subCE;
	co_unsigned8_t subCF;
	co_unsigned8_t subD0;
	co_unsigned8_t subD1;
	co_unsigned8_t subD2;
	co_unsigned8_t subD3;
	co_unsigned8_t subD4;
	co_unsigned8_t subD5;
	co_unsigned8_t subD6;
	co_unsigned8_t subD7;
	co_unsigned8_t subD8;
	co_unsigned8_t subD9;
	co_unsigned8_t subDA;
	co_unsigned8_t subDB;
	co_unsigned8_t subDC;
	co_unsigned8_t subDD;
	co_unsigned8_t subDE;
	co_unsigned8_t subDF;
	co_unsigned8_t subE0;
	co_unsigned8_t subE1;
	co_unsigned8_t subE2;
	co_unsigned8_t subE3;
	co_unsigned8_t subE4;
	co_unsigned8_t subE5;
	co_unsigned8_t subE6;
	co_unsigned8_t subE7;
	co_unsigned8_t subE8;
	co_unsigned8_t subE9;
	co_unsigned8_t subEA;
	co_unsigned8_t subEB;
	co_unsigned8_t subEC;
	co_unsigned8_t subED;
	co_unsigned8_t subEE;
	co_unsigned8_t subEF;
	co_unsigned8_t subF0;
	co_unsigned8_t subF1;
	co_unsigned8_t subF2;
	co_unsigned8_t subF3;
	co_unsigned8_t subF4;
	co_unsigned8_t subF5;
	co_unsigned8_t subF6;
	co_unsigned8_t subF7;
	co_unsigned8_t subF8;
	co_unsigned8_t subF9;
	co_unsigned8_t subFA;
	co_unsigned8_t subFB;
	co_unsigned8_t subFC;
	co_unsigned8_t subFD;
	co_unsigned8_t subFE;
} MyMaster_1029_val = {
	.sub0 = 0xFE,
	.sub1 = 0x00,
	.sub2 = 0x00,
	.sub3 = 0x00,
	.sub4 = 0x00,
	.sub5 = 0x00,
	.sub6 = 0x00,
	.sub7 = 0x00,
	.sub8 = 0x00,
	.sub9 = 0x00,
	.subA = 0x00,
	.subB = 0x00,
	.subC = 0x00,
	.subD = 0x00,
	.subE = 0x00,
	.subF = 0x00,
	.sub10 = 0x00,
	.sub11 = 0x00,
	.sub12 = 0x00,
	.sub13 = 0x00,
	.sub14 = 0x00,
	.sub15 = 0x00,
	.sub16 = 0x00,
	.sub17 = 0x00,
	.sub18 = 0x00,
	.sub19 = 0x00,
	.sub1A = 0x00,
	.sub1B = 0x00,
	.sub1C = 0x00,
	.sub1D = 0x00,
	.sub1E = 0x00,
	.sub1F = 0x00,
	.sub20 = 0x00,
	.sub21 = 0x00,
	.sub22 = 0x00,
	.sub23 = 0x00,
	.sub24 = 0x00,
	.sub25 = 0x00,
	.sub26 = 0x00,
	.sub27 = 0x00,
	.sub28 = 0x00,
	.sub29 = 0x00,
	.sub2A = 0x00,
	.sub2B = 0x00,
	.sub2C = 0x00,
	.sub2D = 0x00,
	.sub2E = 0x00,
	.sub2F = 0x00,
	.sub30 = 0x00,
	.sub31 = 0x00,
	.sub32 = 0x00,
	.sub33 = 0x00,
	.sub34 = 0x00,
	.sub35 = 0x00,
	.sub36 = 0x00,
	.sub37 = 0x00,
	.sub38 = 0x00,
	.sub39 = 0x00,
	.sub3A = 0x00,
	.sub3B = 0x00,
	.sub3C = 0x00,
	.sub3D = 0x00,
	.sub3E = 0x00,
	.sub3F = 0x00,
	.sub40 = 0x00,
	.sub41 = 0x00,
	.sub42 = 0x00,
	.sub43 = 0x00,
	.sub44 = 0x00,
	.sub45 = 0x00,
	.sub46 = 0x00,
	.sub47 = 0x00,
	.sub48 = 0x00,
	.sub49 = 0x00,
	.sub4A = 0x00,
	.sub4B = 0x00,
	.sub4C = 0x00,
	.sub4D = 0x00,
	.sub4E = 0x00,
	.sub4F = 0x00,
	.sub50 = 0x00,
	.sub51 = 0x00,
	.sub52 = 0x00,
	.sub53 = 0x00,
	.sub54 = 0x00,
	.sub55 = 0x00,
	.sub56 = 0x00,
	.sub57 = 0x00,
	.sub58 = 0x00,
	.sub59 = 0x00,
	.sub5A = 0x00,
	.sub5B = 0x00,
	.sub5C = 0x00,
	.sub5D = 0x00,
	.sub5E = 0x00,
	.sub5F = 0x00,
	.sub60 = 0x00,
	.sub61 = 0x00,
	.sub62 = 0x00,
	.sub63 = 0x00,
	.sub64 = 0x00,
	.sub65 = 0x00,
	.sub66 = 0x00,
	.sub67 = 0x00,
	.sub68 = 0x00,
	.sub69 = 0x00,
	.sub6A = 0x00,
	.sub6B = 0x00,
	.sub6C = 0x00,
	.sub6D = 0x00,
	.sub6E = 0x00,
	.sub6F = 0x00,
	.sub70 = 0x00,
	.sub71 = 0x00,
	.sub72 = 0x00,
	.sub73 = 0x00,
	.sub74 = 0x00,
	.sub75 = 0x00,
	.sub76 = 0x00,
	.sub77 = 0x00,
	.sub78 = 0x00,
	.sub79 = 0x00,
	.sub7A = 0x00,
	.sub7B = 0x00,
	.sub7C = 0x00,
	.sub7D = 0x00,
	.sub7E = 0x00,
	.sub7F = 0x00,
	.sub80 = 0x00,
	.sub81 = 0x00,
	.sub82 = 0x00,
	.sub83 = 0x00,
	.sub84 = 0x00,
	.sub85 = 0x00,
	.sub86 = 0x00,
	.sub87 = 0x00,
	.sub88 = 0x00,
	.sub89 = 0x00,
	.sub8A = 0x00,
	.sub8B = 0x00,
	.sub8C = 0x00,
	.sub8D = 0x00,
	.sub8E = 0x00,
	.sub8F = 0x00,
	.sub90 = 0x00,
	.sub91 = 0x00,
	.sub92 = 0x00,
	.sub93 = 0x00,
	.sub94 = 0x00,
	.sub95 = 0x00,
	.sub96 = 0x00,
	.sub97 = 0x00,
	.sub98 = 0x00,
	.sub99 = 0x00,
	.sub9A = 0x00,
	.sub9B = 0x00,
	.sub9C = 0x00,
	.sub9D = 0x00,
	.sub9E = 0x00,
	.sub9F = 0x00,
	.subA0 = 0x00,
	.subA1 = 0x00,
	.subA2 = 0x00,
	.subA3 = 0x00,
	.subA4 = 0x00,
	.subA5 = 0x00,
	.subA6 = 0x00,
	.subA7 = 0x00,
	.subA8 = 0x00,
	.subA9 = 0x00,
	.subAA = 0x00,
	.subAB = 0x00,
	.subAC = 0x00,
	.subAD = 0x00,
	.subAE = 0x00,
	.subAF = 0x00,
	.subB0 = 0x00,
	.subB1 = 0x00,
	.subB2 = 0x00,
	.subB3 = 0x00,
	.subB4 = 0x00,
	.subB5 = 0x00,
	.subB6 = 0x00,
	.subB7 = 0x00,
	.subB8 = 0x00,
	.subB9 = 0x00,
	.subBA = 0x00,
	.subBB = 0x00,
	.subBC = 0x00,
	.subBD = 0x00,
	.subBE = 0x00,
	.subBF = 0x00,
	.subC0 = 0x00,
	.subC1 = 0x00,
	.subC2 = 0x00,
	.subC3 = 0x00,
	.subC4 = 0x00,
	.subC5 = 0x00,
	.subC6 = 0x00,
	.subC7 = 0x00,
	.subC8 = 0x00,
	.subC9 = 0x00,
	.subCA = 0x00,
	.subCB = 0x00,
	.subCC = 0x00,
	.subCD = 0x00,
	.subCE = 0x00,
	.subCF = 0x00,
	.subD0 = 0x00,
	.subD1 = 0x00,
	.subD2 = 0x00,
	.subD3 = 0x00,
	.subD4 = 0x00,
	.subD5 = 0x00,
	.subD6 = 0x00,
	.subD7 = 0x00,
	.subD8 = 0x00,
	.subD9 = 0x00,
	.subDA = 0x00,
	.subDB = 0x00,
	.subDC = 0x00,
	.subDD = 0x00,
	.subDE = 0x00,
	.subDF = 0x00,
	.subE0 = 0x00,
	.subE1 = 0x00,
	.subE2 = 0x00,
	.subE3 = 0x00,
	.subE4 = 0x00,
	.subE5 = 0x00,
	.subE6 = 0x00,
	.subE7 = 0x00,
	.subE8 = 0x00,
	.subE9 = 0x00,
	.subEA = 0x00,
	.subEB = 0x00,
	.subEC = 0x00,
	.subED = 0x00,
	.subEE = 0x00,
	.subEF = 0x00,
	.subF0 = 0x00,
	.subF1 = 0x00,
	.subF2 = 0x00,
	.subF3 = 0x00,
	.subF4 = 0x00,
	.subF5 = 0x00,
	.subF6 = 0x00,
	.subF7 = 0x00,
	.subF8 = 0x00,
	.subF9 = 0x00,
	.subFA = 0x00,
	.subFB = 0x00,
	.subFC = 0x00,
	.subFD = 0x00,
	.subFE = 0x00,
};

static co_obj_t MyMaster_1029 = {
	.node = { .key = &MyMaster_1029.idx },
	.idx = 0x1029,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1029_val,
	.size = sizeof(MyMaster_1029_val)
};

static co_sub_t MyMaster_1029sub0 = {
	.node = { .key = &MyMaster_1029sub0.subidx },
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
	.def = { .u8 = 0xFE },
#endif
	.val = &MyMaster_1029_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub1 = {
	.node = { .key = &MyMaster_1029sub1.subidx },
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
	.val = &MyMaster_1029_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub2 = {
	.node = { .key = &MyMaster_1029sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub3 = {
	.node = { .key = &MyMaster_1029sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub4 = {
	.node = { .key = &MyMaster_1029sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub5 = {
	.node = { .key = &MyMaster_1029sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub6 = {
	.node = { .key = &MyMaster_1029sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub7 = {
	.node = { .key = &MyMaster_1029sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub8 = {
	.node = { .key = &MyMaster_1029sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub9 = {
	.node = { .key = &MyMaster_1029sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA = {
	.node = { .key = &MyMaster_1029subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB = {
	.node = { .key = &MyMaster_1029subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC = {
	.node = { .key = &MyMaster_1029subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD = {
	.node = { .key = &MyMaster_1029subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE = {
	.node = { .key = &MyMaster_1029subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF = {
	.node = { .key = &MyMaster_1029subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub10 = {
	.node = { .key = &MyMaster_1029sub10.subidx },
	.subidx = 0x10,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object16"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub10,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub11 = {
	.node = { .key = &MyMaster_1029sub11.subidx },
	.subidx = 0x11,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object17"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub11,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub12 = {
	.node = { .key = &MyMaster_1029sub12.subidx },
	.subidx = 0x12,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object18"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub12,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub13 = {
	.node = { .key = &MyMaster_1029sub13.subidx },
	.subidx = 0x13,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object19"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub13,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub14 = {
	.node = { .key = &MyMaster_1029sub14.subidx },
	.subidx = 0x14,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object20"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub14,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub15 = {
	.node = { .key = &MyMaster_1029sub15.subidx },
	.subidx = 0x15,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object21"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub15,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub16 = {
	.node = { .key = &MyMaster_1029sub16.subidx },
	.subidx = 0x16,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object22"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub16,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub17 = {
	.node = { .key = &MyMaster_1029sub17.subidx },
	.subidx = 0x17,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object23"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub17,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub18 = {
	.node = { .key = &MyMaster_1029sub18.subidx },
	.subidx = 0x18,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object24"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub18,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub19 = {
	.node = { .key = &MyMaster_1029sub19.subidx },
	.subidx = 0x19,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object25"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub19,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub1A = {
	.node = { .key = &MyMaster_1029sub1A.subidx },
	.subidx = 0x1A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object26"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub1A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub1B = {
	.node = { .key = &MyMaster_1029sub1B.subidx },
	.subidx = 0x1B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object27"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub1B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub1C = {
	.node = { .key = &MyMaster_1029sub1C.subidx },
	.subidx = 0x1C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object28"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub1C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub1D = {
	.node = { .key = &MyMaster_1029sub1D.subidx },
	.subidx = 0x1D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object29"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub1D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub1E = {
	.node = { .key = &MyMaster_1029sub1E.subidx },
	.subidx = 0x1E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object30"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub1E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub1F = {
	.node = { .key = &MyMaster_1029sub1F.subidx },
	.subidx = 0x1F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object31"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub1F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub20 = {
	.node = { .key = &MyMaster_1029sub20.subidx },
	.subidx = 0x20,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object32"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub20,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub21 = {
	.node = { .key = &MyMaster_1029sub21.subidx },
	.subidx = 0x21,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object33"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub21,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub22 = {
	.node = { .key = &MyMaster_1029sub22.subidx },
	.subidx = 0x22,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object34"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub22,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub23 = {
	.node = { .key = &MyMaster_1029sub23.subidx },
	.subidx = 0x23,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object35"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub23,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub24 = {
	.node = { .key = &MyMaster_1029sub24.subidx },
	.subidx = 0x24,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object36"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub24,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub25 = {
	.node = { .key = &MyMaster_1029sub25.subidx },
	.subidx = 0x25,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object37"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub25,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub26 = {
	.node = { .key = &MyMaster_1029sub26.subidx },
	.subidx = 0x26,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object38"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub26,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub27 = {
	.node = { .key = &MyMaster_1029sub27.subidx },
	.subidx = 0x27,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object39"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub27,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub28 = {
	.node = { .key = &MyMaster_1029sub28.subidx },
	.subidx = 0x28,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object40"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub28,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub29 = {
	.node = { .key = &MyMaster_1029sub29.subidx },
	.subidx = 0x29,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object41"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub29,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub2A = {
	.node = { .key = &MyMaster_1029sub2A.subidx },
	.subidx = 0x2A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object42"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub2A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub2B = {
	.node = { .key = &MyMaster_1029sub2B.subidx },
	.subidx = 0x2B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object43"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub2B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub2C = {
	.node = { .key = &MyMaster_1029sub2C.subidx },
	.subidx = 0x2C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object44"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub2C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub2D = {
	.node = { .key = &MyMaster_1029sub2D.subidx },
	.subidx = 0x2D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object45"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub2D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub2E = {
	.node = { .key = &MyMaster_1029sub2E.subidx },
	.subidx = 0x2E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object46"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub2E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub2F = {
	.node = { .key = &MyMaster_1029sub2F.subidx },
	.subidx = 0x2F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object47"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub2F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub30 = {
	.node = { .key = &MyMaster_1029sub30.subidx },
	.subidx = 0x30,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object48"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub30,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub31 = {
	.node = { .key = &MyMaster_1029sub31.subidx },
	.subidx = 0x31,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object49"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub31,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub32 = {
	.node = { .key = &MyMaster_1029sub32.subidx },
	.subidx = 0x32,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object50"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub32,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub33 = {
	.node = { .key = &MyMaster_1029sub33.subidx },
	.subidx = 0x33,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object51"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub33,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub34 = {
	.node = { .key = &MyMaster_1029sub34.subidx },
	.subidx = 0x34,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object52"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub34,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub35 = {
	.node = { .key = &MyMaster_1029sub35.subidx },
	.subidx = 0x35,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object53"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub35,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub36 = {
	.node = { .key = &MyMaster_1029sub36.subidx },
	.subidx = 0x36,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object54"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub36,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub37 = {
	.node = { .key = &MyMaster_1029sub37.subidx },
	.subidx = 0x37,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object55"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub37,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub38 = {
	.node = { .key = &MyMaster_1029sub38.subidx },
	.subidx = 0x38,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object56"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub38,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub39 = {
	.node = { .key = &MyMaster_1029sub39.subidx },
	.subidx = 0x39,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object57"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub39,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub3A = {
	.node = { .key = &MyMaster_1029sub3A.subidx },
	.subidx = 0x3A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object58"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub3A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub3B = {
	.node = { .key = &MyMaster_1029sub3B.subidx },
	.subidx = 0x3B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object59"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub3B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub3C = {
	.node = { .key = &MyMaster_1029sub3C.subidx },
	.subidx = 0x3C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object60"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub3C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub3D = {
	.node = { .key = &MyMaster_1029sub3D.subidx },
	.subidx = 0x3D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object61"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub3D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub3E = {
	.node = { .key = &MyMaster_1029sub3E.subidx },
	.subidx = 0x3E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object62"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub3E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub3F = {
	.node = { .key = &MyMaster_1029sub3F.subidx },
	.subidx = 0x3F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object63"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub3F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub40 = {
	.node = { .key = &MyMaster_1029sub40.subidx },
	.subidx = 0x40,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object64"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub40,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub41 = {
	.node = { .key = &MyMaster_1029sub41.subidx },
	.subidx = 0x41,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object65"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub41,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub42 = {
	.node = { .key = &MyMaster_1029sub42.subidx },
	.subidx = 0x42,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object66"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub42,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub43 = {
	.node = { .key = &MyMaster_1029sub43.subidx },
	.subidx = 0x43,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object67"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub43,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub44 = {
	.node = { .key = &MyMaster_1029sub44.subidx },
	.subidx = 0x44,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object68"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub44,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub45 = {
	.node = { .key = &MyMaster_1029sub45.subidx },
	.subidx = 0x45,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object69"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub45,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub46 = {
	.node = { .key = &MyMaster_1029sub46.subidx },
	.subidx = 0x46,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object70"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub46,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub47 = {
	.node = { .key = &MyMaster_1029sub47.subidx },
	.subidx = 0x47,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object71"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub47,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub48 = {
	.node = { .key = &MyMaster_1029sub48.subidx },
	.subidx = 0x48,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object72"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub48,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub49 = {
	.node = { .key = &MyMaster_1029sub49.subidx },
	.subidx = 0x49,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object73"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub49,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub4A = {
	.node = { .key = &MyMaster_1029sub4A.subidx },
	.subidx = 0x4A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object74"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub4A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub4B = {
	.node = { .key = &MyMaster_1029sub4B.subidx },
	.subidx = 0x4B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object75"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub4B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub4C = {
	.node = { .key = &MyMaster_1029sub4C.subidx },
	.subidx = 0x4C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object76"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub4C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub4D = {
	.node = { .key = &MyMaster_1029sub4D.subidx },
	.subidx = 0x4D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object77"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub4D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub4E = {
	.node = { .key = &MyMaster_1029sub4E.subidx },
	.subidx = 0x4E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object78"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub4E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub4F = {
	.node = { .key = &MyMaster_1029sub4F.subidx },
	.subidx = 0x4F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object79"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub4F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub50 = {
	.node = { .key = &MyMaster_1029sub50.subidx },
	.subidx = 0x50,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object80"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub50,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub51 = {
	.node = { .key = &MyMaster_1029sub51.subidx },
	.subidx = 0x51,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object81"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub51,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub52 = {
	.node = { .key = &MyMaster_1029sub52.subidx },
	.subidx = 0x52,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object82"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub52,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub53 = {
	.node = { .key = &MyMaster_1029sub53.subidx },
	.subidx = 0x53,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object83"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub53,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub54 = {
	.node = { .key = &MyMaster_1029sub54.subidx },
	.subidx = 0x54,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object84"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub54,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub55 = {
	.node = { .key = &MyMaster_1029sub55.subidx },
	.subidx = 0x55,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object85"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub55,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub56 = {
	.node = { .key = &MyMaster_1029sub56.subidx },
	.subidx = 0x56,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object86"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub56,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub57 = {
	.node = { .key = &MyMaster_1029sub57.subidx },
	.subidx = 0x57,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object87"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub57,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub58 = {
	.node = { .key = &MyMaster_1029sub58.subidx },
	.subidx = 0x58,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object88"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub58,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub59 = {
	.node = { .key = &MyMaster_1029sub59.subidx },
	.subidx = 0x59,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object89"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub59,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub5A = {
	.node = { .key = &MyMaster_1029sub5A.subidx },
	.subidx = 0x5A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object90"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub5A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub5B = {
	.node = { .key = &MyMaster_1029sub5B.subidx },
	.subidx = 0x5B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object91"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub5B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub5C = {
	.node = { .key = &MyMaster_1029sub5C.subidx },
	.subidx = 0x5C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object92"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub5C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub5D = {
	.node = { .key = &MyMaster_1029sub5D.subidx },
	.subidx = 0x5D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object93"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub5D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub5E = {
	.node = { .key = &MyMaster_1029sub5E.subidx },
	.subidx = 0x5E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object94"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub5E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub5F = {
	.node = { .key = &MyMaster_1029sub5F.subidx },
	.subidx = 0x5F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object95"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub5F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub60 = {
	.node = { .key = &MyMaster_1029sub60.subidx },
	.subidx = 0x60,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object96"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub60,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub61 = {
	.node = { .key = &MyMaster_1029sub61.subidx },
	.subidx = 0x61,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object97"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub61,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub62 = {
	.node = { .key = &MyMaster_1029sub62.subidx },
	.subidx = 0x62,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object98"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub62,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub63 = {
	.node = { .key = &MyMaster_1029sub63.subidx },
	.subidx = 0x63,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object99"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub63,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub64 = {
	.node = { .key = &MyMaster_1029sub64.subidx },
	.subidx = 0x64,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object100"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub64,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub65 = {
	.node = { .key = &MyMaster_1029sub65.subidx },
	.subidx = 0x65,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object101"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub65,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub66 = {
	.node = { .key = &MyMaster_1029sub66.subidx },
	.subidx = 0x66,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object102"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub66,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub67 = {
	.node = { .key = &MyMaster_1029sub67.subidx },
	.subidx = 0x67,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object103"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub67,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub68 = {
	.node = { .key = &MyMaster_1029sub68.subidx },
	.subidx = 0x68,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object104"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub68,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub69 = {
	.node = { .key = &MyMaster_1029sub69.subidx },
	.subidx = 0x69,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object105"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub69,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub6A = {
	.node = { .key = &MyMaster_1029sub6A.subidx },
	.subidx = 0x6A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object106"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub6A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub6B = {
	.node = { .key = &MyMaster_1029sub6B.subidx },
	.subidx = 0x6B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object107"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub6B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub6C = {
	.node = { .key = &MyMaster_1029sub6C.subidx },
	.subidx = 0x6C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object108"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub6C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub6D = {
	.node = { .key = &MyMaster_1029sub6D.subidx },
	.subidx = 0x6D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object109"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub6D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub6E = {
	.node = { .key = &MyMaster_1029sub6E.subidx },
	.subidx = 0x6E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object110"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub6E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub6F = {
	.node = { .key = &MyMaster_1029sub6F.subidx },
	.subidx = 0x6F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object111"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub6F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub70 = {
	.node = { .key = &MyMaster_1029sub70.subidx },
	.subidx = 0x70,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object112"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub70,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub71 = {
	.node = { .key = &MyMaster_1029sub71.subidx },
	.subidx = 0x71,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object113"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub71,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub72 = {
	.node = { .key = &MyMaster_1029sub72.subidx },
	.subidx = 0x72,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object114"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub72,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub73 = {
	.node = { .key = &MyMaster_1029sub73.subidx },
	.subidx = 0x73,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object115"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub73,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub74 = {
	.node = { .key = &MyMaster_1029sub74.subidx },
	.subidx = 0x74,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object116"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub74,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub75 = {
	.node = { .key = &MyMaster_1029sub75.subidx },
	.subidx = 0x75,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object117"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub75,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub76 = {
	.node = { .key = &MyMaster_1029sub76.subidx },
	.subidx = 0x76,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object118"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub76,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub77 = {
	.node = { .key = &MyMaster_1029sub77.subidx },
	.subidx = 0x77,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object119"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub77,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub78 = {
	.node = { .key = &MyMaster_1029sub78.subidx },
	.subidx = 0x78,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object120"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub78,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub79 = {
	.node = { .key = &MyMaster_1029sub79.subidx },
	.subidx = 0x79,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object121"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub79,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub7A = {
	.node = { .key = &MyMaster_1029sub7A.subidx },
	.subidx = 0x7A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object122"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub7A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub7B = {
	.node = { .key = &MyMaster_1029sub7B.subidx },
	.subidx = 0x7B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object123"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub7B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub7C = {
	.node = { .key = &MyMaster_1029sub7C.subidx },
	.subidx = 0x7C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object124"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub7C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub7D = {
	.node = { .key = &MyMaster_1029sub7D.subidx },
	.subidx = 0x7D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object125"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub7D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub7E = {
	.node = { .key = &MyMaster_1029sub7E.subidx },
	.subidx = 0x7E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object126"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub7E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub7F = {
	.node = { .key = &MyMaster_1029sub7F.subidx },
	.subidx = 0x7F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object127"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub7F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub80 = {
	.node = { .key = &MyMaster_1029sub80.subidx },
	.subidx = 0x80,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object128"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub80,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub81 = {
	.node = { .key = &MyMaster_1029sub81.subidx },
	.subidx = 0x81,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object129"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub81,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub82 = {
	.node = { .key = &MyMaster_1029sub82.subidx },
	.subidx = 0x82,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object130"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub82,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub83 = {
	.node = { .key = &MyMaster_1029sub83.subidx },
	.subidx = 0x83,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object131"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub83,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub84 = {
	.node = { .key = &MyMaster_1029sub84.subidx },
	.subidx = 0x84,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object132"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub84,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub85 = {
	.node = { .key = &MyMaster_1029sub85.subidx },
	.subidx = 0x85,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object133"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub85,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub86 = {
	.node = { .key = &MyMaster_1029sub86.subidx },
	.subidx = 0x86,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object134"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub86,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub87 = {
	.node = { .key = &MyMaster_1029sub87.subidx },
	.subidx = 0x87,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object135"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub87,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub88 = {
	.node = { .key = &MyMaster_1029sub88.subidx },
	.subidx = 0x88,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object136"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub88,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub89 = {
	.node = { .key = &MyMaster_1029sub89.subidx },
	.subidx = 0x89,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object137"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub89,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub8A = {
	.node = { .key = &MyMaster_1029sub8A.subidx },
	.subidx = 0x8A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object138"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub8A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub8B = {
	.node = { .key = &MyMaster_1029sub8B.subidx },
	.subidx = 0x8B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object139"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub8B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub8C = {
	.node = { .key = &MyMaster_1029sub8C.subidx },
	.subidx = 0x8C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object140"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub8C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub8D = {
	.node = { .key = &MyMaster_1029sub8D.subidx },
	.subidx = 0x8D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object141"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub8D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub8E = {
	.node = { .key = &MyMaster_1029sub8E.subidx },
	.subidx = 0x8E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object142"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub8E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub8F = {
	.node = { .key = &MyMaster_1029sub8F.subidx },
	.subidx = 0x8F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object143"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub8F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub90 = {
	.node = { .key = &MyMaster_1029sub90.subidx },
	.subidx = 0x90,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object144"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub90,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub91 = {
	.node = { .key = &MyMaster_1029sub91.subidx },
	.subidx = 0x91,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object145"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub91,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub92 = {
	.node = { .key = &MyMaster_1029sub92.subidx },
	.subidx = 0x92,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object146"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub92,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub93 = {
	.node = { .key = &MyMaster_1029sub93.subidx },
	.subidx = 0x93,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object147"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub93,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub94 = {
	.node = { .key = &MyMaster_1029sub94.subidx },
	.subidx = 0x94,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object148"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub94,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub95 = {
	.node = { .key = &MyMaster_1029sub95.subidx },
	.subidx = 0x95,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object149"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub95,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub96 = {
	.node = { .key = &MyMaster_1029sub96.subidx },
	.subidx = 0x96,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object150"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub96,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub97 = {
	.node = { .key = &MyMaster_1029sub97.subidx },
	.subidx = 0x97,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object151"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub97,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub98 = {
	.node = { .key = &MyMaster_1029sub98.subidx },
	.subidx = 0x98,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object152"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub98,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub99 = {
	.node = { .key = &MyMaster_1029sub99.subidx },
	.subidx = 0x99,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object153"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub99,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub9A = {
	.node = { .key = &MyMaster_1029sub9A.subidx },
	.subidx = 0x9A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object154"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub9A,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub9B = {
	.node = { .key = &MyMaster_1029sub9B.subidx },
	.subidx = 0x9B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object155"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub9B,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub9C = {
	.node = { .key = &MyMaster_1029sub9C.subidx },
	.subidx = 0x9C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object156"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub9C,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub9D = {
	.node = { .key = &MyMaster_1029sub9D.subidx },
	.subidx = 0x9D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object157"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub9D,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub9E = {
	.node = { .key = &MyMaster_1029sub9E.subidx },
	.subidx = 0x9E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object158"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub9E,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029sub9F = {
	.node = { .key = &MyMaster_1029sub9F.subidx },
	.subidx = 0x9F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object159"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.sub9F,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA0 = {
	.node = { .key = &MyMaster_1029subA0.subidx },
	.subidx = 0xA0,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object160"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA1 = {
	.node = { .key = &MyMaster_1029subA1.subidx },
	.subidx = 0xA1,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object161"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA2 = {
	.node = { .key = &MyMaster_1029subA2.subidx },
	.subidx = 0xA2,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object162"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA3 = {
	.node = { .key = &MyMaster_1029subA3.subidx },
	.subidx = 0xA3,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object163"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA4 = {
	.node = { .key = &MyMaster_1029subA4.subidx },
	.subidx = 0xA4,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object164"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA5 = {
	.node = { .key = &MyMaster_1029subA5.subidx },
	.subidx = 0xA5,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object165"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA6 = {
	.node = { .key = &MyMaster_1029subA6.subidx },
	.subidx = 0xA6,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object166"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA7 = {
	.node = { .key = &MyMaster_1029subA7.subidx },
	.subidx = 0xA7,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object167"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA8 = {
	.node = { .key = &MyMaster_1029subA8.subidx },
	.subidx = 0xA8,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object168"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subA9 = {
	.node = { .key = &MyMaster_1029subA9.subidx },
	.subidx = 0xA9,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object169"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subA9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subAA = {
	.node = { .key = &MyMaster_1029subAA.subidx },
	.subidx = 0xAA,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object170"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subAA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subAB = {
	.node = { .key = &MyMaster_1029subAB.subidx },
	.subidx = 0xAB,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object171"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subAB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subAC = {
	.node = { .key = &MyMaster_1029subAC.subidx },
	.subidx = 0xAC,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object172"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subAC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subAD = {
	.node = { .key = &MyMaster_1029subAD.subidx },
	.subidx = 0xAD,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object173"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subAD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subAE = {
	.node = { .key = &MyMaster_1029subAE.subidx },
	.subidx = 0xAE,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object174"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subAE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subAF = {
	.node = { .key = &MyMaster_1029subAF.subidx },
	.subidx = 0xAF,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object175"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subAF,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB0 = {
	.node = { .key = &MyMaster_1029subB0.subidx },
	.subidx = 0xB0,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object176"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB1 = {
	.node = { .key = &MyMaster_1029subB1.subidx },
	.subidx = 0xB1,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object177"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB2 = {
	.node = { .key = &MyMaster_1029subB2.subidx },
	.subidx = 0xB2,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object178"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB3 = {
	.node = { .key = &MyMaster_1029subB3.subidx },
	.subidx = 0xB3,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object179"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB4 = {
	.node = { .key = &MyMaster_1029subB4.subidx },
	.subidx = 0xB4,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object180"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB5 = {
	.node = { .key = &MyMaster_1029subB5.subidx },
	.subidx = 0xB5,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object181"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB6 = {
	.node = { .key = &MyMaster_1029subB6.subidx },
	.subidx = 0xB6,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object182"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB7 = {
	.node = { .key = &MyMaster_1029subB7.subidx },
	.subidx = 0xB7,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object183"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB8 = {
	.node = { .key = &MyMaster_1029subB8.subidx },
	.subidx = 0xB8,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object184"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subB9 = {
	.node = { .key = &MyMaster_1029subB9.subidx },
	.subidx = 0xB9,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object185"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subB9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subBA = {
	.node = { .key = &MyMaster_1029subBA.subidx },
	.subidx = 0xBA,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object186"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subBA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subBB = {
	.node = { .key = &MyMaster_1029subBB.subidx },
	.subidx = 0xBB,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object187"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subBB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subBC = {
	.node = { .key = &MyMaster_1029subBC.subidx },
	.subidx = 0xBC,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object188"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subBC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subBD = {
	.node = { .key = &MyMaster_1029subBD.subidx },
	.subidx = 0xBD,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object189"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subBD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subBE = {
	.node = { .key = &MyMaster_1029subBE.subidx },
	.subidx = 0xBE,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object190"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subBE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subBF = {
	.node = { .key = &MyMaster_1029subBF.subidx },
	.subidx = 0xBF,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object191"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subBF,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC0 = {
	.node = { .key = &MyMaster_1029subC0.subidx },
	.subidx = 0xC0,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object192"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC1 = {
	.node = { .key = &MyMaster_1029subC1.subidx },
	.subidx = 0xC1,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object193"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC2 = {
	.node = { .key = &MyMaster_1029subC2.subidx },
	.subidx = 0xC2,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object194"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC3 = {
	.node = { .key = &MyMaster_1029subC3.subidx },
	.subidx = 0xC3,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object195"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC4 = {
	.node = { .key = &MyMaster_1029subC4.subidx },
	.subidx = 0xC4,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object196"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC5 = {
	.node = { .key = &MyMaster_1029subC5.subidx },
	.subidx = 0xC5,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object197"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC6 = {
	.node = { .key = &MyMaster_1029subC6.subidx },
	.subidx = 0xC6,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object198"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC7 = {
	.node = { .key = &MyMaster_1029subC7.subidx },
	.subidx = 0xC7,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object199"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC8 = {
	.node = { .key = &MyMaster_1029subC8.subidx },
	.subidx = 0xC8,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object200"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subC9 = {
	.node = { .key = &MyMaster_1029subC9.subidx },
	.subidx = 0xC9,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object201"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subC9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subCA = {
	.node = { .key = &MyMaster_1029subCA.subidx },
	.subidx = 0xCA,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object202"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subCA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subCB = {
	.node = { .key = &MyMaster_1029subCB.subidx },
	.subidx = 0xCB,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object203"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subCB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subCC = {
	.node = { .key = &MyMaster_1029subCC.subidx },
	.subidx = 0xCC,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object204"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subCC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subCD = {
	.node = { .key = &MyMaster_1029subCD.subidx },
	.subidx = 0xCD,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object205"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subCD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subCE = {
	.node = { .key = &MyMaster_1029subCE.subidx },
	.subidx = 0xCE,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object206"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subCE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subCF = {
	.node = { .key = &MyMaster_1029subCF.subidx },
	.subidx = 0xCF,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object207"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subCF,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD0 = {
	.node = { .key = &MyMaster_1029subD0.subidx },
	.subidx = 0xD0,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object208"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD1 = {
	.node = { .key = &MyMaster_1029subD1.subidx },
	.subidx = 0xD1,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object209"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD2 = {
	.node = { .key = &MyMaster_1029subD2.subidx },
	.subidx = 0xD2,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object210"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD3 = {
	.node = { .key = &MyMaster_1029subD3.subidx },
	.subidx = 0xD3,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object211"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD4 = {
	.node = { .key = &MyMaster_1029subD4.subidx },
	.subidx = 0xD4,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object212"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD5 = {
	.node = { .key = &MyMaster_1029subD5.subidx },
	.subidx = 0xD5,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object213"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD6 = {
	.node = { .key = &MyMaster_1029subD6.subidx },
	.subidx = 0xD6,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object214"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD7 = {
	.node = { .key = &MyMaster_1029subD7.subidx },
	.subidx = 0xD7,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object215"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD8 = {
	.node = { .key = &MyMaster_1029subD8.subidx },
	.subidx = 0xD8,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object216"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subD9 = {
	.node = { .key = &MyMaster_1029subD9.subidx },
	.subidx = 0xD9,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object217"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subD9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subDA = {
	.node = { .key = &MyMaster_1029subDA.subidx },
	.subidx = 0xDA,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object218"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subDA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subDB = {
	.node = { .key = &MyMaster_1029subDB.subidx },
	.subidx = 0xDB,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object219"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subDB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subDC = {
	.node = { .key = &MyMaster_1029subDC.subidx },
	.subidx = 0xDC,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object220"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subDC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subDD = {
	.node = { .key = &MyMaster_1029subDD.subidx },
	.subidx = 0xDD,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object221"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subDD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subDE = {
	.node = { .key = &MyMaster_1029subDE.subidx },
	.subidx = 0xDE,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object222"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subDE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subDF = {
	.node = { .key = &MyMaster_1029subDF.subidx },
	.subidx = 0xDF,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object223"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subDF,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE0 = {
	.node = { .key = &MyMaster_1029subE0.subidx },
	.subidx = 0xE0,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object224"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE1 = {
	.node = { .key = &MyMaster_1029subE1.subidx },
	.subidx = 0xE1,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object225"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE2 = {
	.node = { .key = &MyMaster_1029subE2.subidx },
	.subidx = 0xE2,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object226"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE3 = {
	.node = { .key = &MyMaster_1029subE3.subidx },
	.subidx = 0xE3,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object227"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE4 = {
	.node = { .key = &MyMaster_1029subE4.subidx },
	.subidx = 0xE4,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object228"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE5 = {
	.node = { .key = &MyMaster_1029subE5.subidx },
	.subidx = 0xE5,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object229"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE6 = {
	.node = { .key = &MyMaster_1029subE6.subidx },
	.subidx = 0xE6,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object230"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE7 = {
	.node = { .key = &MyMaster_1029subE7.subidx },
	.subidx = 0xE7,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object231"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE8 = {
	.node = { .key = &MyMaster_1029subE8.subidx },
	.subidx = 0xE8,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object232"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subE9 = {
	.node = { .key = &MyMaster_1029subE9.subidx },
	.subidx = 0xE9,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object233"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subE9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subEA = {
	.node = { .key = &MyMaster_1029subEA.subidx },
	.subidx = 0xEA,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object234"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subEA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subEB = {
	.node = { .key = &MyMaster_1029subEB.subidx },
	.subidx = 0xEB,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object235"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subEB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subEC = {
	.node = { .key = &MyMaster_1029subEC.subidx },
	.subidx = 0xEC,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object236"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subEC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subED = {
	.node = { .key = &MyMaster_1029subED.subidx },
	.subidx = 0xED,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object237"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subED,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subEE = {
	.node = { .key = &MyMaster_1029subEE.subidx },
	.subidx = 0xEE,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object238"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subEE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subEF = {
	.node = { .key = &MyMaster_1029subEF.subidx },
	.subidx = 0xEF,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object239"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subEF,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF0 = {
	.node = { .key = &MyMaster_1029subF0.subidx },
	.subidx = 0xF0,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object240"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF0,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF1 = {
	.node = { .key = &MyMaster_1029subF1.subidx },
	.subidx = 0xF1,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object241"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF2 = {
	.node = { .key = &MyMaster_1029subF2.subidx },
	.subidx = 0xF2,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object242"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF3 = {
	.node = { .key = &MyMaster_1029subF3.subidx },
	.subidx = 0xF3,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object243"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF4 = {
	.node = { .key = &MyMaster_1029subF4.subidx },
	.subidx = 0xF4,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object244"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF5 = {
	.node = { .key = &MyMaster_1029subF5.subidx },
	.subidx = 0xF5,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object245"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF6 = {
	.node = { .key = &MyMaster_1029subF6.subidx },
	.subidx = 0xF6,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object246"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF7 = {
	.node = { .key = &MyMaster_1029subF7.subidx },
	.subidx = 0xF7,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object247"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF8 = {
	.node = { .key = &MyMaster_1029subF8.subidx },
	.subidx = 0xF8,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object248"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subF9 = {
	.node = { .key = &MyMaster_1029subF9.subidx },
	.subidx = 0xF9,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object249"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subF9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subFA = {
	.node = { .key = &MyMaster_1029subFA.subidx },
	.subidx = 0xFA,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object250"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subFA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subFB = {
	.node = { .key = &MyMaster_1029subFB.subidx },
	.subidx = 0xFB,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object251"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subFB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subFC = {
	.node = { .key = &MyMaster_1029subFC.subidx },
	.subidx = 0xFC,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object252"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subFC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subFD = {
	.node = { .key = &MyMaster_1029subFD.subidx },
	.subidx = 0xFD,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object253"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subFD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1029subFE = {
	.node = { .key = &MyMaster_1029subFE.subidx },
	.subidx = 0xFE,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Error behavior object254"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1029_val.subFE,
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
} MyMaster_102A_val = {
	.sub0 = 0x0000,
};

static co_obj_t MyMaster_102A = {
	.node = { .key = &MyMaster_102A.idx },
	.idx = 0x102A,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT inhibit time"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_102A_val,
	.size = sizeof(MyMaster_102A_val)
};

static co_sub_t MyMaster_102Asub0 = {
	.node = { .key = &MyMaster_102Asub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT inhibit time"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MyMaster_102A_val.sub0,
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
} MyMaster_1400_val = {
	.sub0 = 0x05,
	.sub1 = 0x00000182,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
};

static co_obj_t MyMaster_1400 = {
	.node = { .key = &MyMaster_1400.idx },
	.idx = 0x1400,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1400_val,
	.size = sizeof(MyMaster_1400_val)
};

static co_sub_t MyMaster_1400sub0 = {
	.node = { .key = &MyMaster_1400sub0.subidx },
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
	.val = &MyMaster_1400_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1400sub1 = {
	.node = { .key = &MyMaster_1400sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by RPDO"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000182 },
#endif
	.val = &MyMaster_1400_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1400sub2 = {
	.node = { .key = &MyMaster_1400sub2.subidx },
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
	.val = &MyMaster_1400_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1400sub3 = {
	.node = { .key = &MyMaster_1400sub3.subidx },
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
	.val = &MyMaster_1400_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1400sub4 = {
	.node = { .key = &MyMaster_1400sub4.subidx },
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
	.val = &MyMaster_1400_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1400sub5 = {
	.node = { .key = &MyMaster_1400sub5.subidx },
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
	.val = &MyMaster_1400_val.sub5,
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
} MyMaster_1401_val = {
	.sub0 = 0x05,
	.sub1 = 0x00000282,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
};

static co_obj_t MyMaster_1401 = {
	.node = { .key = &MyMaster_1401.idx },
	.idx = 0x1401,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1401_val,
	.size = sizeof(MyMaster_1401_val)
};

static co_sub_t MyMaster_1401sub0 = {
	.node = { .key = &MyMaster_1401sub0.subidx },
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
	.val = &MyMaster_1401_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1401sub1 = {
	.node = { .key = &MyMaster_1401sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by RPDO"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000282 },
#endif
	.val = &MyMaster_1401_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1401sub2 = {
	.node = { .key = &MyMaster_1401sub2.subidx },
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
	.val = &MyMaster_1401_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1401sub3 = {
	.node = { .key = &MyMaster_1401sub3.subidx },
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
	.val = &MyMaster_1401_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1401sub4 = {
	.node = { .key = &MyMaster_1401sub4.subidx },
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
	.val = &MyMaster_1401_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1401sub5 = {
	.node = { .key = &MyMaster_1401sub5.subidx },
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
	.val = &MyMaster_1401_val.sub5,
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
} MyMaster_1600_val = {
	.sub0 = 0x02,
	.sub1 = 0x20000110,
	.sub2 = 0x20000210,
};

static co_obj_t MyMaster_1600 = {
	.node = { .key = &MyMaster_1600.idx },
	.idx = 0x1600,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1600_val,
	.size = sizeof(MyMaster_1600_val)
};

static co_sub_t MyMaster_1600sub0 = {
	.node = { .key = &MyMaster_1600sub0.subidx },
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
	.val = &MyMaster_1600_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1600sub1 = {
	.node = { .key = &MyMaster_1600sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1600_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1600sub2 = {
	.node = { .key = &MyMaster_1600sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1600_val.sub2,
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
} MyMaster_1601_val = {
	.sub0 = 0x02,
	.sub1 = 0x20010110,
	.sub2 = 0x20010220,
};

static co_obj_t MyMaster_1601 = {
	.node = { .key = &MyMaster_1601.idx },
	.idx = 0x1601,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1601_val,
	.size = sizeof(MyMaster_1601_val)
};

static co_sub_t MyMaster_1601sub0 = {
	.node = { .key = &MyMaster_1601sub0.subidx },
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
	.val = &MyMaster_1601_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1601sub1 = {
	.node = { .key = &MyMaster_1601sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1601_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1601sub2 = {
	.node = { .key = &MyMaster_1601sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("RPDO mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1601_val.sub2,
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
} MyMaster_1800_val = {
	.sub0 = 0x06,
	.sub1 = 0x00000202,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
	.sub6 = 0x00,
};

static co_obj_t MyMaster_1800 = {
	.node = { .key = &MyMaster_1800.idx },
	.idx = 0x1800,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1800_val,
	.size = sizeof(MyMaster_1800_val)
};

static co_sub_t MyMaster_1800sub0 = {
	.node = { .key = &MyMaster_1800sub0.subidx },
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
	.val = &MyMaster_1800_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1800sub1 = {
	.node = { .key = &MyMaster_1800sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by TPDO"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000202 },
#endif
	.val = &MyMaster_1800_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1800sub2 = {
	.node = { .key = &MyMaster_1800sub2.subidx },
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
	.val = &MyMaster_1800_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1800sub3 = {
	.node = { .key = &MyMaster_1800sub3.subidx },
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
	.val = &MyMaster_1800_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1800sub4 = {
	.node = { .key = &MyMaster_1800sub4.subidx },
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
	.val = &MyMaster_1800_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1800sub5 = {
	.node = { .key = &MyMaster_1800sub5.subidx },
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
	.val = &MyMaster_1800_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1800sub6 = {
	.node = { .key = &MyMaster_1800sub6.subidx },
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
	.val = &MyMaster_1800_val.sub6,
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
} MyMaster_1801_val = {
	.sub0 = 0x06,
	.sub1 = 0x00000302,
	.sub2 = 0x01,
	.sub3 = 0x0000,
	.sub4 = 0x00,
	.sub5 = 0x0000,
	.sub6 = 0x00,
};

static co_obj_t MyMaster_1801 = {
	.node = { .key = &MyMaster_1801.idx },
	.idx = 0x1801,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO communication parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1801_val,
	.size = sizeof(MyMaster_1801_val)
};

static co_sub_t MyMaster_1801sub0 = {
	.node = { .key = &MyMaster_1801sub0.subidx },
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
	.val = &MyMaster_1801_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1801sub1 = {
	.node = { .key = &MyMaster_1801sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("COB-ID used by TPDO"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000302 },
#endif
	.val = &MyMaster_1801_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1801sub2 = {
	.node = { .key = &MyMaster_1801sub2.subidx },
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
	.val = &MyMaster_1801_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1801sub3 = {
	.node = { .key = &MyMaster_1801sub3.subidx },
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
	.val = &MyMaster_1801_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1801sub4 = {
	.node = { .key = &MyMaster_1801sub4.subidx },
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
	.val = &MyMaster_1801_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1801sub5 = {
	.node = { .key = &MyMaster_1801sub5.subidx },
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
	.val = &MyMaster_1801_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1801sub6 = {
	.node = { .key = &MyMaster_1801sub6.subidx },
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
	.val = &MyMaster_1801_val.sub6,
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
} MyMaster_1A00_val = {
	.sub0 = 0x01,
	.sub1 = 0x22000120,
};

static co_obj_t MyMaster_1A00 = {
	.node = { .key = &MyMaster_1A00.idx },
	.idx = 0x1A00,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1A00_val,
	.size = sizeof(MyMaster_1A00_val)
};

static co_sub_t MyMaster_1A00sub0 = {
	.node = { .key = &MyMaster_1A00sub0.subidx },
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
	.val = &MyMaster_1A00_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1A00sub1 = {
	.node = { .key = &MyMaster_1A00sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1A00_val.sub1,
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
} MyMaster_1A01_val = {
	.sub0 = 0x02,
	.sub1 = 0x22010110,
	.sub2 = 0x22010220,
};

static co_obj_t MyMaster_1A01 = {
	.node = { .key = &MyMaster_1A01.idx },
	.idx = 0x1A01,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1A01_val,
	.size = sizeof(MyMaster_1A01_val)
};

static co_sub_t MyMaster_1A01sub0 = {
	.node = { .key = &MyMaster_1A01sub0.subidx },
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
	.val = &MyMaster_1A01_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1A01sub1 = {
	.node = { .key = &MyMaster_1A01sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1A01_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1A01sub2 = {
	.node = { .key = &MyMaster_1A01sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("TPDO mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1A01_val.sub2,
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
	co_unsigned8_t sub1;
	co_unsigned8_t sub2;
	co_unsigned8_t sub3;
	co_unsigned8_t sub4;
	co_unsigned8_t sub5;
} MyMaster_1F25_val = {
	.sub0 = 0x05,
	.sub1 = 0x00,
	.sub2 = 0x00,
	.sub3 = 0x00,
	.sub4 = 0x00,
	.sub5 = 0x00,
};

static co_obj_t MyMaster_1F25 = {
	.node = { .key = &MyMaster_1F25.idx },
	.idx = 0x1F25,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Configuration request"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F25_val,
	.size = sizeof(MyMaster_1F25_val)
};

static co_sub_t MyMaster_1F25sub0 = {
	.node = { .key = &MyMaster_1F25sub0.subidx },
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
	.val = &MyMaster_1F25_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F25sub1 = {
	.node = { .key = &MyMaster_1F25sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Configuration request1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F25_val.sub1,
	.access = CO_ACCESS_WO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F25sub2 = {
	.node = { .key = &MyMaster_1F25sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Configuration request2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F25_val.sub2,
	.access = CO_ACCESS_WO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F25sub3 = {
	.node = { .key = &MyMaster_1F25sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Configuration request3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F25_val.sub3,
	.access = CO_ACCESS_WO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F25sub4 = {
	.node = { .key = &MyMaster_1F25sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Configuration request4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F25_val.sub4,
	.access = CO_ACCESS_WO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F25sub5 = {
	.node = { .key = &MyMaster_1F25sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Configuration request5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F25_val.sub5,
	.access = CO_ACCESS_WO,
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
} MyMaster_1F55_val = {
	.sub0 = 0x05,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
};

static co_obj_t MyMaster_1F55 = {
	.node = { .key = &MyMaster_1F55.idx },
	.idx = 0x1F55,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Expected software identification"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F55_val,
	.size = sizeof(MyMaster_1F55_val)
};

static co_sub_t MyMaster_1F55sub0 = {
	.node = { .key = &MyMaster_1F55sub0.subidx },
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
	.val = &MyMaster_1F55_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F55sub1 = {
	.node = { .key = &MyMaster_1F55sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Expected software identification1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F55_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F55sub2 = {
	.node = { .key = &MyMaster_1F55sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Expected software identification2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F55_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F55sub3 = {
	.node = { .key = &MyMaster_1F55sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Expected software identification3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F55_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F55sub4 = {
	.node = { .key = &MyMaster_1F55sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Expected software identification4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F55_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F55sub5 = {
	.node = { .key = &MyMaster_1F55sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Expected software identification5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F55_val.sub5,
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
} MyMaster_1F80_val = {
	.sub0 = 0x00000001,
};

static co_obj_t MyMaster_1F80 = {
	.node = { .key = &MyMaster_1F80.idx },
	.idx = 0x1F80,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT startup"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F80_val,
	.size = sizeof(MyMaster_1F80_val)
};

static co_sub_t MyMaster_1F80sub0 = {
	.node = { .key = &MyMaster_1F80sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT startup"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000001 },
#endif
	.val = &MyMaster_1F80_val.sub0,
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
	co_unsigned32_t sub5;
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
} MyMaster_1F81_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00000000,
	.sub2 = 0x00000005,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
};

static co_obj_t MyMaster_1F81 = {
	.node = { .key = &MyMaster_1F81.idx },
	.idx = 0x1F81,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F81_val,
	.size = sizeof(MyMaster_1F81_val)
};

static co_sub_t MyMaster_1F81sub0 = {
	.node = { .key = &MyMaster_1F81sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F81_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub1 = {
	.node = { .key = &MyMaster_1F81sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub2 = {
	.node = { .key = &MyMaster_1F81sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub3 = {
	.node = { .key = &MyMaster_1F81sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub4 = {
	.node = { .key = &MyMaster_1F81sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub5 = {
	.node = { .key = &MyMaster_1F81sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub6 = {
	.node = { .key = &MyMaster_1F81sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub7 = {
	.node = { .key = &MyMaster_1F81sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub8 = {
	.node = { .key = &MyMaster_1F81sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81sub9 = {
	.node = { .key = &MyMaster_1F81sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81subA = {
	.node = { .key = &MyMaster_1F81subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81subB = {
	.node = { .key = &MyMaster_1F81subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81subC = {
	.node = { .key = &MyMaster_1F81subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81subD = {
	.node = { .key = &MyMaster_1F81subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81subE = {
	.node = { .key = &MyMaster_1F81subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F81subF = {
	.node = { .key = &MyMaster_1F81subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("NMT slave assignment15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F81_val.subF,
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
	co_unsigned8_t sub1;
	co_unsigned8_t sub2;
	co_unsigned8_t sub3;
	co_unsigned8_t sub4;
	co_unsigned8_t sub5;
	co_unsigned8_t sub6;
	co_unsigned8_t sub7;
	co_unsigned8_t sub8;
	co_unsigned8_t sub9;
	co_unsigned8_t subA;
	co_unsigned8_t subB;
	co_unsigned8_t subC;
	co_unsigned8_t subD;
	co_unsigned8_t subE;
	co_unsigned8_t subF;
} MyMaster_1F82_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00,
	.sub2 = 0x00,
	.sub3 = 0x00,
	.sub4 = 0x00,
	.sub5 = 0x00,
	.sub6 = 0x00,
	.sub7 = 0x00,
	.sub8 = 0x00,
	.sub9 = 0x00,
	.subA = 0x00,
	.subB = 0x00,
	.subC = 0x00,
	.subD = 0x00,
	.subE = 0x00,
	.subF = 0x00,
};

static co_obj_t MyMaster_1F82 = {
	.node = { .key = &MyMaster_1F82.idx },
	.idx = 0x1F82,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F82_val,
	.size = sizeof(MyMaster_1F82_val)
};

static co_sub_t MyMaster_1F82sub0 = {
	.node = { .key = &MyMaster_1F82sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F82_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub1 = {
	.node = { .key = &MyMaster_1F82sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub2 = {
	.node = { .key = &MyMaster_1F82sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub3 = {
	.node = { .key = &MyMaster_1F82sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub4 = {
	.node = { .key = &MyMaster_1F82sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub5 = {
	.node = { .key = &MyMaster_1F82sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub6 = {
	.node = { .key = &MyMaster_1F82sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub7 = {
	.node = { .key = &MyMaster_1F82sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub8 = {
	.node = { .key = &MyMaster_1F82sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82sub9 = {
	.node = { .key = &MyMaster_1F82sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82subA = {
	.node = { .key = &MyMaster_1F82subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82subB = {
	.node = { .key = &MyMaster_1F82subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82subC = {
	.node = { .key = &MyMaster_1F82subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82subD = {
	.node = { .key = &MyMaster_1F82subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82subE = {
	.node = { .key = &MyMaster_1F82subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F82subF = {
	.node = { .key = &MyMaster_1F82subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Request NMT15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F82_val.subF,
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
	co_unsigned32_t sub5;
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
} MyMaster_1F84_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
};

static co_obj_t MyMaster_1F84 = {
	.node = { .key = &MyMaster_1F84.idx },
	.idx = 0x1F84,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F84_val,
	.size = sizeof(MyMaster_1F84_val)
};

static co_sub_t MyMaster_1F84sub0 = {
	.node = { .key = &MyMaster_1F84sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F84_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub1 = {
	.node = { .key = &MyMaster_1F84sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub2 = {
	.node = { .key = &MyMaster_1F84sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub3 = {
	.node = { .key = &MyMaster_1F84sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub4 = {
	.node = { .key = &MyMaster_1F84sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub5 = {
	.node = { .key = &MyMaster_1F84sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub6 = {
	.node = { .key = &MyMaster_1F84sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub7 = {
	.node = { .key = &MyMaster_1F84sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub8 = {
	.node = { .key = &MyMaster_1F84sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84sub9 = {
	.node = { .key = &MyMaster_1F84sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84subA = {
	.node = { .key = &MyMaster_1F84subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84subB = {
	.node = { .key = &MyMaster_1F84subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84subC = {
	.node = { .key = &MyMaster_1F84subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84subD = {
	.node = { .key = &MyMaster_1F84subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84subE = {
	.node = { .key = &MyMaster_1F84subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F84subF = {
	.node = { .key = &MyMaster_1F84subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Device type identification15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F84_val.subF,
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
	co_unsigned32_t sub5;
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
} MyMaster_1F85_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00000000,
	.sub2 = 0x00000360,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
};

static co_obj_t MyMaster_1F85 = {
	.node = { .key = &MyMaster_1F85.idx },
	.idx = 0x1F85,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F85_val,
	.size = sizeof(MyMaster_1F85_val)
};

static co_sub_t MyMaster_1F85sub0 = {
	.node = { .key = &MyMaster_1F85sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F85_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub1 = {
	.node = { .key = &MyMaster_1F85sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub2 = {
	.node = { .key = &MyMaster_1F85sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub3 = {
	.node = { .key = &MyMaster_1F85sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub4 = {
	.node = { .key = &MyMaster_1F85sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub5 = {
	.node = { .key = &MyMaster_1F85sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub6 = {
	.node = { .key = &MyMaster_1F85sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub7 = {
	.node = { .key = &MyMaster_1F85sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub8 = {
	.node = { .key = &MyMaster_1F85sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85sub9 = {
	.node = { .key = &MyMaster_1F85sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85subA = {
	.node = { .key = &MyMaster_1F85subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85subB = {
	.node = { .key = &MyMaster_1F85subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85subC = {
	.node = { .key = &MyMaster_1F85subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85subD = {
	.node = { .key = &MyMaster_1F85subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85subE = {
	.node = { .key = &MyMaster_1F85subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F85subF = {
	.node = { .key = &MyMaster_1F85subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Vendor identification15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F85_val.subF,
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
	co_unsigned32_t sub5;
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
} MyMaster_1F86_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
};

static co_obj_t MyMaster_1F86 = {
	.node = { .key = &MyMaster_1F86.idx },
	.idx = 0x1F86,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F86_val,
	.size = sizeof(MyMaster_1F86_val)
};

static co_sub_t MyMaster_1F86sub0 = {
	.node = { .key = &MyMaster_1F86sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F86_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub1 = {
	.node = { .key = &MyMaster_1F86sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub2 = {
	.node = { .key = &MyMaster_1F86sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub3 = {
	.node = { .key = &MyMaster_1F86sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub4 = {
	.node = { .key = &MyMaster_1F86sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub5 = {
	.node = { .key = &MyMaster_1F86sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub6 = {
	.node = { .key = &MyMaster_1F86sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub7 = {
	.node = { .key = &MyMaster_1F86sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub8 = {
	.node = { .key = &MyMaster_1F86sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86sub9 = {
	.node = { .key = &MyMaster_1F86sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86subA = {
	.node = { .key = &MyMaster_1F86subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86subB = {
	.node = { .key = &MyMaster_1F86subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86subC = {
	.node = { .key = &MyMaster_1F86subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86subD = {
	.node = { .key = &MyMaster_1F86subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86subE = {
	.node = { .key = &MyMaster_1F86subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F86subF = {
	.node = { .key = &MyMaster_1F86subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Product code15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F86_val.subF,
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
	co_unsigned32_t sub5;
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
} MyMaster_1F87_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
};

static co_obj_t MyMaster_1F87 = {
	.node = { .key = &MyMaster_1F87.idx },
	.idx = 0x1F87,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F87_val,
	.size = sizeof(MyMaster_1F87_val)
};

static co_sub_t MyMaster_1F87sub0 = {
	.node = { .key = &MyMaster_1F87sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F87_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub1 = {
	.node = { .key = &MyMaster_1F87sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub2 = {
	.node = { .key = &MyMaster_1F87sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub3 = {
	.node = { .key = &MyMaster_1F87sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub4 = {
	.node = { .key = &MyMaster_1F87sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub5 = {
	.node = { .key = &MyMaster_1F87sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub6 = {
	.node = { .key = &MyMaster_1F87sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub7 = {
	.node = { .key = &MyMaster_1F87sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub8 = {
	.node = { .key = &MyMaster_1F87sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87sub9 = {
	.node = { .key = &MyMaster_1F87sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87subA = {
	.node = { .key = &MyMaster_1F87subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87subB = {
	.node = { .key = &MyMaster_1F87subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87subC = {
	.node = { .key = &MyMaster_1F87subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87subD = {
	.node = { .key = &MyMaster_1F87subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87subE = {
	.node = { .key = &MyMaster_1F87subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F87subF = {
	.node = { .key = &MyMaster_1F87subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Revision_number15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F87_val.subF,
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
	co_unsigned32_t sub5;
	co_unsigned32_t sub6;
	co_unsigned32_t sub7;
	co_unsigned32_t sub8;
	co_unsigned32_t sub9;
	co_unsigned32_t subA;
	co_unsigned32_t subB;
	co_unsigned32_t subC;
	co_unsigned32_t subD;
	co_unsigned32_t subE;
	co_unsigned32_t subF;
} MyMaster_1F88_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00000000,
	.sub2 = 0x00000000,
	.sub3 = 0x00000000,
	.sub4 = 0x00000000,
	.sub5 = 0x00000000,
	.sub6 = 0x00000000,
	.sub7 = 0x00000000,
	.sub8 = 0x00000000,
	.sub9 = 0x00000000,
	.subA = 0x00000000,
	.subB = 0x00000000,
	.subC = 0x00000000,
	.subD = 0x00000000,
	.subE = 0x00000000,
	.subF = 0x00000000,
};

static co_obj_t MyMaster_1F88 = {
	.node = { .key = &MyMaster_1F88.idx },
	.idx = 0x1F88,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F88_val,
	.size = sizeof(MyMaster_1F88_val)
};

static co_sub_t MyMaster_1F88sub0 = {
	.node = { .key = &MyMaster_1F88sub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F88_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub1 = {
	.node = { .key = &MyMaster_1F88sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub2 = {
	.node = { .key = &MyMaster_1F88sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub3 = {
	.node = { .key = &MyMaster_1F88sub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub4 = {
	.node = { .key = &MyMaster_1F88sub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub5 = {
	.node = { .key = &MyMaster_1F88sub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub6 = {
	.node = { .key = &MyMaster_1F88sub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub7 = {
	.node = { .key = &MyMaster_1F88sub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub8 = {
	.node = { .key = &MyMaster_1F88sub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88sub9 = {
	.node = { .key = &MyMaster_1F88sub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88subA = {
	.node = { .key = &MyMaster_1F88subA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88subB = {
	.node = { .key = &MyMaster_1F88subB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88subC = {
	.node = { .key = &MyMaster_1F88subC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88subD = {
	.node = { .key = &MyMaster_1F88subD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88subE = {
	.node = { .key = &MyMaster_1F88subE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F88subF = {
	.node = { .key = &MyMaster_1F88subF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Serial number15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F88_val.subF,
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
} MyMaster_1F89_val = {
	.sub0 = 0x00000000,
};

static co_obj_t MyMaster_1F89 = {
	.node = { .key = &MyMaster_1F89.idx },
	.idx = 0x1F89,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Boot time"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F89_val,
	.size = sizeof(MyMaster_1F89_val)
};

static co_sub_t MyMaster_1F89sub0 = {
	.node = { .key = &MyMaster_1F89sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Boot time"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_1F89_val.sub0,
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
	co_unsigned8_t sub1;
	co_unsigned8_t sub2;
	co_unsigned8_t sub3;
	co_unsigned8_t sub4;
	co_unsigned8_t sub5;
	co_unsigned8_t sub6;
	co_unsigned8_t sub7;
	co_unsigned8_t sub8;
	co_unsigned8_t sub9;
	co_unsigned8_t subA;
	co_unsigned8_t subB;
	co_unsigned8_t subC;
	co_unsigned8_t subD;
	co_unsigned8_t subE;
	co_unsigned8_t subF;
} MyMaster_1F8A_val = {
	.sub0 = 0x0F,
	.sub1 = 0x00,
	.sub2 = 0x00,
	.sub3 = 0x00,
	.sub4 = 0x00,
	.sub5 = 0x00,
	.sub6 = 0x00,
	.sub7 = 0x00,
	.sub8 = 0x00,
	.sub9 = 0x00,
	.subA = 0x00,
	.subB = 0x00,
	.subC = 0x00,
	.subD = 0x00,
	.subE = 0x00,
	.subF = 0x00,
};

static co_obj_t MyMaster_1F8A = {
	.node = { .key = &MyMaster_1F8A.idx },
	.idx = 0x1F8A,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_1F8A_val,
	.size = sizeof(MyMaster_1F8A_val)
};

static co_sub_t MyMaster_1F8Asub0 = {
	.node = { .key = &MyMaster_1F8Asub0.subidx },
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
	.def = { .u8 = 0x0F },
#endif
	.val = &MyMaster_1F8A_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub1 = {
	.node = { .key = &MyMaster_1F8Asub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub2 = {
	.node = { .key = &MyMaster_1F8Asub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub3 = {
	.node = { .key = &MyMaster_1F8Asub3.subidx },
	.subidx = 0x03,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration3"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub3,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub4 = {
	.node = { .key = &MyMaster_1F8Asub4.subidx },
	.subidx = 0x04,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration4"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub4,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub5 = {
	.node = { .key = &MyMaster_1F8Asub5.subidx },
	.subidx = 0x05,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration5"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub5,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub6 = {
	.node = { .key = &MyMaster_1F8Asub6.subidx },
	.subidx = 0x06,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration6"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub6,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub7 = {
	.node = { .key = &MyMaster_1F8Asub7.subidx },
	.subidx = 0x07,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration7"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub7,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub8 = {
	.node = { .key = &MyMaster_1F8Asub8.subidx },
	.subidx = 0x08,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration8"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub8,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8Asub9 = {
	.node = { .key = &MyMaster_1F8Asub9.subidx },
	.subidx = 0x09,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration9"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.sub9,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8AsubA = {
	.node = { .key = &MyMaster_1F8AsubA.subidx },
	.subidx = 0x0A,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration10"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.subA,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8AsubB = {
	.node = { .key = &MyMaster_1F8AsubB.subidx },
	.subidx = 0x0B,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration11"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.subB,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8AsubC = {
	.node = { .key = &MyMaster_1F8AsubC.subidx },
	.subidx = 0x0C,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration12"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.subC,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8AsubD = {
	.node = { .key = &MyMaster_1F8AsubD.subidx },
	.subidx = 0x0D,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration13"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.subD,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8AsubE = {
	.node = { .key = &MyMaster_1F8AsubE.subidx },
	.subidx = 0x0E,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration14"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.subE,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_1F8AsubF = {
	.node = { .key = &MyMaster_1F8AsubF.subidx },
	.subidx = 0x0F,
	.type = CO_DEFTYPE_UNSIGNED8,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Restore configuration15"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u8 = CO_UNSIGNED8_MIN },
	.max = { .u8 = CO_UNSIGNED8_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u8 = 0x00 },
#endif
	.val = &MyMaster_1F8A_val.subF,
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
	co_unsigned16_t sub1;
	co_unsigned16_t sub2;
} MyMaster_2000_val = {
	.sub0 = 0x02,
	.sub1 = 0x0000,
	.sub2 = 0x0000,
};

static co_obj_t MyMaster_2000 = {
	.node = { .key = &MyMaster_2000.idx },
	.idx = 0x2000,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Mapped application objects for RPDO 1"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_2000_val,
	.size = sizeof(MyMaster_2000_val)
};

static co_sub_t MyMaster_2000sub0 = {
	.node = { .key = &MyMaster_2000sub0.subidx },
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
	.def = { .u8 = 0x02 },
#endif
	.val = &MyMaster_2000_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_2000sub1 = {
	.node = { .key = &MyMaster_2000sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("slave_2: UNSIGNED16 sent from slave"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MyMaster_2000_val.sub1,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_2000sub2 = {
	.node = { .key = &MyMaster_2000sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("slave_2: UNSIGNED16 sent from slave"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MyMaster_2000_val.sub2,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned16_t sub1;
	co_integer32_t sub2;
} MyMaster_2001_val = {
	.sub0 = 0x02,
	.sub1 = 0x0000,
	.sub2 = 0,
};

static co_obj_t MyMaster_2001 = {
	.node = { .key = &MyMaster_2001.idx },
	.idx = 0x2001,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Mapped application objects for RPDO 2"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_2001_val,
	.size = sizeof(MyMaster_2001_val)
};

static co_sub_t MyMaster_2001sub0 = {
	.node = { .key = &MyMaster_2001sub0.subidx },
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
	.def = { .u8 = 0x02 },
#endif
	.val = &MyMaster_2001_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_2001sub1 = {
	.node = { .key = &MyMaster_2001sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("slave_2: Statusword"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MyMaster_2001_val.sub1,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_2001sub2 = {
	.node = { .key = &MyMaster_2001sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_INTEGER32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("slave_2: Position actual value"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i32 = CO_INTEGER32_MIN },
	.max = { .i32 = CO_INTEGER32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i32 = 0 },
#endif
	.val = &MyMaster_2001_val.sub2,
	.access = CO_ACCESS_RWW,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned32_t sub1;
} MyMaster_2200_val = {
	.sub0 = 0x01,
	.sub1 = 0x00000000,
};

static co_obj_t MyMaster_2200 = {
	.node = { .key = &MyMaster_2200.idx },
	.idx = 0x2200,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Mapped application objects for TPDO 1"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_2200_val,
	.size = sizeof(MyMaster_2200_val)
};

static co_sub_t MyMaster_2200sub0 = {
	.node = { .key = &MyMaster_2200sub0.subidx },
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
	.def = { .u8 = 0x01 },
#endif
	.val = &MyMaster_2200_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_2200sub1 = {
	.node = { .key = &MyMaster_2200sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("slave_2: UNSIGNED32 received by slave"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_2200_val.sub1,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned8_t sub0;
	co_unsigned16_t sub1;
	co_integer32_t sub2;
} MyMaster_2201_val = {
	.sub0 = 0x02,
	.sub1 = 0x0000,
	.sub2 = 0,
};

static co_obj_t MyMaster_2201 = {
	.node = { .key = &MyMaster_2201.idx },
	.idx = 0x2201,
	.code = CO_OBJECT_RECORD,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Mapped application objects for TPDO 2"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_2201_val,
	.size = sizeof(MyMaster_2201_val)
};

static co_sub_t MyMaster_2201sub0 = {
	.node = { .key = &MyMaster_2201sub0.subidx },
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
	.def = { .u8 = 0x02 },
#endif
	.val = &MyMaster_2201_val.sub0,
	.access = CO_ACCESS_CONST,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_2201sub1 = {
	.node = { .key = &MyMaster_2201sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED16,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("slave_2: Controlword"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u16 = CO_UNSIGNED16_MIN },
	.max = { .u16 = CO_UNSIGNED16_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u16 = 0x0000 },
#endif
	.val = &MyMaster_2201_val.sub1,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_2201sub2 = {
	.node = { .key = &MyMaster_2201sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_INTEGER32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("slave_2: Target position"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .i32 = CO_INTEGER32_MIN },
	.max = { .i32 = CO_INTEGER32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .i32 = 0 },
#endif
	.val = &MyMaster_2201_val.sub2,
	.access = CO_ACCESS_RWR,
	.pdo_mapping = 1,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static struct {
	co_unsigned32_t sub0;
} MyMaster_5800_val = {
	.sub0 = 0x00000102,
};

static co_obj_t MyMaster_5800 = {
	.node = { .key = &MyMaster_5800.idx },
	.idx = 0x5800,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO number and node-ID"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5800_val,
	.size = sizeof(MyMaster_5800_val)
};

static co_sub_t MyMaster_5800sub0 = {
	.node = { .key = &MyMaster_5800sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO number and node-ID"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000102 },
#endif
	.val = &MyMaster_5800_val.sub0,
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
} MyMaster_5801_val = {
	.sub0 = 0x00000202,
};

static co_obj_t MyMaster_5801 = {
	.node = { .key = &MyMaster_5801.idx },
	.idx = 0x5801,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO number and node-ID"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5801_val,
	.size = sizeof(MyMaster_5801_val)
};

static co_sub_t MyMaster_5801sub0 = {
	.node = { .key = &MyMaster_5801sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO number and node-ID"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000202 },
#endif
	.val = &MyMaster_5801_val.sub0,
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
} MyMaster_5A00_val = {
	.sub0 = 0x02,
	.sub1 = 0x40010010,
	.sub2 = 0x40020010,
};

static co_obj_t MyMaster_5A00 = {
	.node = { .key = &MyMaster_5A00.idx },
	.idx = 0x5A00,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5A00_val,
	.size = sizeof(MyMaster_5A00_val)
};

static co_sub_t MyMaster_5A00sub0 = {
	.node = { .key = &MyMaster_5A00sub0.subidx },
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
	.val = &MyMaster_5A00_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_5A00sub1 = {
	.node = { .key = &MyMaster_5A00sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_5A00_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_5A00sub2 = {
	.node = { .key = &MyMaster_5A00sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_5A00_val.sub2,
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
} MyMaster_5A01_val = {
	.sub0 = 0x02,
	.sub1 = 0x60410010,
	.sub2 = 0x60640020,
};

static co_obj_t MyMaster_5A01 = {
	.node = { .key = &MyMaster_5A01.idx },
	.idx = 0x5A01,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5A01_val,
	.size = sizeof(MyMaster_5A01_val)
};

static co_sub_t MyMaster_5A01sub0 = {
	.node = { .key = &MyMaster_5A01sub0.subidx },
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
	.val = &MyMaster_5A01_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_5A01sub1 = {
	.node = { .key = &MyMaster_5A01sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_5A01_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_5A01sub2 = {
	.node = { .key = &MyMaster_5A01sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote TPDO mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_5A01_val.sub2,
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
} MyMaster_5C00_val = {
	.sub0 = 0x00000102,
};

static co_obj_t MyMaster_5C00 = {
	.node = { .key = &MyMaster_5C00.idx },
	.idx = 0x5C00,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO number and node-ID"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5C00_val,
	.size = sizeof(MyMaster_5C00_val)
};

static co_sub_t MyMaster_5C00sub0 = {
	.node = { .key = &MyMaster_5C00sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO number and node-ID"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000102 },
#endif
	.val = &MyMaster_5C00_val.sub0,
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
} MyMaster_5C01_val = {
	.sub0 = 0x00000202,
};

static co_obj_t MyMaster_5C01 = {
	.node = { .key = &MyMaster_5C01.idx },
	.idx = 0x5C01,
	.code = CO_OBJECT_VAR,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO number and node-ID"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5C01_val,
	.size = sizeof(MyMaster_5C01_val)
};

static co_sub_t MyMaster_5C01sub0 = {
	.node = { .key = &MyMaster_5C01sub0.subidx },
	.subidx = 0x00,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO number and node-ID"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000202 },
#endif
	.val = &MyMaster_5C01_val.sub0,
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
} MyMaster_5E00_val = {
	.sub0 = 0x01,
	.sub1 = 0x40000020,
};

static co_obj_t MyMaster_5E00 = {
	.node = { .key = &MyMaster_5E00.idx },
	.idx = 0x5E00,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5E00_val,
	.size = sizeof(MyMaster_5E00_val)
};

static co_sub_t MyMaster_5E00sub0 = {
	.node = { .key = &MyMaster_5E00sub0.subidx },
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
	.val = &MyMaster_5E00_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_5E00sub1 = {
	.node = { .key = &MyMaster_5E00sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_5E00_val.sub1,
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
} MyMaster_5E01_val = {
	.sub0 = 0x02,
	.sub1 = 0x60400010,
	.sub2 = 0x607A0020,
};

static co_obj_t MyMaster_5E01 = {
	.node = { .key = &MyMaster_5E01.idx },
	.idx = 0x5E01,
	.code = CO_OBJECT_ARRAY,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO mapping parameter"),
#endif
	.tree = { .cmp = &uint8_cmp },
	.val = &MyMaster_5E01_val,
	.size = sizeof(MyMaster_5E01_val)
};

static co_sub_t MyMaster_5E01sub0 = {
	.node = { .key = &MyMaster_5E01sub0.subidx },
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
	.val = &MyMaster_5E01_val.sub0,
	.access = CO_ACCESS_RO,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_5E01sub1 = {
	.node = { .key = &MyMaster_5E01sub1.subidx },
	.subidx = 0x01,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO mapping parameter1"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_5E01_val.sub1,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

static co_sub_t MyMaster_5E01sub2 = {
	.node = { .key = &MyMaster_5E01sub2.subidx },
	.subidx = 0x02,
	.type = CO_DEFTYPE_UNSIGNED32,
#if !LELY_NO_CO_OBJ_NAME
	.name = CO_DEV_STRING("Remote RPDO mapping parameter2"),
#endif
#if !LELY_NO_CO_OBJ_LIMITS
	.min = { .u32 = CO_UNSIGNED32_MIN },
	.max = { .u32 = CO_UNSIGNED32_MAX },
#endif
#if !LELY_NO_CO_OBJ_DEFAULT
	.def = { .u32 = 0x00000000 },
#endif
	.val = &MyMaster_5E01_val.sub2,
	.access = CO_ACCESS_RW,
	.pdo_mapping = 0,
	.flags = 0,
	.dn_ind = &co_sub_default_dn_ind,
#if !LELY_NO_CO_OBJ_UPLOAD
	.up_ind = &co_sub_default_up_ind
#endif
};

// suppress missing-prototype warning
co_dev_t * MyMaster_init(void);
co_dev_t *
MyMaster_init(void) {
	static co_dev_t *dev = NULL;
	if (!dev) {
		dev = &MyMaster;

		co_dev_insert_obj(&MyMaster, &MyMaster_1000);
		co_obj_insert_sub(&MyMaster_1000, &MyMaster_1000sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1001);
		co_obj_insert_sub(&MyMaster_1001, &MyMaster_1001sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1003);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub0);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub1);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub2);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub3);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub4);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub5);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub6);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub7);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub8);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub9);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub10);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub11);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub12);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub13);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub14);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub15);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub16);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub17);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub18);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub19);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub1A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub1B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub1C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub1D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub1E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub1F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub20);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub21);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub22);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub23);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub24);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub25);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub26);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub27);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub28);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub29);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub2A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub2B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub2C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub2D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub2E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub2F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub30);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub31);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub32);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub33);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub34);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub35);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub36);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub37);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub38);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub39);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub3A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub3B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub3C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub3D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub3E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub3F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub40);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub41);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub42);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub43);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub44);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub45);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub46);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub47);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub48);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub49);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub4A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub4B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub4C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub4D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub4E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub4F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub50);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub51);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub52);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub53);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub54);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub55);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub56);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub57);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub58);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub59);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub5A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub5B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub5C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub5D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub5E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub5F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub60);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub61);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub62);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub63);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub64);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub65);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub66);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub67);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub68);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub69);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub6A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub6B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub6C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub6D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub6E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub6F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub70);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub71);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub72);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub73);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub74);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub75);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub76);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub77);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub78);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub79);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub7A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub7B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub7C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub7D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub7E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub7F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub80);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub81);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub82);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub83);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub84);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub85);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub86);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub87);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub88);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub89);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub8A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub8B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub8C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub8D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub8E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub8F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub90);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub91);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub92);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub93);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub94);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub95);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub96);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub97);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub98);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub99);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub9A);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub9B);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub9C);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub9D);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub9E);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003sub9F);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA0);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA1);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA2);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA3);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA4);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA5);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA6);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA7);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA8);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subA9);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subAA);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subAB);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subAC);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subAD);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subAE);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subAF);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB0);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB1);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB2);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB3);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB4);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB5);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB6);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB7);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB8);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subB9);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subBA);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subBB);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subBC);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subBD);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subBE);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subBF);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC0);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC1);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC2);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC3);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC4);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC5);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC6);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC7);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC8);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subC9);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subCA);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subCB);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subCC);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subCD);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subCE);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subCF);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD0);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD1);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD2);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD3);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD4);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD5);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD6);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD7);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD8);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subD9);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subDA);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subDB);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subDC);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subDD);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subDE);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subDF);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE0);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE1);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE2);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE3);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE4);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE5);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE6);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE7);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE8);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subE9);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subEA);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subEB);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subEC);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subED);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subEE);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subEF);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF0);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF1);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF2);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF3);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF4);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF5);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF6);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF7);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF8);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subF9);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subFA);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subFB);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subFC);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subFD);
		co_obj_insert_sub(&MyMaster_1003, &MyMaster_1003subFE);

		co_dev_insert_obj(&MyMaster, &MyMaster_1005);
		co_obj_insert_sub(&MyMaster_1005, &MyMaster_1005sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1006);
		co_obj_insert_sub(&MyMaster_1006, &MyMaster_1006sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1007);
		co_obj_insert_sub(&MyMaster_1007, &MyMaster_1007sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1014);
		co_obj_insert_sub(&MyMaster_1014, &MyMaster_1014sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1015);
		co_obj_insert_sub(&MyMaster_1015, &MyMaster_1015sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1016);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub0);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub1);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub2);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub3);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub4);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub5);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub6);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub7);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub8);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016sub9);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016subA);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016subB);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016subC);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016subD);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016subE);
		co_obj_insert_sub(&MyMaster_1016, &MyMaster_1016subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1017);
		co_obj_insert_sub(&MyMaster_1017, &MyMaster_1017sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1018);
		co_obj_insert_sub(&MyMaster_1018, &MyMaster_1018sub0);
		co_obj_insert_sub(&MyMaster_1018, &MyMaster_1018sub1);
		co_obj_insert_sub(&MyMaster_1018, &MyMaster_1018sub2);
		co_obj_insert_sub(&MyMaster_1018, &MyMaster_1018sub3);
		co_obj_insert_sub(&MyMaster_1018, &MyMaster_1018sub4);

		co_dev_insert_obj(&MyMaster, &MyMaster_1019);
		co_obj_insert_sub(&MyMaster_1019, &MyMaster_1019sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1028);
		co_obj_insert_sub(&MyMaster_1028, &MyMaster_1028sub0);
		co_obj_insert_sub(&MyMaster_1028, &MyMaster_1028sub1);
		co_obj_insert_sub(&MyMaster_1028, &MyMaster_1028sub2);
		co_obj_insert_sub(&MyMaster_1028, &MyMaster_1028sub3);
		co_obj_insert_sub(&MyMaster_1028, &MyMaster_1028sub4);
		co_obj_insert_sub(&MyMaster_1028, &MyMaster_1028sub5);

		co_dev_insert_obj(&MyMaster, &MyMaster_1029);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub0);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub1);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub2);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub3);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub4);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub5);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub6);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub7);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub8);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub9);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub10);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub11);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub12);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub13);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub14);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub15);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub16);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub17);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub18);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub19);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub1A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub1B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub1C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub1D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub1E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub1F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub20);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub21);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub22);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub23);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub24);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub25);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub26);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub27);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub28);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub29);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub2A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub2B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub2C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub2D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub2E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub2F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub30);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub31);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub32);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub33);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub34);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub35);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub36);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub37);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub38);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub39);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub3A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub3B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub3C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub3D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub3E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub3F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub40);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub41);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub42);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub43);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub44);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub45);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub46);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub47);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub48);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub49);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub4A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub4B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub4C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub4D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub4E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub4F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub50);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub51);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub52);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub53);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub54);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub55);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub56);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub57);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub58);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub59);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub5A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub5B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub5C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub5D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub5E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub5F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub60);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub61);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub62);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub63);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub64);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub65);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub66);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub67);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub68);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub69);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub6A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub6B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub6C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub6D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub6E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub6F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub70);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub71);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub72);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub73);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub74);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub75);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub76);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub77);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub78);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub79);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub7A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub7B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub7C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub7D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub7E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub7F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub80);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub81);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub82);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub83);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub84);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub85);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub86);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub87);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub88);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub89);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub8A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub8B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub8C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub8D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub8E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub8F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub90);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub91);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub92);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub93);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub94);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub95);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub96);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub97);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub98);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub99);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub9A);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub9B);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub9C);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub9D);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub9E);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029sub9F);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA0);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA1);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA2);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA3);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA4);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA5);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA6);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA7);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA8);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subA9);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subAA);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subAB);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subAC);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subAD);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subAE);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subAF);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB0);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB1);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB2);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB3);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB4);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB5);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB6);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB7);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB8);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subB9);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subBA);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subBB);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subBC);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subBD);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subBE);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subBF);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC0);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC1);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC2);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC3);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC4);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC5);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC6);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC7);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC8);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subC9);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subCA);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subCB);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subCC);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subCD);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subCE);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subCF);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD0);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD1);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD2);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD3);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD4);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD5);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD6);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD7);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD8);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subD9);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subDA);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subDB);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subDC);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subDD);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subDE);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subDF);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE0);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE1);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE2);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE3);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE4);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE5);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE6);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE7);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE8);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subE9);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subEA);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subEB);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subEC);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subED);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subEE);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subEF);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF0);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF1);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF2);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF3);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF4);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF5);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF6);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF7);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF8);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subF9);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subFA);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subFB);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subFC);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subFD);
		co_obj_insert_sub(&MyMaster_1029, &MyMaster_1029subFE);

		co_dev_insert_obj(&MyMaster, &MyMaster_102A);
		co_obj_insert_sub(&MyMaster_102A, &MyMaster_102Asub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1400);
		co_obj_insert_sub(&MyMaster_1400, &MyMaster_1400sub0);
		co_obj_insert_sub(&MyMaster_1400, &MyMaster_1400sub1);
		co_obj_insert_sub(&MyMaster_1400, &MyMaster_1400sub2);
		co_obj_insert_sub(&MyMaster_1400, &MyMaster_1400sub3);
		co_obj_insert_sub(&MyMaster_1400, &MyMaster_1400sub4);
		co_obj_insert_sub(&MyMaster_1400, &MyMaster_1400sub5);

		co_dev_insert_obj(&MyMaster, &MyMaster_1401);
		co_obj_insert_sub(&MyMaster_1401, &MyMaster_1401sub0);
		co_obj_insert_sub(&MyMaster_1401, &MyMaster_1401sub1);
		co_obj_insert_sub(&MyMaster_1401, &MyMaster_1401sub2);
		co_obj_insert_sub(&MyMaster_1401, &MyMaster_1401sub3);
		co_obj_insert_sub(&MyMaster_1401, &MyMaster_1401sub4);
		co_obj_insert_sub(&MyMaster_1401, &MyMaster_1401sub5);

		co_dev_insert_obj(&MyMaster, &MyMaster_1600);
		co_obj_insert_sub(&MyMaster_1600, &MyMaster_1600sub0);
		co_obj_insert_sub(&MyMaster_1600, &MyMaster_1600sub1);
		co_obj_insert_sub(&MyMaster_1600, &MyMaster_1600sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_1601);
		co_obj_insert_sub(&MyMaster_1601, &MyMaster_1601sub0);
		co_obj_insert_sub(&MyMaster_1601, &MyMaster_1601sub1);
		co_obj_insert_sub(&MyMaster_1601, &MyMaster_1601sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_1800);
		co_obj_insert_sub(&MyMaster_1800, &MyMaster_1800sub0);
		co_obj_insert_sub(&MyMaster_1800, &MyMaster_1800sub1);
		co_obj_insert_sub(&MyMaster_1800, &MyMaster_1800sub2);
		co_obj_insert_sub(&MyMaster_1800, &MyMaster_1800sub3);
		co_obj_insert_sub(&MyMaster_1800, &MyMaster_1800sub4);
		co_obj_insert_sub(&MyMaster_1800, &MyMaster_1800sub5);
		co_obj_insert_sub(&MyMaster_1800, &MyMaster_1800sub6);

		co_dev_insert_obj(&MyMaster, &MyMaster_1801);
		co_obj_insert_sub(&MyMaster_1801, &MyMaster_1801sub0);
		co_obj_insert_sub(&MyMaster_1801, &MyMaster_1801sub1);
		co_obj_insert_sub(&MyMaster_1801, &MyMaster_1801sub2);
		co_obj_insert_sub(&MyMaster_1801, &MyMaster_1801sub3);
		co_obj_insert_sub(&MyMaster_1801, &MyMaster_1801sub4);
		co_obj_insert_sub(&MyMaster_1801, &MyMaster_1801sub5);
		co_obj_insert_sub(&MyMaster_1801, &MyMaster_1801sub6);

		co_dev_insert_obj(&MyMaster, &MyMaster_1A00);
		co_obj_insert_sub(&MyMaster_1A00, &MyMaster_1A00sub0);
		co_obj_insert_sub(&MyMaster_1A00, &MyMaster_1A00sub1);

		co_dev_insert_obj(&MyMaster, &MyMaster_1A01);
		co_obj_insert_sub(&MyMaster_1A01, &MyMaster_1A01sub0);
		co_obj_insert_sub(&MyMaster_1A01, &MyMaster_1A01sub1);
		co_obj_insert_sub(&MyMaster_1A01, &MyMaster_1A01sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F25);
		co_obj_insert_sub(&MyMaster_1F25, &MyMaster_1F25sub0);
		co_obj_insert_sub(&MyMaster_1F25, &MyMaster_1F25sub1);
		co_obj_insert_sub(&MyMaster_1F25, &MyMaster_1F25sub2);
		co_obj_insert_sub(&MyMaster_1F25, &MyMaster_1F25sub3);
		co_obj_insert_sub(&MyMaster_1F25, &MyMaster_1F25sub4);
		co_obj_insert_sub(&MyMaster_1F25, &MyMaster_1F25sub5);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F55);
		co_obj_insert_sub(&MyMaster_1F55, &MyMaster_1F55sub0);
		co_obj_insert_sub(&MyMaster_1F55, &MyMaster_1F55sub1);
		co_obj_insert_sub(&MyMaster_1F55, &MyMaster_1F55sub2);
		co_obj_insert_sub(&MyMaster_1F55, &MyMaster_1F55sub3);
		co_obj_insert_sub(&MyMaster_1F55, &MyMaster_1F55sub4);
		co_obj_insert_sub(&MyMaster_1F55, &MyMaster_1F55sub5);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F80);
		co_obj_insert_sub(&MyMaster_1F80, &MyMaster_1F80sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F81);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub0);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub1);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub2);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub3);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub4);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub5);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub6);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub7);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub8);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81sub9);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81subA);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81subB);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81subC);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81subD);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81subE);
		co_obj_insert_sub(&MyMaster_1F81, &MyMaster_1F81subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F82);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub0);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub1);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub2);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub3);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub4);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub5);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub6);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub7);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub8);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82sub9);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82subA);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82subB);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82subC);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82subD);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82subE);
		co_obj_insert_sub(&MyMaster_1F82, &MyMaster_1F82subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F84);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub0);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub1);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub2);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub3);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub4);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub5);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub6);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub7);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub8);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84sub9);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84subA);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84subB);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84subC);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84subD);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84subE);
		co_obj_insert_sub(&MyMaster_1F84, &MyMaster_1F84subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F85);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub0);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub1);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub2);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub3);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub4);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub5);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub6);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub7);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub8);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85sub9);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85subA);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85subB);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85subC);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85subD);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85subE);
		co_obj_insert_sub(&MyMaster_1F85, &MyMaster_1F85subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F86);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub0);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub1);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub2);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub3);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub4);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub5);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub6);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub7);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub8);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86sub9);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86subA);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86subB);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86subC);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86subD);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86subE);
		co_obj_insert_sub(&MyMaster_1F86, &MyMaster_1F86subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F87);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub0);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub1);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub2);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub3);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub4);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub5);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub6);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub7);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub8);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87sub9);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87subA);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87subB);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87subC);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87subD);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87subE);
		co_obj_insert_sub(&MyMaster_1F87, &MyMaster_1F87subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F88);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub0);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub1);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub2);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub3);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub4);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub5);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub6);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub7);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub8);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88sub9);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88subA);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88subB);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88subC);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88subD);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88subE);
		co_obj_insert_sub(&MyMaster_1F88, &MyMaster_1F88subF);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F89);
		co_obj_insert_sub(&MyMaster_1F89, &MyMaster_1F89sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_1F8A);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub0);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub1);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub2);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub3);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub4);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub5);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub6);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub7);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub8);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8Asub9);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8AsubA);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8AsubB);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8AsubC);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8AsubD);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8AsubE);
		co_obj_insert_sub(&MyMaster_1F8A, &MyMaster_1F8AsubF);

		co_dev_insert_obj(&MyMaster, &MyMaster_2000);
		co_obj_insert_sub(&MyMaster_2000, &MyMaster_2000sub0);
		co_obj_insert_sub(&MyMaster_2000, &MyMaster_2000sub1);
		co_obj_insert_sub(&MyMaster_2000, &MyMaster_2000sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_2001);
		co_obj_insert_sub(&MyMaster_2001, &MyMaster_2001sub0);
		co_obj_insert_sub(&MyMaster_2001, &MyMaster_2001sub1);
		co_obj_insert_sub(&MyMaster_2001, &MyMaster_2001sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_2200);
		co_obj_insert_sub(&MyMaster_2200, &MyMaster_2200sub0);
		co_obj_insert_sub(&MyMaster_2200, &MyMaster_2200sub1);

		co_dev_insert_obj(&MyMaster, &MyMaster_2201);
		co_obj_insert_sub(&MyMaster_2201, &MyMaster_2201sub0);
		co_obj_insert_sub(&MyMaster_2201, &MyMaster_2201sub1);
		co_obj_insert_sub(&MyMaster_2201, &MyMaster_2201sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_5800);
		co_obj_insert_sub(&MyMaster_5800, &MyMaster_5800sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_5801);
		co_obj_insert_sub(&MyMaster_5801, &MyMaster_5801sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_5A00);
		co_obj_insert_sub(&MyMaster_5A00, &MyMaster_5A00sub0);
		co_obj_insert_sub(&MyMaster_5A00, &MyMaster_5A00sub1);
		co_obj_insert_sub(&MyMaster_5A00, &MyMaster_5A00sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_5A01);
		co_obj_insert_sub(&MyMaster_5A01, &MyMaster_5A01sub0);
		co_obj_insert_sub(&MyMaster_5A01, &MyMaster_5A01sub1);
		co_obj_insert_sub(&MyMaster_5A01, &MyMaster_5A01sub2);

		co_dev_insert_obj(&MyMaster, &MyMaster_5C00);
		co_obj_insert_sub(&MyMaster_5C00, &MyMaster_5C00sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_5C01);
		co_obj_insert_sub(&MyMaster_5C01, &MyMaster_5C01sub0);

		co_dev_insert_obj(&MyMaster, &MyMaster_5E00);
		co_obj_insert_sub(&MyMaster_5E00, &MyMaster_5E00sub0);
		co_obj_insert_sub(&MyMaster_5E00, &MyMaster_5E00sub1);

		co_dev_insert_obj(&MyMaster, &MyMaster_5E01);
		co_obj_insert_sub(&MyMaster_5E01, &MyMaster_5E01sub0);
		co_obj_insert_sub(&MyMaster_5E01, &MyMaster_5E01sub1);
		co_obj_insert_sub(&MyMaster_5E01, &MyMaster_5E01sub2);
	}
	return dev;
}
