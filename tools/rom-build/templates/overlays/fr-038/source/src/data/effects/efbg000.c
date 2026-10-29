#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_974BE40;
const SiroArchive gUnknown_9740950 = { "SIRO", &gUnknown_974BE40 };
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9740960 = {
    .header = {
    0, 0, 33, 27, 4, 1, 2, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9740960), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9740960) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974106A = {
    .header = {
    33, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974106A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974106A) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9741774 = {
    .header = {
    66, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9741774), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9741774) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9741E7E = {
    .header = {
    99, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9741E7E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9741E7E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9742588 = {
    .header = {
    132, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9742588), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9742588) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9742C92 = {
    .header = {
    165, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9742C92), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9742C92) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974339C = {
    .header = {
    198, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974339C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974339C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9743AA6 = {
    .header = {
    231, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9743AA6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9743AA6) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97441B0 = {
    .header = {
    0, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97441B0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97441B0) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97448BA = {
    .header = {
    33, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97448BA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97448BA) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9744FC4 = {
    .header = {
    66, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9744FC4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9744FC4) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97456CE = {
    .header = {
    99, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97456CE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97456CE) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9745DD8 = {
    .header = {
    132, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9745DD8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9745DD8) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97464E2 = {
    .header = {
    165, 27, 33, 27, 4, 0, 65534, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97464E2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97464E2) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9746BEC = {
    .header = {
    198, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9746BEC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9746BEC) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97472F6 = {
    .header = {
    231, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg000_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97472F6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97472F6) == 1802, "EFB resource size");
const u16 *const gUnknown_9747A00[] = {
    gUnknown_9740960.header,
    gUnknown_974106A.header,
    gUnknown_9741774.header,
    gUnknown_9741E7E.header,
    gUnknown_9742588.header,
    gUnknown_9742C92.header,
    gUnknown_974339C.header,
    gUnknown_9743AA6.header,
    gUnknown_97441B0.header,
    gUnknown_97448BA.header,
    gUnknown_9744FC4.header,
    gUnknown_97456CE.header,
    gUnknown_9745DD8.header,
    gUnknown_97464E2.header,
    gUnknown_9746BEC.header,
    gUnknown_97472F6.header,
};
const RGB_Struct gUnknown_9747A40[] = INCBIN_U8("data/effects/efbg000.pmdpal");
const u32 gUnknown_9747E40[] = INCBIN_U32("data/effects/efbg000.4bpp");
const struct EfbFileData gUnknown_974BE40 = {
    ARRAY_COUNT(gUnknown_9747A00), // 16
    gUnknown_9747A00,
    sizeof(gUnknown_9747E40) / 32 - 1, // 511
    gUnknown_9747E40,
    gUnknown_9747A40,
};
