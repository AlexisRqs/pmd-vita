












static const struct ScriptCommand s_gs191_g0_s0_station_sref_script[] = { /* 0x823d7dc */
    DEBUGINFO_O(15),
    SELECT_MAP(MAP_GREAT_CANYON_ENTRY),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs191_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs191_g0_s0_station_sref_script }; /* 0x823d848 */

static const struct ScriptCommand s_gs191_g1_s0_station_sref_script[] = { /* 0x823d854 */
    DEBUGINFO_O(24),
    SELECT_MAP(MAP_GREAT_CANYON_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_GREAT_CANYON),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    NEXT_DUNGEON(0, SCRIPT_DUNGEON_GREAT_CANYON),
    RET,
};

static const ScriptRef s_gs191_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs191_g1_s0_station_sref_script }; /* 0x823d8d4 */

static const struct ScriptCommand s_gs191_g1_s0_lives0_dlg0[] = { /* 0x823d8e0 */
    DEBUGINFO_O(37),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000061,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WALK_GRID(256, 1),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:53ad13fd760e8cf7619601a2ab1779f950bf76bbae9dd2633583ca0932674696@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:67bc137990935d6a43d6a546347d8ca391147186526d9c31d0fb71ed06691ce5@@)),
    ALERT_CUE(6),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    { 0x2d, 0x0a,  0x0000,  0x00000009,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:37ef3a3882c5bf444bd35b072e6d539fde5ccc1366ba0c9a7d244aca3b1eef9a@@)),
    VARIANT(/* == */  1, (@@STRING:8cdcfb450387f3b7e69f56796f19123ac1fc81e6d580419d528404eaedb1d962@@)),
    VARIANT_DEFAULT((@@STRING:a3d54fc26664323b15d4bf44726d36de47b2f89fd2ac0020fbfe75730409c112@@)),
    VARIANT_DEFAULT((@@STRING:a28678aab3d2309b5c79dabf823e0a0e870968e86e0d1d703f957e01cab1d6a4@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    WALK_GRID(128, 2),
    HALT,
};


static const struct ScriptCommand s_gs191_g1_s0_lives1_dlg0[] = { /* 0x823dc10 */
    DEBUGINFO_O(71),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WALK_GRID(256, 0),
    WAIT(20),
    AWAIT_CUE(6),
    { 0x69, 0x00,  0x0100,  0x000000e8,  0x00000068, NULL },
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(20),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    WALK_GRID(128, 3),
    HALT,
};

static const struct ScriptCommand s_gs191_g2_s0_station_sref_script[] = { /* 0x823dd20 */
    DEBUGINFO_O(91),
    SELECT_MAP(MAP_GREAT_CANYON_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_GREAT_CANYON),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    NEXT_DUNGEON(0, SCRIPT_DUNGEON_GREAT_CANYON),
    RET,
};

static const ScriptRef s_gs191_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs191_g2_s0_station_sref_script }; /* 0x823dda0 */

static const struct ScriptCommand s_gs191_g2_s0_lives0_dlg0[] = { /* 0x823ddac */
    DEBUGINFO_O(104),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000061,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WALK_GRID(256, 1),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:580ceee3705d4be68b7c4d9bcbc5932f8694f40ad2b03387852c4a27441ebfc4@@)),
    VARIANT(/* == */  1, (@@STRING:e82154f0df79eb6385a16f6d7bf2099205248704b1cec12968d0a08b49d956ac@@)),
    VARIANT(/* == */  1, (@@STRING:59d58e5a64cb8c745eb36c845557cf248963fe82b3c276b6291102a68b1721e1@@)),
    VARIANT_DEFAULT((@@STRING:195eba1edc4ca0fa49f5cdf81d5bc89c802008032ec249cc897fadbffb6ad52c@@)),
    VARIANT_DEFAULT((@@STRING:bb12af67b8e965fd9fb236f92312edd7846ba676c9a00b2ef40fb60884032fdb@@)),
    VARIANT_DEFAULT((@@STRING:59d58e5a64cb8c745eb36c845557cf248963fe82b3c276b6291102a68b1721e1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    WALK_GRID(128, 2),
    HALT,
};

static const struct ScriptCommand s_gs191_g2_s0_lives1_dlg0[] = { /* 0x823e038 */
    DEBUGINFO_O(131),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WALK_GRID(256, 0),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    WALK_GRID(204, 4),
    WALK_GRID(204, 3),
    HALT,
};

static const struct GroundLivesData s_gs191_g1_s0_lives[] = { /* 0x823e0f8 */
    /*  0 */ {   0,   4,   0,   0, {  26,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs191_g2_s0_lives[] = { /* 0x823e128 */
    /*  0 */ {   0,   4,   0,   0, {  26,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  29, 0, CPOS_HALFTILE }, {
        [0] = s_gs191_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs191_g1_s0_effs[] = { /* 0x823e158 */
    /*  0 */ {   0,   0,   1,   1, {  30,  15, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs191_g2_s0_effs[] = { /* 0x823e164 */
    /*  0 */ {   0,   0,   1,   1, {  30,  15, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x823e170 */
    &s_gs191_g0_s0_station_sref,
    &s_gs191_g1_s0_station_sref,
    &s_gs191_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs191_g0_sectors[] = { /* 0x823e17c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs191_g1_sectors[] = { /* 0x823e1a4 */
    { LPARRAY(s_gs191_g1_s0_lives), 0,NULL, LPARRAY(s_gs191_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs191_g2_sectors[] = { /* 0x823e1cc */
    { LPARRAY(s_gs191_g2_s0_lives), 0,NULL, LPARRAY(s_gs191_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs191_groups[] = { /* 0x823e1f4 */
    { LPARRAY(s_gs191_g0_sectors) },
    { LPARRAY(s_gs191_g1_sectors) },
    { LPARRAY(s_gs191_g2_sectors) },
};

static const struct GroundLink s_gs191_links[] = { /* 0x823e20c */
    /* link   0 */ { { /*x*/  31, /*y*/  16, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  26, /*y*/  16, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   2 */ { { /*x*/  29, /*y*/   6, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   3 */ { { /*x*/  30, /*y*/   7, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   4 */ { { /*x*/  30, /*y*/  11, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs191 = { LPARRAY(s_gs191_groups), s_gs191_links }; /* 0x823e234 */
