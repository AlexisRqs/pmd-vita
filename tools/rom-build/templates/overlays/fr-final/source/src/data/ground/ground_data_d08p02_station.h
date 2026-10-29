









static const struct ScriptCommand s_gs194_g0_s0_station_sref_script[] = { /* 0x8245514 */
    DEBUGINFO_O(12),
    SELECT_MAP(194),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs194_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs194_g0_s0_station_sref_script }; /* 0x8245580 */

static const struct ScriptCommand s_gs194_g1_s0_station_sref_script[] = { /* 0x824558c */
    DEBUGINFO_O(21),
    SELECT_MAP(194),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    MSG_NPC(-1, (@@STRING:5cd05a5f360bf889552cd2a894ee864e2e5ceb496c99705c05bb8982dd1355c2@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8c209f79e2c68ebd34027c0f0dfc18b77ddf4c8e2d79f258fabc200bdb468312@@)),
    VARIANT_DEFAULT((@@STRING:15b4541e92ecd2d55571b7c84f06a286a157ab6c11400d408fd33ee3f6b43730@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    RET,
};

static const ScriptRef s_gs194_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs194_g1_s0_station_sref_script }; /* 0x8245728 */



static const struct ScriptCommand s_gs194_g1_s0_lives0_dlg0[] = { /* 0x8245734 */
    DEBUGINFO_O(44),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    WAIT(15),
    WALK_GRID(153, 0),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WAIT(45),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4163bdab11b1b747cb1e43ec37a218784cfd42fe0c41ff36281dbebbfc72e13f@@)),
    VARIANT(/* == */  1, (@@STRING:593495f933e8e511617df73ad71c2bc7733e95b562f2a9fd0507e3973e8f6512@@)),
    VARIANT_DEFAULT((@@STRING:3de9f06a0544feb7ea97fc27f9a506615a98c0a525fa5fed36a717d46dc6f98e@@)),
    VARIANT_DEFAULT((@@STRING:b0ffdf8a4269065841da23e93dc7f53f1261070716d4e390536db1ede2131bc6@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(10),
    MSG_NPC(-1, (@@STRING:19ed3ef309a96219f0655b4ffd3676540f576e0c94a8384e086c41fc2c918df5@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    MSG_NPC(-1, (@@STRING:f1b1d9ab3542addf1eaa3272a4166628b20be8a42d36c8ec90e98e14ad6507ed@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:617b1a09b0b54d1fb7197717deada9964cee72aee21a9783fb3b5e176c7b9ca6@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(5),
    { 0x89, 0x50,  0x0200,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs194_g1_s0_lives1_dlg0[] = { /* 0x8245ab0 */
    DEBUGINFO_O(89),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(153, 1),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    { 0x89, 0x50,  0x0200,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs194_g1_s0_lives[] = { /* 0x8245c00 */
    /*  0 */ {   0,   0,   0,   0, {  10,  17, 0, CPOS_HALFTILE }, {
        [0] = s_gs194_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  12,  17, 0, CPOS_HALFTILE }, {
        [0] = s_gs194_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs194_g1_s0_effs[] = { /* 0x8245c30 */
    /*  0 */ {   0,   0,   1,   1, {  17,  22, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8245c3c */
    &s_gs194_g0_s0_station_sref,
    &s_gs194_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs194_g0_sectors[] = { /* 0x8245c44 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs194_g1_sectors[] = { /* 0x8245c6c */
    { LPARRAY(s_gs194_g1_s0_lives), 0,NULL, LPARRAY(s_gs194_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs194_groups[] = { /* 0x8245c94 */
    { LPARRAY(s_gs194_g0_sectors) },
    { LPARRAY(s_gs194_g1_sectors) },
};

static const struct GroundLink s_gs194_links[] = { /* 0x8245ca4 */
    /* link   0 */ { { /*x*/  15, /*y*/  24, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  19, /*y*/  24, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs194 = { LPARRAY(s_gs194_groups), s_gs194_links }; /* 0x8245cb4 */
