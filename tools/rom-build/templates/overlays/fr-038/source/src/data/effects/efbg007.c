#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_978C7AC;
const SiroArchive gUnknown_9783F04 = { "SIRO", &gUnknown_978C7AC };
const struct { u16 header[10]; u16 tilemap[334]; } gUnknown_9783F14 = {
    .header = {
    0, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9783F14), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9783F14) == 688, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[438]; } gUnknown_97841C4 = {
    .header = {
    33, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97841C4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97841C4) == 896, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[725]; } gUnknown_9784544 = {
    .header = {
    66, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9784544), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9784544) == 1470, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[581]; } gUnknown_9784B02 = {
    .header = {
    99, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9784B02), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9784B02) == 1182, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[463]; } gUnknown_9784FA0 = {
    .header = {
    132, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9784FA0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9784FA0) == 946, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[393]; } gUnknown_9785352 = {
    .header = {
    165, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9785352), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9785352) == 806, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[601]; } gUnknown_9785678 = {
    .header = {
    198, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9785678), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9785678) == 1222, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[537]; } gUnknown_9785B3E = {
    .header = {
    231, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9785B3E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9785B3E) == 1094, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[321]; } gUnknown_9785F84 = {
    .header = {
    0, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9785F84), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9785F84) == 662, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[321]; } gUnknown_978621A = {
    .header = {
    33, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978621A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978621A) == 662, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[649]; } gUnknown_97864B0 = {
    .header = {
    66, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97864B0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97864B0) == 1318, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[481]; } gUnknown_97869D6 = {
    .header = {
    99, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97869D6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97869D6) == 982, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[437]; } gUnknown_9786DAC = {
    .header = {
    132, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9786DAC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9786DAC) == 894, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[381]; } gUnknown_978712A = {
    .header = {
    165, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978712A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978712A) == 782, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[660]; } gUnknown_9787438 = {
    .header = {
    198, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9787438), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9787438) == 1340, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[548]; } gUnknown_9787974 = {
    .header = {
    231, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9787974), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9787974) == 1116, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[334]; } gUnknown_9787DD0 = {
    .header = {
    0, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_016.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9787DD0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9787DD0) == 688, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[438]; } gUnknown_9788080 = {
    .header = {
    33, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_017.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9788080), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9788080) == 896, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[725]; } gUnknown_9788400 = {
    .header = {
    66, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_018.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9788400), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9788400) == 1470, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[581]; } gUnknown_97889BE = {
    .header = {
    99, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_019.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97889BE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97889BE) == 1182, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[463]; } gUnknown_9788E5C = {
    .header = {
    132, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_020.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9788E5C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9788E5C) == 946, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[393]; } gUnknown_978920E = {
    .header = {
    165, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_021.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978920E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978920E) == 806, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[601]; } gUnknown_9789534 = {
    .header = {
    198, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_022.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9789534), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9789534) == 1222, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[537]; } gUnknown_97899FA = {
    .header = {
    231, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_023.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97899FA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97899FA) == 1094, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[321]; } gUnknown_9789E40 = {
    .header = {
    0, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_024.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9789E40), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9789E40) == 662, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[321]; } gUnknown_978A0D6 = {
    .header = {
    33, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_025.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978A0D6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978A0D6) == 662, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[649]; } gUnknown_978A36C = {
    .header = {
    66, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_026.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978A36C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978A36C) == 1318, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[481]; } gUnknown_978A892 = {
    .header = {
    99, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_027.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978A892), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978A892) == 982, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[437]; } gUnknown_978AC68 = {
    .header = {
    132, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_028.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978AC68), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978AC68) == 894, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[381]; } gUnknown_978AFE6 = {
    .header = {
    165, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_029.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978AFE6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978AFE6) == 782, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[660]; } gUnknown_978B2F4 = {
    .header = {
    198, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_030.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978B2F4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978B2F4) == 1340, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[548]; } gUnknown_978B830 = {
    .header = {
    231, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg007_031.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_978B830), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_978B830) == 1116, "EFB resource size");
const u16 *const gUnknown_978BC8C[] = {
    gUnknown_9783F14.header,
    gUnknown_97841C4.header,
    gUnknown_9784544.header,
    gUnknown_9784B02.header,
    gUnknown_9784FA0.header,
    gUnknown_9785352.header,
    gUnknown_9785678.header,
    gUnknown_9785B3E.header,
    gUnknown_9785F84.header,
    gUnknown_978621A.header,
    gUnknown_97864B0.header,
    gUnknown_97869D6.header,
    gUnknown_9786DAC.header,
    gUnknown_978712A.header,
    gUnknown_9787438.header,
    gUnknown_9787974.header,
    gUnknown_9787DD0.header,
    gUnknown_9788080.header,
    gUnknown_9788400.header,
    gUnknown_97889BE.header,
    gUnknown_9788E5C.header,
    gUnknown_978920E.header,
    gUnknown_9789534.header,
    gUnknown_97899FA.header,
    gUnknown_9789E40.header,
    gUnknown_978A0D6.header,
    gUnknown_978A36C.header,
    gUnknown_978A892.header,
    gUnknown_978AC68.header,
    gUnknown_978AFE6.header,
    gUnknown_978B2F4.header,
    gUnknown_978B830.header,
};
const RGB_Struct gUnknown_978BD0C[] = INCBIN_U8("data/effects/efbg007.pmdpal");
const u32 gUnknown_978C10C[] = INCBIN_U32("data/effects/efbg007.4bpp");
const struct EfbFileData gUnknown_978C7AC = {
    ARRAY_COUNT(gUnknown_978BC8C), // 32
    gUnknown_978BC8C,
    sizeof(gUnknown_978C10C) / 32 - 1, // 52
    gUnknown_978C10C,
    gUnknown_978BD0C,
};
