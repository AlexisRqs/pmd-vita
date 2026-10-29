







static const struct ScriptCommand s_gs213_g0_s0_station_sref_script[] = { /* 0x8265640 */
    DEBUGINFO_O(10),
    SELECT_MAP(213),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs213_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs213_g0_s0_station_sref_script }; /* 0x82656ac */

static const struct ScriptCommand s_gs213_g1_s0_station_sref_script[] = { /* 0x82656b8 */
    DEBUGINFO_O(19),
    SELECT_MAP(213),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs213_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs213_g1_s0_station_sref_script }; /* 0x8265758 */

static const struct ScriptCommand s_gs213_g1_s0_eff0_script[] = { /* 0x8265764 */
    DEBUGINFO_O(34),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x000000ac,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs213_g1_s0_obj0_dlg0[] = { /* 0x82657a4 */
    DEBUGINFO_O(41),
    CAMERA_END_PAN,
    HALT,
};

static const struct ScriptCommand s_gs213_g1_s0_lives0_dlg0[] = { /* 0x82657d4 */
    DEBUGINFO_O(47),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(497),
    ALERT_CUE(7),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0x70, 0x70, 0x00)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0x70, 0x70, 0x00)),
    WAIT_FANFARE2(497),
    WAIT(20),
    FANFARE_PLAY2(497),
    ALERT_CUE(7),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0x50, 0x50, 0x00)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 5, RGB_U32(0x50, 0x50, 0x00)),
    WAIT_FANFARE2(497),
    WAIT(20),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    FANFARE_PLAY2(685),
    MSG_NPC(2, (@@STRING:d1fd1f5dd2218a62a0850cc00b9f4b77fe460b42c03b1cc3449c0f8258b980c0@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:a2b240e11b06acd723a70e72c8ae6eb495e6df7d34ea33c5095bd695220f09e8@@)),
    MSG_NPC(2, (@@STRING:341bc29a42ee69d35e9adc1312082bae80bbf11b6e2ad39f411eb76a693b2bb6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    WALK_RELATIVE(256, 0, -24),
    WAIT(60),
    ALERT_CUE(6),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000018, NULL },
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:d3e485e438a2c78ff05dd67a36a825a332bfa261a0fef54f5318c331a1114217@@)),
    MSG_NPC(2, (@@STRING:180cfa6a95ef839e42be419f91cbf832584b4a4c4ee014177a2fae8605b664c8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000008, NULL },
    BGM_FADEOUT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    SELECT_OBJECTS(1, 1),
    AWAIT_CUE(5),
    WAIT(10),
    FLASH_TO(FALSE, PALUTIL_KIND_05, 3, RGB_U32(0x50, 0x50, 0x00)),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(1),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 3, RGB_U32(0x50, 0x50, 0x00)),
    ALERT_CUE(8),
    MSG_INSTANT((@@STRING:51ae92d233e088ce32166e5788e2f275fa9cf4957afe9736fc9ad29d96b378cd@@)),
    MSG_INSTANT((@@STRING:d257ad5514bf8b91ad6a7af9ea6f25f7a8814dcb9911aeccf6bb559741dc5d33@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    WAIT(10),
    FANFARE_PLAY2(507),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    CANCEL_EFFECTS(1, 0),
    CANCEL_OBJECTS(1, 1),
    SELECT_EFFECTS(1, 1),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT_FANFARE2(507),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    WAIT(60),
    MSG_INSTANT((@@STRING:ec53b5fb7aedf1e8500777810848e4a1f7f859d7f3d6aa72d50f0210c70a6a07@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(2, (@@STRING:ff73d68170b354dafff4a3290a104006c6f99f36ba029313a8e6eadfbcab7af8@@)),
    MSG_NPC(2, (@@STRING:2c4ea39b960e3b4121e9b5924ca5b1c5f39bcbefb72493a5ece986bbec6473fa@@)),
    MSG_NPC(2, (@@STRING:c72ec9b0890dc1ebec7184641ac8c291ea76cf28e77d721a88aff645c3df93f8@@)),
    MSG_NPC(2, (@@STRING:50a2b0c84e4a0184c92fd288268042d7b4239853d50a4a5e4e93bf19faa67b2c@@)),
    MSG_NPC(2, (@@STRING:07d3ae8c5b8d0abf24b765f7dc277cd70b04ba860f5c73a367131302db912070@@)),
    TEXTBOX_CLEAR,
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000018, NULL },
    WAIT(20),
    CANCEL_EFFECTS(1, 1),
    WAIT(20),
    BGM_STOP,
    FANFARE_PLAY(212),
    MSG_INSTANT((@@STRING:9c24c4b8905745eac85759f75bc874a6e765d1e6f42dbd87f475433a144368c6@@)),
    WAIT_FANFARE1(212),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_INSTANT((@@STRING:a7a652c338f994a26302f8ee9a9b3a15332bb5724fc1c2558a7965dcb349d656@@)),
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:a38d23d92f1cab6e482a3b68612d10ee675dca4bea47992418b6a3f83294a9da@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};






static const struct ScriptCommand s_gs213_g1_s0_lives1_dlg0[] = { /* 0x826604c */
    DEBUGINFO_O(146),
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
    FANFARE_PLAY2(708),
    { 0x56, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT_FANFARE2(708),
    SELECT_ANIMATION(22),
    WAIT(15),
    FANFARE_PLAY2(479),
    WAIT_FANFARE2(479),
    ALERT_CUE(5),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs213_g1_s1_eff0_script[] = { /* 0x826626c */
    DEBUGINFO_O(183),
    { 0x56, 0x00,  0x0000,  0x000000ad,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs213_g1_s1_obj0_dlg0[] = { /* 0x826629c */
    DEBUGINFO_O(189),
    FANFARE_PLAY2(662),
    { 0x56, 0x00,  0x0000,  0x000000b1,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x000000b2,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    FANFARE_PLAY2(726),
    WAIT_FANFARE2(726),
    FANFARE_PLAY2(726),
    WAIT(45),
    WAIT_FANFARE2(726),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    HALT,
};

static const struct GroundLivesData s_gs213_g1_s0_lives[] = { /* 0x82663ac */
    /*  0 */ {   0,   4,   0,   0, {  22,  19, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs213_g1_s0_lives0_dlg0,
    } },
    /*  1 */ { 117,   0,   0,   0, {  22,  14, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs213_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs213_g1_s0_objs[] = { /* 0x82663dc */
    /*  0 */ {   0,   0,   1,   1, {  22,  18, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs213_g1_s0_obj0_dlg0,
    } },
};

static const struct GroundObjectData s_gs213_g1_s1_objs[] = { /* 0x82663f4 */
    /*  0 */ {  67,   0,   2,   2, {  22,  14, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs213_g1_s1_obj0_dlg0,
    } },
};

static const struct GroundEffectData s_gs213_g1_s0_effs[] = { /* 0x826640c */
    /*  0 */ {   5,   0,   1,   1, {  22,  14, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs213_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs213_g1_s1_effs[] = { /* 0x8266418 */
    /*  0 */ {   5,   0,   1,   1, {  22,  14, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs213_g1_s1_eff0_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8266424 */
    &s_gs213_g0_s0_station_sref,
    &s_gs213_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs213_g0_sectors[] = { /* 0x826642c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs213_g1_sectors[] = { /* 0x8266454 */
    { LPARRAY(s_gs213_g1_s0_lives), LPARRAY(s_gs213_g1_s0_objs), LPARRAY(s_gs213_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { 0,NULL, LPARRAY(s_gs213_g1_s1_objs), LPARRAY(s_gs213_g1_s1_effs), 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs213_groups[] = { /* 0x82664a4 */
    { LPARRAY(s_gs213_g0_sectors) },
    { LPARRAY(s_gs213_g1_sectors) },
};

static const struct GroundLink s_gs213_links[] = { /* 0x82664b4 */
    {},
};

const GroundScriptHeader gGroundScript_gs213 = { LPARRAY(s_gs213_groups), s_gs213_links }; /* 0x82664bc */
