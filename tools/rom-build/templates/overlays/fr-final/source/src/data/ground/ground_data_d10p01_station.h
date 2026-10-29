
static const struct ScriptCommand s_gs198_g0_s0_station_sref_script[] = { /* 0x824bbfc */
    DEBUGINFO_O(11),
    JUMPIF_SCENARIOCHECK(QUEST_UNK5, /* to label */ 0),
    EXECUTE_STATION(MAP_TEAM_BASE_INSIDE, 0, 0),
  LABEL(0), /* = 0x00 */
    SELECT_MAP(MAP_FROSTY_FOREST_ENTRY),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 13, /* to label */ 1),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    CALL_STATION(  2,  0),
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    JUMPIF_EQUAL(START_MODE, STARTMODE_CONTINUE_GAME, /* to label */ 3),
    JUMPIF_EQUAL(START_MODE, STARTMODE_3, /* to label */ 4),
    JUMPIF_EQUAL(START_MODE, STARTMODE_GROUND, /* to label */ 5),
    JUMPIF_EQUAL(START_MODE, STARTMODE_DUNGEON_WON, /* to label */ 6),
    JUMPIF_EQUAL(START_MODE, STARTMODE_10, /* to label */ 6),
    JUMPIF_EQUAL(START_MODE, STARTMODE_DUNGEON_LOST, /* to label */ 6),
    JUMPIF_EQUAL(START_MODE, STARTMODE_11, /* to label */ 6),
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(1, /* to label */ 7),
    JUMP_LABEL(7),
  LABEL(3), /* = 0x03 */
    SELECT_LIVES(0, 3),
    JUMP_LABEL(8),
  LABEL(4), /* = 0x04 */
    SELECT_LIVES(0, 4),
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(8),
  LABEL(6), /* = 0x06 */
    SELECT_LIVES(0, 2),
    JUMP_LABEL(8),
  LABEL(8), /* = 0x08 */
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs198_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs198_g0_s0_station_sref_script }; /* 0x824beb8 */

static const struct ScriptCommand s_gs198_g0_s0_obj0_dlg2[] = { /* 0x824bec4 */
    DEBUGINFO_O(57),
    JUMP_SCRIPT(SAVE_AND_WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs198_g0_s1_lives0_dlg0[] = { /* 0x824bee4 */
    DEBUGINFO_O(62),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s1_lives1_dlg0[] = { /* 0x824bf24 */
    DEBUGINFO_O(69),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s2_lives0_dlg0[] = { /* 0x824bf64 */
    DEBUGINFO_O(76),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s2_lives1_dlg0[] = { /* 0x824bfa4 */
    DEBUGINFO_O(83),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s3_lives0_dlg0[] = { /* 0x824bfe4 */
    DEBUGINFO_O(90),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s3_lives1_dlg0[] = { /* 0x824c024 */
    DEBUGINFO_O(97),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs198_g0_s4_lives0_dlg0[] = { /* 0x824c094 */
    DEBUGINFO_O(107),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s4_lives1_dlg0[] = { /* 0x824c0c4 */
    DEBUGINFO_O(113),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs198_g0_s5_obj0_dlg2[] = { /* 0x824c0f4 */
    DEBUGINFO_O(119),
    JUMP_SCRIPT(WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs198_g0_s5_obj1_dlg2[] = { /* 0x824c114 */
    DEBUGINFO_O(124),
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs198_g1_s0_station_sref_script[] = { /* 0x824c134 */
    DEBUGINFO_O(129),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_FROSTY_FOREST_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs198_g1_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs198_g1_s0_station_sref_script }; /* 0x824c204 */

static const struct ScriptCommand s_gs198_g1_s0_eff0_script[] = { /* 0x824c210 */
    DEBUGINFO_O(147),
    CAMERA_END_PAN,
    CAMERA_INIT_PAN,
    { 0x89, 0xc8,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs198_g1_s0_lives0_dlg0[] = { /* 0x824c290 */
    DEBUGINFO_O(158),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9153a0b9ba16fc0199f8a83dbd8f06be3038fdb8c8c869553cf7abd692ca92f8@@)),
    VARIANT_DEFAULT((@@STRING:4380153e883a61bbd1eb04a19d896a070530ac626157de7d75d9676a1c722b7d@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(0),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cd9c0d5bf3e57c02c8eeac07223b2388f8b859e818862f274253f4e175b6ed54@@)),
    VARIANT_DEFAULT((@@STRING:6c1a50a2b8251b8ea830a3f420a64f8fea05ca322f16379df83548c54bb49c3f@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ae198b1a8460957cb0e4175c6ecc1e6347a53f293dc27b986349fc58e294cd0d@@)),
    VARIANT(/* == */  1, (@@STRING:d701539e02399a72b88d9a24121d41554dfaae3549f2d81317ad2d7d662eb9f9@@)),
    VARIANT_DEFAULT((@@STRING:a20498279e058fc6ac458340916edace0862e265d71ed8105f50e7649a22ea40@@)),
    VARIANT_DEFAULT((@@STRING:fa43f2a637c4b314ee67807d0382af9b4bb92204bbc5882cfdfc577d60a4b469@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT(10),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};


static const struct ScriptCommand s_gs198_g1_s0_lives1_dlg0[] = { /* 0x824c670 */
    DEBUGINFO_O(188),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    HALT,
};

static const struct ScriptCommand s_gs198_g2_s0_station_sref_script[] = { /* 0x824c6d0 */
    DEBUGINFO_O(197),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs198_g2_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs198_g2_s0_station_sref_script }; /* 0x824c700 */

static const struct ScriptCommand s_gs198_g2_s0_lives0_dlg2[] = { /* 0x824c70c */
    DEBUGINFO_O(205),
    EXECUTE_STATION(-1, 2, 1),
    HALT,
};

static const struct ScriptCommand s_gs198_g2_s0_evt0_sref_script[] = { /* 0x824c73c */
    DEBUGINFO_O(211),
    EXECUTE_STATION(-1, 2, 1),
    HALT,
};

static const ScriptRef s_gs198_g2_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs198_g2_s0_evt0_sref_script }; /* 0x824c76c */

static const struct ScriptCommand s_gs198_g2_s1_station_sref_script[] = { /* 0x824c778 */
    DEBUGINFO_O(219),
    SELECT_ENTITIES(-1, 1),
    CANCEL_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs198_g2_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs198_g2_s1_station_sref_script }; /* 0x824c7c8 */

static const struct ScriptCommand s_gs198_g2_s1_lives0_dlg0[] = { /* 0x824c7d4 */
    DEBUGINFO_O(229),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 34),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:120abc1c4b2dbac2cefaa113533e54859c32f0ecbb4b18147aada6e072b836b4@@)),
    VARIANT_DEFAULT((@@STRING:b98266d25131dbba8043a06d1781ae1c77c828e7e73aa27e0fc3dfb884d0ed25@@)),
    CHOICE(/* label */  2, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  3, (@@STRING:c45a0ef176cec279ebab66e5bced078af4a24adb4836b83e3999337971467ea1@@)),
  LABEL(3), /* = 0x03 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:5b644d06480c4247e20017c108323b776676c864752ff554697a1a4d24ed09bd@@)),
    VARIANT(/* == */  1, (@@STRING:9eebc7c80664e819a32e3642fdc7109a36c0f914b697f31099718168d57fd96f@@)),
    VARIANT_DEFAULT((@@STRING:9d698ba47d7a65411ba10daa2818b5a9da9003fee851813efbb9127a023a2da6@@)),
    VARIANT_DEFAULT((@@STRING:030b1123f24a02c23a7732a391add23dad738dfc14f01a8fe5ab3a88c20fb9d7@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:7d836fc0e6ea5b0595e4cfdbec11dfdccfeebf5f3964004d661bda4de5320c72@@)),
    CHOICE(/* label */  5, (@@STRING:f89148c178ffc895219777ebe36d6ec06efde92d10ea856311e926cff9579782@@)),
    CHOICE(/* label */  6, (@@STRING:9f6f5c2fea4809356086e1f9db2350c7df71f43501a4ada68922f7a35255ab9d@@)),
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c7673c559d11f5f5c72d2988b71e4ff7f5b92acd6f3d56835bbeece0861c82cc@@)),
    VARIANT(/* == */  1, (@@STRING:853bc8897a8abd3cb3814b5f2c00e4fb1e3a428472201fe2223efb9885757cf5@@)),
    VARIANT_DEFAULT((@@STRING:561aaa852ee4b073fdfe108e271cb62179653b26d4faf2deeeee6e371747535c@@)),
    VARIANT_DEFAULT((@@STRING:20407b7b951596256b2fbe671b82b370d6390faf591ce4a2e32f22a2491a54db@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 7),
    COND_EQUAL(3, /* to label */ 7),
    COND_EQUAL(5, /* to label */ 7),
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0032,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    BGM_FADEOUT(120),
    CAMERA_PAN(128, 0),
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0040,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    BGM_FADEOUT(120),
    CAMERA_PAN(179, 0),
  LABEL(8), /* = 0x08 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000d,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 3),
    HALT,
  LABEL(6), /* = 0x06 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:280c19cb3c909c276e0b5833b1121b3312353bcd482f56285c34e3727066dab6@@)),
    VARIANT_DEFAULT((@@STRING:5e2f41d305a90bb38b49838d0e26a78d4d8d071805ece6cd0a9a59b05b02a400@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 9),
    COND_EQUAL(3, /* to label */ 9),
    COND_EQUAL(5, /* to label */ 9),
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0032,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    BGM_FADEOUT(120),
    CAMERA_PAN(128, 0),
    JUMP_LABEL(10),
  LABEL(9), /* = 0x09 */
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0040,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    BGM_FADEOUT(120),
    CAMERA_PAN(192, 0),
  LABEL(10), /* = 0x0a */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004f,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 3),
    HALT,
};




static const struct ScriptCommand s_gs198_g2_s1_lives1_dlg0[] = { /* 0x824cea4 */
    DEBUGINFO_O(315),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    CJUMP_UNK_C8(0),
    COND_EQUAL(0, /* to label */ 0),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(7, /* to label */ 0),
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(128, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(192, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs198_g3_s0_station_sref_script[] = { /* 0x824cfe4 */
    DEBUGINFO_O(338),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_FROSTY_FOREST_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs198_g3_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs198_g3_s0_station_sref_script }; /* 0x824d0b4 */

static const struct ScriptCommand s_gs198_g3_s0_lives0_dlg0[] = { /* 0x824d0c0 */
    DEBUGINFO_O(356),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6be98775fb56dae2a2a48c8a50b1a82386c77697e22a2cf895b5e3f6a0ff515e@@)),
    VARIANT_DEFAULT((@@STRING:13cec2b84dc3dca895e4b803061ebd79531fac5f977fa5ebe1487d69555cc94b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ab227e8492db450d2355aa12f0a01c6ce4e32706bd0e6f8c2e3e2be2450a7946@@)),
    VARIANT_DEFAULT((@@STRING:c9080e7a743b1c578bc752ec2b2efe611921e4ff8ea3687d6ce9d51d475c2474@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7042fc824ed0600b2b4bb4b491bc2d9adfd105367db7369d8204b9f9180f988b@@)),
    VARIANT_DEFAULT((@@STRING:5424ce6296554e8666a973b2e3b7f319e3799559f07cb19275c5c26b4496ca15@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};


static const struct ScriptCommand s_gs198_g3_s0_lives1_dlg0[] = { /* 0x824d364 */
    DEBUGINFO_O(385),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs198_g4_s0_station_sref_script[] = { /* 0x824d424 */
    DEBUGINFO_O(400),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_FROSTY_FOREST_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs198_g4_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs198_g4_s0_station_sref_script }; /* 0x824d4f4 */

static const struct ScriptCommand s_gs198_g4_s0_lives0_dlg0[] = { /* 0x824d500 */
    DEBUGINFO_O(418),
    SELECT_ANIMATION(8),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAKEUP_FUNC),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(30),
    { 0x2d, 0x09,  0x0002,  0x00000066,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fe902f4d4e1f035df3014e2047ded366a7c22f8e02dd304af919fb57eb21bd90@@)),
    VARIANT_DEFAULT((@@STRING:c5e3ec67791a3708ee433878118a43caf415892af2f3ac819a7d36195ad71f96@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f437d8b6b2c9a528844af537e300718c515121a7c2758a00d812817ddf495896@@)),
    VARIANT(/* == */  1, (@@STRING:4552f0f1d471941a3ad6f95d115b86c82fac86f68b2b315c2d945d3a2274fd03@@)),
    VARIANT(/* == */  1, (@@STRING:f924012563be5a743b2814d6feded92de5fbedc35a21900448a1701bd67df6e3@@)),
    VARIANT_DEFAULT((@@STRING:30ecd754f466572fc4a10ff949e3b9a5027127a6d0fe7270bc426cbbefff84d0@@)),
    VARIANT_DEFAULT((@@STRING:f95c4d0bd19e0e3a32ebe67b0d4f549ac0df107ac200a71bfa529a8a5fa6795f@@)),
    VARIANT_DEFAULT((@@STRING:4c360d724cf2f8fc78dfdb50a0a0d5b08f63c802d3c7b502da732cd61405b7f5@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};


static const struct ScriptCommand s_gs198_g4_s0_lives1_dlg0[] = { /* 0x824d834 */
    DEBUGINFO_O(448),
    SELECT_ANIMATION(8),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(WAKEUP_FUNC),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    HALT,
};

static const struct ScriptCommand s_gs198_g5_s0_station_sref_script[] = { /* 0x824d8a4 */
    DEBUGINFO_O(458),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_FROSTY_FOREST_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs198_g5_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs198_g5_s0_station_sref_script }; /* 0x824d974 */

static const struct ScriptCommand s_gs198_g5_s0_lives0_dlg0[] = { /* 0x824d980 */
    DEBUGINFO_O(476),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x10,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:0707e7a835f135248c468c5268561be287decccd8681b0374a8e5cdb5e00d44d@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:090d3df9cb79e13d2872c0a1743964e21426adc17cdb7a4a9c35fda9d7fc5868@@)),
    VARIANT(/* == */  1, (@@STRING:4a5c02e0443cd5bd485a87bc9949560c395630373ac190828a81b67be1deea1b@@)),
    VARIANT(/* == */  1, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT_DEFAULT((@@STRING:8b359078edc62170ae9afae03422639526826d7710636058bdaa08e289b2effa@@)),
    VARIANT_DEFAULT((@@STRING:b0902f6fe685e3396d776b2365f6ab6ceac47680321002850d6f634cd03d7c65@@)),
    VARIANT_DEFAULT((@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs198_g5_s0_lives1_dlg0[] = { /* 0x824dd18 */
    DEBUGINFO_O(510),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x20,  0x0080,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs198_g6_s0_station_sref_script[] = { /* 0x824ddf8 */
    DEBUGINFO_O(527),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_FROSTY_FOREST_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_FROSTY_FOREST_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs198_g6_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs198_g6_s0_station_sref_script }; /* 0x824dec8 */

static const struct ScriptCommand s_gs198_g6_s0_lives0_dlg0[] = { /* 0x824ded4 */
    DEBUGINFO_O(545),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:5b9368cd800a3e8797e33bc6adfe07701ffa1932b393b355337a114f8b55cf20@@)),
    VARIANT_DEFAULT((@@STRING:b54b4d9b1858698e79f7a118b22e7aca4e221ae74507f1900bf2dac18cc97ab5@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f463e49fea5c38e8ae0c242e78cf71084a747c91fe7c22ce9b84374124d4206d@@)),
    VARIANT_DEFAULT((@@STRING:7554955041a5487eb987262af217b6693234236861ddbbe08838d1b95a08da73@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs198_g6_s0_lives1_dlg0[] = { /* 0x824e0f8 */
    DEBUGINFO_O(573),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct GroundLivesData s_gs198_g0_s0_lives[] = { /* 0x824e1c8 */
    /*  0 */ { 144,   0,   0,   0, {   7,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs198_g0_s1_lives[] = { /* 0x824e1e0 */
    /*  0 */ {   0,   4,   0,   0, {  17,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  17,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s2_lives[] = { /* 0x824e210 */
    /*  0 */ {   0,   0,   0,   0, {  17,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  17,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s3_lives[] = { /* 0x824e240 */
    /*  0 */ {   0,   4,   0,   0, {  17,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  17,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s4_lives[] = { /* 0x824e270 */
    /*  0 */ {   0,   4,   0,   0, {  17,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  17,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs198_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g0_s5_lives[] = { /* 0x824e2a0 */
    /*  0 */ { 144,   0,   0,   0, {   7,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {  23,  35, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs198_g1_s0_lives[] = { /* 0x824e2d0 */
    /*  0 */ {   0,   4,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g2_s0_lives[] = { /* 0x824e300 */
    /*  0 */ {  34,   6,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [2] = s_gs198_g2_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs198_g2_s1_lives[] = { /* 0x824e318 */
    /*  0 */ {   0,   6,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g2_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g2_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g3_s0_lives[] = { /* 0x824e348 */
    /*  0 */ {   0,   0,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g3_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g4_s0_lives[] = { /* 0x824e378 */
    /*  0 */ {   0,   6,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g5_s0_lives[] = { /* 0x824e3a8 */
    /*  0 */ {   0,   6,   0,   0, {  19,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  15,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs198_g6_s0_lives[] = { /* 0x824e3d8 */
    /*  0 */ {   0,   6,   0,   0, {  19,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g6_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  15,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs198_g6_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs198_g0_s0_objs[] = { /* 0x824e408 */
    /*  0 */ {   4,   0,   4,   2, {   8,  32, 0, 0 }, {
        [2] = s_gs198_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs198_g0_s5_objs[] = { /* 0x824e420 */
    /*  0 */ {   4,   0,   4,   2, {   8,  32, 0, 0 }, {
        [2] = s_gs198_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {  23,  35, 0, CPOS_HALFTILE }, {
        [2] = s_gs198_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs198_g1_s0_effs[] = { /* 0x824e450 */
    /*  0 */ {   0,   0,   1,   1, {  17,   9, 0, CPOS_HALFTILE }, s_gs198_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs198_g3_s0_effs[] = { /* 0x824e45c */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs198_g4_s0_effs[] = { /* 0x824e468 */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs198_g5_s0_effs[] = { /* 0x824e474 */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs198_g6_s0_effs[] = { /* 0x824e480 */
    /*  0 */ {   0,   0,   1,   1, {  17,  33, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs198_g2_s0_evts[] = { /* 0x824e48c */
    /*  0 */ {   4,   3,   0,   0, {  15,  27, 0, 0 }, &s_gs198_g2_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x824e498 */
    &s_gs198_g0_s0_station_sref,
    &s_gs198_g1_s0_station_sref,
    &s_gs198_g2_s0_station_sref,
    &s_gs198_g2_s1_station_sref,
    &s_gs198_g3_s0_station_sref,
    &s_gs198_g4_s0_station_sref,
    &s_gs198_g5_s0_station_sref,
    &s_gs198_g6_s0_station_sref,
};

static const struct GroundScriptSector s_gs198_g0_sectors[] = { /* 0x824e4b8 */
    { LPARRAY(s_gs198_g0_s0_lives), LPARRAY(s_gs198_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs198_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs198_g0_s5_lives), LPARRAY(s_gs198_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs198_g1_sectors[] = { /* 0x824e5a8 */
    { LPARRAY(s_gs198_g1_s0_lives), 0,NULL, LPARRAY(s_gs198_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs198_g2_sectors[] = { /* 0x824e5d0 */
    { LPARRAY(s_gs198_g2_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs198_g2_s0_evts), 1,&sStationScripts[2], },
    { LPARRAY(s_gs198_g2_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs198_g3_sectors[] = { /* 0x824e620 */
    { LPARRAY(s_gs198_g3_s0_lives), 0,NULL, LPARRAY(s_gs198_g3_s0_effs), 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs198_g4_sectors[] = { /* 0x824e648 */
    { LPARRAY(s_gs198_g4_s0_lives), 0,NULL, LPARRAY(s_gs198_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs198_g5_sectors[] = { /* 0x824e670 */
    { LPARRAY(s_gs198_g5_s0_lives), 0,NULL, LPARRAY(s_gs198_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptSector s_gs198_g6_sectors[] = { /* 0x824e698 */
    { LPARRAY(s_gs198_g6_s0_lives), 0,NULL, LPARRAY(s_gs198_g6_s0_effs), 0,NULL, 1,&sStationScripts[7], },
};

static const struct GroundScriptGroup s_gs198_groups[] = { /* 0x824e6c0 */
    { LPARRAY(s_gs198_g0_sectors) },
    { LPARRAY(s_gs198_g1_sectors) },
    { LPARRAY(s_gs198_g2_sectors) },
    { LPARRAY(s_gs198_g3_sectors) },
    { LPARRAY(s_gs198_g4_sectors) },
    { LPARRAY(s_gs198_g5_sectors) },
    { LPARRAY(s_gs198_g6_sectors) },
};

static const struct GroundLink s_gs198_links[] = { /* 0x824e6f8 */
    /* link   0 */ { { /*x*/  17, /*y*/  27, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs198 = { LPARRAY(s_gs198_groups), s_gs198_links }; /* 0x824e700 */
