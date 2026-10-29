










static const struct ScriptCommand s_gs188_g0_s0_station_sref_script[] = { /* 0x8239178 */
    DEBUGINFO_O(13),
    SELECT_MAP(MAP_MT_THUNDER_ENTRY),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs188_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs188_g0_s0_station_sref_script }; /* 0x82391e4 */

static const struct ScriptCommand s_gs188_g1_s0_station_sref_script[] = { /* 0x82391f0 */
    DEBUGINFO_O(22),
    SELECT_MAP(MAP_MT_THUNDER_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_THUNDER),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x0001,  0x00000000,  0x00000000, NULL },
    NEXT_DUNGEON(0, SCRIPT_DUNGEON_MT_THUNDER),
    RET,
};

static const ScriptRef s_gs188_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs188_g1_s0_station_sref_script }; /* 0x8239280 */

static const struct ScriptCommand s_gs188_g1_s0_eff0_script[] = { /* 0x823928c */
    DEBUGINFO_O(36),
    CAMERA_END_PAN,
    AWAIT_CUE(4),
    HALT,
};

static const struct ScriptCommand s_gs188_g1_s0_lives0_dlg0[] = { /* 0x82392cc */
    DEBUGINFO_O(43),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000060,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x00000055,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(6),
    WALK_GRID(256, 0),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3590644f0b8708f3c36990558b28308a8fe925f50c305ed84a9b7f2ebcc0df56@@)),
    VARIANT(/* == */  1, (@@STRING:1e7918d5194615c54def5c3f82cf972d0505dcf43f66f433c9af7defe8639ab6@@)),
    VARIANT_DEFAULT((@@STRING:c7bbc9811b46d13db5b9e8ad20f027de362866261d6510fdea694df3530362b3@@)),
    VARIANT_DEFAULT((@@STRING:44e63ef79e769bc2fe47d57602e4eeeb6c5df015c7af561649cc411d13121875@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ad4d66b51c17bdfb69983f2fd9e8b4f411e0de85e62303cfcc43277057bfb27f@@)),
    VARIANT_DEFAULT((@@STRING:d53684720e33f958d2c43391f1e6b060b38a0014f18fdcaac441f9e5a43042a3@@)),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:1a08f50b091d2633c64e160b6cc5b63854e9a04ef17e479e3a36d6153087c587@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2f48cb2cf3bcf8a8452386152afa2616c59b5a19f174d2691dc0d05891d21b35@@)),
    VARIANT(/* == */  1, (@@STRING:a61e57897c4814148b2dd97173d84b7a7372fb2df6bbc87c577703f7b19b35e6@@)),
    VARIANT(/* == */  1, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT(/* == */  3, (@@STRING:092961f87b8727cbc13bd9dd71e8d58838f68974545f617c818a0cb8ff6b2718@@)),
    VARIANT(/* == */  3, (@@STRING:e18b7e6e5d43c626acec24af023f54fa75b19fc5d38c29cbe2b1f9c8a7179fba@@)),
    VARIANT(/* == */  3, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT_DEFAULT((@@STRING:03adaa4af866aca0f1270b75569be542178f3492a05c8d0096e3e420002c5415@@)),
    VARIANT_DEFAULT((@@STRING:10649acf594bf2d8cf9316666092a359632dad9fb643f880f52981168f68a755@@)),
    VARIANT_DEFAULT((@@STRING:1ef0c04a124afa4101764c6d86501a95d22f828c428365c1b872865a37d72c27@@)),
    TEXTBOX_CLEAR,
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 2),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs188_g1_s0_lives1_dlg0[] = { /* 0x8239824 */
    DEBUGINFO_O(94),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 1),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(8),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(9),
    WAIT(30),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 2),
    HALT,
};

static const struct ScriptCommand s_gs188_g2_s0_station_sref_script[] = { /* 0x8239954 */
    DEBUGINFO_O(116),
    SELECT_MAP(MAP_MT_THUNDER_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_THUNDER),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x0001,  0x00000000,  0x00000000, NULL },
    NEXT_DUNGEON(0, SCRIPT_DUNGEON_MT_THUNDER),
    RET,
};

static const ScriptRef s_gs188_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs188_g2_s0_station_sref_script }; /* 0x82399e4 */

static const struct ScriptCommand s_gs188_g2_s0_eff0_script[] = { /* 0x82399f0 */
    DEBUGINFO_O(130),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs188_g2_s0_lives0_dlg0[] = { /* 0x8239a30 */
    DEBUGINFO_O(137),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000055,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(6),
    WALK_GRID(256, 0),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(20),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:23fe7dd0816f2c7124a1bebbce466e00be0ef74cf53a1fce51992b6286c1998b@@)),
    VARIANT(/* == */  1, (@@STRING:59d58e5a64cb8c745eb36c845557cf248963fe82b3c276b6291102a68b1721e1@@)),
    VARIANT_DEFAULT((@@STRING:6b76118595c1948844a5169377e67ac7df2f872ad83da9179474e188f467f12b@@)),
    VARIANT_DEFAULT((@@STRING:7af0fbfd594cee28b61e49a7d8b775ace24a4612ebce6cd13dbe17a11efeb03f@@)),
    TEXTBOX_CLEAR,
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 2),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs188_g2_s0_lives1_dlg0[] = { /* 0x8239c48 */
    DEBUGINFO_O(165),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 1),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT(8),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 2),
    HALT,
};

static const struct GroundLivesData s_gs188_g1_s0_lives[] = { /* 0x8239d08 */
    /*  0 */ {   0,   2,   0,   0, {  23,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs188_g2_s0_lives[] = { /* 0x8239d38 */
    /*  0 */ {   0,   2,   0,   0, {  23,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  27,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs188_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs188_g1_s0_effs[] = { /* 0x8239d68 */
    /*  0 */ {   0,   0,   1,   1, {  25,  16, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs188_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs188_g2_s0_effs[] = { /* 0x8239d74 */
    /*  0 */ {   0,   0,   1,   1, {  25,  16, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs188_g2_s0_eff0_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8239d80 */
    &s_gs188_g0_s0_station_sref,
    &s_gs188_g1_s0_station_sref,
    &s_gs188_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs188_g0_sectors[] = { /* 0x8239d8c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs188_g1_sectors[] = { /* 0x8239db4 */
    { LPARRAY(s_gs188_g1_s0_lives), 0,NULL, LPARRAY(s_gs188_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs188_g2_sectors[] = { /* 0x8239ddc */
    { LPARRAY(s_gs188_g2_s0_lives), 0,NULL, LPARRAY(s_gs188_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs188_groups[] = { /* 0x8239e04 */
    { LPARRAY(s_gs188_g0_sectors) },
    { LPARRAY(s_gs188_g1_sectors) },
    { LPARRAY(s_gs188_g2_sectors) },
    {},
};

static const struct GroundLink s_gs188_links[] = { /* 0x8239e24 */
    /* link   0 */ { { /*x*/  23, /*y*/  18, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  27, /*y*/  18, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  25, /*y*/  11, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs188 = { LPARRAY(s_gs188_groups), s_gs188_links }; /* 0x8239e3c */
