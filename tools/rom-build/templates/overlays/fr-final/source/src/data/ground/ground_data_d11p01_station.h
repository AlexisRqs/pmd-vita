
static const struct ScriptCommand s_gs201_g0_s0_station_sref_script[] = { /* 0x8251f44 */
    DEBUGINFO_O(12),
    JUMPIF_SCENARIOCHECK(QUEST_UNK5, /* to label */ 0),
    EXECUTE_STATION(MAP_TEAM_BASE_INSIDE, 0, 0),
  LABEL(0), /* = 0x00 */
    SELECT_MAP(MAP_MT_FREEZE_ENTRY),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 14, /* to label */ 1),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
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

static const ScriptRef s_gs201_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs201_g0_s0_station_sref_script }; /* 0x8252210 */

static const struct ScriptCommand s_gs201_g0_s0_obj0_dlg2[] = { /* 0x825221c */
    DEBUGINFO_O(59),
    JUMP_SCRIPT(SAVE_AND_WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs201_g0_s1_lives0_dlg0[] = { /* 0x825223c */
    DEBUGINFO_O(64),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s1_lives1_dlg0[] = { /* 0x825227c */
    DEBUGINFO_O(71),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s2_lives0_dlg0[] = { /* 0x82522bc */
    DEBUGINFO_O(78),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s2_lives1_dlg0[] = { /* 0x82522fc */
    DEBUGINFO_O(85),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s3_lives0_dlg0[] = { /* 0x825233c */
    DEBUGINFO_O(92),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s3_lives1_dlg0[] = { /* 0x825237c */
    DEBUGINFO_O(99),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s4_lives0_dlg0[] = { /* 0x82523bc */
    DEBUGINFO_O(106),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s4_lives1_dlg0[] = { /* 0x82523ec */
    DEBUGINFO_O(112),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs201_g0_s5_obj0_dlg2[] = { /* 0x825241c */
    DEBUGINFO_O(118),
    JUMP_SCRIPT(WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs201_g0_s5_obj1_dlg2[] = { /* 0x825243c */
    DEBUGINFO_O(123),
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs201_g1_s0_station_sref_script[] = { /* 0x825245c */
    DEBUGINFO_O(128),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_MT_FREEZE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs201_g1_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs201_g1_s0_station_sref_script }; /* 0x825253c */

static const struct ScriptCommand s_gs201_g1_s0_lives0_dlg0[] = { /* 0x8252548 */
    DEBUGINFO_O(147),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000052,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000063,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:0e5bb71254290f306ff27b799ed06ba127bdc8550bcf5ebfaceaca23f796824b@@)),
    VARIANT(/* == */  1, (@@STRING:f21dbc962ff62b671a02fa9f387f98a6a33c9c6eaf974f4ca04d28c3b3fc84c6@@)),
    VARIANT(/* == */  1, (@@STRING:207c0bf40acbd0838cb40e472ea806dd76787d43e0285eb34f4bfca4dcab9fc6@@)),
    VARIANT_DEFAULT((@@STRING:2d2d3c39e07c73cc96fb3028f57013aee5da4338b4927a2615e98f3bac4eb2d1@@)),
    VARIANT_DEFAULT((@@STRING:f21dbc962ff62b671a02fa9f387f98a6a33c9c6eaf974f4ca04d28c3b3fc84c6@@)),
    VARIANT_DEFAULT((@@STRING:d8b78be10dd49fe37dc82a96f27d1389555ebf529cea25dd1fcdda3e7986205d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:82e46e11a5dffd2ad46e95ee4ac34ae011e4c40ef9967a77ddf69ca3c74561ad@@)),
    VARIANT_DEFAULT((@@STRING:33731473238778d55998534203e69b4c13a47ccea0331a4898e5ed327662da72@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cd0404266dd58974d44cc198379db51dd8d628e3124a7d5011d78b8274f0e760@@)),
    VARIANT_DEFAULT((@@STRING:2df0e2e326fc1eaa747f2a2b27118adc82ad63ae73a34e436a2762f39ead5e22@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000008),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1e58004d339b735116ad08e2aa87856d738dbffa20cf6b9804c70d1a71392775@@)),
    VARIANT(/* == */  1, (@@STRING:17b61af4ad36ce7d108264c525c2917cf39b5cf206997090ebb50b51c29a56ad@@)),
    VARIANT(/* == */  1, (@@STRING:cbf6ae2cededb568a1c18baac19821b38b2ae16567b6d82c20ce47e9480971bc@@)),
    VARIANT_DEFAULT((@@STRING:1e58004d339b735116ad08e2aa87856d738dbffa20cf6b9804c70d1a71392775@@)),
    VARIANT_DEFAULT((@@STRING:8f935ca0fbc2df426944b4526f1d36c1f57736cf9a622e2171f0e7484bcdc3e5@@)),
    VARIANT_DEFAULT((@@STRING:cbf6ae2cededb568a1c18baac19821b38b2ae16567b6d82c20ce47e9480971bc@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000001),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:dc84a71b34d5b66c34c295d85a5d117f91a47460196c0377ecfb827e94c01a2f@@)),
    VARIANT_DEFAULT((@@STRING:7447c5973fc69aaaed59add6fc0e9143e1a237c6f8f173669feeac4c88f582bf@@)),
    CHOICE(/* label */  2, (@@STRING:8c279b6d53d548819bf5ea68034fba7176a000d9ecc4e64c8c229113892a7dc6@@)),
    CHOICE(/* label */  2, (@@STRING:8c279b6d53d548819bf5ea68034fba7176a000d9ecc4e64c8c229113892a7dc6@@)),
  LABEL(2), /* = 0x02 */
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7a2f5194f4974132178cacbccf3c9cca4d421708a181f23869094bf7ac9e254c@@)),
    VARIANT(/* == */  1, (@@STRING:63e579ebf56918456df638e9ac20be7f071464fb48de6fa8bcd80243ca5f2037@@)),
    VARIANT(/* == */  1, (@@STRING:4064a22d117a0b5ab0ac1c42fbea2e74a0c092e2d369dba5ce0fc723c0b26321@@)),
    VARIANT(/* == */  1, (@@STRING:eceb08b779a4384942036beb1dbf8cc782f6a54bee203bcc6fb3bdec66c57dd2@@)),
    VARIANT(/* == */  1, (@@STRING:cc216d00737754d45efc0f3b4a16e4a159ffc1e2250795935f3dad3d32f855aa@@)),
    VARIANT_DEFAULT((@@STRING:a3e3d7bbead7643009527eac9be7b879de3f1570dcefeefa0a1e47439a867abd@@)),
    VARIANT_DEFAULT((@@STRING:225b39a3ae339dc35a5ada8657e90982b251527a08c2f5dece27461228c56e9b@@)),
    VARIANT_DEFAULT((@@STRING:637cce61535916721778a8d77ce82d69a6c7ca9ee8540f4ad9409b61888b1041@@)),
    VARIANT_DEFAULT((@@STRING:a80658ee73b2ed77dd257b477a64f051b45d53469d45643feac0d32b31c63e3e@@)),
    VARIANT_DEFAULT((@@STRING:5377b413ef2c96f3b2b33fd919e656d5be2165bf8932301b4365d134cc5e5df3@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000000),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:51a5296f8e576180035571883534b9800f23b21d755fdd1bafb532bf1b0ef9c2@@)),
    CHOICE(/* label */  4, (@@STRING:50692382c9c9bd7ee292b3dcd1c2133cc5981ed85d14249fb9693cb8ab0e7fa2@@)),
    CHOICE(/* label */  4, (@@STRING:4471a256694fe28e0e4c138c576cd59d90b73431772a985e4821a51babf2af1a@@)),
  LABEL(4), /* = 0x04 */
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:f51b2465e3462d6b35e12ebebde6a31c3a6cb8d5992abb271a614352a7ec001b@@)),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:306cd5b6aea8d4ea5e6c8e7a408d61704bae185d5df603030a3c476e64367f57@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:5ffc00aa37a62e1ef77c618993a1af990942e16eded46a0f0dd8af043ee1da74@@)),
    VARIANT(/* == */  1, (@@STRING:d08018b2951c8f79734c647df891366aa8ad0132e85f38d60fbdb10462ee8fa2@@)),
    VARIANT(/* == */  1, (@@STRING:6b8c663564fccb1b3f2ed0c6865558526c02a75bf305116798ea58ab35b35b0e@@)),
    VARIANT(/* == */  1, (@@STRING:e1eaefd94b46fda967d5a8e2628a1e039e7605c6e957245620e18f43abd9a656@@)),
    VARIANT(/* == */  1, (@@STRING:98c8525fb03705fc24dd131eb7e9ee4887bb0a4852e9d9230471577d98900adf@@)),
    VARIANT(/* == */  3, (@@STRING:fdcb93cda2fa0fbd9eac19a5c723133b5818dc9bf6f5c0b02bc0abaa271a2795@@)),
    VARIANT(/* == */  3, (@@STRING:fb68e10c8202f351458fc4b594343d7a79ce7379293632473a1d85fc5a90d6bd@@)),
    VARIANT(/* == */  3, (@@STRING:150e376ceb08bdba02702cd127831901ad11496ff8ab203fb677e597e541b432@@)),
    VARIANT(/* == */  3, (@@STRING:a23d2ae9cc89daf731080dbfe0fc3ab86b0319b6336131153b480b9242ad11fe@@)),
    VARIANT(/* == */  3, (@@STRING:7b85f2bf5ebf36c2b835e4f88e750e973aac44251c67a0c7d35b5e4bc33bafd6@@)),
    VARIANT_DEFAULT((@@STRING:3ec1a0c5ecae5286578d920b39d9cee0d6d9b387dcbdf1825c6a274c763eab7b@@)),
    VARIANT_DEFAULT((@@STRING:d08018b2951c8f79734c647df891366aa8ad0132e85f38d60fbdb10462ee8fa2@@)),
    VARIANT_DEFAULT((@@STRING:3817fc9126b60c212df9398df410b839d16ba22a504a98b23aa2fea20851c0cb@@)),
    VARIANT_DEFAULT((@@STRING:e1eaefd94b46fda967d5a8e2628a1e039e7605c6e957245620e18f43abd9a656@@)),
    VARIANT_DEFAULT((@@STRING:5e1c8cf8b5893e4ca9a15c675ce8a23664c15390510b424e69a87ddb8b6e5813@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8f0bec7813bc9856eb06d521c2dd32d2f19d89fadf7cf72faf677a0943babe2c@@)),
    VARIANT(/* == */  3, (@@STRING:46664d7602e634cace78b4b46b24faa599b6863dc4db1c1552bfdb591be07a51@@)),
    VARIANT_DEFAULT((@@STRING:296e3be85a86d13511c6dac1bebdc589947d9655c910e705ea54727b2ca4b1bc@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:ab8fdc562e19c209a243a53d58c09bba339080d677e315d205c2686e02944fa2@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT_DEFAULT((@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(5),
    ALERT_CUE(3),
    RET,
};





static const struct ScriptCommand s_gs201_g1_s0_lives1_dlg0[] = { /* 0x825366c */
    DEBUGINFO_O(264),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(100),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs201_g2_s0_station_sref_script[] = { /* 0x825380c */
    DEBUGINFO_O(293),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs201_g2_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs201_g2_s0_station_sref_script }; /* 0x825383c */

static const struct ScriptCommand s_gs201_g2_s0_lives0_dlg2[] = { /* 0x8253848 */
    DEBUGINFO_O(301),
    EXECUTE_STATION(-1, 2, 1),
    HALT,
};

static const struct ScriptCommand s_gs201_g2_s0_evt0_sref_script[] = { /* 0x8253878 */
    DEBUGINFO_O(307),
    EXECUTE_STATION(-1, 2, 1),
    HALT,
};

static const ScriptRef s_gs201_g2_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs201_g2_s0_evt0_sref_script }; /* 0x82538a8 */

static const struct ScriptCommand s_gs201_g2_s1_station_sref_script[] = { /* 0x82538b4 */
    DEBUGINFO_O(315),
    SELECT_ENTITIES(-1, 1),
    CANCEL_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs201_g2_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs201_g2_s1_station_sref_script }; /* 0x8253904 */

static const struct ScriptCommand s_gs201_g2_s1_lives0_dlg0[] = { /* 0x8253910 */
    DEBUGINFO_O(325),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 34),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:c2ad13edc1009996f13e0b3d4f99176013ecf5ad38c9e86a650af3cc16a6546f@@)),
    VARIANT_DEFAULT((@@STRING:79c695b478f844e325d4857301c3dd2c944f3fb172f6b1eea8147f21e7d26902@@)),
    CHOICE(/* label */  2, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  3, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(3), /* = 0x03 */
    MSG_NPC(1, (@@STRING:470097e822020ba612fdcd39c40fdb8eec912781ffb39124913dd00e19d73000@@)),
    MSG_NPC(1, (@@STRING:a2aaa100c12e7d82b85c8d3d372c2d13f1d21ad24702e0119ea239eb3270afbc@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:bcf356f5a7696307ee3b805a0d1a4ea0e77ce42a00b11590639de66ea9b3615a@@)),
    CHOICE(/* label */  5, (@@STRING:e498c0f58d96ecd2a196087ce613d9861d8c0abace203b4017452ff18fe06e2b@@)),
    CHOICE(/* label */  6, (@@STRING:9f6f5c2fea4809356086e1f9db2350c7df71f43501a4ada68922f7a35255ab9d@@)),
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:591e96de3e69d1329a03ab5b166489a25c541f83ece2a63055beef0c7509830b@@)),
    VARIANT(/* == */  1, (@@STRING:ad875a50dbf932493da7d68b30cffc6dd94741088be9b858daacfce54e734117@@)),
    VARIANT_DEFAULT((@@STRING:7c39483eae4a63212bd8a31cd22d4be15c276a4f879d48c14ba632650633c103@@)),
    VARIANT_DEFAULT((@@STRING:6b3979daf80e416a843d79fdbf8670a269ba4c5a3da86cf2524252855f64210d@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 7),
    COND_EQUAL(3, /* to label */ 7),
    COND_EQUAL(5, /* to label */ 7),
    COND_EQUAL(2, /* to label */ 7),
    ALERT_CUE(6),
    BGM_FADEOUT(120),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 0),
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    ALERT_CUE(6),
    BGM_FADEOUT(120),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 0),
  LABEL(8), /* = 0x08 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000f,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 3),
    HALT,
  LABEL(6), /* = 0x06 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6762f5b63e3e993a354138e2b7f2117df219c3248138ffd706132cb569130cec@@)),
    VARIANT_DEFAULT((@@STRING:5e98fb9ab0c88df5015c394f6e8afee01fe9dd35b6fdcdc0c654529ab1ac2e37@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 9),
    COND_EQUAL(3, /* to label */ 9),
    COND_EQUAL(5, /* to label */ 9),
    COND_EQUAL(2, /* to label */ 9),
    ALERT_CUE(6),
    BGM_FADEOUT(120),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 0),
    JUMP_LABEL(10),
  LABEL(9), /* = 0x09 */
    ALERT_CUE(6),
    BGM_FADEOUT(120),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 0),
  LABEL(10), /* = 0x0a */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004f,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 3),
    HALT,
};




static const struct ScriptCommand s_gs201_g2_s1_lives1_dlg0[] = { /* 0x8253f50 */
    DEBUGINFO_O(410),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    CJUMP_UNK_C8(0),
    COND_EQUAL(0, /* to label */ 0),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(7, /* to label */ 0),
    COND_EQUAL(6, /* to label */ 0),
    WAIT(15),
    SELECT_ANIMATION(5),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    SELECT_ANIMATION(5),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs201_g3_s0_station_sref_script[] = { /* 0x82540c0 */
    DEBUGINFO_O(436),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_MT_FREEZE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs201_g3_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs201_g3_s0_station_sref_script }; /* 0x82541a0 */

static const struct ScriptCommand s_gs201_g3_s0_lives0_dlg0[] = { /* 0x82541ac */
    DEBUGINFO_O(455),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cd28d26b194500813688202083d93767af0366c211c9ff20e9c0fd6617b42005@@)),
    VARIANT_DEFAULT((@@STRING:4d890c96df5b138d2bd16596ef7c60e8f739c56e6008c33fc26dd95314e29e0d@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:656358418ef32e8a59ccaf2e6348710006a9a408eed0af03437e4f7a46277675@@)),
    VARIANT(/* == */  1, (@@STRING:ee4d6fdf9783376e82f82126e0b1b5dd40fe8619849415ae34ec932939cc1d20@@)),
    VARIANT_DEFAULT((@@STRING:421d806a5c670ab6783e2d14514329119ff05254581ab19d6609dd3d807a8164@@)),
    VARIANT_DEFAULT((@@STRING:5cb3d4e245333cfff259d9a40fad1290c418b811e96859d24f2683f6b7de5d42@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};


static const struct ScriptCommand s_gs201_g3_s0_lives1_dlg0[] = { /* 0x8254430 */
    DEBUGINFO_O(483),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs201_g4_s0_station_sref_script[] = { /* 0x8254500 */
    DEBUGINFO_O(499),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_MT_FREEZE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs201_g4_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs201_g4_s0_station_sref_script }; /* 0x82545e0 */

static const struct ScriptCommand s_gs201_g4_s0_lives0_dlg0[] = { /* 0x82545ec */
    DEBUGINFO_O(518),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x30,  0x0080,  0x00000007,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(20),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:46a0ff58b2242ff55c03f10b531a4610533a42b1512b905856c816a4ab22a36c@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:433205aed35d14a113e66071129bc1742569b168a42b914699e7d05096762e9c@@)),
    VARIANT(/* == */  1, (@@STRING:8c5951d87b7f2089133d50f948c7e5151d04fb79e130f74deae9c07feb5395e9@@)),
    VARIANT(/* == */  1, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT_DEFAULT((@@STRING:9b78c7df29ee9ff76326fb54bfc90851cd05ca97a3d5f7ad865594de1736611a@@)),
    VARIANT_DEFAULT((@@STRING:1000e0521f54ede28ffccc7d0224ae6d52eff73262e42cdf77a375e1b0bf85ba@@)),
    VARIANT_DEFAULT((@@STRING:1ef0c04a124afa4101764c6d86501a95d22f828c428365c1b872865a37d72c27@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs201_g4_s0_lives1_dlg0[] = { /* 0x825492c */
    DEBUGINFO_O(552),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x20,  0x0080,  0x00000007,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs201_g5_s0_station_sref_script[] = { /* 0x8254a0c */
    DEBUGINFO_O(569),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_MT_FREEZE_ENTRY),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    { 0x3b, 0x1c,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_MT_FREEZE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs201_g5_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs201_g5_s0_station_sref_script }; /* 0x8254aec */

static const struct ScriptCommand s_gs201_g5_s0_lives0_dlg0[] = { /* 0x8254af8 */
    DEBUGINFO_O(588),
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
    VARIANT_DEFAULT((@@STRING:c02886dd921fe9942694322673bdc0132d983c327eaef8f860548a3ab83fd2fe@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e9f856db848c1b9e688b2190cbbfd3b6b9ee7bb05ade66962d28bcaf6e1570e2@@)),
    VARIANT_DEFAULT((@@STRING:3983b41e8af815f0c1ffc09a4084d1f00cef86b0f74b5c5f7f55c3dfc1180b15@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs201_g5_s0_lives1_dlg0[] = { /* 0x8254d64 */
    DEBUGINFO_O(615),
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

static const struct ScriptCommand s_gs201_g6_s0_station_sref_script[] = { /* 0x8254e34 */
    DEBUGINFO_O(631),
    SELECT_MAP(MAP_MT_FREEZE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_FREEZE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs201_g6_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs201_g6_s0_station_sref_script }; /* 0x8254ea4 */

static const struct ScriptCommand s_gs201_g6_s0_eff0_script[] = { /* 0x8254eb0 */
    DEBUGINFO_O(643),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    WAIT(30),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs201_g6_s0_lives0_dlg0[] = { /* 0x8254f30 */
    DEBUGINFO_O(654),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(7),
    { 0x89, 0x40,  0x0080,  0x00000003,  0x00000000, NULL },
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    MSG_NPC(2, (@@STRING:08c1d5da168b23569f470b5f2b9d36f168ec542830f1d752881d19ac3cb1c150@@)),
    MSG_NPC(2, (@@STRING:191edb9f03200dbe0b60c904e256d71520d0f84b221266662bbb53c8bfd1d162@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(7),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(128, 0),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs201_g6_s0_lives1_dlg0[] = { /* 0x825508c */
    DEBUGINFO_O(674),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    CAMERA_PAN(256, 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WAIT(15),
    WALK_GRID(128, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs201_g0_s0_lives[] = { /* 0x825514c */
    /*  0 */ { 144,   0,   0,   0, {  10,  18, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs201_g0_s1_lives[] = { /* 0x8255164 */
    /*  0 */ {   0,   4,   0,   0, {  16,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s2_lives[] = { /* 0x8255194 */
    /*  0 */ {   0,   0,   0,   0, {  27,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  27,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s3_lives[] = { /* 0x82551c4 */
    /*  0 */ {   0,   4,   0,   0, {  16,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s4_lives[] = { /* 0x82551f4 */
    /*  0 */ {   0,   4,   0,   0, {  16,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g0_s5_lives[] = { /* 0x8255224 */
    /*  0 */ { 144,   0,   0,   0, {  10,  18, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {  25,  30, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs201_g1_s0_lives[] = { /* 0x8255254 */
    /*  0 */ {   0,   6,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g2_s0_lives[] = { /* 0x8255284 */
    /*  0 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [2] = s_gs201_g2_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs201_g2_s1_lives[] = { /* 0x825529c */
    /*  0 */ {   0,   0,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g2_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g2_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g3_s0_lives[] = { /* 0x82552cc */
    /*  0 */ {   0,   0,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g3_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g4_s0_lives[] = { /* 0x82552fc */
    /*  0 */ {   0,   0,   0,   0, {  24,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  18,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g5_s0_lives[] = { /* 0x825532c */
    /*  0 */ {   0,   0,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  16,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs201_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs201_g6_s0_lives[] = { /* 0x825535c */
    /*  0 */ {   0,   4,   0,   0, {  21,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g6_s0_lives0_dlg0,
    } },
    /*  1 */ {  91,   4,   0,   0, {  16,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs201_g6_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs201_g0_s0_objs[] = { /* 0x825538c */
    /*  0 */ {   4,   0,   5,   2, {  10,  19, CPOS_HALFTILE, 0 }, {
        [2] = s_gs201_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs201_g0_s5_objs[] = { /* 0x82553a4 */
    /*  0 */ {   4,   0,   5,   2, {  10,  19, CPOS_HALFTILE, 0 }, {
        [2] = s_gs201_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {  25,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs201_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs201_g1_s0_effs[] = { /* 0x82553d4 */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g3_s0_effs[] = { /* 0x82553e0 */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g4_s0_effs[] = { /* 0x82553ec */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g5_s0_effs[] = { /* 0x82553f8 */
    /*  0 */ {   0,   0,   1,   1, {  19,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs201_g6_s0_effs[] = { /* 0x8255404 */
    /*  0 */ {   0,   0,   1,   1, {  22,  23, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs201_g6_s0_eff0_script },
};

static const struct GroundEventData s_gs201_g2_s0_evts[] = { /* 0x8255410 */
    /*  0 */ {   3,   3,   0,   0, {  26,  17, 0, 0 }, &s_gs201_g2_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x825541c */
    &s_gs201_g0_s0_station_sref,
    &s_gs201_g1_s0_station_sref,
    &s_gs201_g2_s0_station_sref,
    &s_gs201_g2_s1_station_sref,
    &s_gs201_g3_s0_station_sref,
    &s_gs201_g4_s0_station_sref,
    &s_gs201_g5_s0_station_sref,
    &s_gs201_g6_s0_station_sref,
};

static const struct GroundScriptSector s_gs201_g0_sectors[] = { /* 0x825543c */
    { LPARRAY(s_gs201_g0_s0_lives), LPARRAY(s_gs201_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs201_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs201_g0_s5_lives), LPARRAY(s_gs201_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs201_g1_sectors[] = { /* 0x825552c */
    { LPARRAY(s_gs201_g1_s0_lives), 0,NULL, LPARRAY(s_gs201_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs201_g2_sectors[] = { /* 0x8255554 */
    { LPARRAY(s_gs201_g2_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs201_g2_s0_evts), 1,&sStationScripts[2], },
    { LPARRAY(s_gs201_g2_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs201_g3_sectors[] = { /* 0x82555a4 */
    { LPARRAY(s_gs201_g3_s0_lives), 0,NULL, LPARRAY(s_gs201_g3_s0_effs), 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs201_g4_sectors[] = { /* 0x82555cc */
    { LPARRAY(s_gs201_g4_s0_lives), 0,NULL, LPARRAY(s_gs201_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs201_g5_sectors[] = { /* 0x82555f4 */
    { LPARRAY(s_gs201_g5_s0_lives), 0,NULL, LPARRAY(s_gs201_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptSector s_gs201_g6_sectors[] = { /* 0x825561c */
    { LPARRAY(s_gs201_g6_s0_lives), 0,NULL, LPARRAY(s_gs201_g6_s0_effs), 0,NULL, 1,&sStationScripts[7], },
};

static const struct GroundScriptGroup s_gs201_groups[] = { /* 0x8255644 */
    { LPARRAY(s_gs201_g0_sectors) },
    { LPARRAY(s_gs201_g1_sectors) },
    { LPARRAY(s_gs201_g2_sectors) },
    { LPARRAY(s_gs201_g3_sectors) },
    { LPARRAY(s_gs201_g4_sectors) },
    { LPARRAY(s_gs201_g5_sectors) },
    { LPARRAY(s_gs201_g6_sectors) },
};

static const struct GroundLink s_gs201_links[] = { /* 0x825567c */
    /* link   0 */ { { /*x*/  27, /*y*/  19, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  23, /*y*/  25, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs201 = { LPARRAY(s_gs201_groups), s_gs201_links }; /* 0x825568c */
