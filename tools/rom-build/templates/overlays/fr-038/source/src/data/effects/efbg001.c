#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_97547C4;
const SiroArchive gUnknown_974BE54 = { "SIRO", &gUnknown_97547C4 };
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974BE64 = {
    .header = {
    0, 0, 33, 27, 4, 1, 2, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974BE64), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974BE64) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974C56E = {
    .header = {
    33, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974C56E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974C56E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974CC78 = {
    .header = {
    66, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974CC78), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974CC78) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974D382 = {
    .header = {
    99, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974D382), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974D382) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974DA8C = {
    .header = {
    132, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974DA8C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974DA8C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974E196 = {
    .header = {
    165, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974E196), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974E196) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974E8A0 = {
    .header = {
    198, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974E8A0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974E8A0) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974EFAA = {
    .header = {
    231, 0, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974EFAA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974EFAA) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974F6B4 = {
    .header = {
    0, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974F6B4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974F6B4) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_974FDBE = {
    .header = {
    33, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_974FDBE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_974FDBE) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97504C8 = {
    .header = {
    66, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97504C8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97504C8) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9750BD2 = {
    .header = {
    99, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9750BD2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9750BD2) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97512DC = {
    .header = {
    132, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97512DC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97512DC) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97519E6 = {
    .header = {
    165, 27, 33, 27, 4, 0, 65534, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97519E6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97519E6) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97520F0 = {
    .header = {
    198, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97520F0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97520F0) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97527FA = {
    .header = {
    231, 27, 33, 27, 4, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg001_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97527FA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97527FA) == 1802, "EFB resource size");
const u16 *const gUnknown_9752F04[] = {
    gUnknown_974BE64.header,
    gUnknown_974C56E.header,
    gUnknown_974CC78.header,
    gUnknown_974D382.header,
    gUnknown_974DA8C.header,
    gUnknown_974E196.header,
    gUnknown_974E8A0.header,
    gUnknown_974EFAA.header,
    gUnknown_974F6B4.header,
    gUnknown_974FDBE.header,
    gUnknown_97504C8.header,
    gUnknown_9750BD2.header,
    gUnknown_97512DC.header,
    gUnknown_97519E6.header,
    gUnknown_97520F0.header,
    gUnknown_97527FA.header,
};
const RGB_Struct gUnknown_9752F44[] = INCBIN_U8("data/effects/efbg001.pmdpal");
const u32 gUnknown_9753344[] = INCBIN_U32("data/effects/efbg001.4bpp");
const struct EfbFileData gUnknown_97547C4 = {
    ARRAY_COUNT(gUnknown_9752F04), // 16
    gUnknown_9752F04,
    sizeof(gUnknown_9753344) / 32 - 1, // 163
    gUnknown_9753344,
    gUnknown_9752F44,
};
