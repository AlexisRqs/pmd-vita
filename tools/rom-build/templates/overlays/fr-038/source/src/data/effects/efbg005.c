#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_9773AEC;
const SiroArchive gUnknown_9769088 = { "SIRO", &gUnknown_9773AEC };
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9769098 = {
    .header = {
    0, 0, 33, 27, 2, 1, 2, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9769098), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9769098) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_97697A2 = {
    .header = {
    33, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97697A2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97697A2) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9769EAC = {
    .header = {
    66, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9769EAC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9769EAC) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976A5B6 = {
    .header = {
    99, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976A5B6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976A5B6) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976ACC0 = {
    .header = {
    132, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976ACC0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976ACC0) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976B3CA = {
    .header = {
    165, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976B3CA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976B3CA) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976BAD4 = {
    .header = {
    198, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976BAD4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976BAD4) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976C1DE = {
    .header = {
    231, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976C1DE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976C1DE) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976C8E8 = {
    .header = {
    264, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976C8E8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976C8E8) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976CFF2 = {
    .header = {
    297, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976CFF2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976CFF2) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976D6FC = {
    .header = {
    330, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976D6FC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976D6FC) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976DE06 = {
    .header = {
    0, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976DE06), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976DE06) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976E510 = {
    .header = {
    33, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976E510), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976E510) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976EC1A = {
    .header = {
    66, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976EC1A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976EC1A) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976F324 = {
    .header = {
    99, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976F324), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976F324) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_976FA2E = {
    .header = {
    132, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976FA2E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976FA2E) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9770138 = {
    .header = {
    165, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_016.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9770138), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9770138) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9770842 = {
    .header = {
    198, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_017.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9770842), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9770842) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9770F4C = {
    .header = {
    231, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_018.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9770F4C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9770F4C) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9771656 = {
    .header = {
    264, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_019.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9771656), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9771656) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_9771D60 = {
    .header = {
    297, 0, 33, 27, 2, 0, 65534, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_020.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9771D60), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9771D60) == 1802, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[891]; } gUnknown_977246A = {
    .header = {
    330, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg005_021.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_977246A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_977246A) == 1802, "EFB resource size");
const u16 *const gUnknown_9772B74[] = {
    gUnknown_9769098.header,
    gUnknown_97697A2.header,
    gUnknown_9769EAC.header,
    gUnknown_976A5B6.header,
    gUnknown_976ACC0.header,
    gUnknown_976B3CA.header,
    gUnknown_976BAD4.header,
    gUnknown_976C1DE.header,
    gUnknown_976C8E8.header,
    gUnknown_976CFF2.header,
    gUnknown_976D6FC.header,
    gUnknown_976DE06.header,
    gUnknown_976E510.header,
    gUnknown_976EC1A.header,
    gUnknown_976F324.header,
    gUnknown_976FA2E.header,
    gUnknown_9770138.header,
    gUnknown_9770842.header,
    gUnknown_9770F4C.header,
    gUnknown_9771656.header,
    gUnknown_9771D60.header,
    gUnknown_977246A.header,
};
const RGB_Struct gUnknown_9772BCC[] = INCBIN_U8("data/effects/efbg005.pmdpal");
const u32 gUnknown_9772FCC[] = INCBIN_U32("data/effects/efbg005.4bpp");
const struct EfbFileData gUnknown_9773AEC = {
    ARRAY_COUNT(gUnknown_9772B74), // 22
    gUnknown_9772B74,
    sizeof(gUnknown_9772FCC) / 32 - 1, // 88
    gUnknown_9772FCC,
    gUnknown_9772BCC,
};
