











static const struct ScriptCommand s_gs185_g0_s0_station_sref_script[] = { /* 0x8234c90 */
    DEBUGINFO_O(14),
    SELECT_MAP(185),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs185_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs185_g0_s0_station_sref_script }; /* 0x8234cfc */

static const struct ScriptCommand s_gs185_g1_s0_station_sref_script[] = { /* 0x8234d08 */
    DEBUGINFO_O(23),
    SELECT_MAP(185),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs185_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs185_g1_s0_station_sref_script }; /* 0x8234d88 */

static const struct ScriptCommand s_gs185_g1_s0_lives0_dlg0[] = { /* 0x8234d94 */
    DEBUGINFO_O(36),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000005e,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000043),
    MSG_NPC(3, (@@STRING:4a91f441de599229138b557530972daec01539a6ef6d6bc3dd692b61c92c9086@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(11),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(6),
    ALERT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:dcc1b933a95e0c0fc75a5e0b7c34eb6e5995357b0a6487095c1557a58c837234@@)),
    VARIANT_DEFAULT((@@STRING:b572a0321a8b861c49665dda665dcbbf6cc201db787ffa0f25b9c0f0f288ab00@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    MSG_NPC(-1, (@@STRING:374857fac0389b356cd2dc301b5723e611769f33f5c492c4dbbc7704a2b36ca6@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    ALERT_CUE(7),
    ALERT_CUE(6),
    ALERT_CUE(11),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 94),
    WAIT_FANFARE2(465),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_BOTTOM, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 0, -3),
    MSG_NPC(2, (@@STRING:2a80f090751672a2869f3301af36c4b6945daf908e516200007eb92c880dab10@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:facb6a1db6c96c743272b15f499bbeca1007bebe33ed3042a03150b7e6683c7d@@)),
    MSG_NPC(1, (@@STRING:64dbdae52c8cc3d71459174a9a6442b31e700929a832d155ae8f636a6e58c229@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    ALERT_CUE(7),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:be8a37b5c5d33ea9b5e46953674e807227348304e33131222637d0ed20252552@@)),
    MSG_NPC(2, (@@STRING:6376182c6b0f7ddcc16bff3118122ed307d1ada75a9e5806ae5528af9a2dce41@@)),
    MSG_NPC(2, (@@STRING:1603fe57c7b8f5e0f67546527fd2082b9f451b80b733647544d3972ad7229d56@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(3),
    HALT,
};






static const struct ScriptCommand s_gs185_g1_s0_lives1_dlg0[] = { /* 0x823531c */
    DEBUGINFO_O(108),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 94),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives2_dlg0[] = { /* 0x82353ec */
    DEBUGINFO_O(124),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(7),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(SMILE_END_FUNC),
    WAIT(10),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WAIT(16),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives3_dlg0[] = { /* 0x823550c */
    DEBUGINFO_O(145),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    FANFARE_PLAY2(457),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT_FANFARE2(457),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(512, 1),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives4_dlg0[] = { /* 0x82355ec */
    DEBUGINFO_O(162),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(512, 2),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives5_dlg0[] = { /* 0x823565c */
    DEBUGINFO_O(172),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(512, 3),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives6_dlg0[] = { /* 0x82356cc */
    DEBUGINFO_O(182),
    SELECT_ANIMATION(2),
    AWAIT_CUE(11),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(11),
    CMD_UNK_93(4, DIR_TRANS_10, 94),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives7_dlg0[] = { /* 0x823576c */
    DEBUGINFO_O(195),
    SELECT_ANIMATION(2),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(11),
    CMD_UNK_93(4, DIR_TRANS_10, 94),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives8_dlg0[] = { /* 0x823580c */
    DEBUGINFO_O(208),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs185_g1_s0_lives9_dlg0[] = { /* 0x823583c */
    DEBUGINFO_O(214),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct GroundLivesData s_gs185_g1_s0_lives[] = { /* 0x823586c */
    /*  0 */ {   0,   4,   0,   0, {  32,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  37,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  94,   0,   0,   0, {  34,  15, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives2_dlg0,
    } },
    /*  3 */ {  91,   0,   0,   0, {  34,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives3_dlg0,
    } },
    /*  4 */ {  92,   0,   0,   0, {  39,  28, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives4_dlg0,
    } },
    /*  5 */ {  93,   0,   0,   0, {  30,  28, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives5_dlg0,
    } },
    /*  6 */ {  10,   4,   0,   0, {  33,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives6_dlg0,
    } },
    /*  7 */ {  11,   4,   0,   0, {  36,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives7_dlg0,
    } },
    /*  8 */ {  12,   4,   0,   0, {  30,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives8_dlg0,
    } },
    /*  9 */ {  13,   4,   0,   0, {  39,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs185_g1_s0_lives9_dlg0,
    } },
};

static const struct GroundEffectData s_gs185_g1_s0_effs[] = { /* 0x823595c */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8235968 */
    &s_gs185_g0_s0_station_sref,
    &s_gs185_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs185_g0_sectors[] = { /* 0x8235970 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs185_g1_sectors[] = { /* 0x8235998 */
    { LPARRAY(s_gs185_g1_s0_lives), 0,NULL, LPARRAY(s_gs185_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs185_groups[] = { /* 0x82359c0 */
    { LPARRAY(s_gs185_g0_sectors) },
    { LPARRAY(s_gs185_g1_sectors) },
};

static const struct GroundLink s_gs185_links[] = { /* 0x82359d0 */
    /* link   0 */ { { /*x*/  34, /*y*/  30, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  13, /*y*/  24, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   2 */ { { /*x*/  13, /*y*/  28, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   3 */ { { /*x*/  14, /*y*/  28, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs185 = { LPARRAY(s_gs185_groups), s_gs185_links }; /* 0x82359f0 */
