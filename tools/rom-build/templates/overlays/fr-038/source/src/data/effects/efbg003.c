#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_9766A64;
const SiroArchive gUnknown_9756674 = { "SIRO", &gUnknown_9766A64 };
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9756684 = {
    .header = {
    0, 0, 33, 27, 1, 1, 2, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9756684), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9756684) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9756D8E = {
    .header = {
    33, 0, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9756D8E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9756D8E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9757498 = {
    .header = {
    66, 0, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9757498), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9757498) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9757BA2 = {
    .header = {
    99, 0, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9757BA2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9757BA2) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97582AC = {
    .header = {
    132, 0, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97582AC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97582AC) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97589B6 = {
    .header = {
    165, 0, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97589B6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97589B6) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97590C0 = {
    .header = {
    198, 0, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97590C0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97590C0) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97597CA = {
    .header = {
    231, 0, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97597CA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97597CA) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9759ED4 = {
    .header = {
    0, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9759ED4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9759ED4) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975A5DE = {
    .header = {
    33, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975A5DE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975A5DE) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975ACE8 = {
    .header = {
    66, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975ACE8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975ACE8) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975B3F2 = {
    .header = {
    99, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975B3F2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975B3F2) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975BAFC = {
    .header = {
    132, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975BAFC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975BAFC) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975C206 = {
    .header = {
    165, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975C206), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975C206) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975C910 = {
    .header = {
    198, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975C910), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975C910) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975D01A = {
    .header = {
    231, 27, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975D01A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975D01A) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975D724 = {
    .header = {
    0, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_016.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975D724), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975D724) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975DE2E = {
    .header = {
    33, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_017.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975DE2E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975DE2E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975E538 = {
    .header = {
    66, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_018.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975E538), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975E538) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975EC42 = {
    .header = {
    99, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_019.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975EC42), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975EC42) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975F34C = {
    .header = {
    132, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_020.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975F34C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975F34C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_975FA56 = {
    .header = {
    165, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_021.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975FA56), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975FA56) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9760160 = {
    .header = {
    198, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_022.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9760160), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9760160) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976086A = {
    .header = {
    231, 54, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_023.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976086A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976086A) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9760F74 = {
    .header = {
    0, 81, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_024.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9760F74), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9760F74) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976167E = {
    .header = {
    33, 81, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_025.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976167E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976167E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9761D88 = {
    .header = {
    66, 81, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_026.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9761D88), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9761D88) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9762492 = {
    .header = {
    99, 81, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_027.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9762492), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9762492) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9762B9C = {
    .header = {
    132, 81, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_028.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9762B9C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9762B9C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97632A6 = {
    .header = {
    165, 81, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_029.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97632A6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97632A6) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97639B0 = {
    .header = {
    198, 81, 33, 27, 1, 0, 65534, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_030.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97639B0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97639B0) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97640BA = {
    .header = {
    231, 81, 33, 27, 1, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg003_031.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97640BA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97640BA) == 1802, "EFB resource size");
const u16 *const gUnknown_97647C4[] = {
    gUnknown_9756684.header,
    gUnknown_9756D8E.header,
    gUnknown_9757498.header,
    gUnknown_9757BA2.header,
    gUnknown_97582AC.header,
    gUnknown_97589B6.header,
    gUnknown_97590C0.header,
    gUnknown_97597CA.header,
    gUnknown_9759ED4.header,
    gUnknown_975A5DE.header,
    gUnknown_975ACE8.header,
    gUnknown_975B3F2.header,
    gUnknown_975BAFC.header,
    gUnknown_975C206.header,
    gUnknown_975C910.header,
    gUnknown_975D01A.header,
    gUnknown_975D724.header,
    gUnknown_975DE2E.header,
    gUnknown_975E538.header,
    gUnknown_975EC42.header,
    gUnknown_975F34C.header,
    gUnknown_975FA56.header,
    gUnknown_9760160.header,
    gUnknown_976086A.header,
    gUnknown_9760F74.header,
    gUnknown_976167E.header,
    gUnknown_9761D88.header,
    gUnknown_9762492.header,
    gUnknown_9762B9C.header,
    gUnknown_97632A6.header,
    gUnknown_97639B0.header,
    gUnknown_97640BA.header,
};
const RGB_Struct gUnknown_9764844[] = INCBIN_U8("data/effects/efbg003.pmdpal");
const u32 gUnknown_9764C44[] = INCBIN_U32("data/effects/efbg003.4bpp");
const struct EfbFileData gUnknown_9766A64 = {
    ARRAY_COUNT(gUnknown_97647C4), // 32
    gUnknown_97647C4,
    sizeof(gUnknown_9764C44) / 32 - 1, // 240
    gUnknown_9764C44,
    gUnknown_9764844,
};
