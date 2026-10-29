
static const struct ScriptCommand s_gs195_g0_s0_station_sref_script[] = { /* 0x8245cc8 */
    DEBUGINFO_O(21),
    JUMPIF_SCENARIOCHECK(QUEST_UNK5, /* to label */ 0),
    EXECUTE_STATION(MAP_TEAM_BASE_INSIDE, 0, 0),
  LABEL(0), /* = 0x00 */
    SELECT_MAP(195),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 12, /* to label */ 1),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_ENTITIES(2, 0),
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
    BGM_SWITCH(MUS_MT_BLAZE),
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs195_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs195_g0_s0_station_sref_script }; /* 0x8245f84 */

static const struct ScriptCommand s_gs195_g0_s0_obj0_dlg2[] = { /* 0x8245f90 */
    DEBUGINFO_O(67),
    JUMP_SCRIPT(SAVE_AND_WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs195_g0_s1_lives0_dlg0[] = { /* 0x8245fb0 */
    DEBUGINFO_O(72),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s1_lives1_dlg0[] = { /* 0x8245ff0 */
    DEBUGINFO_O(79),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s2_lives0_dlg0[] = { /* 0x8246030 */
    DEBUGINFO_O(86),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s2_lives1_dlg0[] = { /* 0x8246070 */
    DEBUGINFO_O(93),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s3_lives0_dlg0[] = { /* 0x82460b0 */
    DEBUGINFO_O(100),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s3_lives1_dlg0[] = { /* 0x82460f0 */
    DEBUGINFO_O(107),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s4_lives0_dlg0[] = { /* 0x8246130 */
    DEBUGINFO_O(114),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s4_lives1_dlg0[] = { /* 0x8246160 */
    DEBUGINFO_O(120),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs195_g0_s5_obj0_dlg2[] = { /* 0x8246190 */
    DEBUGINFO_O(126),
    JUMP_SCRIPT(WAREHOUSE_POINT),
};

static const struct ScriptCommand s_gs195_g0_s5_obj1_dlg2[] = { /* 0x82461b0 */
    DEBUGINFO_O(131),
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs195_g1_s0_station_sref_script[] = { /* 0x82461d0 */
    DEBUGINFO_O(136),
    BGM_STOP,
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(195),
    SELECT_WEATHER(13),
    SELECT_ENTITIES(-1, 0),
    WAIT(4),
    WAIT(30),
    MSG_NPC(-1, (@@STRING:b4e3ed3bc375d0e96e0ef672d79adad5abe06354c03f48f3169618de6d9db438@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:a7fb6002c7d248b007ca7b7549c1885097f522f79118be9eaa87e7ba9cc9e9e4@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:617b06575ec2b072721cca54a29d7180cab61dd36f9af707a07935d4e16a73b5@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    FANFARE_PLAY2(503),
    MSG_OVERHEARD((@@STRING:8cc4c6522fd5be78ae1dcb1968a33bfc856990e8395eb391081960c067c93bf6@@)),
    WAIT(120),
    MSG_OVERHEARD((@@STRING:8c279b6d53d548819bf5ea68034fba7176a000d9ecc4e64c8c229113892a7dc6@@)),
    WAIT(120),
    TEXTBOX_CLEAR,
    WAIT(60),
    MSG_NPC(1, (@@STRING:2bc4231730a59162aa38a34761d321224ee37991a1845966ed50a19a7dd0954c@@)),
    MSG_NPC(1, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    MSG_NPC(1, (@@STRING:1daa2323fe6ae507c790389e0df039e5c9bd9dccce4b0d8f60bc149a6c436bb7@@)),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_MT_BLAZE),
    { 0x3b, 0x3a,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs195_g1_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs195_g1_s0_station_sref_script }; /* 0x82464f8 */



static const struct ScriptCommand s_gs195_g1_s0_eff0_script[] = { /* 0x8246504 */
    DEBUGINFO_O(178),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs195_g1_s0_lives0_dlg0[] = { /* 0x8246544 */
    DEBUGINFO_O(185),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    WAIT(1),
    WALK_GRID(256, 0),
    WALK_GRID(256, 1),
    WAIT(30),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(20),
    WALK_GRID(256, 2),
    WAIT(10),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(20),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:680bca24a471857c7d282f8b07d12e987e1dda1b4f7f949cefcdfff133546d32@@)),
    VARIANT_DEFAULT((@@STRING:9bede2994e1b5290a58956cb087135e0477585ffedc90ad5a0caec4abb873315@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:62afb2675e8775c819997ae9703c65072e479502771558866ab174be6dcb1707@@)),
    VARIANT_DEFAULT((@@STRING:d1b1731a0708dc672482b571d8afe35d886b4fd7e6847e531f030587f2edc9b5@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    MSG_NPC(1, (@@STRING:5e34304efdcf05dcc3f70ce2eae8bfb1fc25077b7f9c19fbfce998bdeab397fb@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:50f42f43b949e6b0dc3699f01625ce0d3ae4e8c2d922385d34cd81192e722488@@)),
    VARIANT_DEFAULT((@@STRING:fab643d727530a20708ff7314dedf0a2942863612da9ff68a6cd8407245c7470@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};


static const struct ScriptCommand s_gs195_g1_s0_lives1_dlg0[] = { /* 0x824696c */
    DEBUGINFO_O(235),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(332, 3),
    WALK_GRID(256, 4),
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(15),
    WALK_GRID(256, 5),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs195_g2_s0_station_sref_script[] = { /* 0x8246acc */
    DEBUGINFO_O(260),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs195_g2_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs195_g2_s0_station_sref_script }; /* 0x8246afc */

static const struct ScriptCommand s_gs195_g2_s0_lives0_dlg2[] = { /* 0x8246b08 */
    DEBUGINFO_O(268),
    EXECUTE_STATION(-1, 2, 1),
    HALT,
};

static const struct ScriptCommand s_gs195_g2_s0_evt0_sref_script[] = { /* 0x8246b38 */
    DEBUGINFO_O(274),
    EXECUTE_STATION(-1, 2, 1),
    HALT,
};

static const ScriptRef s_gs195_g2_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs195_g2_s0_evt0_sref_script }; /* 0x8246b68 */

static const struct ScriptCommand s_gs195_g2_s1_station_sref_script[] = { /* 0x8246b74 */
    DEBUGINFO_O(282),
    SELECT_ENTITIES(-1, 1),
    CANCEL_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs195_g2_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs195_g2_s1_station_sref_script }; /* 0x8246bc4 */

static const struct ScriptCommand s_gs195_g2_s1_lives0_dlg0[] = { /* 0x8246bd0 */
    DEBUGINFO_O(292),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 34),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:120abc1c4b2dbac2cefaa113533e54859c32f0ecbb4b18147aada6e072b836b4@@)),
    VARIANT_DEFAULT((@@STRING:27114d885dcd74a657888183cc1256f75430078eecc39535a341d8a55c31a09d@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(3), /* = 0x03 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:980d6b0f2fe16706eaf1aae26455fdebb3ee9ce79133520eca5f05f9c46c82a2@@)),
    VARIANT(/* == */  1, (@@STRING:611d78bdbfaf4f59d87cce436b29ec7b96f653c0201e46105d51fb85ee9441e7@@)),
    VARIANT_DEFAULT((@@STRING:b09040b30bf394b0df3b79a0c1891e77f75b3f641c07ca828d1dcbb3a2a87d86@@)),
    VARIANT_DEFAULT((@@STRING:f6ce05d02e62a6bf1e93f3115c6d3f9b2fab678a8a72a4aba0b5edddf6a2ae56@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:bcf356f5a7696307ee3b805a0d1a4ea0e77ce42a00b11590639de66ea9b3615a@@)),
    CHOICE(/* label */  5, (@@STRING:5501c7005eccb95100a9e3f4d6054c31c9492e826efdbe6da2f9a1c81e78d038@@)),
    CHOICE(/* label */  6, (@@STRING:17bac4418e1194ddab527e402b8304aadcd3c55089006c9453aa1cefe6a762d3@@)),
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:de6a69e9cb3e4c9be12a9b7073a551e3286dcf9f102cf7f11e1660527c13ac65@@)),
    VARIANT(/* == */  1, (@@STRING:9efe5360623d70b8ec81e2c4bf9d9a0cfb10da1df95720f62674a85438122b59@@)),
    VARIANT_DEFAULT((@@STRING:42ec562ce522104e5c6053c4b6652a9407546afb0701704e320d4e7830b25443@@)),
    VARIANT_DEFAULT((@@STRING:1cf4bd4e357f800bfde5c05fd0879ef11c03e90fa1e167709fad5b0b3aa7d443@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 7),
    COND_EQUAL(3, /* to label */ 7),
    COND_EQUAL(5, /* to label */ 7),
    WAIT(20),
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    WALK_GRID(153, 6),
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    WAIT(20),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    WAIT(15),
    WALK_GRID(153, 6),
  LABEL(8), /* = 0x08 */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x07, 0x00,  0x001e,  0x0000000b,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 3),
    HALT,
  LABEL(6), /* = 0x06 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:280c19cb3c909c276e0b5833b1121b3312353bcd482f56285c34e3727066dab6@@)),
    VARIANT_DEFAULT((@@STRING:42ec562ce522104e5c6053c4b6652a9407546afb0701704e320d4e7830b25443@@)),
    TEXTBOX_CLEAR,
    CJUMP_UNK_C8(34),
    COND_EQUAL(4, /* to label */ 9),
    COND_EQUAL(3, /* to label */ 9),
    COND_EQUAL(5, /* to label */ 9),
    WAIT(20),
    BGM_FADEOUT(60),
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    WALK_GRID(153, 6),
    JUMP_LABEL(10),
  LABEL(9), /* = 0x09 */
    WAIT(20),
    BGM_FADEOUT(60),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    WAIT(15),
    WALK_GRID(153, 6),
  LABEL(10), /* = 0x0a */
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x06, 0x00,  0x001e,  0x0000004e,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 3),
    HALT,
};




static const struct ScriptCommand s_gs195_g2_s1_lives1_dlg0[] = { /* 0x8247300 */
    DEBUGINFO_O(380),
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
    WALK_GRID(153, 6),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(153, 6),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs195_g3_s0_station_sref_script[] = { /* 0x8247450 */
    DEBUGINFO_O(404),
    SELECT_MAP(195),
    SELECT_WEATHER(13),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_BLAZE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs195_g3_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs195_g3_s0_station_sref_script }; /* 0x82474e0 */

static const struct ScriptCommand s_gs195_g3_s0_lives0_dlg0[] = { /* 0x82474ec */
    DEBUGINFO_O(418),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6be98775fb56dae2a2a48c8a50b1a82386c77697e22a2cf895b5e3f6a0ff515e@@)),
    VARIANT_DEFAULT((@@STRING:13cec2b84dc3dca895e4b803061ebd79531fac5f977fa5ebe1487d69555cc94b@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(463),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:8015585c8193df01e5279e509d37ace405f5c0746e89eee8f1fc86e22b7a5884@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    CAMERA_PAN(512, 7),
    WALK_GRID(512, 8),
    WAIT(30),
    MSG_NPC(-1, (@@STRING:dad2009b19c5e7dbb612bc2349f96e501871a5b6f7d4f03ca865142965f63d40@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:da7092d5aa00567e9def17026327fa3ed01447a4b8f58126702cd5b7e36704d8@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:ddd983b61faf89f9d2fcfc8a076a2d0bebe922e351ea5a7fcf2d710f867b87ba@@)),
    MSG_NPC(-1, (@@STRING:f31842128d783922dbfe678ae1fd109c247015bb2eacad5695dd332532a05e3b@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:617b06575ec2b072721cca54a29d7180cab61dd36f9af707a07935d4e16a73b5@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    FANFARE_PLAY2(503),
    MSG_OVERHEARD((@@STRING:8cc4c6522fd5be78ae1dcb1968a33bfc856990e8395eb391081960c067c93bf6@@)),
    WAIT(120),
    MSG_OVERHEARD((@@STRING:8c279b6d53d548819bf5ea68034fba7176a000d9ecc4e64c8c229113892a7dc6@@)),
    WAIT(120),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:2bc4231730a59162aa38a34761d321224ee37991a1845966ed50a19a7dd0954c@@)),
    MSG_NPC(1, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(15),
    WALK_GRID(512, 7),
    WALK_GRID(256, 2),
    WAIT(10),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    WAIT(20),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:302a2bcb6d3b3fc29ece40ef4a931903aeba829257bbcd31fe87cd4b5394d03e@@)),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:0bb1bbacf36b24bc3162c9f3e4ba712bbbf053db55a09d1b251bc93e445b8831@@)),
    VARIANT_DEFAULT((@@STRING:6b72ef4f35bcdbfa981909d914033bbb83c594b1238639f33d81610044faee96@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};



static const struct ScriptCommand s_gs195_g3_s0_lives1_dlg0[] = { /* 0x8247b14 */
    DEBUGINFO_O(492),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(15),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CAMERA_PAN(512, 9),
    WALK_GRID(512, 10),
    AWAIT_CUE(6),
    WALK_GRID(512, 9),
    WALK_GRID(256, 5),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs195_g4_s0_station_sref_script[] = { /* 0x8247c94 */
    DEBUGINFO_O(519),
    SELECT_MAP(195),
    SELECT_WEATHER(13),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_BLAZE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs195_g4_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs195_g4_s0_station_sref_script }; /* 0x8247d24 */

static const struct ScriptCommand s_gs195_g4_s0_lives0_dlg0[] = { /* 0x8247d30 */
    DEBUGINFO_O(533),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x20,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(45),
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
    VARIANT(/* == */  1, (@@STRING:923e8f927b82e4eae68de539275f68fdfb52c35926618afe78a10b12c631add9@@)),
    VARIANT(/* == */  1, (@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    VARIANT_DEFAULT((@@STRING:8b359078edc62170ae9afae03422639526826d7710636058bdaa08e289b2effa@@)),
    VARIANT_DEFAULT((@@STRING:6c81a8e567fcfbec1e137ef2e7f77de7c740a8dbb894dd4bc02dcb3489437ad7@@)),
    VARIANT_DEFAULT((@@STRING:734ef90ee3255f625a786d9c5b30b6088c545c6a161b3f0cabf64e5f5390a8f2@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs195_g4_s0_lives1_dlg0[] = { /* 0x82480b4 */
    DEBUGINFO_O(567),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x40,  0x0080,  0x00000000,  0x00000000, NULL },
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

static const struct ScriptCommand s_gs195_g5_s0_station_sref_script[] = { /* 0x8248194 */
    DEBUGINFO_O(584),
    SELECT_MAP(195),
    SELECT_WEATHER(13),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_BLAZE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs195_g5_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs195_g5_s0_station_sref_script }; /* 0x8248224 */

static const struct ScriptCommand s_gs195_g5_s0_lives0_dlg0[] = { /* 0x8248230 */
    DEBUGINFO_O(598),
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

static const struct ScriptCommand s_gs195_g5_s0_lives1_dlg0[] = { /* 0x8248458 */
    DEBUGINFO_O(627),
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

static const struct GroundLivesData s_gs195_g0_s0_lives[] = { /* 0x8248528 */
    /*  0 */ { 144,   0,   0,   0, {  28,  30, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs195_g0_s1_lives[] = { /* 0x8248540 */
    /*  0 */ {   0,   4,   0,   0, {  22,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  22,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s2_lives[] = { /* 0x8248570 */
    /*  0 */ {   0,   0,   0,   0, {  22,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  22,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s3_lives[] = { /* 0x82485a0 */
    /*  0 */ {   0,   4,   0,   0, {  22,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  22,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s4_lives[] = { /* 0x82485d0 */
    /*  0 */ {   0,   4,   0,   0, {  22,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  22,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs195_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g0_s5_lives[] = { /* 0x8248600 */
    /*  0 */ { 144,   0,   0,   0, {  28,  30, 0, CPOS_HALFTILE }, {} },
    /*  1 */ { 145,   0,   0,   0, {  28,  35, 0, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs195_g1_s0_lives[] = { /* 0x8248630 */
    /*  0 */ {   0,   3,   0,   0, {   3,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   3,   0,   0, {   4,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g2_s0_lives[] = { /* 0x8248660 */
    /*  0 */ {  34,   0,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g2_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs195_g2_s1_lives[] = { /* 0x8248678 */
    /*  0 */ {   0,   2,   0,   0, {  21,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g2_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g2_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g3_s0_lives[] = { /* 0x82486a8 */
    /*  0 */ {   0,   2,   0,   0, {  21,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g3_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g4_s0_lives[] = { /* 0x82486d8 */
    /*  0 */ {   0,   2,   0,   0, {  21,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g4_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g4_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs195_g5_s0_lives[] = { /* 0x8248708 */
    /*  0 */ {   0,   2,   0,   0, {  21,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  26, 0, CPOS_HALFTILE }, {
        [0] = s_gs195_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs195_g0_s0_objs[] = { /* 0x8248738 */
    /*  0 */ {   4,   0,   4,   3, {  28,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs195_g0_s5_objs[] = { /* 0x8248750 */
    /*  0 */ {   4,   0,   4,   3, {  28,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g0_s5_obj0_dlg2,
    } },
    /*  1 */ {   4,   0,   4,   3, {  28,  35, 0, CPOS_HALFTILE }, {
        [2] = s_gs195_g0_s5_obj1_dlg2,
    } },
};

static const struct GroundEffectData s_gs195_g1_s0_effs[] = { /* 0x8248780 */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs195_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs195_g3_s0_effs[] = { /* 0x824878c */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs195_g4_s0_effs[] = { /* 0x8248798 */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs195_g5_s0_effs[] = { /* 0x82487a4 */
    /*  0 */ {   0,   0,   1,   1, {  22,  25, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs195_g2_s0_evts[] = { /* 0x82487b0 */
    /*  0 */ {  12,   3,   0,   0, {  17,  19, 0, 0 }, &s_gs195_g2_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x82487bc */
    &s_gs195_g0_s0_station_sref,
    &s_gs195_g1_s0_station_sref,
    &s_gs195_g2_s0_station_sref,
    &s_gs195_g2_s1_station_sref,
    &s_gs195_g3_s0_station_sref,
    &s_gs195_g4_s0_station_sref,
    &s_gs195_g5_s0_station_sref,
};

static const struct GroundScriptSector s_gs195_g0_sectors[] = { /* 0x82487d8 */
    { LPARRAY(s_gs195_g0_s0_lives), LPARRAY(s_gs195_g0_s0_objs), 0,NULL, 0,NULL, 1,&sStationScripts[0], },
    { LPARRAY(s_gs195_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs195_g0_s5_lives), LPARRAY(s_gs195_g0_s5_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs195_g1_sectors[] = { /* 0x82488c8 */
    { LPARRAY(s_gs195_g1_s0_lives), 0,NULL, LPARRAY(s_gs195_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs195_g2_sectors[] = { /* 0x82488f0 */
    { LPARRAY(s_gs195_g2_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs195_g2_s0_evts), 1,&sStationScripts[2], },
    { LPARRAY(s_gs195_g2_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs195_g3_sectors[] = { /* 0x8248940 */
    { LPARRAY(s_gs195_g3_s0_lives), 0,NULL, LPARRAY(s_gs195_g3_s0_effs), 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs195_g4_sectors[] = { /* 0x8248968 */
    { LPARRAY(s_gs195_g4_s0_lives), 0,NULL, LPARRAY(s_gs195_g4_s0_effs), 0,NULL, 1,&sStationScripts[5], },
};

static const struct GroundScriptSector s_gs195_g5_sectors[] = { /* 0x8248990 */
    { LPARRAY(s_gs195_g5_s0_lives), 0,NULL, LPARRAY(s_gs195_g5_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptGroup s_gs195_groups[] = { /* 0x82489b8 */
    { LPARRAY(s_gs195_g0_sectors) },
    { LPARRAY(s_gs195_g1_sectors) },
    { LPARRAY(s_gs195_g2_sectors) },
    { LPARRAY(s_gs195_g3_sectors) },
    { LPARRAY(s_gs195_g4_sectors) },
    { LPARRAY(s_gs195_g5_sectors) },
};

static const struct GroundLink s_gs195_links[] = { /* 0x82489e8 */
    /* link   0 */ { { /*x*/  11, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  17, /*y*/  30, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  21, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/  15, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   4 */ { { /*x*/  21, /*y*/  29, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   5 */ { { /*x*/  24, /*y*/  26, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   6 */ { { /*x*/  22, /*y*/  20, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   7 */ { { /*x*/  11, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   8 */ { { /*x*/   3, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   9 */ { { /*x*/  15, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  10 */ { { /*x*/   4, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs195 = { LPARRAY(s_gs195_groups), s_gs195_links }; /* 0x8248a40 */
