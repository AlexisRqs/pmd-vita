#include <stddef.h>
#include "global.h"
#include "decompress_sir.h"
#include "structs/axdata.h"
const struct EfbFileData gUnknown_9756660;
const SiroArchive gUnknown_97547D8 = { "SIRO", &gUnknown_9756660 };
const struct { u16 header[10]; u16 tilemap[3]; } gUnknown_97547E8 = {
    .header = {
    0, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_000.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97547E8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97547E8) == 26, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[7]; } gUnknown_9754802 = {
    .header = {
    33, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_001.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754802), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754802) == 34, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[4]; } gUnknown_9754824 = {
    .header = {
    66, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_002.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754824), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754824) == 28, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[10]; } gUnknown_9754840 = {
    .header = {
    99, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_003.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754840), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754840) == 40, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[6]; } gUnknown_9754868 = {
    .header = {
    132, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_004.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754868), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754868) == 32, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[13]; } gUnknown_9754888 = {
    .header = {
    165, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_005.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754888), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754888) == 46, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[6]; } gUnknown_97548B6 = {
    .header = {
    198, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_006.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97548B6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97548B6) == 32, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[14]; } gUnknown_97548D6 = {
    .header = {
    231, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_007.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97548D6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97548D6) == 48, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[10]; } gUnknown_9754906 = {
    .header = {
    264, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_008.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754906), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754906) == 40, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[21]; } gUnknown_975492E = {
    .header = {
    297, 0, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_009.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975492E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975492E) == 62, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[15]; } gUnknown_975496C = {
    .header = {
    0, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_010.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975496C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975496C) == 50, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[18]; } gUnknown_975499E = {
    .header = {
    33, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_011.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975499E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975499E) == 56, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[21]; } gUnknown_97549D6 = {
    .header = {
    66, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_012.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97549D6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97549D6) == 62, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[21]; } gUnknown_9754A14 = {
    .header = {
    99, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_013.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754A14), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754A14) == 62, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[27]; } gUnknown_9754A52 = {
    .header = {
    132, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_014.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754A52), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754A52) == 74, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[28]; } gUnknown_9754A9C = {
    .header = {
    165, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_015.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754A9C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754A9C) == 76, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[38]; } gUnknown_9754AE8 = {
    .header = {
    198, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_016.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754AE8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754AE8) == 96, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[26]; } gUnknown_9754B48 = {
    .header = {
    231, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_017.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754B48), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754B48) == 72, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[33]; } gUnknown_9754B90 = {
    .header = {
    264, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_018.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754B90), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754B90) == 86, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[29]; } gUnknown_9754BE6 = {
    .header = {
    297, 27, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_019.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754BE6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754BE6) == 78, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[32]; } gUnknown_9754C34 = {
    .header = {
    0, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_020.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754C34), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754C34) == 84, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[29]; } gUnknown_9754C88 = {
    .header = {
    33, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_021.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754C88), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754C88) == 78, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[33]; } gUnknown_9754CD6 = {
    .header = {
    66, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_022.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754CD6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754CD6) == 86, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[39]; } gUnknown_9754D2C = {
    .header = {
    99, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_023.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754D2C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754D2C) == 98, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[33]; } gUnknown_9754D8E = {
    .header = {
    132, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_024.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754D8E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754D8E) == 86, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[43]; } gUnknown_9754DE4 = {
    .header = {
    165, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_025.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754DE4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754DE4) == 106, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[38]; } gUnknown_9754E4E = {
    .header = {
    198, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_026.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754E4E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754E4E) == 96, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[54]; } gUnknown_9754EAE = {
    .header = {
    231, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_027.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754EAE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754EAE) == 128, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[40]; } gUnknown_9754F2E = {
    .header = {
    264, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_028.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754F2E), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754F2E) == 100, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[55]; } gUnknown_9754F92 = {
    .header = {
    297, 54, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_029.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9754F92), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9754F92) == 130, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[50]; } gUnknown_9755014 = {
    .header = {
    0, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_030.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755014), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755014) == 120, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[50]; } gUnknown_975508C = {
    .header = {
    33, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_031.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975508C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975508C) == 120, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[47]; } gUnknown_9755104 = {
    .header = {
    66, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_032.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755104), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755104) == 114, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[49]; } gUnknown_9755176 = {
    .header = {
    99, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_033.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755176), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755176) == 118, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[48]; } gUnknown_97551EC = {
    .header = {
    132, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_034.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97551EC), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97551EC) == 116, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[53]; } gUnknown_9755260 = {
    .header = {
    165, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_035.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755260), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755260) == 126, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[58]; } gUnknown_97552DE = {
    .header = {
    198, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_036.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97552DE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97552DE) == 136, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[59]; } gUnknown_9755366 = {
    .header = {
    231, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_037.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755366), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755366) == 138, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[51]; } gUnknown_97553F0 = {
    .header = {
    264, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_038.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97553F0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97553F0) == 122, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[53]; } gUnknown_975546A = {
    .header = {
    297, 81, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_039.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975546A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975546A) == 126, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[53]; } gUnknown_97554E8 = {
    .header = {
    0, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_040.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97554E8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97554E8) == 126, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[53]; } gUnknown_9755566 = {
    .header = {
    33, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_041.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755566), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755566) == 126, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[56]; } gUnknown_97555E4 = {
    .header = {
    66, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_042.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97555E4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97555E4) == 132, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[49]; } gUnknown_9755668 = {
    .header = {
    99, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_043.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755668), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755668) == 118, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[56]; } gUnknown_97556DE = {
    .header = {
    132, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_044.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97556DE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97556DE) == 132, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[39]; } gUnknown_9755762 = {
    .header = {
    165, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_045.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755762), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755762) == 98, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[48]; } gUnknown_97557C4 = {
    .header = {
    198, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_046.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97557C4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97557C4) == 116, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[52]; } gUnknown_9755838 = {
    .header = {
    231, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_047.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755838), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755838) == 124, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[49]; } gUnknown_97558B4 = {
    .header = {
    264, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_048.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97558B4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97558B4) == 118, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[35]; } gUnknown_975592A = {
    .header = {
    297, 108, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_049.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_975592A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_975592A) == 90, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[40]; } gUnknown_9755984 = {
    .header = {
    0, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_050.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755984), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755984) == 100, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[43]; } gUnknown_97559E8 = {
    .header = {
    33, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_051.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_97559E8), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_97559E8) == 106, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[39]; } gUnknown_9755A52 = {
    .header = {
    66, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_052.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755A52), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755A52) == 98, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[27]; } gUnknown_9755AB4 = {
    .header = {
    99, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_053.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755AB4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755AB4) == 74, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[28]; } gUnknown_9755AFE = {
    .header = {
    132, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_054.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755AFE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755AFE) == 76, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[31]; } gUnknown_9755B4A = {
    .header = {
    165, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_055.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755B4A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755B4A) == 82, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[21]; } gUnknown_9755B9C = {
    .header = {
    198, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_056.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755B9C), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755B9C) == 62, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[27]; } gUnknown_9755BDA = {
    .header = {
    231, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_057.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755BDA), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755BDA) == 74, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[25]; } gUnknown_9755C24 = {
    .header = {
    264, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_058.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755C24), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755C24) == 70, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[17]; } gUnknown_9755C6A = {
    .header = {
    297, 135, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_059.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755C6A), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755C6A) == 54, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[21]; } gUnknown_9755CA0 = {
    .header = {
    0, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_060.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755CA0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755CA0) == 62, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[24]; } gUnknown_9755CDE = {
    .header = {
    33, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_061.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755CDE), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755CDE) == 68, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[8]; } gUnknown_9755D22 = {
    .header = {
    66, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_062.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755D22), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755D22) == 36, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[15]; } gUnknown_9755D46 = {
    .header = {
    99, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_063.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755D46), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755D46) == 50, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[12]; } gUnknown_9755D78 = {
    .header = {
    132, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_064.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755D78), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755D78) == 44, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[7]; } gUnknown_9755DA4 = {
    .header = {
    165, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_065.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755DA4), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755DA4) == 34, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[3]; } gUnknown_9755DC6 = {
    .header = {
    198, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_066.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755DC6), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755DC6) == 26, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[9]; } gUnknown_9755DE0 = {
    .header = {
    231, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_067.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755DE0), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755DE0) == 38, "EFB resource size");
const struct { u16 header[10]; u16 tilemap[9]; } gUnknown_9755E06 = {
    .header = {
    264, 162, 33, 27, 2, 0, 0, 0, 0, 0,
},
    .tilemap = INCBIN_U16("data/effects/efbg002_068.bin"),
};
_Static_assert(offsetof(__typeof__(gUnknown_9755E06), tilemap) == 20, "EFB tilemap offset");
_Static_assert(sizeof(gUnknown_9755E06) == 38, "EFB resource size");
const u16 *const gUnknown_9755E2C[] = {
    gUnknown_97547E8.header,
    gUnknown_9754802.header,
    gUnknown_9754824.header,
    gUnknown_9754840.header,
    gUnknown_9754868.header,
    gUnknown_9754888.header,
    gUnknown_97548B6.header,
    gUnknown_97548D6.header,
    gUnknown_9754906.header,
    gUnknown_975492E.header,
    gUnknown_975496C.header,
    gUnknown_975499E.header,
    gUnknown_97549D6.header,
    gUnknown_9754A14.header,
    gUnknown_9754A52.header,
    gUnknown_9754A9C.header,
    gUnknown_9754AE8.header,
    gUnknown_9754B48.header,
    gUnknown_9754B90.header,
    gUnknown_9754BE6.header,
    gUnknown_9754C34.header,
    gUnknown_9754C88.header,
    gUnknown_9754CD6.header,
    gUnknown_9754D2C.header,
    gUnknown_9754D8E.header,
    gUnknown_9754DE4.header,
    gUnknown_9754E4E.header,
    gUnknown_9754EAE.header,
    gUnknown_9754F2E.header,
    gUnknown_9754F92.header,
    gUnknown_9755014.header,
    gUnknown_975508C.header,
    gUnknown_9755104.header,
    gUnknown_9755176.header,
    gUnknown_97551EC.header,
    gUnknown_9755260.header,
    gUnknown_97552DE.header,
    gUnknown_9755366.header,
    gUnknown_97553F0.header,
    gUnknown_975546A.header,
    gUnknown_97554E8.header,
    gUnknown_9755566.header,
    gUnknown_97555E4.header,
    gUnknown_9755668.header,
    gUnknown_97556DE.header,
    gUnknown_9755762.header,
    gUnknown_97557C4.header,
    gUnknown_9755838.header,
    gUnknown_97558B4.header,
    gUnknown_975592A.header,
    gUnknown_9755984.header,
    gUnknown_97559E8.header,
    gUnknown_9755A52.header,
    gUnknown_9755AB4.header,
    gUnknown_9755AFE.header,
    gUnknown_9755B4A.header,
    gUnknown_9755B9C.header,
    gUnknown_9755BDA.header,
    gUnknown_9755C24.header,
    gUnknown_9755C6A.header,
    gUnknown_9755CA0.header,
    gUnknown_9755CDE.header,
    gUnknown_9755D22.header,
    gUnknown_9755D46.header,
    gUnknown_9755D78.header,
    gUnknown_9755DA4.header,
    gUnknown_9755DC6.header,
    gUnknown_9755DE0.header,
    gUnknown_9755E06.header,
};
const RGB_Struct gUnknown_9755F40[] = INCBIN_U8("data/effects/efbg002.pmdpal");
const u32 gUnknown_9756340[] = INCBIN_U32("data/effects/efbg002.4bpp");
const struct EfbFileData gUnknown_9756660 = {
    ARRAY_COUNT(gUnknown_9755E2C), // 69
    gUnknown_9755E2C,
    sizeof(gUnknown_9756340) / 32 - 1, // 24
    gUnknown_9756340,
    gUnknown_9755F40,
};
