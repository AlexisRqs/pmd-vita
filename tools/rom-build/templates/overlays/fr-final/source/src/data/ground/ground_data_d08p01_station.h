
static const struct ScriptCommand s_gs193_g0_s0_station_sref_script[] = { /* 0x8242bb8 */
    DEBUGINFO_O(13),
    JUMPIF_SCENARIOCHECK(QUEST_UNK5, /* to label */ 0),
    EXECUTE_STATION(MAP_TEAM_BASE_INSIDE, 0, 0),
  LABEL(0), /* = 0x00 */
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 11, /* to label */ 1),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    CALL_STATION(  3,  0),
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
    BGM_SWITCH(MUS_LAPIS_CAVE),
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs193_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs193_g0_s0_station_sref_script }; /* 0x8242e54 */

static const struct ScriptCommand s_gs193_g0_s0_obj0_dlg2[] = { /* 0x8242e60 */
    DEBUGINFO_O(57),
    JUMP_SCRIPT(SAVE_AND_WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs193_g0_s1_lives0_dlg0[] = { /* 0x8242e80 */
    DEBUGINFO_O(62),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s1_lives1_dlg0[] = { /* 0x8242ec0 */
    DEBUGINFO_O(69),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s2_lives0_dlg0[] = { /* 0x8242f00 */
    DEBUGINFO_O(76),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s2_lives1_dlg0[] = { /* 0x8242f40 */
    DEBUGINFO_O(83),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s3_lives0_dlg0[] = { /* 0x8242f80 */
    DEBUGINFO_O(90),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s3_lives1_dlg0[] = { /* 0x8242fc0 */
    DEBUGINFO_O(97),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s4_lives0_dlg0[] = { /* 0x8243000 */
    DEBUGINFO_O(104),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s4_lives1_dlg0[] = { /* 0x8243030 */
    DEBUGINFO_O(110),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs193_g0_s5_obj0_dlg2[] = { /* 0x8243060 */
    DEBUGINFO_O(116),
    JUMP_SCRIPT(WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs193_g0_s5_obj1_dlg2[] = { /* 0x8243080 */
    DEBUGINFO_O(121),
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs193_g1_s0_station_sref_script[] = { /* 0x82430a0 */
    DEBUGINFO_O(126),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_THE_ESCAPE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    NEXT_DUNGEON(0, SCRIPT_DUNGEON_LAPIS_CAVE),
    RET,
};

static const ScriptRef s_gs193_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs193_g1_s0_station_sref_script }; /* 0x8243130 */

static const struct ScriptCommand s_gs193_g1_s0_lives0_dlg0[] = { /* 0x824313c */
    DEBUGINFO_O(140),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    BGM_FADEOUT(30),
    WAIT(120),
    ALERT_CUE(6),
    WALK_GRID(256, 0),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b6e09e78c5f32fc810db49a4f9aa47f52a9e74c2bdda4559f7e2b50417f5a371@@)),
    VARIANT_DEFAULT((@@STRING:2df792fd052e413ab34c82af6d49702e2c75bbca3406362f682b495847b4431f@@)),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e1ac842c3f448abe593351482edd6955aaadc217d02a44de1ed7c66556f9c2e3@@)),
    VARIANT_DEFAULT((@@STRING:0fe71d82536a3612a990b85345a7bf09e4beba172a1075d70c2d3078b3570ff1@@)),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:27d9d84f7d754679a2c04b1b2c51dc691107f7dc6088d24c61dbaa15ef6a4e96@@)),
    VARIANT(/* == */  1, (@@STRING:084bb4a5a4529ec35fcc7486e23a1c0c441685834508fd27f69238e6597cab15@@)),
    VARIANT(/* == */  1, (@@STRING:e1fe92925a9629465622481755b9259d6ab4877f8d3e12e62114446aced082bf@@)),
    VARIANT_DEFAULT((@@STRING:57f4da9ff13723a20a996f850518f3f82fa192e27b344ae7c7d36c8c44f100c1@@)),
    VARIANT_DEFAULT((@@STRING:a1fbae35660bcdcf1b45b1a8cdf0b36ec0553a5305e3f76b4754257181d4e03f@@)),
    VARIANT_DEFAULT((@@STRING:5a65ad861d52a409dc5e00def8cb47ae343572ad847ce7477f1432070bef2a84@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000002),
    MSG_NPC(1, (@@STRING:e8fdeeea5b22c9c871aea7e894f851f0d8578d18b22ea207bfa6b21453a4fc23@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:3bbba08124e2fe32fd4384a211afb465e5506401e139fcb16df848c4a396fd6d@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(20),
    MSG_NPC(-1, (@@STRING:9bb222d229d5db56a3e6a3650cdb51c50796de1c0f808cb30e12e84d95856f8f@@)),
    MSG_NPC(-1, (@@STRING:3356bc71c65919790925ebe16070151660fe62595424971da6a3f6f51120c082@@)),
    MSG_NPC(-1, (@@STRING:5ca0625071bcf5ccad60d7399afefbec45185d61ad3f0c551aa87f2a30f3c4b8@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f44d9ebb86024a785bd9d7043a089a04357ea974dd7026bc82c638132d83de26@@)),
    VARIANT(/* == */  1, (@@STRING:109fd83f15a7b9d68430acbff2a58549f1de1d3d40c621103b4ff06f96931346@@)),
    VARIANT_DEFAULT((@@STRING:a10dc67046ae318ec802729cda8b7742e7c6c2e1095193102836706009f61631@@)),
    VARIANT_DEFAULT((@@STRING:d5672abb1f85e4a839c13e8c9ef4a457155e5f25bd3a94ebb93d38a31d6038aa@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    CAMERA_PAN(256, 2),
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs193_g1_s0_lives1_dlg0[] = { /* 0x824389c */
    DEBUGINFO_O(208),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 1),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(2, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ROTATE_TO(2, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    ROTATE_TO(2, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ROTATE_TO(2, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CAMERA_PAN(256, 2),
    HALT,
};

static const struct ScriptCommand s_gs193_g2_s0_station_sref_script[] = { /* 0x8243a1c */
    DEBUGINFO_O(235),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION(  3,  0),
    RET,
};

static const ScriptRef s_gs193_g2_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs193_g2_s0_station_sref_script }; /* 0x8243aac */

static const struct ScriptCommand s_gs193_g2_s0_lives0_dlg0[] = { /* 0x8243ab8 */
    DEBUGINFO_O(249),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6be98775fb56dae2a2a48c8a50b1a82386c77697e22a2cf895b5e3f6a0ff515e@@)),
    VARIANT_DEFAULT((@@STRING:13cec2b84dc3dca895e4b803061ebd79531fac5f977fa5ebe1487d69555cc94b@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:28c8054ce13b7c26d5845d743d718c6def376b99e88e7c2f0892699ced5c7691@@)),
    VARIANT(/* == */  1, (@@STRING:6da2489efc1e486e67d442612f3d9c67bcd8778503b38e6424b6bd228e13df3d@@)),
    VARIANT(/* == */  1, (@@STRING:e7fb2106f8bc62c1762676dd4db87f2c915e4293649ea0ee3175babd2f87d8be@@)),
    VARIANT_DEFAULT((@@STRING:1f1dafea5fbcef0d3e2e93584c0077066560709a80d3037494540e40be46ff13@@)),
    VARIANT_DEFAULT((@@STRING:7efd227e738c90c7be9f5fa82f5933cf58ea80c31c1284b9b70bd672ade2e0b6@@)),
    VARIANT_DEFAULT((@@STRING:87dc89bb7e7bdc0261d805c2f4961b029d474b679a39f86342d46032024f74a6@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};


static const struct ScriptCommand s_gs193_g2_s0_lives1_dlg0[] = { /* 0x8243e64 */
    DEBUGINFO_O(281),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s0_station_sref_script[] = { /* 0x8243f34 */
    DEBUGINFO_O(297),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs193_g3_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs193_g3_s0_station_sref_script }; /* 0x8243f64 */

static const struct ScriptCommand s_gs193_g3_s0_lives0_dlg1[] = { /* 0x8243f70 */
    DEBUGINFO_O(305),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    JUMP_SCRIPT(LIVES_MOVE_NORMAL),
};

static const struct ScriptCommand s_gs193_g3_s0_lives0_dlg2[] = { /* 0x8243fb0 */
    DEBUGINFO_O(312),
    EXECUTE_STATION(-1, 3, 1),
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s0_evt0_sref_script[] = { /* 0x8243fe0 */
    DEBUGINFO_O(318),
    EXECUTE_STATION(-1, 3, 1),
    HALT,
};

static const ScriptRef s_gs193_g3_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs193_g3_s0_evt0_sref_script }; /* 0x8244010 */

static const struct ScriptCommand s_gs193_g3_s1_station_sref_script[] = { /* 0x824401c */
    DEBUGINFO_O(326),
    SELECT_ENTITIES(-1, 1),
    CANCEL_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs193_g3_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs193_g3_s1_station_sref_script }; /* 0x824406c */

static const struct ScriptCommand s_gs193_g3_s1_lives0_dlg0[] = { /* 0x8244078 */
    DEBUGINFO_O(336),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 34),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:567ac0c7862c83008ac379449112095e2bab9a520ef4a24f9a2f8f25ff981c7d@@)),
    VARIANT_DEFAULT((@@STRING:c2ad13edc1009996f13e0b3d4f99176013ecf5ad38c9e86a650af3cc16a6546f@@)),
    CHOICE(/* label */  0, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  1, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(1), /* = 0x01 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:be884f471f92254ccebc5b7a3700524ac8cd9cff09226ca2db7829eb85116421@@)),
    VARIANT_DEFAULT((@@STRING:607aa04bf602d1cec475f88544e7d54fdf0010f5f7285c7a69f36e72ff90c88e@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:9c2b8d995ad19ae394448c7f66983525ba97ef332c8e223eb83a13b1b47e3809@@)),
    CHOICE(/* label */  2, (@@STRING:bc023296f9791b9adb8e0cab2a5a038b753cbe1b9a8692cab47cdedbe38fdc74@@)),
    CHOICE(/* label */  3, (@@STRING:00e5608a44e3f921e26c038f756852574dbcd942662c1b43ea92216a5e40ad26@@)),
    JUMP_LABEL(1),
  LABEL(2), /* = 0x02 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6762f5b63e3e993a354138e2b7f2117df219c3248138ffd706132cb569130cec@@)),
    VARIANT_DEFAULT((@@STRING:1bde2c86a5d6fcdcd81d6323583b8191ba1f96dfda993640d08c17e14ada12f7@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 4),
    COND_EQUAL(3, /* to label */ 4),
    COND_EQUAL(2, /* to label */ 4),
    COND_EQUAL(5, /* to label */ 4),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    WALK_GRID(256, 2),
    JUMP_LABEL(5),
  LABEL(4), /* = 0x04 */
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    WALK_GRID(256, 2),
  LABEL(5), /* = 0x05 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000a,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 1),
    HALT,
  LABEL(3), /* = 0x03 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cfa464fb417ddd27da199433700fea56dc4a9af7f8272dc2e95bb432b6336569@@)),
    VARIANT_DEFAULT((@@STRING:6b876a816f9741134a6bba5ee47f4cc899aad9c44d6daac5edac937e1814378f@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(2, /* to label */ 6),
    COND_EQUAL(3, /* to label */ 6),
    COND_EQUAL(4, /* to label */ 6),
    COND_EQUAL(5, /* to label */ 6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    BGM_FADEOUT(60),
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    WALK_GRID(256, 2),
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    BGM_FADEOUT(60),
    { 0x23, 0x00,  0x0046,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    WALK_GRID(256, 2),
  LABEL(7), /* = 0x07 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004e,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 1),
    HALT,
};

static const struct ScriptCommand s_gs193_g3_s1_lives1_dlg0[] = { /* 0x8244648 */
    DEBUGINFO_O(415),
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
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    WALK_GRID(256, 2),
    HALT,
  LABEL(0), /* = 0x00 */
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    WALK_GRID(256, 2),
    HALT,
};

static const struct ScriptCommand s_gs193_g4_s0_station_sref_script[] = { /* 0x8244768 */
    DEBUGINFO_O(436),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION(  3,  0),
    RET,
};

static const ScriptRef s_gs193_g4_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs193_g4_s0_station_sref_script }; /* 0x82447f8 */

static const struct ScriptCommand s_gs193_g4_s0_lives0_dlg0[] = { /* 0x8244804 */
    DEBUGINFO_O(450),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x20,  0x0100,  0x00000007,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:0707e7a835f135248c468c5268561be287decccd8681b0374a8e5cdb5e00d44d@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:090d3df9cb79e13d2872c0a1743964e21426adc17cdb7a4a9c35fda9d7fc5868@@)),
    VARIANT(/* == */  1, (@@STRING:a8ee57d9bd083a62de4ea87350a400e0a8045a15a22bdf12c50289ca186c96ea@@)),
    VARIANT(/* == */  1, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT_DEFAULT((@@STRING:8b359078edc62170ae9afae03422639526826d7710636058bdaa08e289b2effa@@)),
    VARIANT_DEFAULT((@@STRING:09b19e8f89eae0251efe22ae7da9a9cd6b8374251174110a7e22157ebc58372d@@)),
    VARIANT_DEFAULT((@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    TEXTBOX_CLEAR,
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs193_g4_s0_lives1_dlg0[] = { /* 0x8244bb4 */
    DEBUGINFO_O(486),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x30,  0x0100,  0x00000007,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs193_g5_s0_station_sref_script[] = { /* 0x8244c94 */
    DEBUGINFO_O(503),
    SELECT_MAP(MAP_LAPIS_CAVE_ENTRY),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_LAPIS_CAVE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION(  3,  0),
    RET,
};

static const ScriptRef s_gs193_g5_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs193_g5_s0_station_sref_script }; /* 0x8244d24 */

static const struct ScriptCommand s_gs193_g5_s0_lives0_dlg0[] = { /* 0x8244d30 */
    DEBUGINFO_O(517),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_RIGHT_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6be98775fb56dae2a2a48c8a50b1a82386c77697e22a2cf895b5e3f6a0ff515e@@)),
    VARIANT_DEFAULT((@@STRING:13cec2b84dc3dca895e4b803061ebd79531fac5f977fa5ebe1487d69555cc94b@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a418bab69584094447e2876014950acf090af7cd644d71c11c458d55d440e868@@)),
    VARIANT(/* == */  1, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT_DEFAULT((@@STRING:8cb28af9f9c35e4b058d282d8f288cfb2ce676ee4e493ac5128610e311e29cd4@@)),
    VARIANT_DEFAULT((@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs193_g5_s0_lives1_dlg0[] = { /* 0x8244f58 */
    DEBUGINFO_O(546),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct GroundLivesData s_gs193_g0_s0_lives[] = { /* 0x8245028 */
    /*  0 */ { 144,   0,   0,   0, {  10,  21, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs193_g0_s1_lives[] = { /* 0x8245040 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s2_lives[] = { /* 0x8245070 */
    /*  0 */ {   0,   0,   0,   0, {  34,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  34,  19, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s3_lives[] = { /* 0x82450a0 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s4_lives[] = { /* 0x82450d0 */
    /*  0 */ {   0,   2,   0,   0, {   7,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   3,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs193_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g0_s5_lives[] = { /* 0x8245100 */
    /*  0 */ { 144,   0,   0,   0, {  10,  21, 0, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {   8,  31, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs193_g1_s0_lives[] = { /* 0x8245130 */
    /*  0 */ {   0,   2,   0,   0, {   3,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {   8,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g2_s0_lives[] = { /* 0x8245160 */
    /*  0 */ {   0,   2,   0,   0, {  22,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g3_s0_lives[] = { /* 0x8245190 */
    /*  0 */ {  34,   0,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [1] = s_gs193_g3_s0_lives0_dlg1,
        [2] = s_gs193_g3_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs193_g3_s1_lives[] = { /* 0x82451a8 */
    /*  0 */ {   0,   2,   0,   0, {  23,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g3_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g3_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g4_s0_lives[] = { /* 0x82451d8 */
    /*  0 */ {   0,   2,   0,   0, {  26,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  33,  20, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs193_g5_s0_lives[] = { /* 0x8245208 */
    /*  0 */ {   0,   2,   0,   0, {  22,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  27,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs193_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs193_g0_s0_objs[] = { /* 0x8245238 */
    /*  0 */ {   4,   0,   4,   2, {  10,  22, 0, 0 }, {
        [2] = s_gs193_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs193_g0_s5_objs[] = { /* 0x8245250 */
    /*  0 */ {   4,   0,   4,   2, {  10,  22, 0, 0 }, {
        [2] = s_gs193_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {   8,  31, 0, CPOS_HALFTILE }, {
        [2] = s_gs193_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs193_g1_s0_effs[] = { /* 0x8245280 */
    /*  0 */ {   0,   0,   1,   1, {  27,  25, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g2_s0_effs[] = { /* 0x824528c */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g4_s0_effs[] = { /* 0x8245298 */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs193_g5_s0_effs[] = { /* 0x82452a4 */
    /*  0 */ {   0,   0,   1,   1, {  24,  24, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs193_g3_s0_evts[] = { /* 0x82452b0 */
    /*  0 */ {  12,   3,   0,   0, {  28,  16, 0, 0 }, &s_gs193_g3_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x82452bc */
    &s_gs193_g0_s0_station_sref,
    &s_gs193_g1_s0_station_sref,
    &s_gs193_g2_s0_station_sref,
    &s_gs193_g3_s0_station_sref,
    &s_gs193_g3_s1_station_sref,
    &s_gs193_g4_s0_station_sref,
    &s_gs193_g5_s0_station_sref,
};

static const struct GroundScriptSector s_gs193_g0_sectors[] = { /* 0x82452d8 */
    { LPARRAY(s_gs193_g0_s0_lives), LPARRAY(s_gs193_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs193_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs193_g0_s5_lives), LPARRAY(s_gs193_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs193_g1_sectors[] = { /* 0x82453c8 */
    { LPARRAY(s_gs193_g1_s0_lives), 0,NULL, LPARRAY(s_gs193_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs193_g2_sectors[] = { /* 0x82453f0 */
    { LPARRAY(s_gs193_g2_s0_lives), 0,NULL, LPARRAY(s_gs193_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs193_g3_sectors[] = { /* 0x8245418 */
    { LPARRAY(s_gs193_g3_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs193_g3_s0_evts), 1,&sStationScripts[3], },
    { LPARRAY(s_gs193_g3_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs193_g4_sectors[] = { /* 0x8245468 */
    { LPARRAY(s_gs193_g4_s0_lives), 0,NULL, LPARRAY(s_gs193_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs193_g5_sectors[] = { /* 0x8245490 */
    { LPARRAY(s_gs193_g5_s0_lives), 0,NULL, LPARRAY(s_gs193_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptGroup s_gs193_groups[] = { /* 0x82454b8 */
    { LPARRAY(s_gs193_g0_sectors) },
    { LPARRAY(s_gs193_g1_sectors) },
    { LPARRAY(s_gs193_g2_sectors) },
    { LPARRAY(s_gs193_g3_sectors) },
    { LPARRAY(s_gs193_g4_sectors) },
    { LPARRAY(s_gs193_g5_sectors) },
};

static const struct GroundLink s_gs193_links[] = { /* 0x82454e8 */
    /* link   0 */ { { /*x*/  25, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  29, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  34, /*y*/  17, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs193 = { LPARRAY(s_gs193_groups), s_gs193_links }; /* 0x8245500 */
