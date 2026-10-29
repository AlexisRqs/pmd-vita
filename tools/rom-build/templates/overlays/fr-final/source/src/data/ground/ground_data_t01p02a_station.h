

































static const struct ScriptCommand s_gs2_g0_s0_station_sref_script[] = { /* 0x817d60c */
    DEBUGINFO_O(36),
    SELECT_MAP(2),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_LE, 4, /* to label */ 0),
    COND(JUDGE_LE, 5, /* to label */ 1),
    COND(JUDGE_EQ, 6, /* to label */ 2),
    COND(JUDGE_EQ, 7, /* to label */ 3),
    COND(JUDGE_EQ, 8, /* to label */ 4),
    COND(JUDGE_EQ, 9, /* to label */ 5),
    COND(JUDGE_LE, 9, /* to label */ 6),
    COND(JUDGE_LT, 15, /* to label */ 6),
    COND(JUDGE_EQ, 15, /* to label */ 7),
    COND(JUDGE_EQ, 16, /* to label */ 8),
    COND(JUDGE_LT, 18, /* to label */ 9),
    COND(JUDGE_EQ, 18, /* to label */ 10),
    JUMP_LABEL(11),
  LABEL(0), /* = 0x00 */
    CALL_STATION( 10,  0),
    JUMP_LABEL(12),
  LABEL(1), /* = 0x01 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 13),
    COND(JUDGE_LE, 4, /* to label */ 14),
    COND(JUDGE_LE, 7, /* to label */ 15),
    CALL_STATION( 13,  0),
    JUMP_LABEL(12),
  LABEL(13), /* = 0x0d */
    CALL_STATION( 10,  0),
    JUMP_LABEL(12),
  LABEL(14), /* = 0x0e */
    CALL_STATION( 11,  0),
    JUMP_LABEL(12),
  LABEL(15), /* = 0x0f */
    CALL_STATION( 12,  0),
    JUMP_LABEL(12),
  LABEL(2), /* = 0x02 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 16),
    CALL_STATION( 14,  0),
    JUMP_LABEL(12),
  LABEL(16), /* = 0x10 */
    CALL_STATION( 13,  0),
    JUMP_LABEL(12),
  LABEL(3), /* = 0x03 */
    CALL_STATION( 14,  0),
    JUMP_LABEL(12),
  LABEL(4), /* = 0x04 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 17),
    CALL_STATION( 15,  0),
    JUMP_LABEL(12),
  LABEL(17), /* = 0x11 */
    CALL_STATION( 14,  0),
    JUMP_LABEL(12),
  LABEL(5), /* = 0x05 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 18),
    COND(JUDGE_LE, 5, /* to label */ 19),
    JUMP_LABEL(12),
  LABEL(18), /* = 0x12 */
    CALL_STATION( 15,  0),
    JUMP_LABEL(12),
  LABEL(19), /* = 0x13 */
    CALL_STATION( 16,  0),
    JUMP_LABEL(12),
  LABEL(6), /* = 0x06 */
    CALL_STATION( 19,  0),
    JUMP_LABEL(12),
  LABEL(7), /* = 0x07 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 3, /* to label */ 20),
    COND(JUDGE_LE, 5, /* to label */ 21),
    COND(JUDGE_LE, 7, /* to label */ 22),
    COND(JUDGE_LE, 11, /* to label */ 23),
    JUMP_LABEL(24),
  LABEL(20), /* = 0x14 */
    CALL_STATION( 20,  0),
    JUMP_LABEL(12),
  LABEL(21), /* = 0x15 */
    CALL_STATION( 21,  0),
    JUMP_LABEL(12),
  LABEL(22), /* = 0x16 */
    CALL_STATION( 22,  0),
    JUMP_LABEL(12),
  LABEL(23), /* = 0x17 */
    CALL_STATION( 23,  0),
    JUMP_LABEL(12),
  LABEL(24), /* = 0x18 */
    CALL_STATION( 24,  0),
    JUMP_LABEL(12),
  LABEL(8), /* = 0x08 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 25),
    COND(JUDGE_LE, 4, /* to label */ 26),
    JUMP_LABEL(27),
  LABEL(25), /* = 0x19 */
    CALL_STATION( 25,  0),
    JUMP_LABEL(12),
  LABEL(26), /* = 0x1a */
    CALL_STATION( 26,  0),
    JUMP_LABEL(12),
  LABEL(27), /* = 0x1b */
    CALL_STATION( 27,  0),
    JUMP_LABEL(12),
  LABEL(9), /* = 0x09 */
    CALL_STATION( 27,  0),
    JUMP_LABEL(12),
  LABEL(10), /* = 0x0a */
    CALL_STATION( 30,  0),
    JUMP_LABEL(12),
  LABEL(11), /* = 0x0b */
    CALL_STATION(  1,  0),
    JUMP_LABEL(12),
  LABEL(12), /* = 0x0c */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(1, /* to label */ 28),
    COND_EQUAL(8, /* to label */ 29),
  LABEL(28), /* = 0x1c */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(30),
  LABEL(29), /* = 0x1d */
    SELECT_LIVES(0, 2),
    JUMP_LABEL(30),
  LABEL(30), /* = 0x1e */
    BGM_SWITCH(MUS_FILE_SELECT),
    JUMPIF_SCENARIOCHECK(QUEST_REACHED_POSTGAME, /* to label */ 31),
    JUMP_LABEL(32),
  LABEL(31), /* = 0x1f */
    SELECT_EVENTS(0, 2),
  LABEL(32), /* = 0x20 */
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs2_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs2_g0_s0_station_sref_script }; /* 0x817de6c */

static const struct ScriptCommand s_gs2_g0_s0_evt0_sref_script[] = { /* 0x817de78 */
    DEBUGINFO_O(172),
    { 0x01, 0x00, -0x0001,  0x00000001,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs2_g0_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs2_g0_s0_evt0_sref_script }; /* 0x817dea8 */

static const struct ScriptCommand s_gs2_g0_s1_lives0_dlg0[] = { /* 0x817deb4 */
    DEBUGINFO_O(180),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs2_g0_s1_lives1_dlg0[] = { /* 0x817def4 */
    DEBUGINFO_O(187),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs2_g0_s2_evt0_sref_script[] = { /* 0x817df34 */
    DEBUGINFO_O(194),
    JUMPIF(JUDGE_GT, UNIT_SUM, 1, /* to label */ 0),
    { 0x01, 0x00, -0x0001,  0x00000008,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    MSG_INSTANT((@@STRING:a1157852ce67b9d56f39f1640ffe2892c0a70a4a88b35d7fee385a90ed591c37@@)),
    MSG_INSTANT((@@STRING:7bedd07b861d6c8c047dc2cbed7b08f119ddc7dcd107b630cdda8c1ca9c394f0@@)),
    TEXTBOX_CLEAR,
    RET,
};

static const ScriptRef s_gs2_g0_s2_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs2_g0_s2_evt0_sref_script }; /* 0x817e018 */

static const struct ScriptCommand s_gs2_g0_s2_lives0_dlg0[] = { /* 0x817e024 */
    DEBUGINFO_O(208),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs2_g0_s2_lives1_dlg0[] = { /* 0x817e064 */
    DEBUGINFO_O(215),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs2_g1_s0_station_sref_script[] = { /* 0x817e0a4 */
    DEBUGINFO_O(222),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g1_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g1_s0_station_sref_script }; /* 0x817e0e4 */

static const struct ScriptCommand s_gs2_g1_s0_lives0_dlg0[] = { /* 0x817e0f0 */
    DEBUGINFO_O(231),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g1_s0_lives0_dlg2[] = { /* 0x817e130 */
    DEBUGINFO_O(238),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000005e,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:82b2df5b43c4a48998f1a36236472dbce74ed9e3dbe7e68ec6c94f2d80b477d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:d8df3ea6d989a2e75881d4ef4e65536faa593d0dfac14a5ecb22b1bea553d408@@)),
    MSG_NPC(2, (@@STRING:cedee2b91b650ab0f921a2f2042e3d5ea40f695cb58d418d2fd372931f09b2db@@)),
    MSG_NPC(2, (@@STRING:6f13249c09854485c4f5911cd89c722c52eb839c19cd733ac02aac004f4f3a44@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:cf57e9d7323d8f565c94023053251458fa79e0367284d03146acdfb6ba6ca888@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g1_s0_lives1_dlg0[] = { /* 0x817e380 */
    DEBUGINFO_O(259),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g1_s0_lives1_dlg2[] = { /* 0x817e3c0 */
    DEBUGINFO_O(266),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000005e,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:82b2df5b43c4a48998f1a36236472dbce74ed9e3dbe7e68ec6c94f2d80b477d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:d8df3ea6d989a2e75881d4ef4e65536faa593d0dfac14a5ecb22b1bea553d408@@)),
    MSG_NPC(2, (@@STRING:cedee2b91b650ab0f921a2f2042e3d5ea40f695cb58d418d2fd372931f09b2db@@)),
    MSG_NPC(2, (@@STRING:6f13249c09854485c4f5911cd89c722c52eb839c19cd733ac02aac004f4f3a44@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:cf57e9d7323d8f565c94023053251458fa79e0367284d03146acdfb6ba6ca888@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g1_s0_lives2_dlg0[] = { /* 0x817e4e0 */
    DEBUGINFO_O(287),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g1_s0_lives2_dlg2[] = { /* 0x817e520 */
    DEBUGINFO_O(294),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:7a4dc94923831b49183abbd9584466c9c2d1f8c2797cf9bd0c9cc76207aba83b@@)),
    MSG_NPC(1, (@@STRING:008e02d552d9cfff4e0f8829bdd6c510fac2b2c6f6125933f30189bac3cc6c27@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g1_s0_obj0_dlg2[] = { /* 0x817e5d8 */
    DEBUGINFO_O(304),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g2_s0_station_sref_script[] = { /* 0x817e608 */
    DEBUGINFO_O(310),
    JUMPIF_EQUAL(WARP_LOCK, 0, /* to label */ 0),
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    JUMPIF_SCENE_EQ(SCENARIO_SUB2, 33, 3, /* to label */ 1),
    JUMPIF_SCENE_EQ(SCENARIO_SUB8, 51, 1, /* to label */ 2),
    JUMPIF_SCENE_EQ(SCENARIO_SUB8, 51, 3, /* to label */ 3),
    JUMPIF_SCENE_EQ(SCENARIO_SUB8, 51, 5, /* to label */ 4),
    JUMPIF_SCENE_EQ(SCENARIO_SUB8, 51, 6, /* to label */ 4),
    JUMPIF_SCENE_LT(SCENARIO_SUB7, 49, 2, /* to label */ 5),
    JUMPIF_SCENE_GT(SCENARIO_SUB7, 49, -1, /* to label */ 5),
    JUMPIF_SCENE_LT(SCENARIO_SUB7, 49, 4, /* to label */ 6),
    JUMPIF_SUM(JUDGE_LT, EVENT_S07E01, 11, /* to label */ 6),
  LABEL(5), /* = 0x05 */
    RET_DIRECT,
  LABEL(1), /* = 0x01 */
    SELECT_ENTITIES(3, 0),
    RET_DIRECT,
  LABEL(6), /* = 0x06 */
    SELECT_ENTITIES(4, 0),
    RET_DIRECT,
  LABEL(2), /* = 0x02 */
    SELECT_ENTITIES(5, 0),
    RET_DIRECT,
  LABEL(3), /* = 0x03 */
    SELECT_ENTITIES(7, 0),
    RET_DIRECT,
  LABEL(4), /* = 0x04 */
    SELECT_ENTITIES(9, 0),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g2_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g2_s0_station_sref_script }; /* 0x817e7e8 */

static const struct ScriptCommand s_gs2_g3_s0_lives0_dlg0[] = { /* 0x817e7f4 */
    DEBUGINFO_O(345),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g3_s0_lives0_dlg2[] = { /* 0x817e834 */
    DEBUGINFO_O(352),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_SCENE_GT(SCENARIO_SUB2, 33, 3, /* to label */ 0),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:970d54c9318894a183d3a12e7efc3ce8ebb4f0b9dc1e4c18dd9761dd9cb8d6f6@@)),
    MSG_NPC(1, (@@STRING:58f83619ef68b30bcbf06e1503877c25d57cc9f1d152be7a6c5b25be7a6cd52d@@)),
    MSG_NPC(1, (@@STRING:8945626523ab27af78fb14240b641013e218f30f48b306ba399efc26630db752@@)),
    MSG_NPC(1, (@@STRING:a113f83787ac78c974bc7cdcf12c55607863e7205a894cdeebbb817f9d9d0d5c@@)),
    MSG_NPC(1, (@@STRING:ea3260ce8519a2a0261933eda19c177f11ba1ce7a803413d69e7506f08851a16@@)),
    MSG_NPC(1, (@@STRING:25a233d79e5ffa543af25968e5852f91f7cecafc58949c26c3c645a21169e1bf@@)),
    MSG_NPC(1, (@@STRING:cff1ca37e7ed6a1ddb8ccea5183c141fb15e9200f86b10a27aebf75cb304e0ed@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:a70cf1b10d8f4d1c9bad94c600a62caecef7b304eeb3909d225be5a07334f31f@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:8c8b736b301adb3498f07f2570e39d6620a38d1bd34b4943c947d55c03f3f0be@@)),
    MSG_NPC(1, (@@STRING:8034bc0314631bd17611604ced7496c55561ac46975b2058df6a9844bc73b818@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:c97c497620754474b4e5335a3717253c017ad412751784cb8f0fa71252e8959a@@)),
    MSG_NPC(1, (@@STRING:dd4471b935e2e0aaf7e9bb36f07c8ea3b0947ad03d5b93fa37be15c7774089ce@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_2C, 231, 0),
    WAIT(20),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:a165769102e6bcf4a1a23962069b43e48e824cef47ec49857a94df999fb8bfd2@@)),
    MSG_NPC(1, (@@STRING:2a5c6bc4d2f69d7d744d0eed5d4eb8cc877a5c03c657be302e6ecf9219e8a747@@)),
    MSG_NPC(1, (@@STRING:307a2c9aa007a4bd2deaea13674d6fae55b962909e4c18b3b94ee50758ebff9c@@)),
    MSG_NPC(1, (@@STRING:ce16c276fb0c927f26885a8aa78421e769092d51d17540eaa498fb50785aa0cb@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:b6bdece86ffeb68bd032222f5cd59ae43421ef3512c30a6b132ff6221bcc7c48@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_INSTANT((@@STRING:64d222fe47369c9e3b84c61c0f82905bef602a956c9e2c454e88b313d934011f@@)),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_FILE_SELECT),
    CMD_UNK_AF(RESCUE_DUNGEON_STORMY_SEA, TRUE),
    SCENARIO_CALC(SCENARIO_SUB2, 33,  4),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    MSG_NPC(1, (@@STRING:2a5c6bc4d2f69d7d744d0eed5d4eb8cc877a5c03c657be302e6ecf9219e8a747@@)),
    MSG_NPC(1, (@@STRING:307a2c9aa007a4bd2deaea13674d6fae55b962909e4c18b3b94ee50758ebff9c@@)),
    MSG_NPC(1, (@@STRING:ce16c276fb0c927f26885a8aa78421e769092d51d17540eaa498fb50785aa0cb@@)),
    MSG_NPC(1, (@@STRING:9ee3e8b941910225617040c3aa597504e69307a3f202774afd1a099d86bd6e75@@)),
    MSG_NPC(1, (@@STRING:be1801859ea94edd09f10d37070167c2dd1fef3bd76b45f57a1f04cd0d41c42c@@)),
    MSG_NPC(1, (@@STRING:2b1b9bdf73e60116ae541971daeb863f31e5f3b79cd75dc50ee0f5333e25c4d6@@)),
    MSG_NPC(1, (@@STRING:d4b42a57b018d942307f09af68d728a8a584a6cf51ff4120d9afe990eb27c648@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:03199610a350c64b8566f08aa497395515d6ec66c2cd83ba4632d7a7212d8525@@)),
    MSG_NPC(1, (@@STRING:cb8fc0e935d8ce39fab96f6139ddab416b6349e9bdae2b901e9b99ecee8179f5@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    JUMP_SCRIPT(END_TALK),
    RET,
};





static const struct ScriptCommand s_gs2_g3_s0_lives0_dlg3[] = { /* 0x817f2d4 */
    DEBUGINFO_O(428),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    JUMPIF_SCENE_GT(SCENARIO_SUB2, 33, 3, /* to label */ 0),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(2),
    WAIT(12),
    RET,
  LABEL(0), /* = 0x00 */
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs2_g3_s0_obj0_dlg2[] = { /* 0x817f474 */
    DEBUGINFO_O(457),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g4_s0_lives0_dlg0[] = { /* 0x817f4a4 */
    DEBUGINFO_O(463),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g4_s0_lives0_dlg2[] = { /* 0x817f4e4 */
    DEBUGINFO_O(470),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SET_ARRAYVAL(EVENT_S07E01,  3,  1),
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:0d8e29babd3505d1c11b86037a38005830479b633212911d2bd601b4614957f3@@)),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:1f21ddcf267b6a1a8d5e3def6629e272a9ab8379f38bf764ed3edcc8b658374e@@)),
    MSG_NPC(1, (@@STRING:7caa6a63648ede13e1053648f34d6221a5e3460731a2235ef8ff4905a0016c38@@)),
    MSG_NPC(1, (@@STRING:4ed1ee26c7d7b43eae9f67e1996609475b23ddd3e950c7941cd35fa26a1f69c2@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs2_g4_s0_lives0_dlg3[] = { /* 0x817f6b8 */
    DEBUGINFO_O(486),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    RET,
};

static const struct ScriptCommand s_gs2_g4_s0_obj0_dlg2[] = { /* 0x817f758 */
    DEBUGINFO_O(499),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g5_s0_lives0_dlg2[] = { /* 0x817f788 */
    DEBUGINFO_O(505),
    EXECUTE_STATION(-1, 6, 0),
    HALT,
};

static const struct ScriptCommand s_gs2_g5_s0_lives1_dlg2[] = { /* 0x817f7b8 */
    DEBUGINFO_O(511),
    EXECUTE_STATION(-1, 6, 0),
    HALT,
};

static const struct ScriptCommand s_gs2_g5_s0_evt0_sref_script[] = { /* 0x817f7e8 */
    DEBUGINFO_O(517),
    EXECUTE_STATION(-1, 6, 0),
    HALT,
};

static const ScriptRef s_gs2_g5_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs2_g5_s0_evt0_sref_script }; /* 0x817f818 */

static const struct ScriptCommand s_gs2_g6_s0_station_sref_script[] = { /* 0x817f824 */
    DEBUGINFO_O(525),
    SELECT_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    JUMPIF_SCENE_GT(SCENARIO_SUB8, 51, 2, /* to label */ 0),
    SCENARIO_CALC(SCENARIO_SUB8, 51,  2),
  LABEL(0), /* = 0x00 */
    RET,
};

static const ScriptRef s_gs2_g6_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs2_g6_s0_station_sref_script }; /* 0x817f894 */

static const struct ScriptCommand s_gs2_g6_s0_eff0_script[] = { /* 0x817f8a0 */
    DEBUGINFO_O(537),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    AWAIT_CUE(4),
    HALT,
};

static const struct ScriptCommand s_gs2_g6_s0_lives0_dlg0[] = { /* 0x817f910 */
    DEBUGINFO_O(547),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CMD_UNK_95(4, DIR_TRANS_10, 5),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:64dd060e87e91f8a875eaf3b6f2fcd8b4f36875d925512376c0630b3d1405215@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:64dd060e87e91f8a875eaf3b6f2fcd8b4f36875d925512376c0630b3d1405215@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:a02efdb964c03d9f4387b1794509213a1fa1957d25d0999b5b149627d0c631bc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:04ae8275f682558b8192ca1cb9974f972f59475d62021fa749fc0eecff719f7d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000001),
    PORTRAIT_REP(0x0003, 0x00000002),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:0fd8e760149378bb7a07e25a47d121b2115d9225b4cccc0749f07973fde11fa1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:d90676e99f494432cf7e175036cfca7e066ee1921ec3b9773b4a1f286a48f28a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:a893b2e65fb52af6a80c54f3308b7a0abf25b53874e6db3385bf8d53e573abce@@)),
    MSG_NPC(2, (@@STRING:154a8a9b185018f4618897dda732044b5b54b25e6894e5a249c83effe1f455de@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:c72bd4681a4c0d9e77aa9fffd5ba8bca0450feb04b7d7d94b796cf459698fb13@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:b8ddf6c2a882540d3cd0370388b85774d296f7ef7b46ae21f8a1cd5ca8a1f4d8@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000002),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0003, 0x00000001),
    CJUMP_UNK_C8(92),
    COND_EQUAL(6, /* to label */ 3),
    COND_EQUAL(5, /* to label */ 3),
    COND_EQUAL(7, /* to label */ 3),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000001),
  LABEL(3), /* = 0x03 */
    FANFARE_PLAY2(473),
    ALERT_CUE(7),
    ALERT_CUE(8),
    MSG_NPC(2, (@@STRING:01db9b6b77b90ac6ca8b4c7b8a98246ffcefbbe9df51023f430fbf3248683417@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    WAIT(60),
    PORTRAIT_REP(0x0002, 0x00000000),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:91ab0a93c7688c5d76c63b85ec59ed66141568a9444a9cdedad87f99d15e333e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:367e8552f9e05b770feb3ce4cf06462fe76f4740150d2c39e05fcc8211b76308@@)),
    MSG_NPC(3, (@@STRING:362a5ce4b92e3b6c6b0555644db978d61bc2d850f559b0962516c2fa95323177@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(60),
    CMD_UNK_93(8, DIR_TRANS_10, 93),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(5),
    CANCEL_EVENTS(5, 0),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};




static const struct ScriptCommand s_gs2_g6_s0_lives1_dlg0[] = { /* 0x818009c */
    DEBUGINFO_O(639),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g6_s0_lives2_dlg0[] = { /* 0x81800fc */
    DEBUGINFO_O(648),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(60),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    WAIT(30),
    CJUMP_UNK_C8(0),
    COND_EQUAL(2, /* to label */ 0),
    WALK_GRID(512, 0),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    WALK_GRID(512, 1),
  LABEL(1), /* = 0x01 */
    WALK_GRID(512, 3),
    WALK_GRID(512, 4),
    CMD_UNK_E5(5, 0),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g6_s0_lives3_dlg0[] = { /* 0x818034c */
    DEBUGINFO_O(688),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(60),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    CJUMP_UNK_C8(0),
    COND_EQUAL(2, /* to label */ 0),
    WALK_GRID(512, 0),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    WALK_GRID(512, 2),
  LABEL(1), /* = 0x01 */
    WALK_GRID(512, 3),
    WALK_GRID(512, 4),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g7_s0_lives0_dlg2[] = { /* 0x81804fc */
    DEBUGINFO_O(718),
    EXECUTE_STATION(-1, 8, 0),
    HALT,
};

static const struct ScriptCommand s_gs2_g7_s0_lives1_dlg2[] = { /* 0x818052c */
    DEBUGINFO_O(724),
    EXECUTE_STATION(-1, 8, 0),
    HALT,
};

static const struct ScriptCommand s_gs2_g7_s0_evt0_sref_script[] = { /* 0x818055c */
    DEBUGINFO_O(730),
    EXECUTE_STATION(-1, 8, 0),
    HALT,
};

static const ScriptRef s_gs2_g7_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs2_g7_s0_evt0_sref_script }; /* 0x818058c */

static const struct ScriptCommand s_gs2_g8_s0_station_sref_script[] = { /* 0x8180598 */
    DEBUGINFO_O(738),
    SELECT_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    JUMPIF_SCENE_GT(SCENARIO_SUB8, 51, 3, /* to label */ 0),
    SCENARIO_CALC(SCENARIO_SUB8, 51,  4),
  LABEL(0), /* = 0x00 */
    RET,
};

static const ScriptRef s_gs2_g8_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs2_g8_s0_station_sref_script }; /* 0x8180608 */

static const struct ScriptCommand s_gs2_g8_s0_eff0_script[] = { /* 0x8180614 */
    DEBUGINFO_O(750),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g8_s0_lives0_dlg0[] = { /* 0x8180674 */
    DEBUGINFO_O(759),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CMD_UNK_95(4, DIR_TRANS_10, 5),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:61121f98b542823470ddcd0f223b99844bbbb75d68dd580d6f25f83f8f7b9ca5@@)),
    MSG_NPC(2, (@@STRING:290874ba68ae22a319f98c770df59675b750d590a6752731939d5a1ea2d9fe42@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:d261d056e44b612db75fa905d2e04d61a4e5d83eda0ab132395363e7641a69a5@@)),
    MSG_NPC(3, (@@STRING:19fbb485fe356f183d4e5f83e87c97e5f72f4c7fbc2addc523b638fe51b0b411@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:92212a4ec832a46c25a00b52919d232560adf13b6b208ca84dae7bc26e5a5e43@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000002),
    MSG_NPC(3, (@@STRING:73f570feffc0ac5a4d2a27fe27412a26b0e77748ef4dce66b8792c9dc511a1fc@@)),
    MSG_NPC(3, (@@STRING:a34b39535409d119871871cce6ff96e56a6629e22a4c9d1c36c5ecd378278935@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000003),
    MSG_NPC(2, (@@STRING:f79a18c39cb1a11ff2c6bb91fc27476f59f50e37ce8bcaaffbd1dfce523aba46@@)),
    MSG_NPC(2, (@@STRING:9a866393b0de4f0520c7480174677b953c32030e00ad8db7fc74db30b98cc49d@@)),
    MSG_NPC(2, (@@STRING:9a74b8be067964169f523a2f8dd36955591fb3399f4b1c1063305fefcf0ea5f4@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000002),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0003, 0x00000001),
    CJUMP_UNK_C8(92),
    COND_EQUAL(6, /* to label */ 4),
    COND_EQUAL(5, /* to label */ 4),
    COND_EQUAL(7, /* to label */ 4),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000001),
  LABEL(4), /* = 0x04 */
    FANFARE_PLAY2(473),
    ALERT_CUE(7),
    ALERT_CUE(8),
    MSG_NPC(2, (@@STRING:f14faa0a06d64971b8ca8ae5b8a63c299f300c4406af7cdd2cfdb7f979f15f05@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    WAIT(60),
    PORTRAIT_REP(0x0002, 0x00000000),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:91ab0a93c7688c5d76c63b85ec59ed66141568a9444a9cdedad87f99d15e333e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:367e8552f9e05b770feb3ce4cf06462fe76f4740150d2c39e05fcc8211b76308@@)),
    MSG_NPC(3, (@@STRING:362a5ce4b92e3b6c6b0555644db978d61bc2d850f559b0962516c2fa95323177@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(60),
    CMD_UNK_93(8, DIR_TRANS_10, 93),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(5),
    CANCEL_EVENTS(7, 0),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};





static const struct ScriptCommand s_gs2_g8_s0_lives1_dlg0[] = { /* 0x8180dc0 */
    DEBUGINFO_O(842),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g8_s0_lives2_dlg0[] = { /* 0x8180e20 */
    DEBUGINFO_O(851),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(60),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    WAIT(30),
    CJUMP_UNK_C8(0),
    COND_EQUAL(2, /* to label */ 0),
    WALK_GRID(512, 6),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    WALK_GRID(512, 7),
  LABEL(1), /* = 0x01 */
    WALK_GRID(512, 9),
    WALK_GRID(512, 10),
    CMD_UNK_E5(5, 0),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g8_s0_lives3_dlg0[] = { /* 0x8181010 */
    DEBUGINFO_O(885),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(60),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    CJUMP_UNK_C8(0),
    COND_EQUAL(2, /* to label */ 0),
    WALK_GRID(512, 6),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    WALK_GRID(512, 8),
  LABEL(1), /* = 0x01 */
    WALK_GRID(512, 9),
    WALK_GRID(512, 10),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g9_s0_lives0_dlg0[] = { /* 0x81811c0 */
    DEBUGINFO_O(915),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g9_s0_lives0_dlg2[] = { /* 0x8181200 */
    DEBUGINFO_O(922),
    EXECUTE_STATION(-1, 9, 1),
    HALT,
};

static const struct ScriptCommand s_gs2_g9_s1_station_sref_script[] = { /* 0x8181230 */
    DEBUGINFO_O(928),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    JUMPIF_SCENE_GT(SCENARIO_SUB8, 51, 5, /* to label */ 0),
    SCENARIO_CALC(SCENARIO_SUB8, 51,  6),
  LABEL(0), /* = 0x00 */
    SELECT_ENTITIES(9, 0),
    RET,
};

static const ScriptRef s_gs2_g9_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs2_g9_s1_station_sref_script }; /* 0x81812b0 */

static const struct ScriptCommand s_gs2_g9_s1_eff0_script[] = { /* 0x81812bc */
    DEBUGINFO_O(941),
    AWAIT_CUE(4),
    { 0xa1, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g9_s1_lives0_dlg0[] = { /* 0x818131c */
    DEBUGINFO_O(950),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(2, (@@STRING:90db57deca4a7ea2146506e551ae4912755b1e5b817a8e2707d91c09349b3e15@@)),
    MSG_NPC(2, (@@STRING:728743b1da5ba2e506c3ab6b401136263938d8e4fb5d6de609af4d5501bfa459@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    FANFARE_PLAY2(473),
    ALERT_CUE(7),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:e3df2e65a45216c00d460da46cc07ae0b3db8d0ded9b761f369297d6dbd27a78@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    WAIT(60),
    MSG_NPC(2, (@@STRING:3dc0979f8e49b04674b43ad84349c96d1402c43e414b6b507b1c1b89df226963@@)),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:1e5cfd900f4c15dfc6bea2f5f4d441d4cf9b5516251cb3cbe5725f9b69f5a642@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:8daaaf02829bf35a3da39d086bb41ebdcd50b2ed0e207e0b86b52c4cc7a88c77@@)),
    MSG_NPC(2, (@@STRING:3a29f3aaf9c171a952a132608b407d75d0930eaccfa7574c9f417b70e03e469f@@)),
    MSG_NPC(2, (@@STRING:8e1ad11db2fb301de2f4b0cb3fa52636c4ae1f8d9f7f0d3bba86a89be741a250@@)),
    TEXTBOX_CLEAR,
    { 0xa1, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};




static const struct ScriptCommand s_gs2_g9_s1_lives1_dlg0[] = { /* 0x81816d0 */
    DEBUGINFO_O(988),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g9_s1_lives2_dlg0[] = { /* 0x8181730 */
    DEBUGINFO_O(997),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(60),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    CMD_UNK_92(4, 11, DIR_TRANS_FLIP),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    RET,
};

static const struct ScriptCommand s_gs2_g10_s0_station_sref_script[] = { /* 0x8181870 */
    DEBUGINFO_O(1020),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g10_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g10_s0_station_sref_script }; /* 0x81818a0 */

static const struct ScriptCommand s_gs2_g10_s0_lives0_dlg0[] = { /* 0x81818ac */
    DEBUGINFO_O(1028),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g10_s0_lives0_dlg2[] = { /* 0x81818ec */
    DEBUGINFO_O(1035),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:ac24137b05e756c4d1c6a515faf9698e3fbe861e65ec62f13c7f4fb018d506f2@@)),
    MSG_NPC(1, (@@STRING:295aa4f470e182c9de29a961b3e73d4b5e8219bee8670ce6d93d1a56ffe094d7@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g10_s0_obj0_dlg2[] = { /* 0x8181a20 */
    DEBUGINFO_O(1046),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g11_s0_station_sref_script[] = { /* 0x8181a50 */
    DEBUGINFO_O(1052),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g11_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g11_s0_station_sref_script }; /* 0x8181a80 */

static const struct ScriptCommand s_gs2_g11_s0_lives0_dlg0[] = { /* 0x8181a8c */
    DEBUGINFO_O(1060),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g11_s0_lives0_dlg2[] = { /* 0x8181acc */
    DEBUGINFO_O(1067),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:d31ecb55019b3f3b8b05759a7347229878eef28ea1f8720203ee2cb420725071@@)),
    MSG_NPC(1, (@@STRING:ef99debf41d73bf0ff07910e697af1ef18c2897f42c178aae1191a1c856791bf@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g11_s0_obj0_dlg2[] = { /* 0x8181bac */
    DEBUGINFO_O(1077),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g12_s0_station_sref_script[] = { /* 0x8181bdc */
    DEBUGINFO_O(1083),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g12_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g12_s0_station_sref_script }; /* 0x8181c0c */

static const struct ScriptCommand s_gs2_g12_s0_lives0_dlg0[] = { /* 0x8181c18 */
    DEBUGINFO_O(1091),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g12_s0_lives0_dlg2[] = { /* 0x8181c58 */
    DEBUGINFO_O(1098),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:4aebaeb4cd6f99075a332b3e568acdb7f4488ab3919e3f386350bc2e6c052565@@)),
    MSG_NPC(1, (@@STRING:b910f7642a59acdd498085fe2b3e372732b79960e8f3e10f3989d33ee441a5ed@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g12_s0_obj0_dlg2[] = { /* 0x8181d3c */
    DEBUGINFO_O(1108),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g12_s0_lives1_dlg2[] = { /* 0x8181d6c */
    DEBUGINFO_O(1114),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000005e,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:575c03c5e87c1dc791b1ab5e4f62c119368f197570185a1a9a8f20aa5f881259@@)),
    MSG_NPC(1, (@@STRING:c1be839300378e345506d858a5680c87517eb5d4296778d90e2682528508958b@@)),
    MSG_NPC(1, (@@STRING:26d7e61d236b4ebaf075cfa50fc8201eb7d387e0be59da6cc6521d6baa2c3021@@)),
    MSG_NPC(1, (@@STRING:5560f6e81b83deb4eaf63abe1bf9fbe7f7dde54b346369411fbd2a391627c95e@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g13_s0_station_sref_script[] = { /* 0x8181ebc */
    DEBUGINFO_O(1128),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g13_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g13_s0_station_sref_script }; /* 0x8181eec */

static const struct ScriptCommand s_gs2_g13_s0_lives0_dlg0[] = { /* 0x8181ef8 */
    DEBUGINFO_O(1136),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g13_s0_lives0_dlg2[] = { /* 0x8181f38 */
    DEBUGINFO_O(1143),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:5809e7ebfbd61231e70f78437423d739460bc670e81969650465356d75df66df@@)),
    MSG_NPC(1, (@@STRING:4775306014bb9b2d1131a703e928d531b38ca2a605ddcfa9150e9ecbd0fd742e@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g13_s0_obj0_dlg2[] = { /* 0x8182044 */
    DEBUGINFO_O(1154),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g14_s0_station_sref_script[] = { /* 0x8182074 */
    DEBUGINFO_O(1160),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g14_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g14_s0_station_sref_script }; /* 0x81820a4 */

static const struct ScriptCommand s_gs2_g14_s0_lives0_dlg0[] = { /* 0x81820b0 */
    DEBUGINFO_O(1168),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g14_s0_lives0_dlg2[] = { /* 0x81820f0 */
    DEBUGINFO_O(1175),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:36dc5644e2a05805a1d8df65820ff5cad3f5fd6cb63e9c65b4a355ef962dc385@@)),
    MSG_NPC(1, (@@STRING:17748f2f971a1675db6524e6284a8ecb1825c83dca81fb0c447d6986bce4562f@@)),
    MSG_NPC(1, (@@STRING:e07ca6ea381847fbd1e85bd567be77047b843262caa67362fb7bc76725efff9a@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:9a689a05dfee83791327d45931c40055962a9c6f22dbefa0e6e274e5d206123b@@)),
    MSG_NPC(1, (@@STRING:f060a9f4a12d3e257201f306b9362f200baee2d0bdb72c516dbe500998161351@@)),
    MSG_NPC(1, (@@STRING:200cd2f8dce4bb82289242e60143053d01c94bf078c9436595b3b62b8397fd8c@@)),
    MSG_NPC(1, (@@STRING:0e6c9ad4ad3da84c09e9258f56844b5fb309b33dce90f50a3223e66719ce0398@@)),
    MSG_NPC(1, (@@STRING:d10085f875f06a0d96cc3a522f5d06c88a8ad77bfa0a4a0424f0016bd7df2b32@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:8f5b29564166de9e8fbdfc7f8d0b67aff9242df6a1b0f8fd1d35138a3a3375a5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g14_s0_obj0_dlg2[] = { /* 0x8182484 */
    DEBUGINFO_O(1195),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g14_s0_lives1_dlg2[] = { /* 0x81824b4 */
    DEBUGINFO_O(1201),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000005e,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:335570389ad19f6533a6d5452e25b2419a33cb277297eb4ee1421a0495981857@@)),
    MSG_NPC(1, (@@STRING:1603fe57c7b8f5e0f67546527fd2082b9f451b80b733647544d3972ad7229d56@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g14_s0_lives2_dlg2[] = { /* 0x818255c */
    DEBUGINFO_O(1212),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:625bca336997eb20f3e7fd0b2ae408e00915a7881a7d37d7e1adbf7fc78bd9fc@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g15_s0_station_sref_script[] = { /* 0x81825e8 */
    DEBUGINFO_O(1222),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g15_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g15_s0_station_sref_script }; /* 0x8182618 */

static const struct ScriptCommand s_gs2_g15_s0_lives0_dlg0[] = { /* 0x8182624 */
    DEBUGINFO_O(1230),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g15_s0_lives0_dlg2[] = { /* 0x8182664 */
    DEBUGINFO_O(1237),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:921c0d68f479f7a606155efd2e11ffe8c819006b6057a7c7a8bdcd99b0c2250a@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g15_s0_obj0_dlg2[] = { /* 0x8182708 */
    DEBUGINFO_O(1247),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g15_s0_lives1_dlg0[] = { /* 0x8182738 */
    DEBUGINFO_O(1253),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g15_s0_lives1_dlg2[] = { /* 0x8182768 */
    DEBUGINFO_O(1259),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000005e,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:794b92f226f42fbf59d3dfffee2dc1e1d972eb860595f9742c7036d2eee2b29f@@)),
    MSG_NPC(3, (@@STRING:366f1a092aa5926007e4cdcf1cb70b2c48a397673a0f638d1c2e1584f4b49df1@@)),
    MSG_NPC(2, (@@STRING:45198ede7193a22d2d86693152edbe84621c1c1467df50d3cb0cdfae3860d14c@@)),
    MSG_NPC(3, (@@STRING:e9f28c2de508c2055ba219f150b501cfa2d61d7429c5fcb478abe217261c0339@@)),
    MSG_NPC(2, (@@STRING:6f9469bf2ff921ea9db29d2682bb3c6da1887d53eb3c8b48c7d91c2b20f744ae@@)),
    MSG_NPC(3, (@@STRING:74c444b626e53f08433a47145965b755631c11865a49a4eac430f8c007faf511@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g15_s0_lives2_dlg0[] = { /* 0x81828d4 */
    DEBUGINFO_O(1277),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g15_s0_lives2_dlg2[] = { /* 0x8182904 */
    DEBUGINFO_O(1283),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000005e,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:794b92f226f42fbf59d3dfffee2dc1e1d972eb860595f9742c7036d2eee2b29f@@)),
    MSG_NPC(3, (@@STRING:366f1a092aa5926007e4cdcf1cb70b2c48a397673a0f638d1c2e1584f4b49df1@@)),
    MSG_NPC(2, (@@STRING:45198ede7193a22d2d86693152edbe84621c1c1467df50d3cb0cdfae3860d14c@@)),
    MSG_NPC(3, (@@STRING:e9f28c2de508c2055ba219f150b501cfa2d61d7429c5fcb478abe217261c0339@@)),
    MSG_NPC(2, (@@STRING:6f9469bf2ff921ea9db29d2682bb3c6da1887d53eb3c8b48c7d91c2b20f744ae@@)),
    MSG_NPC(3, (@@STRING:74c444b626e53f08433a47145965b755631c11865a49a4eac430f8c007faf511@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g16_s0_station_sref_script[] = { /* 0x81829f4 */
    DEBUGINFO_O(1301),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g16_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g16_s0_station_sref_script }; /* 0x8182a24 */

static const struct ScriptCommand s_gs2_g16_s0_lives0_dlg0[] = { /* 0x8182a30 */
    DEBUGINFO_O(1309),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g16_s0_lives0_dlg2[] = { /* 0x8182a70 */
    DEBUGINFO_O(1316),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000063,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:c8884836cf0540e5e9ce51439c18957b30a29657a65a4aa48feb1802a9a8277b@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:72f8b523bfa08011d48a72103eecda3ad602714d4daaaf28a5da8f9a1e4248e0@@)),
    CHOICE(/* label */  1, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  2, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(1), /* = 0x01 */
    BGM_FADEOUT(90),
    MSG_NPC(1, (@@STRING:aa4ae0262d89319ff9ecd54e5767d1281b998db89d8e22c3f0647d75aca34252@@)),
    TEXTBOX_CLEAR,
    EXECUTE_STATION(-1, 16, 1),
    HALT,
  LABEL(2), /* = 0x02 */
    MSG_NPC(1, (@@STRING:29ae7c0aa5b32dcf633af8ef3ec2d4eeec4ec566e81408b305486fdc6264e996@@)),
    MSG_NPC(1, (@@STRING:ca18070bc0c32a9a7dbf8acd2c76d2b27a17cc50b94de62fe23a5c8dc5fabeb5@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs2_g16_s0_obj0_dlg2[] = { /* 0x8182cb8 */
    DEBUGINFO_O(1341),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g16_s0_lives1_dlg2[] = { /* 0x8182ce8 */
    DEBUGINFO_O(1347),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000062,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:e343116816d8e26838e66a22306f196640ee7912de5c2a8e8c08424bc267861b@@)),
    MSG_NPC(1, (@@STRING:0a01249c0fd3512ad103fcf34008700da8ab927c650b8a8b6db86d7bb4cc8b56@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g16_s0_lives2_dlg2[] = { /* 0x8182da0 */
    DEBUGINFO_O(1358),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000062,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:037f353e2c916151a20dc82d32bff6273c2adffe09462d639702a33112689833@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g16_s0_eff0_script[] = { /* 0x8182e4c */
    DEBUGINFO_O(1368),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    CAMERA_END_PAN,
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g16_s1_station_sref_script[] = { /* 0x8182eac */
    DEBUGINFO_O(1377),
    SELECT_ENTITIES(-1, -1),
    JUMPIF_SCENE_GT(SCENARIO_MAIN, 9, 5, /* to label */ 0),
    SCENARIO_CALC(SCENARIO_MAIN,  9,  5),
  LABEL(0), /* = 0x00 */
    RET,
};

static const ScriptRef s_gs2_g16_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs2_g16_s1_station_sref_script }; /* 0x8182f0c */

static const struct ScriptCommand s_gs2_g16_s1_lives0_dlg0[] = { /* 0x8182f18 */
    DEBUGINFO_O(1388),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000063,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x00000052,  0x00000000, NULL },
    ALERT_CUE(4),
    WAIT(1),
    WALK_GRID(256, 12),
    SET_DIR_WAIT(DIRECTION_NORTH, 30),
    BGM_SWITCH(MUS_LEGEND_OF_NINETALES),
    MSG_NPC(1, (@@STRING:dd38596fbb3f8ab058459b9ce4f79c32c60cd491206466c7ef0f1b37aafeac69@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(1, (@@STRING:e68fbe4c242afe279be4f7978fd3fd4e54d874576f59f33b17a3cbfd8b6c0e19@@)),
    MSG_NPC(1, (@@STRING:1c9d1cfe7b6deaa9e7a1592a794b2ce31e994aa9b5985b98e7c022a1181b3f71@@)),
    MSG_NPC(1, (@@STRING:2a69b1d7817dcccc412c0fbd30d0a600c9d403314605c5dee97fa7c2fb28fe83@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000004),
    MSG_NPC(3, (@@STRING:ce4e3a787471f840fa43945b76a531063332a7a80c4677699a16b660a18d6506@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:ba2e8e242f8e2e02ffa5f9c0d1fcb40044fd8f9c3216e8e8007ae428e4849efa@@)),
    MSG_NPC(1, (@@STRING:cec04fdf18dd2a2f5942a9f91530260c84d0706345f5e5aacbfb070f5f707e9d@@)),
    MSG_NPC(1, (@@STRING:46e4b77fe6af4b5b013e3ba2887b3caa8e5bc1486e1f99d0dc275aadf78f5488@@)),
    MSG_NPC(1, (@@STRING:012fd4587163a6cf796419b473e7398bc387ed7f609d678954aa372c5050db4e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:9660d5d966abbe306bdd578765bbcebca8de49d78bf1c1316fff9a222d5008e2@@)),
    MSG_NPC(3, (@@STRING:831d9b2642320fc8a0c2b7e43935fa3b0875c62d225cc7d3df3c0b6d840182a7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:8a2774e2b6a588fdcbdc2846747ed2b2d21d4a60deb4b27a378f23cc47fa0512@@)),
    MSG_NPC(1, (@@STRING:6aceb4bd073b8ad26541321e16b7b49e1f886c22857061b19409d2bdec6d5feb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 3),
    VARIANT(/* == */  1, (@@STRING:0518f514d6bd2ba739e68f988c3ee9fddacd570794c48b7ad8b3b8fce774b2f5@@)),
    VARIANT_DEFAULT((@@STRING:025a35cd15da20f5d97848941284b0ecf258715d07f7fbd545ffc0e1cb6b1f7b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:546edafe20a7b1f3af3e84bb386b61c11ec60dd3b02e9d970498a96a17f86592@@)),
    MSG_NPC(1, (@@STRING:fe80bcf6089cf11743ad45e00ac05aab28cb8457a6a17854f376c3d3733abd33@@)),
    MSG_NPC(1, (@@STRING:2222f4e07033ce544beb0d15de8d7ed5b0d846a3d436b2b41d25c31748af7124@@)),
    MSG_NPC(1, (@@STRING:e8bdba59665a2d7cdf9e7600082b3c3616826d1687bafd0738879c228c568de7@@)),
    MSG_NPC(1, (@@STRING:ef7cf0aab83ef6da53211f976ade4f48f99ff133a75d97b64ea60bc304e1b09c@@)),
    MSG_NPC(1, (@@STRING:5cd060722ce30524e9653db678a8d7cac6bccc624440b61e1f560d2b54320eb1@@)),
    MSG_NPC(1, (@@STRING:21c845d70c7105cc161e3c5dc1e755323d179d39f81831383f745fb4dfc4eff8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(SHOCK_FUNC),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x0000000c),
    MSG_NPC(3, (@@STRING:5b62e8fb6cbd0fa4c4be64170c6f4db429ca8a3da14aecffbe9e8ea89d57863b@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    MSG_NPC(1, (@@STRING:408f4e36d1d5e6d2ff42c2415a71142c7b60fa24152ac4a85d6eceb59e3228ed@@)),
    MSG_NPC(1, (@@STRING:5705c2bc2d6aa8ac2174c348d937caf39f7a7102f0d5c449f2887a212f40a933@@)),
    MSG_NPC(1, (@@STRING:713510c6b5de3cdaa4016b82ef4c2d3ba6803e9f7927a02e7a68fc6f1aab2526@@)),
    MSG_NPC(1, (@@STRING:fcc4db3e88745a0ca45ef17988de3155fa81d211a337d506a58a1075e2a84d6b@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(120),
    WAIT(80),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000005),
    MSG_NPC(3, (@@STRING:64dd060e87e91f8a875eaf3b6f2fcd8b4f36875d925512376c0630b3d1405215@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:8f9783ad3e29fba82ee0eb015d48b64c00f9a12b53b7fb10854be62c6e3392f0@@)),
    MSG_NPC(1, (@@STRING:2181ef42521198629f304e1c965eeaa907b4dce1f93f7f3e589fe56323af2f24@@)),
    MSG_NPC(1, (@@STRING:ef0d8c6fdcc134dcc02b29de3ea9a7ee1dcb9d7c030f2a1d2e1ad63b5d668bfc@@)),
    MSG_NPC(1, (@@STRING:380575937ab7c24dcb08ca27bd9ba7d448825b40d1460a89e78c0824f6a79755@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:5ff8beeefbc08fb9fe9da013027018541c871491aa28e71f595c0bd354fb6859@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(4),
    BGM_SWITCH(MUS_FILE_SELECT),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(8),
    RET,
};

static const struct ScriptCommand s_gs2_g16_s1_lives1_dlg0[] = { /* 0x8183b64 */
    DEBUGINFO_O(1481),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 13),
    SET_DIR_WAIT(DIRECTION_NORTH, 0),
    ALERT_CUE(3),
    AWAIT_CUE(8),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(8),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g16_s1_lives2_dlg0[] = { /* 0x8183c84 */
    DEBUGINFO_O(1502),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTH, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs2_g16_s1_lives2_dlg2[] = { /* 0x8183d24 */
    DEBUGINFO_O(1515),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000063,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:7e87a307ec7ab7c5cb3d5a6121abd7e3e72cb14ab09daac71b7653b301c97e71@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:72f8b523bfa08011d48a72103eecda3ad602714d4daaaf28a5da8f9a1e4248e0@@)),
    CHOICE(/* label */  1, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  2, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(1), /* = 0x01 */
    MSG_NPC(1, (@@STRING:aa4ae0262d89319ff9ecd54e5767d1281b998db89d8e22c3f0647d75aca34252@@)),
    EXECUTE_STATION(-1, 16, 1),
    HALT,
  LABEL(2), /* = 0x02 */
    MSG_NPC(1, (@@STRING:29ae7c0aa5b32dcf633af8ef3ec2d4eeec4ec566e81408b305486fdc6264e996@@)),
    MSG_NPC(1, (@@STRING:ca18070bc0c32a9a7dbf8acd2c76d2b27a17cc50b94de62fe23a5c8dc5fabeb5@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs2_g17_s0_station_sref_script[] = { /* 0x8183ea0 */
    DEBUGINFO_O(1538),
    SELECT_MAP(2),
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs2_g17_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs2_g17_s0_station_sref_script }; /* 0x8183f10 */

static const struct ScriptCommand s_gs2_g18_s0_station_sref_script[] = { /* 0x8183f1c */
    DEBUGINFO_O(1550),
    SELECT_MAP(2),
    SELECT_ENTITIES(-1, 0),
    FLASH_FROM(TRUE, PALUTIL_KIND_14, 30, RGB_U32(0x00, 0x00, 0x00)),
    AWAIT_CUE(3),
    FLASH_TO(TRUE, PALUTIL_KIND_14, 30, RGB_U32(0x00, 0x00, 0x00)),
    RET,
};

static const ScriptRef s_gs2_g18_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs2_g18_s0_station_sref_script }; /* 0x8183f8c */

static const struct ScriptCommand s_gs2_g18_s0_lives0_dlg0[] = { /* 0x8183f98 */
    DEBUGINFO_O(1562),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000052,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(2, (@@STRING:ba2e8e242f8e2e02ffa5f9c0d1fcb40044fd8f9c3216e8e8007ae428e4849efa@@)),
    MSG_NPC(2, (@@STRING:cec04fdf18dd2a2f5942a9f91530260c84d0706345f5e5aacbfb070f5f707e9d@@)),
    MSG_NPC(2, (@@STRING:46e4b77fe6af4b5b013e3ba2887b3caa8e5bc1486e1f99d0dc275aadf78f5488@@)),
    MSG_NPC(2, (@@STRING:012fd4587163a6cf796419b473e7398bc387ed7f609d678954aa372c5050db4e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:9660d5d966abbe306bdd578765bbcebca8de49d78bf1c1316fff9a222d5008e2@@)),
    MSG_NPC(1, (@@STRING:831d9b2642320fc8a0c2b7e43935fa3b0875c62d225cc7d3df3c0b6d840182a7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:de6dc4ee78f2c63b7332129ffbe92a059b78a7b76153920efaf8182f8efa68d0@@)),
    MSG_NPC(2, (@@STRING:6aceb4bd073b8ad26541321e16b7b49e1f886c22857061b19409d2bdec6d5feb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs2_g18_s0_lives1_dlg0[] = { /* 0x81841f0 */
    DEBUGINFO_O(1591),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs2_g18_s0_lives2_dlg0[] = { /* 0x8184230 */
    DEBUGINFO_O(1598),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs2_g19_s0_station_sref_script[] = { /* 0x8184280 */
    DEBUGINFO_O(1606),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g19_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g19_s0_station_sref_script }; /* 0x81842b0 */

static const struct ScriptCommand s_gs2_g19_s0_lives0_dlg0[] = { /* 0x81842bc */
    DEBUGINFO_O(1614),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(6),
    RET,
};

static const struct ScriptCommand s_gs2_g19_s0_lives0_dlg1[] = { /* 0x81842fc */
    DEBUGINFO_O(1621),
    JUMP_SCRIPT(MOVE_SLEEP),
};

static const struct ScriptCommand s_gs2_g20_s0_station_sref_script[] = { /* 0x818431c */
    DEBUGINFO_O(1626),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g20_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g20_s0_station_sref_script }; /* 0x818435c */

static const struct ScriptCommand s_gs2_g20_s0_lives0_dlg0[] = { /* 0x8184368 */
    DEBUGINFO_O(1635),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g20_s0_lives0_dlg2[] = { /* 0x81843a8 */
    DEBUGINFO_O(1642),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1e83c1b8605f5e52b9defbe5887f135d70184a9aa4e53f0ed34e9caeb4c1080b@@)),
    MSG_NPC(1, (@@STRING:e5ae75693b85f785f44aa0dbbc60f52edea1f2ba1983dcaca2a2946b7ed82dd6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g20_s0_obj0_dlg2[] = { /* 0x81844c8 */
    DEBUGINFO_O(1652),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g20_s0_lives1_dlg0[] = { /* 0x81844f8 */
    DEBUGINFO_O(1658),
    JUMPIF_SCENE_EQ(SCENARIO_SUB1, 30, -1, /* to label */ 0),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
  LABEL(0), /* = 0x00 */
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g20_s0_lives1_dlg2[] = { /* 0x8184568 */
    DEBUGINFO_O(1668),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:c2a5f366bb70fc51868032c355d6e8c8522c3f7e2b07a2fcbac34b672a06587b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g20_s0_lives2_dlg2[] = { /* 0x81845fc */
    DEBUGINFO_O(1677),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:f847a2b72d6a65c7cebfe3d57d66273e5b60f501b7011c592b78b0d919e926d1@@)),
    MSG_NPC(1, (@@STRING:4a2aed062f8147c2647d9907ca882fe9679ed2b3d911dd780ae28cfd812d03ea@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g21_s0_station_sref_script[] = { /* 0x81846c8 */
    DEBUGINFO_O(1687),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g21_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g21_s0_station_sref_script }; /* 0x8184708 */

static const struct ScriptCommand s_gs2_g21_s0_lives0_dlg0[] = { /* 0x8184714 */
    DEBUGINFO_O(1696),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g21_s0_lives0_dlg2[] = { /* 0x8184754 */
    DEBUGINFO_O(1703),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:8b764a5f3bbd7f8a7370608131901f252ee94216d54b5e7c51514ea2771e23c1@@)),
    MSG_NPC(1, (@@STRING:cf01670ebf604cc775f1d24a1b7899689204d65bd37a4f0247794cd4dbec4a4f@@)),
    MSG_NPC(1, (@@STRING:77f51f9144ea50db70c64b1facaa0e0c10d933d1dd8b19eaf10efd7528157ae5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g21_s0_obj0_dlg2[] = { /* 0x818484c */
    DEBUGINFO_O(1714),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g21_s0_lives1_dlg0[] = { /* 0x818487c */
    DEBUGINFO_O(1720),
    JUMPIF_SCENE_EQ(SCENARIO_SUB1, 30, -1, /* to label */ 0),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
  LABEL(0), /* = 0x00 */
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g21_s0_lives1_dlg2[] = { /* 0x81848ec */
    DEBUGINFO_O(1730),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6c7d0a3a74aaa9871aa92cbd7cc64bb57826e06f1894e508a796e4793db8d088@@)),
    MSG_NPC(1, (@@STRING:7c5bf95843efe750288e0d60e892127617361d72845302e7add7707ba8e9393f@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g21_s0_lives2_dlg2[] = { /* 0x81849e0 */
    DEBUGINFO_O(1740),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:409bbb37f80f68ba3a2c19cca53cc0a4a5666fd27018ba52efe76f4c2ad735ee@@)),
    MSG_NPC(1, (@@STRING:14256cbc8f3e819f8301773398e87d404e3b0d08ca76f329f1f8e266b95f4bc8@@)),
    MSG_NPC(1, (@@STRING:211e92e1cfb027999d769e9923f13c5d56fe79a4bdf5d3e4c9c6c2792526df23@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g22_s0_station_sref_script[] = { /* 0x8184af0 */
    DEBUGINFO_O(1751),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g22_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g22_s0_station_sref_script }; /* 0x8184b30 */

static const struct ScriptCommand s_gs2_g22_s0_lives0_dlg0[] = { /* 0x8184b3c */
    DEBUGINFO_O(1760),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g22_s0_lives0_dlg2[] = { /* 0x8184b7c */
    DEBUGINFO_O(1767),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:8b764a5f3bbd7f8a7370608131901f252ee94216d54b5e7c51514ea2771e23c1@@)),
    MSG_NPC(1, (@@STRING:cf01670ebf604cc775f1d24a1b7899689204d65bd37a4f0247794cd4dbec4a4f@@)),
    MSG_NPC(1, (@@STRING:77f51f9144ea50db70c64b1facaa0e0c10d933d1dd8b19eaf10efd7528157ae5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g22_s0_obj0_dlg2[] = { /* 0x8184bfc */
    DEBUGINFO_O(1778),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g22_s0_lives1_dlg0[] = { /* 0x8184c2c */
    DEBUGINFO_O(1784),
    JUMPIF_SCENE_EQ(SCENARIO_SUB1, 30, -1, /* to label */ 0),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
  LABEL(0), /* = 0x00 */
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g22_s0_lives1_dlg2[] = { /* 0x8184c9c */
    DEBUGINFO_O(1794),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:95a2f0ebbb126061b0390603a9addf6f3942a4da170eff5ab0b7e62b20d1a7a2@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g22_s0_lives2_dlg2[] = { /* 0x8184d28 */
    DEBUGINFO_O(1803),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:2904fc60a3f46ff59ebb2a6582f48867ffa2ba275a7d580fb7db282bc47eec3b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g23_s0_station_sref_script[] = { /* 0x8184db8 */
    DEBUGINFO_O(1812),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g23_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g23_s0_station_sref_script }; /* 0x8184df8 */

static const struct ScriptCommand s_gs2_g23_s0_lives0_dlg0[] = { /* 0x8184e04 */
    DEBUGINFO_O(1821),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g23_s0_lives0_dlg2[] = { /* 0x8184e44 */
    DEBUGINFO_O(1828),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:9979f808ae15c6fb37fb0825e4b68e84a044f46156f51fcbfea18ff2ffce75d8@@)),
    MSG_NPC(1, (@@STRING:e215c000bdb421ecdaeca3c237f6f19e55b7a7ebf6132a7dbca78b6222627251@@)),
    MSG_NPC(1, (@@STRING:34795599b8eda3582f746972908456016246f0be6bfbb7b9d9af610e7e304b81@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g23_s0_obj0_dlg2[] = { /* 0x8184f8c */
    DEBUGINFO_O(1839),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g23_s0_lives1_dlg0[] = { /* 0x8184fbc */
    DEBUGINFO_O(1845),
    JUMPIF_SCENE_EQ(SCENARIO_SUB1, 30, -1, /* to label */ 0),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
  LABEL(0), /* = 0x00 */
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g23_s0_lives1_dlg2[] = { /* 0x818502c */
    DEBUGINFO_O(1855),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1852ae5576d909ad3c381930eaf18b764c33aed0bb74692f24bd7d22383bb33c@@)),
    MSG_NPC(1, (@@STRING:fe318cf88652f01f714395491100ca2297946b178322c3cb87859bd049d59bcd@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g23_s0_lives2_dlg2[] = { /* 0x8185100 */
    DEBUGINFO_O(1866),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ca415b70fba99082c241ac8d933ba163de0d8d8fc68ca372ac1bb9760368fabf@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g24_s0_station_sref_script[] = { /* 0x8185188 */
    DEBUGINFO_O(1875),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g24_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g24_s0_station_sref_script }; /* 0x81851c8 */

static const struct ScriptCommand s_gs2_g24_s0_lives0_dlg0[] = { /* 0x81851d4 */
    DEBUGINFO_O(1884),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g24_s0_lives0_dlg2[] = { /* 0x8185214 */
    DEBUGINFO_O(1891),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:19d221103a7a0441d04970571ccd14f59502f64367d3346ecb6e557c5ded4be9@@)),
    MSG_NPC(1, (@@STRING:efd92c690b31295f1d232b5f004267e32f9458d32c94ed89fa1a09318556664f@@)),
    MSG_NPC(1, (@@STRING:2ec1c717d8696bebf8ed5d5214f1aaf21ff8981992358032d821352386332cdc@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g24_s0_obj0_dlg2[] = { /* 0x818534c */
    DEBUGINFO_O(1902),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g24_s0_lives1_dlg0[] = { /* 0x818537c */
    DEBUGINFO_O(1908),
    JUMPIF_SCENE_EQ(SCENARIO_SUB1, 30, -1, /* to label */ 0),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
  LABEL(0), /* = 0x00 */
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g24_s0_lives1_dlg2[] = { /* 0x81853ec */
    DEBUGINFO_O(1918),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:d687f972d251039f7753806fac9e87d6bd9b19ac4f5a9d85b211b04b10fb0526@@)),
    MSG_NPC(1, (@@STRING:d28899ec63573e357a446adfdfd911720e2d0aa785a61b6d3fd4e14bd0211ed8@@)),
    MSG_NPC(1, (@@STRING:b2a88a9fd638ad49d6a4a65ceae21254009c303db9df7b8771b82bc7db3b12e0@@)),
    MSG_NPC(1, (@@STRING:3bb77bb46a5ac9be60fbf730d19d05b45cc96b214e0a4e7b9c60354830e5dfe7@@)),
    MSG_NPC(1, (@@STRING:54281084a04016119886683f5fa6775ef995a957d0765bc0955f6dbd484580a4@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g24_s0_lives2_dlg2[] = { /* 0x81855b8 */
    DEBUGINFO_O(1931),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ca546e1d352233c1cb0e7c8006d6c812d134bb62e98164ffa39abacf312a47e4@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g25_s0_station_sref_script[] = { /* 0x8185658 */
    DEBUGINFO_O(1940),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs2_g25_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g25_s0_station_sref_script }; /* 0x8185688 */

static const struct ScriptCommand s_gs2_g25_s0_lives0_dlg0[] = { /* 0x8185694 */
    DEBUGINFO_O(1948),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g25_s0_lives0_dlg2[] = { /* 0x81856d4 */
    DEBUGINFO_O(1955),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1928ec3d888ae5f39f82354410dd96b1c0bc983ba86b3a354716711154ca5b05@@)),
    MSG_NPC(1, (@@STRING:b5861f16e030cfa7cf29f3dd45f2959d9d1ad443a72c4d85a538a0938730509a@@)),
    MSG_NPC(1, (@@STRING:b33e481c862d4721e5295dc4622d8347d6d7473ca1f72f83d4d3410e9beb8f00@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g25_s0_obj0_dlg2[] = { /* 0x8185844 */
    DEBUGINFO_O(1966),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g25_s0_lives1_dlg2[] = { /* 0x8185874 */
    DEBUGINFO_O(1972),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:35f8ecbfef98e08445f1acf65ba7aa41e51261582f039ef46f7a6aa81cc4c84d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g26_s0_station_sref_script[] = { /* 0x8185910 */
    DEBUGINFO_O(1981),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g26_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g26_s0_station_sref_script }; /* 0x8185950 */

static const struct ScriptCommand s_gs2_g26_s0_lives0_dlg0[] = { /* 0x818595c */
    DEBUGINFO_O(1990),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g26_s0_lives0_dlg2[] = { /* 0x818599c */
    DEBUGINFO_O(1997),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:99ccbcaea511d62e1be7ce252079c5739bf019adc42841ed4d5b58480cdbd08e@@)),
    MSG_NPC(1, (@@STRING:8a5429d99f7195435f2461b3493cad3727f3477e80b2722b0febed5a87433195@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g26_s0_obj0_dlg2[] = { /* 0x8185a70 */
    DEBUGINFO_O(2007),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g26_s0_lives1_dlg2[] = { /* 0x8185aa0 */
    DEBUGINFO_O(2013),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:827e8bd9f6f1d5e992c732bf128ac21ec1313d1300f993d668be612af59c0d0b@@)),
    MSG_NPC(1, (@@STRING:031778c4a191f86dc99b70c982e6c8efcc069eae86d78caf3d804d3e9844bd1e@@)),
    MSG_NPC(1, (@@STRING:cec8ce54ef0c776d5c46a43537879673e9668fe30bd69db1e451ca40155a4194@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g26_s0_lives2_dlg2[] = { /* 0x8185bac */
    DEBUGINFO_O(2025),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:2db43e6a14f77aa4ecfa88e23e079c7177b9a8590a5c9ea60f92a9494618a14d@@)),
    MSG_NPC(1, (@@STRING:de914ad0fa18dbc4599ce899265b22fd85924dd8e2db299abbb0ca274c19d73b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g26_s0_lives3_dlg2[] = { /* 0x8185ca4 */
    DEBUGINFO_O(2035),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:35f8ecbfef98e08445f1acf65ba7aa41e51261582f039ef46f7a6aa81cc4c84d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g27_s0_station_sref_script[] = { /* 0x8185d04 */
    DEBUGINFO_O(2044),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g27_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g27_s0_station_sref_script }; /* 0x8185d44 */

static const struct ScriptCommand s_gs2_g27_s0_lives0_dlg0[] = { /* 0x8185d50 */
    DEBUGINFO_O(2053),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g27_s0_lives0_dlg2[] = { /* 0x8185d90 */
    DEBUGINFO_O(2060),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:677b390d39cc536d60f5a492f205102bf65fa2ac740c29bf5a32afaf353c9d9a@@)),
    MSG_NPC(1, (@@STRING:5fa7365c2f8ab268081b9f40f781e3e4aeb41a0cc520dc95ebfc7e95d145673e@@)),
    MSG_NPC(1, (@@STRING:13e715d4a282f7f84a7a465533eaf82b133a1ec0dc438fcf906939580599cfed@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g27_s0_obj0_dlg2[] = { /* 0x8185eac */
    DEBUGINFO_O(2071),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g27_s0_lives1_dlg2[] = { /* 0x8185edc */
    DEBUGINFO_O(2077),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:c6e97422e4e6d27efd4b7d90b9961f7590d545f5814ec95e99345af1f6000395@@)),
    MSG_NPC(1, (@@STRING:cec8ce54ef0c776d5c46a43537879673e9668fe30bd69db1e451ca40155a4194@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g27_s0_lives2_dlg2[] = { /* 0x8185f90 */
    DEBUGINFO_O(2088),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:aab97601ce20650baad60ae487d06323b1108601cc5fdf760f426122cd1e68fe@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g27_s0_lives3_dlg2[] = { /* 0x818601c */
    DEBUGINFO_O(2097),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:59e872c53146ae35ac72c284c55ef8f22155b5344927dce2f6826f69c10598a1@@)),
    MSG_NPC(1, (@@STRING:7e3a744886bfec4ca21b27eb59145a2c0988fac95e865766ffba7c57974daac3@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g28_s0_station_sref_script[] = { /* 0x81860f4 */
    DEBUGINFO_O(2107),
    SELECT_MAP(2),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_AFTERMATH),
    { 0x22, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(240),
    { 0x23, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs2_g28_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs2_g28_s0_station_sref_script }; /* 0x8186174 */

static const struct ScriptCommand s_gs2_g28_s0_eff0_script[] = { /* 0x8186180 */
    DEBUGINFO_O(2120),
    CAMERA_INIT_PAN,
    WALK_GRID(153, 14),
    HALT,
};

static const struct ScriptCommand s_gs2_g28_s0_lives0_dlg0[] = { /* 0x81861c0 */
    DEBUGINFO_O(2127),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g29_s0_station_sref_script[] = { /* 0x8186200 */
    DEBUGINFO_O(2134),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, 2),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, 1),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(3),
    SELECT_ENTITIES(-1, 0),
    WAIT(30),
    BGM_SWITCH(MUS_FILE_SELECT),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    SELECT_EVENTS(0, 2),
    CALL_STATION( 30,  0),
    RET,
};

static const ScriptRef s_gs2_g29_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs2_g29_s0_station_sref_script }; /* 0x8186300 */

static const struct ScriptCommand s_gs2_g29_s0_eff0_script[] = { /* 0x818630c */
    DEBUGINFO_O(2155),
    CAMERA_END_PAN,
    WAIT(1),
    CAMERA_INIT_PAN,
    WALK_GRID(256, 23),
    AWAIT_CUE(4),
    CAMERA_PAN(256, 24),
    AWAIT_CUE(4),
    CAMERA_PAN(512, 25),
    WAIT(150),
    CAMERA_PAN(512, 24),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs2_g29_s0_lives0_dlg0[] = { /* 0x81863ec */
    DEBUGINFO_O(2172),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WALK_GRID(256, 15),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:3062fa4775376d06e0f127004f7679206eb03f16f2986d838c991e5f4b69739b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WALK_GRID(256, 16),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(30),
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b59281f3b82c992ffecf66e42992f86a13b0cfa272a9af07871371b82f792d9c@@)),
    VARIANT(/* == */  1, (@@STRING:3649d8fc1c8ff068f0073022ddbccc98fff6d4cbed60c18488c6e7d30dd1e430@@)),
    VARIANT_DEFAULT((@@STRING:46f0c9c83c1e9f9b396d7d28943895b433413e33222827d73d22751db51b9e4d@@)),
    VARIANT_DEFAULT((@@STRING:9db409b2d00d784f1646dfef75c060906f14a682a716d514e473f1aadc58414b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0005, 0x00000000),
    PORTRAIT_POS(5, 2, 3),
    MSG_NPC(5, (@@STRING:bf4cfd678a03300477fb3a26e3a48ed6f9322c8b27f8caf314f9d28f292fa41a@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(7),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:c0a3ea3ce90b54996924f2e3d990e53badbb551acbd678799a66cd5749eb4c05@@)),
    MSG_NPC(1, (@@STRING:1d930c04c22e35d00431fdb9db311280832e8540ab7da9c86e5c5a528b331dbe@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(5, (@@STRING:c089c1cd78863071d35a8784806691cdcd6563e5d38b3f3e66a3237ffa387b57@@)),
    MSG_NPC(5, (@@STRING:5016ed4b000305e816146e7ae4685a2395f6ceca60d1177bd69e7ebb781ffe75@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:2a4129ec68a70fb992d0231a4c4d8338d79a6e42f8ffec91151c53eaa88914d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0006, 0x00000000),
    PORTRAIT_POS(6, 0, -1),
    MSG_NPC(6, (@@STRING:d5acc900add9716178d86f17d88a2992f48fb0168637f47e4be11c87844381bb@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(6, (@@STRING:5d3cf4e42b363c1e5f34ff7d9d96cd6a0d7eb72fbb2c755ae85e5cfdbe278e4e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:c2b0e3cc2f27946c2663cfd648df77f1cdc9c93270f31c3ebbae277e74bdc01d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(11),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(15),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(5, (@@STRING:73cb51751c353278e9fe184dada2c9c3a07b6c14759b07754c2e5e6fc369bb67@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:8c1baf0ad01b1ea1db2a0db960b194e659858f35fd92f34990d98fb46dd2eff7@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(10),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(30),
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a8fb2f485d9c9dd5cb50c9ac3b927a541b82a636ea4bb2817f6d47548d37402b@@)),
    VARIANT_DEFAULT((@@STRING:0d91fb57761d47cdc3a16a3a332494882ddb076e70eb9e8003b83a8e60c212d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:1d906e75df22455308f3e16e5a274588581794e56465a0e7e5825c1efd525214@@)),
    MSG_NPC(4, (@@STRING:8a07d43877e9cec0629eef0f5b1af3134ba2f0128af51f6b539a9ecbaabb553b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(10),
    CALL_SCRIPT(NOTICE_FUNC),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:8f62eae37dc826d503a7b1cd51248384802bb359a5da22858ab61ec0538360fd@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_NPC(4, (@@STRING:b5b8a852e25b225e05ecb50c6303c46a2bf9782c4ca1b03eaccd6d68a1de443e@@)),
    MSG_NPC(4, (@@STRING:0f115a05175733e0fa628a6f83402eada3ed3a5ed1f0f4ee1d04f81adc145623@@)),
    MSG_NPC(4, (@@STRING:bac53e09249516cd3b010b2f180eb2c03df9de9c83b0f7e3f7020a117ad51a4b@@)),
    MSG_NPC(4, (@@STRING:9b4e28ed9a3caced242f5dd923e1834de01bb458ef2f7429cad99683f01e41ce@@)),
    MSG_NPC(4, (@@STRING:4dffe1f3187359b3e5cfc5ad23152bf0c02c58b80e46e72307280b931b973e71@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_BOTTOM, 0x0002, 0x00000000),
    PORTRAIT_POS(2, -2, 0),
    MSG_NPC(2, (@@STRING:b0c4d70a16974b7f8db5c5a0fcfef9ca039cce03ed17e77e13c5d146e5c59587@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, -1, 0),
    MSG_NPC(3, (@@STRING:186c8655b7617e8c7a63a76677c9e2c1730d5c1ee639c02b69964c314ae42f96@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(5, (@@STRING:36bbb83b29bfb8d1079ddb5a713a94b22878ea8d9781de349be73088d7e07edb@@)),
    MSG_NPC(5, (@@STRING:531a839bc4c03dbdf3a291ac0a7ddb210344efef4f12fad62c62e7aa28eef1eb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:a126df715a238cac1d54e186dc34e8f070618d40491d30c8129fb30ca713152a@@)),
    MSG_NPC(4, (@@STRING:41a0d00bc8c3d4771a3f87a758287aa90fb79f6ac63b597853e851640accfe53@@)),
    MSG_NPC(4, (@@STRING:cdd3b175e710bc77224c98a6ba4e6b0632163281e3e65266a3f28ccbf57d7df9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(10),
    CALL_SCRIPT(NOTICE_FUNC),
    MSG_NPC(5, (@@STRING:526f19632c3c8e48c34493188f204ab1bc377fa08cdc473e42df5fd11bf096a5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:7b45b53936f679362f467310edb23437fd44b48a0f50c1c91ce0774b7eec55c5@@)),
    MSG_NPC(3, (@@STRING:1e9a5d421b078138b59e74e1d097a5f0cd5148a5b53494ce306b328854d77ca6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:4238a3a4dba7ad8358be733c66f0c7fcd65a72ea72e18f24cc6dc11fdf0378d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:515793014e0d8f39d64bdae0fb89b6a21126f39af2e3dac8aa8ee028a129b11b@@)),
    VARIANT(/* == */  3, (@@STRING:eba3f5f38741b153c64384e2080a8977b91a157c0f686fa8fbb2f7750571fa2d@@)),
    VARIANT_DEFAULT((@@STRING:eba3f5f38741b153c64384e2080a8977b91a157c0f686fa8fbb2f7750571fa2d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:e3c9e5a848f276ba83535a3e65f82f6f07341415845af86f991a988252aea5d6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e269dfa5d777c35fd0218f22cc3aad6f523224eaf510b5008206ee32bdf01f0b@@)),
    VARIANT(/* == */  3, (@@STRING:c857504f207b37291bf4032e1756fc88bafc975038508c51bece55977b816bfa@@)),
    VARIANT_DEFAULT((@@STRING:c857504f207b37291bf4032e1756fc88bafc975038508c51bece55977b816bfa@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};
























static const struct ScriptCommand s_gs2_g29_s0_lives1_dlg0[] = { /* 0x8187888 */
    DEBUGINFO_O(2410),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 17),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(256, 18),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(90),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs2_g29_s0_lives2_dlg0[] = { /* 0x8187b78 */
    DEBUGINFO_O(2460),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 19),
    AWAIT_CUE(7),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(7),
    WAIT(5),
    WALK_GRID(256, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(7),
    WAIT(4),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(7),
    WAIT(4),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(7),
    WAIT(3),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs2_g29_s0_lives3_dlg0[] = { /* 0x8187d98 */
    DEBUGINFO_O(2497),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 21),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(8),
    WAIT(10),
    WALK_GRID(256, 22),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    WAIT(4),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(8),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs2_g29_s0_lives4_dlg0[] = { /* 0x8187f58 */
    DEBUGINFO_O(2528),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs2_g29_s0_lives5_dlg0[] = { /* 0x81880b8 */
    DEBUGINFO_O(2553),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    WAIT(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(10),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(10),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(10),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTH),
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs2_g29_s0_lives6_dlg0[] = { /* 0x81882a8 */
    DEBUGINFO_O(2587),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    WAIT(4),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs2_g30_s0_station_sref_script[] = { /* 0x8188368 */
    DEBUGINFO_O(2602),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs2_g30_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs2_g30_s0_station_sref_script }; /* 0x81883a8 */

static const struct ScriptCommand s_gs2_g30_s0_lives0_dlg2[] = { /* 0x81883b4 */
    DEBUGINFO_O(2611),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:02e36bab2ff24df513a7a28f49b0f841cd33a51908b0f0f84fae8f7d0f46ee23@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g30_s0_lives1_dlg2[] = { /* 0x818843c */
    DEBUGINFO_O(2620),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:0396830a5f444c2beec4fff6919da20f10fccf6d13544d2d052e907ba1d35042@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g30_s0_lives2_dlg2[] = { /* 0x81884c8 */
    DEBUGINFO_O(2629),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:b5b8a852e25b225e05ecb50c6303c46a2bf9782c4ca1b03eaccd6d68a1de443e@@)),
    MSG_NPC(1, (@@STRING:7ca7a1a108aee5eab5daf59587e4fc810f5c20cf2e172064a313bf654d277683@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g30_s0_lives3_dlg2[] = { /* 0x818856c */
    DEBUGINFO_O(2639),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6a146f702deae32ca2264e18e8cb4f8da3fbb11cd6b9f3915a5a8784eae3e1d1@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g30_s0_lives4_dlg0[] = { /* 0x8188604 */
    DEBUGINFO_O(2648),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs2_g30_s0_lives4_dlg2[] = { /* 0x8188644 */
    DEBUGINFO_O(2655),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:86105b4e9bc152c5c6923109d9cbda059d144b28664659e3555c169283088b88@@)),
    MSG_NPC(1, (@@STRING:701e6ec4ec0fdfa4518cf18c7bd8732532b7ab54de4d983703a47a2dfae2f6e6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs2_g30_s0_obj0_dlg2[] = { /* 0x8188748 */
    DEBUGINFO_O(2665),
    { 0x21, 0x00,  0x0000,  0x00000062,  0x00000000, NULL },
    RET,
};

static const struct GroundLivesData s_gs2_g0_s1_lives[] = { /* 0x8188778 */
    /*  0 */ {   0,   4,   0,   0, {  28,  71, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  73, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g0_s2_lives[] = { /* 0x81887a8 */
    /*  0 */ {   0,   0,   0,   0, {  28,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  28,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g1_s0_lives[] = { /* 0x81887d8 */
    /*  0 */ {  54,   6,   0,   0, {  35,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g1_s0_lives0_dlg0,
        [2] = s_gs2_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  94,   2,   0,   0, {  31,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g1_s0_lives1_dlg0,
        [2] = s_gs2_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  98,   0,   0,   0, {  40,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g1_s0_lives2_dlg0,
        [2] = s_gs2_g1_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g3_s0_lives[] = { /* 0x8188820 */
    /*  0 */ {  98,   0,   0,   0, {  40,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g3_s0_lives0_dlg0,
        [2] = s_gs2_g3_s0_lives0_dlg2,
        [3] = s_gs2_g3_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs2_g4_s0_lives[] = { /* 0x8188838 */
    /*  0 */ {  98,   0,   0,   0, {  40,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g4_s0_lives0_dlg0,
        [2] = s_gs2_g4_s0_lives0_dlg2,
        [3] = s_gs2_g4_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs2_g5_s0_lives[] = { /* 0x8188850 */
    /*  0 */ {  93,   2,   0,   0, {  16,  43, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g5_s0_lives0_dlg2,
    } },
    /*  1 */ {  92,   6,   0,   0, {  20,  43, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g5_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g6_s0_lives[] = { /* 0x8188880 */
    /*  0 */ {   0,   4,   0,   0, {  16,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g6_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  20,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g6_s0_lives1_dlg0,
    } },
    /*  2 */ {  93,   0,   0,   0, {  16,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g6_s0_lives2_dlg0,
    } },
    /*  3 */ {  92,   0,   0,   0, {  20,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g6_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g7_s0_lives[] = { /* 0x81888e0 */
    /*  0 */ {  93,   2,   0,   0, {  16,  43, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g7_s0_lives0_dlg2,
    } },
    /*  1 */ {  92,   6,   0,   0, {  20,  43, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g7_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g8_s0_lives[] = { /* 0x8188910 */
    /*  0 */ {   0,   2,   0,   0, {  16,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g8_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {  20,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g8_s0_lives1_dlg0,
    } },
    /*  2 */ {  93,   2,   0,   0, {  16,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g8_s0_lives2_dlg0,
    } },
    /*  3 */ {  92,   6,   0,   0, {  20,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g8_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g9_s0_lives[] = { /* 0x8188970 */
    /*  0 */ {  92,   6,   0,   0, {  18,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g9_s0_lives0_dlg0,
        [2] = s_gs2_g9_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g9_s1_lives[] = { /* 0x8188988 */
    /*  0 */ {   0,   2,   0,   0, {  16,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g9_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   6,   0,   0, {  20,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g9_s1_lives1_dlg0,
    } },
    /*  2 */ {  92,   2,   0,   0, {  18,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g9_s1_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g10_s0_lives[] = { /* 0x81889d0 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g10_s0_lives0_dlg0,
        [2] = s_gs2_g10_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g11_s0_lives[] = { /* 0x81889e8 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g11_s0_lives0_dlg0,
        [2] = s_gs2_g11_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g12_s0_lives[] = { /* 0x8188a00 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g12_s0_lives0_dlg0,
        [2] = s_gs2_g12_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g12_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g13_s0_lives[] = { /* 0x8188a30 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g13_s0_lives0_dlg0,
        [2] = s_gs2_g13_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g14_s0_lives[] = { /* 0x8188a48 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g14_s0_lives0_dlg0,
        [2] = s_gs2_g14_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   2,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g14_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   6,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g14_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g15_s0_lives[] = { /* 0x8188a90 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g15_s0_lives0_dlg0,
        [2] = s_gs2_g15_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   2,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g15_s0_lives1_dlg0,
        [2] = s_gs2_g15_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   6,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g15_s0_lives2_dlg0,
        [2] = s_gs2_g15_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g16_s0_lives[] = { /* 0x8188ad8 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g16_s0_lives0_dlg0,
        [2] = s_gs2_g16_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g16_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   0,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g16_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g16_s1_lives[] = { /* 0x8188b20 */
    /*  0 */ {   0,   4,   0,   0, {  27,  23, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g16_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  30,  23, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g16_s1_lives1_dlg0,
    } },
    /*  2 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g16_s1_lives2_dlg0,
        [2] = s_gs2_g16_s1_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g18_s0_lives[] = { /* 0x8188b68 */
    /*  0 */ {   0,   4,   0,   0, {  27,  23, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g18_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  30,  23, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g18_s0_lives1_dlg0,
    } },
    /*  2 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g18_s0_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g19_s0_lives[] = { /* 0x8188bb0 */
    /*  0 */ {  98,   0,   0,   0, {  35,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g19_s0_lives0_dlg0,
        [1] = s_gs2_g19_s0_lives0_dlg1,
    } },
};

static const struct GroundLivesData s_gs2_g20_s0_lives[] = { /* 0x8188bc8 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g20_s0_lives0_dlg0,
        [2] = s_gs2_g20_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g20_s0_lives1_dlg0,
        [2] = s_gs2_g20_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   0,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g20_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g21_s0_lives[] = { /* 0x8188c10 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g21_s0_lives0_dlg0,
        [2] = s_gs2_g21_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g21_s0_lives1_dlg0,
        [2] = s_gs2_g21_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   0,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g21_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g22_s0_lives[] = { /* 0x8188c58 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g22_s0_lives0_dlg0,
        [2] = s_gs2_g22_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g22_s0_lives1_dlg0,
        [2] = s_gs2_g22_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   0,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g22_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g23_s0_lives[] = { /* 0x8188ca0 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g23_s0_lives0_dlg0,
        [2] = s_gs2_g23_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g23_s0_lives1_dlg0,
        [2] = s_gs2_g23_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   0,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g23_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g24_s0_lives[] = { /* 0x8188ce8 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g24_s0_lives0_dlg0,
        [2] = s_gs2_g24_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  32,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g24_s0_lives1_dlg0,
        [2] = s_gs2_g24_s0_lives1_dlg2,
    } },
    /*  2 */ {  94,   0,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g24_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g25_s0_lives[] = { /* 0x8188d30 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g25_s0_lives0_dlg0,
        [2] = s_gs2_g25_s0_lives0_dlg2,
    } },
    /*  1 */ {  94,   0,   0,   0, {  36,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g25_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g26_s0_lives[] = { /* 0x8188d60 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g26_s0_lives0_dlg0,
        [2] = s_gs2_g26_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  35,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g26_s0_lives1_dlg2,
    } },
    /*  2 */ {  53,   0,   0,   0, {  31,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g26_s0_lives2_dlg2,
    } },
    /*  3 */ {  94,   0,   0,   0, {  39,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g26_s0_lives3_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g27_s0_lives[] = { /* 0x8188dc0 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g27_s0_lives0_dlg0,
        [2] = s_gs2_g27_s0_lives0_dlg2,
    } },
    /*  1 */ {  54,   0,   0,   0, {  35,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g27_s0_lives1_dlg2,
    } },
    /*  2 */ {  53,   0,   0,   0, {  31,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g27_s0_lives2_dlg2,
    } },
    /*  3 */ {  94,   0,   0,   0, {  39,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g27_s0_lives3_dlg2,
    } },
};

static const struct GroundLivesData s_gs2_g28_s0_lives[] = { /* 0x8188e20 */
    /*  0 */ {  98,   0,   0,   0, {  28,  20, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g28_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g29_s0_lives[] = { /* 0x8188e38 */
    /*  0 */ {   0,   4,   0,   0, {  30,  65, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g29_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  27,  65, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g29_s0_lives1_dlg0,
    } },
    /*  2 */ {  54,   4,   0,   0, {  27,  68, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g29_s0_lives2_dlg0,
    } },
    /*  3 */ {  94,   4,   0,   0, {  30,  69, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g29_s0_lives3_dlg0,
    } },
    /*  4 */ {  88,   4,   0,   0, {  34,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g29_s0_lives4_dlg0,
    } },
    /*  5 */ {  81,   4,   0,   0, {  38,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs2_g29_s0_lives5_dlg0,
    } },
    /*  6 */ {  98,   0,   0,   0, {  40,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g29_s0_lives6_dlg0,
    } },
};

static const struct GroundLivesData s_gs2_g30_s0_lives[] = { /* 0x8188ee0 */
    /*  0 */ {  54,   3,   0,   0, {  33,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g30_s0_lives0_dlg2,
    } },
    /*  1 */ {  94,   4,   0,   0, {  39,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g30_s0_lives1_dlg2,
    } },
    /*  2 */ {  88,   0,   0,   0, {  34,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g30_s0_lives2_dlg2,
    } },
    /*  3 */ {  81,   0,   0,   0, {  38,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs2_g30_s0_lives3_dlg2,
    } },
    /*  4 */ {  98,   0,   0,   0, {  40,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs2_g30_s0_lives4_dlg0,
        [2] = s_gs2_g30_s0_lives4_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g1_s0_objs[] = { /* 0x8188f58 */
    /*  0 */ {   4,   0,   3,   1, {  40,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g1_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g3_s0_objs[] = { /* 0x8188f70 */
    /*  0 */ {   4,   0,   3,   1, {  40,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g3_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g4_s0_objs[] = { /* 0x8188f88 */
    /*  0 */ {   4,   0,   3,   1, {  40,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g4_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g10_s0_objs[] = { /* 0x8188fa0 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g10_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g11_s0_objs[] = { /* 0x8188fb8 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g11_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g12_s0_objs[] = { /* 0x8188fd0 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g12_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g13_s0_objs[] = { /* 0x8188fe8 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g13_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g14_s0_objs[] = { /* 0x8189000 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g14_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g15_s0_objs[] = { /* 0x8189018 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g15_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g16_s0_objs[] = { /* 0x8189030 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g16_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g20_s0_objs[] = { /* 0x8189048 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g20_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g21_s0_objs[] = { /* 0x8189060 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g21_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g22_s0_objs[] = { /* 0x8189078 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g22_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g23_s0_objs[] = { /* 0x8189090 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g23_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g24_s0_objs[] = { /* 0x81890a8 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g24_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g25_s0_objs[] = { /* 0x81890c0 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g25_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g26_s0_objs[] = { /* 0x81890d8 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g26_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g27_s0_objs[] = { /* 0x81890f0 */
    /*  0 */ {   4,   0,   3,   1, {  28,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g27_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs2_g30_s0_objs[] = { /* 0x8189108 */
    /*  0 */ {   4,   0,   3,   1, {  40,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs2_g30_s0_obj0_dlg2,
    } },
};

static const struct GroundEffectData s_gs2_g6_s0_effs[] = { /* 0x8189120 */
    /*  0 */ {   0,   0,   1,   1, {  18,  46, 0, 0 }, s_gs2_g6_s0_eff0_script },
};

static const struct GroundEffectData s_gs2_g8_s0_effs[] = { /* 0x818912c */
    /*  0 */ {   0,   0,   1,   1, {  18,  46, 0, 0 }, s_gs2_g8_s0_eff0_script },
};

static const struct GroundEffectData s_gs2_g9_s1_effs[] = { /* 0x8189138 */
    /*  0 */ {   0,   0,   1,   1, {  18,  46, 0, 0 }, s_gs2_g9_s1_eff0_script },
};

static const struct GroundEffectData s_gs2_g16_s0_effs[] = { /* 0x8189144 */
    /*  0 */ {   0,   0,   1,   1, {  28,  22, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs2_g16_s0_eff0_script },
};

static const struct GroundEffectData s_gs2_g18_s0_effs[] = { /* 0x8189150 */
    /*  0 */ {   0,   0,   1,   1, {  28,  22, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs2_g28_s0_effs[] = { /* 0x818915c */
    /*  0 */ {   0,   0,   1,   1, {  28,  40, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs2_g28_s0_eff0_script },
};

static const struct GroundEffectData s_gs2_g29_s0_effs[] = { /* 0x8189168 */
    /*  0 */ {   0,   0,   1,   1, {  28,  64, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs2_g29_s0_eff0_script },
};

static const struct GroundEventData s_gs2_g0_s0_evts[] = { /* 0x8189174 */
    /*  0 */ {   9,   3,   0,   0, {  24,  75, 0, 0 }, &s_gs2_g0_s0_evt0_sref },
};

static const struct GroundEventData s_gs2_g0_s2_evts[] = { /* 0x8189180 */
    /*  0 */ {   3,   3,   0,   0, {  27,  22, 0, 0 }, &s_gs2_g0_s2_evt0_sref },
};

static const struct GroundEventData s_gs2_g5_s0_evts[] = { /* 0x818918c */
    /*  0 */ {   9,   5,   0,   0, {  14,  41, 0, 0 }, &s_gs2_g5_s0_evt0_sref },
};

static const struct GroundEventData s_gs2_g7_s0_evts[] = { /* 0x8189198 */
    /*  0 */ {   9,   5,   0,   0, {  14,  41, 0, 0 }, &s_gs2_g7_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x81891a4 */
    &s_gs2_g0_s0_station_sref,
    &s_gs2_g1_s0_station_sref,
    &s_gs2_g2_s0_station_sref,
    &s_gs2_g6_s0_station_sref,
    &s_gs2_g8_s0_station_sref,
    &s_gs2_g9_s1_station_sref,
    &s_gs2_g10_s0_station_sref,
    &s_gs2_g11_s0_station_sref,
    &s_gs2_g12_s0_station_sref,
    &s_gs2_g13_s0_station_sref,
    &s_gs2_g14_s0_station_sref,
    &s_gs2_g15_s0_station_sref,
    &s_gs2_g16_s0_station_sref,
    &s_gs2_g16_s1_station_sref,
    &s_gs2_g17_s0_station_sref,
    &s_gs2_g18_s0_station_sref,
    &s_gs2_g19_s0_station_sref,
    &s_gs2_g20_s0_station_sref,
    &s_gs2_g21_s0_station_sref,
    &s_gs2_g22_s0_station_sref,
    &s_gs2_g23_s0_station_sref,
    &s_gs2_g24_s0_station_sref,
    &s_gs2_g25_s0_station_sref,
    &s_gs2_g26_s0_station_sref,
    &s_gs2_g27_s0_station_sref,
    &s_gs2_g28_s0_station_sref,
    &s_gs2_g29_s0_station_sref,
    &s_gs2_g30_s0_station_sref,
};

static const struct GroundScriptSector s_gs2_g0_sectors[] = { /* 0x8189214 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs2_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs2_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs2_g0_s2_lives), 0,NULL, 0,NULL, LPARRAY(s_gs2_g0_s2_evts), 0,NULL, },
};

static const struct GroundScriptSector s_gs2_g1_sectors[] = { /* 0x818928c */
    { LPARRAY(s_gs2_g1_s0_lives), LPARRAY(s_gs2_g1_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs2_g2_sectors[] = { /* 0x81892b4 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs2_g3_sectors[] = { /* 0x81892dc */
    { LPARRAY(s_gs2_g3_s0_lives), LPARRAY(s_gs2_g3_s0_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs2_g4_sectors[] = { /* 0x8189304 */
    { LPARRAY(s_gs2_g4_s0_lives), LPARRAY(s_gs2_g4_s0_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs2_g5_sectors[] = { /* 0x818932c */
    { LPARRAY(s_gs2_g5_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs2_g5_s0_evts), 0,NULL, },
};

static const struct GroundScriptSector s_gs2_g6_sectors[] = { /* 0x8189354 */
    { LPARRAY(s_gs2_g6_s0_lives), 0,NULL, LPARRAY(s_gs2_g6_s0_effs), 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs2_g7_sectors[] = { /* 0x818937c */
    { LPARRAY(s_gs2_g7_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs2_g7_s0_evts), 0,NULL, },
};

static const struct GroundScriptSector s_gs2_g8_sectors[] = { /* 0x81893a4 */
    { LPARRAY(s_gs2_g8_s0_lives), 0,NULL, LPARRAY(s_gs2_g8_s0_effs), 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs2_g9_sectors[] = { /* 0x81893cc */
    { LPARRAY(s_gs2_g9_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs2_g9_s1_lives), 0,NULL, LPARRAY(s_gs2_g9_s1_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs2_g10_sectors[] = { /* 0x818941c */
    { LPARRAY(s_gs2_g10_s0_lives), LPARRAY(s_gs2_g10_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptSector s_gs2_g11_sectors[] = { /* 0x8189444 */
    { LPARRAY(s_gs2_g11_s0_lives), LPARRAY(s_gs2_g11_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[7], },
};

static const struct GroundScriptSector s_gs2_g12_sectors[] = { /* 0x818946c */
    { LPARRAY(s_gs2_g12_s0_lives), LPARRAY(s_gs2_g12_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[8], },
};

static const struct GroundScriptSector s_gs2_g13_sectors[] = { /* 0x8189494 */
    { LPARRAY(s_gs2_g13_s0_lives), LPARRAY(s_gs2_g13_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[9], },
};

static const struct GroundScriptSector s_gs2_g14_sectors[] = { /* 0x81894bc */
    { LPARRAY(s_gs2_g14_s0_lives), LPARRAY(s_gs2_g14_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[10], },
};

static const struct GroundScriptSector s_gs2_g15_sectors[] = { /* 0x81894e4 */
    { LPARRAY(s_gs2_g15_s0_lives), LPARRAY(s_gs2_g15_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[11], },
};

static const struct GroundScriptSector s_gs2_g16_sectors[] = { /* 0x818950c */
    { LPARRAY(s_gs2_g16_s0_lives), LPARRAY(s_gs2_g16_s0_objs), LPARRAY(s_gs2_g16_s0_effs), 0,NULL, 1,&sStationScripts[12], },
    { LPARRAY(s_gs2_g16_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[13], },
};

static const struct GroundScriptSector s_gs2_g17_sectors[] = { /* 0x818955c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[14], },
};

static const struct GroundScriptSector s_gs2_g18_sectors[] = { /* 0x8189584 */
    { LPARRAY(s_gs2_g18_s0_lives), 0,NULL, LPARRAY(s_gs2_g18_s0_effs), 0,NULL, 1,&sStationScripts[15], },
};

static const struct GroundScriptSector s_gs2_g19_sectors[] = { /* 0x81895ac */
    { LPARRAY(s_gs2_g19_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[16], },
};

static const struct GroundScriptSector s_gs2_g20_sectors[] = { /* 0x81895d4 */
    { LPARRAY(s_gs2_g20_s0_lives), LPARRAY(s_gs2_g20_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[17], },
};

static const struct GroundScriptSector s_gs2_g21_sectors[] = { /* 0x81895fc */
    { LPARRAY(s_gs2_g21_s0_lives), LPARRAY(s_gs2_g21_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[18], },
};

static const struct GroundScriptSector s_gs2_g22_sectors[] = { /* 0x8189624 */
    { LPARRAY(s_gs2_g22_s0_lives), LPARRAY(s_gs2_g22_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[19], },
};

static const struct GroundScriptSector s_gs2_g23_sectors[] = { /* 0x818964c */
    { LPARRAY(s_gs2_g23_s0_lives), LPARRAY(s_gs2_g23_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[20], },
};

static const struct GroundScriptSector s_gs2_g24_sectors[] = { /* 0x8189674 */
    { LPARRAY(s_gs2_g24_s0_lives), LPARRAY(s_gs2_g24_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[21], },
};

static const struct GroundScriptSector s_gs2_g25_sectors[] = { /* 0x818969c */
    { LPARRAY(s_gs2_g25_s0_lives), LPARRAY(s_gs2_g25_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[22], },
};

static const struct GroundScriptSector s_gs2_g26_sectors[] = { /* 0x81896c4 */
    { LPARRAY(s_gs2_g26_s0_lives), LPARRAY(s_gs2_g26_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[23], },
};

static const struct GroundScriptSector s_gs2_g27_sectors[] = { /* 0x81896ec */
    { LPARRAY(s_gs2_g27_s0_lives), LPARRAY(s_gs2_g27_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[24], },
};

static const struct GroundScriptSector s_gs2_g28_sectors[] = { /* 0x8189714 */
    { LPARRAY(s_gs2_g28_s0_lives), 0,NULL, LPARRAY(s_gs2_g28_s0_effs), 0,NULL, 1,&sStationScripts[25], },
};

static const struct GroundScriptSector s_gs2_g29_sectors[] = { /* 0x818973c */
    { LPARRAY(s_gs2_g29_s0_lives), 0,NULL, LPARRAY(s_gs2_g29_s0_effs), 0,NULL, 1,&sStationScripts[26], },
};

static const struct GroundScriptSector s_gs2_g30_sectors[] = { /* 0x8189764 */
    { LPARRAY(s_gs2_g30_s0_lives), LPARRAY(s_gs2_g30_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[27], },
};

static const struct GroundScriptGroup s_gs2_groups[] = { /* 0x818978c */
    { LPARRAY(s_gs2_g0_sectors) },
    { LPARRAY(s_gs2_g1_sectors) },
    { LPARRAY(s_gs2_g2_sectors) },
    { LPARRAY(s_gs2_g3_sectors) },
    { LPARRAY(s_gs2_g4_sectors) },
    { LPARRAY(s_gs2_g5_sectors) },
    { LPARRAY(s_gs2_g6_sectors) },
    { LPARRAY(s_gs2_g7_sectors) },
    { LPARRAY(s_gs2_g8_sectors) },
    { LPARRAY(s_gs2_g9_sectors) },
    { LPARRAY(s_gs2_g10_sectors) },
    { LPARRAY(s_gs2_g11_sectors) },
    { LPARRAY(s_gs2_g12_sectors) },
    { LPARRAY(s_gs2_g13_sectors) },
    { LPARRAY(s_gs2_g14_sectors) },
    { LPARRAY(s_gs2_g15_sectors) },
    { LPARRAY(s_gs2_g16_sectors) },
    { LPARRAY(s_gs2_g17_sectors) },
    { LPARRAY(s_gs2_g18_sectors) },
    { LPARRAY(s_gs2_g19_sectors) },
    { LPARRAY(s_gs2_g20_sectors) },
    { LPARRAY(s_gs2_g21_sectors) },
    { LPARRAY(s_gs2_g22_sectors) },
    { LPARRAY(s_gs2_g23_sectors) },
    { LPARRAY(s_gs2_g24_sectors) },
    { LPARRAY(s_gs2_g25_sectors) },
    { LPARRAY(s_gs2_g26_sectors) },
    { LPARRAY(s_gs2_g27_sectors) },
    { LPARRAY(s_gs2_g28_sectors) },
    { LPARRAY(s_gs2_g29_sectors) },
    { LPARRAY(s_gs2_g30_sectors) },
};

static const struct GroundLink s_gs2_links[] = { /* 0x8189884 */
    /* link   0 */ { { /*x*/  28, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  16, /*y*/  48, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   2 */ { { /*x*/  20, /*y*/  48, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   3 */ { { /*x*/  28, /*y*/  48, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   4 */ { { /*x*/  28, /*y*/  60, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   5 */ { { /*x*/  18, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 3 },
    /* link   6 */ { { /*x*/  28, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   7 */ { { /*x*/  16, /*y*/  48, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   8 */ { { /*x*/  20, /*y*/  48, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   9 */ { { /*x*/  28, /*y*/  48, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  10 */ { { /*x*/  28, /*y*/  60, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  11 */ { { /*x*/  18, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 3 },
    /* link  12 */ { { /*x*/  27, /*y*/  23, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  13 */ { { /*x*/  30, /*y*/  23, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  14 */ { { /*x*/  28, /*y*/   9, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  15 */ { { /*x*/  30, /*y*/  49, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  16 */ { { /*x*/  38, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  17 */ { { /*x*/  27, /*y*/  49, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  18 */ { { /*x*/  34, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  19 */ { { /*x*/  27, /*y*/  51, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  20 */ { { /*x*/  33, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  21 */ { { /*x*/  30, /*y*/  51, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  22 */ { { /*x*/  39, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  23 */ { { /*x*/  28, /*y*/  48, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  24 */ { { /*x*/  35, /*y*/  42, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  25 */ { { /*x*/  28, /*y*/  24, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs2 = { LPARRAY(s_gs2_groups), s_gs2_links }; /* 0x8189954 */
