







static const struct ScriptCommand s_gs177_g0_s0_station_sref_script[] = { /* 0x822bde8 */
    DEBUGINFO_O(10),
    SELECT_MAP(MAP_THE_END),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs177_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs177_g0_s0_station_sref_script }; /* 0x822be54 */

static const struct ScriptCommand s_gs177_g1_s0_station_sref_script[] = { /* 0x822be60 */
    DEBUGINFO_O(19),
    SELECT_MAP(MAP_THE_END),
    SELECT_ENTITIES(-1, -1),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xe0, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(240),
    TEXTBOX_AUTO_PRESS(-1, -1),
    MSG_ON_BG2((@@STRING:01ba4719c80b6fe911b091a7c05124b64eeece964e09c058ef8f9805daca546b@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x23, 0x01,  0x0078,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    { 0x2d, 0x09,  0x0000,  0x00000001,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:de802a60f4657686668ec79a4626b2f6b0a3157c5c974e6682c247495aa72ff9@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:37093461a2b900c9248f7a4721f6e1f822874b099ca30467af39877d1439a88b@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:d584a256678d378b4edc2f5b2e48dd8b0c65964bcae38c6f78ad5b59a1ea0702@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:9880b2182d364fe4f5fe1d7d346cb8fcc01ac7251d3a3300d27b8719c96ffab6@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:ef90ecd6cb78eef9196ae5048da4416edbd8b251ef8a98dd1a7b17fa0b18f10f@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    { 0x3b, 0x09,  0x0000,  0x00000000,  0x00000000, NULL },
    UPDATE_VARINT(CALC_SET, GROUND_PLACE, GROUND_PLACE_TEAM_BASE_INSIDE),
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:9209b7abe1abdc9a63567474ff4c3ac9e271c1354553a3688ca3411003c4bf91@@)),
    CHOICE(/* label */  0, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  1, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_SAVE_1, 0, 0),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    WAIT(60),
    RET,
};

static const ScriptRef s_gs177_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs177_g1_s0_station_sref_script }; /* 0x822c1ac */
static const struct GroundEffectData s_gs177_g1_s0_effs[] = { /* 0x822c1b8 */
    /*  0 */ {   0,   0,   1,   1, {  21,  15, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x822c1c4 */
    &s_gs177_g0_s0_station_sref,
    &s_gs177_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs177_g0_sectors[] = { /* 0x822c1cc */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs177_g1_sectors[] = { /* 0x822c1f4 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs177_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs177_groups[] = { /* 0x822c21c */
    { LPARRAY(s_gs177_g0_sectors) },
    { LPARRAY(s_gs177_g1_sectors) },
};

static const struct GroundLink s_gs177_links[] = { /* 0x822c22c */
    {},
};

const GroundScriptHeader gGroundScript_gs177 = { LPARRAY(s_gs177_groups), s_gs177_links }; /* 0x822c234 */
