



























static const struct ScriptCommand s_gs4_g0_s0_station_sref_script[] = { /* 0x8189968 */
    DEBUGINFO_O(30),
    SELECT_MAP(4),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_LT, 4, /* to label */ 0),
    COND(JUDGE_EQ, 4, /* to label */ 1),
    COND(JUDGE_EQ, 5, /* to label */ 2),
    COND(JUDGE_EQ, 6, /* to label */ 3),
    COND(JUDGE_EQ, 7, /* to label */ 4),
    COND(JUDGE_EQ, 8, /* to label */ 5),
    COND(JUDGE_EQ, 9, /* to label */ 6),
    COND(JUDGE_LT, 15, /* to label */ 7),
    COND(JUDGE_EQ, 15, /* to label */ 8),
    COND(JUDGE_EQ, 16, /* to label */ 9),
    COND(JUDGE_LT, 18, /* to label */ 10),
    COND(JUDGE_EQ, 18, /* to label */ 11),
    JUMP_LABEL(12),
  LABEL(1), /* = 0x01 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 3, /* to label */ 13),
    JUMP_LABEL(14),
  LABEL(13), /* = 0x0d */
    JUMP_SCRIPT(EVENT_M01E02B_L003),
  LABEL(14), /* = 0x0e */
    CALL_STATION( 13,  0),
    JUMP_LABEL(0),
  LABEL(2), /* = 0x02 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 15),
    COND(JUDGE_LE, 4, /* to label */ 16),
    SELECT_ENTITIES(15, 0),
    JUMP_LABEL(0),
  LABEL(15), /* = 0x0f */
    CALL_STATION( 13,  0),
    JUMP_LABEL(0),
  LABEL(16), /* = 0x10 */
    SELECT_ENTITIES(14, 0),
    JUMP_LABEL(0),
  LABEL(3), /* = 0x03 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 17),
    CALL_STATION( 16,  0),
    JUMP_LABEL(0),
  LABEL(17), /* = 0x11 */
    CALL_STATION( 15,  0),
    JUMP_LABEL(0),
  LABEL(4), /* = 0x04 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 18),
    CALL_STATION( 17,  0),
    JUMP_LABEL(0),
  LABEL(18), /* = 0x12 */
    CALL_STATION( 16,  0),
    JUMP_LABEL(0),
  LABEL(5), /* = 0x05 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 19),
    CALL_STATION( 18,  0),
    JUMP_LABEL(0),
  LABEL(19), /* = 0x13 */
    CALL_STATION( 17,  0),
    JUMP_LABEL(0),
  LABEL(6), /* = 0x06 */
    CALL_STATION( 18,  0),
    JUMP_LABEL(0),
  LABEL(7), /* = 0x07 */
    JUMP_LABEL(0),
  LABEL(8), /* = 0x08 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 3, /* to label */ 20),
    COND(JUDGE_LE, 5, /* to label */ 21),
    COND(JUDGE_LE, 7, /* to label */ 22),
    COND(JUDGE_LE, 11, /* to label */ 23),
    JUMP_LABEL(24),
  LABEL(20), /* = 0x14 */
    CALL_STATION( 19,  0),
    JUMP_LABEL(0),
  LABEL(21), /* = 0x15 */
    CALL_STATION( 20,  0),
    JUMP_LABEL(0),
  LABEL(22), /* = 0x16 */
    CALL_STATION( 21,  0),
    JUMP_LABEL(0),
  LABEL(23), /* = 0x17 */
    CALL_STATION( 22,  0),
    JUMP_LABEL(0),
  LABEL(24), /* = 0x18 */
    CALL_STATION( 23,  0),
    JUMP_LABEL(0),
  LABEL(9), /* = 0x09 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 25),
    COND(JUDGE_LE, 4, /* to label */ 26),
    JUMP_LABEL(27),
  LABEL(25), /* = 0x19 */
    CALL_STATION( 24,  0),
    JUMP_LABEL(0),
  LABEL(26), /* = 0x1a */
    CALL_STATION( 25,  0),
    JUMP_LABEL(0),
  LABEL(27), /* = 0x1b */
    CALL_STATION( 26,  0),
    JUMP_LABEL(0),
  LABEL(10), /* = 0x0a */
    CALL_STATION( 26,  0),
    JUMP_LABEL(0),
  LABEL(11), /* = 0x0b */
    CALL_STATION( 28,  0),
    JUMP_LABEL(0),
  LABEL(12), /* = 0x0c */
    CALL_STATION(  1,  0),
    JUMP_LABEL(0),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(1, /* to label */ 28),
    COND_EQUAL(5, /* to label */ 29),
    SELECT_LIVES(0, 4),
    JUMP_LABEL(31),
  LABEL(28), /* = 0x1c */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(31),
  LABEL(29), /* = 0x1d */
    SELECT_LIVES(0, 2),
    JUMP_LABEL(31),
  LABEL(31), /* = 0x1f */
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs4_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs4_g0_s0_station_sref_script }; /* 0x818a174 */


static const struct ScriptCommand s_gs4_g0_s0_evt0_sref_script[] = { /* 0x818a180 */
    DEBUGINFO_O(162),
    { 0x01, 0x00, -0x0001,  0x00000001,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs4_g0_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs4_g0_s0_evt0_sref_script }; /* 0x818a1b0 */

static const struct ScriptCommand s_gs4_g0_s0_evt1_sref_script[] = { /* 0x818a1bc */
    DEBUGINFO_O(170),
    { 0x01, 0x00, -0x0001,  0x00000005,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs4_g0_s0_evt1_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs4_g0_s0_evt1_sref_script }; /* 0x818a1ec */

static const struct ScriptCommand s_gs4_g0_s0_obj0_dlg2[] = { /* 0x818a1f8 */
    DEBUGINFO_O(178),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CMD_UNK_AF(RESCUE_DUNGEON_DUMMY, TRUE),
    SPECIAL_TEXT(SPECIAL_TEXT_BULLETIN_BOARD_JOBS, 0, 0),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
    COND_EQUAL(3, /* to label */ 2),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S01E01A_L002),
    HALT,
  LABEL(1), /* = 0x01 */
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S01E02A_L001),
    HALT,
  LABEL(2), /* = 0x02 */
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S08E01A_L005B),
    HALT,
};

static const struct ScriptCommand s_gs4_g0_s0_lives0_dlg0[] = { /* 0x818a358 */
    DEBUGINFO_O(203),
    JUMPIF_EQUAL(SCENARIO_MAIN, 11, /* to label */ 0),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    { 0x60, 0x00,  0x0000,  0x00000018,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000018,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_WEST),
    WALK_DIRECT(300, 1),
    WALK_DIRECT(300, 0),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    WAIT(15),
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    WAIT(300),
    JUMP_LABEL(1),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    RET,
  LABEL(0), /* = 0x00 */
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g0_s0_lives1_dlg0[] = { /* 0x818a4f8 */
    DEBUGINFO_O(232),
    JUMPIF_EQUAL(SCENARIO_MAIN, 11, /* to label */ 0),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    { 0x60, 0x00,  0x0000,  0x00000018,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    WAIT(90),
    WALK_DIRECT(300, 2),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    WAIT(15),
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    WAIT(300),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000018,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_EAST),
    WALK_DIRECT(300, 3),
    JUMP_LABEL(1),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    RET,
  LABEL(0), /* = 0x00 */
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g0_s1_lives0_dlg0[] = { /* 0x818a6a8 */
    DEBUGINFO_O(262),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g0_s1_lives1_dlg0[] = { /* 0x818a6e8 */
    DEBUGINFO_O(269),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g0_s2_lives0_dlg0[] = { /* 0x818a728 */
    DEBUGINFO_O(276),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g0_s2_lives1_dlg0[] = { /* 0x818a768 */
    DEBUGINFO_O(283),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g0_s3_lives0_dlg0[] = { /* 0x818a7a8 */
    DEBUGINFO_O(290),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g0_s3_lives1_dlg0[] = { /* 0x818a7e8 */
    DEBUGINFO_O(297),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g0_s4_lives0_dlg0[] = { /* 0x818a828 */
    DEBUGINFO_O(304),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g0_s4_lives1_dlg0[] = { /* 0x818a868 */
    DEBUGINFO_O(311),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs4_g1_s0_station_sref_script[] = { /* 0x818a8a8 */
    DEBUGINFO_O(318),
    SELECT_ENTITIES(-1, 0),
    JUMPIF_ARRAY(EVENT_T01P03, 1, /* to label */ 0),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    SELECT_ENTITIES(-1, 2),
  LABEL(1), /* = 0x01 */
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g1_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g1_s0_station_sref_script }; /* 0x818a938 */

static const struct ScriptCommand s_gs4_g1_s0_lives0_dlg2[] = { /* 0x818a944 */
    DEBUGINFO_O(332),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g1_s0_lives1_dlg2[] = { /* 0x818a974 */
    DEBUGINFO_O(338),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:67b34de36f93101615ee072f44080395707b6f99c889a625423d8c754d9be413@@)),
    MSG_NPC(1, (@@STRING:2af1e8ae0fdf6f0cd8f376923a664d8197785ceb2452c593492014fcd2667f13@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g1_s0_lives2_dlg2[] = { /* 0x818aa20 */
    DEBUGINFO_O(348),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:20c359fd6f54e9e174f19ed2b9d961523da55e1317f970b5fcfe80acb21d59ea@@)),
    MSG_NPC(1, (@@STRING:39eb0eb323ec5b270ed00396a5618743bfdb442c5871eef89bc33ef0f9accbf1@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g1_s0_lives3_dlg2[] = { /* 0x818ab0c */
    DEBUGINFO_O(358),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_UNK_BD(118, /* to label */ 0), /* likely "is friend area unlocked" (by GroundEnter id) */
    MSG_NPC(1, (@@STRING:56219202772a7b186ee39cf05e4e916e6e4191fdd9ef67a3914d7f2cd82265d3@@)),
    MSG_NPC(1, (@@STRING:d5915ca90f0386ee5254d0e1475ef7461d07335c092d29f278819f4e297a6cdb@@)),
    MSG_NPC(1, (@@STRING:d42755f41dc03f7833c4c9f96bdcb4962f9a10b8156fba0a31c2b78e307ca31b@@)),
    MSG_NPC(1, (@@STRING:389983a0ca20098279453d3d94b8c674ba3ead2c704855658f52332bdaeee2f3@@)),
    MSG_NPC(1, (@@STRING:675cb110a0db0e41dca400c24248e354719ed3225c427a446b7ab0f0b1658708@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    MSG_NPC(1, (@@STRING:327f169e988b399c35beaed3fa3d4cc63975fb435459445a088c697a4f084a22@@)),
    MSG_NPC(1, (@@STRING:d3a292af6895d19bd9c894a980df238e2109c224be8e709268bcf9509b7de9e1@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g1_s0_lives4_dlg0[] = { /* 0x818ae1c */
    DEBUGINFO_O(376),
    JUMPIF_SCENE_LT(SCENARIO_SUB7, 49, 2, /* to label */ 0),
    JUMPIF_SCENE_GT(SCENARIO_SUB7, 49, -1, /* to label */ 0),
    JUMPIF_SCENE_LT(SCENARIO_SUB7, 49, 4, /* to label */ 1),
    JUMPIF_SUM(JUDGE_LT, EVENT_S07E01, 11, /* to label */ 1),
  LABEL(0), /* = 0x00 */
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
  LABEL(1), /* = 0x01 */
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g1_s0_lives4_dlg2[] = { /* 0x818aecc */
    DEBUGINFO_O(390),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_T01P03, 2, /* to label */ 0),
    { 0x3b, 0x35,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 1),
    COND_EQUAL(2, /* to label */ 2),
    MSG_NPC(1, (@@STRING:e7818d5fbdd0db77fb6913bbeae6d5ba3db19051aed977cc86d61257c3c8ed4f@@)),
    MSG_NPC(1, (@@STRING:ae5481c6810e81863e481427d7a359dd986ca018153e3ca14d4730d889d35b4a@@)),
    MSG_NPC(1, (@@STRING:6e64b7f1632342f143fd9c2741c4d4d8de9323b5351c0c1fbc52ad981a39c383@@)),
    MSG_NPC(1, (@@STRING:e7099eada13b6b0325bfcfc954e1a038c06f893bda8465e9d50cc15f7f78dadc@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    MSG_NPC(1, (@@STRING:b1206a185db124cf13217cd580da75c89541627034b7ac2b4ea26f84e5c21710@@)),
    MSG_NPC(1, (@@STRING:a47bd34bada2818c6928cf7b6eb97a6b447ef1cbd997e1f3320dbe2035e6500b@@)),
    MSG_NPC(1, (@@STRING:9b34143ac645b205bc4a1b320ed16833af83441d23f15e323f0b64c56ecb46b6@@)),
    MSG_NPC(1, (@@STRING:b3ebcc909aa5f5d4e705cc96a16706e26952bf4f08063c32707b3e389e482c01@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    MSG_NPC(1, (@@STRING:e7818d5fbdd0db77fb6913bbeae6d5ba3db19051aed977cc86d61257c3c8ed4f@@)),
    MSG_NPC(1, (@@STRING:ae5481c6810e81863e481427d7a359dd986ca018153e3ca14d4730d889d35b4a@@)),
    MSG_NPC(1, (@@STRING:6e64b7f1632342f143fd9c2741c4d4d8de9323b5351c0c1fbc52ad981a39c383@@)),
    MSG_NPC(1, (@@STRING:19e9eb3affd929426d673b942842b92808433c7649991b3e8864435271265c47@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:f7a9c95fec5345edde4a1afeac8b477f2433e2ceb5f986bdb47405fe2f9409ab@@)),
    MSG_NPC(1, (@@STRING:0db0dcee88b54488c363ceb1ffbb99743f6dd59640c73a4aa5c9875e7e374448@@)),
    MSG_NPC(1, (@@STRING:eb8be6f4855d3cbc4056f16fb0f2c950a3832ba8328e14117bf94d53429f2248@@)),
    SET_ARRAYVAL(EVENT_T01P03,  2,  1),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    MSG_NPC(1, (@@STRING:851da555acbfc44e21dee8938ecb4f0b2f7b48ac283900c28c6658455fb5bb3e@@)),
    MSG_NPC(1, (@@STRING:5462780335e0a9c735537e81b148d06c348e78582f244fecb69065e0a3a7bffe@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g1_s0_lives4_dlg3[] = { /* 0x818b4d4 */
    DEBUGINFO_O(429),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    JUMPIF_ARRAY(EVENT_T01P03, 2, /* to label */ 1),
    { 0x3b, 0x35,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 1),
    COND_EQUAL(2, /* to label */ 2),
  LABEL(1), /* = 0x01 */
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(2),
    WAIT(12),
    RET,
  LABEL(2), /* = 0x02 */
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(2),
    WAIT(12),
    RET,
};


static const struct ScriptCommand s_gs4_g1_s1_station_sref_script[] = { /* 0x818b624 */
    DEBUGINFO_O(454),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 2),
    RET,
};

static const ScriptRef s_gs4_g1_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g1_s1_station_sref_script }; /* 0x818b674 */

static const struct ScriptCommand s_gs4_g1_s1_eff0_script[] = { /* 0x818b680 */
    DEBUGINFO_O(464),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(256, 4),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g1_s1_lives0_dlg0[] = { /* 0x818b710 */
    DEBUGINFO_O(476),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(3, (@@STRING:ade659e53544f615d50df34878a52b6ab7d79624c26ab162138dc8ee94604441@@)),
    MSG_NPC(-1, (@@STRING:36ca5d00526ef9e8c0797d42e7d61dd24776fefefa4a45ed81ca2c669dd3e1fb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(465),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:72aa84d6719bbfc06ec2758a78fc1755ed50c91fe0a8be66fb5ab2866200d145@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    FANFARE_PLAY2(453),
    { 0x97, 0x00,  0x0002,  0x00000003,  0x00000002, NULL },
    WAIT(120),
    FANFARE_STOP2(453),
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:fd0fe36be119eb0512da74ef08cabae4f7fb51c994fa26a7705fa902d7e538f6@@)),
    TEXTBOX_CLEAR,
    TEXTBOX_AUTO_PRESS(0, 0),
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(30),
    TEXTBOX_AUTO_PRESS(-1, -1),
    ALERT_CUE(8),
    MSG_NPC(3, (@@STRING:001b616764f3044bb14706f8f08a702f4dacf6e6b097f9e1d2b21c24ded4dda7@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    WAIT(10),
    MSG_NPC(2, (@@STRING:669b2fc0967b0f4ec59c741e67b7fd69219eed29ca3b4717d62efbdfe24cee74@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:819cd94a203066854a0c73855557f2f05dea1ed749903792fbf6ab22e38b1220@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:ecedbae14c9ff017397121b56d8a8a55c4f17b6ceef55765fc5ff071167cfeab@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:f31d87b01f596a5c66305cb254d800820a2119677a658da9983b4652dc86bc3a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:d3d06395c86741f4154e0828c26233690659be221d1aa53d0aeead11cad4fe38@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:a04e86bb9ed1312d889a03d1ec48ee932853f6dd4e731366ce095b3eeb5d195f@@)),
    MSG_NPC(2, (@@STRING:26397cb9f887c6c3245e1387ff553509ea09f413790c976aa842b6dd4c68405b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:b5a226bb597d0ea41132c22bdf4042dc648e27b50fdce147eac2712da73df9ed@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    SET_ARRAYVAL(EVENT_T01P03,  1,  1),
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs4_g1_s1_lives1_dlg0[] = { /* 0x818bfec */
    DEBUGINFO_O(586),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g1_s1_lives2_dlg0[] = { /* 0x818c05c */
    DEBUGINFO_O(596),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x54, 0x00,  0x0400,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    WARP_WAYPOINT(0, 5),
    SET_DIR_WAIT(DIRECTION_SOUTH, 0),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WARP_WAYPOINT(0, 6),
    SET_DIR_WAIT(DIRECTION_NORTH, 0),
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WARP_WAYPOINT(0, 7),
    SET_DIR_WAIT(DIRECTION_WEST, 0),
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WARP_WAYPOINT(0, 8),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WARP_WAYPOINT(0, 9),
    SET_DIR_WAIT(DIRECTION_NORTH, 0),
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(4),
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs4_g1_s1_lives3_dlg0[] = { /* 0x818c4dc */
    DEBUGINFO_O(671),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    SELECT_ANIMATION(4),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs4_g1_s2_station_sref_script[] = { /* 0x818c72c */
    DEBUGINFO_O(711),
    SELECT_ENTITIES(-1, 2),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g1_s2_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g1_s2_station_sref_script }; /* 0x818c75c */

static const struct ScriptCommand s_gs4_g1_s2_lives0_dlg2[] = { /* 0x818c768 */
    DEBUGINFO_O(719),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:00b6f6a0f64c8c82cfdadcaa52c12bec486cf8fd3349ce0c269ec03345f396b0@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g1_s2_lives1_dlg2[] = { /* 0x818c7f0 */
    DEBUGINFO_O(727),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6ce782c8e2fc0e60628aa8f889d297e47018f697ffef4f1a4ffbd9727f6d908b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g2_s0_station_sref_script[] = { /* 0x818c858 */
    DEBUGINFO_O(735),
    JUMPIF_EQUAL(WARP_LOCK, 0, /* to label */ 0),
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 53, 1, /* to label */ 1),
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 53, 2, /* to label */ 2),
    JUMPIF_SCENE_EQ(SCENARIO_SUB8, 51, 7, /* to label */ 3),
    JUMPIF_SCENE_EQ(SCENARIO_SUB8, 51, 8, /* to label */ 3),
    RET_DIRECT,
  LABEL(3), /* = 0x03 */
    SELECT_ENTITIES(6, 0),
    RET_DIRECT,
  LABEL(1), /* = 0x01 */
    SELECT_ENTITIES(8, 0),
    RET_DIRECT,
  LABEL(2), /* = 0x02 */
    SELECT_ENTITIES(10, 0),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g2_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g2_s0_station_sref_script }; /* 0x818c978 */

static const struct ScriptCommand s_gs4_g3_s0_station_sref_script[] = { /* 0x818c984 */
    DEBUGINFO_O(758),
    SELECT_MAP(4),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs4_g3_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs4_g3_s0_station_sref_script }; /* 0x818ca04 */

static const struct ScriptCommand s_gs4_g3_s0_eff0_script[] = { /* 0x818ca10 */
    DEBUGINFO_O(771),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    WAIT(30),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g3_s0_lives0_dlg0[] = { /* 0x818ca80 */
    DEBUGINFO_O(781),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000000),
    MSG_NPC(1, (@@STRING:b11f9f7f6774f934c4601bf463aee9cb79fcad2524f95c60f2ed36c96339f9ac@@)),
    MSG_NPC(1, (@@STRING:ee64f6a2f83719589d6ccb818b5a5629fd5609bda67dbad424b5d6a05e4c9530@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:35a97cbfa999bd452dac1484dc75ae043c67425423509c237dc48e4943355932@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(6),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ALERT_CUE(6),
    MSG_NPC(2, (@@STRING:04b2c8435d47e56d3d50c5f4a8fe6aa0f6305d5ab3a5c26df00e36a2ee549905@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(6),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:626f20f4d284989400d68900ea9fdf139b4a25282da141c4bcba362b79ed6a7d@@)),
    MSG_NPC(2, (@@STRING:dc65844bed5452245600f03298e1136b84216802c87ca53fa54b03b14ce71c28@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(6),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:75002a47f0e2e8352cad3c237b9e938171e2856f974c88f1801c508fbe9af05d@@)),
    VARIANT_DEFAULT((@@STRING:b7d0979728005902b9e0ed68a90724035a462d90e3beaaf1066e307c26e92ce5@@)),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:951e410b8a087ad57e9be9dec0cd39fca7f1f9e6b437fb0b33f3ea0cd4af5cfb@@)),
    VARIANT_DEFAULT((@@STRING:4e18f990d34d15f0ea1c613403cddca7b0ec5de08ed929eeee5af0e8ea16a560@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:4c56bdec39024cf91c1bbc74ccb2defaca088adc89c9b31ffab654837286b247@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(30),
    MSG_INSTANT((@@STRING:a44772b2c68a0e77ea4623390b8aa97c5c67710dbe25abb27cf66d31d143d8db@@)),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:d29b6660058f9af4595e24d38b629bdd91acea3dc2515ca75ac527f2d6a3ee04@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};







static const struct ScriptCommand s_gs4_g3_s0_lives1_dlg0[] = { /* 0x818d208 */
    DEBUGINFO_O(875),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    WALK_RELATIVE(256, -80, 0),
    HALT,
};

static const struct ScriptCommand s_gs4_g3_s0_lives2_dlg0[] = { /* 0x818d328 */
    DEBUGINFO_O(896),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(19),
    WAIT(15),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    HALT,
};

static const struct ScriptCommand s_gs4_g3_s0_lives3_dlg0[] = { /* 0x818d3c8 */
    DEBUGINFO_O(909),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs4_g4_s0_lives0_dlg2[] = { /* 0x818d588 */
    DEBUGINFO_O(940),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:80c4cc67bd3106b557cb7bb63853a21f3692b8fcc411dd959e934b31845cd23d@@)),
    CHOICE(/* label */  1, (@@STRING:6bb16d501e41b1fe9daa3521c9e653b305ac8a12763cc586e4e304d0b1ad0fd5@@)),
    CHOICE(/* label */  2, (@@STRING:0bd32c7069d8457c035483d21c6db84b3d54375e0a542a700130f35f003aa52f@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    EXECUTE_FUNCTION(EVENT_S01E02A_L001),
    CANCEL_ENTITIES(4, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs4_g5_s0_station_sref_script[] = { /* 0x818d6ac */
    DEBUGINFO_O(958),
    SELECT_MAP(4),
    WAIT(30),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs4_g5_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs4_g5_s0_station_sref_script }; /* 0x818d74c */

static const struct ScriptCommand s_gs4_g5_s0_lives0_dlg0[] = { /* 0x818d758 */
    DEBUGINFO_O(973),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d5c4e4ac457580404b3f1267e305db21abae64d9b287c005f69026fef756f615@@)),
    VARIANT(/* == */  1, (@@STRING:35b9060ed06aca32dec335ecb5a16919d665d623856fa277b88f2b231efb6e11@@)),
    VARIANT_DEFAULT((@@STRING:0beb104865c801093921eefc7dc85a9d94918eedb7d202ce679aa70c9e39874d@@)),
    VARIANT_DEFAULT((@@STRING:be56b2d9b9068a7e16f449dd5f045221822f96ba2b71b378a85efc6b6228d6f9@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_INSTANT((@@STRING:872a4c2b61b5132985ee9e3247fe58ce11ab3b519809afcbe2e1ee2bbee84ecc@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_LETTER((@@STRING:8f938005fdbcf61803ab74377665801ef12ea61a784f7eb3da087fd48e111b50@@)),
    MSG_LETTER((@@STRING:48e9a0763f4291d7a3d54357ac718b3674d9869474d633f5a1858b907efedb0f@@)),
    MSG_LETTER((@@STRING:e5a9399f3915b83cf8a17ddf4d629d8f6e006d3b61ade3409cefa088b2561a35@@)),
    MSG_LETTER((@@STRING:ef12c427bde086a78f4d61f4ec0942bf6f0d301c27f7560cb175423576dbe9d5@@)),
    MSG_LETTER((@@STRING:8222e938a4d06fdf40571f5686d2145154eb9a37539fa0af5b7c8134c198c9d5@@)),
    MSG_LETTER((@@STRING:0006134bdfa2c296d6bcbe7ad535c06fbb4ec3d92c42f0d417bb197694fbafee@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:25cf2577508052e302ef9b99717e3fa843095a7461dcb4d63ac08986e734929b@@)),
    VARIANT(/* == */  1, (@@STRING:49eacd6177d50976be4052202f360a507833140bba82f144d83506e68d132f00@@)),
    VARIANT_DEFAULT((@@STRING:32029d3f0963170a51e4d573243065bf0d9c6d0d0298a6a993dea1e7dfdf07fc@@)),
    VARIANT_DEFAULT((@@STRING:49eacd6177d50976be4052202f360a507833140bba82f144d83506e68d132f00@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_INSTANT((@@STRING:43da79daeb8c75d4c55b4553232454b16cd4433b2413768386fb5d946aaf94c5@@)),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:ccc68e8d7c180517337e12196c6b7a8b26b2414b01dceefb8980cf6b23c70789@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};





static const struct ScriptCommand s_gs4_g5_s0_lives1_dlg0[] = { /* 0x818def4 */
    DEBUGINFO_O(1030),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 1),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 1),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs4_g6_s0_lives0_dlg0[] = { /* 0x818dfd4 */
    DEBUGINFO_O(1047),
    SELECT_ANIMATION(2),
  LABEL(0), /* = 0x00 */
    WAIT(90),
    SELECT_ANIMATION(17),
    WAIT(1),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(17),
    WAIT(1),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    JUMP_LABEL(0),
    RET,
};

static const struct ScriptCommand s_gs4_g6_s0_lives0_dlg2[] = { /* 0x818e0a4 */
    DEBUGINFO_O(1063),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:ad4feace4da3c54148cc53023f3a2dc4b1175c82b1534bef9e61c6a7074bbe7d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:ddf3080a886773db9f6b2c9ffa737d9caa2d91d433bad650c6cd6a3896a63c46@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(1),
    SELECT_LIVES(6, 0),
    ALERT_CUE(2),
    RET,
};


static const struct ScriptCommand s_gs4_g6_s0_lives0_dlg3[] = { /* 0x818e248 */
    DEBUGINFO_O(1086),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(30),
    CMD_UNK_92(4, 1, DIR_TRANS_SPINRIGHT1),
    WAIT(5),
    CMD_UNK_92(4, 2, DIR_TRANS_SPINLEFT2),
    WAIT(5),
    CMD_UNK_92(4, 1, DIR_TRANS_SPINRIGHT1),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_92(4, 1, DIR_TRANS_SPINRIGHT1),
    WAIT(5),
    CMD_UNK_92(4, 2, DIR_TRANS_SPINLEFT2),
    WAIT(5),
    CMD_UNK_92(4, 1, DIR_TRANS_SPINRIGHT1),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    RET,
};

static const struct ScriptCommand s_gs4_g7_s0_station_sref_script[] = { /* 0x818e3b8 */
    DEBUGINFO_O(1112),
    SELECT_MAP(4),
    WAIT(30),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs4_g7_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs4_g7_s0_station_sref_script }; /* 0x818e458 */

static const struct ScriptCommand s_gs4_g7_s0_lives0_dlg0[] = { /* 0x818e464 */
    DEBUGINFO_O(1127),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    MSG_INSTANT((@@STRING:a55e7edf58a913f863fc0e0b0d051ba04f69bafc0194345db324ce2a7567a4aa@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_LETTER((@@STRING:f181328cb0ec54f4f50b0d155ec4368196ee05c42b788e8ea6464ec79f57b481@@)),
    MSG_LETTER((@@STRING:0b7af336bd576096af3885d53752776cea97a089dcef1f3d655ad7c7e74028e8@@)),
    MSG_LETTER((@@STRING:253b938b30fe417066c485f141cecc39057021500d8821cdb9ebb9553fdacbea@@)),
    MSG_LETTER((@@STRING:47eb9e11816e218f14a634d6676569179e0110020e1b5053db59c994467c0c62@@)),
    MSG_LETTER((@@STRING:228d3230855518a83a441706a549c0c36c6d26015bbb410693ea4433a1aa61da@@)),
    MSG_LETTER((@@STRING:8855cf16e647291091043ccd72807029f1bd38c0d1aaeb418c7f76b0956f3eea@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_INSTANT((@@STRING:af93bcdf4e9ca7d24858b2559a722b2d3f41653961a446eaa60e07f24972024a@@)),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:1a1208c6c1041b3851c82b4f81b022748dba766e2ecb6b778bc085a73ac88686@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs4_g7_s0_lives1_dlg0[] = { /* 0x818e800 */
    DEBUGINFO_O(1155),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs4_g7_s0_lives2_dlg0[] = { /* 0x818e840 */
    DEBUGINFO_O(1162),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs4_g7_s0_lives3_dlg0[] = { /* 0x818e880 */
    DEBUGINFO_O(1169),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs4_g7_s0_lives4_dlg0[] = { /* 0x818e8c0 */
    DEBUGINFO_O(1176),
    SELECT_ANIMATION(2),
  LABEL(0), /* = 0x00 */
    WAIT(90),
    SELECT_ANIMATION(17),
    WAIT(1),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(17),
    WAIT(1),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    JUMP_LABEL(0),
    HALT,
};

static const struct ScriptCommand s_gs4_g8_s0_lives0_dlg0[] = { /* 0x818e990 */
    DEBUGINFO_O(1192),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs4_g8_s0_lives0_dlg2[] = { /* 0x818e9e0 */
    DEBUGINFO_O(1200),
    EXECUTE_STATION(-1, 9, 0),
    HALT,
};

static const struct ScriptCommand s_gs4_g8_s0_lives1_dlg0[] = { /* 0x818ea10 */
    DEBUGINFO_O(1206),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs4_g8_s0_lives1_dlg2[] = { /* 0x818ea60 */
    DEBUGINFO_O(1214),
    EXECUTE_STATION(-1, 9, 0),
    HALT,
};

static const struct ScriptCommand s_gs4_g9_s0_station_sref_script[] = { /* 0x818ea90 */
    DEBUGINFO_O(1220),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(10, 0),
    EXECUTE_FUNCTION(EVENT_S09E01A_L002),
    RET,
};

static const ScriptRef s_gs4_g9_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g9_s0_station_sref_script }; /* 0x818eaf0 */

static const struct ScriptCommand s_gs4_g9_s0_lives0_dlg0[] = { /* 0x818eafc */
    DEBUGINFO_O(1231),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 2, (@@STRING:9a10e0b9641ed2c929a4eb7fcb51f17490b51f8b356b7afa7b5e67e73cbe2bf3@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(2), /* = 0x02 */
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000042),
    MSG_NPC(2, (@@STRING:064964ea39d52dc568e2098c44639f80fa6c262b8fa1beaafc8c677ee738cc12@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:02c0f67dc2156f22e5b6c4a40dd92c455cb24f068ff55e802f9737e4144e6eb4@@)),
    TEXTBOX_CLEAR,
  LABEL(3), /* = 0x03 */
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    PORTRAIT_REP(0x0002, 0x00000046),
    MSG_NPC(2, (@@STRING:53002532d27a548d8b3204b9dc72c958ddbf36e06ed66bf5eabf3718e8b05016@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    CMD_UNK_93(4, DIR_TRANS_10, 92),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:490726c78f8fad6044927a6c454fd3d4ebe13f10901374aae05a82efaf8e0f4b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:e86cb5557d3498a727019e785c71aff4bb9178205dfdec3a83d1fd88181ec800@@)),
    MSG_NPC(2, (@@STRING:0c3692ef9f4a069e3d3cdbccdf1bc3c17d59fd632ee2fd6aec9683c4b1b9b566@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:ddfca86d07d42198f438748372d57335e257a820529d3b20d19403ecf7f73056@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:30a88696b63d41293ec216a1a0d6e75560d0546651f4f72fe289e00de24c3f50@@)),
    MSG_NPC(2, (@@STRING:8876bdb6514ce8ccffcba0b5ff400d4c332673b3a396e4b8340ccaf1731198a7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 92),
    MSG_NPC(3, (@@STRING:afbb123b2fa4777d3dc8347e2913b36c7b1e564b384f0ba0bfe724cccd266da7@@)),
    MSG_NPC(3, (@@STRING:b057d2a5f1dac020a11f109ce603003c1c786515730e5871c45500fd03058d3e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:2f8236e7b38683e1229e93cf166c36c54e56b1f5cee5e3a370bab820bbc0a742@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    MSG_NPC(2, (@@STRING:ce0bda90e495df218eedcd3b9e24886aa6adcf340c20259f11572560d3f397c5@@)),
    MSG_NPC(2, (@@STRING:fcacfbcce740d30d79cd7bb95d95d0bde07d19fe6f4439d55572e4fc0643e863@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};










static const struct ScriptCommand s_gs4_g9_s0_lives1_dlg0[] = { /* 0x818f284 */
    DEBUGINFO_O(1318),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g9_s0_lives2_dlg0[] = { /* 0x818f2e4 */
    DEBUGINFO_O(1327),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(7),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 0),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 0),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 92),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    HALT,
};


static const struct ScriptCommand s_gs4_g9_s0_lives3_dlg0[] = { /* 0x818f434 */
    DEBUGINFO_O(1352),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs4_g10_s0_lives0_dlg2[] = { /* 0x818f4f4 */
    DEBUGINFO_O(1367),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ce0bda90e495df218eedcd3b9e24886aa6adcf340c20259f11572560d3f397c5@@)),
    MSG_NPC(1, (@@STRING:fcacfbcce740d30d79cd7bb95d95d0bde07d19fe6f4439d55572e4fc0643e863@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g10_s0_lives1_dlg2[] = { /* 0x818f564 */
    DEBUGINFO_O(1377),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:490726c78f8fad6044927a6c454fd3d4ebe13f10901374aae05a82efaf8e0f4b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g11_s0_station_sref_script[] = { /* 0x818f5c4 */
    DEBUGINFO_O(1386),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_22, 0, 0),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
    COND_EQUAL(3, /* to label */ 2),
    BGM_FADEOUT(60),
    WAIT(60),
    RET,
  LABEL(0), /* = 0x00 */
    WAIT(60),
    SELECT_MAP(4),
    SELECT_ENTITIES(-1, 0),
    SELECT_ENTITIES(-1, 3),
    JUMP_LABEL(3),
  LABEL(1), /* = 0x01 */
    WAIT(60),
    SELECT_MAP(4),
    SELECT_ENTITIES(-1, 0),
    SELECT_ENTITIES(-1, 4),
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    WAIT(60),
    SELECT_MAP(4),
    SELECT_ENTITIES(-1, 0),
    SELECT_ENTITIES(-1, 5),
    JUMP_LABEL(3),
  LABEL(3), /* = 0x03 */
    JUMPIF_EQUAL(PARTNER1_KIND, 0, /* to label */ 4),
    SELECT_ENTITIES(-1, 1),
    JUMP_LABEL(5),
  LABEL(4), /* = 0x04 */
    SELECT_ENTITIES(-1, 2),
    JUMP_LABEL(5),
  LABEL(5), /* = 0x05 */
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs4_g11_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs4_g11_s0_station_sref_script }; /* 0x818f834 */


static const struct ScriptCommand s_gs4_g11_s1_lives0_dlg0[] = { /* 0x818f840 */
    DEBUGINFO_O(1431),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_23, 0, 0),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs4_g11_s1_lives1_dlg0[] = { /* 0x818f8e0 */
    DEBUGINFO_O(1444),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs4_g11_s2_lives0_dlg0[] = { /* 0x818f920 */
    DEBUGINFO_O(1451),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_23, 0, 0),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs4_g11_s3_lives0_dlg0[] = { /* 0x818f9b0 */
    DEBUGINFO_O(1463),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    HALT,
};

static const struct ScriptCommand s_gs4_g11_s4_lives0_dlg0[] = { /* 0x818fa00 */
    DEBUGINFO_O(1471),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000000),
    HALT,
};

static const struct ScriptCommand s_gs4_g11_s5_lives0_dlg0[] = { /* 0x818fa50 */
    DEBUGINFO_O(1479),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    HALT,
};

static const struct ScriptCommand s_gs4_g11_s5_lives1_dlg0[] = { /* 0x818faa0 */
    DEBUGINFO_O(1487),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    HALT,
};

static const struct ScriptCommand s_gs4_g12_s0_station_sref_script[] = { /* 0x818faf0 */
    DEBUGINFO_O(1495),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, 4),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, 1),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(4),
    SELECT_ENTITIES(-1, -1),
    CANCEL_LIVES(0, 0),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    SELECT_LIVES(0, 0),
    CMD_UNK_AF(RESCUE_DUNGEON_DUMMY, TRUE),
    RET,
};

static const ScriptRef s_gs4_g12_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs4_g12_s0_station_sref_script }; /* 0x818fbe0 */

static const struct ScriptCommand s_gs4_g12_s0_eff0_script[] = { /* 0x818fbec */
    DEBUGINFO_O(1515),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WALK_DIRECT(140, 10),
    FANFARE_PLAY2(451),
    WAIT(150),
    ALERT_CUE(5),
    WAIT(60),
    FANFARE_STOP2(451),
    WALK_DIRECT(60, 11),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g12_s0_lives0_dlg0[] = { /* 0x818fcdc */
    DEBUGINFO_O(1533),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x50,  0x00cc,  0x00000002,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b18f8079e6c774007557198572e285c6c45f89312344707033b3943b2e20284e@@)),
    VARIANT_DEFAULT((@@STRING:c020522b7fc6cd64562546f838f9c3ee47f4cd544f03be176bd95e19e553333f@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    WALK_GRID(256, 12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c2fd8ee8781a12ab588f8ceb511ab35d76645a816491c7318b9def7aaa574f62@@)),
    VARIANT_DEFAULT((@@STRING:c2fd8ee8781a12ab588f8ceb511ab35d76645a816491c7318b9def7aaa574f62@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:88b29ca136d4b9b7dc897354ffa1d53056779bd3d640456108d5f05532a6278e@@)),
    VARIANT_DEFAULT((@@STRING:cc9c24cc4e2986386b6d134bfc1701e0a77613c12b51cc20a98212467ad49add@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    SET_DIR_WAIT(DIRECTION_NORTH, 20),
    MSG_NPC(1, (@@STRING:a5ce0c58f54106a84a144ed415978d505d82624c35eb614f0f76b23e5d9c0e6b@@)),
    TEXTBOX_CLEAR,
    SPECIAL_TEXT(SPECIAL_TEXT_BULLETIN_BOARD_JOBS, 0, 0),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:aa39a0a8870b48273341f30d17caea585204fb4180668207da542d8a233fec69@@)),
    VARIANT(/* == */  1, (@@STRING:e334f6f31fbe44f930f01f1ba37c72bd188fb34f476d40f320a102a3b6bf505a@@)),
    VARIANT(/* == */  1, (@@STRING:b995343c15c6e58826af5dc3c3c14b38983548d7a47233bfb2c54321739d524b@@)),
    VARIANT(/* == */  1, (@@STRING:31c16b57aad054f74a6271e87ddba9735b4e30c8dd3f080d090a8dba95903408@@)),
    VARIANT(/* == */  1, (@@STRING:c54c9d6aac432b2733d1db37fc98bfa2df1f5ccb5e5004e346d63770b9017983@@)),
    VARIANT(/* == */  1, (@@STRING:55a9eb31891d22efd84ff74028d767db77bfde315df8346efedb4f3e9ff3446c@@)),
    VARIANT(/* == */  1, (@@STRING:e141eb3a747a0431d91e216998abd96b263e3c66a83408ca692395c99aca745a@@)),
    VARIANT(/* == */  3, (@@STRING:13e59ebd7289a16c6b6889c92cf17c42a6d8d353beef5d6fd73e24d29c2832a9@@)),
    VARIANT(/* == */  3, (@@STRING:e334f6f31fbe44f930f01f1ba37c72bd188fb34f476d40f320a102a3b6bf505a@@)),
    VARIANT(/* == */  3, (@@STRING:b995343c15c6e58826af5dc3c3c14b38983548d7a47233bfb2c54321739d524b@@)),
    VARIANT(/* == */  3, (@@STRING:31c16b57aad054f74a6271e87ddba9735b4e30c8dd3f080d090a8dba95903408@@)),
    VARIANT(/* == */  3, (@@STRING:dfb7c2b96a70ae25ef349e9412f33a9476702466a10c098a457060df214a5f85@@)),
    VARIANT(/* == */  3, (@@STRING:73fa997b5acda21d0e04d842aff32ff12a477a13d3dfce833e1ce1681f3ff1fb@@)),
    VARIANT(/* == */  3, (@@STRING:e141eb3a747a0431d91e216998abd96b263e3c66a83408ca692395c99aca745a@@)),
    VARIANT_DEFAULT((@@STRING:a5ce0c58f54106a84a144ed415978d505d82624c35eb614f0f76b23e5d9c0e6b@@)),
    VARIANT_DEFAULT((@@STRING:e334f6f31fbe44f930f01f1ba37c72bd188fb34f476d40f320a102a3b6bf505a@@)),
    VARIANT_DEFAULT((@@STRING:b995343c15c6e58826af5dc3c3c14b38983548d7a47233bfb2c54321739d524b@@)),
    VARIANT_DEFAULT((@@STRING:31c16b57aad054f74a6271e87ddba9735b4e30c8dd3f080d090a8dba95903408@@)),
    VARIANT_DEFAULT((@@STRING:24977925af975f3d7cd5dcfc509a495e23c15339fba7fa7ef1bcdeae7706015c@@)),
    VARIANT_DEFAULT((@@STRING:73fa997b5acda21d0e04d842aff32ff12a477a13d3dfce833e1ce1681f3ff1fb@@)),
    VARIANT_DEFAULT((@@STRING:e141eb3a747a0431d91e216998abd96b263e3c66a83408ca692395c99aca745a@@)),
    TEXTBOX_CLEAR,
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:446983c753b130e76ec48bacbbdfecf646592cc62a00ab6977b51d7ea8abc86c@@)),
    VARIANT(/* == */  1, (@@STRING:15a6b67a397c4b71b796f74e67b1e8d2bd79420a865b560f1b0e188094b8741c@@)),
    VARIANT(/* == */  3, (@@STRING:446983c753b130e76ec48bacbbdfecf646592cc62a00ab6977b51d7ea8abc86c@@)),
    VARIANT(/* == */  3, (@@STRING:62a0e9502f1cbde40f5d725826011b29d2818583261c29cf8c7a8fd73ddc788e@@)),
    VARIANT_DEFAULT((@@STRING:446983c753b130e76ec48bacbbdfecf646592cc62a00ab6977b51d7ea8abc86c@@)),
    VARIANT_DEFAULT((@@STRING:62a0e9502f1cbde40f5d725826011b29d2818583261c29cf8c7a8fd73ddc788e@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs4_g12_s0_lives1_dlg0[] = { /* 0x81909bc */
    DEBUGINFO_O(1609),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x50,  0x00cc,  0x00000002,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 13),
    WAIT(20),
    CMD_UNK_8E(20, DIR_TRANS_NONE, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(20),
    SET_DIR_WAIT(DIRECTION_NORTH, 20),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g12_s0_lives2_dlg0[] = { /* 0x8190aec */
    DEBUGINFO_O(1631),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    { 0x60, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    WAIT(60),
    { 0x68, 0x00,  0x0100,  0x00000018,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    WALK_DIRECT(120, 14),
    WAIT(15),
    END_DELETE,
    RET,
};

static const struct ScriptCommand s_gs4_g12_s0_lives3_dlg0[] = { /* 0x8190bec */
    DEBUGINFO_O(1650),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    { 0x60, 0x00,  0x0000,  0x00000018,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    WAIT(160),
    WALK_DIRECT(120, 15),
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    WAIT(15),
    END_DELETE,
    RET,
};

static const struct ScriptCommand s_gs4_g13_s0_station_sref_script[] = { /* 0x8190cec */
    DEBUGINFO_O(1669),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g13_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g13_s0_station_sref_script }; /* 0x8190d0c */

static const struct ScriptCommand s_gs4_g14_s0_station_sref_script[] = { /* 0x8190d18 */
    DEBUGINFO_O(1676),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g14_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g14_s0_station_sref_script }; /* 0x8190d48 */

static const struct ScriptCommand s_gs4_g15_s0_station_sref_script[] = { /* 0x8190d54 */
    DEBUGINFO_O(1684),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g15_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g15_s0_station_sref_script }; /* 0x8190d74 */

static const struct ScriptCommand s_gs4_g16_s0_station_sref_script[] = { /* 0x8190d80 */
    DEBUGINFO_O(1691),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g16_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g16_s0_station_sref_script }; /* 0x8190db0 */

static const struct ScriptCommand s_gs4_g16_s0_lives0_dlg2[] = { /* 0x8190dbc */
    DEBUGINFO_O(1699),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:e107e020d52d15d5c1c028b1bbe2159cd44a3bd88f424f369e48ae92486bae81@@)),
    MSG_NPC(1, (@@STRING:90473d8f72f2b4b921a11c7bb3912b157e03835a5878eecb595da1e1df76c4ae@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g16_s0_lives1_dlg0[] = { /* 0x8190eb0 */
    DEBUGINFO_O(1709),
    SELECT_ANIMATION(1),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g16_s0_lives1_dlg2[] = { /* 0x8190ef0 */
    DEBUGINFO_O(1716),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g16_s0_lives2_dlg0[] = { /* 0x8190f20 */
    DEBUGINFO_O(1722),
    SELECT_ANIMATION(1),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g16_s0_lives2_dlg2[] = { /* 0x8190f60 */
    DEBUGINFO_O(1729),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g16_s1_station_sref_script[] = { /* 0x8190f90 */
    DEBUGINFO_O(1735),
    SELECT_ENTITIES(-1, 1),
    RET,
};

static const ScriptRef s_gs4_g16_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g16_s1_station_sref_script }; /* 0x8190fc0 */

static const struct ScriptCommand s_gs4_g16_s1_lives0_dlg0[] = { /* 0x8190fcc */
    DEBUGINFO_O(1743),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(2, (@@STRING:76ec4067c25ef43b2f360f6e580fbd8aac858435029a94cb70eb70f5d1f34a46@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:3367196fd32ce38869edb2eee97314eb5ecd8c928714ed821a80c19aa58fd9b5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:baa6c145d0962c654ef521e898c9859e3fa13301a5adfcdf128d6cb0624060de@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:a04e86bb9ed1312d889a03d1ec48ee932853f6dd4e731366ce095b3eeb5d195f@@)),
    MSG_NPC(2, (@@STRING:26397cb9f887c6c3245e1387ff553509ea09f413790c976aa842b6dd4c68405b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:18b6e2279cba8c867d69a4fe3448620088765ece9542e9db989da226f0e4ea8d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g16_s1_lives1_dlg0[] = { /* 0x8191244 */
    DEBUGINFO_O(1775),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(4),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs4_g16_s1_lives1_dlg2[] = { /* 0x81912f4 */
    DEBUGINFO_O(1789),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g16_s1_lives2_dlg0[] = { /* 0x8191324 */
    DEBUGINFO_O(1795),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(4),
    HALT,
};

static const struct ScriptCommand s_gs4_g16_s1_lives2_dlg2[] = { /* 0x81913c4 */
    DEBUGINFO_O(1808),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g17_s0_station_sref_script[] = { /* 0x81913f4 */
    DEBUGINFO_O(1814),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g17_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g17_s0_station_sref_script }; /* 0x8191424 */

static const struct ScriptCommand s_gs4_g17_s0_lives0_dlg0[] = { /* 0x8191430 */
    DEBUGINFO_O(1822),
    SELECT_ANIMATION(1),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g17_s0_lives0_dlg2[] = { /* 0x8191470 */
    DEBUGINFO_O(1829),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g17_s0_lives1_dlg0[] = { /* 0x81914a0 */
    DEBUGINFO_O(1835),
    SELECT_ANIMATION(1),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g17_s0_lives1_dlg2[] = { /* 0x81914e0 */
    DEBUGINFO_O(1842),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g17_s1_station_sref_script[] = { /* 0x8191510 */
    DEBUGINFO_O(1848),
    SELECT_ENTITIES(-1, 1),
    RET,
};

static const ScriptRef s_gs4_g17_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g17_s1_station_sref_script }; /* 0x8191540 */

static const struct ScriptCommand s_gs4_g17_s1_lives0_dlg0[] = { /* 0x819154c */
    DEBUGINFO_O(1856),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(2, (@@STRING:76ec4067c25ef43b2f360f6e580fbd8aac858435029a94cb70eb70f5d1f34a46@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:3367196fd32ce38869edb2eee97314eb5ecd8c928714ed821a80c19aa58fd9b5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:baa6c145d0962c654ef521e898c9859e3fa13301a5adfcdf128d6cb0624060de@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:a04e86bb9ed1312d889a03d1ec48ee932853f6dd4e731366ce095b3eeb5d195f@@)),
    MSG_NPC(2, (@@STRING:26397cb9f887c6c3245e1387ff553509ea09f413790c976aa842b6dd4c68405b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:18b6e2279cba8c867d69a4fe3448620088765ece9542e9db989da226f0e4ea8d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g17_s1_lives1_dlg0[] = { /* 0x819171c */
    DEBUGINFO_O(1888),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(4),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs4_g17_s1_lives1_dlg2[] = { /* 0x81917cc */
    DEBUGINFO_O(1902),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g17_s1_lives2_dlg0[] = { /* 0x81917fc */
    DEBUGINFO_O(1908),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(4),
    HALT,
};

static const struct ScriptCommand s_gs4_g17_s1_lives2_dlg2[] = { /* 0x819189c */
    DEBUGINFO_O(1921),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g18_s0_station_sref_script[] = { /* 0x81918cc */
    DEBUGINFO_O(1927),
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 9, 4, /* to label */ 0),
    SELECT_ENTITIES(-1, -1),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    SELECT_ENTITIES(-1, -1),
    SELECT_LIVES(-1, 1),
  LABEL(1), /* = 0x01 */
    RET_DIRECT,
};

static const ScriptRef s_gs4_g18_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g18_s0_station_sref_script }; /* 0x819195c */

static const struct ScriptCommand s_gs4_g18_s0_lives0_dlg2[] = { /* 0x8191968 */
    DEBUGINFO_O(1941),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(3, (@@STRING:bd7158d540efe25052cea1140a687ddd0295ddca008c1cac7464e9a165e4f9e0@@)),
    MSG_NPC(3, (@@STRING:ae9691bf0beec62c75e94138b2e865e398d066ea3444e333942dba9d5a26516e@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 3, (@@STRING:fa212df83ddf1cbbe8b9f0406b01b2fbf410694ba9879b436dfd4679078dfc22@@)),
    CHOICE(/* label */  0, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  1, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(0), /* = 0x00 */
    MSG_NPC(3, (@@STRING:3b1d49a7c4d51a58cd77b22a4277c99be3c9bc6127e4609a66c2d12100092ce7@@)),
    MSG_NPC(3, (@@STRING:89bcca5b7f17e427b94bcf268129bb234da207c57b1836f31b872315919441e8@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    MSG_NPC(3, (@@STRING:d00d2166b45b5b02042fd66f9b3f54bf43df7af7f6e6801c7760654d6a332578@@)),
    MSG_NPC(3, (@@STRING:4671d178dbaba418a474553ecb8aff788f5caaccb05c9fb25eb88383582484d2@@)),
    MSG_NPC(3, (@@STRING:e898f939d48399e09a5c3fb401cedb17953f615bbb533b75a9e86f9830786ad0@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g18_s0_lives0_dlg3[] = { /* 0x8191c7c */
    DEBUGINFO_O(1970),
    { 0x2d, 0x09,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(6),
    CMD_UNK_8E(10, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs4_g18_s1_lives0_dlg2[] = { /* 0x8191d1c */
    DEBUGINFO_O(1983),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:002da025c2fef9a071858601584b41d28b9e5c2e324063aca6fa37d8062fb6d1@@)),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:b2d254be5b53c73ad05f991f6d71720e1c0af6b2eb8f0e6d9169f6657d0f2ea7@@)),
    CHOICE(/* label */  0, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  1, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(0), /* = 0x00 */
    MSG_NPC(1, (@@STRING:7195a718c9f245b8f0822da0a45b4259d375a247581cde09a8986b719acc25b7@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    MSG_NPC(1, (@@STRING:a9ff6f12d3a4811ae661f27a1dc3da543fd9274b5fb741c811e7d83341c3b31a@@)),
    MSG_NPC(1, (@@STRING:71636a7ac7e064ebf68d3e54cc221e20e669bb1694a7164d9a259de233d68268@@)),
    MSG_NPC(1, (@@STRING:df91965b2cd1cee2812a8bdabc8915a5e6fef5519be767c2bd038ee2bacb3014@@)),
    MSG_NPC(1, (@@STRING:08bf8fe849e139ad7abbbdc2a29b7e3213ad4567f9cc065af15287fa96b2600d@@)),
    MSG_NPC(1, (@@STRING:80c300721185ec9bbdfbf44d1cb2aef393fe288973b186224b7fea1bd27a3760@@)),
    MSG_NPC(1, (@@STRING:ab59b8385024f0f1306004589385a2d62b80ec5227199399e149e9157e456927@@)),
    MSG_NPC(1, (@@STRING:6b531db8c6d8f5a5f9a0cd189e09677430a32a115b1fe6e0114daa4fa3e4ec86@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g19_s0_station_sref_script[] = { /* 0x8192190 */
    DEBUGINFO_O(2006),
    SELECT_ENTITIES(-1, 0),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g19_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g19_s0_station_sref_script }; /* 0x81921d0 */

static const struct ScriptCommand s_gs4_g19_s0_lives0_dlg0[] = { /* 0x81921dc */
    DEBUGINFO_O(2015),
    SELECT_ANIMATION(1),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g19_s0_lives0_dlg2[] = { /* 0x819221c */
    DEBUGINFO_O(2022),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g19_s0_lives1_dlg0[] = { /* 0x819224c */
    DEBUGINFO_O(2028),
    SELECT_ANIMATION(1),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g19_s0_lives1_dlg2[] = { /* 0x819228c */
    DEBUGINFO_O(2035),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g19_s1_station_sref_script[] = { /* 0x81922bc */
    DEBUGINFO_O(2041),
    SELECT_ENTITIES(-1, 1),
    RET,
};

static const ScriptRef s_gs4_g19_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g19_s1_station_sref_script }; /* 0x81922ec */

static const struct ScriptCommand s_gs4_g19_s1_lives0_dlg0[] = { /* 0x81922f8 */
    DEBUGINFO_O(2049),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(2, (@@STRING:8ea1d48cc1468d0a315df97b9435d8562ecbbaaaff28acb37fa1a1e88195bceb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:3367196fd32ce38869edb2eee97314eb5ecd8c928714ed821a80c19aa58fd9b5@@)),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:03f796832f78c6fc1ee692755389190ecfe1f2ed8b7dde86db3aa2dfd4d4e5f2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:4ab22d26d045b2cbd3faa3440208b29f16c0eac4b71d0920ce02e18c0769edf4@@)),
    MSG_NPC(2, (@@STRING:26397cb9f887c6c3245e1387ff553509ea09f413790c976aa842b6dd4c68405b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:4b12bb4c7ec801bcba43541eb9648e691dad6b17bf77d68b4060af30473c0d44@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs4_g19_s1_lives1_dlg0[] = { /* 0x8192548 */
    DEBUGINFO_O(2080),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(4),
    ALERT_CUE(5),
    RET,
};

static const struct ScriptCommand s_gs4_g19_s1_lives1_dlg2[] = { /* 0x81925f8 */
    DEBUGINFO_O(2094),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g19_s1_lives2_dlg0[] = { /* 0x8192628 */
    DEBUGINFO_O(2100),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(4),
    RET,
};

static const struct ScriptCommand s_gs4_g19_s1_lives2_dlg2[] = { /* 0x81926c8 */
    DEBUGINFO_O(2113),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g20_s0_station_sref_script[] = { /* 0x81926f8 */
    DEBUGINFO_O(2119),
    SELECT_ENTITIES(-1, 0),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g20_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g20_s0_station_sref_script }; /* 0x8192738 */

static const struct ScriptCommand s_gs4_g20_s0_lives0_dlg0[] = { /* 0x8192744 */
    DEBUGINFO_O(2128),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs4_g20_s0_lives0_dlg2[] = { /* 0x8192784 */
    DEBUGINFO_O(2135),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g20_s0_lives1_dlg0[] = { /* 0x81927b4 */
    DEBUGINFO_O(2141),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(4),
    HALT,
};

static const struct ScriptCommand s_gs4_g20_s0_lives1_dlg2[] = { /* 0x8192854 */
    DEBUGINFO_O(2154),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g20_s1_lives0_dlg0[] = { /* 0x8192884 */
    DEBUGINFO_O(2160),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g20_s1_station_sref_script[] = { /* 0x81928e4 */
    DEBUGINFO_O(2169),
    CANCEL_LIVES(-1, 0),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs4_g20_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g20_s1_station_sref_script }; /* 0x8192934 */

static const struct ScriptCommand s_gs4_g20_s1_eff0_script[] = { /* 0x8192940 */
    DEBUGINFO_O(2179),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g20_s1_lives1_dlg0[] = { /* 0x81929a0 */
    DEBUGINFO_O(2188),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(2, (@@STRING:9bbe8542cd2e0c35f66226223eedb2575fda265dd9bd99f3662910f58f576303@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:3367196fd32ce38869edb2eee97314eb5ecd8c928714ed821a80c19aa58fd9b5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:a4fba06fd451c30ffc451f10fef53a0b63935f891f0dba19e4eb838d66dcbc63@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:7571c63b5d566d9d30a7991f27420a3ad8ad9e2f2f49fec85e9dd136acca3a4f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    TEXTBOX_AUTO_PRESS(0, 0),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_AUTO_PRESS(30, 30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    TEXTBOX_AUTO_PRESS(-1, -1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:283bdae5e7304e82fa0f5d930d5a948c49f63dd3e58c66344a4b817a4578a6f4@@)),
    MSG_NPC(2, (@@STRING:d9adb9b766b1bb3fcdd2cd58a253f9c44cc61bb81deee9da86cfc4bd6731596c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:c9836052729701d625117e1dea73d0a3aa5b3fd626b7541f4b1c7017aca53b82@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs4_g20_s1_lives2_dlg0[] = { /* 0x8192fa8 */
    DEBUGINFO_O(2266),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g20_s1_lives3_dlg0[] = { /* 0x8193098 */
    DEBUGINFO_O(2284),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x54, 0x00,  0x0400,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01, -0x0050,  0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_WEST, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01,  0x0050, -0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTH, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01, -0x0030,  0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_NORTH, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01,  0x0030, -0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g20_s1_lives3_dlg2[] = { /* 0x81934f8 */
    DEBUGINFO_O(2357),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g20_s1_lives4_dlg0[] = { /* 0x8193528 */
    DEBUGINFO_O(2363),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    ALERT_CUE(5),
    RET,
    HALT,
};

static const struct ScriptCommand s_gs4_g20_s1_lives4_dlg2[] = { /* 0x8193668 */
    DEBUGINFO_O(2386),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g21_s0_station_sref_script[] = { /* 0x8193698 */
    DEBUGINFO_O(2392),
    SELECT_ENTITIES(-1, 0),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g21_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g21_s0_station_sref_script }; /* 0x81936d8 */

static const struct ScriptCommand s_gs4_g21_s0_lives0_dlg0[] = { /* 0x81936e4 */
    DEBUGINFO_O(2401),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs4_g21_s0_lives0_dlg2[] = { /* 0x8193724 */
    DEBUGINFO_O(2408),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g21_s0_lives1_dlg0[] = { /* 0x8193754 */
    DEBUGINFO_O(2414),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs4_g21_s0_lives1_dlg2[] = { /* 0x8193794 */
    DEBUGINFO_O(2421),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g21_s1_station_sref_script[] = { /* 0x81937c4 */
    DEBUGINFO_O(2427),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs4_g21_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g21_s1_station_sref_script }; /* 0x8193804 */

static const struct ScriptCommand s_gs4_g21_s1_eff0_script[] = { /* 0x8193810 */
    DEBUGINFO_O(2436),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g21_s1_lives0_dlg0[] = { /* 0x8193870 */
    DEBUGINFO_O(2445),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(2, (@@STRING:949dae2e8859e8fa2917dd8d49c983f4df159cb8c6d2edd1c76a61872be24751@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:cf31043a918f63289fe3f9092ad114fd16d291bb3cc5cf410e1f4733f3de342e@@)),
    MSG_NPC(3, (@@STRING:4316202c09eab4e8ed8d7e6bc0713e9550b84bd30df1b2978812306ca72fd16c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:7cfb0f63f3330e7fcfa5da099f5bb14d2e97854fd690f1a27da8c4b824f27c1c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:4714ceff07641624ef604026e5aaa112569077303598d8b5935edd87c9d8409a@@)),
    MSG_NPC(2, (@@STRING:5007d287a0f9a0b42127c283c5e8c2a41d561f76f4bd8a5d8d6003e8f2b728b0@@)),
    MSG_NPC(2, (@@STRING:21481dedd647fde1314471908f282787e89b0cf859cd96e2b8ec22004f59f051@@)),
    TEXTBOX_CLEAR,
    TEXTBOX_AUTO_PRESS(0, 0),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    TEXTBOX_AUTO_PRESS(30, 30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    TEXTBOX_AUTO_PRESS(-1, -1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:04b403108291720db5072fdb2ecf1a63720e232a4f1a42c7bb30f8b34a2e1063@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:cfcc676b924afc31369b34c08ffe7e0ac90da5c1cdece90cb79dd5bce8b7b147@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs4_g21_s1_lives1_dlg0[] = { /* 0x8193edc */
    DEBUGINFO_O(2524),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g21_s1_lives2_dlg0[] = { /* 0x8193fcc */
    DEBUGINFO_O(2542),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x54, 0x00,  0x0400,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01, -0x0050,  0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_NORTH, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01,  0x0050, -0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_WEST, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01, -0x0030,  0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTH, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x52, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    { 0x59, 0x01,  0x0030, -0x00000030,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    FANFARE_PLAY2(454),
    { 0x53, 0x00,  0x0000,  0x00400000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g21_s1_lives2_dlg2[] = { /* 0x819442c */
    DEBUGINFO_O(2615),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g21_s1_lives3_dlg0[] = { /* 0x819445c */
    DEBUGINFO_O(2621),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 66),
    AWAIT_CUE(8),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    ALERT_CUE(5),
    RET,
};

static const struct ScriptCommand s_gs4_g21_s1_lives3_dlg2[] = { /* 0x819458c */
    DEBUGINFO_O(2643),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g22_s0_station_sref_script[] = { /* 0x81945bc */
    DEBUGINFO_O(2649),
    SELECT_ENTITIES(-1, 0),
    JUMPIF_ARRAY(EVENT_T01P03, 0, /* to label */ 0),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    SELECT_ENTITIES(-1, 2),
  LABEL(1), /* = 0x01 */
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g22_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g22_s0_station_sref_script }; /* 0x819464c */

static const struct ScriptCommand s_gs4_g22_s0_lives0_dlg0[] = { /* 0x8194658 */
    DEBUGINFO_O(2663),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs4_g22_s0_lives0_dlg2[] = { /* 0x8194698 */
    DEBUGINFO_O(2670),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g22_s0_lives1_dlg2[] = { /* 0x81946c8 */
    DEBUGINFO_O(2676),
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs4_g22_s1_station_sref_script[] = { /* 0x81946f8 */
    DEBUGINFO_O(2682),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 2),
    RET,
};

static const ScriptRef s_gs4_g22_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs4_g22_s1_station_sref_script }; /* 0x8194748 */

static const struct ScriptCommand s_gs4_g22_s1_eff0_script[] = { /* 0x8194754 */
    DEBUGINFO_O(2692),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g22_s1_lives0_dlg0[] = { /* 0x81947b4 */
    DEBUGINFO_O(2701),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(2, (@@STRING:fb95a2b6fc5cd580ff1a13ade1896b5c807f2ed758e1fbaf9dbd20f97fa9a193@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:5e1e914a4bc9359b6aa9db0830dd514b5130a764bb3887ca66292d5691b71b32@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:b580153665b0f52ed987c91d8499ddb73e40b3a7f5ebb7a84c27a2558bb322df@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:de449d9ab363d59ff06b4026191802c26450e8ac8cfc80893a4f629c84643de2@@)),
    MSG_NPC(2, (@@STRING:26397cb9f887c6c3245e1387ff553509ea09f413790c976aa842b6dd4c68405b@@)),
    MSG_NPC(2, (@@STRING:aa10f66087f1149af90f913485806a436bb1f40df0e2f7db031b3285114a2361@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    TEXTBOX_AUTO_PRESS(10, 10),
    MSG_NPC(2, (@@STRING:9319e5651dce42dd6342558b0b9586d7b96e3272a061d761c93203e7297cdd8c@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(486),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    TEXTBOX_AUTO_PRESS(-1, -1),
    MSG_NPC(3, (@@STRING:2bc4231730a59162aa38a34761d321224ee37991a1845966ed50a19a7dd0954c@@)),
    MSG_NPC(3, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    MSG_NPC(3, (@@STRING:8eeffc1b7e5985bc29cf1f1fc166b9f1a0eee1ad60ec79e1ec5ac1036156a646@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    SET_ARRAYVAL(EVENT_T01P03,  0,  1),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs4_g22_s1_lives1_dlg0[] = { /* 0x8194c3c */
    DEBUGINFO_O(2748),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g22_s1_lives2_dlg0[] = { /* 0x8194cac */
    DEBUGINFO_O(2758),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT(5),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g22_s1_lives3_dlg0[] = { /* 0x8194d7c */
    DEBUGINFO_O(2774),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_8E(4, DIR_TRANS_10, 66),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(30),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs4_g22_s2_lives0_dlg0[] = { /* 0x8194e7c */
    DEBUGINFO_O(2793),
    END_DELETE,
};

static const struct ScriptCommand s_gs4_g22_s2_lives1_dlg0[] = { /* 0x8194e9c */
    DEBUGINFO_O(2798),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs4_g22_s2_lives1_dlg2[] = { /* 0x8194ecc */
    DEBUGINFO_O(2804),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:81d6591c690c70c74282c1f71aeb3dccb4e0968b87fdbb493a41f0b35be2f92c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g23_s0_station_sref_script[] = { /* 0x8194f20 */
    DEBUGINFO_O(2812),
    SELECT_ENTITIES(-1, 0),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g23_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g23_s0_station_sref_script }; /* 0x8194f60 */

static const struct ScriptCommand s_gs4_g23_s0_lives0_dlg1[] = { /* 0x8194f6c */
    DEBUGINFO_O(2821),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    HALT,
};

static const struct ScriptCommand s_gs4_g23_s0_lives0_dlg2[] = { /* 0x8194fac */
    DEBUGINFO_O(2828),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:2a000e97334dccefce3c510578496c1e33f0c7b59ca59ccb368684a6ea0c922b@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:68358ee6eeb20c0eda5661f6d0b1dbe552d3a4efd271df7fe5fb6c1861efafe5@@)),
    MSG_NPC(1, (@@STRING:22d58d69d029cadae9d97003a76bd5d87546f751b3d4d2b641444e34ffcea179@@)),
    MSG_NPC(1, (@@STRING:624588f0b23e56d990ec96beffe6baea29192d81daa32829f54108883bc6f9bb@@)),
    MSG_NPC(1, (@@STRING:7b7cb564022784a37ffe07440998ea78215159e71b135500a805bea1cd4810e6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g23_s0_lives0_dlg3[] = { /* 0x81951c0 */
    DEBUGINFO_O(2844),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs4_g24_s0_station_sref_script[] = { /* 0x8195240 */
    DEBUGINFO_O(2855),
    SELECT_ENTITIES(-1, 0),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g24_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g24_s0_station_sref_script }; /* 0x8195270 */

static const struct ScriptCommand s_gs4_g24_s0_lives0_dlg0[] = { /* 0x819527c */
    DEBUGINFO_O(2863),
    { 0x52, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs4_g24_s0_lives0_dlg2[] = { /* 0x81952bc */
    DEBUGINFO_O(2870),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:eb74307623173f2d6d5619f9f264fc961614ed4fc65461f09d996fe270ce45e5@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:657b72531431f72ad71ecf3b899144699915b9c47bcce922acbfbde1d60d2f79@@)),
    MSG_NPC(1, (@@STRING:cf28a5694b872ef75602ccf029a88b7b742a217d78c4ecc44d3e8ebdd4c909b5@@)),
    MSG_NPC(1, (@@STRING:7e288060b4124dbb51961715ba19945e191744bc6070dac0f3f78c618ac44dae@@)),
    MSG_NPC(1, (@@STRING:5ecc644df8744d123b1f57d6104eaeb007395950784a1bd39ad1b22877e72bab@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g24_s0_lives0_dlg3[] = { /* 0x8195484 */
    DEBUGINFO_O(2886),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs4_g24_s0_lives1_dlg2[] = { /* 0x8195504 */
    DEBUGINFO_O(2897),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:e215c63ecbaa2a84e9cd0ed5974594e47e336656902d7c5d6b40112013867302@@)),
    MSG_NPC(1, (@@STRING:a0cc0ea15f7c3648f31c5428333bf717eeb2c1a69c4f9155c14aaaa3e1ed9bee@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g24_s0_lives2_dlg2[] = { /* 0x81955d8 */
    DEBUGINFO_O(2907),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:3601cb49fc78d747bbef92ca926f67ead90e636e60bd7cba470999aa3081fbca@@)),
    MSG_NPC(1, (@@STRING:b4a7913dda803a4f5f91728a7c0fca711d2d06fddf49ebc105a1987dfa1d03e1@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g25_s0_station_sref_script[] = { /* 0x81956c4 */
    DEBUGINFO_O(2917),
    SELECT_ENTITIES(-1, 0),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g25_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g25_s0_station_sref_script }; /* 0x8195704 */

static const struct ScriptCommand s_gs4_g25_s0_lives0_dlg0[] = { /* 0x8195710 */
    DEBUGINFO_O(2926),
    { 0x52, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs4_g25_s0_lives0_dlg2[] = { /* 0x8195750 */
    DEBUGINFO_O(2933),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:eb74307623173f2d6d5619f9f264fc961614ed4fc65461f09d996fe270ce45e5@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:657b72531431f72ad71ecf3b899144699915b9c47bcce922acbfbde1d60d2f79@@)),
    MSG_NPC(1, (@@STRING:cf28a5694b872ef75602ccf029a88b7b742a217d78c4ecc44d3e8ebdd4c909b5@@)),
    MSG_NPC(1, (@@STRING:7e288060b4124dbb51961715ba19945e191744bc6070dac0f3f78c618ac44dae@@)),
    MSG_NPC(1, (@@STRING:5ecc644df8744d123b1f57d6104eaeb007395950784a1bd39ad1b22877e72bab@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g25_s0_lives0_dlg3[] = { /* 0x8195820 */
    DEBUGINFO_O(2949),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs4_g25_s0_lives1_dlg2[] = { /* 0x81958a0 */
    DEBUGINFO_O(2960),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:eca5e728423b50890a3e1da7a42deb09cf756a5db648ccf0c823b79258db6e88@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g25_s0_lives2_dlg2[] = { /* 0x819592c */
    DEBUGINFO_O(2969),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:8057b4e4f63a590f7a13c08a177bdc75cbf4f79679a8396145a5bad3fdc21044@@)),
    MSG_NPC(1, (@@STRING:dd7b512a5aabde9674bd2600eb051a92c11511b5f8fcbe9547f19b3d60b20d96@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g26_s0_station_sref_script[] = { /* 0x81959d0 */
    DEBUGINFO_O(2979),
    SELECT_ENTITIES(-1, 0),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs4_g26_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g26_s0_station_sref_script }; /* 0x8195a10 */

static const struct ScriptCommand s_gs4_g26_s0_lives0_dlg0[] = { /* 0x8195a1c */
    DEBUGINFO_O(2988),
    { 0x52, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs4_g26_s0_lives0_dlg2[] = { /* 0x8195a5c */
    DEBUGINFO_O(2995),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:eb74307623173f2d6d5619f9f264fc961614ed4fc65461f09d996fe270ce45e5@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:657b72531431f72ad71ecf3b899144699915b9c47bcce922acbfbde1d60d2f79@@)),
    MSG_NPC(1, (@@STRING:cf28a5694b872ef75602ccf029a88b7b742a217d78c4ecc44d3e8ebdd4c909b5@@)),
    MSG_NPC(1, (@@STRING:7e288060b4124dbb51961715ba19945e191744bc6070dac0f3f78c618ac44dae@@)),
    MSG_NPC(1, (@@STRING:5ecc644df8744d123b1f57d6104eaeb007395950784a1bd39ad1b22877e72bab@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g26_s0_lives0_dlg3[] = { /* 0x8195b2c */
    DEBUGINFO_O(3011),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs4_g26_s0_lives1_dlg2[] = { /* 0x8195bac */
    DEBUGINFO_O(3022),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:10d6fab1a49f846a30c8f968e9db3743ab4677043f7cae0fb0d50ce88460f91d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g26_s0_lives2_dlg2[] = { /* 0x8195c38 */
    DEBUGINFO_O(3031),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:bbf8afdeeae484ea407b634479d36a52da3c5ff14669c8538b5ad947c8d5fe17@@)),
    MSG_NPC(1, (@@STRING:11105eacbb4dbd5889b23d578f9cbe9265cdec0fefea82d6698be3ec307f43ff@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g27_s0_station_sref_script[] = { /* 0x8195cfc */
    DEBUGINFO_O(3041),
    SELECT_MAP(4),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_AFTERMATH),
    { 0x22, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(240),
    { 0x23, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs4_g27_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs4_g27_s0_station_sref_script }; /* 0x8195d7c */

static const struct ScriptCommand s_gs4_g27_s0_eff0_script[] = { /* 0x8195d88 */
    DEBUGINFO_O(3054),
    CAMERA_INIT_PAN,
    WALK_GRID(153, 16),
    HALT,
};

static const struct ScriptCommand s_gs4_g28_s0_station_sref_script[] = { /* 0x8195dc8 */
    DEBUGINFO_O(3061),
    SELECT_ENTITIES(-1, 0),
    RET_DIRECT,
};

static const ScriptRef s_gs4_g28_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs4_g28_s0_station_sref_script }; /* 0x8195df8 */

static const struct ScriptCommand s_gs4_g28_s0_lives0_dlg1[] = { /* 0x8195e04 */
    DEBUGINFO_O(3069),
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs4_g28_s0_lives0_dlg2[] = { /* 0x8195e54 */
    DEBUGINFO_O(3077),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6cc968ec9022076b3adda48d78d65e3156685afa8f7dfbfd678b70cdcd80162e@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:a47e6297c7eb9c63f602f65dbd5b18e0bfb75deeabc7b957756f9dca7c434676@@)),
    MSG_NPC(1, (@@STRING:369144d76d133fd5cc1cee7970574c7743992cc438c393405d3e7e1845947fcf@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:4e323682b01a70b459ef4c8e94efb1128b4a780b7d06e2653016ef802513324d@@)),
    MSG_NPC(1, (@@STRING:6b0f77313e1e68216a499b2cddfc79c7e308db07404100cbdac491d411f4ad97@@)),
    MSG_NPC(1, (@@STRING:f4bbf25ea666e6999cc75cc41c8b6c5dcf5829eeca537dc6f96779a0e71c1863@@)),
    MSG_NPC(1, (@@STRING:858177970930d3c53e93a62c5e5e4827ab570c5bb00a87af7890545eaf6500a1@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g28_s0_lives0_dlg3[] = { /* 0x819609c */
    DEBUGINFO_O(3097),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs4_g28_s0_lives1_dlg2[] = { /* 0x819614c */
    DEBUGINFO_O(3111),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:d91425b80652d2a878eb5173d5672b870aa20b16b2352e1e903757904b10ccdb@@)),
    MSG_NPC(1, (@@STRING:ae6d6a9664eb0b6c444ea59740aa1532d69c332e14a59b4b9e4ea31aacf62976@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g28_s0_lives2_dlg2[] = { /* 0x8196210 */
    DEBUGINFO_O(3121),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:21302c67c35eb313ac806df3485995c7ac886d71a74f25e849cf07c7a833d08e@@)),
    MSG_NPC(1, (@@STRING:17cd9ea2c1cf671cd4ac75bff706b5d94a01661adcc709588febf2ce48063558@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g28_s0_lives3_dlg2[] = { /* 0x81962d8 */
    DEBUGINFO_O(3131),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1813119d11915e52f49b75f0180ffa3941aa121c92691373c59246f9c8c114a6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g28_s0_lives4_dlg2[] = { /* 0x8196370 */
    DEBUGINFO_O(3140),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:d3269a760193c2fd9dc2202d57f26ec17f72f03911dd423a14e83d72609860ca@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs4_g29_s0_station_sref_script[] = { /* 0x8196438 */
    DEBUGINFO_O(3149),
    SELECT_MAP(4),
    CANCEL_ENTITIES(0, 0),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_INTRO),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs4_g29_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs4_g29_s0_station_sref_script }; /* 0x81964c8 */

static const struct ScriptCommand s_gs4_g29_s0_lives0_dlg0[] = { /* 0x81964d4 */
    DEBUGINFO_O(3163),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(5),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x80, 0x00,  0x0100,  0x00000011,  0x00000000, NULL },
    { 0x80, 0x00,  0x0180,  0x00000012,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x80, 0x00,  0x0200,  0x00000013,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs4_g0_s0_lives[] = { /* 0x8196574 */
    /*  0 */ {  56,   0,   0,   0, {  49,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s0_lives0_dlg0,
    } },
    /*  1 */ {  57,   0,   0,   0, {  89,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g0_s1_lives[] = { /* 0x81965a4 */
    /*  0 */ {   0,   2,   0,   0, {   9,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   6,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g0_s2_lives[] = { /* 0x81965d4 */
    /*  0 */ {   0,   0,   0,   0, {  49,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  49,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g0_s3_lives[] = { /* 0x8196604 */
    /*  0 */ {   0,   0,   0,   0, {  27,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  23,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g0_s4_lives[] = { /* 0x8196634 */
    /*  0 */ {   0,   4,   0,   0, {  37,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  37,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g1_s0_lives[] = { /* 0x8196664 */
    /*  0 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g1_s0_lives0_dlg2,
    } },
    /*  1 */ { 104,   3,   0,   0, {  33,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs4_g1_s0_lives1_dlg2,
    } },
    /*  2 */ { 106,   4,   0,   0, {  37,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs4_g1_s0_lives2_dlg2,
    } },
    /*  3 */ { 105,   5,   0,   0, {  41,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs4_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  79,   0,   0,   0, {  29,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g1_s0_lives4_dlg0,
        [2] = s_gs4_g1_s0_lives4_dlg2,
        [3] = s_gs4_g1_s0_lives4_dlg3,
    } },
};

static const struct GroundLivesData s_gs4_g1_s1_lives[] = { /* 0x81966dc */
    /*  0 */ {   0,   2,   0,   0, {  60,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g1_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {  60,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g1_s1_lives1_dlg0,
    } },
    /*  2 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g1_s1_lives2_dlg0,
    } },
    /*  3 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g1_s1_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g1_s2_lives[] = { /* 0x819673c */
    /*  0 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g1_s2_lives0_dlg2,
    } },
    /*  1 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g1_s2_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g3_s0_lives[] = { /* 0x819676c */
    /*  0 */ {   0,   4,   0,   0, {  23,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  27,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g3_s0_lives1_dlg0,
    } },
    /*  2 */ { 109,   0,   0,   0, {  27,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g3_s0_lives2_dlg0,
    } },
    /*  3 */ { 110,   0,   0,   0, {  23,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g3_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g4_s0_lives[] = { /* 0x81967cc */
    /*  0 */ { 124,   0,   0,   0, {  27,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g4_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g5_s0_lives[] = { /* 0x81967e4 */
    /*  0 */ {   1,   4,   0,   0, {  35,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  39,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g6_s0_lives[] = { /* 0x8196814 */
    /*  0 */ {  92,   4,   0,   0, {  39,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g6_s0_lives0_dlg0,
        [2] = s_gs4_g6_s0_lives0_dlg2,
        [3] = s_gs4_g6_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs4_g7_s0_lives[] = { /* 0x819682c */
    /*  0 */ {   0,   4,   0,   0, {  37,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g7_s0_lives0_dlg0,
    } },
    /*  1 */ { 104,   3,   0,   0, {  33,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g7_s0_lives1_dlg0,
    } },
    /*  2 */ { 106,   4,   0,   0, {  37,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g7_s0_lives2_dlg0,
    } },
    /*  3 */ { 105,   5,   0,   0, {  41,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g7_s0_lives3_dlg0,
    } },
    /*  4 */ {  92,   4,   0,   0, {  39,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g7_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g8_s0_lives[] = { /* 0x81968a4 */
    /*  0 */ {  93,   2,   0,   0, {  26,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g8_s0_lives0_dlg0,
        [2] = s_gs4_g8_s0_lives0_dlg2,
    } },
    /*  1 */ {  92,   6,   0,   0, {  30,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g8_s0_lives1_dlg0,
        [2] = s_gs4_g8_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g9_s0_lives[] = { /* 0x81968d4 */
    /*  0 */ {   0,   0,   0,   0, {  28,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g9_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  28,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g9_s0_lives1_dlg0,
    } },
    /*  2 */ {  93,   2,   0,   0, {  30,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g9_s0_lives2_dlg0,
    } },
    /*  3 */ {  92,   6,   0,   0, {  26,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g9_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g10_s0_lives[] = { /* 0x8196934 */
    /*  0 */ {  93,   2,   0,   0, {  26,  47, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g10_s0_lives0_dlg2,
    } },
    /*  1 */ {  92,   6,   0,   0, {  30,  47, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g10_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g11_s1_lives[] = { /* 0x8196964 */
    /*  0 */ {   0,   4,   0,   0, {  35,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g11_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  40,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g11_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g11_s2_lives[] = { /* 0x8196994 */
    /*  0 */ {   0,   4,   0,   0, {  37,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g11_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g11_s3_lives[] = { /* 0x81969ac */
    /*  0 */ {  30,   0,   0,   0, {  37,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g11_s3_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g11_s4_lives[] = { /* 0x81969c4 */
    /*  0 */ {  31,   0,   0,   0, {  37,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs4_g11_s4_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g11_s5_lives[] = { /* 0x81969dc */
    /*  0 */ {  30,   0,   0,   0, {  35,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g11_s5_lives0_dlg0,
    } },
    /*  1 */ {  31,   0,   0,   0, {  40,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g11_s5_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g12_s0_lives[] = { /* 0x8196a0c */
    /*  0 */ {   0,   2,   0,   0, {   3,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g12_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {   6,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g12_s0_lives1_dlg0,
    } },
    /*  2 */ {  58,   0,   0,   0, {  50,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g12_s0_lives2_dlg0,
    } },
    /*  3 */ {  59,   6,   0,   0, {  73,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g12_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g16_s0_lives[] = { /* 0x8196a6c */
    /*  0 */ {  80,   4,   0,   0, {  40,  42, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g16_s0_lives0_dlg2,
    } },
    /*  1 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g16_s0_lives1_dlg0,
        [2] = s_gs4_g16_s0_lives1_dlg2,
    } },
    /*  2 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g16_s0_lives2_dlg0,
        [2] = s_gs4_g16_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g16_s1_lives[] = { /* 0x8196ab4 */
    /*  0 */ {   0,   0,   0,   0, {  61,  20, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g16_s1_lives0_dlg0,
    } },
    /*  1 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g16_s1_lives1_dlg0,
        [2] = s_gs4_g16_s1_lives1_dlg2,
    } },
    /*  2 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g16_s1_lives2_dlg0,
        [2] = s_gs4_g16_s1_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g17_s0_lives[] = { /* 0x8196afc */
    /*  0 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g17_s0_lives0_dlg0,
        [2] = s_gs4_g17_s0_lives0_dlg2,
    } },
    /*  1 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g17_s0_lives1_dlg0,
        [2] = s_gs4_g17_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g17_s1_lives[] = { /* 0x8196b2c */
    /*  0 */ {   0,   0,   0,   0, {  61,  20, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g17_s1_lives0_dlg0,
    } },
    /*  1 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g17_s1_lives1_dlg0,
        [2] = s_gs4_g17_s1_lives1_dlg2,
    } },
    /*  2 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g17_s1_lives2_dlg0,
        [2] = s_gs4_g17_s1_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g18_s0_lives[] = { /* 0x8196b74 */
    /*  0 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g18_s0_lives0_dlg2,
        [3] = s_gs4_g18_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs4_g18_s1_lives[] = { /* 0x8196b8c */
    /*  0 */ {  80,   4,   0,   0, {  40,  42, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g18_s1_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g19_s0_lives[] = { /* 0x8196ba4 */
    /*  0 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g19_s0_lives0_dlg0,
        [2] = s_gs4_g19_s0_lives0_dlg2,
    } },
    /*  1 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g19_s0_lives1_dlg0,
        [2] = s_gs4_g19_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g19_s1_lives[] = { /* 0x8196bd4 */
    /*  0 */ {   0,   0,   0,   0, {   7,  10, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g19_s1_lives0_dlg0,
    } },
    /*  1 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g19_s1_lives1_dlg0,
        [2] = s_gs4_g19_s1_lives1_dlg2,
    } },
    /*  2 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g19_s1_lives2_dlg0,
        [2] = s_gs4_g19_s1_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g20_s0_lives[] = { /* 0x8196c1c */
    /*  0 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g20_s0_lives0_dlg0,
        [2] = s_gs4_g20_s0_lives0_dlg2,
    } },
    /*  1 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g20_s0_lives1_dlg0,
        [2] = s_gs4_g20_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g20_s1_lives[] = { /* 0x8196c4c */
    /*  0 */ {   4,   2,   0,   0, {  60,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g20_s1_lives0_dlg0,
    } },
    /*  1 */ {   0,   2,   0,   0, {  60,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g20_s1_lives1_dlg0,
    } },
    /*  2 */ {   4,   2,   0,   0, {  60,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g20_s1_lives2_dlg0,
    } },
    /*  3 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g20_s1_lives3_dlg0,
        [2] = s_gs4_g20_s1_lives3_dlg2,
    } },
    /*  4 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g20_s1_lives4_dlg0,
        [2] = s_gs4_g20_s1_lives4_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g21_s0_lives[] = { /* 0x8196cc4 */
    /*  0 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g21_s0_lives0_dlg0,
        [2] = s_gs4_g21_s0_lives0_dlg2,
    } },
    /*  1 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g21_s0_lives1_dlg0,
        [2] = s_gs4_g21_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g21_s1_lives[] = { /* 0x8196cf4 */
    /*  0 */ {   0,   2,   0,   0, {  60,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g21_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {  60,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g21_s1_lives1_dlg0,
    } },
    /*  2 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g21_s1_lives2_dlg0,
        [2] = s_gs4_g21_s1_lives2_dlg2,
    } },
    /*  3 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g21_s1_lives3_dlg0,
        [2] = s_gs4_g21_s1_lives3_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g22_s0_lives[] = { /* 0x8196d54 */
    /*  0 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g22_s0_lives0_dlg0,
        [2] = s_gs4_g22_s0_lives0_dlg2,
    } },
    /*  1 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g22_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g22_s1_lives[] = { /* 0x8196d84 */
    /*  0 */ {   0,   2,   0,   0, {  60,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g22_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {  60,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g22_s1_lives1_dlg0,
    } },
    /*  2 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g22_s1_lives2_dlg0,
    } },
    /*  3 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g22_s1_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs4_g22_s2_lives[] = { /* 0x8196de4 */
    /*  0 */ {  66,   2,   0,   0, {  63,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g22_s2_lives0_dlg0,
    } },
    /*  1 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g22_s2_lives1_dlg0,
        [2] = s_gs4_g22_s2_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g23_s0_lives[] = { /* 0x8196e14 */
    /*  0 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [1] = s_gs4_g23_s0_lives0_dlg1,
        [2] = s_gs4_g23_s0_lives0_dlg2,
        [3] = s_gs4_g23_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs4_g24_s0_lives[] = { /* 0x8196e2c */
    /*  0 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g24_s0_lives0_dlg0,
        [2] = s_gs4_g24_s0_lives0_dlg2,
        [3] = s_gs4_g24_s0_lives0_dlg3,
    } },
    /*  1 */ {  80,   4,   0,   0, {  40,  42, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g24_s0_lives1_dlg2,
    } },
    /*  2 */ {  79,   0,   0,   0, {  29,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g24_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g25_s0_lives[] = { /* 0x8196e74 */
    /*  0 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g25_s0_lives0_dlg0,
        [2] = s_gs4_g25_s0_lives0_dlg2,
        [3] = s_gs4_g25_s0_lives0_dlg3,
    } },
    /*  1 */ {  80,   4,   0,   0, {  40,  42, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g25_s0_lives1_dlg2,
    } },
    /*  2 */ {  79,   0,   0,   0, {  29,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g25_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g26_s0_lives[] = { /* 0x8196ebc */
    /*  0 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g26_s0_lives0_dlg0,
        [2] = s_gs4_g26_s0_lives0_dlg2,
        [3] = s_gs4_g26_s0_lives0_dlg3,
    } },
    /*  1 */ {  80,   4,   0,   0, {  40,  42, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g26_s0_lives1_dlg2,
    } },
    /*  2 */ {  79,   0,   0,   0, {  29,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g26_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g28_s0_lives[] = { /* 0x8196f04 */
    /*  0 */ {  68,   2,   0,   0, {  63,  34, 0, CPOS_HALFTILE }, {
        [1] = s_gs4_g28_s0_lives0_dlg1,
        [2] = s_gs4_g28_s0_lives0_dlg2,
        [3] = s_gs4_g28_s0_lives0_dlg3,
    } },
    /*  1 */ {  79,   0,   0,   0, {  29,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g28_s0_lives1_dlg2,
    } },
    /*  2 */ { 104,   6,   0,   0, {  40,  41, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g28_s0_lives2_dlg2,
    } },
    /*  3 */ { 105,   6,   0,   0, {  40,  43, 0, CPOS_HALFTILE }, {
        [2] = s_gs4_g28_s0_lives3_dlg2,
    } },
    /*  4 */ { 106,   2,   0,   0, {  34,  43, 0, 0 }, {
        [2] = s_gs4_g28_s0_lives4_dlg2,
    } },
};

static const struct GroundLivesData s_gs4_g29_s0_lives[] = { /* 0x8196f7c */
    /*  0 */ {  55,   2,   0,   0, {  51,  25, 0, CPOS_HALFTILE }, {
        [0] = s_gs4_g29_s0_lives0_dlg0,
    } },
};

static const struct GroundObjectData s_gs4_g0_s0_objs[] = { /* 0x8196f94 */
    /*  0 */ {  14,   0,   5,   2, {  37,  38, CPOS_HALFTILE, 0 }, {
        [2] = s_gs4_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundEffectData s_gs4_g1_s1_effs[] = { /* 0x8196fac */
    /*  0 */ {   0,   0,   1,   1, {  56,  39, 0, 0 }, s_gs4_g1_s1_eff0_script },
};

static const struct GroundEffectData s_gs4_g3_s0_effs[] = { /* 0x8196fb8 */
    /*  0 */ {   0,   0,   1,   1, {  25,  38, 0, CPOS_HALFTILE }, s_gs4_g3_s0_eff0_script },
};

static const struct GroundEffectData s_gs4_g5_s0_effs[] = { /* 0x8196fc4 */
    /*  0 */ {   0,   0,   1,   1, {  37,  38, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs4_g7_s0_effs[] = { /* 0x8196fd0 */
    /*  0 */ {   0,   0,   1,   1, {  37,  38, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs4_g11_s0_effs[] = { /* 0x8196fdc */
    /*  0 */ {   0,   0,   1,   1, {  37,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs4_g12_s0_effs[] = { /* 0x8196fe8 */
    /*  0 */ {   0,   0,   1,   1, {  15,  40, 0, CPOS_HALFTILE }, s_gs4_g12_s0_eff0_script },
};

static const struct GroundEffectData s_gs4_g20_s1_effs[] = { /* 0x8196ff4 */
    /*  0 */ {   0,   0,   1,   1, {  61,  34, 0, 0 }, s_gs4_g20_s1_eff0_script },
};

static const struct GroundEffectData s_gs4_g21_s1_effs[] = { /* 0x8197000 */
    /*  0 */ {   0,   0,   1,   1, {  61,  34, 0, 0 }, s_gs4_g21_s1_eff0_script },
};

static const struct GroundEffectData s_gs4_g22_s1_effs[] = { /* 0x819700c */
    /*  0 */ {   0,   0,   1,   1, {  61,  34, 0, 0 }, s_gs4_g22_s1_eff0_script },
};

static const struct GroundEffectData s_gs4_g27_s0_effs[] = { /* 0x8197018 */
    /*  0 */ {   0,   0,   1,   1, {  32,  29, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs4_g27_s0_eff0_script },
};

static const struct GroundEffectData s_gs4_g29_s0_effs[] = { /* 0x8197024 */
    /*  0 */ {   0,   0,   1,   1, {  55,  27, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs4_g0_s0_evts[] = { /* 0x8197030 */
    /*  0 */ {   3,  66,   0,   0, {   0,   0, 0, 0 }, &s_gs4_g0_s0_evt0_sref },
    /*  1 */ {   3,   3,   0,   0, {  48,  31, 0, 0 }, &s_gs4_g0_s0_evt1_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8197048 */
    &s_gs4_g0_s0_station_sref,
    &s_gs4_g1_s0_station_sref,
    &s_gs4_g1_s1_station_sref,
    &s_gs4_g1_s2_station_sref,
    &s_gs4_g2_s0_station_sref,
    &s_gs4_g3_s0_station_sref,
    &s_gs4_g5_s0_station_sref,
    &s_gs4_g7_s0_station_sref,
    &s_gs4_g9_s0_station_sref,
    &s_gs4_g11_s0_station_sref,
    &s_gs4_g12_s0_station_sref,
    &s_gs4_g13_s0_station_sref,
    &s_gs4_g14_s0_station_sref,
    &s_gs4_g15_s0_station_sref,
    &s_gs4_g16_s0_station_sref,
    &s_gs4_g16_s1_station_sref,
    &s_gs4_g17_s0_station_sref,
    &s_gs4_g17_s1_station_sref,
    &s_gs4_g18_s0_station_sref,
    &s_gs4_g19_s0_station_sref,
    &s_gs4_g19_s1_station_sref,
    &s_gs4_g20_s0_station_sref,
    &s_gs4_g20_s1_station_sref,
    &s_gs4_g21_s0_station_sref,
    &s_gs4_g21_s1_station_sref,
    &s_gs4_g22_s0_station_sref,
    &s_gs4_g22_s1_station_sref,
    &s_gs4_g23_s0_station_sref,
    &s_gs4_g24_s0_station_sref,
    &s_gs4_g25_s0_station_sref,
    &s_gs4_g26_s0_station_sref,
    &s_gs4_g27_s0_station_sref,
    &s_gs4_g28_s0_station_sref,
    &s_gs4_g29_s0_station_sref,
};

static const struct GroundScriptSector s_gs4_g0_sectors[] = { /* 0x81970d0 */
    { LPARRAY(s_gs4_g0_s0_lives), LPARRAY(s_gs4_g0_s0_objs), 0,NULL, LPARRAY(s_gs4_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs4_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs4_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs4_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs4_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g1_sectors[] = { /* 0x8197198 */
    { LPARRAY(s_gs4_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs4_g1_s1_lives), 0,NULL, LPARRAY(s_gs4_g1_s1_effs), 0,NULL, 1,&sStationScripts[2], },
    { LPARRAY(s_gs4_g1_s2_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs4_g2_sectors[] = { /* 0x8197210 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs4_g3_sectors[] = { /* 0x8197238 */
    { LPARRAY(s_gs4_g3_s0_lives), 0,NULL, LPARRAY(s_gs4_g3_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs4_g4_sectors[] = { /* 0x8197260 */
    { LPARRAY(s_gs4_g4_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g5_sectors[] = { /* 0x8197288 */
    { LPARRAY(s_gs4_g5_s0_lives), 0,NULL, LPARRAY(s_gs4_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptSector s_gs4_g6_sectors[] = { /* 0x81972b0 */
    { LPARRAY(s_gs4_g6_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g7_sectors[] = { /* 0x81972d8 */
    { LPARRAY(s_gs4_g7_s0_lives), 0,NULL, LPARRAY(s_gs4_g7_s0_effs), 0,NULL, 1,&sStationScripts[7], },
};

static const struct GroundScriptSector s_gs4_g8_sectors[] = { /* 0x8197300 */
    { LPARRAY(s_gs4_g8_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g9_sectors[] = { /* 0x8197328 */
    { LPARRAY(s_gs4_g9_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[8], },
};

static const struct GroundScriptSector s_gs4_g10_sectors[] = { /* 0x8197350 */
    { LPARRAY(s_gs4_g10_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g11_sectors[] = { /* 0x8197378 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs4_g11_s0_effs), 0,NULL, 1,&sStationScripts[9], },
    { LPARRAY(s_gs4_g11_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs4_g11_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs4_g11_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs4_g11_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs4_g11_s5_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g12_sectors[] = { /* 0x8197468 */
    { LPARRAY(s_gs4_g12_s0_lives), 0,NULL, LPARRAY(s_gs4_g12_s0_effs), 0,NULL, 1,&sStationScripts[10], },
};

static const struct GroundScriptSector s_gs4_g13_sectors[] = { /* 0x8197490 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[11], },
};

static const struct GroundScriptSector s_gs4_g14_sectors[] = { /* 0x81974b8 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[12], },
};

static const struct GroundScriptSector s_gs4_g15_sectors[] = { /* 0x81974e0 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[13], },
};

static const struct GroundScriptSector s_gs4_g16_sectors[] = { /* 0x8197508 */
    { LPARRAY(s_gs4_g16_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[14], },
    { LPARRAY(s_gs4_g16_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[15], },
};

static const struct GroundScriptSector s_gs4_g17_sectors[] = { /* 0x8197558 */
    { LPARRAY(s_gs4_g17_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[16], },
    { LPARRAY(s_gs4_g17_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[17], },
};

static const struct GroundScriptSector s_gs4_g18_sectors[] = { /* 0x81975a8 */
    { LPARRAY(s_gs4_g18_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[18], },
    { LPARRAY(s_gs4_g18_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g19_sectors[] = { /* 0x81975f8 */
    { LPARRAY(s_gs4_g19_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[19], },
    { LPARRAY(s_gs4_g19_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[20], },
};

static const struct GroundScriptSector s_gs4_g20_sectors[] = { /* 0x8197648 */
    { LPARRAY(s_gs4_g20_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[21], },
    { LPARRAY(s_gs4_g20_s1_lives), 0,NULL, LPARRAY(s_gs4_g20_s1_effs), 0,NULL, 1,&sStationScripts[22], },
};

static const struct GroundScriptSector s_gs4_g21_sectors[] = { /* 0x8197698 */
    { LPARRAY(s_gs4_g21_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[23], },
    { LPARRAY(s_gs4_g21_s1_lives), 0,NULL, LPARRAY(s_gs4_g21_s1_effs), 0,NULL, 1,&sStationScripts[24], },
};

static const struct GroundScriptSector s_gs4_g22_sectors[] = { /* 0x81976e8 */
    { LPARRAY(s_gs4_g22_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[25], },
    { LPARRAY(s_gs4_g22_s1_lives), 0,NULL, LPARRAY(s_gs4_g22_s1_effs), 0,NULL, 1,&sStationScripts[26], },
    { LPARRAY(s_gs4_g22_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs4_g23_sectors[] = { /* 0x8197760 */
    { LPARRAY(s_gs4_g23_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[27], },
};

static const struct GroundScriptSector s_gs4_g24_sectors[] = { /* 0x8197788 */
    { LPARRAY(s_gs4_g24_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[28], },
};

static const struct GroundScriptSector s_gs4_g25_sectors[] = { /* 0x81977b0 */
    { LPARRAY(s_gs4_g25_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[29], },
};

static const struct GroundScriptSector s_gs4_g26_sectors[] = { /* 0x81977d8 */
    { LPARRAY(s_gs4_g26_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[30], },
};

static const struct GroundScriptSector s_gs4_g27_sectors[] = { /* 0x8197800 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs4_g27_s0_effs), 0,NULL, 1,&sStationScripts[31], },
};

static const struct GroundScriptSector s_gs4_g28_sectors[] = { /* 0x8197828 */
    { LPARRAY(s_gs4_g28_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[32], },
};

static const struct GroundScriptSector s_gs4_g29_sectors[] = { /* 0x8197850 */
    { LPARRAY(s_gs4_g29_s0_lives), 0,NULL, LPARRAY(s_gs4_g29_s0_effs), 0,NULL, 1,&sStationScripts[33], },
};

static const struct GroundScriptGroup s_gs4_groups[] = { /* 0x8197878 */
    { LPARRAY(s_gs4_g0_sectors) },
    { LPARRAY(s_gs4_g1_sectors) },
    { LPARRAY(s_gs4_g2_sectors) },
    { LPARRAY(s_gs4_g3_sectors) },
    { LPARRAY(s_gs4_g4_sectors) },
    { LPARRAY(s_gs4_g5_sectors) },
    { LPARRAY(s_gs4_g6_sectors) },
    { LPARRAY(s_gs4_g7_sectors) },
    { LPARRAY(s_gs4_g8_sectors) },
    { LPARRAY(s_gs4_g9_sectors) },
    { LPARRAY(s_gs4_g10_sectors) },
    { LPARRAY(s_gs4_g11_sectors) },
    { LPARRAY(s_gs4_g12_sectors) },
    { LPARRAY(s_gs4_g13_sectors) },
    { LPARRAY(s_gs4_g14_sectors) },
    { LPARRAY(s_gs4_g15_sectors) },
    { LPARRAY(s_gs4_g16_sectors) },
    { LPARRAY(s_gs4_g17_sectors) },
    { LPARRAY(s_gs4_g18_sectors) },
    { LPARRAY(s_gs4_g19_sectors) },
    { LPARRAY(s_gs4_g20_sectors) },
    { LPARRAY(s_gs4_g21_sectors) },
    { LPARRAY(s_gs4_g22_sectors) },
    { LPARRAY(s_gs4_g23_sectors) },
    { LPARRAY(s_gs4_g24_sectors) },
    { LPARRAY(s_gs4_g25_sectors) },
    { LPARRAY(s_gs4_g26_sectors) },
    { LPARRAY(s_gs4_g27_sectors) },
    { LPARRAY(s_gs4_g28_sectors) },
    { LPARRAY(s_gs4_g29_sectors) },
};

static const struct GroundLink s_gs4_links[] = { /* 0x8197968 */
    /* link   0 */ { { /*x*/  50, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/   0, /*y*/   9, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  53, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/  88, /*y*/  20, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   4 */ { { /*x*/  61, /*y*/  33, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   5 */ { { /*x*/  53, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   6 */ { { /*x*/  56, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   7 */ { { /*x*/  59, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   8 */ { { /*x*/  60, /*y*/  29, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   9 */ { { /*x*/  63, /*y*/  31, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  10 */ { { /*x*/  50, /*y*/  25, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  11 */ { { /*x*/  37, /*y*/  39, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  12 */ { { /*x*/  36, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  13 */ { { /*x*/  39, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  14 */ { { /*x*/  22, /*y*/  18, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  15 */ { { /*x*/  53, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  16 */ { { /*x*/  57, /*y*/  29, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  17 */ { { /*x*/  57, /*y*/  23, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  18 */ { { /*x*/  63, /*y*/  20, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  19 */ { { /*x*/  74, /*y*/  12, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs4 = { LPARRAY(s_gs4_groups), s_gs4_links }; /* 0x8197a08 */
