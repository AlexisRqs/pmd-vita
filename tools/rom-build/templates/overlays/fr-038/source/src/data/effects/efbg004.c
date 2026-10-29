#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_9769074;
const SiroArchive gUnknown_9766A78 = { "SIRO", &gUnknown_9769074 };
const struct { u16 header[10]; u16 tilemap[5]; } gUnknown_9766A88 = {
    .header = {
    0, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766A88), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766A88) == 30, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[9]; } gUnknown_9766AA6 = {
    .header = {
    33, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766AA6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766AA6) == 38, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[11]; } gUnknown_9766ACC = {
    .header = {
    66, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766ACC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766ACC) == 42, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[13]; } gUnknown_9766AF6 = {
    .header = {
    99, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766AF6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766AF6) == 46, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[17]; } gUnknown_9766B24 = {
    .header = {
    132, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766B24), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766B24) == 54, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[21]; } gUnknown_9766B5A = {
    .header = {
    165, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766B5A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766B5A) == 62, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[23]; } gUnknown_9766B98 = {
    .header = {
    198, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766B98), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766B98) == 66, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[26]; } gUnknown_9766BDA = {
    .header = {
    231, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766BDA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766BDA) == 72, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[32]; } gUnknown_9766C22 = {
    .header = {
    264, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766C22), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766C22) == 84, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[37]; } gUnknown_9766C76 = {
    .header = {
    297, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766C76), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766C76) == 94, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[43]; } gUnknown_9766CD4 = {
    .header = {
    330, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766CD4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766CD4) == 106, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[46]; } gUnknown_9766D3E = {
    .header = {
    363, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766D3E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766D3E) == 112, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[50]; } gUnknown_9766DAE = {
    .header = {
    396, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766DAE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766DAE) == 120, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[46]; } gUnknown_9766E26 = {
    .header = {
    429, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766E26), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766E26) == 112, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[50]; } gUnknown_9766E96 = {
    .header = {
    462, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766E96), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766E96) == 120, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[52]; } gUnknown_9766F0E = {
    .header = {
    495, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766F0E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766F0E) == 124, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[54]; } gUnknown_9766F8A = {
    .header = {
    528, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_016.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9766F8A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9766F8A) == 128, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[49]; } gUnknown_976700A = {
    .header = {
    561, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_017.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976700A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976700A) == 118, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[53]; } gUnknown_9767080 = {
    .header = {
    594, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_018.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767080), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767080) == 126, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[63]; } gUnknown_97670FE = {
    .header = {
    627, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_019.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97670FE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97670FE) == 146, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[68]; } gUnknown_9767190 = {
    .header = {
    660, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_020.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767190), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767190) == 156, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[60]; } gUnknown_976722C = {
    .header = {
    693, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_021.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976722C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976722C) == 140, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[67]; } gUnknown_97672B8 = {
    .header = {
    726, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_022.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97672B8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97672B8) == 154, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[73]; } gUnknown_9767352 = {
    .header = {
    0, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_023.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767352), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767352) == 166, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[76]; } gUnknown_97673F8 = {
    .header = {
    33, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_024.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97673F8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97673F8) == 172, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[71]; } gUnknown_97674A4 = {
    .header = {
    66, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_025.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97674A4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97674A4) == 162, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[75]; } gUnknown_9767546 = {
    .header = {
    99, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_026.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767546), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767546) == 170, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[81]; } gUnknown_97675F0 = {
    .header = {
    132, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_027.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97675F0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97675F0) == 182, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[80]; } gUnknown_97676A6 = {
    .header = {
    165, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_028.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97676A6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97676A6) == 180, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[78]; } gUnknown_976775A = {
    .header = {
    198, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_029.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976775A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976775A) == 176, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[81]; } gUnknown_976780A = {
    .header = {
    231, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_030.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976780A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976780A) == 182, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[86]; } gUnknown_97678C0 = {
    .header = {
    264, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_031.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97678C0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97678C0) == 192, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[88]; } gUnknown_9767980 = {
    .header = {
    297, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_032.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767980), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767980) == 196, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[85]; } gUnknown_9767A44 = {
    .header = {
    330, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_033.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767A44), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767A44) == 190, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[93]; } gUnknown_9767B02 = {
    .header = {
    363, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_034.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767B02), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767B02) == 206, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[94]; } gUnknown_9767BD0 = {
    .header = {
    396, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_035.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767BD0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767BD0) == 208, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[94]; } gUnknown_9767CA0 = {
    .header = {
    429, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_036.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767CA0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767CA0) == 208, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[84]; } gUnknown_9767D70 = {
    .header = {
    462, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_037.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767D70), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767D70) == 188, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[93]; } gUnknown_9767E2C = {
    .header = {
    495, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_038.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767E2C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767E2C) == 206, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[96]; } gUnknown_9767EFA = {
    .header = {
    528, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_039.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767EFA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767EFA) == 212, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[88]; } gUnknown_9767FCE = {
    .header = {
    561, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_040.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9767FCE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9767FCE) == 196, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[80]; } gUnknown_9768092 = {
    .header = {
    594, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_041.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768092), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768092) == 180, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[84]; } gUnknown_9768146 = {
    .header = {
    627, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_042.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768146), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768146) == 188, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[84]; } gUnknown_9768202 = {
    .header = {
    660, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_043.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768202), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768202) == 188, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[75]; } gUnknown_97682BE = {
    .header = {
    693, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_044.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97682BE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97682BE) == 170, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[65]; } gUnknown_9768368 = {
    .header = {
    726, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_045.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768368), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768368) == 150, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[67]; } gUnknown_97683FE = {
    .header = {
    0, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_046.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97683FE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97683FE) == 154, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[65]; } gUnknown_9768498 = {
    .header = {
    33, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_047.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768498), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768498) == 150, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[58]; } gUnknown_976852E = {
    .header = {
    66, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_048.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976852E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976852E) == 136, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[47]; } gUnknown_97685B6 = {
    .header = {
    99, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_049.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97685B6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97685B6) == 114, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[45]; } gUnknown_9768628 = {
    .header = {
    132, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_050.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768628), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768628) == 110, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[45]; } gUnknown_9768696 = {
    .header = {
    165, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_051.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768696), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768696) == 110, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[32]; } gUnknown_9768704 = {
    .header = {
    198, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_052.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768704), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768704) == 84, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[25]; } gUnknown_9768758 = {
    .header = {
    231, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_053.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768758), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768758) == 70, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[24]; } gUnknown_976879E = {
    .header = {
    264, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_054.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_976879E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_976879E) == 68, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[21]; } gUnknown_97687E2 = {
    .header = {
    297, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_055.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97687E2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97687E2) == 62, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[17]; } gUnknown_9768820 = {
    .header = {
    330, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_056.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768820), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768820) == 54, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[5]; } gUnknown_9768856 = {
    .header = {
    363, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_057.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768856), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768856) == 30, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[5]; } gUnknown_9768874 = {
    .header = {
    396, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_058.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768874), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768874) == 30, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[4]; } gUnknown_9768892 = {
    .header = {
    429, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_059.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9768892), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9768892) == 28, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[5]; } gUnknown_97688AE = {
    .header = {
    462, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_060.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97688AE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97688AE) == 30, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[1]; } gUnknown_97688CC = {
    .header = {
    495, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_061.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97688CC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97688CC) == 22, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[1]; } gUnknown_97688E2 = {
    .header = {
    528, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg004_062.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97688E2), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97688E2) == 22, "EFB resource size");
const u16 *const gUnknown_97688F8[] = {
    gUnknown_9766A88.header,
    gUnknown_9766AA6.header,
    gUnknown_9766ACC.header,
    gUnknown_9766AF6.header,
    gUnknown_9766B24.header,
    gUnknown_9766B5A.header,
    gUnknown_9766B98.header,
    gUnknown_9766BDA.header,
    gUnknown_9766C22.header,
    gUnknown_9766C76.header,
    gUnknown_9766CD4.header,
    gUnknown_9766D3E.header,
    gUnknown_9766DAE.header,
    gUnknown_9766E26.header,
    gUnknown_9766E96.header,
    gUnknown_9766F0E.header,
    gUnknown_9766F8A.header,
    gUnknown_976700A.header,
    gUnknown_9767080.header,
    gUnknown_97670FE.header,
    gUnknown_9767190.header,
    gUnknown_976722C.header,
    gUnknown_97672B8.header,
    gUnknown_9767352.header,
    gUnknown_97673F8.header,
    gUnknown_97674A4.header,
    gUnknown_9767546.header,
    gUnknown_97675F0.header,
    gUnknown_97676A6.header,
    gUnknown_976775A.header,
    gUnknown_976780A.header,
    gUnknown_97678C0.header,
    gUnknown_9767980.header,
    gUnknown_9767A44.header,
    gUnknown_9767B02.header,
    gUnknown_9767BD0.header,
    gUnknown_9767CA0.header,
    gUnknown_9767D70.header,
    gUnknown_9767E2C.header,
    gUnknown_9767EFA.header,
    gUnknown_9767FCE.header,
    gUnknown_9768092.header,
    gUnknown_9768146.header,
    gUnknown_9768202.header,
    gUnknown_97682BE.header,
    gUnknown_9768368.header,
    gUnknown_97683FE.header,
    gUnknown_9768498.header,
    gUnknown_976852E.header,
    gUnknown_97685B6.header,
    gUnknown_9768628.header,
    gUnknown_9768696.header,
    gUnknown_9768704.header,
    gUnknown_9768758.header,
    gUnknown_976879E.header,
    gUnknown_97687E2.header,
    gUnknown_9768820.header,
    gUnknown_9768856.header,
    gUnknown_9768874.header,
    gUnknown_9768892.header,
    gUnknown_97688AE.header,
    gUnknown_97688CC.header,
    gUnknown_97688E2.header,
};
const RGB_Struct gUnknown_97689F4[] = INCBIN_U8("data/effects/efbg004.pmdpal");
const u32 gUnknown_9768DF4[] = INCBIN_U32("data/effects/efbg004.4bpp");
const struct EfbFileData gUnknown_9769074 = {
    ARRAY_COUNT(gUnknown_97688F8), // 63
    gUnknown_97688F8,
    sizeof(gUnknown_9768DF4) / 32 - 1, // 19
    gUnknown_9768DF4,
    gUnknown_97689F4,
};
