









static const struct ScriptCommand s_gs184_g0_s0_station_sref_script[] = { /* 0x82342f4 */
    DEBUGINFO_O(12),
    SELECT_MAP(MAP_SINISTER_WOODS_ENTRY),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs184_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs184_g0_s0_station_sref_script }; /* 0x8234360 */

static const struct ScriptCommand s_gs184_g1_s0_station_sref_script[] = { /* 0x823436c */
    DEBUGINFO_O(21),
    SELECT_MAP(MAP_SINISTER_WOODS_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_SINISTER_WOODS),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    NEXT_DUNGEON(30, SCRIPT_DUNGEON_SINISTER_WOODS),
    RET,
};

static const ScriptRef s_gs184_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs184_g1_s0_station_sref_script }; /* 0x82343ec */

static const struct ScriptCommand s_gs184_g1_s0_lives0_dlg0[] = { /* 0x82343f8 */
    DEBUGINFO_O(34),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000005e,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000005b,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    WAIT(20),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4971e03927c1aa535a61fddf65a1148589b88b2608894f85a023d79e78362af6@@)),
    VARIANT(/* == */  1, (@@STRING:4c1b0d4fb1c4effe650b9e64a45d5ffa1dc203510d2b19103ec1c9358dbbd961@@)),
    VARIANT(/* == */  1, (@@STRING:b9ea7cd20f3e60048a94efbdacaa80633c66c790f48ae6ef91265b0555d8d267@@)),
    VARIANT(/* == */  3, (@@STRING:83ca37ab6159fca8c2a08903cd78caee3e80d97b01488a0e0da66fe696b3f673@@)),
    VARIANT(/* == */  3, (@@STRING:847371f2a922c547944156581a40a9048e14133bbd6aa98904984e530fbff6ba@@)),
    VARIANT(/* == */  3, (@@STRING:f8c7af204f27ac8730f5e15c25388adb0fe2457a28fe19c06ec861d883b5f910@@)),
    VARIANT_DEFAULT((@@STRING:f8ee01e2dcbe981a724034e31602ac1f7b9c8b9fda6eb7f8462966903b292747@@)),
    VARIANT_DEFAULT((@@STRING:847371f2a922c547944156581a40a9048e14133bbd6aa98904984e530fbff6ba@@)),
    VARIANT_DEFAULT((@@STRING:8e859ab202973abc8392c1b2e31538a938153a05aa2f5691153c143eb1ff1ac6@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(384, 0),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs184_g1_s0_lives1_dlg0[] = { /* 0x8234714 */
    DEBUGINFO_O(66),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(384, 1),
    HALT,
};

static const struct ScriptCommand s_gs184_g2_s0_station_sref_script[] = { /* 0x82347a4 */
    DEBUGINFO_O(78),
    SELECT_MAP(MAP_SINISTER_WOODS_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_SINISTER_WOODS),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    NEXT_DUNGEON(30, SCRIPT_DUNGEON_SINISTER_WOODS),
    RET,
};

static const ScriptRef s_gs184_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs184_g2_s0_station_sref_script }; /* 0x8234824 */

static const struct ScriptCommand s_gs184_g2_s0_lives0_dlg0[] = { /* 0x8234830 */
    DEBUGINFO_O(91),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000005b,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6f2c8d27b0084309066117a56651c03e32a6e0d77d090562a7594d7d2820c99d@@)),
    VARIANT(/* == */  1, (@@STRING:2361356d23a4fbb8c36041d42a606dfabc529fd312c05461ac49e7965f6ac60c@@)),
    VARIANT(/* == */  1, (@@STRING:a7db833bd5ea1eb050751f210eb123d4182d76350c3e24892e572c12a8abdf24@@)),
    VARIANT(/* == */  3, (@@STRING:213eaefaccdb7d75d412cfb3c6a6a586d2816f70d37f74bcd8f5331dec51fd9c@@)),
    VARIANT(/* == */  3, (@@STRING:48e8604efb6faa8f2c346bc89ac20888427f6baa957dec004fd4321e6c082d18@@)),
    VARIANT(/* == */  3, (@@STRING:3f68928fba9d85c78fb5c227b06837156cda71e3fca4cdf12982c1a94fd17a27@@)),
    VARIANT_DEFAULT((@@STRING:f79980cf6c1c2216f38399b269cdc74cec1468e0c6dca89f1add6b9645d7ba58@@)),
    VARIANT_DEFAULT((@@STRING:f22c80397dcda48545be4f9df7bc270b22adf39502cf7a6b9d517588fd40dcc5@@)),
    VARIANT_DEFAULT((@@STRING:00bd7ffd628e4a64b040b0781786079e99f74168640411f7b568d72e887d7177@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(384, 0),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs184_g2_s0_lives1_dlg0[] = { /* 0x8234ae8 */
    DEBUGINFO_O(119),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(384, 1),
    HALT,
};

static const struct GroundLivesData s_gs184_g1_s0_lives[] = { /* 0x8234b58 */
    /*  0 */ {   0,   4,   0,   0, {  26,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  30,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs184_g2_s0_lives[] = { /* 0x8234b88 */
    /*  0 */ {   0,   2,   0,   0, {  26,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  30,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs184_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs184_g1_s0_effs[] = { /* 0x8234bb8 */
    /*  0 */ {   0,   0,   1,   1, {  28,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs184_g2_s0_effs[] = { /* 0x8234bc4 */
    /*  0 */ {   0,   0,   1,   1, {  28,  22, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8234bd0 */
    &s_gs184_g0_s0_station_sref,
    &s_gs184_g1_s0_station_sref,
    &s_gs184_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs184_g0_sectors[] = { /* 0x8234bdc */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs184_g1_sectors[] = { /* 0x8234c04 */
    { LPARRAY(s_gs184_g1_s0_lives), 0,NULL, LPARRAY(s_gs184_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs184_g2_sectors[] = { /* 0x8234c2c */
    { LPARRAY(s_gs184_g2_s0_lives), 0,NULL, LPARRAY(s_gs184_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs184_groups[] = { /* 0x8234c54 */
    { LPARRAY(s_gs184_g0_sectors) },
    { LPARRAY(s_gs184_g1_sectors) },
    { LPARRAY(s_gs184_g2_sectors) },
};

static const struct GroundLink s_gs184_links[] = { /* 0x8234c6c */
    /* link   0 */ { { /*x*/  26, /*y*/   9, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  30, /*y*/   9, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs184 = { LPARRAY(s_gs184_groups), s_gs184_links }; /* 0x8234c7c */
