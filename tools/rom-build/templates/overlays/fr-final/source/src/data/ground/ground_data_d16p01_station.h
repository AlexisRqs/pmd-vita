







static const struct ScriptCommand s_gs212_g0_s0_station_sref_script[] = { /* 0x8264834 */
    DEBUGINFO_O(10),
    SELECT_MAP(212),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs212_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs212_g0_s0_station_sref_script }; /* 0x82648a0 */

static const struct ScriptCommand s_gs212_g1_s0_station_sref_script[] = { /* 0x82648ac */
    DEBUGINFO_O(19),
    SELECT_MAP(212),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs212_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs212_g1_s0_station_sref_script }; /* 0x826494c */

static const struct ScriptCommand s_gs212_g1_s0_eff0_script[] = { /* 0x8264958 */
    DEBUGINFO_O(34),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x000000ab,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs212_g1_s0_obj0_dlg0[] = { /* 0x8264998 */
    DEBUGINFO_O(41),
    CAMERA_END_PAN,
    HALT,
};

static const struct ScriptCommand s_gs212_g1_s0_lives0_dlg0[] = { /* 0x82649c8 */
    DEBUGINFO_O(47),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(497),
    ALERT_CUE(7),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0xFA, 0x7D, 0x7D)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0xFA, 0x7D, 0x7D)),
    WAIT_FANFARE2(497),
    WAIT(20),
    FANFARE_PLAY2(497),
    ALERT_CUE(7),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0x55, 0x00, 0x00)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0x55, 0x00, 0x00)),
    WAIT_FANFARE2(497),
    WAIT(20),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:62e4706a6f6816f39caa6e7683c77b3b5aca4455289fbb4e7d10ee0bb60b7183@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:5b4f4d49e86de260c5144cd09b4479caf5a11784146da9966ea34b7a8337acd4@@)),
    MSG_NPC(2, (@@STRING:1c5c2161e4736579808e082e2318f17518e0b3a7fe8c03ccfd51616da97427a4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    WALK_RELATIVE(256, 0, -24),
    WAIT(60),
    ALERT_CUE(6),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000018, NULL },
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:56a32d3b641ba88339ea0d9388ad8e505443523b1ba60c94540470570941da07@@)),
    MSG_NPC(2, (@@STRING:e94e8d96959778717fbce6b02889cf13f0775a445bc30ecb1030b5f84544406c@@)),
    MSG_NPC(2, (@@STRING:c41ed63405622b9d3935f062ad7d9469525cbab1c723fc5ad22203f42f5d5cb1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000008, NULL },
    BGM_FADEOUT(30),
    ALERT_CUE(7),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    AWAIT_CUE(5),
    SELECT_OBJECTS(1, 1),
    AWAIT_CUE(5),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    FLASH_TO(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0x55, 0x00, 0x00)),
    WAIT(1),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0x55, 0x00, 0x00)),
    WAIT(10),
    SELECT_ANIMATION(2),
    ALERT_CUE(8),
    MSG_INSTANT((@@STRING:c014a82ec8e7ad7699ca8eb951c48c33b5102fb63ebebf5384f7132863d4825a@@)),
    MSG_INSTANT((@@STRING:4c0d9294610db4b7f06a2742a33a28e12714e7e797cdaab68c90a83b0bdd13e4@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    WAIT(10),
    FANFARE_PLAY2(507),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    CANCEL_EFFECTS(1, 0),
    CANCEL_OBJECTS(1, 1),
    SELECT_EFFECTS(1, 1),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT_FANFARE2(507),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    WAIT(60),
    MSG_NPC(2, (@@STRING:347b60ea82301f4d7c0350bba704afd2f63fc5b0a563f4e081d17d3de4720806@@)),
    MSG_NPC(2, (@@STRING:dd8d81d29661bb56dcc3a7dac13a02e759386f32f25d25169d8b23090eecab16@@)),
    MSG_NPC(2, (@@STRING:e33ca1f7d33b6f431200df9aa4aa3d57383579ac99286bd4b8213d919383ca51@@)),
    MSG_NPC(2, (@@STRING:6235dfbd63303b0fa5e8c6a9ab82f346ec0569eeeee7ca1344eeb61992a1529f@@)),
    TEXTBOX_CLEAR,
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000018, NULL },
    WAIT(20),
    CANCEL_EFFECTS(1, 1),
    WAIT(20),
    BGM_STOP,
    FANFARE_PLAY(212),
    MSG_INSTANT((@@STRING:6980bba1e17ef3d220dd32636a55756bce700f773e99d520a2a13838180446d1@@)),
    WAIT_FANFARE1(212),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_INSTANT((@@STRING:a7a652c338f994a26302f8ee9a9b3a15332bb5724fc1c2558a7965dcb349d656@@)),
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:038626d904ef271ebff070bf663cd0e411b9bf447ad708ce3f556f4e2db876c4@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};






static const struct ScriptCommand s_gs212_g1_s0_lives1_dlg0[] = { /* 0x826518c */
    DEBUGINFO_O(144),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000008, NULL },
    WAIT(10),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000008, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(19),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    AWAIT_CUE(7),
    SELECT_ANIMATION(9),
    WAIT(30),
    FANFARE_PLAY2(663),
    { 0x56, 0x00,  0x0000,  0x0000004e,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT_FANFARE2(663),
    SELECT_ANIMATION(22),
    WAIT(30),
    FANFARE_PLAY2(653),
    ALERT_CUE(5),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs212_g1_s1_eff0_script[] = { /* 0x826539c */
    DEBUGINFO_O(180),
    { 0x56, 0x00,  0x0000,  0x000000ac,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs212_g1_s1_obj0_dlg0[] = { /* 0x82653cc */
    DEBUGINFO_O(186),
    { 0x56, 0x00,  0x0000,  0x0000004c,  0x00000000, NULL },
    WAIT(10),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(8),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    FANFARE_PLAY2(739),
    { 0x56, 0x00,  0x0000,  0x0000013d,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT_FANFARE2(739),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    FANFARE_STOP2(739),
    { 0x56, 0x00,  0x0000,  0x0000013d,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 2),
    JUMP_LABEL(1),
  LABEL(2), /* = 0x02 */
    HALT,
};

static const struct GroundLivesData s_gs212_g1_s0_lives[] = { /* 0x826551c */
    /*  0 */ {   0,   4,   0,   0, {  22,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs212_g1_s0_lives0_dlg0,
    } },
    /*  1 */ { 116,   0,   0,   0, {  22,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs212_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs212_g1_s0_objs[] = { /* 0x826554c */
    /*  0 */ {   0,   0,   1,   1, {  22,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs212_g1_s0_obj0_dlg0,
    } },
};

static const struct GroundObjectData s_gs212_g1_s1_objs[] = { /* 0x8265564 */
    /*  0 */ {  67,   0,   2,   2, {  22,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs212_g1_s1_obj0_dlg0,
    } },
};

static const struct GroundEffectData s_gs212_g1_s0_effs[] = { /* 0x826557c */
    /*  0 */ {   5,   0,   1,   1, {  22,  17, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs212_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs212_g1_s1_effs[] = { /* 0x8265588 */
    /*  0 */ {   5,   0,   1,   1, {  22,  17, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs212_g1_s1_eff0_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8265594 */
    &s_gs212_g0_s0_station_sref,
    &s_gs212_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs212_g0_sectors[] = { /* 0x826559c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs212_g1_sectors[] = { /* 0x82655c4 */
    { LPARRAY(s_gs212_g1_s0_lives), LPARRAY(s_gs212_g1_s0_objs), LPARRAY(s_gs212_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { 0,NULL, LPARRAY(s_gs212_g1_s1_objs), LPARRAY(s_gs212_g1_s1_effs), 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs212_groups[] = { /* 0x8265614 */
    { LPARRAY(s_gs212_g0_sectors) },
    { LPARRAY(s_gs212_g1_sectors) },
};

static const struct GroundLink s_gs212_links[] = { /* 0x8265624 */
    {},
};

const GroundScriptHeader gGroundScript_gs212 = { LPARRAY(s_gs212_groups), s_gs212_links }; /* 0x826562c */
