#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_9783EF0;
const SiroArchive gUnknown_9773B00 = { "SIRO", &gUnknown_9783EF0 };
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9773B10 = {
    .header = {
    0, 0, 33, 27, 2, 1, 2, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9773B10), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9773B10) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977421A = {
    .header = {
    33, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977421A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977421A) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9774924 = {
    .header = {
    66, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9774924), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9774924) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977502E = {
    .header = {
    99, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977502E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977502E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9775738 = {
    .header = {
    132, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9775738), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9775738) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9775E42 = {
    .header = {
    165, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9775E42), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9775E42) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977654C = {
    .header = {
    198, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977654C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977654C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9776C56 = {
    .header = {
    231, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9776C56), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9776C56) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9777360 = {
    .header = {
    0, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9777360), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9777360) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9777A6A = {
    .header = {
    33, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9777A6A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9777A6A) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9778174 = {
    .header = {
    66, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9778174), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9778174) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977887E = {
    .header = {
    99, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977887E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977887E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9778F88 = {
    .header = {
    132, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9778F88), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9778F88) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9779692 = {
    .header = {
    165, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9779692), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9779692) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9779D9C = {
    .header = {
    198, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9779D9C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9779D9C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977A4A6 = {
    .header = {
    231, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977A4A6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977A4A6) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977ABB0 = {
    .header = {
    0, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_016.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977ABB0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977ABB0) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977B2BA = {
    .header = {
    33, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_017.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977B2BA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977B2BA) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977B9C4 = {
    .header = {
    66, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_018.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977B9C4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977B9C4) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977C0CE = {
    .header = {
    99, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_019.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977C0CE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977C0CE) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977C7D8 = {
    .header = {
    132, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_020.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977C7D8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977C7D8) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977CEE2 = {
    .header = {
    165, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_021.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977CEE2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977CEE2) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977D5EC = {
    .header = {
    198, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_022.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977D5EC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977D5EC) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977DCF6 = {
    .header = {
    231, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_023.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977DCF6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977DCF6) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977E400 = {
    .header = {
    0, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_024.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977E400), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977E400) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977EB0A = {
    .header = {
    33, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_025.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977EB0A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977EB0A) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977F214 = {
    .header = {
    66, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_026.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977F214), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977F214) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977F91E = {
    .header = {
    99, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_027.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977F91E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977F91E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9780028 = {
    .header = {
    132, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_028.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9780028), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9780028) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9780732 = {
    .header = {
    165, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_029.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9780732), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9780732) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9780E3C = {
    .header = {
    198, 81, 33, 27, 2, 0, 65534, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_030.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9780E3C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9780E3C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9781546 = {
    .header = {
    231, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg006_031.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9781546), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9781546) == 1802, "EFB resource size");
const u16 *const gUnknown_9781C50[] = {
    gUnknown_9773B10.header,
    gUnknown_977421A.header,
    gUnknown_9774924.header,
    gUnknown_977502E.header,
    gUnknown_9775738.header,
    gUnknown_9775E42.header,
    gUnknown_977654C.header,
    gUnknown_9776C56.header,
    gUnknown_9777360.header,
    gUnknown_9777A6A.header,
    gUnknown_9778174.header,
    gUnknown_977887E.header,
    gUnknown_9778F88.header,
    gUnknown_9779692.header,
    gUnknown_9779D9C.header,
    gUnknown_977A4A6.header,
    gUnknown_977ABB0.header,
    gUnknown_977B2BA.header,
    gUnknown_977B9C4.header,
    gUnknown_977C0CE.header,
    gUnknown_977C7D8.header,
    gUnknown_977CEE2.header,
    gUnknown_977D5EC.header,
    gUnknown_977DCF6.header,
    gUnknown_977E400.header,
    gUnknown_977EB0A.header,
    gUnknown_977F214.header,
    gUnknown_977F91E.header,
    gUnknown_9780028.header,
    gUnknown_9780732.header,
    gUnknown_9780E3C.header,
    gUnknown_9781546.header,
};
const RGB_Struct gUnknown_9781CD0[] = INCBIN_U8("data/effects/efbg006.pmdpal");
const u32 gUnknown_97820D0[] = INCBIN_U32("data/effects/efbg006.4bpp");
const struct EfbFileData gUnknown_9783EF0 = {
    ARRAY_COUNT(gUnknown_9781C50), // 32
    gUnknown_9781C50,
    sizeof(gUnknown_97820D0) / 32 - 1, // 240
    gUnknown_97820D0,
    gUnknown_9781CD0,
};
