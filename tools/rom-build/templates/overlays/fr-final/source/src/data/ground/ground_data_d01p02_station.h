









static const struct ScriptCommand s_gs179_g0_s0_station_sref_script[] = { /* 0x822fcbc */
    DEBUGINFO_O(12),
    SELECT_MAP(179),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs179_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs179_g0_s0_station_sref_script }; /* 0x822fd28 */

static const struct ScriptCommand s_gs179_g1_s0_station_sref_script[] = { /* 0x822fd34 - PART 1 0:16:37-0:17:16 - Tiny Woods end room */
    DEBUGINFO_O(21),
    SELECT_MAP(179),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs179_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs179_g1_s0_station_sref_script }; /* 0x822fdc4 */

static const struct ScriptCommand s_gs179_g1_s0_lives0_dlg0[] = { /* 0x822fdd0 - PART 1 0:16:37-0:17:16 - Player */
    DEBUGINFO_O(35),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000042),
    MSG_NPC(2, (@@STRING:4fcb8a21769a2210d71d0e69364053078916408790d47a84b919a5473afddc8e@@)),
    MSG_NPC(2, (@@STRING:3aef71c463e2fd8743db7540e4c9f78c90a85bcb620822f7a7ca4df6dac49dee@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    WALK_GRID(256, 0),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:1a04b353f69f9569526113ff3baa5141de55ae3dff7a366f36827c0994065281@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:fd491dc40d5b502751f66c5d3032ca0cbc9b59318e5b4910919d0c554e8d91d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:fc89e0e1cee64d6894cb549ccb867fb39861c51f6d18a236467a7b434b42f6e8@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};






static const struct ScriptCommand s_gs179_g1_s0_lives1_dlg0[] = { /* 0x82300a8 - PART 1 0:16:37-0:17:16 - Partner */
    DEBUGINFO_O(80),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 1),
    HALT,
};

static const struct ScriptCommand s_gs179_g1_s0_lives2_dlg0[] = { /* 0x8230108 - PART 1 0:16:37-0:17:16 - Caterpie */
    DEBUGINFO_O(89),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000003e,  0x00000000, NULL },
    FANFARE_PLAY2(457),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT_FANFARE2(457),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct GroundLivesData s_gs179_g1_s0_lives[] = { /* 0x8230218 */
    /*  0 */ {   0,   4,   0,   0, {  20,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs179_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  24,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs179_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  54,   4,   0,   0, {  22,  18, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs179_g1_s0_lives2_dlg0,
    } },
};

static const struct GroundEffectData s_gs179_g1_s0_effs[] = { /* 0x8230260 */
    /*  0 */ {   0,   0,   1,   1, {  22,  21, CPOS_HALFTILE, 0 }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x823026c */
    &s_gs179_g0_s0_station_sref,
    &s_gs179_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs179_g0_sectors[] = { /* 0x8230274 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs179_g1_sectors[] = { /* 0x823029c */
    { LPARRAY(s_gs179_g1_s0_lives), 0,NULL, LPARRAY(s_gs179_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs179_groups[] = { /* 0x82302c4 */
    { LPARRAY(s_gs179_g0_sectors) },
    { LPARRAY(s_gs179_g1_sectors) },
};

static const struct GroundLink s_gs179_links[] = { /* 0x82302d4 */
    /* link   0 */ { { /*x*/  20, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  24, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs179 = { LPARRAY(s_gs179_groups), s_gs179_links }; /* 0x82302e4 */
