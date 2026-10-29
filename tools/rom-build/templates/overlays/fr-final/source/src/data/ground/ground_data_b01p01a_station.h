
static const struct ScriptCommand s_gs9_g0_s0_station_sref_script[] = { /* 0x819ad18 */
    DEBUGINFO_O(144),
    SELECT_MAP(MAP_TEAM_BASE),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 2, /* to label */ 0),
    COND(JUDGE_EQ, 3, /* to label */ 1),
    COND(JUDGE_EQ, 4, /* to label */ 2),
    COND(JUDGE_EQ, 5, /* to label */ 3),
    COND(JUDGE_EQ, 6, /* to label */ 4),
    COND(JUDGE_EQ, 7, /* to label */ 5),
    COND(JUDGE_EQ, 8, /* to label */ 6),
    COND(JUDGE_EQ, 9, /* to label */ 7),
    COND(JUDGE_EQ, 10, /* to label */ 8),
    COND(JUDGE_EQ, 11, /* to label */ 9),
    COND(JUDGE_LT, 15, /* to label */ 10),
    COND(JUDGE_EQ, 15, /* to label */ 11),
    COND(JUDGE_EQ, 16, /* to label */ 12),
    COND(JUDGE_EQ, 18, /* to label */ 13),
    JUMP_LABEL(14),
  LABEL(0), /* = 0x00 */
    JUMP_LABEL(10),
  LABEL(1), /* = 0x01 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 4, /* to label */ 15),
    COND_EQUAL(5, /* to label */ 16),
    JUMP_LABEL(17),
  LABEL(15), /* = 0x0f */
    JUMP_SCRIPT(EVENT_M01E02A_L002),
  LABEL(16), /* = 0x10 */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    CALL_STATION( 19,  0),
    JUMP_LABEL(10),
  LABEL(17), /* = 0x11 */
    CALL_STATION( 22,  0),
    JUMP_LABEL(10),
  LABEL(2), /* = 0x02 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 18),
    COND_EQUAL(4, /* to label */ 19),
    COND_EQUAL(5, /* to label */ 20),
    JUMP_LABEL(10),
  LABEL(18), /* = 0x12 */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    CALL_STATION( 24,  0),
    JUMP_LABEL(10),
  LABEL(19), /* = 0x13 */
    JUMPIF(JUDGE_GE, CLEAR_COUNT, 2, /* to label */ 21),
    JUMP_LABEL(10),
  LABEL(21), /* = 0x15 */
    JUMP_SCRIPT(EVENT_M01E02B_L004),
  LABEL(20), /* = 0x14 */
    JUMP_SCRIPT(EVENT_M01E02B_L004B),
  LABEL(3), /* = 0x03 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 10),
    COND_EQUAL(2, /* to label */ 22),
    COND(JUDGE_LE, 5, /* to label */ 10),
    COND_EQUAL(6, /* to label */ 23),
    COND(JUDGE_LE, 7, /* to label */ 10),
    COND_EQUAL(8, /* to label */ 24),
    CALL_STATION( 32,  0),
    JUMP_LABEL(10),
  LABEL(22), /* = 0x16 */
    JUMP_SCRIPT(EVENT_M01E03A_L002),
  LABEL(23), /* = 0x17 */
    JUMP_SCRIPT(EVENT_M01E03A_L005),
  LABEL(24), /* = 0x18 */
    JUMP_SCRIPT(EVENT_M01E03A_L007),
  LABEL(4), /* = 0x04 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 25),
    COND_EQUAL(2, /* to label */ 26),
    CALL_STATION( 37,  0),
    JUMP_LABEL(10),
  LABEL(25), /* = 0x19 */
    JUMP_LABEL(10),
  LABEL(26), /* = 0x1a */
    JUMP_SCRIPT(EVENT_M01E04A_L002),
  LABEL(5), /* = 0x05 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 27),
    COND_EQUAL(2, /* to label */ 28),
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(27), /* = 0x1b */
    CALL_STATION( 37,  0),
    JUMP_LABEL(10),
  LABEL(28), /* = 0x1c */
    JUMP_SCRIPT(EVENT_M01E04B_L002),
  LABEL(6), /* = 0x06 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 29),
    COND_EQUAL(2, /* to label */ 30),
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(29), /* = 0x1d */
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(30), /* = 0x1e */
    JUMP_SCRIPT(EVENT_M01E05A_L002),
  LABEL(7), /* = 0x07 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 31),
    COND_EQUAL(2, /* to label */ 32),
  LABEL(31), /* = 0x1f */
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(32), /* = 0x20 */
    JUMP_SCRIPT(EVENT_M01E05B_L002),
  LABEL(8), /* = 0x08 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 33),
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(33), /* = 0x21 */
    JUMP_SCRIPT(EVENT_M01E06A_L002),
  LABEL(9), /* = 0x09 */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, WARP_LOCK, 5),
    CALL_STATION( 50,  0),
    JUMP_LABEL(10),
  LABEL(11), /* = 0x0b */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 34),
    COND_EQUAL(4, /* to label */ 35),
    COND_EQUAL(6, /* to label */ 36),
    COND_EQUAL(8, /* to label */ 37),
    COND_EQUAL(9, /* to label */ 38),
    COND_EQUAL(10, /* to label */ 39),
    CALL_STATION( 56,  0),
    JUMP_LABEL(10),
  LABEL(34), /* = 0x22 */
    JUMP_SCRIPT(EVENT_M01E09A_L002),
  LABEL(35), /* = 0x23 */
    JUMP_SCRIPT(EVENT_M01E09A_L004),
  LABEL(36), /* = 0x24 */
    JUMP_SCRIPT(EVENT_M01E09A_L006),
  LABEL(37), /* = 0x25 */
    JUMP_SCRIPT(EVENT_M01E09A_L008),
  LABEL(38), /* = 0x26 */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, WARP_LOCK, 6),
    CALL_STATION( 61,  0),
    JUMP_LABEL(10),
  LABEL(39), /* = 0x27 */
    JUMP_SCRIPT(EVENT_M01E09A_L010),
  LABEL(12), /* = 0x0c */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 40),
    COND_EQUAL(3, /* to label */ 41),
    CALL_STATION( 66,  0),
    JUMP_LABEL(10),
  LABEL(40), /* = 0x28 */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, WARP_LOCK, 7),
    CALL_STATION( 64,  0),
    JUMP_LABEL(10),
  LABEL(41), /* = 0x29 */
    JUMP_SCRIPT(EVENT_M01E10A_L003),
  LABEL(13), /* = 0x0d */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 42),
    CALL_STATION( 70,  0),
    JUMP_LABEL(10),
  LABEL(42), /* = 0x2a */
    JUMP_SCRIPT(EVENT_M02E01A_L002),
  LABEL(14), /* = 0x0e */
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 53, 5, /* to label */ 43),
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 54, 0, /* to label */ 44),
    CALL_STATION(  3,  0),
    JUMP_LABEL(10),
  LABEL(43), /* = 0x2b */
    JUMP_SCRIPT(EVENT_S09E01A_L004),
  LABEL(44), /* = 0x2c */
    JUMP_SCRIPT(EVENT_S09E01B_L001),
  LABEL(10), /* = 0x0a */
    CJUMP_VAR(DUNGEON_RESULT),
    COND_EQUAL(4, /* to label */ 45),
    COND_EQUAL(5, /* to label */ 46),
    CJUMP_VAR(START_MODE),
    COND_EQUAL(STARTMODE_CONTINUE_GAME, /* to label */ 47),
    COND_EQUAL(STARTMODE_3, /* to label */ 48),
    COND_EQUAL(STARTMODE_GROUND, /* to label */ 49),
    COND_EQUAL(STARTMODE_FRIEND_AREAS, /* to label */ 45),
    COND_EQUAL(STARTMODE_DUNGEON_FROM_WORLD_MAP, /* to label */ 46),
    COND_EQUAL(STARTMODE_DUNGEON_WON, /* to label */ 46),
    COND_EQUAL(STARTMODE_10, /* to label */ 46),
    JUMP_LABEL(47),
  LABEL(49), /* = 0x31 */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(1, /* to label */ 50),
    COND_EQUAL(2, /* to label */ 50),
    COND_EQUAL(3, /* to label */ 50),
    COND_EQUAL(4, /* to label */ 50),
    COND_EQUAL(5, /* to label */ 50),
    COND_EQUAL(6, /* to label */ 50),
    COND_EQUAL(7, /* to label */ 50),
    COND_EQUAL(8, /* to label */ 50),
    COND_EQUAL(12, /* to label */ 51),
    COND_EQUAL(13, /* to label */ 51),
    COND_EQUAL(14, /* to label */ 51),
    COND_EQUAL(178, /* to label */ 46),
    JUMP_LABEL(45),
  LABEL(47), /* = 0x2f */
    SELECT_LIVES(0, 5),
    JUMP_LABEL(52),
  LABEL(48), /* = 0x30 */
    SELECT_LIVES(0, 6),
    JUMP_LABEL(52),
  LABEL(50), /* = 0x32 */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(52),
  LABEL(45), /* = 0x2d */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    SELECT_LIVES(0, 2),
    JUMP_LABEL(52),
  LABEL(46), /* = 0x2e */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    SELECT_LIVES(0, 3),
    JUMP_LABEL(52),
  LABEL(51), /* = 0x33 */
    CJUMP_VAR(DUNGEON_RESULT),
    COND_EQUAL(4, /* to label */ 45),
    COND_EQUAL(5, /* to label */ 46),
    COND_EQUAL(12, /* to label */ 53),
    COND_EQUAL(11, /* to label */ 53),
    COND_EQUAL(10, /* to label */ 54),
    COND_EQUAL(9, /* to label */ 54),
    COND_EQUAL(6, /* to label */ 54),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    SELECT_LIVES(0, 4),
    JUMP_LABEL(52),
  LABEL(52), /* = 0x34 */
    WAIT(0),
    JUMP_LABEL(56),
  LABEL(55), /* = 0x37 */
    SELECT_ENTITIES(0, 7),
  LABEL(56), /* = 0x38 */
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    JUMP_SCRIPT(COMMON_ENTER),
  LABEL(53), /* = 0x35 */
    JUMPIF_SCENARIOCHECK(QUEST_CAN_CHANGE_LEADER, /* to label */ 57),
    CJUMP_VAR(DUNGEON_ENTER),
    COND_EQUAL(1, /* to label */ 58),
    COND_EQUAL(2, /* to label */ 59),
    COND_EQUAL(4, /* to label */ 60),
    COND_EQUAL(6, /* to label */ 61),
    COND_EQUAL(7, /* to label */ 62),
    COND_EQUAL(9, /* to label */ 63),
    COND_EQUAL(17, /* to label */ 64),
    COND_EQUAL(19, /* to label */ 65),
  LABEL(57), /* = 0x39 */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 5, 0),
    RET,
  LABEL(58), /* = 0x3a */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 21, 0),
    RET,
  LABEL(59), /* = 0x3b */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 27, 0),
    RET,
  LABEL(60), /* = 0x3c */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 33, 0),
    RET,
  LABEL(61), /* = 0x3d */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 38, 0),
    RET,
  LABEL(62), /* = 0x3e */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 42, 0),
    RET,
  LABEL(63), /* = 0x3f */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 44, 0),
    RET,
  LABEL(64), /* = 0x40 */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 63, 0),
    RET,
  LABEL(65), /* = 0x41 */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 67, 0),
    RET,
  LABEL(54), /* = 0x36 */
    EXECUTE_SUBSTATION(MAP_TEAM_BASE, 7, 0),
    RET,
};

static const ScriptRef s_gs9_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs9_g0_s0_station_sref_script }; /* 0x819bec8 */


static const struct ScriptCommand s_gs9_g0_s0_evt0_sref_script[] = { /* 0x819bed4 */
    DEBUGINFO_O(430),
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 4, 3, /* to label */ 0),
    { 0x01, 0x00, -0x0001,  0x00000001,  0x00000000, NULL },
    HALT,
  LABEL(0), /* = 0x00 */
    EXECUTE_STATION(-1, 22, 1),
    HALT,
};

static const ScriptRef s_gs9_g0_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs9_g0_s0_evt0_sref_script }; /* 0x819bf44 */

static const struct ScriptCommand s_gs9_g0_s0_evt1_sref_script[] = { /* 0x819bf50 */
    DEBUGINFO_O(442),
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 4, 3, /* to label */ 0),
    JUMPIF_SCENARIOCHECK(QUEST_SQUARE_ASLEEP, /* to label */ 1),
  LABEL(2), /* = 0x02 */
    { 0x3b, 0x12,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 3),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_AREA_SELECT, 0, 0),
    COND_EQUAL(-2, /* to label */ 3),
    COND_EQUAL(-1, /* to label */ 4),
    COND_EQUAL(0, /* to label */ 4),
    HALT,
  LABEL(3), /* = 0x03 */
    { 0x03, 0x00,  0x001e,  0x00000001,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 4),
    HALT,
  LABEL(4), /* = 0x04 */
    RET,
  LABEL(0), /* = 0x00 */
    EXECUTE_STATION(-1, 22, 2),
    HALT,
  LABEL(1), /* = 0x01 */
    JUMPIF(JUDGE_LE, FRIEND_SUM, 2, /* to label */ 2),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0000, 0x00000004),
    MSG_QUIET(0, (@@STRING:8c49417c3e45f170d05d47038c95370d60027b4537401eb0ffbf2d14a96be42c@@)),
    MSG_QUIET(0, (@@STRING:522f2d6a3cd2f2538a688483f66dafc1d75dda0df0953383790aef34e8e12c79@@)),
    TEXTBOX_CLEAR,
    RET,
};

static const ScriptRef s_gs9_g0_s0_evt1_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs9_g0_s0_evt1_sref_script }; /* 0x819c174 */

static const struct ScriptCommand s_gs9_g0_s0_evt2_sref_script[] = { /* 0x819c180 */
    DEBUGINFO_O(476),
    JUMPIF_EQUAL(WARP_LOCK, 0, /* to label */ 0),
    JUMPIF_EQUAL(WARP_LOCK, 5, /* to label */ 1),
    JUMPIF_EQUAL(WARP_LOCK, 6, /* to label */ 2),
    JUMPIF_EQUAL(WARP_LOCK, 7, /* to label */ 3),
    JUMP_LABEL(0),
    CALL_SCRIPT(EVENT_DIVIDE_WARP_LOCK_FUNC),
    RET,
  LABEL(0), /* = 0x00 */
    JUMPIF_SCENE_EQ(SCENARIO_MAIN, 18, 3, /* to label */ 5),
    { 0x04, 0x00,  0x001e, -0x00000001,  0x00000000, NULL },
    COND_EQUAL(-1, /* to label */ 6),
    HALT,
  LABEL(6), /* = 0x06 */
    RET,
  LABEL(1), /* = 0x01 */
    EXECUTE_STATION(-1, 50, 3),
    HALT,
  LABEL(2), /* = 0x02 */
    EXECUTE_STATION(-1, 61, 1),
    HALT,
  LABEL(3), /* = 0x03 */
    EXECUTE_STATION(-1, 64, 1),
    HALT,
  LABEL(5), /* = 0x05 */
    EXECUTE_STATION(MAP_TEAM_BASE, 71, 0),
    HALT,
};

static const ScriptRef s_gs9_g0_s0_evt2_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs9_g0_s0_evt2_sref_script }; /* 0x819c330 */


static const struct ScriptCommand s_gs9_g0_s0_evt3_sref_script[] = { /* 0x819c33c */
    DEBUGINFO_O(509),
    { 0x01, 0x00, -0x0001,  0x0000000c,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs9_g0_s0_evt3_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs9_g0_s0_evt3_sref_script }; /* 0x819c36c */

static const struct ScriptCommand s_gs9_g0_s0_obj0_dlg2[] = { /* 0x819c378 */
    DEBUGINFO_O(517),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CJUMP_DIR_TO_LINK(0),
    COND_EQUAL(0, /* to label */ 0),
    JUMPIF_SCENE_EQ(SCENARIO_SUB7, 49, 1, /* to label */ 1),
  LABEL(2), /* = 0x02 */
    SPECIAL_TEXT(SPECIAL_TEXT_BULLETIN_BOARD, 0, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    MSG_INSTANT((@@STRING:a5c2d9039b87e5c51c4f1d930d4cff5eb61a26827bba2a4bfcfbfcbd10d2d396@@)),
    MSG_INSTANT((@@STRING:b44e3da0c969fe0df1d85888dae0ae99102815e8f970209835933c2836a221fc@@)),
    JUMP_SCRIPT(END_TALK),
    EXECUTE_FUNCTION(EVENT_S01E02A_L001),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    { 0x3b, 0x08,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 2),
    MSG_LETTER((@@STRING:5b117a7870a35fd6944728d86758d9965c38d271ac326c2122e4ef179ddaf9b0@@)),
    MSG_LETTER((@@STRING:8eef3d346282652074b46ba3f0c29e8b4a760e45afdf72d7f6f0ded86384c8c7@@)),
    MSG_LETTER((@@STRING:447aa42d2117361291053b9ba72289b70ce88e164bca379c4114b882747b4a7e@@)),
    MSG_LETTER((@@STRING:6a404892989fe413f9c6c3646828f873d201a4c2a7f7458cd12482fc85670f0c@@)),
    MSG_LETTER((@@STRING:ed658da96b48e150b1dba4c9a60af93199d2c93cff0536d4329d71650ef4558f@@)),
    MSG_LETTER((@@STRING:f6eb588b20ad034934c6b6b1b2279d1a2c314da98a134c3800f5aba4b292f463@@)),
    MSG_LETTER((@@STRING:a9ee5de138d5444e609c298923891d18f82e8d6a99314fd488c38177cfe2e70a@@)),
    MSG_LETTER((@@STRING:2c409c91dab1a4e23d033d689486dffe7a43b22cfe812dbf8fc9aa6f0eee5c8b@@)),
    TEXTBOX_CLEAR,
    SCENARIO_CALC(SCENARIO_SUB7, 49,  2),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g0_s0_obj2_dlg2[] = { /* 0x819c748 */
    DEBUGINFO_O(551),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_INSTANT((@@STRING:e1b4d46bdedc3d7bc46e146e98c274db4c31ff2cf259cbc08cba5c1a05bc91b3@@)),
    TEXTBOX_CLEAR,
    JUMPIF_SCENARIOCHECK(QUEST_SQUARE_ASLEEP, /* to label */ 0),
  LABEL(1), /* = 0x01 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_AREA_SELECT, 0, 0),
    COND_EQUAL(-2, /* to label */ 2),
    COND_EQUAL(-1, /* to label */ 2),
    COND_EQUAL(0, /* to label */ 2),
    HALT,
  LABEL(2), /* = 0x02 */
    ALERT_CUE(2),
    RET,
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_LE, FRIEND_SUM, 2, /* to label */ 1),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0000, 0x00000004),
    MSG_QUIET(0, (@@STRING:8c49417c3e45f170d05d47038c95370d60027b4537401eb0ffbf2d14a96be42c@@)),
    MSG_QUIET(0, (@@STRING:522f2d6a3cd2f2538a688483f66dafc1d75dda0df0953383790aef34e8e12c79@@)),
    TEXTBOX_CLEAR,
    RET,
};

static const struct ScriptCommand s_gs9_g0_s0_obj3_dlg0[] = { /* 0x819c8f4 */
    DEBUGINFO_O(579),
    JUMPIF_SCENARIOCHECK(QUEST_COMPLETED_ALL_MAZES, /* to label */ 0),
    JUMPIF_ARRAY(EVENT_B01P01, 2, /* to label */ 0),
    END_DELETE,
  LABEL(0), /* = 0x00 */
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s0_obj4_dlg0[] = { /* 0x819c974 */
    DEBUGINFO_O(590),
    JUMPIF_ARRAY(EVENT_B01P01, 0, /* to label */ 0),
    END_DELETE,
  LABEL(0), /* = 0x00 */
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s0_obj5_dlg0[] = { /* 0x819c9e4 */
    DEBUGINFO_O(600),
    JUMPIF_ARRAY(EVENT_B01P01, 1, /* to label */ 0),
    END_DELETE,
  LABEL(0), /* = 0x00 */
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s0_obj6_dlg0[] = { /* 0x819ca54 */
    DEBUGINFO_O(610),
    JUMPIF_ARRAY(EVENT_B01P01, 3, /* to label */ 0),
    END_DELETE,
  LABEL(0), /* = 0x00 */
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s1_lives0_dlg0[] = { /* 0x819cac4 */
    DEBUGINFO_O(620),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s1_lives1_dlg0[] = { /* 0x819cb04 */
    DEBUGINFO_O(627),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s2_lives0_dlg0[] = { /* 0x819cb44 */
    DEBUGINFO_O(634),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s2_lives1_dlg0[] = { /* 0x819cb84 */
    DEBUGINFO_O(641),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s3_lives0_dlg0[] = { /* 0x819cbc4 */
    DEBUGINFO_O(648),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s3_lives1_dlg0[] = { /* 0x819cc04 */
    DEBUGINFO_O(655),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s4_lives0_dlg0[] = { /* 0x819cc44 */
    DEBUGINFO_O(662),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s4_lives1_dlg0[] = { /* 0x819cc84 */
    DEBUGINFO_O(669),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s5_lives0_dlg0[] = { /* 0x819ccc4 */
    DEBUGINFO_O(676),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s5_lives1_dlg0[] = { /* 0x819cd04 */
    DEBUGINFO_O(683),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s6_lives0_dlg0[] = { /* 0x819cd44 */
    DEBUGINFO_O(690),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s6_lives1_dlg0[] = { /* 0x819cd74 */
    DEBUGINFO_O(696),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g0_s7_lives0_dlg2[] = { /* 0x819cda4 */
    DEBUGINFO_O(702),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
  LABEL(0), /* = 0x00 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:a2522aa20c21f672a7e425a1de9119f98db32ef8b8f6e25ff4143ef7acefe2fc@@)),
    CHOICE(/* label */  1, (@@STRING:02fb3b8013849d3ee65cd14ac8e9185de9d885c55aee2127fed8cc94b00648c3@@)),
    CHOICE(/* label */  2, (@@STRING:ae978c296dd1e4f35bc44e3d9a3db2334e54d63c7b82c9669729f926dcb06b37@@)),
    CHOICE(/* label */  3, (@@STRING:383738107df9b5183200ce937d378a54fe46a2fc6057eab794bfd231f5baf072@@)),
    MSG_NPC(1, (@@STRING:94fe11b9885e92598be0d1fae500e7c051a1c590b8159fd20b7e587493ef0efc@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:9bb7e0fc4f9ee03edc4f11521fcd85532c8a7f69023bb422bac5bd9506472cfd@@)),
    CHOICE(/* label */  4, (@@STRING:fcb05570ae3353c06134dff77945ff413b1d55b3f4ef0f865f843ca3e66699d4@@)),
    CHOICE(/* label */  5, (@@STRING:8f72f68ca0b3a76372e416d50bfa1a47ca4754e049410c57c6c31e2eebe952f3@@)),
    CHOICE(/* label */  6, (@@STRING:cbf7f509c4c92d676737c35983466b8cb3bb5a51525165575d9c9940c746729e@@)),
    JUMP_LABEL(0),
  LABEL(4), /* = 0x04 */
    MSG_NPC(1, (@@STRING:6bfc6b4e85f38a0628bfdedb36cb9bae19ce5f2c92727935f02d639e2f547126@@)),
    UPDATE_VARINT(CALC_SET, BASE_LEVEL, 0),
    JUMP_LABEL(7),
  LABEL(5), /* = 0x05 */
    MSG_NPC(1, (@@STRING:eb7442c6c78516804785e2192494f543ab043a6225b5fb0fe41ddde1bc306589@@)),
    UPDATE_VARINT(CALC_SET, BASE_LEVEL, 1),
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    MSG_NPC(1, (@@STRING:9378580f5dd60a819a1e351789ec1ef6989313b3db5182e69989055f5770ccf3@@)),
    UPDATE_VARINT(CALC_SET, BASE_LEVEL, 2),
    JUMP_LABEL(7),
  LABEL(2), /* = 0x02 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:8b56bde771196e6efdc07592bc4c6162a15241dbe02286ec08c9cd195eb35a65@@)),
    CHOICE(/* label */  8, (@@STRING:c5bcd587a25c7ca373da43e40579e27e024e60f96646bb3fbfa6f942d2f5ae9d@@)),
    CHOICE(/* label */  9, (@@STRING:3d867f457fe030792644131457f9c1673c41b31e69560c7d928d2f31e57e31a5@@)),
    CHOICE(/* label */ 10, (@@STRING:b0a1389ebe5ed237334d259b589c374f06cc2a4b617a4aef33396c73646da4b5@@)),
    CHOICE(/* label */ 11, (@@STRING:e420a20c372897b13ed9a8986108e9d9810b754aa15855a42d4896e6663752e1@@)),
    CHOICE(/* label */ 12, (@@STRING:12adc6717884652836bc86b6ef9903bf0c99c5ca24aa7a371cf59420b7e4ab0c@@)),
    CHOICE(/* label */ 13, (@@STRING:24b33eacf73c1aff58322f34f9fd9a11f3fb8dea2e585971dce52e6111b9a4b8@@)),
    CHOICE(/* label */ 14, (@@STRING:832b14805b86f2c526b633936e9f3c887712f9ca4bb2907cfc7baa6005be5c50@@)),
    JUMP_LABEL(0),
  LABEL(9), /* = 0x09 */
    MSG_NPC(1, (@@STRING:02df7cbbb58a994cb4b9edfe89597f63c4b7181e70b505b07bedd641e86433ff@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 0),
    JUMP_LABEL(7),
  LABEL(10), /* = 0x0a */
    MSG_NPC(1, (@@STRING:01da35d31538bbc58a2f41d4b6697f2721436bd64a55d45b0cb18674c7d8843c@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 1),
    JUMP_LABEL(7),
  LABEL(11), /* = 0x0b */
    MSG_NPC(1, (@@STRING:bf827bfd5fed736614e358598fe1ce10980236c75f1c8b7fd1eb084795cc6d79@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 2),
    JUMP_LABEL(7),
  LABEL(12), /* = 0x0c */
    MSG_NPC(1, (@@STRING:92ca54277f7ac7a462faa3c51cfecbb58ab172ab128ba8be7d6bfb760a2391fc@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 3),
    JUMP_LABEL(7),
  LABEL(13), /* = 0x0d */
    MSG_NPC(1, (@@STRING:94e56da631b22a7d95db0707081a5714d9b20316b25a76d0e358c64d7814b68d@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 4),
    JUMP_LABEL(7),
  LABEL(14), /* = 0x0e */
    MSG_NPC(1, (@@STRING:e273fd6d481301cf6bc96cf53597c71d84a739096871d0c58b75647e356e6294@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 5),
    JUMP_LABEL(7),
  LABEL(8), /* = 0x08 */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:8b56bde771196e6efdc07592bc4c6162a15241dbe02286ec08c9cd195eb35a65@@)),
    CHOICE(/* label */ 15, (@@STRING:cd84e2b79bc1cc85b103f10ac9c1fa7eb04010a3437a8539736297dba967968a@@)),
    CHOICE(/* label */ 16, (@@STRING:623f3c5d81d841bda7bd88653105a50125d670726bc2560d42bd3ded634080e8@@)),
    CHOICE(/* label */ 17, (@@STRING:cab5903d8f6574a7d6c054d8d3ab4a1703735b49d7315922851d75f6e4476999@@)),
    CHOICE(/* label */ 18, (@@STRING:a470697fe10979b9dbdbbaeadb496a9ff42b89e8d45c3fab92222eb1a66320c7@@)),
    CHOICE(/* label */ 19, (@@STRING:24d85013db962006638216a041aa5fa662020b424933f70f9812aaab0f4ca20f@@)),
    CHOICE(/* label */ 20, (@@STRING:6b53bd0c2ebb800493e052bd084375bc7c325729feb412448bcc37568919f1ed@@)),
    CHOICE(/* label */ 21, (@@STRING:bb7b5b6d5c278c1935f6722105ee8b6e413d3b33c0060b614b5f87a0bc420ed4@@)),
    JUMP_LABEL(0),
  LABEL(16), /* = 0x10 */
    MSG_NPC(1, (@@STRING:fc8e5954edb2cabc8471dee3bc976631f6f236311a39da9c43d40233c2f6b76b@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 6),
    JUMP_LABEL(7),
  LABEL(17), /* = 0x11 */
    MSG_NPC(1, (@@STRING:d63cebc7d9561151fa7bb13bc139a2fc01cfb18d6b5a91a08f4b942d3e3632e5@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 7),
    JUMP_LABEL(7),
  LABEL(18), /* = 0x12 */
    MSG_NPC(1, (@@STRING:815d3848c01ba4db6516fb839aa17a15d4ffa95e64f1f39a7271a20a5cc0c3d1@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 8),
    JUMP_LABEL(7),
  LABEL(19), /* = 0x13 */
    MSG_NPC(1, (@@STRING:68f8a9db4896959589dab4933bac8b4e84c408bd035ace9a5d236c768f4752e8@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 9),
    JUMP_LABEL(7),
  LABEL(20), /* = 0x14 */
    MSG_NPC(1, (@@STRING:b62d429ebea6731374e74352e8d2e6caf82175aa9b93778c2c151e252130688d@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 10),
    JUMP_LABEL(7),
  LABEL(21), /* = 0x15 */
    MSG_NPC(1, (@@STRING:b431f1b97aab92aef2df397c7d72b2ec015404f4852f9d3ce620e0d2458fac77@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 11),
    JUMP_LABEL(7),
  LABEL(15), /* = 0x0f */
    ASK3( TRUE, /*default*/ 0, /* speaker */ 1, (@@STRING:8b56bde771196e6efdc07592bc4c6162a15241dbe02286ec08c9cd195eb35a65@@)),
    CHOICE(/* label */  2, (@@STRING:6f3a998c7a11ded8a81b5d94adbb8efa745936452bc60ec5b8e158514f5627fa@@)),
    CHOICE(/* label */ 22, (@@STRING:c468560ebe9e7f3651bdce95aa378f81366d06acb23fd323864ca8ba585dc1f3@@)),
    CHOICE(/* label */ 23, (@@STRING:581fb1eca16658625c90d503b7e0b2a519db2a30cdfc3eba9e7166737d3e0530@@)),
    CHOICE(/* label */ 24, (@@STRING:50b02994f5a0adc8634a410d172327fd137933fb4a3e18be95dba9fd0a2572e0@@)),
    CHOICE(/* label */ 25, (@@STRING:f56e4b34a8cacdf15184315f47c833560a3652da89b87c99c54dc44f5c1d9da1@@)),
    JUMP_LABEL(0),
  LABEL(22), /* = 0x16 */
    MSG_NPC(1, (@@STRING:083be4f46a9c5083193ae84c29330c0043b1d1553a29092b5076e7b13f53c20c@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 12),
    JUMP_LABEL(7),
  LABEL(23), /* = 0x17 */
    MSG_NPC(1, (@@STRING:c7172a97f85f8dd9110e34c79caa7d21e3b84067ccce7120da5878c4659c3363@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 13),
    JUMP_LABEL(7),
  LABEL(24), /* = 0x18 */
    MSG_NPC(1, (@@STRING:3b71ef74c4783a152dd04413e11b7c0538fc850a5681ea608d796532d69155c9@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 14),
    JUMP_LABEL(7),
  LABEL(25), /* = 0x19 */
    MSG_NPC(1, (@@STRING:7f2a50db750356562185f88e0e3fff03b283f892cd5063aaccfa4aef455ffe8a@@)),
    UPDATE_VARINT(CALC_SET, BASE_KIND, 15),
    JUMP_LABEL(7),
  LABEL(3), /* = 0x03 */
    MSG_NPC(1, (@@STRING:f1f817d195cf6724beb1b877f3188e7635158ea508af3b4f08ae61085d5dd3e6@@)),
    SET_ARRAYVAL(EVENT_B01P01,  0,  1),
    SET_ARRAYVAL(EVENT_B01P01,  1,  1),
    SET_ARRAYVAL(EVENT_B01P01,  2,  1),
    SET_ARRAYVAL(EVENT_B01P01,  3,  1),
    JUMP_LABEL(7),
  LABEL(7), /* = 0x07 */
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    { 0x01, 0x00, -0x0001,  0x00000009,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g1_s0_station_sref_script[] = { /* 0x819dcc8 */
    DEBUGINFO_O(838),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 2, /* to label */ 0),
    COND(JUDGE_EQ, 3, /* to label */ 1),
    COND(JUDGE_EQ, 4, /* to label */ 2),
    COND(JUDGE_EQ, 5, /* to label */ 3),
    COND(JUDGE_EQ, 6, /* to label */ 4),
    COND(JUDGE_EQ, 7, /* to label */ 5),
    COND(JUDGE_EQ, 8, /* to label */ 6),
    COND(JUDGE_EQ, 9, /* to label */ 7),
    COND(JUDGE_EQ, 10, /* to label */ 8),
    COND(JUDGE_EQ, 11, /* to label */ 9),
    COND(JUDGE_LT, 15, /* to label */ 10),
    COND(JUDGE_EQ, 15, /* to label */ 11),
    COND(JUDGE_EQ, 16, /* to label */ 12),
    COND(JUDGE_EQ, 18, /* to label */ 13),
    JUMP_LABEL(14),
  LABEL(0), /* = 0x00 */
    JUMP_LABEL(10),
  LABEL(1), /* = 0x01 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 15),
    COND_EQUAL(3, /* to label */ 16),
    JUMP_LABEL(17),
  LABEL(15), /* = 0x0f */
    JUMP_LABEL(10),
  LABEL(16), /* = 0x10 */
    CALL_STATION( 19,  0),
    JUMP_LABEL(10),
  LABEL(17), /* = 0x11 */
    CALL_STATION( 22,  0),
    JUMP_LABEL(10),
  LABEL(2), /* = 0x02 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 18),
    COND_EQUAL(4, /* to label */ 19),
    COND_EQUAL(5, /* to label */ 20),
    JUMP_LABEL(10),
  LABEL(18), /* = 0x12 */
    CALL_STATION( 24,  0),
    JUMP_LABEL(10),
  LABEL(19), /* = 0x13 */
    JUMP_LABEL(10),
    JUMP_LABEL(10),
  LABEL(20), /* = 0x14 */
    JUMP_LABEL(10),
  LABEL(3), /* = 0x03 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 10),
    COND_EQUAL(2, /* to label */ 22),
    COND(JUDGE_LE, 5, /* to label */ 10),
    COND_EQUAL(6, /* to label */ 23),
    COND(JUDGE_LE, 7, /* to label */ 10),
    COND_EQUAL(8, /* to label */ 24),
    CALL_STATION( 32,  0),
    JUMP_LABEL(10),
  LABEL(22), /* = 0x16 */
    JUMP_LABEL(10),
  LABEL(23), /* = 0x17 */
    JUMP_LABEL(10),
  LABEL(24), /* = 0x18 */
    JUMP_LABEL(10),
  LABEL(4), /* = 0x04 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 25),
    COND_EQUAL(2, /* to label */ 26),
    CALL_STATION( 37,  0),
    JUMP_LABEL(10),
  LABEL(25), /* = 0x19 */
    JUMP_LABEL(10),
  LABEL(26), /* = 0x1a */
    JUMP_LABEL(10),
  LABEL(5), /* = 0x05 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 27),
    COND_EQUAL(2, /* to label */ 28),
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(27), /* = 0x1b */
    CALL_STATION( 37,  0),
    JUMP_LABEL(10),
  LABEL(28), /* = 0x1c */
    JUMP_LABEL(10),
  LABEL(6), /* = 0x06 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 29),
    COND_EQUAL(2, /* to label */ 30),
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(29), /* = 0x1d */
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(30), /* = 0x1e */
    JUMP_LABEL(10),
  LABEL(7), /* = 0x07 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 31),
    COND_EQUAL(2, /* to label */ 32),
  LABEL(31), /* = 0x1f */
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(32), /* = 0x20 */
    JUMP_LABEL(10),
  LABEL(8), /* = 0x08 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 33),
    CALL_STATION( 41,  0),
    JUMP_LABEL(10),
  LABEL(33), /* = 0x21 */
    JUMP_LABEL(10),
  LABEL(9), /* = 0x09 */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    CALL_STATION( 50,  0),
    JUMP_LABEL(10),
  LABEL(11), /* = 0x0b */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 34),
    COND_EQUAL(4, /* to label */ 35),
    COND_EQUAL(6, /* to label */ 36),
    COND_EQUAL(8, /* to label */ 37),
    COND_EQUAL(9, /* to label */ 38),
    COND_EQUAL(10, /* to label */ 39),
    CALL_STATION( 56,  0),
    JUMP_LABEL(10),
  LABEL(34), /* = 0x22 */
    JUMP_LABEL(10),
  LABEL(35), /* = 0x23 */
    JUMP_LABEL(10),
  LABEL(36), /* = 0x24 */
    JUMP_LABEL(10),
  LABEL(37), /* = 0x25 */
    JUMP_LABEL(10),
  LABEL(38), /* = 0x26 */
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    CALL_STATION( 61,  0),
    JUMP_LABEL(10),
  LABEL(39), /* = 0x27 */
    JUMP_LABEL(10),
  LABEL(12), /* = 0x0c */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 40),
    COND_EQUAL(3, /* to label */ 41),
    CALL_STATION( 66,  0),
    JUMP_LABEL(10),
  LABEL(40), /* = 0x28 */
    CALL_STATION( 64,  0),
    JUMP_LABEL(10),
  LABEL(41), /* = 0x29 */
    JUMP_LABEL(10),
  LABEL(13), /* = 0x0d */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 42),
    CALL_STATION( 70,  0),
    JUMP_LABEL(10),
  LABEL(42), /* = 0x2a */
    JUMP_LABEL(10),
  LABEL(14), /* = 0x0e */
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 53, 5, /* to label */ 43),
    CALL_STATION(  3,  0),
    JUMP_LABEL(10),
  LABEL(43), /* = 0x2b */
    JUMP_LABEL(10),
  LABEL(10), /* = 0x0a */
    WAIT(0),
    JUMP_LABEL(46),
  LABEL(45), /* = 0x2d */
    SELECT_ENTITIES(0, 7),
  LABEL(46), /* = 0x2e */
    RET_DIRECT,
};

static const ScriptRef s_gs9_g1_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g1_s0_station_sref_script }; /* 0x819e758 */



static const struct ScriptCommand s_gs9_g1_s1_lives0_dlg2[] = { /* 0x819e764 */
    DEBUGINFO_O(1014),
    JUMP_SCRIPT(UNIT_TALK),
};

static const struct ScriptCommand s_gs9_g1_s1_lives1_dlg2[] = { /* 0x819e784 */
    DEBUGINFO_O(1019),
    JUMP_SCRIPT(UNIT_TALK),
};

static const struct ScriptCommand s_gs9_g1_s1_lives2_dlg2[] = { /* 0x819e7a4 */
    DEBUGINFO_O(1024),
    JUMP_SCRIPT(UNIT_TALK),
};

static const struct ScriptCommand s_gs9_g1_s1_lives3_dlg2[] = { /* 0x819e7c4 */
    DEBUGINFO_O(1029),
    JUMP_SCRIPT(UNIT_TALK),
};

static const struct ScriptCommand s_gs9_g2_s0_station_sref_script[] = { /* 0x819e7e4 */
    DEBUGINFO_O(1034),
    SELECT_ENTITIES(-1, 0),
    AWAIT_CUE(4),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    AWAIT_CUE(3),
    JUMPIF_ARRAY(EVENT_B01P01, 3, /* to label */ 0),
    { 0x3b, 0x0f,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_B01P01,  3,  1),
    SELECT_ENTITIES(-1, 2),
  LABEL(0), /* = 0x00 */
    RET_DIRECT,
};

static const ScriptRef s_gs9_g2_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g2_s0_station_sref_script }; /* 0x819e8b4 */

static const struct ScriptCommand s_gs9_g2_s0_eff0_script[] = { /* 0x819e8c0 */
    DEBUGINFO_O(1052),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(4),
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g2_s1_lives0_dlg0[] = { /* 0x819e920 */
    DEBUGINFO_O(1061),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x00000030,  0x00000000, NULL },
    FANFARE_PLAY2(451),
    MSG_OVERHEARD((@@STRING:cfc125f2d034fc6d16a9a04dcb21d0624d3414017d9e006ea3df652cbe458ea6@@)),
    WALK_GRID(256, 3),
    TEXTBOX_CLEAR,
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    FANFARE_STOP2(451),
    SELECT_ANIMATION(22),
    WAIT(20),
    FANFARE_PLAY2(501),
    MSG_OVERHEARD((@@STRING:f944bf6f08b0ce9b982ebb5fea0eb109fd983ed1747cbdde1f8c06f8652bd8a5@@)),
    WAIT(60),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(451),
    SELECT_ANIMATION(2),
    { 0x68, 0x00,  0x0100,  0x00000030,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WALK_GRID(256, 4),
    FANFARE_STOP2(451),
    ALERT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g2_s1_eff0_script[] = { /* 0x819eaf4 */
    DEBUGINFO_O(1092),
    MSG_OVERHEARD((@@STRING:cfc125f2d034fc6d16a9a04dcb21d0624d3414017d9e006ea3df652cbe458ea6@@)),
    WAIT(60),
    TEXTBOX_CLEAR,
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g2_s2_obj0_dlg0[] = { /* 0x819eb44 */
    DEBUGINFO_O(1100),
    { 0x53, 0x00,  0x0000,  0x000001e0,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs9_g3_s0_station_sref_script[] = { /* 0x819eb84 */
    DEBUGINFO_O(1107),
    JUMP_STATION(  4,  0),
    RET,
};

static const ScriptRef s_gs9_g3_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g3_s0_station_sref_script }; /* 0x819ebb4 */

static const struct ScriptCommand s_gs9_g4_s0_station_sref_script[] = { /* 0x819ebc0 */
    DEBUGINFO_O(1115),
    JUMPIF_EQUAL(WARP_LOCK, 0, /* to label */ 0),
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    CJUMP_SCENARIO_0(SCENARIO_SUB2),
    COND(JUDGE_EQ, 33, /* to label */ 1),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    JUMPIF_SCENE_EQ(SCENARIO_SUB2, 33, 1, /* to label */ 3),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    SELECT_ENTITIES(80, 0),
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    JUMPIF_SCENE_EQ(SCENARIO_SUB1, 29, 1, /* to label */ 5),
    JUMPIF_EQUAL(SCENARIO_SUB1, 30, /* to label */ 6),
    JUMP_LABEL(7),
  LABEL(5), /* = 0x05 */
    SELECT_ENTITIES(73, 0),
    RET_DIRECT,
  LABEL(6), /* = 0x06 */
    SELECT_ENTITIES(77, 0),
    RET_DIRECT,
  LABEL(7), /* = 0x07 */
    JUMPIF_SCENE_GT(SCENARIO_MAIN, 18, 0, /* to label */ 8),
    RET_DIRECT,
  LABEL(8), /* = 0x08 */
    RET_DIRECT,
    JUMPIF_SCENE_GT(SCENARIO_SUB3, 36, 1, /* to label */ 10),
    SELECT_ENTITIES(10, 0),
  LABEL(10), /* = 0x0a */
    JUMPIF_SCENE_GT(SCENARIO_SUB4, 38, 0, /* to label */ 12),
    SELECT_ENTITIES(11, 0),
  LABEL(12), /* = 0x0c */
    JUMPIF_SCENE_GT(SCENARIO_SUB5, 44, 1, /* to label */ 14),
    SELECT_ENTITIES(12, 0),
  LABEL(14), /* = 0x0e */
    JUMPIF_SCENE_GT(SCENARIO_SUB6, 46, 1, /* to label */ 16),
    SELECT_ENTITIES(13, 0),
  LABEL(16), /* = 0x10 */
    JUMPIF_SCENE_GT(SCENARIO_SUB7, 49, 0, /* to label */ 18),
    SELECT_ENTITIES(14, 0),
  LABEL(18), /* = 0x12 */
    JUMPIF_SCENE_GT(SCENARIO_SUB8, 51, 0, /* to label */ 20),
    SELECT_ENTITIES(15, 0),
  LABEL(20), /* = 0x14 */
    JUMPIF_SCENE_GT(SCENARIO_SUB9, 53, 0, /* to label */ 22),
    SELECT_ENTITIES(16, 0),
  LABEL(22), /* = 0x16 */
    RET_DIRECT,
};

static const ScriptRef s_gs9_g4_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g4_s0_station_sref_script }; /* 0x819eee0 */









static const struct ScriptCommand s_gs9_g5_s0_station_sref_script[] = { /* 0x819eeec */
    DEBUGINFO_O(1178),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    JUMPIF_SCENARIOCHECK(QUEST_CAN_CHANGE_LEADER, /* to label */ 0),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 1),
  LABEL(1), /* = 0x01 */
    SELECT_EVENTS(0, 0),
    CALL_STATION(  4,  0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    JUMP_STATION(  8,  0),
    RET,
};

static const ScriptRef s_gs9_g5_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g5_s0_station_sref_script }; /* 0x819f03c */

static const struct ScriptCommand s_gs9_g5_s0_lives0_dlg0[] = { /* 0x819f048 */
    DEBUGINFO_O(1204),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f7ff9449c340f1ec3166b131882850fd78a1d5303cc1bde9707f8780456c5fe5@@)),
    VARIANT(/* == */  1, (@@STRING:f42e8069619b675439b4416af30b85e984cd5d622079dc0f62ec7a1e6eb7b675@@)),
    VARIANT_DEFAULT((@@STRING:f7ff9449c340f1ec3166b131882850fd78a1d5303cc1bde9707f8780456c5fe5@@)),
    VARIANT_DEFAULT((@@STRING:9229e8a41f938ccf1815f123a854b63abed64855f2202ebc7961952b9eb34a01@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs9_g5_s0_lives1_dlg0[] = { /* 0x819f1cc */
    DEBUGINFO_O(1221),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g5_s1_lives0_dlg0[] = { /* 0x819f20c */
    DEBUGINFO_O(1228),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs9_g6_s0_station_sref_script[] = { /* 0x819f26c */
    DEBUGINFO_O(1237),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    JUMPIF_EQUAL(PARTNER1_KIND, 0, /* to label */ 0),
    { 0x3b, 0x13,  0x0004,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 0),
    SELECT_ENTITIES(-1, 1),
    JUMP_LABEL(2),
  LABEL(0), /* = 0x00 */
    SELECT_ENTITIES(-1, 2),
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g6_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g6_s0_station_sref_script }; /* 0x819f39c */


static const struct ScriptCommand s_gs9_g6_s1_lives0_dlg0[] = { /* 0x819f3a8 */
    DEBUGINFO_O(1262),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:537149338794d1f080ae5b8f2459c6749798cfe2dd6dc6b09aa084bb9b9acf7f@@)),
    VARIANT(/* == */  1, (@@STRING:13fd5ce81702a29867ac3fde42831a085e1edb87499101dc51ae04edbb8857bf@@)),
    VARIANT_DEFAULT((@@STRING:3756b26587c171069b09b0b3e302c789be7d30b0984c7985284ebcfd19c2622b@@)),
    VARIANT_DEFAULT((@@STRING:7d7160beb6cefe5bb5ccadb87aad9f09005d3feffcaceeffe2c1a98e98b4c7e3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs9_g6_s1_lives1_dlg0[] = { /* 0x819f554 */
    DEBUGINFO_O(1280),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g6_s2_lives0_dlg0[] = { /* 0x819f594 */
    DEBUGINFO_O(1287),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    MSG_QUIET(0, (@@STRING:5a9af532933078ff5acb8d848577bf5a2a0d0bc568170909a36a94867dc12327@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs9_g7_s0_station_sref_script[] = { /* 0x819f668 */
    DEBUGINFO_O(1300),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    JUMPIF_SCENARIOCHECK(QUEST_CAN_CHANGE_LEADER, /* to label */ 0),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 1),
  LABEL(1), /* = 0x01 */
    SELECT_EVENTS(0, 0),
    CALL_STATION(  4,  0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    JUMP_STATION(  8,  0),
    RET,
};

static const ScriptRef s_gs9_g7_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g7_s0_station_sref_script }; /* 0x819f7b8 */

static const struct ScriptCommand s_gs9_g7_s0_lives0_dlg0[] = { /* 0x819f7c4 */
    DEBUGINFO_O(1326),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(1, (@@STRING:f7ff9449c340f1ec3166b131882850fd78a1d5303cc1bde9707f8780456c5fe5@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs9_g7_s0_lives1_dlg0[] = { /* 0x819f854 */
    DEBUGINFO_O(1338),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g7_s1_lives0_dlg0[] = { /* 0x819f894 */
    DEBUGINFO_O(1345),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs9_g8_s0_station_sref_script[] = { /* 0x819f8f4 */
    DEBUGINFO_O(1354),
    SELECT_ENTITIES(-1, 0),
    { 0x3b, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 0),
    ALERT_CUE(3),
    WAIT(1),
    AWAIT_CUE(3),
    RET,
  LABEL(0), /* = 0x00 */
    CALL_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs9_g8_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g8_s0_station_sref_script }; /* 0x819f9a4 */

static const struct ScriptCommand s_gs9_g8_s0_lives0_dlg0[] = { /* 0x819f9b0 */
    DEBUGINFO_O(1370),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    WAIT(1),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g8_s0_lives1_dlg0[] = { /* 0x819fa40 */
    DEBUGINFO_O(1382),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    WAIT(1),
    AWAIT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g9_s0_lives0_dlg2[] = { /* 0x819fac0 */
    DEBUGINFO_O(1393),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:ecb67f8459fa8865e27b54a24088b28ad4d4016653bf1caf9158b02a87d00eaa@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    SCENARIO_CALC(SCENARIO_SUB1, 31,  1),
    CMD_UNK_AE(RESCUE_DUNGEON_HOWLING_FOREST),
    CANCEL_ENTITIES(9, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g10_s0_lives0_dlg2[] = { /* 0x819fbf0 */
    DEBUGINFO_O(1412),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:441e0d1df5a6670b421a804b5ddc103ef5da6ad0ff1670fdf4c4dbf984ee4314@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S03E01A_L001),
    HALT,
};


static const struct ScriptCommand s_gs9_g11_s0_lives0_dlg2[] = { /* 0x819fcfc */
    DEBUGINFO_O(1430),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:e1ff2c380b07f62d60d3a06feb4083e306413b83bbb787ef225cee9d94a74511@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    SCENARIO_CALC(SCENARIO_SUB4, 38,  1),
    CANCEL_ENTITIES(11, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g12_s0_lives0_dlg2[] = { /* 0x819fe08 */
    DEBUGINFO_O(1448),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:503ea59f717a7ed1d2b563acad1d1dbbed123a018cc4c5ede09d2febc89c2db3@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S05E01A_L001),
    HALT,
};


static const struct ScriptCommand s_gs9_g13_s0_lives0_dlg2[] = { /* 0x819ff1c */
    DEBUGINFO_O(1466),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:4d2a8a2f3ea69dcd18c82b909030b5b39e6c70a266fe63d90c8bad1ac8002abc@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S06E01A_L001),
    HALT,
};


static const struct ScriptCommand s_gs9_g14_s0_lives0_dlg2[] = { /* 0x81a002c */
    DEBUGINFO_O(1484),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:f4c7727781dba38eb29a189e2f39fce779a88cb058bb3977dac5ebc5cbe8770f@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    SCENARIO_CALC(SCENARIO_SUB7, 49,  1),
    CMD_UNK_AE(RESCUE_DUNGEON_BURIED_RELIC),
    CANCEL_ENTITIES(14, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g15_s0_lives0_dlg2[] = { /* 0x81a013c */
    DEBUGINFO_O(1502),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:e01f395a554a0534f47a3576a9e83f619279fdc9d6b71d82a36deb60d40b5bd0@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    EXECUTE_FUNCTION(EVENT_S08E01A_L001),
    CANCEL_ENTITIES(15, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g16_s0_lives0_dlg2[] = { /* 0x81a0244 */
    DEBUGINFO_O(1520),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:9c79748b748e29fdeb0fec62dffac8131534887f3ea05b76a410b374e2a9f5f2@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    EXECUTE_FUNCTION(EVENT_S09E01A_L001),
    CANCEL_ENTITIES(16, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g17_s0_station_sref_script[] = { /* 0x81a0358 - PART 1 0:18:53-0:22:13 - First base cutscene */
    DEBUGINFO_O(1538),
    { 0x3b, 0x39,  0x0004,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    BGM_FADEOUT(120),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0000,  0x00000021,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    WAIT(60),
    MSG_ON_BG_AUTO(30, (@@STRING:9f16c889dc55ea2b66a43a3e75aff8d6d73c6eb7ae10f7afaee3b81f6b074e5b@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:5d4f17ae11d49126c11afc885c6274da459ee47710e09ff110c6f377aecf931c@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:0b5b5595e32fc20cfd6a7ec46d61a5a0ffd623a5d0f1c0857307a9db76362259@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g17_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g17_s0_station_sref_script }; /* 0x81a0500 */


static const struct ScriptCommand s_gs9_g17_s0_eff0_script[] = { /* 0x81a050c - PART 1 0:18:58-0:19:03 - Possibly the camera scroll? WAIT timing seems to match */
    DEBUGINFO_O(1565),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_GRID(256, 5),
    WAIT(70),
    WALK_GRID(256, 6),
    ALERT_CUE(5),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g17_s0_lives0_dlg0[] = { /* 0x81a05ac - PART 1 0:18:53-0:22:03 - Player */
    DEBUGINFO_O(1578),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    WALK_GRID(256, 7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(30),
    MSG_NPC(1, (@@STRING:4ccf6609ca87eeea69eb4b1ad1bb45cf947f8667ea786444de1360a33e962313@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(30),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(30),
    CALL_SCRIPT(SMILE_START_FUNC),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(SMILE_END_FUNC),
    WAIT(20),
    PORTRAIT_REP(0x0000, 0x0000000b),
    MSG_QUIET(0, (@@STRING:7d3fa3f2a40e15b23ea3a7a180ba1b3b50924b26c48a541d829dcc1eecb1d2e9@@)),
    MSG_QUIET(0, (@@STRING:80a8b23aed44822a5e46cf3b84275a1299259c91c7dfe67e1aee96b96eb74911@@)),
    MSG_QUIET(0, (@@STRING:ebef6d2f074bf4a5c8ec621f84be8f00c66a82e29748e2d10f030a10bda2a688@@)),
    MSG_QUIET(0, (@@STRING:d6768fc8a33f08c71a1c3805f9d6d2e64024dd832006df3a441bb91f089701af@@)),
    MSG_QUIET(0, (@@STRING:1d8053fd45f374d2c094aedca84df748cd1dc69b3db24a03cd950fcf707c8a20@@)),
    MSG_QUIET(0, (@@STRING:00d10f5ec4847955724de3602f42cf997cf21dc17d9742b0144a1966d681a182@@)),
    MSG_QUIET(0, (@@STRING:8a28fd349bfb8026687c1b4f56367d1c906f3bd490a400ac157ae137603628c8@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:886b3cfdf3fe78a26f2080f45e8c817f8812ff931c3379b18c03d07640233fc5@@)),
    VARIANT(/* == */  1, (@@STRING:d01d3c0b0bce9bd3fe0d6b50619e0999048dc02a4b568a49c0d167adf817b721@@)),
    VARIANT_DEFAULT((@@STRING:d705a30cc83e0187609b7aa38e4a67c825579470b2a2eca3b0783fd9f77e9cde@@)),
    VARIANT_DEFAULT((@@STRING:742f1709af1a7528edfacb2f87c8839ca2ac167fdb6d8bd59ea2adc960f43e6c@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e4628c92a14e19939206da513e8b49e161bcb1f26a6bc9569206623653230e3a@@)),
    VARIANT_DEFAULT((@@STRING:f481eaf998edadf72dd964d36a3d229be9d45e87a6c804755c77ff7e809d321e@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:aca07b53aa639eb2cf4eef96ab8288568f1f2a7b3ecf55bbe32d191f76e1c7dd@@)),
    VARIANT_DEFAULT((@@STRING:67a4fb7ed2e2484c509f722806027f76d1721a256b7e719220fe950838667715@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9e88be33c8d910fb32c0ca3d6d77e372f22ce650a1309d7dfcb5652fa742bfbd@@)),
    VARIANT(/* == */  1, (@@STRING:9a89da528e54c730c0cff25533b27db5f973827f03e6eadf7ad2b42144261ac5@@)),
    VARIANT(/* == */  1, (@@STRING:cfc06672a4b831fc38eae4ed23f7e1dbdaf479b778605136e88e9c188a10260c@@)),
    VARIANT(/* == */  1, (@@STRING:46b266e55253dd4783f54bf66ba400dbe8d0b3d88810fce1aa7bd89702f596b3@@)),
    VARIANT(/* == */  1, (@@STRING:d99784d40e7ef7884fd57674dcf74d03a6e94b55b2730c314f260dde1b45f64f@@)),
    VARIANT(/* == */  1, (@@STRING:e6d8008043c4799e396fb2b5a6884af2569a1c381f5bb17a3a0a2676bae78d29@@)),
    VARIANT(/* == */  1, (@@STRING:a17c4802d46bad71f9b04bc6999475c05122860d03f65e655be76ee8aa162017@@)),
    VARIANT(/* == */  3, (@@STRING:3363f77bb02b6a996ac357a19f65dcf981e582883c874a7eb905daee97f26f6b@@)),
    VARIANT(/* == */  3, (@@STRING:bf156fc0bc88d64367c93abad73f7d8d65254efab7baecf8a3020ebb430df8de@@)),
    VARIANT(/* == */  3, (@@STRING:2a29784054c73f33c50bb0ed91f4766696b2c7bd665a976a7e1a20fe4a2d3599@@)),
    VARIANT(/* == */  3, (@@STRING:52aad07fd08f7296e5ab77d19694f1f9a4e2be525aa83d3e19c7ca17e59a39d6@@)),
    VARIANT(/* == */  3, (@@STRING:edcb3203b2887b37d7a7c64474b4f4bcee67dad4494a2f4e9acda997a6d7cd0c@@)),
    VARIANT(/* == */  3, (@@STRING:9e6410875d656c4058ddf0ea0448a4d1e3728e817dfcb22fdad8cb872e4c1cac@@)),
    VARIANT(/* == */  3, (@@STRING:f71773437671bcf9caf17acf80ee1d996b12c469431301358950acc506ccc7df@@)),
    VARIANT_DEFAULT((@@STRING:c73ea47f720e4b19d991732c93c7ce9810bd7d3e89f0f9f12f4a0d7851582ebb@@)),
    VARIANT_DEFAULT((@@STRING:01342d2a2885448ef280a79578225e098ce254407a8c43d78475406ff55f19a6@@)),
    VARIANT_DEFAULT((@@STRING:86212804da2d32cfed5771da8173bcf74c7da0abecb0dc4345d1fcfa3b89c64e@@)),
    VARIANT_DEFAULT((@@STRING:8426917eae4625047b25afd3067536e4b9f2aae96ce55e5754cbfbf1af37b6bf@@)),
    VARIANT_DEFAULT((@@STRING:34f9079cb0f4cea4dbc91d5352ee2c7dbfb73768a6dd300f581b293d7e569eee@@)),
    VARIANT_DEFAULT((@@STRING:39b79bf28bf6b43ae787f9e2c385a3cec06cfccbb4a0b73b9604cfca32bbbf63@@)),
    VARIANT_DEFAULT((@@STRING:912743aafc695bc3c4aca547ccea14ae83d1b649e158bdc229d275f5651e43ea@@)),
  LABEL(4), /* = 0x04 */
    PORTRAIT_REP(0x0001, 0x00000000),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:118c12f660ac32d7c0093ab920ff7b433737139d578586c7f5286928b6cb3d13@@)),
    VARIANT(/* == */  3, (@@STRING:06f9004adb7c0cc0e735c5b9e5d372d410a62d4ce7df940001ad38aac7659c2e@@)),
    VARIANT_DEFAULT((@@STRING:cf2853641cc65eae8b6c39f09eab5e315f216c18d592b9e572174503d71979d9@@)),
    CHOICE(/* label */  6, (@@STRING:d5af67e832c8ebba14adeb46f02cd5ad92aa0be4ddd9dd11faed18e1797db1b0@@)),
    CHOICE(/* label */  7, (@@STRING:14d32557feeae05fb859a810551ed748a87bb4af5769ee399f3bec1a262a5985@@)),
  LABEL(7), /* = 0x07 */
    TEXTBOX_CLEAR,
    WAIT(4),
    SELECT_LIVES(-1, 2),
    AWAIT_CUE(5),
    BGM_FADEIN(30, 1),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fae0481143fc1748e188db6a936a1a881b230e30e5799e26b4836b8827dace93@@)),
    VARIANT(/* == */  3, (@@STRING:afbdc307fa2dda24d1aa432e7ff1cda822ea4a7cbd5521689b5e37d43b9f902e@@)),
    VARIANT_DEFAULT((@@STRING:ecd933a3163307d187d78f4d9effe96aa8fbe4f8dc8622422bfb8cc5be4b0c4f@@)),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:071d3d96b1e7e9cfacd21dd1256cc94f372c65c02c9e65d4d66f9ff789a17acf@@)),
    VARIANT(/* == */  3, (@@STRING:fd1664e31b3c520f3cec726c00acb663e0e61ee543dd5d978dd2e613da017b38@@)),
    VARIANT_DEFAULT((@@STRING:7675511f7e7d6641a2012b3b6cda581f3d11caf76e63235df156675b4d6216ef@@)),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:83dc38d67c3e1e951b14e21791aea1d8880630fd05b02c7aa7c3d97c6e31aa27@@)),
    VARIANT(/* == */  3, (@@STRING:1e95c7bfeb1e7776cffca24c8e4a12de85e0fe475dcbeb5b8c24df0689e0b37b@@)),
    VARIANT_DEFAULT((@@STRING:93b29820c35525faad885dc86740f839e524b395f6392ee0f87d0ad638086e1b@@)),
    CHOICE(/* label */  6, (@@STRING:d5af67e832c8ebba14adeb46f02cd5ad92aa0be4ddd9dd11faed18e1797db1b0@@)),
    CHOICE(/* label */  7, (@@STRING:14d32557feeae05fb859a810551ed748a87bb4af5769ee399f3bec1a262a5985@@)),
    JUMP_LABEL(4),
  LABEL(6), /* = 0x06 */
    TEXTBOX_CLEAR,
    WAIT(4),
    SELECT_LIVES(-1, 3),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e994c04214229d057494397a1d279989859fe53183494991515cecc73a8f79fa@@)),
    VARIANT(/* == */  1, (@@STRING:f26f81e073f7fb9c5bdb424b9fab0bceef7afd8fcdcf1ad521842270bc123498@@)),
    VARIANT(/* == */  3, (@@STRING:a4678457a69884c513068f58e80edfc74b2a3abeafcd969145e75541e8a450be@@)),
    VARIANT(/* == */  3, (@@STRING:bbcaf568dbd522b5b6427e64cf27096ce2a29221e97cebfcc41dad4270cbb73c@@)),
    VARIANT_DEFAULT((@@STRING:2980d5656946fd43745c2a84807e2552f467da1bfa1b50da82c11649d825937f@@)),
    VARIANT_DEFAULT((@@STRING:f09e8e8b71a55f015337869ba09ee2aac782a8f8f726f4949b78bfc4708a8238@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:840dc69892acf8ba271d1f46295869463de5dcfdbb0724fea207c2c00553a03f@@)),
    VARIANT(/* == */  1, (@@STRING:68464933f345c3c318ea7909bdee0b59f7e665d1c6fca298c7237bb51449c26d@@)),
    VARIANT(/* == */  3, (@@STRING:840dc69892acf8ba271d1f46295869463de5dcfdbb0724fea207c2c00553a03f@@)),
    VARIANT(/* == */  3, (@@STRING:cb6a956d92aac5e235629eac4028765ed3cb0e4bbf9843f708b37b5199cc32a4@@)),
    VARIANT_DEFAULT((@@STRING:d8073879675f9f7c4fab6579d50667e0a392a865aed06e1a276651747d56fb0e@@)),
    VARIANT_DEFAULT((@@STRING:b09dd01047483d24332dd91f8804e544a7e2151c5a2b7bbc6ad0b27af8860d3e@@)),
    TEXTBOX_CLEAR,
    RENAME_TEAM,
    WAIT(30),
    SET_RESCUE_CONQUERED(RESCUE_DUNGEON_TINY_WOODS),
    SCENARIO_CALC(SCENARIO_MAIN,  3,  0),
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x39,  0x0004,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7746ebc723c5f214bd810fdfe161e3a752ae80f05a8d9f9984efdae6fbb1c8b5@@)),
    VARIANT_DEFAULT((@@STRING:97448b869276e223cb2093223fb6e0e695dcc7cb89a51af853b5799803a7e337@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:733a8454db137e301ebf6614f25e6ddd4302d5d4530334f8ccb40096bb5a2e15@@)),
    VARIANT_DEFAULT((@@STRING:733a8454db137e301ebf6614f25e6ddd4302d5d4530334f8ccb40096bb5a2e15@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(20),
    ALERT_CUE(6),
    WAIT(1),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT(45),
    ALERT_CUE(3),
    HALT,
};










static const struct ScriptCommand s_gs9_g17_s0_lives1_dlg0[] = { /* 0x81a1e94 - PART 1 0:18:53-0:20:11 - Partner */
    DEBUGINFO_O(1753),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    WALK_GRID(256, 8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(153, 10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(10),
    ALERT_CUE(5),
    { 0xda, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
    { 0xf2, 0x00,  0x0039,  0x00000000,  0x00000000, (@@STRING:d8a7c17ff6c8116edf62cd040d4e75a5ab47073d2e10f3451febe85771e3852d@@) },
    HALT,
  LABEL(0), /* = 0x00 */
    { 0xf2, 0x00,  0x0039,  0x00000000,  0x00000000, (@@STRING:beb3871ac5076f063eb5fc1d8c9bc88333c97f1568f98fd98f6d43242fd6cce4@@) },
    HALT,
  LABEL(1), /* = 0x01 */
    { 0xf2, 0x00,  0x0039,  0x00000000,  0x00000000, (@@STRING:d8e917a7c77c9577ea64a3a52f4ebf7a51a545c778fe3f79f0fced6e821592bf@@) },
    HALT,
};

static const struct ScriptCommand s_gs9_g17_s2_lives0_dlg0[] = { /* 0x81a20f0 - PART 1 0:20:11-0:20:39 - Partner - refused Rescue Team question */
    DEBUGINFO_O(1789),
    BGM_FADEOUT(5),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    WAIT(10),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    FANFARE_PLAY2(473),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(60),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g17_s3_lives0_dlg0[] = { /* 0x81a21b0 - PART 1 0:20:40-0:22:03 - Partner - accepted Rescue Team question */
    DEBUGINFO_O(1804),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    WAIT(2),
    WAIT_FANFARE2(465),
    AWAIT_CUE(6),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    HALT,
};

static const struct ScriptCommand s_gs9_g18_s0_station_sref_script[] = { /* 0x81a22b0 */
    DEBUGINFO_O(1823),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION( 19,  0),
    RET,
};

static const ScriptRef s_gs9_g18_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g18_s0_station_sref_script }; /* 0x81a2390 */

static const struct ScriptCommand s_gs9_g18_s0_eff0_script[] = { /* 0x81a239c */
    DEBUGINFO_O(1842),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_GRID(256, 12),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g18_s0_lives0_dlg0[] = { /* 0x81a23fc */
    DEBUGINFO_O(1851),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000003c,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x0000003f,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:a6153f80cd771142393244ce84166cc49648f6dca2e3dc2ea751d5156bf6e72c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    FANFARE_PLAY2(468),
    WAIT_FANFARE2(468),
    WAIT(10),
    FANFARE_PLAY2(468),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:08b6082b27b19b136d4abc06e8fa1b03e2fe4aecac0cee04e2a72f9fecfc4fbe@@)),
    VARIANT(/* == */  1, (@@STRING:5787a5813358f313dbc4bfdca019c5328cd7c704441d8c7d52fa72bfbf4cc72b@@)),
    VARIANT(/* == */  3, (@@STRING:0e1d8f0e53d42a84dd7c96764066b12e2e833529b6c0ffa8dda90a8d1fcf6650@@)),
    VARIANT(/* == */  3, (@@STRING:439f2960693099a6857bbc600a0dbbe6144d44d371a2929f672442b9c00e716b@@)),
    VARIANT_DEFAULT((@@STRING:3afbd9e2b55a193c0cd3de63a5ed28b194a1357f7fa6aa37c10205ac2d870d71@@)),
    VARIANT_DEFAULT((@@STRING:82c0f47a0885856a0a6220c830d7a709ae1d0bb7cd4db273b985472a99a0b3b9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:18776afb470a072a37414acec872fd86a22c0f13e84adeec86c9a1a284324ced@@)),
    VARIANT_DEFAULT((@@STRING:c0d72791a07c9b80a53db260675955cd0a5e3abb68e22f4ac8984bde1bd08729@@)),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:14a7a76d2133aa001b14284344027c616bc9f27793b1ae5e9fb89d1f11882041@@)),
    VARIANT_DEFAULT((@@STRING:14a7a76d2133aa001b14284344027c616bc9f27793b1ae5e9fb89d1f11882041@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2bc4231730a59162aa38a34761d321224ee37991a1845966ed50a19a7dd0954c@@)),
    VARIANT_DEFAULT((@@STRING:2bc4231730a59162aa38a34761d321224ee37991a1845966ed50a19a7dd0954c@@)),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:5708c98b288130af5df06618c7222d21707dd2f8d7d820825e20eddb4e894422@@)),
    VARIANT_DEFAULT((@@STRING:f4b6169f4023b6543e53470e1c39e4e62b2554c7fe4aa3b083f2b62bee87b6dc@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(470),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(60),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:726c8d0f6086d6f4e53726b6a2b91077bba60a6a62adb0044ab6e04b41d2df31@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(4),
    WAIT(60),
    WALK_GRID(256, 14),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(5),
    WAIT(30),
    { 0x3b, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_INSTANT((@@STRING:660dbdad0a27d90e583de1008236c449eff7e3672366b815dad4156da013df24@@)),
    FANFARE_PLAY(213),
    MSG_INSTANT((@@STRING:4126c91ac2b512d4383facd135b1f5545ee8104f7ddc458a41d08892814edc56@@)),
    WAIT_FANFARE1(213),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_NPC(1, (@@STRING:565fec1ac80ed1f1c837a688eb90ce7a1a6544f108f468cab03af6dfbfffffce@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:487fbe3d8869770a50294dc6de4263fb41e28449c593fa4c1e94a8b5b463af2f@@)),
    VARIANT_DEFAULT((@@STRING:7181b11b8637265225ff1afad291c85d5957a06c94341be44661c1500fd50173@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    MSG_INSTANT((@@STRING:75f227a06f4554da0b06f265a66630a64a5d13140a6859f4b959552ea36b8a3b@@)),
    FANFARE_PLAY(213),
    MSG_INSTANT((@@STRING:1faf6c70fb4e3cc14cecba2aad62ea5230913b34857f356d83f1ff2a5948e148@@)),
    WAIT_FANFARE1(213),
    FANFARE_PLAY(213),
    MSG_INSTANT((@@STRING:31294c4e1c46a78edd0f492eff43f4f6a7020eff31b074b65349b1e8486f5c1d@@)),
    WAIT_FANFARE1(213),
    FANFARE_PLAY(213),
    MSG_INSTANT((@@STRING:493a400f1707f5b269076f28713162294d5683f617ac19a108adf4ed88c1fb8d@@)),
    WAIT_FANFARE1(213),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b141e16d4d7818c158ab70e609a1002ad472dcb88b1529f3066d534179c93138@@)),
    VARIANT_DEFAULT((@@STRING:fdc77a3d9a8e187b31aa023fed9cd02d7a8613aa9acb2964e54a91073271c935@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ed2a832c6e36e29c543aca1adb25882ba551d1748157073c2adc4325f8973564@@)),
    VARIANT(/* == */  1, (@@STRING:ff2f12556e8920d4fd3c500dbff7b196fce9ad02336dd7b739c8ddbd8f170898@@)),
    VARIANT(/* == */  1, (@@STRING:691c148ad0c3eb32b2e20d0375dfcc9484ce1a42f5aeb2bcdf0ba5d80301b38b@@)),
    VARIANT(/* == */  1, (@@STRING:9cdb4ebfc836e50b3ca41b460f1e9faabb76a63e35349c491bdc24c5c6d14050@@)),
    VARIANT(/* == */  1, (@@STRING:a46dd6f6aeefdd707e55774c322c44271f99c216b55f0cc6a935dd96534c4bd7@@)),
    VARIANT(/* == */  1, (@@STRING:212fe3257b4c39e51684d0b10be63339fa76757a12d37c7ae3e19fd5fd72e0db@@)),
    VARIANT_DEFAULT((@@STRING:db5055b68e2f54255769824f11f769673801dc978c5f66cc990e2c02519288c9@@)),
    VARIANT_DEFAULT((@@STRING:288310c9839bf32c21787c50135c1e48cf09a5e050129870db3393ee7cb0ad80@@)),
    VARIANT_DEFAULT((@@STRING:e52261d1e411660f4cf1045b6aad6d5f1100d80625a07c26566a7548ffd5a171@@)),
    VARIANT_DEFAULT((@@STRING:71ed059e8852c82f0a462f3b996ac7b7965f18c22b0e01ef1235759ef9bb9332@@)),
    VARIANT_DEFAULT((@@STRING:ff5eb6c08ddc3478d7362f7b20f3730533546edda42a49ad41d795edeea30a82@@)),
    VARIANT_DEFAULT((@@STRING:5ceac3a1fb83e22d4446bb4b39d6ff74958965b28b40a00bb3f65a5baa1345a2@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:10fa320b0bec2df78dda4943d28b84622f7c96fbb9ba6e6eafb50019808f11d9@@)),
    VARIANT_DEFAULT((@@STRING:ad72a2b156d579d181e80b56337c08cb5c039e8787d55a2ba7d0996a0c3caa56@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_INSTANT((@@STRING:660dbdad0a27d90e583de1008236c449eff7e3672366b815dad4156da013df24@@)),
    MSG_INSTANT((@@STRING:75840dc2cb9d9e7f8ea847eb6ef294b4e6f1bbb529a6c73cd97adc8e621b3612@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:3a25f47a62e7362f6a11b7ec5c070137fe16d827767bce3b61a8852690c95ae6@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:1dc147d3fda88dcd6e39a7564a0081c16a6911b678a68a89345762f9c337c609@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ff859a1914035aa9efbd6998801d4fa2fa05f738ca4c54c640325ea83aab4195@@)),
    VARIANT_DEFAULT((@@STRING:6f526a0891215ec43b782bd809e879edc356c9880d7a4d24aa02651f91eacbb2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    MSG_OVERHEARD((@@STRING:cfc125f2d034fc6d16a9a04dcb21d0624d3414017d9e006ea3df652cbe458ea6@@)),
    FANFARE_PLAY2(451),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(60),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b47e35c9f3861ac43681585c127fd38b13459616c3d1de2c7a1648d2c7639a69@@)),
    VARIANT_DEFAULT((@@STRING:485a5ad51edcda9aa6b6d0b1f7d5690f80139c53f76e60bb1fa8d0368a8f3042@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    CMD_UNK_95(4, DIR_TRANS_10, 15),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    FANFARE_STOP2(451),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
};










static const struct ScriptCommand s_gs9_g18_s0_lives1_dlg0[] = { /* 0x81a3a10 */
    DEBUGINFO_O(2043),
    SELECT_ANIMATION(6),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(60),
    SELECT_ANIMATION(2),
    FANFARE_PLAY2(482),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(20),
    CMD_UNK_93(8, DIR_TRANS_SPINLEFT1, 0),
    CALL_SCRIPT(SMILE_START_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_95(4, DIR_TRANS_10, 12),
    WALK_GRID(256, 12),
    CMD_UNK_95(4, DIR_TRANS_10, 13),
    WALK_GRID(256, 13),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_95(4, DIR_TRANS_10, 15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_95(4, DIR_TRANS_10, 15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_95(4, DIR_TRANS_10, 15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_95(4, DIR_TRANS_10, 12),
    WALK_GRID(256, 12),
    ALERT_CUE(5),
    CMD_UNK_95(4, DIR_TRANS_10, 11),
    WALK_GRID(256, 11),
    CMD_UNK_95(4, DIR_TRANS_10, 15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    CALL_SCRIPT(SMILE_START_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(30, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    CALL_SCRIPT(QUESTION_FUNC),
    AWAIT_CUE(6),
    ALERT_CUE(5),
    CMD_UNK_95(4, DIR_TRANS_10, 15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g18_s0_lives2_dlg0[] = { /* 0x81a3ef0 */
    DEBUGINFO_O(2124),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x00000030,  0x00000000, NULL },
    AWAIT_CUE(7),
    WALK_GRID(256, 3),
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    FANFARE_STOP2(451),
    SELECT_ANIMATION(22),
    WAIT(20),
    FANFARE_PLAY2(501),
    MSG_OVERHEARD((@@STRING:f944bf6f08b0ce9b982ebb5fea0eb109fd983ed1747cbdde1f8c06f8652bd8a5@@)),
    WAIT(60),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(451),
    SELECT_ANIMATION(2),
    { 0x68, 0x00,  0x0100,  0x00000030,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WALK_GRID(256, 4),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g19_s0_station_sref_script[] = { /* 0x81a40b0 */
    DEBUGINFO_O(2155),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g19_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g19_s0_station_sref_script }; /* 0x81a40e0 */

static const struct ScriptCommand s_gs9_g19_s0_lives0_dlg0[] = { /* 0x81a40ec */
    DEBUGINFO_O(2163),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g19_s0_lives0_dlg2[] = { /* 0x81a411c */
    DEBUGINFO_O(2169),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:92bcbd314445fd1693d77bfebaea9f538ea4618941fe556d372f47ee5579c583@@)),
    VARIANT(/* == */  1, (@@STRING:ce9b3c8b4601a15eb831d88903df9f649a2075c14e9afc6cea91a9b194120f99@@)),
    VARIANT_DEFAULT((@@STRING:ee84bc98d7723443b86df746a3c47932320e66de9fa6af59252a0f7f84529ae3@@)),
    VARIANT_DEFAULT((@@STRING:3ddc4215efb344c803be8e232ca1f138090c9724f70659037c0b7d8a32a2f384@@)),
    TEXTBOX_CLEAR,
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g19_s0_obj0_dlg2[] = { /* 0x81a4254 */
    DEBUGINFO_O(2183),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CJUMP_DIR_TO_LINK(0),
    COND_EQUAL(0, /* to label */ 0),
    MSG_INSTANT((@@STRING:2bd36e124a2b4b26de431b504c223dcb3ab3ea95f8e1b7f73090ba2979f3e8de@@)),
    TEXTBOX_CLEAR,
    EXECUTE_STATION(-1, 20, 0),
    HALT,
  LABEL(0), /* = 0x00 */
    MSG_INSTANT((@@STRING:a5c2d9039b87e5c51c4f1d930d4cff5eb61a26827bba2a4bfcfbfcbd10d2d396@@)),
    MSG_INSTANT((@@STRING:b44e3da0c969fe0df1d85888dae0ae99102815e8f970209835933c2836a221fc@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g19_s0_evt0_sref_script[] = { /* 0x81a4350 */
    DEBUGINFO_O(2200),
    EXECUTE_STATION(-1, 19, 1),
    HALT,
};

static const ScriptRef s_gs9_g19_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs9_g19_s0_evt0_sref_script }; /* 0x81a4380 */

static const struct ScriptCommand s_gs9_g19_s1_station_sref_script[] = { /* 0x81a438c */
    DEBUGINFO_O(2208),
    SELECT_ENTITIES(-1, -1),
    CANCEL_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 0),
    RET,
};

static const ScriptRef s_gs9_g19_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g19_s1_station_sref_script }; /* 0x81a43ec */

static const struct ScriptCommand s_gs9_g19_s1_lives0_dlg0[] = { /* 0x81a43f8 */
    DEBUGINFO_O(2219),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:42c5738c8a5a74f574cc4ab230aaf692c72d9c5f9933d5343b099ccd1742b011@@)),
    VARIANT_DEFAULT((@@STRING:3ddeba006cb82a67885ca16648f2c2565b1d60ccf47bb13191bd4ef9d9311d28@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g19_s1_lives1_dlg0[] = { /* 0x81a4504 */
    DEBUGINFO_O(2233),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g19_s1_lives1_dlg2[] = { /* 0x81a4574 */
    DEBUGINFO_O(2243),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:422234887cfa98ecd7736c82f45ffc903a385777c57e769816ded0db2c02f564@@)),
    VARIANT_DEFAULT((@@STRING:80c0098811482fac36cfad16f21002aeb4b65ae6eecfb68e3fbdf5f3a356d500@@)),
    CHOICE(/* label */  1, (@@STRING:d7214b4470e6db33c4f6e5fb11b6fa95270ecc74eceff2b7dc7600dddc71b1b8@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9eb35b8611f068801d000bbdb25943916f2edc49ececbbc87b4052d678eff51e@@)),
    VARIANT(/* == */  1, (@@STRING:beba2e6848593d8ff22eb408b944e61e90536bab680f73ed27cfdc39659c7fdf@@)),
    VARIANT_DEFAULT((@@STRING:94ae606bccb54c67c520b805035c0ecaac3f23cb6f272b56e08b599515921746@@)),
    VARIANT_DEFAULT((@@STRING:beba2e6848593d8ff22eb408b944e61e90536bab680f73ed27cfdc39659c7fdf@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    EXECUTE_FUNCTION(EVENT_M01E07A_L002),
    HALT,
};


static const struct ScriptCommand s_gs9_g20_s0_station_sref_script[] = { /* 0x81a47dc */
    DEBUGINFO_O(2266),
    SELECT_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    CMD_UNK_AF(RESCUE_DUNGEON_THUNDERWAVE_CAVE, TRUE),
    SCENARIO_CALC(SCENARIO_MAIN,  3,  6),
    { 0x04, 0x00,  0x001e,  0x00000001,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g20_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g20_s0_station_sref_script }; /* 0x81a484c */

static const struct ScriptCommand s_gs9_g20_s0_eff0_script[] = { /* 0x81a4858 */
    DEBUGINFO_O(2278),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g20_s0_lives0_dlg0[] = { /* 0x81a48c8 */
    DEBUGINFO_O(2288),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000036,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000003c,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x0000003f,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:0aafe7623a1d6748dafa88ff0758611f0ec55a143f5a3299cf919b41491c0e62@@)),
    VARIANT_DEFAULT((@@STRING:2ad255d88b263f387651c12dfe29388c4c4804508a60ed7f7d4c9689bfb31347@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_8E(30, DIR_TRANS_NONE, 34),
    MSG_INSTANT((@@STRING:ee50e65bf50d7f4f8cd3ae9623006eec3c765f1420dd5537e0c9a76a96360f97@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_LETTER((@@STRING:488baf14fbdb938b03391f20e1df586ed1e076dbc257049eef2f832e3edae7fd@@)),
    MSG_LETTER((@@STRING:d56ac8eae18ab8a68f1ab4139aeeb9627756719eba012a1e44d441787fc21dcb@@)),
    MSG_LETTER((@@STRING:f49569da09376bd452dc90f2e048144d93becc40327c173b80358f73951429e3@@)),
    MSG_LETTER((@@STRING:d07801098be4ea9ca90d32abf1fb4358315d97ef08c8e55c985c65b77b7d7721@@)),
    MSG_LETTER((@@STRING:921fada1bec3c69cb7f31876ed0e992630b19c12c7d2264e765e76a4fce31c1c@@)),
    MSG_LETTER((@@STRING:1eaab0ea63c72e5f21d9d9a0cfec30dfcacb19811c8ab927cd5c788fd63cd02d@@)),
    MSG_LETTER((@@STRING:0b64a1639373652f6bc665b06b42718ae558a8f3788805c5eb3c0ca6803f361f@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:fa251dc91eb6c4476af9a9b70a5e47f50bf600a59655a00a989224f402654bb9@@)),
    VARIANT_DEFAULT((@@STRING:68d93a67270917013d074e123409a079e40c78fff832f5b52812cb039c99b139@@)),
    CHOICE(/* label */  3, (@@STRING:6478aac3e0995f61a04da4417e5606293f67a53abbdfb118e6d45735ea7d98c3@@)),
    CHOICE(/* label */  4, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(4), /* = 0x04 */
    TEXTBOX_CLEAR,
    WAIT(30),
    BGM_STOP,
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(5),
    WAIT(30),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6aba474be4c6b45c38a151f0f5b8afee0b9b79e45c1d364c91e703a4b2eab3f8@@)),
    VARIANT_DEFAULT((@@STRING:c35904af9b69ddca53808321dae584babadf434caae5437bdba2e829a559d871@@)),
    TEXTBOX_CLEAR,
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:1c5c95a375c3325dc6761a5ba51b4f7894858937406f1db8922648a2ed654e09@@)),
    VARIANT_DEFAULT((@@STRING:eb9eb42c25ef3f6698a7c886114a651a49b348bfaef33e3019194066c3c70ad1@@)),
    CHOICE(/* label */  3, (@@STRING:6478aac3e0995f61a04da4417e5606293f67a53abbdfb118e6d45735ea7d98c3@@)),
    CHOICE(/* label */  4, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(3), /* = 0x03 */
    TEXTBOX_CLEAR,
    WAIT(4),
    SELECT_ENTITIES(-1, 2),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2eb2a0206db290e0d2f4b02dcef1e908a127d99a7dbfe599afdf31a6d3832e66@@)),
    VARIANT_DEFAULT((@@STRING:f5d8a4d9bebee84e8f4903030db7fe7f0c63c832928374932a912f2abe4615be@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(30),
    ALERT_CUE(6),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs9_g20_s0_lives1_dlg0[] = { /* 0x81a50ac */
    DEBUGINFO_O(2366),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 16),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g20_s1_lives0_dlg0[] = { /* 0x81a512c */
    DEBUGINFO_O(2377),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(473),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    SELECT_ANIMATION(3),
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(1),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    WAIT(20),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g20_s2_lives0_dlg0[] = { /* 0x81a51fc */
    DEBUGINFO_O(2393),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    WAIT(20),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g21_s0_station_sref_script[] = { /* 0x81a529c */
    DEBUGINFO_O(2406),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g21_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g21_s0_station_sref_script }; /* 0x81a536c */

static const struct ScriptCommand s_gs9_g21_s0_lives0_dlg0[] = { /* 0x81a5378 */
    DEBUGINFO_O(2424),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000003c,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(15),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:f7ff9449c340f1ec3166b131882850fd78a1d5303cc1bde9707f8780456c5fe5@@)),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:be920ad774db7b0383cb06a254f201da98e76712201d787b54a19bf141579c0a@@)),
    VARIANT_DEFAULT((@@STRING:7941fbf428b5822352a457a8419d2709e82691f8746cbb9278e364757f75bbdd@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8beea5a2f49b62b14953a2ef836e9c6933288f0d054cc03d32ac130efff78f80@@)),
    VARIANT_DEFAULT((@@STRING:19cf003fa7d5ab4ce3577a03f8daef23f02bb26d2aa05647d97ba9562f438296@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g21_s0_lives1_dlg0[] = { /* 0x81a55ac */
    DEBUGINFO_O(2452),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000060,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 0, -96),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g22_s0_station_sref_script[] = { /* 0x81a564c */
    DEBUGINFO_O(2465),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g22_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g22_s0_station_sref_script }; /* 0x81a566c */

static const struct ScriptCommand s_gs9_g22_s1_station_sref_script[] = { /* 0x81a5678 */
    DEBUGINFO_O(2472),
    SELECT_ENTITIES(-1, -1),
    RET,
};

static const ScriptRef s_gs9_g22_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g22_s1_station_sref_script }; /* 0x81a56a8 */

static const struct ScriptCommand s_gs9_g22_s1_lives0_dlg0[] = { /* 0x81a56b4 */
    DEBUGINFO_O(2480),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:cd455f58e98d572129d7c39fb35070070f229336a764177c7f27d6e2321e7087@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_93(8, DIR_TRANS_10, 4),
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:38c1224ba3dc543261b069ce76627178e00649641385efe915ad4cb105e37617@@)),
    VARIANT_DEFAULT((@@STRING:44102910823387bfbb5bd00b5ee18e2471f8d66134556ae6e483428b2269ba3a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:39a343212e9e028255dc2bf5f24f2493ffc22f6fc051c211851f2b0380cce17c@@)),
    VARIANT_DEFAULT((@@STRING:a679fe445e5c7385cf93b1978ebb996897ca62c71437fc5a2a046e795031e5a9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g22_s1_lives1_dlg0[] = { /* 0x81a5930 */
    DEBUGINFO_O(2509),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_95(8, DIR_TRANS_10, 17),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g22_s2_station_sref_script[] = { /* 0x81a5a40 */
    DEBUGINFO_O(2529),
    SELECT_ENTITIES(-1, -1),
    RET,
};

static const ScriptRef s_gs9_g22_s2_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g22_s2_station_sref_script }; /* 0x81a5a70 */

static const struct ScriptCommand s_gs9_g22_s2_lives0_dlg0[] = { /* 0x81a5a7c */
    DEBUGINFO_O(2537),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:cd455f58e98d572129d7c39fb35070070f229336a764177c7f27d6e2321e7087@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_93(8, DIR_TRANS_10, 4),
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:38c1224ba3dc543261b069ce76627178e00649641385efe915ad4cb105e37617@@)),
    VARIANT_DEFAULT((@@STRING:44102910823387bfbb5bd00b5ee18e2471f8d66134556ae6e483428b2269ba3a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:39a343212e9e028255dc2bf5f24f2493ffc22f6fc051c211851f2b0380cce17c@@)),
    VARIANT_DEFAULT((@@STRING:a679fe445e5c7385cf93b1978ebb996897ca62c71437fc5a2a046e795031e5a9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g22_s2_lives1_dlg0[] = { /* 0x81a5c1c */
    DEBUGINFO_O(2566),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_95(8, DIR_TRANS_10, 17),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g23_s0_station_sref_script[] = { /* 0x81a5d2c */
    DEBUGINFO_O(2586),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g23_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g23_s0_station_sref_script }; /* 0x81a5dcc */

static const struct ScriptCommand s_gs9_g23_s0_lives0_dlg0[] = { /* 0x81a5dd8 */
    DEBUGINFO_O(2601),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ee4f30ee77280c5f9b87911db862a70aebbc55ef15bf971863b38c116ed3c705@@)),
    VARIANT(/* == */  3, (@@STRING:85c850f349d468e6057bdd8dda7991065c578ac22d1aa4ecaa7646f940e02526@@)),
    VARIANT_DEFAULT((@@STRING:1421e346e151354641e216e6756b7aa5751ea240fbe43beddb77289c038d2d17@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:0a7dfed6d197e51a4bae7c6bf4ce633c4d4af967b0f617e1700c63e1f86128c2@@)),
    VARIANT(/* == */  1, (@@STRING:bb743a05b99aa6eadbb5e46bffbeec2b8363f2b388a86850fa7eb9320db51f0e@@)),
    VARIANT(/* == */  1, (@@STRING:9075a3b2fcf89ca9625e685649d429683f1b9fd351a1471c6ae767d03ee68b96@@)),
    VARIANT(/* == */  1, (@@STRING:944dca2a5a4e130988b8cfbdecf1e0a486af58faae74980904b218599b153461@@)),
    VARIANT(/* == */  3, (@@STRING:0a7dfed6d197e51a4bae7c6bf4ce633c4d4af967b0f617e1700c63e1f86128c2@@)),
    VARIANT(/* == */  3, (@@STRING:7259d2f357a7153c7569778e181e957c81f40df71dad0da66c5d80c5b28cf0fe@@)),
    VARIANT(/* == */  3, (@@STRING:acb3c086477c537bbaf1654b8e7a6df76f69c7cdfe24d8d23664c7dddc25e1de@@)),
    VARIANT(/* == */  3, (@@STRING:2f1709c078d3483ce82f0619797a0c266f6a00747acea2e817613c5b07788670@@)),
    VARIANT_DEFAULT((@@STRING:c66bd2ac825e4040391e10df26344a25bd443434d07e1289a381a98b9d821cd6@@)),
    VARIANT_DEFAULT((@@STRING:daa28391cc769dc5a3d26b37ad86939c7cfc747d33f9cc6e1bafe5a1d56097b2@@)),
    VARIANT_DEFAULT((@@STRING:0179fcff5ca307558a480906fdadeb55fdd650d0ea522d0da5df1b5bc249d04c@@)),
    VARIANT_DEFAULT((@@STRING:4b1139fe0fc2f2e27956c752cd8f127b3e5b0c8698c647b63156db54399eb493@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(30),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs9_g23_s0_lives1_dlg0[] = { /* 0x81a62e8 */
    DEBUGINFO_O(2636),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 18),
    HALT,
};

static const struct ScriptCommand s_gs9_g24_s0_station_sref_script[] = { /* 0x81a6348 */
    DEBUGINFO_O(2645),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g24_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g24_s0_station_sref_script }; /* 0x81a6378 */

static const struct ScriptCommand s_gs9_g24_s0_obj0_dlg2[] = { /* 0x81a6384 */
    DEBUGINFO_O(2653),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    CJUMP_DIR_TO_LINK(0),
    COND_EQUAL(0, /* to label */ 0),
    MSG_INSTANT((@@STRING:2bd36e124a2b4b26de431b504c223dcb3ab3ea95f8e1b7f73090ba2979f3e8de@@)),
    MSG_INSTANT((@@STRING:77a0b48a97171e1e151fa79ab09147b57716594fcb8c33eb3a1ca88f78cff805@@)),
    TEXTBOX_CLEAR,
    EXECUTE_STATION(-1, 25, 0),
    HALT,
  LABEL(0), /* = 0x00 */
    MSG_INSTANT((@@STRING:a5c2d9039b87e5c51c4f1d930d4cff5eb61a26827bba2a4bfcfbfcbd10d2d396@@)),
    MSG_INSTANT((@@STRING:b44e3da0c969fe0df1d85888dae0ae99102815e8f970209835933c2836a221fc@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g24_s0_evt0_sref_script[] = { /* 0x81a64b4 */
    DEBUGINFO_O(2672),
    EXECUTE_STATION(-1, 24, 1),
    HALT,
};

static const ScriptRef s_gs9_g24_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs9_g24_s0_evt0_sref_script }; /* 0x81a64e4 */

static const struct ScriptCommand s_gs9_g24_s1_station_sref_script[] = { /* 0x81a64f0 */
    DEBUGINFO_O(2680),
    SELECT_ENTITIES(-1, -1),
    CANCEL_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 0),
    RET,
};

static const ScriptRef s_gs9_g24_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g24_s1_station_sref_script }; /* 0x81a6550 */

static const struct ScriptCommand s_gs9_g24_s1_lives0_dlg0[] = { /* 0x81a655c */
    DEBUGINFO_O(2691),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_QUIET(0, (@@STRING:88bc102fcf7382e1716e59c2532f45a32d85fa91164f0a128469ccbc0824f3cf@@)),
    TEXTBOX_CLEAR,
    WALK_RELATIVE(256, 0, -8),
    WAIT(30),
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g25_s0_station_sref_script[] = { /* 0x81a6614 */
    DEBUGINFO_O(2703),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    WAIT(60),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_M01E02B_L002),
    RET,
};

static const ScriptRef s_gs9_g25_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g25_s0_station_sref_script }; /* 0x81a6684 */

static const struct ScriptCommand s_gs9_g25_s0_eff0_script[] = { /* 0x81a6690 */
    DEBUGINFO_O(2715),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g25_s0_lives0_dlg0[] = { /* 0x81a6700 */
    DEBUGINFO_O(2725),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c5980aaaae1178080adb73724d10caa27ac8ee79038839e05c078e0e3287d9b1@@)),
    VARIANT_DEFAULT((@@STRING:9480914c56c0dc374dfaedba4ffbbc09104cd755fa2cc30cb17398466fa08791@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a15fce8e2d447f5f60f0934dd78c77473400f56e93cc119fe72e85cc21419f88@@)),
    VARIANT_DEFAULT((@@STRING:a10e784870d92cb14ec43482ca0830ada9a68fbcf85866a832e3484bc92fc19f@@)),
    TEXTBOX_CLEAR,
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3590024d26e47113e6edda54dc55aff723a166c330e3b519fcf52c390c71086a@@)),
    VARIANT_DEFAULT((@@STRING:01a3e5fc1b6325d3b56d93845ded01c0cd4af5dc3b5b840ea715db6d680d5803@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    SELECT_ANIMATION(5),
    WAIT(45),
    SELECT_ANIMATION(2),
    WAIT(30),
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4aa1e63574e316015dd5ae859cff01b14b948b1be5236cace5e6c02392bc4e8e@@)),
    VARIANT_DEFAULT((@@STRING:fca59daaf1a028212e607c663aeca7f13ec65bf4e653cc1b114974a524e1cf49@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:15b6f659162dc89578ae344893815e7993da1964d21a91363613ec0966dd5764@@)),
    VARIANT(/* == */  1, (@@STRING:9ddbd8097287fb2954bdd83ae50c60ad6001a1a4cabac06700c3b448a955e524@@)),
    VARIANT(/* == */  3, (@@STRING:716510d6d2a6b4164086d024fd84d184eee71c9a713733af294aced0c27ec758@@)),
    VARIANT(/* == */  3, (@@STRING:aba23f6b50969192eacd9acdca4421960fee5cec44375233921c6caaebca7841@@)),
    VARIANT_DEFAULT((@@STRING:716510d6d2a6b4164086d024fd84d184eee71c9a713733af294aced0c27ec758@@)),
    VARIANT_DEFAULT((@@STRING:d4530749d480709b1fe062afee3f2f9192488e96bef6b31c95cbc068b2600181@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e281eac5615cd4c8ad22bc50e4580876efcb730c9253e7e1f9939b20cf3f648d@@)),
    VARIANT(/* == */  1, (@@STRING:bff1ae1c51bc17900a22b53bf157c59e2faad4cf5ba7d57595536bf40c928f45@@)),
    VARIANT(/* == */  1, (@@STRING:c549a59837231e82d18e9e4e8f1f4c48dd606bad0c9209c4d7b3b5f294c99143@@)),
    VARIANT(/* == */  3, (@@STRING:b222580afd511a360c22c0b37b09ace0ecb7a3e826c6edd9e1c40d7573b7ff0c@@)),
    VARIANT(/* == */  3, (@@STRING:4e9bedb920d3b299e0a396a45e7d513a971d5e42dc1050653a74fca4c3be08b1@@)),
    VARIANT(/* == */  3, (@@STRING:1bde94a9a2a3f8d4920976e493ed3bd4f667ff29755d6b5e35d553e5cf63e55c@@)),
    VARIANT_DEFAULT((@@STRING:fd17495653912ff014f86405c9810e871eece49d17368c1c7594b23ac009b110@@)),
    VARIANT_DEFAULT((@@STRING:bd8213194ce260a69828c69505655b4f09d2b96f29507602dc750077a8d6e6f1@@)),
    VARIANT_DEFAULT((@@STRING:c549a59837231e82d18e9e4e8f1f4c48dd606bad0c9209c4d7b3b5f294c99143@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(150),
    ALERT_CUE(6),
    WAIT(15),
    ALERT_CUE(3),
    WALK_GRID(256, 20),
    WALK_RELATIVE(256, 160, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs9_g25_s0_lives1_dlg0[] = { /* 0x81a6f34 */
    DEBUGINFO_O(2796),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 19),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(256, 21),
    WALK_RELATIVE(256, 160, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g26_s0_station_sref_script[] = { /* 0x81a7064 */
    DEBUGINFO_O(2818),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g26_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g26_s0_station_sref_script }; /* 0x81a7134 */

static const struct ScriptCommand s_gs9_g26_s0_lives0_dlg0[] = { /* 0x81a7140 */
    DEBUGINFO_O(2836),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8eb9e8d220cc31968e2322b7a2dc100cba522b0674d075dcb238f82b453637e4@@)),
    VARIANT_DEFAULT((@@STRING:7f79040e20662abfbc7f7fc7d381620801f888d5046cb6379d93d331f5dd8529@@)),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b915e25802e757b362bb860ce4eb8dcfb37312b5d76970327a21ff3eca7302ba@@)),
    VARIANT_DEFAULT((@@STRING:0d55ff07260b8f2db09856e3bf84348e4ef6206afc78389080402e07e68d3a35@@)),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c567730485b51b1444e8b923677db2967c815921be453714180e6e0e10226f2c@@)),
    VARIANT_DEFAULT((@@STRING:a75417bec9f625af00b73b594c9656cebcd46d559519a26a31b53aecb708fdaf@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:d4e32d6eedfd9450bf915b3dbe1493bdbd31ae4d5c157a54cf8f96cad445237b@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    WAIT(15),
    ALERT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000004, NULL },
    WAIT(60),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:491147f38af96027e15749a1c51f67ae653c04085993458941999ef6c5835916@@)),
    MSG_NPC(2, (@@STRING:dc61ac544eb5751f2e3b7b2f3f715a94d5e0d7a06c38f1a4e4e080069ee70b99@@)),
    MSG_NPC(2, (@@STRING:3937f0845346903ac47022fad95af453927795664143b8388337d2c440e5a750@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(50),
    ALERT_CUE(6),
    FANFARE_PLAY2(470),
    AWAIT_CUE(5),
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e3c818c3506fa1496155a5cb5ab3db1b7e771b3f5c6a579428374d258b00be62@@)),
    VARIANT_DEFAULT((@@STRING:9360992684bf1174fadfbb2b8a07d738ca465bfd805c8e0591c256b121854020@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};




static const struct ScriptCommand s_gs9_g26_s0_lives1_dlg0[] = { /* 0x81a7614 */
    DEBUGINFO_O(2894),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000060,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 0, -96),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000008, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g26_s1_lives0_dlg0[] = { /* 0x81a7744 */
    DEBUGINFO_O(2916),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g27_s0_station_sref_script[] = { /* 0x81a7834 */
    DEBUGINFO_O(2934),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g27_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g27_s0_station_sref_script }; /* 0x81a7904 */

static const struct ScriptCommand s_gs9_g27_s0_lives0_dlg0[] = { /* 0x81a7910 */
    DEBUGINFO_O(2952),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ff98ce223e7bfc8752201ce5139ed788ef0859882c63eaa9c4a40ea5e7a068ec@@)),
    VARIANT(/* == */  1, (@@STRING:9b8043045b6f0d5d56b67b6de76a1e4f8d93f04657b550461843f9ae868ebc29@@)),
    VARIANT_DEFAULT((@@STRING:f7ff9449c340f1ec3166b131882850fd78a1d5303cc1bde9707f8780456c5fe5@@)),
    VARIANT_DEFAULT((@@STRING:b40213c61a2347d2f1b3e93c0189bb57b70bd2b58397cd1d256c86fc0db9cff5@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g27_s0_lives1_dlg0[] = { /* 0x81a7ab4 */
    DEBUGINFO_O(2973),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000060,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 0, -96),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g28_s0_station_sref_script[] = { /* 0x81a7b54 */
    DEBUGINFO_O(2986),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_A_SUCCESSFUL_RESCUE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(90),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g28_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g28_s0_station_sref_script }; /* 0x81a7bf4 */

static const struct ScriptCommand s_gs9_g28_s0_eff0_script[] = { /* 0x81a7c00 */
    DEBUGINFO_O(3001),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_GRID(256, 25),
    ALERT_CUE(5),
    CAMERA_END_PAN,
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g28_s0_lives0_dlg0[] = { /* 0x81a7c70 */
    DEBUGINFO_O(3011),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0005,  0x00000043,  0x00000000, NULL },
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:c008bed706524aeee31f55af4110c435d30b962cb70f4613727a87a9d8a99166@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 68),
    MSG_NPC(2, (@@STRING:c173ae654411bb67963c4fd8f168847cb3e38a2c2653caa10647f97bdbba5059@@)),
    MSG_NPC(2, (@@STRING:85789ca83dbc7fc1efc834cafa78fdd1f8831dc8f6c438ada660ff9d189f5e53@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(8),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:3ab0ac0de492db0cb106b99bd09ab8a4b6bb2e91c5ab834551ff6c54fa6e07b1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:90f6a23ba98918077f72388cf860010a5bc5b1f73f7fa8b9b1494e2e92e52928@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    ALERT_CUE(7),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c9451ba4b17e06adbc4a7f51869fbe5e29bc77fcd9707b9a6fbc7ab31017db2d@@)),
    VARIANT_DEFAULT((@@STRING:b666de1e32c4665c788cbf891ca35d1c05a86ca9cefc9dff5ca60fe466a9a8ed@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:64a4eaa7be5b9847baf7bf92b91dbd88a625553b2bf8d476a8df813d4f87414f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:d616b242177660cb5232115780199bc81d40e615d04d261a3fbe86fcef8eff71@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    WAIT(45),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CALL_SCRIPT(QUESTION_FUNC),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d9a5689f5f5d678d06a7e39a0dcc17ecee2640e772d40d9bce03c21636861e6c@@)),
    VARIANT_DEFAULT((@@STRING:e023855768e532ddfabc7e5fbba257f21d67ca92b5877916a52e4da8622cac79@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:1a45977e6c1705aceb4bf3781c1cdcb2b7977e0f8c07f85ee9801a7e832b6428@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(8),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(30),
    MSG_NPC(-1, (@@STRING:7f56b3621f7a0b258f2d917f5b238af30a16c06913b0526667ff05197862d64e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:f9475b1b183c7a9abdf68e798b43fc23580aeec1b2d2b37825a46564ac5988fb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:c76970c020d519fbe5612b37495322c18a7317d5258d121c4626fee17676bb97@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_NPC(2, (@@STRING:b415e0c9309088cc77446db4daaef586185277f775718b85710b1d7225f6b162@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:6c3146171b2ce17781842afaa6eab6929259ef39daa1b6ce05e71d41d158bd87@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3c43c4f31ff84c11761d3419b317362a69495ca67258d2109f7f18aa2d23c431@@)),
    VARIANT(/* == */  1, (@@STRING:7b576f6887bc397de518ae705954b787bd9512b238b1e8eda024329b4ea60db9@@)),
    VARIANT(/* == */  3, (@@STRING:6e92a4834ecb521a34e817be622c504964fd350bee0b52d124ab7f2ad065c610@@)),
    VARIANT(/* == */  3, (@@STRING:7b576f6887bc397de518ae705954b787bd9512b238b1e8eda024329b4ea60db9@@)),
    VARIANT_DEFAULT((@@STRING:6e92a4834ecb521a34e817be622c504964fd350bee0b52d124ab7f2ad065c610@@)),
    VARIANT_DEFAULT((@@STRING:32df6280c95de7807adc7c4364b276cb8dda6dac4e02f906b9c6f475ccef1390@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:9af0f3fa2af4436c2cd22203d4f1affd62036f067ebd18c138122ea33ed96e89@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:01e19a3d12ee1940f2ae51cb3bfbd402ef9436b388815450ac9c51c259451144@@)),
    MSG_NPC(3, (@@STRING:7d287404e8c4700e0f79ceb7a53201526c15fc28ee24d5c0e2b46fbcf8821f6b@@)),
    MSG_NPC(3, (@@STRING:533a60af7277d56bf2448c851b52e47b6c184f4c166474dc8dee167734502de7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:c2d7a498209ed83cd0ebf2b9abdde733dfdece7b54678bad53de51335496118a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(7),
    ALERT_CUE(6),
    ALERT_CUE(8),
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:66fb8040434fd933e0d5e35d7456ea5452058a4599fbce92f28dd0667953a596@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    AWAIT_CUE(5),
    ALERT_CUE(9),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:a1104df9e963cb3260fd59ecb0f724aca9672e8cffd6870d602517788a15b626@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(7),
    WAIT(10),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:05dda2f5bebecd64360f2fe322dd422dab42528ad8adfd17d28dd1cc1f7ea4a5@@)),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:0080042edcd2dcdbf50a7a0af48940bff49e355b8f466e6a5d30cc5b2dc51a1d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(90),
    SPECIAL_TEXT(SPECIAL_TEXT_ITEM_REWARD, 6, 1),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_2C, 20, 1),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_2C, 73, 1),
    TEXTBOX_CLEAR,
    WAIT(80),
    ALERT_CUE(8),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:9a59376539f346fce710a9fc1ce5467fc0b66213245fa1c9e18dc4c698758169@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8357e5a4bd3238412c60df1ee4aede62fb92da9382e1c4c5454e4fab5f29978f@@)),
    VARIANT_DEFAULT((@@STRING:34dd4d8332b23ca3ee3f32468177785a7a02884f02f61c66414b08448129dcaa@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:47732c42abf3dca589a9caa51c788606eaced1e985e041cd672ff67939d560dc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:aec85f6aeae686ba3c95ec315efef47e94a647ac74d88d106e333b566b182608@@)),
    VARIANT(/* == */  3, (@@STRING:b20fda3fb76c016bdc7f5c7e769069b99c14e544912c1a0c09c831465ffd4381@@)),
    VARIANT_DEFAULT((@@STRING:ad9da8c288d77434b33a7ac1450a8fc3705ee80df5386d45dd7389780950410a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_NPC(3, (@@STRING:bb3f7b6072f62a4c60917325aa5347610f5766136beba13a021b692d36b3b3bc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:1e4a123be79134ec703b1680e6094489174b5a4ddfe6ad91039f4b85e1122f72@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:7007ca0fdc54115b689f2209d736243638ef5714449f444452aafe67fde80c24@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0001, 0x00000000),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:dd988a3bf0cd5edb9e4affb8686f1416955822edfb508ae7bbdd5c1bf67bbc07@@)),
    VARIANT_DEFAULT((@@STRING:e9876c6cd53919ace4bcf0c88397f050b2e1d7c33cd4c5117c4ea0655b443bbb@@)),
    CHOICE(/* label */ 27, (@@STRING:f648479668381ca3a00a50959139f158fcd0816e50419d524b81716249679c9d@@)),
    CHOICE(/* label */ 28, (@@STRING:4c480ab4a9e9de9878832422de4f9e2d9bfa7a9f3c63c753351294700dea09f7@@)),
  LABEL(28), /* = 0x1c */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:0749442d8e0ae373ee1754ecac951e561504e190c771e40a294f620388658e08@@)),
    VARIANT_DEFAULT((@@STRING:0da52d899024f2ed7f917cf634ef1dcb74c132ef75a20474c781885772793831@@)),
    CHOICE(/* label */ 29, (@@STRING:ae404c85359ad192fd8759bfb3d5aa10d516683de4e560c172e469029ac7e0cc@@)),
    CHOICE(/* label */ 30, (@@STRING:d01a3bb18f89ebbb97342ce2912612d6697cdd656894c240d66159a35a2a04df@@)),
  LABEL(29), /* = 0x1d */
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7f1c29068f84b91621e5013bc18ce99fe017a4e0b90c8f61bb06cbc4ac0a117f@@)),
    VARIANT_DEFAULT((@@STRING:97c6fe857e4158a612b008d5d860273ea92d20db04937a3ac3ee233f899d18f4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    JUMP_LABEL(27),
  LABEL(30), /* = 0x1e */
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:74ec1aadfe82851e27101b5c881f024ca59a4541d4dd20940b9a91753c359516@@)),
    VARIANT(/* == */  1, (@@STRING:2c299dd5f4748f0e9f03a01260c7d151ccbd7cb89603150120691d94fbd4ee7f@@)),
    VARIANT(/* == */  1, (@@STRING:46f69f8e21fb2aa0aec807826c595a88ab7befa602cfc61741610e69bbfa1f5e@@)),
    VARIANT(/* == */  3, (@@STRING:702d2d02e93147e6b4bd6787ff6a8929c769bddb3e81bbaafe3571906b9960df@@)),
    VARIANT(/* == */  3, (@@STRING:5f7d0219007a64bb745e79ffa85808aae31d2e9158319301b7f775f913ef1bbb@@)),
    VARIANT(/* == */  3, (@@STRING:0d0c98fb68a3728defaad3c1ac9f12343e6f4d43b8bd947a826b565710c07cfc@@)),
    VARIANT_DEFAULT((@@STRING:4abdf8bc04b6092c204c5effb41b7591017b2bd53069f09cae8e50200c5a4eb7@@)),
    VARIANT_DEFAULT((@@STRING:793f9c3a7d78ac683f0ce1d842b743b14a5adb33c2904f9b2f6aacf8c856e767@@)),
    VARIANT_DEFAULT((@@STRING:bb062265ce1f3b4ba539519c595959f84478f665b2bcdbb2a5aae5ca0f5c3390@@)),
    TEXTBOX_CLEAR,
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000004),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:4266797ae4515c56b89ab563cb7fc4f2d8c2fcb05dc83e76bed701f0778dc496@@)),
    VARIANT(/* == */  3, (@@STRING:53b3df5dc645dc98748d30762d64b27ea96956b54d57f6b410c339d78daa5841@@)),
    VARIANT_DEFAULT((@@STRING:8108b6c6b580cf13b7b9b7e14b3d6f09c7555abd666828c6ddb4f90e59ac6e23@@)),
    CHOICE(/* label */ 32, (@@STRING:6b3632dd01ebbb7558628001475b3abd40b34a5e289dd6a9673e00c02b092cd7@@)),
    CHOICE(/* label */ 32, (@@STRING:881bb5dbace7c3c26f7670be0047b3ab0d78cfb1616df48f36912f87e0a2ff47@@)),
  LABEL(32), /* = 0x20 */
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:7b210abe45b6f31656b4e47f16b6d020c569efb3990967f4324c63bb1498a2c2@@)),
    VARIANT_DEFAULT((@@STRING:9fe7c1a848db255e6e2a3204601fb9aac0a9c92b289067683bd91a377bf77171@@)),
    CHOICE(/* label */ 33, (@@STRING:250093bc5b2825494d266ba1c1e4d76f745a63a3a2992e9d17925b1dd1289d46@@)),
    CHOICE(/* label */ 33, (@@STRING:fedf316d548881e383db3879e66c5c0d20acc47aa464c953a18c501880640c8c@@)),
  LABEL(33), /* = 0x21 */
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c30005fe7a3679bae2f689291522951aa2ff146c10b18aa705dfab5900a6bcf7@@)),
    VARIANT(/* == */  3, (@@STRING:dbe95542ec9fbbb16d0a0f1e698385393b71c215aa3d9a518bb62cca68393490@@)),
    VARIANT_DEFAULT((@@STRING:cddb968d07637f2583b64e4909143be4257f09202b0999f89682f1ef4134b865@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
  LABEL(27), /* = 0x1b */
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:644a3cdd2f212c6d32302ce794213efadc4da043e25c8e0633cf036ef8c1f5b0@@)),
    VARIANT(/* == */  1, (@@STRING:fcf11e0657507ebf2022fb40272d7dddc4c38c3c0eb21b00ffb07735d79d393a@@)),
    VARIANT(/* == */  3, (@@STRING:185122c1e8b54a3aa0cec4e02833a08e8e47ad4068d3c47656fcb54ff346e586@@)),
    VARIANT(/* == */  3, (@@STRING:cc1b30924e32645bccd239b446b6488cb60d9c2b77d490c07c01cf14a885d393@@)),
    VARIANT_DEFAULT((@@STRING:1e57bb9cd37b8d70c9dc904d0d813152e0f6cf86e7adafdd1ef70f397b325a3e@@)),
    VARIANT_DEFAULT((@@STRING:aad17e280fe241d6fe0292a2ccefb3c8916e55b6b0d398a3fcee00fb2c358c4c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    PORTRAIT_REP(0x0003, 0x00000001),
    MSG_NPC(3, (@@STRING:c09f129bd21592cc465e4c1112dc6f55c566d883336f544294237c31a652a14d@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:121fd50a9653450237256d3c5447acbb090e42c3422d080e091359410ed91406@@)),
    MSG_NPC(3, (@@STRING:622ecc7251a47c115f0a521a3a0be00a9addc8f7c7e133c77b02567415f6f464@@)),
    MSG_NPC(3, (@@STRING:e3d8eff996119b873464c6b40fdba3465ad5e26b0c8b4474da3c53f75b66dfaa@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:b8c664a2ffb8d1835aba27495db6676bec60e819f72d07b2ae51d197e528eb88@@)),
    AWAIT_CUE(5),
    WAIT(10),
    MSG_NPC(3, (@@STRING:7932bb19b36cc56cc1f55c37dc930ccf77b1e4771b95481bed9aa6dbb73fa652@@)),
    MSG_NPC(3, (@@STRING:9e911e143c84c747e0b131b6be79282e418dd0972b874422a452b990bf62e222@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ROTATE_TO(12, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:0dba2ee3dfccf11e114b768b8a6c19751e5d11424260e85dbe1b69f89ee59a25@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:be9bdc57f9c56ddc30e0a54026aa352c960507b4b4d96f34111e9f06d0fb36d3@@)),
    VARIANT_DEFAULT((@@STRING:c486e061c7a201e20bbef9e2f51d640d518512b9eba6adb212bf4e15132b2890@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3d12cfe6c7be7d89da85e9d5207480a5626bc556bc636e8cc563f53d01688cc4@@)),
    VARIANT(/* == */  1, (@@STRING:785e82c493516e0ac82cee10606d4749389924a411dc29b8539d615941aaf2ad@@)),
    VARIANT(/* == */  1, (@@STRING:cbe377016abe0e70dd615bcd464292615d53bbb78ef066629f5e10129fdcbc0a@@)),
    VARIANT(/* == */  1, (@@STRING:480dc82d9f676fb37390408f6890a6647357224dcf87cf2a827b8de1bc5e0675@@)),
    VARIANT(/* == */  1, (@@STRING:8abda5687b95af9fdba23e079d21f101e12d78b9214545687ad5b1a177a57e2b@@)),
    VARIANT(/* == */  1, (@@STRING:a37287d54a3f3a614462ae8eb0e724f78c81a13fb9f2d569cd7fe846e2288764@@)),
    VARIANT(/* == */  3, (@@STRING:8c0c10baceb88ed77a17b92b9b9b0b2dfe4ab5a183ecc419af74d5ddd8387ed6@@)),
    VARIANT(/* == */  3, (@@STRING:2440c82fc9ad23f06db92117094058d40654c8a0153b1d4e22473eb055bc95fc@@)),
    VARIANT(/* == */  3, (@@STRING:414dac0ffe372678b873140a4854155c091ae0c8e7b94dbdc449ea3aa74d8201@@)),
    VARIANT(/* == */  3, (@@STRING:cc6c86fb5c1a70bbde5f8e25af1fc53091b581d2335644e42488043d460ba0ef@@)),
    VARIANT(/* == */  3, (@@STRING:4191c46863243b34f913022f8e1e83f343d112c4f77eabb93990f06fa4d971fc@@)),
    VARIANT(/* == */  3, (@@STRING:c638b1bf01eb91a5ef252167f3ceae2b863b0693f60b334171e7606be9146ab3@@)),
    VARIANT_DEFAULT((@@STRING:3d12cfe6c7be7d89da85e9d5207480a5626bc556bc636e8cc563f53d01688cc4@@)),
    VARIANT_DEFAULT((@@STRING:351cc5582000bd0814b1c58d487f87c435fa476430382bf07ef74c0634ec3871@@)),
    VARIANT_DEFAULT((@@STRING:c267fc93891af7c42fd9fa22a5588efa192c872e799ae3229bb2659b6065ccfc@@)),
    VARIANT_DEFAULT((@@STRING:1e91fe9199cd63876b0f032188f996249e51e867192b89bb88f225f26300b59f@@)),
    VARIANT_DEFAULT((@@STRING:fbae6ed6f72515ccbe407920857891ec4c8d53d2c65e989f58117ceca22fba48@@)),
    VARIANT_DEFAULT((@@STRING:ec32f0eaf87356252da48002594625f5c041217c67a322d58f1ba790ddd71a18@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};

































static const struct ScriptCommand s_gs9_g28_s0_lives1_dlg0[] = { /* 0x81aa778 */
    DEBUGINFO_O(3403),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    FANFARE_PLAY2(482),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    FANFARE_PLAY2(473),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(470),
    { 0x54, 0x00,  0x002c,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(472),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
  LABEL(0), /* = 0x00 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    ROTATE_TO(12, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g28_s0_lives2_dlg0[] = { /* 0x81aac28 */
    DEBUGINFO_O(3481),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    { 0x2d, 0x09,  0x0002,  0x00000044,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g28_s0_lives3_dlg0[] = { /* 0x81aade8 */
    DEBUGINFO_O(3512),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(8),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    CALL_SCRIPT(QUESTION_FUNC),
    AWAIT_CUE(8),
    CALL_SCRIPT(SHOCK_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    { 0x2d, 0x09,  0x0002,  0x0000003c,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    SELECT_ANIMATION(22),
    WAIT(30),
    SELECT_ANIMATION(2),
    { 0x56, 0x00,  0x0000,  0x0000005c,  0x00000000, NULL },
    AWAIT_CUE(8),
  LABEL(0), /* = 0x00 */
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(5),
    WAIT(30),
    WALK_GRID(256, 24),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g28_s0_lives4_dlg0[] = { /* 0x81ab198 */
    DEBUGINFO_O(3574),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT_RANDOM(10, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    CALL_SCRIPT(QUESTION_FUNC),
    AWAIT_CUE(8),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    { 0x2d, 0x09,  0x0002,  0x0000003c,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    SELECT_ANIMATION(22),
    WAIT(30),
    SELECT_ANIMATION(2),
    { 0x56, 0x00,  0x0000,  0x0000005c,  0x00000000, NULL },
    AWAIT_CUE(8),
  LABEL(0), /* = 0x00 */
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(8),
    WALK_GRID(256, 24),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g28_s1_lives0_dlg0[] = { /* 0x81ab488 */
    DEBUGINFO_O(3624),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(9),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x2d, 0x09,  0x0004,  0x00000042,  0x00000000, NULL },
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g29_s0_station_sref_script[] = { /* 0x81ab648 */
    DEBUGINFO_O(3655),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g29_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g29_s0_station_sref_script }; /* 0x81ab6c8 */

static const struct ScriptCommand s_gs9_g29_s0_lives0_dlg0[] = { /* 0x81ab6d4 */
    DEBUGINFO_O(3668),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000052,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_NPC(1, (@@STRING:7f79040e20662abfbc7f7fc7d381620801f888d5046cb6379d93d331f5dd8529@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b0bd3cfd101e44badc081f83d6fee20b244ee447e2fc22aa6cf33f0d17e459b9@@)),
    VARIANT_DEFAULT((@@STRING:a16a320c13934e0cc066435335700822c722823e4ba02aeaffa8e8916735890f@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3ba4347154b3ec82bfab3b390d7b7581b22af4b115f8f0f45c8a245d39e98242@@)),
    VARIANT(/* == */  1, (@@STRING:12f88f682a199dffd36f1743eee6b1758dacabbd2ee4a072644cc0f600fb9368@@)),
    VARIANT_DEFAULT((@@STRING:2ff82bb6501683586cc1bc8eb7b577efbde8361812a8ca4838e05de7946efa0b@@)),
    VARIANT_DEFAULT((@@STRING:21fc21d9099372441dab1646d2fca5d4a6f748fab8060620480e5e2832552c91@@)),
    TEXTBOX_CLEAR,
    SELECT_ANIMATION(5),
    WAIT(45),
    SELECT_ANIMATION(2),
    WAIT(16),
    MSG_INSTANT((@@STRING:abf7692ea2e282c460b66f8d5ac2f47a46c1f6b6710485458178e75ff7f75678@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9c444aa7e646483b7e9552bda7c9bb575ef0cf179dd8022c1e24b70db0c36ebf@@)),
    VARIANT(/* == */  1, (@@STRING:8e4523eb2badb9bcb9623f198c55df82e26a77fbb4da17748cd32b508522d17f@@)),
    VARIANT(/* == */  1, (@@STRING:00e9c30a17f51a9f2c18cc043173d9461325c59c656c9fec1c340955ac6bc2da@@)),
    VARIANT(/* == */  1, (@@STRING:f142301359bc1739277f7c6f4b9fa85b9ab1bb3da839e8af612c3e0373637de8@@)),
    VARIANT_DEFAULT((@@STRING:dfe18915a1f84227bd5d900220dfb1b2307e16403d8e227f16ca054a4075d626@@)),
    VARIANT_DEFAULT((@@STRING:7aeb8c6556df4f5b64583e6f2e2cfe580b60df543dfc5b94d001be1a5765f009@@)),
    VARIANT_DEFAULT((@@STRING:10ad9579657bd1402089cc8aa62e43eb9ef090efb23416fe4b626a94eb8348b0@@)),
    VARIANT_DEFAULT((@@STRING:b3d1198637d660d4de7a3b3a6f86ae07bf2e4c37e9c455220ae32895c24cb3db@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b52508747c8bad88be7580161f5cb472cd6ca690f78a7db638e168c6ca73891d@@)),
    VARIANT(/* == */  1, (@@STRING:2b42aa91617436c4e736a430467846d925e3d69ae7817f1d973584c0bdcec1e6@@)),
    VARIANT_DEFAULT((@@STRING:9733f8cb35ceb3fa0e42bf6da5640af188ab4603765ae6d412ba9cfdee2a74f1@@)),
    VARIANT_DEFAULT((@@STRING:77964b543731e52215d88ed011be641ef5e43d280c3e986c35676bf0caee5b73@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0000, 0x00000004),
    MSG_QUIET(0, (@@STRING:43b08798e6664599a4d0e13a6e50a8e9ae320f796e9eccd59a0b4279fac23135@@)),
    MSG_QUIET(0, (@@STRING:f1d3c96005bb99a874931cd96e0f03466231c65056a881910fc7a69c477e182f@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ 0, (@@STRING:6c045c4916277ce62bcffbe242793950ab024c07319a3013ad55da8c98a2e07d@@)),
    CHOICE(/* label */  5, (@@STRING:580e0980009f4f7e0f1cf6c0de92beffb81f390d5a4ffd7f723556ce24897234@@)),
    CHOICE(/* label */  6, (@@STRING:d4c5b661f699e363b62e111a4aea66e86ea5fed67bc2b1edd38f55cd73879d9a@@)),
  LABEL(6), /* = 0x06 */
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:71ef02a8a19a3e9500d3536cf8e667291601ecaa56d9d4fd8e5cc6012cec1f4e@@)),
    VARIANT_DEFAULT((@@STRING:71ef02a8a19a3e9500d3536cf8e667291601ecaa56d9d4fd8e5cc6012cec1f4e@@)),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ee3cdfe27cea5a243947c5e163b6b9ba520f415a1acb2f95db267f52fe4e1180@@)),
    VARIANT(/* == */  1, (@@STRING:aca74db653b84eaed69caa7f6d5149fbcfda37b34486783f43a03cd4826f2368@@)),
    VARIANT_DEFAULT((@@STRING:a1bade85a923f3e1d0675987dae6f736cb4112200d87bce6181037ae25bee31c@@)),
    VARIANT_DEFAULT((@@STRING:900602f787e1561f7eacab380f35b8b9a5ec32e1ff2b870bcf3dbe7d0ff6261f@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b9cdbaa93249ae26763fe4061d8e26014b7c293e6fb7459bd161c9ae95ee1ce3@@)),
    VARIANT_DEFAULT((@@STRING:cf20cc230f7ec20f5528a0b8e249d794bde6efc5e28ca498f359b02849df5b2b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0000, 0x00000004),
    MSG_QUIET(0, (@@STRING:027ad84265ad50780a4cbebbd654d9e1f9ac8e5ae48c226187831cbd6293405c@@)),
    MSG_QUIET(0, (@@STRING:cf463e4e6cac463bbbdb9267e9ad45ab6cbb94edcb513b1bcfedc58c6a74a9ec@@)),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    WAIT_FANFARE2(470),
    PORTRAIT_REP(0x0000, 0x00000005),
    MSG_QUIET(0, (@@STRING:c0dd2de48d7d5433cac2ca85c129555b7339c41778c7eceb44c8d4e3a5719638@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d453830b92456848aa3b38060a191326e80039971e8fca6cb7ad1f0776ed685e@@)),
    VARIANT(/* == */  1, (@@STRING:a4cdb60e15b1ffa4241aec87935b3486d573cee1e9cfc046e0ec7f3b3c360371@@)),
    VARIANT(/* == */  1, (@@STRING:406200b1782972a9430b9d7f326a0f00b4eb90aa056619fc61d322004f7bcf6d@@)),
    VARIANT(/* == */  3, (@@STRING:aba260f5617328c7aa0999553414d74e287c9a0b88b8e5ebc5b4bbcb6ba107e6@@)),
    VARIANT(/* == */  3, (@@STRING:f3d6cfb96c583f7560bc3a3d5fd9e29b2746f42b4f0647f8e0ae3711f297669a@@)),
    VARIANT(/* == */  3, (@@STRING:1decf7981a7da4e5f7ba3b894035f64bbd22c0788c77dcaa0780046bb1de23ca@@)),
    VARIANT_DEFAULT((@@STRING:fa8eecc3c72a716f216d805e8c1016c7082eff83b84aae0d63ba6fbf17f698ed@@)),
    VARIANT_DEFAULT((@@STRING:9c0f627807989073ad5db837e4b1aa6fff82290804b170d45881f94e26d7cb62@@)),
    VARIANT_DEFAULT((@@STRING:310ba7b71ee6e181eb7719821eb41c36fc1dabcff069ac2c2dbe26b759a7ce5b@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    JUMP_LABEL(9),
  LABEL(5), /* = 0x05 */
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cbc5db893f3ec57f57dff4002072a862d2667dc11456715e67b588ecd04b1d0e@@)),
    VARIANT(/* == */  3, (@@STRING:a868fd137b6bcdc9583f8369d0552cb02e71fdb26dc9ee0eb609e03fc766aed9@@)),
    VARIANT_DEFAULT((@@STRING:7bb5b2c7ee33b7dc3360c8766f2e5bdf704878482d1953c158b64d5740486252@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6cfb2e7478762b16b8331d3aacd706b1ac9b0c198bb2576383e15f5dd9c00928@@)),
    VARIANT(/* == */  3, (@@STRING:599ebb17641c691f24fdc7c90dff6941e8bb8c708152c2d385269d920b6ddfe3@@)),
    VARIANT_DEFAULT((@@STRING:1c4959e9a3f160ff2f0a7b72eac34b53bdb3ceb300a38372a202357368455748@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(60),
  LABEL(9), /* = 0x09 */
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c5544c07673d0ad786c33c1c4cc58194e0d20f47d8fce373b90a808570e1bd1b@@)),
    VARIANT(/* == */  1, (@@STRING:ea434de78d5e17c5a89b5b115d070088a4ef11b1598c184a74556ea39272f7ab@@)),
    VARIANT(/* == */  1, (@@STRING:d89541903e0ede3dd46e177ffc1db87da6eb3cfc7f8af98a9ef4d728bda5f052@@)),
    VARIANT_DEFAULT((@@STRING:524458e640dfda0b4c1c71e8b44529b7ff039988e4d04327d5a552d153b36baa@@)),
    VARIANT_DEFAULT((@@STRING:362eb485571c0f8a157f4e4d5ef4485344a99f6e1e9440fdb36d3e5e3ae855ce@@)),
    VARIANT_DEFAULT((@@STRING:f31a2f23cc6104c262c00c32c5949faed8197690147d823b3520ca3907f1a717@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(120),
    ALERT_CUE(6),
    WAIT(1),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 27),
    ALERT_CUE(3),
    HALT,
};








static const struct ScriptCommand s_gs9_g29_s0_lives1_dlg0[] = { /* 0x81aca18 */
    DEBUGINFO_O(3816),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 26),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 27),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g30_s0_station_sref_script[] = { /* 0x81acb68 */
    DEBUGINFO_O(3840),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEIN(60, 1),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g30_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g30_s0_station_sref_script }; /* 0x81acc48 */

static const struct ScriptCommand s_gs9_g30_s0_eff0_script[] = { /* 0x81acc54 */
    DEBUGINFO_O(3859),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x3c,  0x0180,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_GRID(256, 29),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g30_s0_lives0_dlg0[] = { /* 0x81acd04 */
    DEBUGINFO_O(3873),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:34014d0313d55303df5ea1f01620ef60ab5042cc501ff8475766313448b2170e@@)),
    VARIANT_DEFAULT((@@STRING:b8d27c13e42a6ab834e40c799b6980c827e9db449f0ec089d6e71afd8698cdfe@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:4f2eb831c2fc44e45eac32a68617cf03d01e30c71d6f9a6297059ed7afaabe99@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(30),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:e09b15728824e1407c4bc36fd11d5a0bbc0e9b1b793fee987cc685cb4e824b6b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:6d494d5b36ab3509ef2e9b3f6316596285b6c5b48707d7534cac9abc02f031f9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 0, -3),
    MSG_NPC(2, (@@STRING:f08340ccfd0e95b9a1b3e1a5ea512a40defb1643c3421e20d46b684d90faa40d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(4),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:977a54afd8a7403f6c1d9402c6d479c0d6597fd337bd802a7b82417ddc1066a4@@)),
    VARIANT_DEFAULT((@@STRING:50682468d44e8c1b9f2a00e642f28b3edc9ceeb6027c1a68934c563fabd8e3ed@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000041),
    MSG_NPC(4, (@@STRING:97fa5327466462e2c783c881ce216ec2cda1f93dc486a1c6ed182ba86d656210@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    CMD_UNK_8E(4, DIR_TRANS_NONE, 91),
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:e3b28e288ab01dbea6738db4ca1a3d7404ee8c4bf6915bce4bb86bcf3e428a0b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8871ebaa7e47ed7027a039d9b28843ec440936f514e0e588f7174226e6b0fc8a@@)),
    VARIANT_DEFAULT((@@STRING:9746d1880ca07959e09839f00ddd7c2d0ce2b885579e50a2a3c995c62404fb63@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:dd050a604ed14af4845fb2f53319ee0d0ece97cbcb770983a4e34d34521016a2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000041),
    MSG_NPC(4, (@@STRING:47b8e704ba5ce53603175651a76e7d30079c6fff5d56cd877a564b9fe5732ec4@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:0ee6379a8a0998cc74a19535f68f7a22bb10b474c388af67b8c767e7e9f17c75@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:596bafd7d6765e67faccbcd15ed08485a0ef3a87c99f759e3ff5435620de55aa@@)),
    VARIANT(/* == */  1, (@@STRING:86455de0a47ed514e35e72899bd27d51921fc8216151f8e974f8bafa0b2d2746@@)),
    VARIANT(/* == */  3, (@@STRING:a5efab4ef56082aa10cbb1d3e980eee33ae25d5f453ccce5df5e21997a534bf0@@)),
    VARIANT(/* == */  3, (@@STRING:3b6a481dfefacfa653754ef6322322b23bf2c2fbf2a0370bbe7953139dfcdd7f@@)),
    VARIANT_DEFAULT((@@STRING:ba974f105927d772be6d4c251f7e463697ef466bcca35b74478153044b9bafbb@@)),
    VARIANT_DEFAULT((@@STRING:827856ddfed676f8ef4a118a16244c9e44af47543570ebe09b6d5ad218c6ec46@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(20),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:fd70412678cb445dd70b367547e0c4abaa2d941c9c76a125bbd424590cf7da80@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000043),
    MSG_NPC(4, (@@STRING:25cbebd4dd4c75fb482ac8323d1d6b5574ecf905a3bd0e81f06ce297ba938fa0@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000042),
    MSG_NPC(3, (@@STRING:bac96f3635d8d284cb0907cedcf011a380482552b390e1e8481b5a19dd782ad2@@)),
    MSG_NPC(3, (@@STRING:451bd2ac0321a099242a25f95699e4704f770d82ec4f5d71ad68efd5b0f6acb6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000043),
    MSG_NPC(4, (@@STRING:f894c52707a1cfa565d02bec91f632c3d4c8e5fdcd9c46f4ef86fa136d079c2b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:9e1c6bc145288823976cc679994c9fee851623e18cb06cde1d4073ec9a7d1373@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:e222a9ed4c619e08b1c85eb62e164f0d28969185e5ec2e5ef77fbb5687ac8cde@@)),
    MSG_NPC(2, (@@STRING:174d276841f189a4a41319b98f2ed83fdc865221d694ce0133844f2fb8d50526@@)),
    MSG_NPC(2, (@@STRING:19ba935f8d67851d11eb33d235e1b8e8fdbbcbc1c195a3a415526988df5ae6c0@@)),
    MSG_NPC(2, (@@STRING:464dde415a669e2dde38874ea833ff7a15a95b459f6b53cc7efed571aaa791ef@@)),
    MSG_NPC(2, (@@STRING:f6d71085b13b675373ee55405d4a188ab5ed4b17ccfc0b331fd38766e3a616d7@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(60),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    { 0x89, 0x08,  0x0100,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6e38b314d5715cfa3ee9a93261407ea6de83032abcb4d498f381daf4112b2995@@)),
    VARIANT_DEFAULT((@@STRING:5a5743c97b2e64a885c4c0b1b3f412fa22b36021ca3f6bbfc361485849842747@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e6f71d8e634ec207dbecc95136f5a0bbe6507c0d84158316244fc993a25ff1ab@@)),
    VARIANT(/* == */  3, (@@STRING:3fc7d8e34ec5201edb38428cb8b258fee9a5b9e250caa9a369b9357103f88d4e@@)),
    VARIANT_DEFAULT((@@STRING:0896c8e8bfdc996a4547ea47df783948e0d1c260c4095ba1d16ab22e70884e35@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000006),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4c97bf31f4153e2f46f98061bfbbc1610b524660e90c7f668f225fea7981ae14@@)),
    VARIANT_DEFAULT((@@STRING:972f2bba0839ff898578b4e028d83737547d673921f939eb55ab73640221e68c@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(473),
    CALL_SCRIPT(SHOCK_FUNC),
    WALK_GRID(512, 31),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(16),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3c745aa03cc5d3a040ab74efc27237a833af800ec4edb4a9fadf0234c4300f47@@)),
    VARIANT_DEFAULT((@@STRING:dc68ab134d14bf7cf886e30c122cab47ce2fae1257d33248fecff416be49784b@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    { 0x3b, 0x06,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4127f02532a29e716527880a2950b88ca4b5b48dc4228894f09aa0deedd6add7@@)),
    VARIANT(/* == */  1, (@@STRING:d25d544af2d8c0ca56e2d6f0b7ccd067d7e2e9f54f93a5618c89daa9b98143b9@@)),
    VARIANT_DEFAULT((@@STRING:4fe454eac4582d23a74677bdf79f7671a8d6783f4ba6007501cc2ab5be8f147d@@)),
    VARIANT_DEFAULT((@@STRING:cd74e6e7d109b06e2bc181d88d27109500c7e6dce5539dc95fcdfb89376d3f1e@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    ALERT_CUE(6),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:bfb39fcebe48a405c118f3af9f7b6d760fb9d0ac89e5510df79ddb2fcb55052a@@)),
    VARIANT_DEFAULT((@@STRING:87459dd16b81d31215f85fd20cd1e61839cef1bc76fd67215fe13f31c986c151@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    { 0x9d, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};





















static const struct ScriptCommand s_gs9_g30_s0_lives1_dlg0[] = { /* 0x81ae20c */
    DEBUGINFO_O(4114),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 26),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000005, NULL },
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(1),
    AWAIT_CUE(6),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    WAIT_FANFARE2(457),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(458),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    WAIT(10),
    WAIT_FANFARE2(458),
    AWAIT_CUE(6),
    FANFARE_PLAY2(473),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(20),
    WAIT_FANFARE2(473),
    AWAIT_CUE(6),
    { 0x89, 0x08,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x89, 0x10,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(10),
    WALK_GRID(256, 2),
    CMD_UNK_90(1, DIR_TRANS_NONE, 28),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    WAIT(20),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_START_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_END_FUNC),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g30_s0_lives2_dlg0[] = { /* 0x81ae61c */
    DEBUGINFO_O(4182),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(7),
    WALK_GRID(256, 30),
    CMD_UNK_8E(4, DIR_TRANS_NONE, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_GRID(512, 31),
    CMD_UNK_90(1, DIR_TRANS_NONE, 28),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_GRID(512, 32),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g30_s0_lives3_dlg0[] = { /* 0x81ae78c */
    DEBUGINFO_O(4208),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(8),
    WALK_GRID(256, 33),
    CMD_UNK_8E(4, DIR_TRANS_NONE, 0),
    AWAIT_CUE(8),
    WALK_GRID(512, 34),
    CMD_UNK_90(1, DIR_TRANS_NONE, 28),
    AWAIT_CUE(8),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    WALK_GRID(512, 35),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g30_s0_lives4_dlg0[] = { /* 0x81ae8ac */
    DEBUGINFO_O(4229),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(9),
    WALK_GRID(256, 36),
    CMD_UNK_8E(4, DIR_TRANS_NONE, 0),
    AWAIT_CUE(9),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(9),
    WALK_GRID(512, 37),
    CMD_UNK_90(1, DIR_TRANS_NONE, 28),
    AWAIT_CUE(9),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(9),
    WALK_GRID(512, 38),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g30_s0_lives5_dlg0[] = { /* 0x81aea0c */
    DEBUGINFO_O(4254),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x00000030,  0x00000000, NULL },
    AWAIT_CUE(10),
    MSG_OVERHEARD((@@STRING:cfc125f2d034fc6d16a9a04dcb21d0624d3414017d9e006ea3df652cbe458ea6@@)),
    FANFARE_PLAY2(451),
    WALK_GRID(256, 3),
    ALERT_CUE(6),
    ALERT_CUE(5),
    TEXTBOX_CLEAR,
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    FANFARE_STOP2(451),
    ALERT_CUE(5),
    SELECT_ANIMATION(22),
    WAIT(20),
    FANFARE_PLAY2(501),
    MSG_OVERHEARD((@@STRING:389dd5c1914675deffae753c4de4dfdd808ad9bc1cbd5637462deb35f8f984b6@@)),
    WAIT(60),
    TEXTBOX_CLEAR,
    ALERT_CUE(5),
    AWAIT_CUE(10),
    FANFARE_PLAY2(451),
    SELECT_ANIMATION(2),
    { 0x68, 0x00,  0x0100,  0x00000030,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(6),
    WALK_GRID(256, 4),
    FANFARE_STOP2(451),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g31_s0_station_sref_script[] = { /* 0x81aec4c */
    DEBUGINFO_O(4292),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION( 32,  0),
    BGM_FADEIN(60, 1),
    RET,
};

static const ScriptRef s_gs9_g31_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g31_s0_station_sref_script }; /* 0x81aed3c */

static const struct ScriptCommand s_gs9_g31_s0_eff0_script[] = { /* 0x81aed48 */
    DEBUGINFO_O(4312),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x18,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0x20,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0x20,  0x0080,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g31_s0_lives0_dlg0[] = { /* 0x81aee18 */
    DEBUGINFO_O(4328),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ff965fc2d8d20b4138dd84242f16b3c4b3dff8b05dc64c96580ce30d7d25aa43@@)),
    VARIANT_DEFAULT(("")),
    VARIANT_DEFAULT((@@STRING:a0145cd51aebb853aa5671951ad869f3697c04e4dc789f6a93515508f02a84dc@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:25e4b7916439b85a19e4ae33a0ee4b26e53d68ca2f7ee2956b1e789fc9be3dff@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c5cf11b0be248215b1f1ef3aa8448fbbaea6ba8350cd7982073d514ea096573d@@)),
    VARIANT_DEFAULT((@@STRING:09918383b4deceed55dd6e778d609f1d24ee0f52f572d25c9aed38f1f82d310c@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(10),
    ALERT_CUE(4),
    BGM_FADEOUT(60),
    ALERT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x84, 0x00,  0x0100,  0x00000010,  0x0000001e, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 54),
    AWAIT_CUE(5),
    WAIT(10),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:82d1623c20a57cc234b0a5968d2733d8eba642d0e120d47b16da996e1b804153@@)),
    VARIANT_DEFAULT((@@STRING:b17663dca168d0adea8e1591031e788ec79ea4ac397034aa50ddc1ffe9d08373@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:eaca3e5cfd8b1f95a5d67125d31440510a07564b223f1834f565083102c53f9b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:73bb06364d681ba62ddee9931d9776a9a280a5f3ae6e8020a497bfbbf2df4d4a@@)),
    VARIANT_DEFAULT((@@STRING:73bb06364d681ba62ddee9931d9776a9a280a5f3ae6e8020a497bfbbf2df4d4a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:b8007cfe52053eab06614f8d1f8944af216ddff9941a5643f58bfc0962cd9db0@@)),
    MSG_NPC(5, (@@STRING:4d269de52a2f878be11c63eb608bc41185a55566079b8c61f250a4bfec1f1acd@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:b29913176245762b94c67837e0d85289685b86a3f102af3eb23700278adfd6c1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    WAIT(16),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:36f5bda861b04ec39b681ea601800d1415f6ac15a6758154770ca18f5bb2bb1d@@)),
    VARIANT_DEFAULT((@@STRING:71df0672f639ec5fa884608c18ed1d34e32af7780a6e2f842f73059f956fa00b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(10),
    WAIT(16),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:2ac8b85f33ad5789a1b685e6748f9d60c6e33c84948ef101dd87964a695c9cd0@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c11b6fb33aa0a393e534305cd680e29dc46c9ca71d7dec4bec1a6d2f21c01497@@)),
    VARIANT(/* == */  3, (@@STRING:01b0b92a1a4364d8e2ad6e56205165780b949d950e5d8955d9aa0298612159ba@@)),
    VARIANT_DEFAULT((@@STRING:4123844c3b26380bfd1cb2fa59d6ba23a2dfa274085bee3a09b6fd85648d082c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:36219167b88dddb6e1e85651cf6413fe2b68b209c38f36b792faede10468ed31@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:185a9a90e3a49ef85fc0722d13149c19f6e3b2a4ed2eae6b862cc66b79fdf87c@@)),
    VARIANT_DEFAULT((@@STRING:785933d9695a88cd76f9156ca82de42b4dbe1681084a0522d5e51f1634d2f921@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:44da527893c4c2d997727bbb896a09e1a937d417e09c62bbc5f7da4cf05c5b0f@@)),
    MSG_NPC(2, (@@STRING:e59a0641ca88fad18eea50aac7b69bd4970f2d8e63596801055ff8d0241eb0f9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:4a1edf555c91bad893bc38ba624bd776cb6b45157d542397aa2d322e990f4808@@)),
    MSG_NPC(2, (@@STRING:6f7624a52bba9f3d38db2536c8b7af8f0a15e8d7a0ffa833c9b1045c3a71dffd@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:26506ccd70300a918ee3e76413909c8975ce2cd33df9b9d3d9823fbba3d34ea5@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:1616ae8c77176e37227f7de52cd626cf7b3900f16212ca38ea3b154077d9d342@@)),
    MSG_NPC(2, (@@STRING:7007bc2222e2b88401b411936b8dfbec2e79833c388e9be24937dc1ef3eb36a8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:84fb4c96a63797d2966f83e5e6d142a5598bf4cb01da6193da66942a21d968fb@@)),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:729fce5e2ec043680a44d33076fbbbe10eedce9af81048621f97b0e90b690f2b@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:5d7e2becdf6c5a59bff5b8dd4ccf724c0f991b9715a88046f901174702766000@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:3b77e97e59d29799b8259e006f47ff78fe54917c68e56a4702bea9ee6efa6270@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    BGM_FADEOUT(60),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(120),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(60),
    PORTRAIT_REP(0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:4501c820f066129ae4d33ca959607e85c8b9aeb7de7e329197c9e307ef05a023@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    WAIT(30),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:36aa9b5e7d432593f797f28c886d9681c8476e902380968fcb93fc48e0ccd311@@)),
    VARIANT(/* == */  3, (@@STRING:77c88565ac6a938f3fcf5de3a5759572f974221242fc9c39a86d67beeb55491a@@)),
    VARIANT_DEFAULT((@@STRING:36aa9b5e7d432593f797f28c886d9681c8476e902380968fcb93fc48e0ccd311@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(6),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9c33d1a9ea1897e4ea38783fd3f03e2303067e49a6e5b5f8b8a186053d8c8764@@)),
    VARIANT_DEFAULT((@@STRING:34b438772b7798a50f10fcde5af4288611c472710ad163de8865022d91e4ad92@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(3),
    ALERT_CUE(6),
    RET,
};


















static const struct ScriptCommand s_gs9_g31_s0_lives1_dlg0[] = { /* 0x81b002c */
    DEBUGINFO_O(4530),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 26),
    WALK_RELATIVE(256, 0, -3),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 54),
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WAIT(10),
    WALK_RELATIVE(256, -8, 0),
    CMD_UNK_93(4, DIR_TRANS_10, 54),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    WAIT(5),
    WAIT_FANFARE2(465),
    AWAIT_CUE(6),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    WAIT(5),
    WAIT_FANFARE2(457),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_START_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g31_s0_lives2_dlg0[] = { /* 0x81b02dc */
    DEBUGINFO_O(4576),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x89, 0x24,  0x0200,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x89, 0x08,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    ALERT_CUE(8),
    WAIT(16),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(9),
    WAIT(16),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_GRID(256, 32),
    WAIT(32),
    ALERT_CUE(5),
    WAIT(28),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g31_s0_lives3_dlg0[] = { /* 0x81b04bc */
    DEBUGINFO_O(4609),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(8),
    { 0x89, 0x24,  0x0200,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    WALK_GRID(256, 35),
    WAIT(60),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g31_s0_lives4_dlg0[] = { /* 0x81b057c */
    DEBUGINFO_O(4624),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(9),
    { 0x89, 0x24,  0x0200,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(9),
    WALK_GRID(256, 38),
    WAIT(60),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g31_s0_lives5_dlg0[] = { /* 0x81b063c */
    DEBUGINFO_O(4639),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    WALK_GRID(256, 39),
    CMD_UNK_93(4, DIR_TRANS_10, 2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(10),
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000004, NULL },
    AWAIT_CUE(10),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(10),
    RET,
};

static const struct ScriptCommand s_gs9_g32_s0_station_sref_script[] = { /* 0x81b07ac */
    DEBUGINFO_O(4665),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g32_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g32_s0_station_sref_script }; /* 0x81b07dc */

static const struct ScriptCommand s_gs9_g32_s0_lives0_dlg0[] = { /* 0x81b07e8 */
    DEBUGINFO_O(4673),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g32_s0_lives0_dlg2[] = { /* 0x81b0818 */
    DEBUGINFO_O(4679),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:f89a05c7482bdc0bd04d2b9ffb1fe149b8462005cbd4a8e88f4cc044138ced49@@)),
    MSG_NPC(1, (@@STRING:d6a83028c2a89ca160eb24fd12612ce28d45e49d04cade9be6d4de8259ea5c5a@@)),
    MSG_NPC(1, (@@STRING:d3302eb305fdeb594cc067eacaa885462c7e3bfa748e955be44dc4fb85279fe6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g33_s0_station_sref_script[] = { /* 0x81b0924 */
    DEBUGINFO_O(4690),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g33_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g33_s0_station_sref_script }; /* 0x81b09f4 */

static const struct ScriptCommand s_gs9_g33_s0_lives0_dlg0[] = { /* 0x81b0a00 */
    DEBUGINFO_O(4708),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f7ff9449c340f1ec3166b131882850fd78a1d5303cc1bde9707f8780456c5fe5@@)),
    VARIANT(/* == */  1, (@@STRING:2d911f31043cc33ab5b352e801c718a11c5b274bef6ffe50ed4beff43bd0ef03@@)),
    VARIANT_DEFAULT((@@STRING:f7ff9449c340f1ec3166b131882850fd78a1d5303cc1bde9707f8780456c5fe5@@)),
    VARIANT_DEFAULT((@@STRING:d290c0948989f558b0c9a038f3f4b8b8a43acb386d035281f818e7c9e12d8b30@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g33_s0_lives1_dlg0[] = { /* 0x81b0b8c */
    DEBUGINFO_O(4727),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g34_s0_station_sref_script[] = { /* 0x81b0bec */
    DEBUGINFO_O(4736),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_A_SUCCESSFUL_RESCUE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(90),
    { 0x23, 0x01,  0x005a,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g34_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g34_s0_station_sref_script }; /* 0x81b0c8c */

static const struct ScriptCommand s_gs9_g34_s0_lives0_dlg0[] = { /* 0x81b0c98 */
    DEBUGINFO_O(4751),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000042),
    MSG_NPC(2, (@@STRING:727c605f13abc174b767541bbfc98ebaa567b8c06abd1cb7f03d6eedfd2694e6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:986a89bc454ce6d028248935e04734732487bebe22dea4514e345da72ab4f0bf@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:9a0dc311d6ed59ec5f681e1b3a96aa9eb8a60ab6f06087f5cd5c0445d4897535@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:96bf47ca70042e38ea67584efb0098309edd7850315eded925e91172bbdc11e3@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:01e1115bf75c1f37f17f1d1d0517b4ca856c65bd31fe16cc58b88421f18629e7@@)),
    VARIANT_DEFAULT((@@STRING:96dd85caf44814f09d0126ee936ba8917f371e11712b4c89d4e9efdcf2451bef@@)),
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:596491e05605ebb4e604a9bd6efe23ef50bbf5245e8109333aa9b7c117a6bd02@@)),
    VARIANT_DEFAULT((@@STRING:0547fd433e30d48c432c346cfcf270788c91e7bb0910b847c16cd57abd7c6205@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:658a127aaf743255e2dfebd70ea207e896744c622b5610ae03aae98103ea25ac@@)),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:17dc2b0aebf84313c26dbb3aa80f59e5b621f7f47a4b9da4cc2572ac9bb2790f@@)),
    MSG_NPC(2, (@@STRING:d5641c2f4e378c08bcda9f1fc249f054d626a9fff8969253dd8b2b8fd19b42a1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:645ce17c55bf98319d8a40318f4a76ba45d09b6cd837b0361d4502c22c618a05@@)),
    VARIANT_DEFAULT((@@STRING:1e3be21e1c636dd355b8669498db5e89792d87e32b1c86168db9caf4775d68af@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:4ddf4b580112d89d039f28f5ad26cae00355a08c636ae84a2e19f85b527a167e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3129194f22845046d648387c0e571678d1731033cd1df76c68db9f8b96415f57@@)),
    VARIANT(/* == */  1, (@@STRING:ec4348f303e10f7602cdf31df894c46bd75b861c1f3de59a0df0af758f372df9@@)),
    VARIANT(/* == */  3, (@@STRING:426a56e5f5617354cd7585365bc52a744079dfcb54842fa0f7610a9dade127a0@@)),
    VARIANT(/* == */  3, (@@STRING:a73321fd96766cc7132a5aa651c33db282257fb75afb3e57490e85d6a885516e@@)),
    VARIANT_DEFAULT((@@STRING:529d5307acf85cef44c3280e5cf9be0f1eac1915d4736446f476e0fcbec4ba6d@@)),
    VARIANT_DEFAULT((@@STRING:a73321fd96766cc7132a5aa651c33db282257fb75afb3e57490e85d6a885516e@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:fadc89b9b533ae7fef9be40dc58a737a267aaebc3eb046b18253d47ffe05700d@@)),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(4),
    MSG_NPC(2, (@@STRING:56f0c44d0c1f6f59e9e9b5d3c5c16108be5584ad24fe413b19902d2f3078fa7f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:17fd1f7ba4bb0390ab117440339ce479718cd3d413c86445f9b46e816d6d911b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    WAIT(30),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:39bb10ab59536e057122d56acfb3614f37333a8aee839a2fd0b912bdbdcdcbe7@@)),
    VARIANT_DEFAULT((@@STRING:179acdf97d8882ae3b9d4ddcf80293dcba2b77297648b79b1338944dc8804824@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:037b281c0adcb5e6ec46031ba8a7db18a67b7aac9229641825b3b5b370b606a4@@)),
    VARIANT(/* == */  3, (@@STRING:0edfdcfbdc75bd1c2def6eed7f52f26ba94e4bba57c343010cd4f5421907fb1a@@)),
    VARIANT_DEFAULT((@@STRING:3e25facddd75da1fc8aa990d353bf4951e7060b82f475434cea917ab6778bb06@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    CALL_SCRIPT(SMILE_END_FUNC),
    WAIT(30),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:3fb355be356fd0073f2b5604dec1a8ce35164035065464195097341c15a0bbe9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2c8bca13739bcff8d801f4c70954b817ef60acc630d4303245c2269aabd781d7@@)),
    VARIANT_DEFAULT((@@STRING:528d07ad9c415c62bc9b16ac22837a9e91e39c3c8ede95a10e669009c1bfe99c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(30),
    ALERT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:786ea0b794a4ee3092ca77e032fc835829acf0628e25143fe8cde908da39e355@@)),
    VARIANT_DEFAULT((@@STRING:e29330c8e4f838ca340c3af92b89daa887752fa740167e1c30b84d58487a7474@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:e3d7689453c2e0d403d3137a2390a903c075ee831eb2bcc3808012d1fc803e57@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:827dd4d107cb21d4b3854d9a2710a03cb01ec7522005cf47fe92c7b832e2045d@@)),
    VARIANT_DEFAULT((@@STRING:0cc6498fe3803730556f3330a732ce84c0962d6cc74d94fffc34747efc211ccb@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(3),
    HALT,
};












static const struct ScriptCommand s_gs9_g34_s0_lives1_dlg0[] = { /* 0x81b1da4 */
    DEBUGINFO_O(4932),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    FANFARE_STOP2(465),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_END_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g34_s0_lives2_dlg0[] = { /* 0x81b2054 */
    DEBUGINFO_O(4978),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 94),
    WAIT(10),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    WAIT(10),
    FANFARE_STOP2(470),
    AWAIT_CUE(7),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    WAIT(20),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(458),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WAIT(5),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    WAIT(4),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(7),
    CMD_UNK_8E(4, DIR_TRANS_NONE, 0),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 40),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g34_s0_lives3_dlg0[] = { /* 0x81b2384 */
    DEBUGINFO_O(5032),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 54),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(8),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 40),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g35_s0_station_sref_script[] = { /* 0x81b24b4 */
    DEBUGINFO_O(5054),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g35_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g35_s0_station_sref_script }; /* 0x81b2534 */

static const struct ScriptCommand s_gs9_g35_s0_lives0_dlg0[] = { /* 0x81b2540 */
    DEBUGINFO_O(5067),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2151d88deb595eb496d7a410eea8f78948cc4aa450717100ab49c36a66670468@@)),
    VARIANT_DEFAULT((@@STRING:fa8374d85ba4dfe67dbae0600e3d5d684b8ff77fab2cfd4b2ea0152732fd0979@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:252ef1d38f6f2d58d715fdd1fcdf600d43dc904dbc4b4539376de4cb6ec6b4f2@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(469),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:e5f9479a2081e9f70a6deb3d60437f996c38da48bae5408a4fc0d9b00879499c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    BGM_FADEOUT(120),
    SELECT_ENTITIES(-1, 2),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:d977bc11f9c54ec5dae477e06ee813d8d9d4bd0a6be44360cadfcb8aab24f5d1@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:3b553385c849c0cc6dc175fd3361ef96919a241de7dae7ea27a465f4a4b1087e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};






static const struct ScriptCommand s_gs9_g35_s1_lives0_dlg0[] = { /* 0x81b2854 */
    DEBUGINFO_O(5109),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 43),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(70),
    CAMERA_PAN(204, 44),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g35_s2_lives0_dlg0[] = { /* 0x81b2944 */
    DEBUGINFO_O(5127),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WALK_GRID(256, 45),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g36_s0_station_sref_script[] = { /* 0x81b29c4 */
    DEBUGINFO_O(5138),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    SELECT_EVENTS(0, 0),
    CALL_STATION( 37,  0),
    RET,
};

static const ScriptRef s_gs9_g36_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g36_s0_station_sref_script }; /* 0x81b2aa4 */

static const struct ScriptCommand s_gs9_g36_s0_lives0_dlg0[] = { /* 0x81b2ab0 */
    DEBUGINFO_O(5157),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000055,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:718c77917de8f87e6db2c2f8adf0254d20400a12abea6e9e73e5d6fef65189de@@)),
    VARIANT(/* == */  1, (@@STRING:4265b4eadf0b9bf035cc57a098a1237b4be13ee1e75cbda25d3130597c7ca935@@)),
    VARIANT(/* == */  3, (@@STRING:ef7611b5d1d9a4dd84a13e1bc235a27e417ef4b157db0bd49e38a438ed72c6cb@@)),
    VARIANT(/* == */  3, (@@STRING:a011b65d013360cf958afb882e4df1ca8cc797567c68f303e97dd9c556c7b452@@)),
    VARIANT_DEFAULT((@@STRING:1c9f7096af8313624b9d04d8a62c3c17cfb0438c187a17e92688701f193f39ca@@)),
    VARIANT_DEFAULT((@@STRING:d16c35a9eccd3f866223f430cb02382c7ba318707cc01e414d01f44939cba0a9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:41d9dc3ebf1c43a640ab35e4918c8e4f3305619857e4e1177447251ab71a37e7@@)),
    MSG_NPC(2, (@@STRING:cfaf662d2557645473077786d418a81fb46a158400546cea5a957a96e929844b@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(30),
    BGM_SWITCH(MUS_RISING_FEAR),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:f46fa3d70c373e93998b5dd53610e0438013bdd17af9d0df2942f79e5c3e35ed@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:3cf7d30393c31c01fd6512e89a4b6d3268b9d7c6a10c5a7777f8ce288c358af4@@)),
    MSG_NPC(2, (@@STRING:cb50ea8774dfab3652d08365148fceabe1dfd48442e47e497d2931e6c713b3bd@@)),
    MSG_NPC(2, (@@STRING:12518bd1c05a0a808a0710982e5f97cc26faf074860917e49aff64e566c1b7ea@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(469),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:1e0ffaacfac229c7a35d15355ed8d6a7f07a7390be5e949809a64b5897a50be1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:f69c13e9654408895d0970f6a07852c04f3a799522cd0c27400f061d9c685915@@)),
    MSG_NPC(2, (@@STRING:59e3c60013569029e3fd8811ee1b629152c294a4fa7e34de5b15fe6688182c4e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7c832da3f3cfebdd3ee051772faf96abbbffb1f6fe8585338d9c468122476a0c@@)),
    VARIANT(/* == */  1, (@@STRING:34de1cbe2df12bc2176c109733eb5e23b73cf6faf5bcb148f6aa8d118d28f69f@@)),
    VARIANT_DEFAULT((@@STRING:7c832da3f3cfebdd3ee051772faf96abbbffb1f6fe8585338d9c468122476a0c@@)),
    VARIANT_DEFAULT((@@STRING:7ec799e5e0b7a797ac7f4c537ee5409cd42f12c42eb0b0f2b9ab847f331a2f22@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(120),
    WAIT(150),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(40),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:272da9c604f346694fb8ea34d426da22f0b2bb6e27a3371c88fc8f79a7b4ce04@@)),
    VARIANT_DEFAULT((@@STRING:784e3129aee4607a5d4fe3c9a3fa8be64d474c63bd4c1e5ed8cd6d3df2f66562@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8b85a34061db8bcfae255e1518f2e22de9d979e601371146e6be9baf04994073@@)),
    VARIANT(/* == */  3, (@@STRING:2ff447a8e88d6fb77178d593e524407dea7aa0ab29bdb8eb4e83fce15f185189@@)),
    VARIANT_DEFAULT((@@STRING:ac27027a1185f7b28ab408b9d5c90d603707e80a933de8b3d147e1c3c4e8d3d1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:dcfb2b472e45cb2590edfa184643317163a95596b5bb2d1a7a3f8e9b0d9c3bb6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:851cdb4a194d249153b1e115765b2666c607ab09d518852d6c3d0c01fc3a513c@@)),
    VARIANT_DEFAULT((@@STRING:725eb95dd33b7aaa935506e5dd6385c0b860c3abd67e819dc44bccb4bbd43bba@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a2e5f16211e1fe86660a63c5febf344bd7eb574aa1b30762121f833d68247476@@)),
    VARIANT_DEFAULT((@@STRING:6f2c8d27b0084309066117a56651c03e32a6e0d77d090562a7594d7d2820c99d@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};










static const struct ScriptCommand s_gs9_g36_s0_lives1_dlg0[] = { /* 0x81b3680 */
    DEBUGINFO_O(5269),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g36_s0_lives2_dlg0[] = { /* 0x81b37f0 */
    DEBUGINFO_O(5295),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g37_s0_station_sref_script[] = { /* 0x81b38a0 */
    DEBUGINFO_O(5309),
    SELECT_ENTITIES(-1, 0),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g37_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g37_s0_station_sref_script }; /* 0x81b38d0 */

static const struct ScriptCommand s_gs9_g37_s0_lives0_dlg0[] = { /* 0x81b38dc */
    DEBUGINFO_O(5317),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g37_s0_lives0_dlg2[] = { /* 0x81b390c */
    DEBUGINFO_O(5323),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    WAIT(1),
    MSG_NPC(1, (@@STRING:c34208851fbeced2ee00b1716559f544f59746d0e7fb3d44cde36710cb232b52@@)),
    MSG_NPC(1, (@@STRING:598b409e269727096ccf2c735f74ec0910f5541ed0792e9e68ef29ba1dfa052f@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g38_s0_station_sref_script[] = { /* 0x81b39f0 */
    DEBUGINFO_O(5333),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g38_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g38_s0_station_sref_script }; /* 0x81b3ac0 */

static const struct ScriptCommand s_gs9_g38_s0_lives0_dlg0[] = { /* 0x81b3acc */
    DEBUGINFO_O(5351),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d1d4ef6b9c8244f818bdec7804ae96ac91d789634c85d32821dc5453a99c48fe@@)),
    VARIANT_DEFAULT((@@STRING:42068cc03cd3f84d8943873ab1f34169691f049b67251a85ecf1c04d5e51a18f@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g38_s0_lives1_dlg0[] = { /* 0x81b3c24 */
    DEBUGINFO_O(5369),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g39_s0_station_sref_script[] = { /* 0x81b3c84 */
    DEBUGINFO_O(5378),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g39_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g39_s0_station_sref_script }; /* 0x81b3d24 */

static const struct ScriptCommand s_gs9_g39_s0_eff0_script[] = { /* 0x81b3d30 */
    DEBUGINFO_O(5393),
    CAMERA_END_PAN,
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x24,  0x0200,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0x1e,  0x0100,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g39_s0_lives0_dlg0[] = { /* 0x81b3de0 */
    DEBUGINFO_O(5407),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:7f75a2175c27cc4649e95bc3961cfd341cd4393e5002108b290c90f3579b06ca@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    ALERT_CUE(8),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:553657d419dccf84f439a042d324f64b432ad91cbecf57165a685f1234bdbc65@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fae0bc84b8a2e940acc9e2e17498bcce1691da5de65bf418747d9279d87221ed@@)),
    VARIANT_DEFAULT((@@STRING:b21ecb17c26fa5376fe1d2f4c301832f29dd575de1797a859e352c3a01b95946@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(7),
    MSG_NPC(3, (@@STRING:d10b904a50bbad35fc680bafaea1cb4c6609ba72154e9319d84e7e14ebe12231@@)),
    MSG_NPC(3, (@@STRING:c6332a4ce20e936e31b1580c26607d119ee5259de57f7d1658dfa1e211bde275@@)),
    MSG_NPC(3, (@@STRING:6cb859f01596a036b19a4db1e295b0c0f3817f5fbd4f113d3ab8fbcb1c719efd@@)),
    MSG_NPC(3, (@@STRING:050fc2578162208d96c128859903c1cab17e576acdbfd6577670f11f3977c782@@)),
    MSG_NPC(3, (@@STRING:72a32ac37f3e7105d2b38f52bbca9262be0adcb5d005869b175e1221889c7642@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c52e47392dd07d9d1e48992b0941b8831d5c3de4f3e195fc03e45b7882121c47@@)),
    VARIANT_DEFAULT((@@STRING:7104be77680e749a1938d8ad6acb95ab6c13c161615637c31cddced70afce3d3@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    BGM_FADEOUT(30),
    MSG_NPC(-1, (@@STRING:56dfcb65fee654d7d6dd90559093a64008cd168b672330a1bf2f9fc320e430dc@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    WAIT(30),
    FANFARE_PLAY2(466),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:9d8c58b3e034c041503861a833732ee737c371ceec7784b851ab36a342f96463@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(64),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:864f64a73d2db1792c79a45493bf446c6ad458964579a08b3a8d633309eb3e54@@)),
    MSG_NPC(4, (@@STRING:18f20d3542f21645538fa117d22fd963d7658d02482111659e8e82122ece9b4a@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:cf8ebea2cb0dcb2c6425286c01b57abe0c42aae945e8025c39130afb3900c344@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    PORTRAIT_REP(0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:71eb7bcbcb8576cc661a663b64417a4cea4defe43cd894facf5cfd50119b9e0f@@)),
    MSG_NPC(4, (@@STRING:265a1b272c09ddc3ff41cf0a6d167fc4c10b9d11e9cd225bdd35deb86e8f9c7b@@)),
    MSG_NPC(4, (@@STRING:48899f0fd040ba37d3c73edb0132643bb8f5106b32bec102da62a245559836da@@)),
    MSG_NPC(4, (@@STRING:7978c43a299d1ff12b09b9ab2824a8b22ffb0b5e3409ea081e9b53f29354e018@@)),
    MSG_NPC(4, (@@STRING:bb01dfbfe7cfe5279228c66c62e1c217fad7ca2240c640afb3e3ff29f0e16f76@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:f4967a2df66f4344bff0b9eb9f0ce5a228dac524fd76b87a87cad62ef11e4f48@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:329b083d21f81ae7d380485b7d7179bb05ffac20413ddbf2426325776f572f27@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:aa74dd77188afba54a6d250d22f878b73b0856f4d4414a31e4fd3c61b8e56fa3@@)),
    VARIANT(/* == */  3, (@@STRING:aa74dd77188afba54a6d250d22f878b73b0856f4d4414a31e4fd3c61b8e56fa3@@)),
    VARIANT_DEFAULT((@@STRING:aa74dd77188afba54a6d250d22f878b73b0856f4d4414a31e4fd3c61b8e56fa3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    WAIT(20),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:ec5ded20c22fc45313f204e709a911edaa0e2d667b8cbbce2ffd5a6207d94d75@@)),
    MSG_NPC(4, (@@STRING:3389173debb45e3d97b1c7064a37990923ffa2f363fa3f6850edddd997e24466@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:43bea018ccba4eb91ca926869d578cacba8842da4f5f1bb36badc985dc72a2dd@@)),
    VARIANT(/* == */  3, (@@STRING:55a421083f6e3dd62a12c1e4287f90c20fca2a53984431296bae98f38eceb93e@@)),
    VARIANT_DEFAULT((@@STRING:cb460c35399a1d64e36414a374d187ee4342ad858fd08fbf6e0ba23c0c26e171@@)),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    PORTRAIT_REP(0x0001, 0x00000000),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:c99e3ba8f6d5999b77ad7c78b9f83b69eb2bd53cf0cc3489e5c2a3086d01f077@@)),
    VARIANT_DEFAULT((@@STRING:8e3ef0f5d2fa46ff920817dbd6d62f45e5adf7268b2749cba96eae638574a8c4@@)),
    CHOICE(/* label */ 15, (@@STRING:f9044b8eb3471f723b43014f3d3249a0522d2b692f36efbd27c53e33ba2e7d6f@@)),
    CHOICE(/* label */ 16, (@@STRING:fbfce19b20289f58e3dc9921bcd0ef6db146aa9c8b7d0f77e6272b45204a0556@@)),
  LABEL(15), /* = 0x0f */
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:1bcf5f685d9b9689bf0afdb1bd82bde1800138e220e51ce353735500afae318a@@)),
    { 0x2e, 0x15,  0x0006, -0x00000002,  0x00000000, NULL },
    ASK3(FALSE, /*default*/ -1, /* speaker */ 6, (@@STRING:85f09077a4160270b319c89dc787c90d4c17e02d181d362fa288d5f18fe29c62@@)),
    CHOICE(/* label */ 18, (@@STRING:b71dd9e7b284102aa03e063b6d6352a34d3ed11fc28c41a6ae4eb5a6914b3f9c@@)),
    CHOICE(/* label */ 16, (@@STRING:fbfce19b20289f58e3dc9921bcd0ef6db146aa9c8b7d0f77e6272b45204a0556@@)),
  LABEL(18), /* = 0x12 */
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:035327dfa083e1237c5fce5a552a45017bfb6a0a346e2372bbe8cbd0da610dcb@@)),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 5, (@@STRING:ddbe9077349950b28a1f8bb57f33c1cb20f0140a7e0b93312301510be25499ba@@)),
    CHOICE(/* label */ 20, (@@STRING:4f9c0211f0f2fd457f0af917dbd559be7b2e63b4a0dd6b1eb15e3eaa570bcd12@@)),
    CHOICE(/* label */ 16, (@@STRING:fbfce19b20289f58e3dc9921bcd0ef6db146aa9c8b7d0f77e6272b45204a0556@@)),
  LABEL(20), /* = 0x14 */
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f96089f61222dfb198061d0ef676b9e1920c3b20e8caf73c40ee186c56705340@@)),
    VARIANT(/* == */  1, (@@STRING:8abcd21d63c39a90cd243fe784e0347ca978482fbe47b111244726c6598a596e@@)),
    VARIANT(/* == */  3, (@@STRING:f96089f61222dfb198061d0ef676b9e1920c3b20e8caf73c40ee186c56705340@@)),
    VARIANT(/* == */  3, (@@STRING:8abcd21d63c39a90cd243fe784e0347ca978482fbe47b111244726c6598a596e@@)),
    VARIANT_DEFAULT((@@STRING:f96089f61222dfb198061d0ef676b9e1920c3b20e8caf73c40ee186c56705340@@)),
    VARIANT_DEFAULT((@@STRING:8abcd21d63c39a90cd243fe784e0347ca978482fbe47b111244726c6598a596e@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(21),
  LABEL(16), /* = 0x10 */
    TEXTBOX_CLEAR,
    WAIT(1),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    FANFARE_PLAY2(457),
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    { 0x54, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1c01f260b5878d7d3e06dd462bdfd79c1a63fc1e2f06c76944d00aad8fa9ffb9@@)),
    VARIANT(/* == */  1, (@@STRING:f01c33e2ea705e894b6fe40d439dea75b4d9132a656623e24e9db8eab09d0e3d@@)),
    VARIANT(/* == */  3, (@@STRING:763dd3fbff6bdcce4b48b63011eb801a0d2701004b9af216ce9439fa7b2f1547@@)),
    VARIANT(/* == */  3, (@@STRING:694bc68865bb0183d8613d416ddd6fc2293f5d440fe032e041d5aa8f11940320@@)),
    VARIANT_DEFAULT((@@STRING:b3b2b67936b7384db811509967cbc6cf2a6789dcf87d276d5816c12ca55bc5b0@@)),
    VARIANT_DEFAULT((@@STRING:78d2fd9cce903f535dbb16aed3ec65b55b31f87bd8beba884f40f33ea493b288@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    SELECT_ANIMATION(2),
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f96089f61222dfb198061d0ef676b9e1920c3b20e8caf73c40ee186c56705340@@)),
    VARIANT(/* == */  1, (@@STRING:8abcd21d63c39a90cd243fe784e0347ca978482fbe47b111244726c6598a596e@@)),
    VARIANT(/* == */  3, (@@STRING:f96089f61222dfb198061d0ef676b9e1920c3b20e8caf73c40ee186c56705340@@)),
    VARIANT(/* == */  3, (@@STRING:8abcd21d63c39a90cd243fe784e0347ca978482fbe47b111244726c6598a596e@@)),
    VARIANT_DEFAULT((@@STRING:f96089f61222dfb198061d0ef676b9e1920c3b20e8caf73c40ee186c56705340@@)),
    VARIANT_DEFAULT((@@STRING:8abcd21d63c39a90cd243fe784e0347ca978482fbe47b111244726c6598a596e@@)),
    TEXTBOX_CLEAR,
  LABEL(21), /* = 0x15 */
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(120),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:14a7a76d2133aa001b14284344027c616bc9f27793b1ae5e9fb89d1f11882041@@)),
    MSG_NPC(4, (@@STRING:336de4a7c5ccdba7f066b48254955ed7d4867dded008cbdb668d89b442b18f87@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:d4e32d6eedfd9450bf915b3dbe1493bdbd31ae4d5c157a54cf8f96cad445237b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:998d12554828af6bbdf2c402b63e49d02df0a327418ebf001f6e192083bfea0c@@)),
    MSG_NPC(4, (@@STRING:0500d0c246e4b193a992e2bc43eb0e1b64a2e2922d0fc1f8e2492fcf2f681703@@)),
    MSG_NPC(4, (@@STRING:a00d90355d60bd72214b61d3a09e9dd954552b15305cb983a1eca5df4fad0d96@@)),
    MSG_NPC(4, (@@STRING:c649f361efbc05d7fbf538a4fa961d429b480cb65f4fecf20219868c1cbc8d21@@)),
    MSG_NPC(4, (@@STRING:ab5b68f0d376982a8b0a9006510c798056c3dc6f60dbe1899dc0388f8dfe5845@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ba1625c76aa8ae10526cf459ff6d69deadae2eb1fa27c4334332e31bdec53840@@)),
    VARIANT_DEFAULT((@@STRING:30aa50a222cd98bb448959bdd7c6b2af4d35f7e17641ab8e3c2b1be1bd796d9f@@)),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:439abf2c2f77589abd31dca018e9fbec1260fddaa4950484685ac6290c351d97@@)),
    VARIANT(/* == */  3, (@@STRING:72196b9ccdb4c228b81aa8ec630fe31fd1eb8eb295c0a534d768d4511cfa0215@@)),
    VARIANT_DEFAULT((@@STRING:d86fd8956bbb51448c45c9f960a5442a84c00cb380f128fdcc98ef6899eec78a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(3),
    HALT,
};





















static const struct ScriptCommand s_gs9_g39_s0_lives1_dlg0[] = { /* 0x81b56f0 */
    DEBUGINFO_O(5669),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    { 0x70, 0x00,  0x0200,  0x00000007,  0x00000000, NULL },
    WAIT(1),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 0),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    WAIT(16),
    ALERT_CUE(5),
    AWAIT_CUE(6),
  LABEL(0), /* = 0x00 */
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x70, 0x00,  0x0200,  0x00000007,  0x00000000, NULL },
    WAIT(1),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g39_s0_lives2_dlg0[] = { /* 0x81b59c0 */
    DEBUGINFO_O(5717),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(7),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g39_s0_lives3_dlg0[] = { /* 0x81b5b60 */
    DEBUGINFO_O(5746),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs9_g39_s0_lives4_dlg0[] = { /* 0x81b5c80 */
    DEBUGINFO_O(5767),
    SELECT_ANIMATION(5),
    WAIT(1),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    { 0x89, 0x58,  0x0100,  0x00000006,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs9_g39_s0_lives5_dlg0[] = { /* 0x81b5da0 */
    DEBUGINFO_O(5788),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    { 0x89, 0x58,  0x0100,  0x00000006,  0x00000000, NULL },
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(10),
    WALK_RELATIVE(256, -5, 0),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs9_g39_s0_lives6_dlg0[] = { /* 0x81b5ea0 */
    DEBUGINFO_O(5807),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    { 0x89, 0x58,  0x0100,  0x00000006,  0x00000000, NULL },
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(11),
    WALK_RELATIVE(256, -5, 0),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs9_g40_s0_station_sref_script[] = { /* 0x81b5f60 */
    DEBUGINFO_O(5822),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g40_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g40_s0_station_sref_script }; /* 0x81b6030 */

static const struct ScriptCommand s_gs9_g40_s0_lives0_dlg0[] = { /* 0x81b603c */
    DEBUGINFO_O(5840),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000055,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:abd04929d2a91c5f9eb182bcc23eddc0e32c050d08e3623162243ffd0e8891bf@@)),
    VARIANT_DEFAULT((@@STRING:df4048344c2bdeda267a4605c13075013450262738f167c4d724213ff05e54df@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9d17834a0a44c8d467b2e25453352932916d4c9c5073d1db03a4508200824063@@)),
    VARIANT(/* == */  1, (@@STRING:c2fb8d3aa9daea7bb8564b72656cbaf5bf5b89c77cb211f822642fdf986d64a5@@)),
    VARIANT(/* == */  1, (@@STRING:03c375c3d9fc15d1e2143d73f25e6d62aff0896af13e41722ee611e9497a68ce@@)),
    VARIANT(/* == */  1, (@@STRING:e1b5095611eae2429dfe114d9aab233928d535006b74b5952ff51c87fbce5a15@@)),
    VARIANT_DEFAULT((@@STRING:4862306b54a19bf05731c5b2e25257aea9bb10c1d16b701ec33caae33b902991@@)),
    VARIANT_DEFAULT((@@STRING:da8e5a9db4d9c74dd063b28cf3b126d5b1e82474c65837a62d9984bdd103bd5d@@)),
    VARIANT_DEFAULT((@@STRING:d8451abbde9d52d5af487e134b2c18673679c3fa3ab615b7dc1570e900eef6fa@@)),
    VARIANT_DEFAULT((@@STRING:4dcc2aa34be8240a3c9113bc5ba9153b8f8bd505cf02998c22b85ef942bc2c0b@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g40_s0_lives1_dlg0[] = { /* 0x81b64a8 */
    DEBUGINFO_O(5870),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x60,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g41_s0_station_sref_script[] = { /* 0x81b6528 */
    DEBUGINFO_O(5881),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g41_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g41_s0_station_sref_script }; /* 0x81b6548 */

static const struct ScriptCommand s_gs9_g42_s0_station_sref_script[] = { /* 0x81b6554 */
    DEBUGINFO_O(5888),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g42_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g42_s0_station_sref_script }; /* 0x81b6624 */

static const struct ScriptCommand s_gs9_g42_s0_lives0_dlg0[] = { /* 0x81b6630 */
    DEBUGINFO_O(5906),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4ef00cbf1be86462e6b0fd0b9957c2f4b84ecd386c4c2502d7335c4faa3d0667@@)),
    VARIANT_DEFAULT((@@STRING:13d48feec647aa7ca5ea09237ac5ff14bba9c5ea4c4e10f97a4e95a9345d46cc@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g42_s0_lives1_dlg0[] = { /* 0x81b6750 */
    DEBUGINFO_O(5924),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g43_s0_station_sref_script[] = { /* 0x81b67b0 */
    DEBUGINFO_O(5933),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g43_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g43_s0_station_sref_script }; /* 0x81b6880 */

static const struct ScriptCommand s_gs9_g43_s0_eff0_script[] = { /* 0x81b688c */
    DEBUGINFO_O(5951),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x28,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g43_s0_lives0_dlg0[] = { /* 0x81b690c */
    DEBUGINFO_O(5962),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9a93d378c19d917f0725f53b898df00750f1fea859e50ae109510afe79370cd8@@)),
    VARIANT(/* == */  1, (@@STRING:609219fac91f18edf50cca5130f4d50b53b68f08d5f4e568e10fda8b7a483943@@)),
    VARIANT(/* == */  1, (@@STRING:ac49a502b880336776cd9b0e87c9219b8d3f8e3f72c03ddcd5db99165ae8e5fe@@)),
    VARIANT(/* == */  1, (@@STRING:40335ffbc7b26760d97ffbce137ea2aa0edf982ff1dcc02778f06c7af9c9555b@@)),
    VARIANT_DEFAULT((@@STRING:9a93d378c19d917f0725f53b898df00750f1fea859e50ae109510afe79370cd8@@)),
    VARIANT_DEFAULT((@@STRING:67b156e369272b6c4f247769a41a605448ebb422cd3a8cdec0a312feb1c08757@@)),
    VARIANT_DEFAULT((@@STRING:f52d450389684c8345dc5e0ba7e1b51fc44db09e83dd86ce8d4bfd210e4c0b9a@@)),
    VARIANT_DEFAULT((@@STRING:3d0a5a11a0e8d54f306cc368b2cdb7664df1e080241ccd10534077373427abfa@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(4),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:e3b60e7eafb0ac7e8b43c66723038814667e54b8c70cddbea9631926730f1aa3@@)),
    VARIANT_DEFAULT((@@STRING:af4ad41b7b24c965b57d9e6d80834d7299e303e0e591342506c5a57b846e2a1c@@)),
    CHOICE(/* label */  1, (@@STRING:f43efd7e18c4dec0a49a3e6be3156501657294aeaa26654dd00de39ca501c899@@)),
    CHOICE(/* label */  2, (@@STRING:f4ad6df7cafc261acebfebde750aff56ebff2f5523ac726e44e811df188b139b@@)),
  LABEL(1), /* = 0x01 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    VARIANT_DEFAULT((@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    VARIANT(/* == */  1, (@@STRING:09af4af3a8bad938e864339bc47d7ce6f108908d6bbbd535df36605a68ca5f6a@@)),
    VARIANT(/* == */  3, (@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    VARIANT(/* == */  3, (@@STRING:e436102c7b173e40c59cb48de78020282f37c0d7f7413ec460c519be228c7664@@)),
    VARIANT_DEFAULT((@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    VARIANT_DEFAULT((@@STRING:eb226503eb8345c90387ba565599ce20457e6284925bc8b623a909c75a4e8e01@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:b0b18c414b1a61b2903668103554dab958d4e5a18f382756ccccfe041d117380@@)),
    VARIANT(/* == */  3, (@@STRING:37f0e13761d6cf6ff57b8595016e176108668a4c88f515a8c292bd8a32b7b5fc@@)),
    VARIANT_DEFAULT((@@STRING:a8739814440da9076cc43df26264c32933bc2fbc7c345b35d3686d4a4b614fd9@@)),
    CHOICE(/* label */  4, (@@STRING:a80c1deba16f4993dc2986bfd0bbdfe39bbda2772aadcb34b1e6129e3e66635c@@)),
    CHOICE(/* label */  4, (@@STRING:419b4aa93035d455ef7feec43f6812d1848d44e4196df13f3b49d11518c5ae21@@)),
  LABEL(3), /* = 0x03 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:62e472a6d5413cb1b8def824bc83e7f8082087934261eded97fedf669a1db9b4@@)),
    VARIANT_DEFAULT((@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    CHOICE(/* label */  4, (@@STRING:a80c1deba16f4993dc2986bfd0bbdfe39bbda2772aadcb34b1e6129e3e66635c@@)),
    CHOICE(/* label */  4, (@@STRING:419b4aa93035d455ef7feec43f6812d1848d44e4196df13f3b49d11518c5ae21@@)),
  LABEL(4), /* = 0x04 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  3, (@@STRING:9811dd614a8eb0bb9f1610927d2a2473d55db821ed04f88b4e8b1876dafe454e@@)),
    VARIANT_DEFAULT((@@STRING:9811dd614a8eb0bb9f1610927d2a2473d55db821ed04f88b4e8b1876dafe454e@@)),
    CHOICE(/* label */  6, (@@STRING:62ec7ad499e1e3967424d8233c2a541476b7523a7f45015067bdda3a7b4ec6ec@@)),
    CHOICE(/* label */  7, (@@STRING:5aa7786a3d9ba5a0d19b9fd8618c36fc836b01f6fde9354b6eda29c46158d266@@)),
  LABEL(6), /* = 0x06 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c718053845631909ee6bb12a8cd7f1c6d22ab0c887da6989f01864ff4ca2208d@@)),
    VARIANT(/* == */  1, (@@STRING:25e36254b0ac6900c268d9a66a54dd0ccb713383c0f93ca689d877dbc1cd8fb1@@)),
    VARIANT(/* == */  1, (@@STRING:bbb00452e3d9807c68e4dd8f3c7132a05178e7ee69e8cf40b6584012b3a64896@@)),
    VARIANT(/* == */  3, (@@STRING:1f8a38020620ba22dd467d53337faa9f4a794a2ec68213e5d77fc3d96e035ba3@@)),
    VARIANT(/* == */  3, (@@STRING:471bbfde7138042253837e508bad4582db855800e0fd6751fc69fc488f11f9ee@@)),
    VARIANT(/* == */  3, (@@STRING:0634327cc2735fa18b5a08535ccb6af08702720fa420d0ac072a3095062f332b@@)),
    VARIANT_DEFAULT((@@STRING:781ca0b4615e2b03c62e1e12cbd2077c652c706d7d9a0f7020781c678cbc7384@@)),
    VARIANT_DEFAULT((@@STRING:25e36254b0ac6900c268d9a66a54dd0ccb713383c0f93ca689d877dbc1cd8fb1@@)),
    VARIANT_DEFAULT((@@STRING:0634327cc2735fa18b5a08535ccb6af08702720fa420d0ac072a3095062f332b@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8372a54ac7bf1a7d0e33d09c8d8ac8951997ee094a5f5efb30fa5f1015c5d7a5@@)),
    VARIANT(/* == */  3, (@@STRING:8372a54ac7bf1a7d0e33d09c8d8ac8951997ee094a5f5efb30fa5f1015c5d7a5@@)),
    VARIANT_DEFAULT((@@STRING:8372a54ac7bf1a7d0e33d09c8d8ac8951997ee094a5f5efb30fa5f1015c5d7a5@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fa7432a90c026243437a09741853def4624834e4e2e75bef3647bd747a70c3ed@@)),
    VARIANT(/* == */  1, (@@STRING:bbb00452e3d9807c68e4dd8f3c7132a05178e7ee69e8cf40b6584012b3a64896@@)),
    VARIANT(/* == */  3, (@@STRING:fa7432a90c026243437a09741853def4624834e4e2e75bef3647bd747a70c3ed@@)),
    VARIANT(/* == */  3, (@@STRING:0634327cc2735fa18b5a08535ccb6af08702720fa420d0ac072a3095062f332b@@)),
    VARIANT_DEFAULT((@@STRING:fa7432a90c026243437a09741853def4624834e4e2e75bef3647bd747a70c3ed@@)),
    VARIANT_DEFAULT((@@STRING:0634327cc2735fa18b5a08535ccb6af08702720fa420d0ac072a3095062f332b@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8372a54ac7bf1a7d0e33d09c8d8ac8951997ee094a5f5efb30fa5f1015c5d7a5@@)),
    VARIANT(/* == */  3, (@@STRING:8372a54ac7bf1a7d0e33d09c8d8ac8951997ee094a5f5efb30fa5f1015c5d7a5@@)),
    VARIANT_DEFAULT((@@STRING:8372a54ac7bf1a7d0e33d09c8d8ac8951997ee094a5f5efb30fa5f1015c5d7a5@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(8),
  LABEL(8), /* = 0x08 */
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:0a7fc14b18631aa41d7d1209a925da210d164bf38f00b5356861f03589a13eaf@@)),
    VARIANT_DEFAULT((@@STRING:0a7fc14b18631aa41d7d1209a925da210d164bf38f00b5356861f03589a13eaf@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};



static const struct ScriptCommand s_gs9_g43_s0_lives1_dlg0[] = { /* 0x81b7674 */
    DEBUGINFO_O(6081),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 46),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(153, 47),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(30),
    FANFARE_STOP2(463),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g44_s0_station_sref_script[] = { /* 0x81b77e4 */
    DEBUGINFO_O(6107),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g44_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g44_s0_station_sref_script }; /* 0x81b78b4 */

static const struct ScriptCommand s_gs9_g44_s0_lives0_dlg0[] = { /* 0x81b78c0 */
    DEBUGINFO_O(6125),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8eb9e8d220cc31968e2322b7a2dc100cba522b0674d075dcb238f82b453637e4@@)),
    VARIANT(/* == */  1, (@@STRING:8c28e9075498bfed4799cc9915b77aa600fff5e0d4b8588b54f71e2710642ff6@@)),
    VARIANT_DEFAULT((@@STRING:7f79040e20662abfbc7f7fc7d381620801f888d5046cb6379d93d331f5dd8529@@)),
    VARIANT_DEFAULT((@@STRING:a965c2d7585cc3cb2785bc4452ef163c14cbc343f56a060f6d51365d5ce9eb14@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g44_s0_lives1_dlg0[] = { /* 0x81b7a14 */
    DEBUGINFO_O(6144),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g45_s0_station_sref_script[] = { /* 0x81b7a74 */
    DEBUGINFO_O(6153),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g45_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g45_s0_station_sref_script }; /* 0x81b7b44 */

static const struct ScriptCommand s_gs9_g45_s0_lives0_dlg0[] = { /* 0x81b7b50 */
    DEBUGINFO_O(6171),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000061,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7f79040e20662abfbc7f7fc7d381620801f888d5046cb6379d93d331f5dd8529@@)),
    VARIANT(/* == */  1, (@@STRING:75b8a55bd741d221b1157511183b5c538240a7c03a8e4e9e5090e34a7c3aef49@@)),
    VARIANT_DEFAULT((@@STRING:7f79040e20662abfbc7f7fc7d381620801f888d5046cb6379d93d331f5dd8529@@)),
    VARIANT_DEFAULT((@@STRING:b551d9d53973e9be4307399e96f4f4dac680bbe46bc4b1920bdb5afc52a92d78@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:ef6d301ca457e9ed3916befa1e0393b9343ac1644598e7d6080fbd326cccf957@@)),
    VARIANT_DEFAULT((@@STRING:61717d9c6923f88d92d952bb0631b4b2f06b6136e62feaf6c4a266bb993224d5@@)),
    CHOICE(/* label */  0, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  1, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(0), /* = 0x00 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7dd6a953a5ad83debe46ddde262026cba77d2781d97ae8a22491f1b2cd922431@@)),
    VARIANT(/* == */  1, (@@STRING:a6ff4b4718bd7a62aba007245852d2285913d47d9987a155808fa8f35814aa7b@@)),
    VARIANT(/* == */  1, (@@STRING:c39bb5e1942697950287b1f235249fff7d38f8f42500f437d203a347f3244739@@)),
    VARIANT(/* == */  1, (@@STRING:17d46bee1cd13d14c83034ef404be206209d8cf6864abff0fb88c3e2b1facf76@@)),
    VARIANT_DEFAULT((@@STRING:b3d6a0719fb9b52d9b7567504de081e716aab8acbe7569fdf195d615d694bec1@@)),
    VARIANT_DEFAULT((@@STRING:da54bc88c04dfcaf10a4f6aa57ae00428eaf0e685dc4449b99b27e9adcbdd36d@@)),
    VARIANT_DEFAULT((@@STRING:8a983837d9940366e04b917c67542d3075a14ec208bee4e86aa4b1ac790b6e5f@@)),
    VARIANT_DEFAULT((@@STRING:68f694de565defacd01b8502edead859d156a164fc1d9edaf2e4f79c661d7b86@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:90bf1ad848a05d779df20826e46dd7edd3f0dcbcfe9f341c2f0ef01104a33509@@)),
    VARIANT(/* == */  1, (@@STRING:009921da70a7a6d2c2881a0e61ae4180ea0ed2852bcc2fd4e06105a6a165e6b3@@)),
    VARIANT(/* == */  1, (@@STRING:31453967f62aa95eb25d53a14743a2b5f3504b0c6deda9357694061c03a19153@@)),
    VARIANT(/* == */  1, (@@STRING:8613b55eccf0de3d3cd83b61fd86dfab9c3cef4d5a0e3a638609b4b904e414e9@@)),
    VARIANT_DEFAULT((@@STRING:0778c15537e460c8bae0f4137572c32726a86a5522d428154aaba0036e447fd7@@)),
    VARIANT_DEFAULT((@@STRING:f0f52fac764afe31642bd62df2a7d1def731809e14a669982cf27f9e5c3104ce@@)),
    VARIANT_DEFAULT((@@STRING:31453967f62aa95eb25d53a14743a2b5f3504b0c6deda9357694061c03a19153@@)),
    VARIANT_DEFAULT((@@STRING:8613b55eccf0de3d3cd83b61fd86dfab9c3cef4d5a0e3a638609b4b904e414e9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ab7e6a834d5d1bca82a0f0e6dce9ac5f68d7861dcba1f575a8225911a996a923@@)),
    VARIANT(/* == */  1, (@@STRING:689f45511e991660bb1078f40ebb3048470ab91a07777f264e5b7845a30d69da@@)),
    VARIANT(/* == */  1, (@@STRING:4a925b2320998720152899a2ecdc6b78b9d9d5d25df0e90d96c1ff124f759f4d@@)),
    VARIANT(/* == */  1, (@@STRING:5f86786db6a877226ba650f6c33404cb53ad5336289ec3280141abfc8a029f49@@)),
    VARIANT(/* == */  3, (@@STRING:d1b7d5bee3891ec64e2523b725770fde91fb356e4c0e32fd8cf0dd2fcc2e2725@@)),
    VARIANT(/* == */  3, (@@STRING:dabec45085c35c8add6da18640475eedeb384160741e50a34f8aff838f4d3d78@@)),
    VARIANT(/* == */  3, (@@STRING:adebcc448d6bc0c7a8430aa5d537dc2350d5873e99d4b2e371898cde9c879031@@)),
    VARIANT(/* == */  3, (@@STRING:9985618639d6da4b48d5c0a64be7cbab1b302ae416895396e686f924d866f425@@)),
    VARIANT_DEFAULT((@@STRING:ab7e6a834d5d1bca82a0f0e6dce9ac5f68d7861dcba1f575a8225911a996a923@@)),
    VARIANT_DEFAULT((@@STRING:3736812bbceadbf37505e2507af2f3f627cd55f424b0a8aa20cbe0bc16ed905b@@)),
    VARIANT_DEFAULT((@@STRING:4a925b2320998720152899a2ecdc6b78b9d9d5d25df0e90d96c1ff124f759f4d@@)),
    VARIANT_DEFAULT((@@STRING:b0ef4fe145f968cbd0cf2ad1d6d3d8583c02bad0a72e7f677d87b1a6e05ff141@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:54a02f6e790585c7ee30452a15ba50fb3fd525d5cd1eca4f3903e883296ecac0@@)),
    VARIANT_DEFAULT((@@STRING:54a02f6e790585c7ee30452a15ba50fb3fd525d5cd1eca4f3903e883296ecac0@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6d5f0d84ed85a24c4afc10fe3a156e00f4c0b36ef2a38afc2fd47274bc759221@@)),
    VARIANT(/* == */  1, (@@STRING:6435df5ca8cae9c0bbb7ce27153b841bd8368c70b62ec745c4e4679f8f42202e@@)),
    VARIANT_DEFAULT((@@STRING:0c96316528c514f796203a568b082f8aaa9c475b02d32faa0cd05fb171c4fb3a@@)),
    VARIANT_DEFAULT((@@STRING:6aa83b92d001a9f0cc4c24dd3ed50376ab6661a2a76e38f4ee7ed0d175ead4dc@@)),
    TEXTBOX_CLEAR,
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:34805c869bde772564f1b36a3ec774ad8875a9c9cc79eb8ccb2a5460374cb904@@)),
    CHOICE(/* label */  3, (@@STRING:cecc0cea27c4d378016d22d39bb55216104ac25654e58e0cd84bbb0bfc75ecd0@@)),
    CHOICE(/* label */  4, (@@STRING:eac6bd92f6aa75b04a52f138fef69168afbaad0a1d8bc419b383b51f44310cb2@@)),
    CLEAR_ARRAY(EVENT_LOCAL),
  LABEL(3), /* = 0x03 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e27901ed681eeadefb988b7e06594f2ea1db73a7ca9610ca4dcf52036c6fb808@@)),
    VARIANT_DEFAULT((@@STRING:e27901ed681eeadefb988b7e06594f2ea1db73a7ca9610ca4dcf52036c6fb808@@)),
    TEXTBOX_CLEAR,
    CLEAR_ARRAY(EVENT_LOCAL),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:97c7d2a4d775d41e28ce44b45368a56ce9c92a6cf01548038f30c12be94a289c@@)),
    VARIANT_DEFAULT((@@STRING:995b96912cd0383482c203102a615bbe665d994393612440bc32d06cf2bc8e4d@@)),
    CHOICE(/* label */  5, (@@STRING:af6e83dfe646a6cd5857ee46633fcf3f6fc40766547b8cffdc3d5030d4e4b09e@@)),
    CHOICE(/* label */  6, (@@STRING:170e17e820bfb739ae6b44ff6acc2ef2d6d67528e5a3bb2d98096d07558f9b30@@)),
  LABEL(5), /* = 0x05 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    FANFARE_PLAY2(473),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    WAIT(100),
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:68c488298f2f3a6f23ed2af43eded4caebde6cff900060d7157a18a4e64ad978@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7d091ce74e084b75e54871284700d46f624ddd39814b000d81e506b819544ea4@@)),
    VARIANT_DEFAULT((@@STRING:b64ecdfb177195f2cd3809862e7f988b60588207efbea22a9a6de0502cbf14a1@@)),
    TEXTBOX_CLEAR,
    CLEAR_ARRAY(EVENT_LOCAL),
    SELECT_ANIMATION(2),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:1af0a662451cb1b70222cc15020f6df54a273b2cdee603d08a4e66225e9b4f2a@@)),
    VARIANT_DEFAULT((@@STRING:de4116474d4c98deb75f07cc6d0e2a231024c98cf8185799e5fe960879ea6efa@@)),
    CHOICE(/* label */  7, (@@STRING:7a5d4758c2b370265bad38ddb773c00ca8cbe63786dc1d1dfa95c1549765b166@@)),
    CHOICE(/* label */  6, (@@STRING:170e17e820bfb739ae6b44ff6acc2ef2d6d67528e5a3bb2d98096d07558f9b30@@)),
  LABEL(7), /* = 0x07 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:0271b66c670004365aa793b5a06be6767423483fd3156ea643882dfad594831e@@)),
    VARIANT_DEFAULT((@@STRING:4429738b8658445c2fc621eb6a29a008d0736f3f911b6130fe420390b1fbbafd@@)),
    TEXTBOX_CLEAR,
    CLEAR_ARRAY(EVENT_LOCAL),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:1ab04d74cc0f675cd57968526c8bf84922ebd27d9147abf56acc416108536004@@)),
    VARIANT_DEFAULT((@@STRING:8bc0ff834e89cc6d98b70aefd722ef208c4b2706980df502364ca2c9813e9c5c@@)),
    CHOICE(/* label */  8, (@@STRING:fccd008a79fbc4d59de908b499fd44db1c493498d25efb47a0facfea9408b24d@@)),
    CHOICE(/* label */  9, (@@STRING:dfdfd5f0b2c6c347daaf66460c3212166a1946424565a76ffb9c26c7bc73da16@@)),
  LABEL(8), /* = 0x08 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:581ec3537cac5a5d3c5079999590183939710f7d8b6ecb71c29b0677e4d2878a@@)),
    VARIANT(/* == */  3, (@@STRING:c13fc9a62fc6bed10f9c06dec30608b4b3373b1eeb9faca7eaddb63c5574c516@@)),
    VARIANT_DEFAULT((@@STRING:6109fcce7f2b2aa4eebdb38bcc87fb3a3826e4e736f22dbfe025cdab499ca1dc@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    SELECT_LIVES(-1, 1),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:59c5f5cfa031fd226ff2ce499f2e156069f38649728b07c0eabb9b43787fc145@@)),
    VARIANT(/* == */  1, (@@STRING:90fde82fb61bc6afd329976d391252b2f48ca7f81c800f707b3834cf243ac4c3@@)),
    VARIANT(/* == */  3, (@@STRING:46588057329bcb569bf3558c3f451d5957677eec3a0f00479ec47855238afb70@@)),
    VARIANT(/* == */  3, (@@STRING:5dc2d06f8a70c236c817f893d7c6a4d952b4b0919adeab9625eea97d8e1ec0e0@@)),
    VARIANT_DEFAULT((@@STRING:46588057329bcb569bf3558c3f451d5957677eec3a0f00479ec47855238afb70@@)),
    VARIANT_DEFAULT((@@STRING:db6773f9e085232009de5a10ec7da20bb8ce94c78a84e94c3bf7d472f10b6fbf@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:c0fd07dcdcacbca59dd48433fd49f7dd5acbffe94e39f18c5234751e6e312de2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(90),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000003),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    CHOICE(/* label */ 10, (@@STRING:b243ad587e839fedf3637494b8f9c6514fd3143524b0e575de1eb39554a25286@@)),
    CHOICE(/* label */ 10, (@@STRING:cc3a1b091aca3d836e3d10ec663e8abd08bf2f0d42cc4caf900555ec38474f44@@)),
  LABEL(10), /* = 0x0a */
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:99fe75d72e545571f8710de8bf85e6e94996029324e126bea21cf64d741145cc@@)),
    VARIANT(/* == */  1, (@@STRING:cc3ecc84d66010a3457742795ccd458a36cd26ae25b9126059a94380f368830c@@)),
    VARIANT_DEFAULT((@@STRING:b68781412c274666178e4f5ccb53ef16fc4d109e23dd44813bd59e7f9eff4874@@)),
    VARIANT_DEFAULT((@@STRING:e5ad39ee906ae0fde5bcee57d3268c558cbf0bde7659b8a30df93b36d1b46fbc@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:5eee43fe808f49b7c04fd1b84661a2c7b4d0bc646c1205ede38261369770ddc5@@)),
    VARIANT_DEFAULT((@@STRING:57b8d944707c96d9e2a669f61004a56b4c6942f9940c49b4ca9411f831f121d9@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(11),
  LABEL(9), /* = 0x09 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    SELECT_ANIMATION(41),
    WAIT(100),
    SELECT_ANIMATION(2),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:30e9ee900d439565fba82f7535c7613920758dec7dcc1f3bec380f75b8f2c009@@)),
    VARIANT(/* == */  1, (@@STRING:f2eed47e4ac46463ae0a77ec9c6336dfee949b4fed2f31580a2965c397bb7531@@)),
    VARIANT_DEFAULT((@@STRING:9db8a5fb497a142f0e50456593c97837227184f817c9843eda8ceb7efdf6842c@@)),
    VARIANT_DEFAULT((@@STRING:4ac36feefbf45f7e15d2e3fe4015814699668222a20020d0a178ea99b34fbf88@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:5eee43fe808f49b7c04fd1b84661a2c7b4d0bc646c1205ede38261369770ddc5@@)),
    VARIANT_DEFAULT((@@STRING:57b8d944707c96d9e2a669f61004a56b4c6942f9940c49b4ca9411f831f121d9@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(11),
  LABEL(6), /* = 0x06 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1ea5c3b4894be2af0764d336d96375f675788359e54282fc32eedc5235fe628d@@)),
    VARIANT(/* == */  1, (@@STRING:2f91ff74c579e361a4c30d541f4956d528a44a1383884ca60964000be070ad1e@@)),
    VARIANT_DEFAULT((@@STRING:4c8ba7c1585d345dbc71a6297126afd07d9baf854aed073135a24a21f233257c@@)),
    VARIANT_DEFAULT((@@STRING:f6cb2fd4f2a3785ed8ca1edd2199bf6079ca9d3998bbae2ee2c17818b964b53f@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:66a0ac6308c06e6f8388f3456ab4dcc5f14cefc60295125c7bafaf3495a61cb7@@)),
    VARIANT_DEFAULT((@@STRING:efc01cf24a41b2a12928b19597b4f098b125be05c13e96df0d5d3f1084431d9e@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(11),
  LABEL(4), /* = 0x04 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7d532f9547a42d7552c17b77312ff57bf4e29d5b5400b7955502e9ef0b124ced@@)),
    VARIANT_DEFAULT((@@STRING:b709f95bedabdace1fa8a8b36c2e07f847c0e85d48335818348bb1c0a5d8b36c@@)),
    TEXTBOX_CLEAR,
  LABEL(11), /* = 0x0b */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4bf683403d930ee21b9cfd97707df7096ca5f1b13681d12e686ee4c90a02fd83@@)),
    VARIANT(/* == */  1, (@@STRING:3d6b29fab7b2ea456d9071246c84653c54c88cd085405b0ec6540f6b1325d4d5@@)),
    VARIANT_DEFAULT((@@STRING:e5e6d18097e8eddc059e9752e2ce8487702280dbca09c1d959e5aa62142fc699@@)),
    VARIANT_DEFAULT((@@STRING:77f3af6f14ea0c4c97427b8f21606149e5ea77c9435627928cfd0ea637f6e4b2@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e23d48ffea288ae1e4290823609082c5ad388a8791377bda5f8cfb518848f6f7@@)),
    VARIANT(/* == */  1, (@@STRING:8a2edfeec9c9fb1c178f921c68a00611d434ec0508aeb55131d9255cf6c813ee@@)),
    VARIANT(/* == */  3, (@@STRING:2569a7508899d7ff76f2c93023f037cdf727319d0182a9cdae05cdff76ec5bff@@)),
    VARIANT(/* == */  3, (@@STRING:8a2edfeec9c9fb1c178f921c68a00611d434ec0508aeb55131d9255cf6c813ee@@)),
    VARIANT_DEFAULT((@@STRING:e23d48ffea288ae1e4290823609082c5ad388a8791377bda5f8cfb518848f6f7@@)),
    VARIANT_DEFAULT((@@STRING:8a2edfeec9c9fb1c178f921c68a00611d434ec0508aeb55131d9255cf6c813ee@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g45_s0_lives1_dlg0[] = { /* 0x81b9ee8 */
    DEBUGINFO_O(6460),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 46),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 0),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
  LABEL(0), /* = 0x00 */
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 2),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 4),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 4),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(470),
    { 0x54, 0x00,  0x002c,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    FANFARE_PLAY2(471),
    CALL_SCRIPT(ANGRY_START_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_END_FUNC),
    AWAIT_CUE(6),
    JUMP_LABEL(2),
  LABEL(5), /* = 0x05 */
    FANFARE_PLAY2(471),
    CALL_SCRIPT(ANGRY_START_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_END_FUNC),
    AWAIT_CUE(6),
  LABEL(4), /* = 0x04 */
    FANFARE_PLAY2(471),
    CALL_SCRIPT(ANGRY_START_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_END_FUNC),
    AWAIT_CUE(6),
  LABEL(2), /* = 0x02 */
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};




static const struct ScriptCommand s_gs9_g45_s1_lives0_dlg0[] = { /* 0x81ba378 */
    DEBUGINFO_O(6539),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x00000030,  0x00000000, NULL },
    MSG_OVERHEARD((@@STRING:cfc125f2d034fc6d16a9a04dcb21d0624d3414017d9e006ea3df652cbe458ea6@@)),
    FANFARE_PLAY2(451),
    WALK_GRID(256, 3),
    ALERT_CUE(6),
    ALERT_CUE(5),
    TEXTBOX_CLEAR,
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    FANFARE_STOP2(451),
    ALERT_CUE(6),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(30),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(451),
    SELECT_ANIMATION(2),
    { 0x68, 0x00,  0x0100,  0x00000030,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(6),
    WALK_GRID(256, 4),
    FANFARE_STOP2(451),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g46_s0_station_sref_script[] = { /* 0x81ba5b8 */
    DEBUGINFO_O(6578),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(90),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    RET,
};

static const ScriptRef s_gs9_g46_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g46_s0_station_sref_script }; /* 0x81ba658 */

static const struct ScriptCommand s_gs9_g46_s0_lives0_dlg0[] = { /* 0x81ba664 */
    DEBUGINFO_O(6593),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000061,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(45),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7564a3740727b4e499d156fc9c9fd84597bcd71deb595acc1dc600c69c64892d@@)),
    VARIANT(/* == */  1, (@@STRING:893fa16c870dec258e083d9a3e49954e0c41c0ff60893b2078cee982e5f027d1@@)),
    VARIANT(/* == */  1, (@@STRING:733ec0135f65ace4fbec497efb51a1ee45a485a2411f0e710cbfb0c4959ac2b3@@)),
    VARIANT(/* == */  1, (@@STRING:bb13b248fba898ff20c6055501f68ecca4e6f570df001f0b975f4e5d8adea2cf@@)),
    VARIANT(/* == */  1, (@@STRING:bc21918e212c42068fea352cdccad5b18a0f376fbee9ff50a9e79145f73bb844@@)),
    VARIANT_DEFAULT((@@STRING:7564a3740727b4e499d156fc9c9fd84597bcd71deb595acc1dc600c69c64892d@@)),
    VARIANT_DEFAULT((@@STRING:c39b1c53a6035b2b4a5228f40aed0763f8f6832952fdc8f9b9b57c1a93faae7b@@)),
    VARIANT_DEFAULT((@@STRING:733ec0135f65ace4fbec497efb51a1ee45a485a2411f0e710cbfb0c4959ac2b3@@)),
    VARIANT_DEFAULT((@@STRING:a7747c8d04f47ef4b151e33d76354554403605a4c17c69b99a1e34a63f9a108c@@)),
    VARIANT_DEFAULT((@@STRING:bc21918e212c42068fea352cdccad5b18a0f376fbee9ff50a9e79145f73bb844@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(160),
    ALERT_CUE(6),
    WAIT(10),
    ROTATE_TO(12, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(5),
    WAIT(45),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0001, 0x00000007),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:dfe5703e5834a74e5f707a330ce65d750aee5e0d9e54b09b3c1479122a882bd2@@)),
    VARIANT(/* == */  3, (@@STRING:dfe5703e5834a74e5f707a330ce65d750aee5e0d9e54b09b3c1479122a882bd2@@)),
    VARIANT_DEFAULT((@@STRING:dfe5703e5834a74e5f707a330ce65d750aee5e0d9e54b09b3c1479122a882bd2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e4e04026eb74356aa058efec793fdf107e2ec957b3058b15e86bdae189a871d7@@)),
    VARIANT(/* == */  3, (@@STRING:e4e04026eb74356aa058efec793fdf107e2ec957b3058b15e86bdae189a871d7@@)),
    VARIANT_DEFAULT((@@STRING:e4e04026eb74356aa058efec793fdf107e2ec957b3058b15e86bdae189a871d7@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:71ee6fcc6be375c7cffba78cc6f64249753f75599ccd935d7abd8ccdd5217b95@@)),
    VARIANT(/* == */  1, (@@STRING:ca449fc3b0eed7072dee649e3a28182c3582d3665c7923a630abace0cd2d5ca7@@)),
    VARIANT(/* == */  1, (@@STRING:31247d3043c0e1dc0047d1a60e98fe5f72c0a24825a192fd64c75d2887c422fd@@)),
    VARIANT(/* == */  1, (@@STRING:d9011ccfef6e51b7dccac17f901f3cdeeb268d807fae4d56e50ad6da2cb8d441@@)),
    VARIANT(/* == */  3, (@@STRING:e12e5b0014429a4577f5e426aa462648e412ae7782f00f7bebef51ec27bd9f65@@)),
    VARIANT(/* == */  3, (@@STRING:b8bdc930f36c3a3baeca27f8ad47f91305f54d6fc280a25da91d27c787238212@@)),
    VARIANT(/* == */  3, (@@STRING:6f40718efb3d0b1ac3de922497215d4395334cf14311e53351822d051ac3d9af@@)),
    VARIANT(/* == */  3, (@@STRING:49d75705e158d03d0c98a047e937c4d58ab4b3837878433099896ddf2bf54618@@)),
    VARIANT_DEFAULT((@@STRING:3ca0b9073ce607669ab9bbeaa4380b5c361a4297173a5660466b2b4b1250f09f@@)),
    VARIANT_DEFAULT((@@STRING:b8bdc930f36c3a3baeca27f8ad47f91305f54d6fc280a25da91d27c787238212@@)),
    VARIANT_DEFAULT((@@STRING:21b8289f9e7030b3b46558310264b09338865ef04b58c7e2bc76521402ff764f@@)),
    VARIANT_DEFAULT((@@STRING:e4ab61ab7de5c2bf1f6b6867966b5f64ee9273dbc876f55c9075f74ea07c8414@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7d1781d109d236572cbe2e4ec5cc1a5922bca000aa00cf2b8bf5df3bb7b83420@@)),
    VARIANT(/* == */  3, (@@STRING:2bd60aca0739e6c4d8f97ff1647bc05a801a41247fa692423e978adc30b978bb@@)),
    VARIANT_DEFAULT((@@STRING:d828ac9d2d3a3b548901a1f5be3805e1f96345a06839b0fe72d6efa9913272ea@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(150),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs9_g46_s0_lives1_dlg0[] = { /* 0x81baf28 */
    DEBUGINFO_O(6667),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(128, 48),
    ALERT_CUE(5),
    WALK_GRID(153, 49),
    WAIT(90),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(3),
    { 0x70, 0x00,  0x0200,  0x00000004,  0x00000000, NULL },
    WAIT(1),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(256, 50),
    HALT,
};

static const struct ScriptCommand s_gs9_g47_s0_station_sref_script[] = { /* 0x81bb078 */
    DEBUGINFO_O(6691),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g47_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g47_s0_station_sref_script }; /* 0x81bb148 */

static const struct ScriptCommand s_gs9_g47_s0_lives0_dlg0[] = { /* 0x81bb154 */
    DEBUGINFO_O(6709),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000052,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_NPC(1, (@@STRING:8eb9e8d220cc31968e2322b7a2dc100cba522b0674d075dcb238f82b453637e4@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2348615f866c42667231ba47f5a48cbb28d2f22c48e6aa16774f71ad771891fa@@)),
    VARIANT_DEFAULT((@@STRING:2ba206e17150f65e46f331c66faa166e801cad2b121c5a30c3b3d2d7123fce3f@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e18a21a0b0462b06acbb6de8f13980b490ca57f1e1f3d5d5c412a97d754d1a12@@)),
    VARIANT_DEFAULT((@@STRING:1c31cb471d2be9b4ca3468ae5ec2c0d20d4de92ca76ff89664bb185f1271251f@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:a18be7aba744477aa5f43598bf5806289729c71fecfd2427ff1dbccd14bd657f@@)),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:fe4072536decf0a138dd3d91cc26ba9650b26e4fcbd6ea5e6581fc77466912b8@@)),
    MSG_NPC(1, (@@STRING:4b146190908a37f044921878aafe23dc388807b778d18b4c9ee0e910dad636e1@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g47_s0_lives1_dlg0[] = { /* 0x81bb4d0 */
    DEBUGINFO_O(6747),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000060,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(15),
    WALK_RELATIVE(256, 0, -96),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g48_s0_station_sref_script[] = { /* 0x81bb5b0 */
    DEBUGINFO_O(6764),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g48_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g48_s0_station_sref_script }; /* 0x81bb620 */

static const struct ScriptCommand s_gs9_g48_s0_eff0_script[] = { /* 0x81bb62c */
    DEBUGINFO_O(6776),
    CAMERA_INIT_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    WALK_RELATIVE(179, 20, 0),
    AWAIT_CUE(4),
    WALK_RELATIVE(128, -24, 0),
    CAMERA_END_PAN,
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g48_s0_lives0_dlg0[] = { /* 0x81bb6cc */
    DEBUGINFO_O(6789),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0006,  0x00000063,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0007,  0x00000052,  0x00000000, NULL },
    { 0x59, 0x00,  0x00a0,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WALK_RELATIVE(768, -160, 0),
    AWAIT_CUE(5),
    BGM_FADEOUT(150),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:78fc8dbd04e4332fdabfcb3b216039848824ccdd93656972ee3908c1b1d8203a@@)),
    SELECT_ANIMATION(2),
    CMD_UNK_93(5, DIR_TRANS_SPINLEFT1, 34),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:a4284793b26e3bbccdc6c78983ce542ccf08d4eaaba582d6ac3372620b600351@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9e829c4c783d5677f113e3f4a99456a44b5ddaa6dfb0c8c3bff23551060d661f@@)),
    VARIANT_DEFAULT((@@STRING:4a3c110733a490177c604d8a0bec1eab3ca639cc1e39583cb0d1974d6fdedae5@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d51eee21e73f14115a45828e5fa87991a93bbe83f3c101cd0d2229d9ebc71d58@@)),
    VARIANT(/* == */  1, (@@STRING:25a5a097a1a2efced65c98434d010187c21733b690d587500f3fabf97a6b982e@@)),
    VARIANT_DEFAULT((@@STRING:d51eee21e73f14115a45828e5fa87991a93bbe83f3c101cd0d2229d9ebc71d58@@)),
    VARIANT_DEFAULT((@@STRING:54870d01c3f69d643932bbf66c4409b67961e5baffba6648d96b05bec238d441@@)),
    TEXTBOX_CLEAR,
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:86cd0818b434b28bafd04b70999bff96a10ddcf0ecca055308ad7ee30383df2a@@)),
    VARIANT_DEFAULT((@@STRING:8bbe2e268c9efc40b17f7fe44cf57e982c08d229a28bcd3594aa6cee7f25c6cd@@)),
    CHOICE(/* label */  1, (@@STRING:9d9c9119facb4496c16ec6d82a8b717d8918ae2a1d1020a8f9f647952f826a52@@)),
    CHOICE(/* label */  1, (@@STRING:7424f528705ecc52c6acbc9f80996d0f5d0ff6b60bcf8bd6d8b569340528dd04@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
  LABEL(1), /* = 0x01 */
    PORTRAIT_REP(0x0001, 0x00000004),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:0b3505cb2c1faf3a4ee77b55c77ca2b053bf138006cd2c5fadd791f9f7f73aac@@)),
    VARIANT_DEFAULT((@@STRING:6ca1e009069160bf934d8396dc22654f024739577eab092404b3b3c6721b6c65@@)),
    CHOICE(/* label */  2, (@@STRING:acb9a2905c0cf37e47d84099dc0f2ef5974611062336a37a594e98485a722d34@@)),
    CHOICE(/* label */  3, (@@STRING:577875b530a23260b419f9801cc5910a26010599ead9c4467d0ee8d9d5031abd@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
  LABEL(2), /* = 0x02 */
    FANFARE_PLAY2(473),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:18249f7aacc63084ad2df265f4582b362943ac9240041c15cf6416b63463182d@@)),
    VARIANT(/* == */  1, (@@STRING:8803275e4ac4283a4cba61c039e6b74c8912abb4f711e25823c92fd0e4d5cb5b@@)),
    VARIANT(/* == */  1, (@@STRING:29742fcb9226cd3c44318b548c6e34e27f83339e4f5bdd834ba88c1a80fa3c1a@@)),
    VARIANT_DEFAULT((@@STRING:22856e9cf35f6fc9cd9c34947bb677d4e2a51223fad66adeed2eeb991284cf1b@@)),
    VARIANT_DEFAULT((@@STRING:5a9ee5ea5a3665e9e17eee6a87f90b490f1b39451eaee6005a5f3fde4b3e90f5@@)),
    VARIANT_DEFAULT((@@STRING:6211185fbfc938c960a0033fdf47a86ca0cb28f15a716e65dc9452a8bf89ba80@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(4),
  LABEL(3), /* = 0x03 */
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:dd14e1cf3d8fb76f1436dbe0ab52c490636db0469a3934442124e6a9645a3345@@)),
    TEXTBOX_CLEAR,
    SELECT_ANIMATION(5),
    WAIT(60),
    { 0x54, 0x00,  0x0800,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(473),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:067894eebbc6889fd1e122e0b674a4cc99cca37787cc2f13f4014b4c473946ec@@)),
    VARIANT(/* == */  1, (@@STRING:d1fb9e0152b032a1b82cbc30340335c4c79257aba1c933f61863ab54b3395178@@)),
    VARIANT(/* == */  1, (@@STRING:2e6f568d6106a0e2935b329574372b4c59ba82da607b4343b5d5d6d151d790ce@@)),
    VARIANT_DEFAULT((@@STRING:6521bbca3a01f1380d8db804aaa022dfc8be280e9a9c496812566408ee4b2b30@@)),
    VARIANT_DEFAULT((@@STRING:35058475f8b5d23658b2c273220f0619408d5de6960c94c0c416b2fcd5853874@@)),
    VARIANT_DEFAULT((@@STRING:9a65efaacd071395dfdea3a521abdfea1edc7ec839735ee65944c61f6938094f@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(4),
  LABEL(4), /* = 0x04 */
    SELECT_ANIMATION(5),
    WAIT(60),
    { 0x54, 0x00,  0x0800,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:aeadd88e681921d5b87ce07c388b1989848d06e29824a118b0c7bccf0987678e@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:2635e1dcb7fa5ad5d1e5a3ce84837c42b788c3945a475e1df83fd81ce30dd3df@@)),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:9a263c017ef6981a32c3aa9b1f6c6a5d2125746f477b5bbba6abbd6755f2b067@@)),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:8044ebcad417ffe3a4d47e6f0a19ccce123cceb872110ba7c0c047cce2b81598@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7edb0f64be81b850245a50192172001bb04f85bc662ba838ada732793e825ffd@@)),
    VARIANT(/* == */  1, (@@STRING:88a1f2e15b98746315dae3196b804b1cfc87b12d022ae85c877d986fbab40415@@)),
    VARIANT(/* == */  1, (@@STRING:204447f5752225c3e54c3d52117a6f440a9f6b7751002e04831a5af20964e202@@)),
    VARIANT(/* == */  3, (@@STRING:bc4b09e35035e7e23325be7cac8bb2f3dd3a18f14d8104454661f3336e73be42@@)),
    VARIANT(/* == */  3, (@@STRING:4a746bb27f04b8a51feb54999702aa8d2f6b2f93278c1843ef9f22e92fbb0257@@)),
    VARIANT(/* == */  3, (@@STRING:5d46fb5575f249f8bd45ed867cc40ed16499dd3f5c437ede058297193d25cad5@@)),
    VARIANT_DEFAULT((@@STRING:938d3fe3c99c4f1e9a879c3f28960fc0fdd5339916ecb63d82384da1cb2e0d17@@)),
    VARIANT_DEFAULT((@@STRING:7ef961efc72b81bb8a3f6676aa39305dee9f1b139e496596058155635079ca70@@)),
    VARIANT_DEFAULT((@@STRING:99c8b7e941c8d7ad5365bbbf9440156a27a7669ffa053bb0e2672d334fa943ac@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9be13b3c38833628ef2bc7bd100274fe5a8f75ecf7b889e752c811075a90a014@@)),
    VARIANT(/* == */  1, (@@STRING:68ddfb560c7c0ccfc9fc22524b6be1dc7a90f6405d0025594e240e4290293568@@)),
    VARIANT(/* == */  3, (@@STRING:29341b70d33af17885ef0f78dac6ff089999ca78fd4411f8d608efb4416f7fbe@@)),
    VARIANT(/* == */  3, (@@STRING:68ddfb560c7c0ccfc9fc22524b6be1dc7a90f6405d0025594e240e4290293568@@)),
    VARIANT_DEFAULT((@@STRING:6f84643d479b32ddccf15990594e2b55b15163ad5bb8a23bd3aef23a4eeb3953@@)),
    VARIANT_DEFAULT((@@STRING:68ddfb560c7c0ccfc9fc22524b6be1dc7a90f6405d0025594e240e4290293568@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    WAIT(90),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:27cc09c9252a2257d5d31dac612362b25f9c3c0b8cd3fb1ef0da1d1f0bf8da3b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    WAIT(30),
    CMD_UNK_E5(6, 0),
    CMD_UNK_E5(7, 0),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:6f74344a3ffa2a6778388212d82df8ff48fc23b24fa085988bd4682b36930d5c@@)),
    MSG_NPC(2, (@@STRING:a63d498b23834a335bad7c9ab61108e53e8b3b65ab29f47411bf7683af9db557@@)),
    MSG_NPC(2, (@@STRING:088e9d942384a8f593818ab024f09918f8727fb97f2874249a572bac53b5cd6a@@)),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_RISING_FEAR),
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a6caabb54e7fb59b760033d2972a5ca450b48f22c039ba3821211990876f9b9f@@)),
    VARIANT_DEFAULT((@@STRING:6bef43299e1e36dc55e0099cbe75a0246873f362f2a00ff097c66b67eaaee5fc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:3c830425457098e3b768318c534d34b59a5d5b9045db39f6b1b32b2500f6499b@@)),
    MSG_NPC(2, (@@STRING:2b107bfa4d2e6c3a66643a41b1336dce8a503721ac2b107d9b07ffb71c98aeba@@)),
    MSG_NPC(2, (@@STRING:276307f83cfb0436511575092b26e55de53594a41ec0a85260f024ac9fee2607@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(15),
    { 0x62, 0x00,  0x0080, -0x00000004,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:66889635d886b19c963a6c0691b490f7cd19a60dcbb9dbce18d68b9f5f616487@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_E5(6, 0),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    SELECT_ANIMATION(2),
    WAIT(30),
    ALERT_CUE(8),
    ALERT_CUE(9),
    BGM_FADEOUT(90),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:ac720c5f799530ec5498141431fbd2c375e5f49bf11eb3009f629d2b5df5ec9b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    SELECT_ANIMATION(2),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(2, (@@STRING:d4328acc210a06a9ca899e1602510cfb6a408a8e08fe6bbd7ed50089a38cdef1@@)),
    MSG_NPC(2, (@@STRING:ac0e4535f818d7e56f213d1cac326599042105f90567dc5a72068b0b6ba7435a@@)),
    MSG_NPC(2, (@@STRING:a277acb3b9eb8d6359e44cb7ef309fb86461b56319a4e461ab1f10446abd7cfe@@)),
    MSG_NPC(2, (@@STRING:ec529aa1e7b5654bb8f0fb99f55a9ce4c10f629be4471dd9df68224311cb2274@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:64ed646069bca70f1f4c28a6e2948c13196eeeb8bc7ea1481da900756b11492a@@)),
    MSG_NPC(2, (@@STRING:6d142c78eefdb55803804d3a1b3d9d5890019da2eb9b7940a41fc313a417228c@@)),
    MSG_NPC(2, (@@STRING:4261ccbe9ea3c2baea9be27b848816b3ef121de563e586604d8ab0096307b37f@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:4b40b7efb03521a7004edf08e50c5e3dc83c3630352574c98cf921816a9b0e7e@@)),
    MSG_NPC(2, (@@STRING:2c23d0dd8a7665a0f45bb4558b3be8fc8e9d511da234364b1bcb5be1d03f3ab6@@)),
    MSG_NPC(2, (@@STRING:f7430cc1e47cb1d5acc0c5daa809dabbafbf15dbb5f065a861ada2f594c5b1ab@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000008),
    MSG_NPC(1, (@@STRING:5cb8fecca117254282fe7d6d35d239201d2d6159773ffdcc82a03f2cc3ae8872@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:492b10215cf9edf2a02eb32afd2b0c779bb0f416078a06980056b71b1ff5e0c3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    WAIT(45),
    ALERT_CUE(8),
    WAIT(30),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    AWAIT_CUE(5),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(4),
    WAIT(60),
    CMD_UNK_93(10, DIR_TRANS_10, 34),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:70cbe3be9d4b7225edfff7f1a4e0b8c4ab0b6460770bebe2e5bb9b7e3af36070@@)),
    VARIANT(/* == */  1, (@@STRING:1d923c1a000c43b984913c320609e3be999f8d51aceedb4d9f70b21361f58b87@@)),
    VARIANT(/* == */  1, (@@STRING:75831e7ee15bbf720e73efd1254cc759f4f246cb251ca45f8a44caaaee81ce6d@@)),
    VARIANT(/* == */  1, (@@STRING:45e35b15d166111aec22bbd8bb918b1d986cc8d6191859e004d34bb4a83ab5bf@@)),
    VARIANT(/* == */  1, (@@STRING:74761c61fd3949aec3c266ba70efa582ecf37d4e62635ac75ef323273360549b@@)),
    VARIANT(/* == */  1, (@@STRING:fb760969de980a4913b515b0e2fbbefa88221e7cc86458332669465ab349e10d@@)),
    VARIANT(/* == */  3, (@@STRING:70cbe3be9d4b7225edfff7f1a4e0b8c4ab0b6460770bebe2e5bb9b7e3af36070@@)),
    VARIANT(/* == */  3, (@@STRING:93f0bfc77833221f11a63a16916a5edfe88b672a9bdfccc8defd25e74e5e0f2f@@)),
    VARIANT(/* == */  3, (@@STRING:d32ba7c6d6d7295b65c8315241ee329b472ec7ef3d5b9aaedccd0e2fd0cba0cb@@)),
    VARIANT(/* == */  3, (@@STRING:e12e5b0014429a4577f5e426aa462648e412ae7782f00f7bebef51ec27bd9f65@@)),
    VARIANT(/* == */  3, (@@STRING:5ea6fabb5c569029b121a0109b7e8144307872d2fe394d5cc4c210868e7f0bb3@@)),
    VARIANT(/* == */  3, (@@STRING:4a8227f15b4dafce6d4b35f740b18124cec06ab0cf93460dcfed96d2a713d86c@@)),
    VARIANT_DEFAULT((@@STRING:70cbe3be9d4b7225edfff7f1a4e0b8c4ab0b6460770bebe2e5bb9b7e3af36070@@)),
    VARIANT_DEFAULT((@@STRING:68f30aa3a90f1d80dc78ede0b15252a67dbd624d0e040624dc197f4a04ce017c@@)),
    VARIANT_DEFAULT((@@STRING:75831e7ee15bbf720e73efd1254cc759f4f246cb251ca45f8a44caaaee81ce6d@@)),
    VARIANT_DEFAULT((@@STRING:e12e5b0014429a4577f5e426aa462648e412ae7782f00f7bebef51ec27bd9f65@@)),
    VARIANT_DEFAULT((@@STRING:91039d0e31cd36265360db3d6d298607d78c8e912bb0807eae68bf34221516dd@@)),
    VARIANT_DEFAULT((@@STRING:359f651d6fd99a2d48b73dcf64b732f89fb594ada506d777610381ad7b36626e@@)),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cce71e84875553f8bffe3e721a86fff61b2292faabaa96217367ea043cded159@@)),
    VARIANT(/* == */  3, (@@STRING:759bb4e7bc22d836ccaf40083b9ef07560b5082dacb3c36ec5b354fc9c130acf@@)),
    VARIANT_DEFAULT((@@STRING:fbb0255ebec9c91292b77f03ee46c5314edc3a4d99800b95c577ee9956405213@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 2),
    WAIT(1),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:58f777a19902eec8aef77b20f40d40d265530aff4a1fa30648dadd845116fefd@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(10, DIR_TRANS_10, 54),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:a97d20cec9951e4e3bdc0f91171989761436b1917a7149d97afba5cbf2793e06@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:d4cffa83439a16df0cb8a98420a9b8d3741afe1624211064e02ff89a2892ec95@@)),
    MSG_NPC(5, (@@STRING:a65e4025b22ed1d09a53ac21c8be980180b642b5167c8cb3966e8c16d8d2527f@@)),
    MSG_NPC(5, (@@STRING:51baac604daac1e90e30b0b03273e83d4fc285b7a910007acae796dfd5f3aaa4@@)),
    MSG_NPC(5, (@@STRING:52c7800c1699e58dcce4271b832f193ccce9f4427e22a9ae3445d3f6258588c2@@)),
    MSG_NPC(5, (@@STRING:2a1ccf685d11397278d36ecc0b0bc4c02e3d195968736da5844b56092b89f628@@)),
    MSG_NPC(5, (@@STRING:c31565abca7273be0a811295d412320a14c5003807cc5820ef03c2563058712e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    WAIT(30),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:55c4e4e78e707d48eba0c91560925cbc32c358ac32cc372013235f32c21336b9@@)),
    CHOICE(/* label */ 18, (@@STRING:6086391748568b614ba04f36121ac6de714a6885b2283585c10a816372035e92@@)),
    CHOICE(/* label */ 18, (@@STRING:02d6413b697b5d35022422811d49610f43e9b122241fc6b8b9e0689ac841961a@@)),
  LABEL(18), /* = 0x12 */
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    ALERT_CUE(10),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:da8958e51f690c7d1db643acc59ec65c7c460a546bb399abfaab9cd35f97cba7@@)),
    VARIANT(/* == */  1, (@@STRING:d856d3e0c0369d769b16d2b075050206174afa0db42ce5668d0c0ca484297d68@@)),
    VARIANT(/* == */  3, (@@STRING:88a190e7352beaaaf40b83a6e27b2514c750515d42c98e59cc6f3ede4f6cad06@@)),
    VARIANT(/* == */  3, (@@STRING:bd0dc9021c5e131cc499403d28f51fd914cf55ad1ac7e5fbbc11fd5e8633ffcc@@)),
    VARIANT_DEFAULT((@@STRING:913b542bc59271f041fd4fa49b888f6377651dd995f83c6b6e78edc26b8c89ff@@)),
    VARIANT_DEFAULT((@@STRING:bd0dc9021c5e131cc499403d28f51fd914cf55ad1ac7e5fbbc11fd5e8633ffcc@@)),
    ALERT_CUE(6),
    ALERT_CUE(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9353c3046f69ff0da1432a9f5682236829fe0f7687bb67811c758663067bab7c@@)),
    VARIANT(/* == */  1, (@@STRING:c42507d4465d740fe6fafb242cd68e4c9d82bddc04959cd113e0da01eaba2ff6@@)),
    VARIANT(/* == */  1, (@@STRING:c95dce4287d4f4827618d40fac0f7c8bc3c1350856c49e00e26ae225eaf61830@@)),
    VARIANT(/* == */  3, (@@STRING:5fc993e3f0350d42bdb90415cff898a17140af95bfb76ae3cfe0ced5eb5a5897@@)),
    VARIANT(/* == */  3, (@@STRING:08caa1ffaacb044b1cce2c47ab43ac03dbc9837a134aa8a4c398fc63fe472cdd@@)),
    VARIANT(/* == */  3, (@@STRING:d8af9ab174adebd1e0ae7c56bdc5c1ce2b63e9556f00dd4029bb741feb47a8ed@@)),
    VARIANT_DEFAULT((@@STRING:5fc993e3f0350d42bdb90415cff898a17140af95bfb76ae3cfe0ced5eb5a5897@@)),
    VARIANT_DEFAULT((@@STRING:62ab2af0980e1df53113948ea31256ac6d1af43be42446bea0b311f7c47b2fa3@@)),
    VARIANT_DEFAULT((@@STRING:d8af9ab174adebd1e0ae7c56bdc5c1ce2b63e9556f00dd4029bb741feb47a8ed@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    BGM_FADEOUT(90),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    ALERT_CUE(3),
    HALT,
};















static const struct ScriptCommand s_gs9_g48_s0_lives1_dlg0[] = { /* 0x81bddd8 */
    DEBUGINFO_O(7130),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x00a0,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WALK_RELATIVE(768, -160, 0),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(ANGRY_START_FUNC),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    WAIT(30),
    CALL_SCRIPT(ANGRY_END_FUNC),
    AWAIT_CUE(6),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 88),
    WAIT(30),
    FANFARE_PLAY2(464),
    { 0x56, 0x00,  0x0000,  0x00000058,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SET_DIR_WAIT(DIRECTION_SOUTHEAST, 0),
    { 0x62, 0x00,  0x004c, -0x00000008, -0x00000010, NULL },
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    { 0x62, 0x00,  0x0080, -0x00000004,  0x00000000, NULL },
    WAIT(15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(30),
    ROTATE_TO(6, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(15),
    ROTATE_TO(6, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(15),
    ROTATE_TO(6, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(15),
    ROTATE_TO(6, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(60),
    ALERT_CUE(5),
    CALL_SCRIPT(SMILE_START_FUNC),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    SELECT_ANIMATION(4),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_END_FUNC),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g48_s1_lives0_dlg0[] = { /* 0x81be318 */
    DEBUGINFO_O(7217),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0064,  0x00000000,  0x00000000, NULL },
    WALK_RELATIVE(204, -100, 0),
    AWAIT_CUE(7),
    WALK_RELATIVE(204, -16, 0),
    SELECT_ANIMATION(2),
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(497),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(4),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    WAIT(60),
    { 0x62, 0x00,  0x004c,  0x00000008,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(5, DIR_TRANS_10, 34),
    AWAIT_CUE(7),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(7),
    WALK_RELATIVE(153, 160, 0),
    CMD_UNK_E5(5, 0),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g48_s1_lives1_dlg0[] = { /* 0x81be4f8 */
    DEBUGINFO_O(7250),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0064,  0x00000000,  0x00000000, NULL },
    WALK_RELATIVE(204, -100, 0),
    AWAIT_CUE(8),
    WALK_RELATIVE(76, -16, 8),
    FANFARE_PLAY2(497),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    { 0x62, 0x00,  0x004c,  0x00000008,  0x00000000, NULL },
    AWAIT_CUE(8),
    WALK_RELATIVE(153, 160, -16),
    CMD_UNK_E5(5, 0),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g48_s1_lives2_dlg0[] = { /* 0x81be618 */
    DEBUGINFO_O(7271),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0064,  0x00000000,  0x00000000, NULL },
    WALK_RELATIVE(204, -100, 0),
    AWAIT_CUE(9),
    WALK_RELATIVE(76, -16, -8),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    AWAIT_CUE(9),
    { 0x62, 0x00,  0x004c,  0x00000008,  0x00000000, NULL },
    AWAIT_CUE(9),
    WALK_RELATIVE(153, 160, 16),
    CMD_UNK_E5(5, 0),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g48_s2_lives0_dlg0[] = { /* 0x81be728 */
    DEBUGINFO_O(7291),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x59, 0x00,  0x0064,  0x00000000,  0x00000000, NULL },
    WALK_RELATIVE(128, -40, 0),
    SELECT_ANIMATION(2),
    WAIT(15),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    WALK_RELATIVE(256, -80, 0),
    WAIT(30),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(10),
    CALL_SCRIPT(SMILE_START_FUNC),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    SELECT_ANIMATION(4),
    AWAIT_CUE(10),
    CALL_SCRIPT(SMILE_END_FUNC),
    SELECT_ANIMATION(2),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs9_g49_s0_station_sref_script[] = { /* 0x81be908 */
    DEBUGINFO_O(7324),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    BGM_STOP,
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_TEAM_BASE),
    MSG_ON_BG_AUTO(30, (@@STRING:3a3c9a95cb2eb1c522b2f4173dd48a65f3ee2afb9eb750aefc895f036cc04c4a@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, -1),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    CALL_STATION( 50,  0),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g49_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g49_s0_station_sref_script }; /* 0x81bea5c */


static const struct ScriptCommand s_gs9_g49_s0_lives0_dlg0[] = { /* 0x81bea68 */
    DEBUGINFO_O(7350),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000052,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:901a23e47d1050bd457f66840e2a03f59760adf4dab107ddaa04f005d4a3f24c@@)),
    VARIANT_DEFAULT((@@STRING:0c9719ea8d461c7f755eeb9df8ffcf3b7a64df1d8258a7425a3abc00d3825f2a@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000000),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:00638d127d2e457cbe83c487f55bf66647e8c02aeba544402e3fca2a32adf542@@)),
    VARIANT_DEFAULT((@@STRING:00638d127d2e457cbe83c487f55bf66647e8c02aeba544402e3fca2a32adf542@@)),
    CHOICE(/* label */  2, (@@STRING:d7214b4470e6db33c4f6e5fb11b6fa95270ecc74eceff2b7dc7600dddc71b1b8@@)),
    CHOICE(/* label */  3, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(3), /* = 0x03 */
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e652184f91f95bf4657848dc4e3203d60114d28168355629d0cc40577438d7e9@@)),
    VARIANT(/* == */  1, (@@STRING:4ba5ac9a9e968d4e2433b98784f4d92ffc72e2abecb9f9045856d9f492e8dabb@@)),
    VARIANT_DEFAULT((@@STRING:d004ec664fd102a26d7c985ca854633bada5191ae030d991905ae1afabc67137@@)),
    VARIANT_DEFAULT((@@STRING:e2fc6e4a9e9c7c108fd9afd89ecbcdb544efddb09e30037c94dc5df22f11d007@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    RET,
  LABEL(2), /* = 0x02 */
    EXECUTE_FUNCTION(EVENT_M01E07A_L002),
    HALT,
};



static const struct ScriptCommand s_gs9_g49_s0_lives1_dlg0[] = { /* 0x81bedfc */
    DEBUGINFO_O(7388),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 51),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g50_s0_station_sref_script[] = { /* 0x81bee7c */
    DEBUGINFO_O(7399),
    SELECT_ENTITIES(-1, 0),
    SELECT_ENTITIES(-1, 1),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g50_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g50_s0_station_sref_script }; /* 0x81beebc */

static const struct ScriptCommand s_gs9_g50_s0_lives0_dlg0[] = { /* 0x81beec8 */
    DEBUGINFO_O(7408),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g50_s0_lives0_dlg2[] = { /* 0x81beef8 */
    DEBUGINFO_O(7414),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:85ccaa74b937cd3bf60ba9fe76393447118eedb6adfdf578f287c41ccc37c5b2@@)),
    VARIANT_DEFAULT((@@STRING:ffb24cc0c285a41586ff81bb51c954b8e398e1cffe409a771dac56c518de6779@@)),
    CHOICE(/* label */  1, (@@STRING:d7214b4470e6db33c4f6e5fb11b6fa95270ecc74eceff2b7dc7600dddc71b1b8@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:634be3b879225e9590358d304e895a1d491d4f424b9f9821a27d1323d1a03e3e@@)),
    VARIANT(/* == */  1, (@@STRING:4ba5ac9a9e968d4e2433b98784f4d92ffc72e2abecb9f9045856d9f492e8dabb@@)),
    VARIANT_DEFAULT((@@STRING:d004ec664fd102a26d7c985ca854633bada5191ae030d991905ae1afabc67137@@)),
    VARIANT_DEFAULT((@@STRING:e2fc6e4a9e9c7c108fd9afd89ecbcdb544efddb09e30037c94dc5df22f11d007@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    EXECUTE_FUNCTION(EVENT_M01E07A_L002),
    HALT,
};


static const struct ScriptCommand s_gs9_g50_s1_evt0_sref_script[] = { /* 0x81bf0b0 */
    DEBUGINFO_O(7439),
    JUMPIF_SCENE_GT(SCENARIO_MAIN, 11, 2, /* to label */ 0),
    EXECUTE_STATION(-1, 50, 2),
    HALT,
  LABEL(0), /* = 0x00 */
    RET,
};

static const ScriptRef s_gs9_g50_s1_evt0_sref = { NORMAL_EVENT, SCRIPT_TYPE_07, NULL, s_gs9_g50_s1_evt0_sref_script }; /* 0x81bf110 */

static const struct ScriptCommand s_gs9_g50_s2_station_sref_script[] = { /* 0x81bf11c */
    DEBUGINFO_O(7450),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 0),
    SCENARIO_CALC(SCENARIO_MAIN, 11,  3),
    RET,
};

static const ScriptRef s_gs9_g50_s2_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g50_s2_station_sref_script }; /* 0x81bf17c */

static const struct ScriptCommand s_gs9_g50_s2_lives0_dlg0[] = { /* 0x81bf188 */
    DEBUGINFO_O(7461),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9985e9ad6fcaf2a3e9ba6696559cac4a3ec123ebb83c7137a6b48933163f368f@@)),
    VARIANT(/* == */  1, (@@STRING:2aec56bbe71541876b6eb4cdc4bb2044fa500fa4f46a1f3f57d6a494c75c2464@@)),
    VARIANT(/* == */  1, (@@STRING:3df2a517a3736d0f00f9ba989e1c9c50d80e608b5b5e1f5b2ec0f98c2e463bdd@@)),
    VARIANT(/* == */  1, (@@STRING:f9fd2b6d2e1416746fb222abbb7da65c9f8017a132d8d86dd756750161da665c@@)),
    VARIANT_DEFAULT((@@STRING:2917df9586b24b09c28c14f84adb17173de664ee4ee97e737d3c6579771e7f0a@@)),
    VARIANT_DEFAULT((@@STRING:e8ddc24a195fe3ad956f5a0d630f0b6fac3eb71741923a6cb2cb74c009ee564c@@)),
    VARIANT_DEFAULT((@@STRING:e1e1bb8c9426aa1e3868d3b975f9ce9b0326dcf69f2f52e44259034037bd596e@@)),
    VARIANT_DEFAULT((@@STRING:5a879d6eb7a585c8a730db909f34f4171993ddd63ff3a7678e716dbfe65142b1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g50_s2_lives1_dlg0[] = { /* 0x81bf44c */
    DEBUGINFO_O(7482),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_11, 0),
    AWAIT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g50_s2_lives1_dlg2[] = { /* 0x81bf4bc */
    DEBUGINFO_O(7492),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:85ccaa74b937cd3bf60ba9fe76393447118eedb6adfdf578f287c41ccc37c5b2@@)),
    VARIANT_DEFAULT((@@STRING:ffb24cc0c285a41586ff81bb51c954b8e398e1cffe409a771dac56c518de6779@@)),
    CHOICE(/* label */  1, (@@STRING:d187e747e37e200716b6ff4d2d242d30e39df12d7e1b57be9a97be670663f749@@)),
    CHOICE(/* label */  2, (@@STRING:bc0ff94bb11a7cb4cf7894c7dad19b0d49610f87f14b37c88478cf90e38e9b24@@)),
  LABEL(2), /* = 0x02 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:36607a3a3f79f23ecb5527a787dec4c01f1b71512281e34157e0140d5b2900d2@@)),
    VARIANT(/* == */  1, (@@STRING:61d67b17237ee88e9262bfe457bc07372322c0cfeca9885b4a2d08ac27d72736@@)),
    VARIANT_DEFAULT((@@STRING:8a20df31d7af09a2459d2a280b39af6c87874a115ad56f17c9031ca1d499283a@@)),
    VARIANT_DEFAULT((@@STRING:e2fc6e4a9e9c7c108fd9afd89ecbcdb544efddb09e30037c94dc5df22f11d007@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    EXECUTE_FUNCTION(EVENT_M01E07A_L002),
    HALT,
};


static const struct ScriptCommand s_gs9_g50_s3_station_sref_script[] = { /* 0x81bf5ec */
    DEBUGINFO_O(7515),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 0),
    RET,
};

static const ScriptRef s_gs9_g50_s3_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g50_s3_station_sref_script }; /* 0x81bf63c */

static const struct ScriptCommand s_gs9_g50_s3_lives0_dlg0[] = { /* 0x81bf648 */
    DEBUGINFO_O(7525),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(1),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:34328d72fa106c8211c07e76417ffb92d1ba0778b067d633fa97ac316f09d67b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g50_s3_lives1_dlg0[] = { /* 0x81bf708 */
    DEBUGINFO_O(7538),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(10),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g51_s0_station_sref_script[] = { /* 0x81bf778 */
    DEBUGINFO_O(7548),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g51_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g51_s0_station_sref_script }; /* 0x81bf7c8 */

static const struct ScriptCommand s_gs9_g51_s0_lives0_dlg0[] = { /* 0x81bf7d4 */
    DEBUGINFO_O(7558),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000058,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:75509739b761264144e1c9ed93f1c406c959cc469fcba4e8747f9668c4d9c303@@)),
    VARIANT(/* == */  1, (@@STRING:ee896e857602c5e21e4b453df931cb2aa1271e05be319d685bc08d1e088cbf3b@@)),
    VARIANT(/* == */  3, (@@STRING:7cace881759506ee371d806e63805ad558e0f20058cdcde187c439f863106119@@)),
    VARIANT(/* == */  3, (@@STRING:ee896e857602c5e21e4b453df931cb2aa1271e05be319d685bc08d1e088cbf3b@@)),
    VARIANT_DEFAULT((@@STRING:386c117f0f05422aa2b9f6b1c11152a5ebdec43c20ee0e4163b45a4ae5204a7d@@)),
    VARIANT_DEFAULT((@@STRING:ee896e857602c5e21e4b453df931cb2aa1271e05be319d685bc08d1e088cbf3b@@)),
    JUMPIF(JUDGE_LE, FRIEND_SUM, 2, /* to label */ 1),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:26341337c754fc5f89b4f49cfdf246bdf75e08272278ce7b9a7010419b424e53@@)),
    VARIANT(/* == */  1, (@@STRING:a1372acf90e962060c1a7fd46da392dbee7b4e0088a37d581b994ed60e5d8a2d@@)),
    VARIANT(/* == */  1, (@@STRING:a163549c0e0ecfa33bf49b607c2b9bf9258ae2fe5186f3418689489965a21f4d@@)),
    VARIANT(/* == */  3, (@@STRING:01d9aa5be50f158e131f5ad12b191a48425f2438c5ae3ff56c8397f9054ebc2d@@)),
    VARIANT(/* == */  3, (@@STRING:6f008ac3078b2054d71a769e1574494021e0f1564588d447dc98ddb1dc07f616@@)),
    VARIANT(/* == */  3, (@@STRING:5dc0a0c6ae80f140a017c1256b1ee6b56ed396af62ccb0553e536becdc26358d@@)),
    VARIANT_DEFAULT((@@STRING:fde772d0b468c8b15d8f0b4bac6dff7316fe60230fac5548a207a3c54a4dcc8c@@)),
    VARIANT_DEFAULT((@@STRING:d8fec812c735589561e5665129ed419b281992a4c227b61a2ddab20444a3bf56@@)),
    VARIANT_DEFAULT((@@STRING:3c93e01306fda62ea9bc01d6b379fcf15258205953ac112d243cd62c16ba0b96@@)),
  LABEL(1), /* = 0x01 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c421f887fa169133f2069fd47a66d408e460ea5a8799d0885001077a443dad52@@)),
    VARIANT(/* == */  1, (@@STRING:aeb901a244d9ffb99bc0f6b9bb6e2e41db021b76aae5321ad82085ff80821a22@@)),
    VARIANT(/* == */  3, (@@STRING:c70c7b8a5e0b8f2d4a03d1baec37f5710b683306d967af5d5b2c3df7d3a2d2fb@@)),
    VARIANT(/* == */  3, (@@STRING:30cfbaf94f71fb7f6da7f1cbcf28653371b8049543f304c11760fd4136e99060@@)),
    VARIANT_DEFAULT((@@STRING:433d531f61eaa7fe1523429072670bf5d2d6456d0ef93f08d8626f5e03323bc4@@)),
    VARIANT_DEFAULT((@@STRING:5fe42c3ca4fc1eafdaffc3a7a42cd3d930d02ba778e597f908d26b9738ca2ced@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    BGM_SWITCH(MUS_THE_ESCAPE),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0000, 0x00000000),
    MSG_QUIET(0, (@@STRING:f52a54d3d59166d6564e19bab0225753ca937742bd863b18678d4e61fcefe6a3@@)),
    MSG_QUIET(0, (@@STRING:bd9ee6fff87e8fd70d3e568ef4eef62d8338deac44af97bc6e56bd754b843f6b@@)),
    TEXTBOX_CLEAR,
    { 0x5f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};



static const struct ScriptCommand s_gs9_g51_s0_lives1_dlg0[] = { /* 0x81bfe94 */
    DEBUGINFO_O(7607),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x5f, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g52_s0_station_sref_script[] = { /* 0x81bfee4 */
    DEBUGINFO_O(7615),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_THE_ESCAPE),
    FLASH_FROM(TRUE, PALUTIL_KIND_14, 30, RGB_U32(0x00, 0x00, 0x00)),
    AWAIT_CUE(3),
    FLASH_TO(TRUE, PALUTIL_KIND_14, 30, RGB_U32(0x00, 0x00, 0x00)),
    RET,
};

static const ScriptRef s_gs9_g52_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g52_s0_station_sref_script }; /* 0x81bff64 */

static const struct ScriptCommand s_gs9_g52_s0_lives0_dlg0[] = { /* 0x81bff70 */
    DEBUGINFO_O(7628),
    SELECT_ANIMATION(2),
    { 0x59, 0x00, -0x0004,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:e604619a54899de2b1faff6051fc33584c365f5a8f5e2c173e1d821885333150@@)),
    MSG_NPC(2, (@@STRING:2c23d0dd8a7665a0f45bb4558b3be8fc8e9d511da234364b1bcb5be1d03f3ab6@@)),
    MSG_NPC(2, (@@STRING:f7430cc1e47cb1d5acc0c5daa809dabbafbf15dbb5f065a861ada2f594c5b1ab@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs9_g52_s0_lives1_dlg0[] = { /* 0x81c0040 */
    DEBUGINFO_O(7645),
    SELECT_ANIMATION(2),
    { 0x59, 0x00, -0x0004,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g52_s0_lives2_dlg0[] = { /* 0x81c0090 */
    DEBUGINFO_O(7653),
    SELECT_ANIMATION(5),
    WAIT(1),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g52_s0_lives3_dlg0[] = { /* 0x81c00f0 */
    DEBUGINFO_O(7662),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g52_s0_lives4_dlg0[] = { /* 0x81c0130 */
    DEBUGINFO_O(7669),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g53_s0_station_sref_script[] = { /* 0x81c0170 */
    DEBUGINFO_O(7676),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_THE_ESCAPE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g53_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g53_s0_station_sref_script }; /* 0x81c01f0 */

static const struct ScriptCommand s_gs9_g53_s0_eff0_script[] = { /* 0x81c01fc */
    DEBUGINFO_O(7689),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x50,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0x28,  0x0100,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0x18,  0x0099,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0xf0,  0x0099,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0xa0,  0x0100,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g53_s0_lives0_dlg0[] = { /* 0x81c02fc */
    DEBUGINFO_O(7708),
    SELECT_ANIMATION(2),
    { 0x5e, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0000, 0x00000000),
    MSG_QUIET(0, (@@STRING:4965742cafd23ecab851aad21960ecaeb59bab5c72a7421bd83adb059726a811@@)),
    MSG_QUIET(0, (@@STRING:3cd777985524ca99d56cdaff0e21a9edf6da254e4cf4123e68fa960c94ea9756@@)),
    MSG_QUIET(0, (@@STRING:2770fde4f88b633fd33facea449fcc40dd9b1aa39d473a2ba9c4a54e5a0f0844@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1aa65b90f1b2ca7a44a97d34ed2d921c1043892f1a5a4b4631019b61d84bfa2e@@)),
    VARIANT_DEFAULT((@@STRING:ec61f38b1b4512bf98b3cc7daac84efed78ecf94917080f1ab1c560b1473cb8d@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    MSG_NPC(-1, (@@STRING:a01f9534a9bf380dac2e2da406c63fa8561918e7aa87ce9373eec211b5b13803@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(15),
    ALERT_CUE(4),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(11),
    ALERT_CUE(12),
    AWAIT_CUE(5),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 52),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000b),
    MSG_NPC(1, (@@STRING:5b1e8b40cc50fb6ae6d165bc7dcae78252ded30f5a265cc57bebbc3983bc89f4@@)),
    MSG_NPC(1, (@@STRING:87922502596341be268ac99f5e3403856c8497629dbb3d2214a14db29528789c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(11),
    ALERT_CUE(12),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:67d1c72b0c2082c48fc16f273bf310a0164e559778b5afde2bbc188a8353a656@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:091b7d62854c7ba77d73f00b70a31b8148ceb905a3fccdb0bd91e1fbfecde86d@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:d29188ae84da75d4f306333a1e0566d34426332afa7080282be4089cd6f0ffd1@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(469),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(11),
    ALERT_CUE(12),
    CALL_SCRIPT(QUESTION_FUNC),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(30),
    FANFARE_PLAY2(454),
    SELECT_ENTITIES(-1, 2),
    AWAIT_CUE(5),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:99f66f20e51d5668950826cbc874802bf397bf38f01f4e0427b95d769b35d3e3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:f938080fdcec6e6bb7c795ac8973fdbae2bec67254923e2d0ba557c29512cf25@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000008),
    MSG_NPC(1, (@@STRING:9961ec96f017e80f00d77b47e47c9cd44123e5e55264de0ca821546fd640010c@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:45b2f05097831daf95b6b786db148c225db289cbfede17895e58d33bb7b84584@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 57),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    WAIT(30),
    MSG_INSTANT((@@STRING:ee50e65bf50d7f4f8cd3ae9623006eec3c765f1420dd5537e0c9a76a96360f97@@)),
    TEXTBOX_CLEAR,
    MSG_LETTER((@@STRING:f3f2e9aefebcb338b0b19722045d519fb53617c15d5830beedc31739c37b6e6e@@)),
    MSG_LETTER((@@STRING:1ef94c08256d130b4b784630e0f55d1dc79951983181e5e0b9b5603eb7152842@@)),
    MSG_LETTER((@@STRING:73595f21acd09bda434764c9bf1224560b29d445fad059f3c526d9be1c6b44af@@)),
    MSG_LETTER((@@STRING:2adf59d341e73db63e4528b6e0cb5914341d6f76c5be43e9c33c90a72387d758@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x0000000b),
    MSG_NPC(1, (@@STRING:badca9efaa542feb1d62324aa7691e21049a2d042857b644e960538600b9adb5@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000008),
    MSG_NPC(1, (@@STRING:485768bf75d60a802270ff291628828f6b5a4968718d509c388516cd627d0e3b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:e220aab83509fcddf27836765a4a8f150603dfd5d0fe59e5c7941195e1ae0cc8@@)),
    MSG_NPC(4, (@@STRING:6708d3d7946cd8ca3046edaf7a4764de2f24820b9661c0da13ed0781a582960d@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:6a799e632e0d17052bc2fb1e5270402ca043c313fe9533289de3224a089c763b@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:614d5c78fa2c58788a4f90e77d2765042a764609e72df88518b4053ea8e6d969@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(4),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(11),
    ALERT_CUE(12),
    { 0x89, 0xe0,  0x0099,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(30),
    TEXTBOX_AUTO_PRESS(-1, -1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:036ef1219a8d6ef79e20d8541e129ea84cf17110d2c32f6cae00ec73da17c0d6@@)),
    VARIANT(/* == */  1, (@@STRING:fdbc86f0229cfa6c0e63e18929d810af025c7f18bc521609eb8d68c6682cc182@@)),
    VARIANT(/* == */  1, (@@STRING:35443fbb88e10a751af68307cc2015ffd16d9168b3214ce9aacc1f11480dc9c3@@)),
    VARIANT(/* == */  3, (@@STRING:a2fe55dcd41e9a642bf3b54c2e27da3a6ae7342fbf8fea0c21ca6d4134b02b70@@)),
    VARIANT(/* == */  3, (@@STRING:2eaf307d36d738a6b2e5ed5965c9b2e0b385b60226565e340d2982b381a3fb2a@@)),
    VARIANT(/* == */  3, (@@STRING:35443fbb88e10a751af68307cc2015ffd16d9168b3214ce9aacc1f11480dc9c3@@)),
    VARIANT_DEFAULT((@@STRING:a2fe55dcd41e9a642bf3b54c2e27da3a6ae7342fbf8fea0c21ca6d4134b02b70@@)),
    VARIANT_DEFAULT((@@STRING:432ea4edab2d752d5b08e591064b14e310123c8cd3f0a98fcc3052a286c6cbf8@@)),
    VARIANT_DEFAULT((@@STRING:31642bb897fd4e93b0da316052bb77d41f47ae51d3fd8c3350885ddcee5971cd@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(6),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x78,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};















static const struct ScriptCommand s_gs9_g53_s0_lives1_dlg0[] = { /* 0x81c1318 */
    DEBUGINFO_O(7914),
    SELECT_ANIMATION(2),
    { 0x5e, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(12),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 68),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    WAIT(30),
    ROTATE_TO(10, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(30),
    ROTATE_TO(10, DIR_TRANS_11, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(20),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    WALK_RELATIVE(128, -4, 4),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(25),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 58),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    WALK_RELATIVE(256, -8, 8),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x89, 0xe0,  0x0099,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x89, 0x78,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g53_s0_lives2_dlg0[] = { /* 0x81c1678 */
    DEBUGINFO_O(7971),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x89, 0x40,  0x0080,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(7),
    CAMERA_PAN(256, 53),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WAIT(15),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(7),
    WAIT(22),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(7),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 59),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(20),
    TEXTBOX_AUTO_PRESS(60, 60),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:fe3f88e1a4a87a7c41b28b4b5f9559c45e4b1eeaa0875ceb56eb3c76cb3dc70b@@)),
    TEXTBOX_CLEAR2,
    TEXTBOX_AUTO_PRESS(-1, -1),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g53_s0_lives3_dlg0[] = { /* 0x81c1904 */
    DEBUGINFO_O(8014),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    { 0x89, 0x40,  0x0080,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(8),
    CAMERA_PAN(256, 54),
    AWAIT_CUE(8),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT(4),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_11, 68),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(8),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 60),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g53_s0_lives4_dlg0[] = { /* 0x81c1a94 */
    DEBUGINFO_O(8042),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x00000030,  0x00000000, NULL },
    AWAIT_CUE(10),
    MSG_OVERHEARD((@@STRING:cfc125f2d034fc6d16a9a04dcb21d0624d3414017d9e006ea3df652cbe458ea6@@)),
    FANFARE_PLAY2(451),
    WALK_GRID(256, 3),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(5),
    TEXTBOX_CLEAR,
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    FANFARE_STOP2(451),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(5),
    SELECT_ANIMATION(22),
    WAIT(20),
    FANFARE_PLAY2(501),
    MSG_OVERHEARD((@@STRING:f944bf6f08b0ce9b982ebb5fea0eb109fd983ed1747cbdde1f8c06f8652bd8a5@@)),
    WAIT(60),
    TEXTBOX_CLEAR,
    ALERT_CUE(5),
    AWAIT_CUE(10),
    FANFARE_PLAY2(451),
    SELECT_ANIMATION(2),
    { 0x68, 0x00,  0x0100,  0x00000030,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WALK_GRID(256, 4),
    FANFARE_STOP2(451),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g53_s0_lives5_dlg0[] = { /* 0x81c1d74 */
    DEBUGINFO_O(8091),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    { 0x89, 0x40,  0x0080,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(11),
    CAMERA_PAN(256, 55),
    AWAIT_CUE(11),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    WAIT(12),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(11),
    CMD_UNK_93(4, DIR_TRANS_11, 68),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(11),
    WAIT(25),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(11),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 61),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(110),
    TEXTBOX_AUTO_PRESS(80, 80),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:b9f5bb4c6d655d5ff973f71332d295eaeb5e9d9c986da21a731c9a0d52abb67f@@)),
    TEXTBOX_CLEAR2,
    TEXTBOX_AUTO_PRESS(-1, -1),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs9_g53_s0_lives6_dlg0[] = { /* 0x81c2004 */
    DEBUGINFO_O(8132),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(12),
    { 0x89, 0x40,  0x0080,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(12),
    CAMERA_PAN(256, 56),
    AWAIT_CUE(12),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT(8),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(12),
    CMD_UNK_93(4, DIR_TRANS_11, 68),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g53_s2_lives0_dlg0[] = { /* 0x81c2174 */
    DEBUGINFO_O(8158),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(9),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g55_s0_station_sref_script[] = { /* 0x81c22c4 */
    DEBUGINFO_O(8182),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x3b, 0x04,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_EVENTS(0, 0),
    CALL_STATION(  4,  0),
    RET,
};

static const ScriptRef s_gs9_g55_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g55_s0_station_sref_script }; /* 0x81c23b4 */

static const struct ScriptCommand s_gs9_g55_s0_lives0_dlg0[] = { /* 0x81c23c0 */
    DEBUGINFO_O(8202),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2331da99589e6f0434314a2433a99e6ad6001d9bba10b05208b1838b56220fbc@@)),
    VARIANT_DEFAULT((@@STRING:94acfcf0350c1bc1bee6fed78c7bcbce9a4d83d49079c85473dcab127ac66de9@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1eea6be5b4efeb0243cbc3c2efbdd6d13dcefcf6b3656b8878ac5eb65307f00d@@)),
    VARIANT_DEFAULT((@@STRING:59113f9a7c2d81c851cc3e5c07fb440e284097438c4abdccab2b3a913760865b@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    SELECT_ENTITIES(-1, 1),
    MSG_OVERHEARD((@@STRING:cfc125f2d034fc6d16a9a04dcb21d0624d3414017d9e006ea3df652cbe458ea6@@)),
    WAIT(5),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_11, 55),
    WAIT(100),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    WAIT(10),
    CMD_UNK_93(4, DIR_TRANS_11, 7),
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3fe3a1d0ce2dd2017755897b790af4e29e2a8970ab24cb5d1617d94bd13ffacf@@)),
    VARIANT_DEFAULT((@@STRING:faeddda54aeec12436e7ad8e8497a79a8669dcef5cbdcdd43eebe4f2289a56d7@@)),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9ead31fecfc811f3accaea699f68bdf67d7998272d99e7f2e641f919599f3b51@@)),
    VARIANT_DEFAULT((@@STRING:c3321a8b16e78381910e552aec03d2289fa5c0bea51718baf5c00e6ed3b38b90@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};



static const struct ScriptCommand s_gs9_g55_s0_lives1_dlg0[] = { /* 0x81c2858 */
    DEBUGINFO_O(8255),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 62),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_11, 55),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g55_s1_lives0_dlg0[] = { /* 0x81c2958 */
    DEBUGINFO_O(8274),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x60, 0x00,  0x0000,  0x00000030,  0x00000000, NULL },
    FANFARE_PLAY2(451),
    WALK_GRID(256, 3),
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(15),
    { 0x68, 0x00,  0x0100,  0x00000008,  0x00000000, NULL },
    FANFARE_STOP2(451),
    SELECT_ANIMATION(22),
    WAIT(20),
    FANFARE_PLAY2(501),
    MSG_OVERHEARD((@@STRING:389dd5c1914675deffae753c4de4dfdd808ad9bc1cbd5637462deb35f8f984b6@@)),
    WAIT(60),
    TEXTBOX_CLEAR,
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(451),
    SELECT_ANIMATION(2),
    { 0x68, 0x00,  0x0100,  0x00000030,  0x00000000, NULL },
    WAIT(15),
    ROTATE_TO(30, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WALK_GRID(256, 4),
    FANFARE_STOP2(451),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g56_s0_station_sref_script[] = { /* 0x81c2b28 */
    DEBUGINFO_O(8306),
    JUMP_STATION(  4,  0),
    RET,
};

static const ScriptRef s_gs9_g56_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g56_s0_station_sref_script }; /* 0x81c2b58 */

static const struct ScriptCommand s_gs9_g57_s0_station_sref_script[] = { /* 0x81c2b64 */
    DEBUGINFO_O(8314),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION(  4,  0),
    RET,
};

static const ScriptRef s_gs9_g57_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g57_s0_station_sref_script }; /* 0x81c2c44 */

static const struct ScriptCommand s_gs9_g57_s0_lives0_dlg0[] = { /* 0x81c2c50 */
    DEBUGINFO_O(8333),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000052,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:7f79040e20662abfbc7f7fc7d381620801f888d5046cb6379d93d331f5dd8529@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8518eeec6eaffbb78e808930da30cc5430f89c45e0ba27c340fb6cc2d66af7af@@)),
    VARIANT_DEFAULT((@@STRING:8518eeec6eaffbb78e808930da30cc5430f89c45e0ba27c340fb6cc2d66af7af@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(463),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cfa228d7ede026304471e4c285f421d73efd08584ad8987d954486fd1e6ed14a@@)),
    VARIANT(/* == */  1, (@@STRING:271e013a721ed5324e01f628466b04b2fc4e8a9911d3e621ece874cfcc03770c@@)),
    VARIANT(/* == */  1, (@@STRING:bccaea01d6484fe3e0ecca85216ed928a4e086f806244413db2fb46e73fbdce5@@)),
    VARIANT(/* == */  1, (@@STRING:53e1c6de9627b7513a631bdc398ac458b0a50131e4729ce9631f98928d33a52e@@)),
    VARIANT(/* == */  1, (@@STRING:8c4467f1f401d254686ad7e4423a33e4b5d52fbfbcab40aaa6fdc0576bdb5858@@)),
    VARIANT(/* == */  1, (@@STRING:2657aa5b84337d5cda3f0454e2aa9fbe7396d8d197e23a8337cc85eda64fb089@@)),
    VARIANT(/* == */  1, (@@STRING:9b266d907b633c0ad072b1daadde7b3c9569f4ab10187e625af5e5a830bcbe1c@@)),
    VARIANT(/* == */  3, (@@STRING:101a0f17748236a5682797dbe9260d08691bd591f11a92b8e367aac18ee5d0ad@@)),
    VARIANT(/* == */  3, (@@STRING:91949d4a0b7b1ee21dd9117d717b67c2ac466a8709b6543cb5aee897925253a8@@)),
    VARIANT(/* == */  3, (@@STRING:bccaea01d6484fe3e0ecca85216ed928a4e086f806244413db2fb46e73fbdce5@@)),
    VARIANT(/* == */  3, (@@STRING:a2cf4179e714af0171f190a0d7dbecfe07d0d957902a5539fdfe21703184b980@@)),
    VARIANT(/* == */  3, (@@STRING:39680ef9445d81c1c68b3e42d71098a74c40e96c1f9022c3328c157ed404b99a@@)),
    VARIANT(/* == */  3, (@@STRING:712f1c9632ab8142dc7cab1eee2818614aa7ea0d6a6a59e2adc770bd2d629741@@)),
    VARIANT(/* == */  3, (@@STRING:f4cc7993e3764eeba504abead9adb060ac5dd7f41b38ad6e9618ad27ab528396@@)),
    VARIANT_DEFAULT((@@STRING:33654ed1cfb89c00649dd85269bceebc6a80f8bb15b5d21866091b85c1ff13ff@@)),
    VARIANT_DEFAULT((@@STRING:466571ea7ef539fbc1e926a2778f0bb7fbf3988b53afcaed5feedd324c2267b0@@)),
    VARIANT_DEFAULT((@@STRING:bccaea01d6484fe3e0ecca85216ed928a4e086f806244413db2fb46e73fbdce5@@)),
    VARIANT_DEFAULT((@@STRING:6c1e6e6de7a1117773d6fd766614934913f121d810a3d7d182bbcf661c5c5bf4@@)),
    VARIANT_DEFAULT((@@STRING:4dd12eddf8a19250700c2b40efdfda498d926d36791413a44ec80423371f218e@@)),
    VARIANT_DEFAULT((@@STRING:296b8e49ee996d5913f4013e3fff0b548b63dd1a11f756f57dde6f9f7809653f@@)),
    VARIANT_DEFAULT((@@STRING:70713ace5fe3976b5e81d6e8f97a48a24de8de822cc54fc0b0d5cd32edc4338c@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8e212fb30b8aabab74bef70b97530a9d5729765a24f51061487c7b899f236600@@)),
    VARIANT(/* == */  1, (@@STRING:d0cfe863126798ab3e2775aed60ecb2ffd770f78e502b07831378174d4f4558a@@)),
    VARIANT(/* == */  3, (@@STRING:42390dd40ead709a61eee06aa33a09d5cf0dbadd0f85d49c6eeed2fca1f27f60@@)),
    VARIANT(/* == */  3, (@@STRING:641a168325f146b498edec67340718c183bdfa7e17559b136a45c307a7a5cff3@@)),
    VARIANT_DEFAULT((@@STRING:90aadb486de6211ec916ee6daff296d7fb38871010a467147c287e48e874ab5a@@)),
    VARIANT_DEFAULT((@@STRING:c67b1a559c7890c1c9c2b796f3aa127abc6b06ea5c6a75d0085372484b301ad8@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g57_s0_lives1_dlg0[] = { /* 0x81c35ec */
    DEBUGINFO_O(8394),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g58_s0_station_sref_script[] = { /* 0x81c36ac */
    DEBUGINFO_O(8409),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g58_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g58_s0_station_sref_script }; /* 0x81c372c */

static const struct ScriptCommand s_gs9_g58_s0_eff0_script[] = { /* 0x81c3738 */
    DEBUGINFO_O(8422),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x20,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g58_s0_lives0_dlg0[] = { /* 0x81c37c8 */
    DEBUGINFO_O(8434),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a34aec8c255ee112b40afe7c9c5e1d3dfe3ed0dbd3f92958fff7385842cae9a3@@)),
    VARIANT(/* == */  1, (@@STRING:d34039e1b641d6d186790f4ec2f5466b3355c9458bc10e3908c61f766dcfef30@@)),
    VARIANT(/* == */  1, (@@STRING:d7261089fb35440fb53178ed6bbf9361017790e542233a7964fb85e861d58f87@@)),
    VARIANT_DEFAULT((@@STRING:7f6c374f3677de96a68255f6029aff8d9a0af235cf898de0b913213099560de9@@)),
    VARIANT_DEFAULT((@@STRING:37cbbda4ced7543fc7a578b071b7c2798d9d65b45b939d80b1f50f74b57f6ca3@@)),
    VARIANT_DEFAULT((@@STRING:ed28bd5ba8f41ddae2c35bc72431fd76e24881cc7174e1f43bb5df10be4cb21b@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(5),
    BGM_FADEOUT(90),
    MSG_NPC(-1, (@@STRING:417207efd5924253e0192f9f494c2686a94a1747d0b4cd56808e80bf7d8ca46c@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(463),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(15),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 63),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:153bbf27b04fac27dbd15b7476335a1c3bf1938e5f1623aaa84f32f4e3554023@@)),
    VARIANT_DEFAULT((@@STRING:7312a3f0d72b30fa6cf1112ab1b86382856b92cbd14383153001401f15641c35@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:fbcd1835eb15e54e2ff267c13cc4da1b84c2e0f1c771b6cbcad50e19c57e7c13@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(469),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:6211185fbfc938c960a0033fdf47a86ca0cb28f15a716e65dc9452a8bf89ba80@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:3610f39a478d69c59223de6baac89f7e751fafec508e63dab86b856e7e6777e1@@)),
    MSG_NPC(2, (@@STRING:9a46903d6248824e7edf38de04034786e88dbf394379b8e65c223b6bc83061c8@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    MSG_NPC(1, (@@STRING:f3e6657c45beb5c2342e0e18d64b0a4fe78e597995588763e0c9c8d4287a89b1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    WAIT(5),
    ALERT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x20,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x60,  0x0200,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};









static const struct ScriptCommand s_gs9_g58_s0_lives1_dlg0[] = { /* 0x81c3df4 */
    DEBUGINFO_O(8507),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    AWAIT_CUE(6),
    WAIT(5),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x20,  0x0200,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x60,  0x0200,  0x00000002,  0x00000000, NULL },
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g58_s1_lives0_dlg0[] = { /* 0x81c3f14 */
    DEBUGINFO_O(8528),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_GRID(512, 64),
    WALK_GRID(512, 65),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_GRID(512, 64),
    { 0x89, 0x60,  0x0200,  0x00000002,  0x00000000, NULL },
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g59_s0_station_sref_script[] = { /* 0x81c4014 */
    DEBUGINFO_O(8547),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    CALL_STATION(  4,  0),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g59_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g59_s0_station_sref_script }; /* 0x81c40f4 */

static const struct ScriptCommand s_gs9_g59_s0_lives0_dlg0[] = { /* 0x81c4100 */
    DEBUGINFO_O(8566),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000068,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:21d7d6e9ff09b8a242d73b9dea5ab831bdc2f9956f88fc05d7f84911f40f4fcb@@)),
    VARIANT(/* == */  1, (@@STRING:20c6070965bdc228b7a2425f6c8418476edc67dcc37e11acdb6f0f2f52824420@@)),
    VARIANT(/* == */  1, (@@STRING:8892eedd320c1b7ad906cc53f54d6a42089ac8d8f87119571f0710e14e7bed67@@)),
    VARIANT(/* == */  3, (@@STRING:5b03d0c8783369a200a0b1cbba3455a0d2df51213b5b2de433e01723fb852c48@@)),
    VARIANT(/* == */  3, (@@STRING:f8acd01b5d19aa7bae4f5f11dc98c517b1f054e22f404eb11972ee4837de06c6@@)),
    VARIANT(/* == */  3, (@@STRING:622318d112b8ab15797aea53c99b89084a80eb9cacd1e56ba4b3ddc5ec4c6def@@)),
    VARIANT_DEFAULT((@@STRING:ff96d54d00e5e527c847cf9ce23385be05d99b3c0524475d3ca2a4bbce29ea3d@@)),
    VARIANT_DEFAULT((@@STRING:512d23921f3d9bf7967d36836530d7cd7654f506e6a710c7f06f82e848640b58@@)),
    VARIANT_DEFAULT((@@STRING:9c290802c75438a631a71f44b7f641925e05a9a82bae259301082ed7a840d8d6@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g59_s0_lives1_dlg0[] = { /* 0x81c444c */
    DEBUGINFO_O(8592),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g60_s0_station_sref_script[] = { /* 0x81c44ac */
    DEBUGINFO_O(8601),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    CALL_STATION( 61,  0),
    RET,
};

static const ScriptRef s_gs9_g60_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g60_s0_station_sref_script }; /* 0x81c458c */

static const struct ScriptCommand s_gs9_g60_s0_eff0_script[] = { /* 0x81c4598 */
    DEBUGINFO_O(8620),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g60_s0_lives0_dlg0[] = { /* 0x81c45d8 */
    DEBUGINFO_O(8627),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000005b,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b85fa08dce135ffa4cca204d67186d289190edca0bde8eae5c94da371a660f3d@@)),
    VARIANT(/* == */  1, (@@STRING:bc8c8bf5c40614bded57d0ddc69706819047cd6d488736b3dd86dff064615754@@)),
    VARIANT(/* == */  1, (@@STRING:cf7f3661877f308f19fbf44f58a6a4ff40b9b2b588f6e9a600d3cad5a13e329c@@)),
    VARIANT(/* == */  1, (@@STRING:45c20e832b7d43c4606b8e1076884ffe450b4876b3c96a5ca6650531fdc6facb@@)),
    VARIANT(/* == */  1, (@@STRING:c3861fca2672b4e0e0f4928af0d16722b2781a4c26b58f016cbafdbce81cc021@@)),
    VARIANT_DEFAULT((@@STRING:c3cb32ee5dce3c416527f2112dca01871883a6c6baee0a1827762a6f70194aed@@)),
    VARIANT_DEFAULT((@@STRING:5cc77cae08ffd76c3ce63d8bc2cd4a35297d3dd54b2ca48e47217e5d6c16df8b@@)),
    VARIANT_DEFAULT((@@STRING:76b1ab751dd17828b00517ed8974e8b17d1f4f69b1e3db66cd193838e5a0d565@@)),
    VARIANT_DEFAULT((@@STRING:42c2836df39c4c6753469c692c3da5c00347d2a2473dc29dc34af3a97e9f1fee@@)),
    VARIANT_DEFAULT((@@STRING:9f2ca3d30b6c2cd81a01c2394076c047895ebbb81ffa0571e2dd3c90696d20e2@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g60_s0_lives1_dlg0[] = { /* 0x81c4994 */
    DEBUGINFO_O(8654),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g61_s0_station_sref_script[] = { /* 0x81c49f4 */
    DEBUGINFO_O(8663),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  4,  0),
    RET,
};

static const ScriptRef s_gs9_g61_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g61_s0_station_sref_script }; /* 0x81c4a34 */

static const struct ScriptCommand s_gs9_g61_s0_lives0_dlg0[] = { /* 0x81c4a40 */
    DEBUGINFO_O(8672),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g61_s0_lives0_dlg2[] = { /* 0x81c4a70 */
    DEBUGINFO_O(8678),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:422234887cfa98ecd7736c82f45ffc903a385777c57e769816ded0db2c02f564@@)),
    VARIANT_DEFAULT((@@STRING:80c0098811482fac36cfad16f21002aeb4b65ae6eecfb68e3fbdf5f3a356d500@@)),
    CHOICE(/* label */  1, (@@STRING:d7214b4470e6db33c4f6e5fb11b6fa95270ecc74eceff2b7dc7600dddc71b1b8@@)),
    CHOICE(/* label */  2, (@@STRING:cee8ae0dc6821809756f2a144bea9c6803e7650b70ad9cc57a8686a564bd0988@@)),
  LABEL(2), /* = 0x02 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9eb35b8611f068801d000bbdb25943916f2edc49ececbbc87b4052d678eff51e@@)),
    VARIANT(/* == */  1, (@@STRING:912724c84a350d69c12338e3f8d1e55ab4c73a7017af2c68fcfc4f453c66728d@@)),
    VARIANT_DEFAULT((@@STRING:94ae606bccb54c67c520b805035c0ecaac3f23cb6f272b56e08b599515921746@@)),
    VARIANT_DEFAULT((@@STRING:e973e25f04b44ffeb11975e55502f2748b447392c2215191f601e2bb69bcd4d8@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4ac39637616938e8d5a61165e1263af7e6f386f989a2c0eb0095deaf8db0c8af@@)),
    VARIANT(/* == */  1, (@@STRING:1db5f8236c36fc8d79120abbb8e7a2847b4ca08ac47ecfd874f36c1dbfee95df@@)),
    VARIANT(/* == */  1, (@@STRING:796d71b305e28edd28e9f2bfcb38381a3aded162bef90eb7da68e080ba2e4d34@@)),
    VARIANT_DEFAULT((@@STRING:5c5970bc1594a5d26b6835d29bb005511ec99470a9704ccfa8d613f573a9ba9d@@)),
    VARIANT_DEFAULT((@@STRING:c79d3e543bab39a787568edb94a6e4520dac80d4b9b7f67ac447f846f7b60ca0@@)),
    VARIANT_DEFAULT((@@STRING:9888b510464b88cb46f4b03957a725cb85ada4a37ff4b84b66c5e7fdac5c6a66@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(90),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    EXECUTE_FUNCTION(EVENT_M01E09A_L009),
    HALT,
};


static const struct ScriptCommand s_gs9_g61_s1_station_sref_script[] = { /* 0x81c4d58 */
    DEBUGINFO_O(8712),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 0),
    RET,
};

static const ScriptRef s_gs9_g61_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g61_s1_station_sref_script }; /* 0x81c4da8 */

static const struct ScriptCommand s_gs9_g61_s1_lives0_dlg0[] = { /* 0x81c4db4 */
    DEBUGINFO_O(8722),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:8fc55dd3213789e25fe90911b70f092eba1f116850283da2d001323537491560@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g61_s1_lives1_dlg0[] = { /* 0x81c4e54 */
    DEBUGINFO_O(8735),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(10),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g62_s0_station_sref_script[] = { /* 0x81c4ec4 */
    DEBUGINFO_O(8745),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g62_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g62_s0_station_sref_script }; /* 0x81c4f94 */

static const struct ScriptCommand s_gs9_g62_s0_eff0_script[] = { /* 0x81c4fa0 */
    DEBUGINFO_O(8763),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    WAIT(10),
    { 0x89, 0x40,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0x30,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g62_s0_lives0_dlg0[] = { /* 0x81c5060 */
    DEBUGINFO_O(8778),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000052,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:abd04929d2a91c5f9eb182bcc23eddc0e32c050d08e3623162243ffd0e8891bf@@)),
    VARIANT_DEFAULT((@@STRING:df4048344c2bdeda267a4605c13075013450262738f167c4d724213ff05e54df@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:195c7d2c795460b8d5880e37a98d2597dd6b04e9a4fbe2a28ebd834c19757b31@@)),
    VARIANT_DEFAULT((@@STRING:f7d0866c493b9252113e9db6bcc92ab144ddcfa57a086dcf89f0188cdb1c8e40@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    BGM_FADEOUT(150),
    ALERT_CUE(6),
    ALERT_CUE(4),
    WAIT(10),
    { 0x89, 0x40,  0x0100,  0x00000000,  0x00000000, NULL },
    WAIT(45),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0000, 0x00000000),
    MSG_QUIET(0, (@@STRING:40a940912d1082b51839eac0b9cad78a40b9f8f8d1994ac67430b7f71c10af63@@)),
    MSG_QUIET(0, (@@STRING:7109f41a1e64f5fc525896a1785089938b52a1388409c54785e354a92b585f78@@)),
    MSG_QUIET(0, (@@STRING:4859f2755794bc3bea09eb794e1a12ba94cc7ebf6cc3be17434bf4e375ee1ab5@@)),
    MSG_QUIET(0, (@@STRING:048cf8cf22ad7c8aa92268264b8074d0e0eb4720b2c58e5ac9c9eed01f92b375@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c43eadd8443f93e0199b534d3b128c8393e7bf5ad54f4ef6173edc74cefc13f9@@)),
    VARIANT_DEFAULT((@@STRING:d9852c20d48a58c6e256dbdceaa7d5ef775f3ed0b83cd1add996840cbcd654ad@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(15),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:aa0ae284680a7bc6a24f2c95d1f7560a00544a1a4d192d6a37f17469d7a381ff@@)),
    VARIANT_DEFAULT((@@STRING:96c755dafdd31077dfcdaf413a6eac0c49ebdff675276dc1ad92a2707e164de7@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(463),
    CALL_SCRIPT(NOTICE_FUNC),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x89, 0x48,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};




static const struct ScriptCommand s_gs9_g62_s0_lives1_dlg0[] = { /* 0x81c5538 */
    DEBUGINFO_O(8835),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x89, 0xa0,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x89, 0x20,  0x0100,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g63_s0_station_sref_script[] = { /* 0x81c55d8 */
    DEBUGINFO_O(8848),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g63_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g63_s0_station_sref_script }; /* 0x81c56a8 */

static const struct ScriptCommand s_gs9_g63_s0_lives0_dlg0[] = { /* 0x81c56b4 */
    DEBUGINFO_O(8866),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:47becf7455003efb86e05ecec7bb5f9793272f0d420272130e9ce66cbb3630c7@@)),
    VARIANT_DEFAULT((@@STRING:900f65def0709452c68841fbc28e66d17461a5f462e0572a25384feea0447ec5@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:343ec801a50e5c6e7569ab4e11bb330522b6d575a983cda3254e0ef8a94d1dfe@@)),
    VARIANT(/* == */  1, (@@STRING:0315784a3bd0a0b5e3418bab1267efa7ee9cc3f03a426ac9a977101013784625@@)),
    VARIANT(/* == */  1, (@@STRING:e651faa741631decb68b0b3632827e38a3284360b8ffbbe1833b72f52c40b096@@)),
    VARIANT_DEFAULT((@@STRING:a925b791c93ac66cce7d60766be4b9875e3410bd3d8625a59bbc693f1dac5043@@)),
    VARIANT_DEFAULT((@@STRING:425545310f0223b29ce4b730251aab0e6674acd7512b5501989419250f8e6819@@)),
    VARIANT_DEFAULT((@@STRING:67625b28f50b1831301d55ffaabd3a7ec9bad434ae6ba40fc9fa346e3b8aec78@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g63_s0_lives1_dlg0[] = { /* 0x81c5a54 */
    DEBUGINFO_O(8893),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g64_s0_station_sref_script[] = { /* 0x81c5ab4 */
    DEBUGINFO_O(8902),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g64_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g64_s0_station_sref_script }; /* 0x81c5ad4 */

static const struct ScriptCommand s_gs9_g64_s1_station_sref_script[] = { /* 0x81c5ae0 */
    DEBUGINFO_O(8909),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 0),
    RET,
};

static const ScriptRef s_gs9_g64_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g64_s1_station_sref_script }; /* 0x81c5b30 */

static const struct ScriptCommand s_gs9_g64_s1_lives0_dlg0[] = { /* 0x81c5b3c */
    DEBUGINFO_O(8919),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    MSG_QUIET(0, (@@STRING:d5502dbd555dbc6768a641649ba5a13e9fee8554e44ccb9c785199cc67449070@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs9_g65_s0_station_sref_script[] = { /* 0x81c5bf8 */
    DEBUGINFO_O(8931),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g65_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g65_s0_station_sref_script }; /* 0x81c5cc8 */

static const struct ScriptCommand s_gs9_g65_s0_lives0_dlg0[] = { /* 0x81c5cd4 */
    DEBUGINFO_O(8949),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3ec6925284a25f5d45478482dd261c1dd44f9ffe0475c50f6a303c180a0f36a3@@)),
    VARIANT(/* == */  1, (@@STRING:94dd894890e45f12c7ca99b919efd6bd04c82dade14a9242820db030e5e6c7cf@@)),
    VARIANT_DEFAULT((@@STRING:1330960e124f86c8e7ad876e94bcd4ea1f0b7b0fe3edcb0445917ebb0778f4b5@@)),
    VARIANT_DEFAULT((@@STRING:f29620414970fc0ab1679e2e197d8dfdf76d6a4c7a706eb3ea361619177f11a1@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs9_g65_s0_lives1_dlg0[] = { /* 0x81c5eb4 */
    DEBUGINFO_O(8971),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x89, 0x60,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g66_s0_station_sref_script[] = { /* 0x81c5f44 */
    DEBUGINFO_O(8983),
    JUMP_STATION(  4,  0),
    RET,
};

static const ScriptRef s_gs9_g66_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g66_s0_station_sref_script }; /* 0x81c5f74 */

static const struct ScriptCommand s_gs9_g67_s0_station_sref_script[] = { /* 0x81c5f80 */
    DEBUGINFO_O(8991),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g67_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g67_s0_station_sref_script }; /* 0x81c6050 */

static const struct ScriptCommand s_gs9_g67_s0_lives0_dlg0[] = { /* 0x81c605c */
    DEBUGINFO_O(9009),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:59ebecbc6f19e208bbbe5271f4c99f1d7ab63100c8ee7f946158b993941b37e3@@)),
    VARIANT(/* == */  1, (@@STRING:e97df8dd0da1dd3c447cfe148d1cdcccfcdede79bf8db159eb1a94aaff64798a@@)),
    VARIANT(/* == */  1, (@@STRING:cb1f41f90a483b3feec7e3952e09484c0278964e1aaed6c83f392248530ba98d@@)),
    VARIANT(/* == */  1, (@@STRING:cf939f1b3ed7b3fa003e4855e23b3657ced119ac487479966354545cdbfe94a3@@)),
    VARIANT(/* == */  1, (@@STRING:54681b93370a2c238a34d164b98e60ae0c38bcb5aaff7518b750507317112a6f@@)),
    VARIANT(/* == */  3, (@@STRING:d9852c20d48a58c6e256dbdceaa7d5ef775f3ed0b83cd1add996840cbcd654ad@@)),
    VARIANT(/* == */  3, (@@STRING:6fc404dda174ade79f6d06164e19b532ff725dd46d1d43bb1a8361462dfd0842@@)),
    VARIANT(/* == */  3, (@@STRING:bb6ac26bd12e7c7064f7d2356847d0bc80f5011f7a76775bf5ac0c48afa54905@@)),
    VARIANT(/* == */  3, (@@STRING:cf939f1b3ed7b3fa003e4855e23b3657ced119ac487479966354545cdbfe94a3@@)),
    VARIANT(/* == */  3, (@@STRING:406e2660387c4047f88fa2d46b9479564eb7008b6f00113fe126ba17dd063084@@)),
    VARIANT_DEFAULT((@@STRING:d9852c20d48a58c6e256dbdceaa7d5ef775f3ed0b83cd1add996840cbcd654ad@@)),
    VARIANT_DEFAULT((@@STRING:e97df8dd0da1dd3c447cfe148d1cdcccfcdede79bf8db159eb1a94aaff64798a@@)),
    VARIANT_DEFAULT((@@STRING:be8d65016f40ce449d732dc6f41e58548d4eb028ed74dcd7accbadc59d06e011@@)),
    VARIANT_DEFAULT((@@STRING:cf939f1b3ed7b3fa003e4855e23b3657ced119ac487479966354545cdbfe94a3@@)),
    VARIANT_DEFAULT((@@STRING:15f67a63838d381e982529db7629ff3590ad2bcfc5af608553c3f0407d85c46c@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs9_g67_s0_lives1_dlg0[] = { /* 0x81c63e4 */
    DEBUGINFO_O(9039),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g68_s0_station_sref_script[] = { /* 0x81c6444 */
    DEBUGINFO_O(9048),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    FLASH_FROM(TRUE, PALUTIL_KIND_13, 30, RGB_U32(0x00, 0x00, 0x00)),
    AWAIT_CUE(3),
    WAIT(0),
    FLASH_TO(TRUE, PALUTIL_KIND_13, 35, RGB_U32(0x00, 0x00, 0x00)),
    WAIT(90),
    RET,
  LABEL(0), /* = 0x00 */
    FLASH_TO(TRUE, PALUTIL_KIND_13, 120, RGB_U32(0x00, 0x00, 0x00)),
    WAIT(80),
    RET,
};

static const ScriptRef s_gs9_g68_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g68_s0_station_sref_script }; /* 0x81c6514 */

static const struct ScriptCommand s_gs9_g68_s0_eff0_script[] = { /* 0x81c6520 */
    DEBUGINFO_O(9066),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    WALK_GRID(256, 66),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0x30,  0x004c,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g68_s0_lives0_dlg0[] = { /* 0x81c65e0 */
    DEBUGINFO_O(9081),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x59, 0x00,  0x00c8,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(150),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(120),
    ALERT_CUE(17),
    AWAIT_CUE(5),
    WAIT(80),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(90),
    ALERT_CUE(17),
    AWAIT_CUE(5),
    { 0x59, 0x00, -0x00c8,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(9),
    ALERT_CUE(15),
    ALERT_CUE(16),
    { 0x89, 0x78,  0x004c,  0x00000004,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(6),
    CALL_LABEL(0),
    WAIT(100),
    ALERT_CUE(6),
    CALL_LABEL(0),
    WALK_GRID(256, 67),
    WAIT(140),
    ALERT_CUE(3),
    HALT,
  LABEL(0), /* = 0x00 */
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    ALERT_CUE(14),
    ALERT_CUE(15),
    ALERT_CUE(16),
    RET_DIRECT,
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives1_dlg0[] = { /* 0x81c68e0 */
    DEBUGINFO_O(9132),
    { 0x54, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(6),
    WAIT(50),
    SELECT_ANIMATION(2),
    WAIT(15),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(30),
    ALERT_CUE(18),
    WAIT(30),
    WAIT(20),
    { 0x89, 0x28,  0x004c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x89, 0x28,  0x004c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 68),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_eff1_script[] = { /* 0x81c6a20 */
    DEBUGINFO_O(9155),
    AWAIT_CUE(18),
    CALL_SCRIPT(NOTICE_FUNC),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g68_s0_lives2_dlg0[] = { /* 0x81c6a60 */
    DEBUGINFO_O(9162),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(7),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    WAIT(10),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(7),
    { 0x89, 0x10,  0x0080,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    WAIT(40),
    { 0x89, 0x08,  0x0100,  0x00000000,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(30),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives3_dlg0[] = { /* 0x81c6be0 */
    DEBUGINFO_O(9189),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(8),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    WAIT(15),
    CALL_SCRIPT(NOTICE_FUNC),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(40),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    WAIT(35),
    { 0x89, 0x08,  0x0100,  0x00000000,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(30),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WAIT(45),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives4_dlg0[] = { /* 0x81c6dc0 */
    DEBUGINFO_O(9222),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(9),
    WAIT(10),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(9),
    WAIT(60),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(9),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(40),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(10),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(9),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(20),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WAIT(20),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(45),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives5_dlg0[] = { /* 0x81c6fc0 */
    DEBUGINFO_O(9257),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(9),
    WAIT(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(9),
    WAIT(15),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(9),
    WAIT(50),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(9),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(40),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(40),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(9),
    WAIT(35),
    WALK_GRID(256, 69),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives6_dlg0[] = { /* 0x81c7170 */
    DEBUGINFO_O(9287),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(10),
    WAIT(25),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(10),
    WAIT(20),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(10),
    WAIT(10),
    { 0x89, 0x20,  0x0080,  0x00000001,  0x00000000, NULL },
    AWAIT_CUE(10),
    WAIT(35),
    WALK_GRID(256, 71),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives7_dlg0[] = { /* 0x81c72a0 */
    DEBUGINFO_O(9309),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(11),
    WAIT(5),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(11),
    WAIT(30),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(30),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(11),
    WAIT(45),
    WALK_GRID(204, 72),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives8_dlg0[] = { /* 0x81c73e0 */
    DEBUGINFO_O(9332),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(12),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(12),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(12),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WALK_RELATIVE(128, -8, 0),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(10),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(12),
    WAIT(40),
    WALK_GRID(256, 73),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    WAIT(45),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    WAIT(45),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(12),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives9_dlg0[] = { /* 0x81c7630 */
    DEBUGINFO_O(9372),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(13),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(13),
    WAIT(10),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(20),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(13),
    WAIT(50),
    WALK_GRID(256, 70),
    AWAIT_CUE(13),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives10_dlg0[] = { /* 0x81c77c0 */
    DEBUGINFO_O(9400),
    SELECT_ANIMATION(5),
    WAIT(1),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(10),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(14),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(14),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(70),
    { 0x89, 0x28,  0x0080,  0x00000002,  0x00000000, NULL },
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(14),
    { 0x89, 0x10,  0x0080,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(14),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(14),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives11_dlg0[] = { /* 0x81c7940 */
    DEBUGINFO_O(9427),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(15),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(15),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(15),
    WAIT(60),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(30),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(15),
    WAIT(30),
    { 0x89, 0x08,  0x0100,  0x00000002,  0x00000000, NULL },
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(30),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(15),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_lives12_dlg0[] = { /* 0x81c7b10 */
    DEBUGINFO_O(9459),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(16),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(10),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(16),
    AWAIT_CUE(15),
    WAIT(60),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(16),
    AWAIT_CUE(16),
    WAIT(35),
    { 0x89, 0x0c,  0x0100,  0x00000005,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(16),
    HALT,
};

static const struct ScriptCommand s_gs9_g68_s0_eff2_script[] = { /* 0x81c7cb0 */
    DEBUGINFO_O(9488),
    { 0x59, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    AWAIT_CUE(17),
    { 0x56, 0x00,  0x0003,  0x000001b7,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    ALERT_CUE(14),
    ALERT_CUE(15),
    ALERT_CUE(16),
    { 0x56, 0x00,  0x0003,  0x00000180,  0x00000000, NULL },
    WAIT(100),
    ALERT_CUE(5),
    AWAIT_CUE(17),
    { 0x56, 0x00,  0x0003,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x56, 0x00,  0x0003,  0x00000181,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(5),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    ALERT_CUE(14),
    ALERT_CUE(15),
    ALERT_CUE(16),
    WAIT(1),
    { 0x56, 0x00,  0x0000,  0x000000aa,  0x00000000, NULL },
    WAIT(90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(14),
    ALERT_CUE(12),
    ALERT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x000000a9,  0x00000000, NULL },
    WAIT(70),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x56, 0x00,  0x0000,  0x000000a8,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x56, 0x00,  0x0000,  0x000000a7,  0x00000000, NULL },
    WAIT(30),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(17),
    HALT,
};

static const struct ScriptCommand s_gs9_g69_s0_station_sref_script[] = { /* 0x81c8040 */
    DEBUGINFO_O(9548),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs9_g69_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g69_s0_station_sref_script }; /* 0x81c80b0 */

static const struct ScriptCommand s_gs9_g69_s0_eff0_script[] = { /* 0x81c80bc */
    DEBUGINFO_O(9560),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x30,  0x0080,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    WAIT(90),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g69_s0_lives0_dlg0[] = { /* 0x81c817c */
    DEBUGINFO_O(9575),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    ALERT_CUE(6),
    { 0x89, 0x15,  0x0080,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2e, 0x02,  0x0002, -0x00000002,  0x00000000, NULL },
    MSG_NPC(2, (@@STRING:a01f9534a9bf380dac2e2da406c63fa8561918e7aa87ce9373eec211b5b13803@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    { 0x89, 0x18,  0x0080,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:c9067af3fc2757ee04aa99c316c697c5378cebb1f916e3f687f649c76994c19e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:238c40db71aa433039d41e0b153fea24d17763a6c444dc7b1db254045037af27@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:02bc33eb3b886582e0fde1f95e2cbe7a5d2f866edd3b64dc59ae8e2cd7a73716@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:3ec9652035c8327599c4259eb7aafb8707d25232311685b24d1dc8e88448a5c2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:fbc477199ea22173e6881563fc7981e6bed3b7b7e7d7f75c4138c4e2d39fccd9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(10),
    { 0x89, 0x50,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x50,  0x0100,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};







static const struct ScriptCommand s_gs9_g69_s0_lives1_dlg0[] = { /* 0x81c8584 */
    DEBUGINFO_O(9635),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x89, 0x18,  0x0080,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 74),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x48,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x50,  0x0100,  0x00000002,  0x00000000, NULL },
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs9_g69_s0_lives2_dlg0[] = { /* 0x81c86f4 */
    DEBUGINFO_O(9661),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x40,  0x0100,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WAIT(5),
    { 0x89, 0x40,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x68,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g69_s0_lives3_dlg0[] = { /* 0x81c8804 */
    DEBUGINFO_O(9681),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x48,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WAIT(5),
    { 0x89, 0x38,  0x0100,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x68,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs9_g70_s0_station_sref_script[] = { /* 0x81c88e4 */
    DEBUGINFO_O(9698),
    JUMP_STATION(  4,  0),
    RET,
};

static const ScriptRef s_gs9_g70_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g70_s0_station_sref_script }; /* 0x81c8914 */

static const struct ScriptCommand s_gs9_g71_s0_station_sref_script[] = { /* 0x81c8920 */
    DEBUGINFO_O(9706),
    SELECT_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    EXECUTE_FUNCTION(EVENT_M02E01A_L003),
    HALT,
};

static const ScriptRef s_gs9_g71_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g71_s0_station_sref_script }; /* 0x81c8990 */

static const struct ScriptCommand s_gs9_g71_s0_lives0_dlg0[] = { /* 0x81c899c */
    DEBUGINFO_O(9718),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:55fb0266979cb04952d8ca4117e79d6c21f7d861ef9487f80ba82af015bad95e@@)),
    VARIANT(/* == */  1, (@@STRING:18eed46cf87370f969ef739f628caf721784b2411b892ee179bc0c547a1830c1@@)),
    VARIANT(/* == */  3, (@@STRING:8a0f58dfacf81668570a74b415fcf8a0d74c4acb40c94197862be795ee6d35ae@@)),
    VARIANT(/* == */  3, (@@STRING:d6bde922b3705f77df7e33828a7fc695f716d709afbfe005a6cde7566b866b7e@@)),
    VARIANT_DEFAULT((@@STRING:55fb0266979cb04952d8ca4117e79d6c21f7d861ef9487f80ba82af015bad95e@@)),
    VARIANT_DEFAULT((@@STRING:7219c2cbc0b01347e30227ebc34af89a846d69bc71436f0f1aa2f9bd8c5ad14a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs9_g71_s0_lives1_dlg0[] = { /* 0x81c8c24 */
    DEBUGINFO_O(9741),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs9_g72_s0_station_sref_script[] = { /* 0x81c8ca4 */
    DEBUGINFO_O(9752),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    CALL_STATION(  4,  0),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g72_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g72_s0_station_sref_script }; /* 0x81c8d84 */

static const struct ScriptCommand s_gs9_g72_s0_lives0_dlg0[] = { /* 0x81c8d90 */
    DEBUGINFO_O(9771),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:bdfc3b15793f177a4e8adb1a1d3eae5aaac1fd520b09784c1d3f7aa316f5d57e@@)),
    VARIANT(/* == */  1, (@@STRING:f8a75b91dae294b378507c1bd198763f2fd3bb2f8c374df986e20c6149645f49@@)),
    VARIANT(/* == */  1, (@@STRING:17cbd71b22c60f84aa28f7aacc78ba3f47c21b4edcd614d04a4457fda6e40c80@@)),
    VARIANT(/* == */  1, (@@STRING:e85d86acc9bee329fc16b1fa98bdd89a20e145616aac0fc680c4fd276e2ba374@@)),
    VARIANT(/* == */  1, (@@STRING:86761a33ae1c342c1dc0d7e5646bb4b1069c26d2802746c8ae09fdc7266fb9ae@@)),
    VARIANT(/* == */  1, (@@STRING:2fbae90b17e4b069c2d2d073543942ebde31344810aed467286de80c1ab23cbd@@)),
    VARIANT(/* == */  1, (@@STRING:5788376e4c88cd393d25bc7b367401fa8c01076a08a528769dd1ba7a7aadf60c@@)),
    VARIANT(/* == */  1, (@@STRING:5bc6dfcca363e55323fd3bde5b115b45e5309a5152c4f5b95eb06f15b536d1d5@@)),
    VARIANT(/* == */  3, (@@STRING:6bc396e9499135d0ae49a66daa061169f980c86a0459a551ca67d0b4cb8bc770@@)),
    VARIANT(/* == */  3, (@@STRING:77eff556503122f29c09c9a1bc2b9e0935206a38eba4c0a9353ba509fe5713ab@@)),
    VARIANT(/* == */  3, (@@STRING:fe86b067716e16672a19039fa70cd939190290dad503f73574edd155834b1799@@)),
    VARIANT(/* == */  3, (@@STRING:c9c8c459c2b43c8aad8f2956714dd3cf3b7266ad972dc8835d6259dfc7099696@@)),
    VARIANT(/* == */  3, (@@STRING:b6b8af940f074b118ff276857e405ec62763758bc90fd979c7c9afc675519d9f@@)),
    VARIANT(/* == */  3, (@@STRING:8556ee693208273623122eaff6a1f3a87745d37e157ce2eca7c6328e250f4492@@)),
    VARIANT(/* == */  3, (@@STRING:725f1095f113594a29ac93e83d4e847525a616923f4933eb4a344e60a027d2ec@@)),
    VARIANT(/* == */  3, (@@STRING:38f4f4718e9e22a76cbe82fedceb7eed19f10a7f923d2045814fbc56536d7df4@@)),
    VARIANT_DEFAULT((@@STRING:a19e5ae7a5947add4a6a9c3b605c32ddac9dea669a98f7e2678bc43cabc7b58f@@)),
    VARIANT_DEFAULT((@@STRING:d87a3a5b6cdcc69e847b25792f5da1914e26036953a5380b12f1f9632f8274ed@@)),
    VARIANT_DEFAULT((@@STRING:f90145d1e5618aecade2efb177d103bea6a8a8168732844632cd221a258f4f64@@)),
    VARIANT_DEFAULT((@@STRING:c9c8c459c2b43c8aad8f2956714dd3cf3b7266ad972dc8835d6259dfc7099696@@)),
    VARIANT_DEFAULT((@@STRING:4fbd2be5e2356870675e032a5baf63da6a9b05042d4e895fb3dc96f255a7c4e6@@)),
    VARIANT_DEFAULT((@@STRING:71b305a2b079a8d441f8981bcf6b7bf191c517600748e6a54f38b1a09715a10f@@)),
    VARIANT_DEFAULT((@@STRING:f25d4a709e0b864b9b9744e04d7f368c50b0167571e7b057e56312ef2b15a138@@)),
    VARIANT_DEFAULT((@@STRING:f4e972c6e90792dcfa6de5a517aed92ac2e2d27e2489f170aeb62901b75b64b1@@)),
    TEXTBOX_CLEAR,
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:9416de17c219a43704fded177267b2ad89eb70141ef096d64d9006961dfdf4b3@@)),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:af97aedc3a2fd4ce96cf38403e871ff94c5836b846d111969bb066c42ea08cae@@)),
    VARIANT(/* == */  3, (@@STRING:386b6449cd85e951808c58565b5ac38f65a352bc87d8ab5134b010e91e2ca2c3@@)),
    VARIANT_DEFAULT((@@STRING:90930858423596dabe309f007ae3a57727b40802785ce557fbc3e0d44cacec81@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(3), /* = 0x03 */
    TEXTBOX_CLEAR,
    WAIT(4),
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6aba474be4c6b45c38a151f0f5b8afee0b9b79e45c1d364c91e703a4b2eab3f8@@)),
    VARIANT(/* == */  1, (@@STRING:996f3356f8dd0ab56f2540718afd5d87e65aa0fdbd041bce10321eb2f1e80504@@)),
    VARIANT(/* == */  1, (@@STRING:c09aae2f2ebdaa7d6bfc00fc07fec28a12385497356f581c0da30c23dd4f2a41@@)),
    VARIANT(/* == */  3, (@@STRING:c35904af9b69ddca53808321dae584babadf434caae5437bdba2e829a559d871@@)),
    VARIANT(/* == */  3, (@@STRING:efa4103fb039f1661880e3c57034239b90bffa1e92c8237e55663323bf1ef8c5@@)),
    VARIANT(/* == */  3, (@@STRING:8fd0c7c260fc04caad8dd16f379a218d3fbe40a9c3fd3563f454352e9d4c8219@@)),
    VARIANT_DEFAULT((@@STRING:c35904af9b69ddca53808321dae584babadf434caae5437bdba2e829a559d871@@)),
    VARIANT_DEFAULT((@@STRING:439f1ab9d2921838ebc8a188ee80f8b81ce9c91654ad389e2f2ed0bd30f67adb@@)),
    VARIANT_DEFAULT((@@STRING:15ab6faa608984071bca0446acaf6eafa1de0218c239ceb42254c8568be7225e@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000000),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:5ada918781e8e09eaff13655f9abb0c0f77591951987e2e256d4065f1949d7cf@@)),
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:5ada918781e8e09eaff13655f9abb0c0f77591951987e2e256d4065f1949d7cf@@)),
    VARIANT(/* == */  3, (@@STRING:06a7bd3afdbf47ce1a6294c1c6cfb973077acf1a6ecf815d05313cee0ec6beac@@)),
    VARIANT_DEFAULT((@@STRING:c8a2edf38b274d2c5ca84f3bc4e08e854b97aac8855c968cc90de3078ca487da@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(2), /* = 0x02 */
    TEXTBOX_CLEAR,
    WAIT(4),
    SELECT_ENTITIES(-1, 2),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:403cd9085ee7f3e74dfa25bb1030f8ea926db888d90e25de7931c96a1b6fb74c@@)),
    VARIANT(/* == */  1, (@@STRING:f4fbea87241d9a10e570909529ada1136dbcaa2d227f4e9e3d5082476dec0f8a@@)),
    VARIANT_DEFAULT((@@STRING:56ab309339ab88b1b839a8745484061f93724edd128b55995cebc5f575f27f91@@)),
    VARIANT_DEFAULT((@@STRING:9a78fff1da7db0f922bc9ee7fba0d3df64bb783c5de3468b29cb5825749ade64@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:06179d6ab015020e8257bf77e6418e121d07c4da96162abb0a085dec6aba672b@@)),
    VARIANT_DEFAULT((@@STRING:c55a2c849a2a0148f47ce62d42a44a9d553b333388695c6951a65d6044d9b61d@@)),
    TEXTBOX_CLEAR,
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:58514da16ae1261c1bb309150f0207bdd4e126e5c6059d278ac1b535c9e424b4@@)),
    VARIANT(/* == */  1, (@@STRING:5541a09e1e7ad2e1196dd90b5c8d18b4e4876f5683afa4ff8c3b29448c6cef6a@@)),
    VARIANT(/* == */  1, (@@STRING:3b6b05db103994520d70307be800346853c087d521218a261efb9cf0d3bc3321@@)),
    VARIANT(/* == */  1, (@@STRING:37842bbd90a4a2d015666aa10ffb6b4f6b59c77b3d718c604b02ffdc9ac54007@@)),
    VARIANT(/* == */  1, (@@STRING:095c3c5c4343d53226768f737cf1aa67c73ac4c6bf53701c77eaaab339d11084@@)),
    VARIANT(/* == */  1, (@@STRING:a71361d065711e0fde7232e26017267fc316006668ad7eb9cedceb3ea20358bb@@)),
    VARIANT_DEFAULT((@@STRING:8b753fe331aac14866f8032c1c104f5ea3618d533f1c9691ce180368c248d365@@)),
    VARIANT_DEFAULT((@@STRING:ea568c020d0df1ccd072b6e768d97bd53c3c901b24bfeda5f63115b977f8c515@@)),
    VARIANT_DEFAULT((@@STRING:7311ae6a964c6e438f828c34cd896c30282b910d1d72e7ea88fa5ae1bf5105a4@@)),
    VARIANT_DEFAULT((@@STRING:9a93513d28a526e3aaaaac3779ca67c806c761b99534e55a836edc810fe10d10@@)),
    VARIANT_DEFAULT((@@STRING:f51c2395002522686ac049a364a531ca51e928909a1f7c171b19a1edd6add4a7@@)),
    VARIANT_DEFAULT((@@STRING:61da71094d6a278d131f8a2b24bc41ab81418b4295104f22590fc746ae67ad2b@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};




static const struct ScriptCommand s_gs9_g72_s0_lives1_dlg0[] = { /* 0x81ca410 */
    DEBUGINFO_O(9875),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g72_s1_lives0_dlg0[] = { /* 0x81ca470 */
    DEBUGINFO_O(9884),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(465),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g72_s2_lives0_dlg0[] = { /* 0x81ca500 */
    DEBUGINFO_O(9896),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g73_s0_evt0_sref_script[] = { /* 0x81ca580 */
    DEBUGINFO_O(9907),
    EXECUTE_STATION(-1, 74, 0),
    HALT,
};

static const ScriptRef s_gs9_g73_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs9_g73_s0_evt0_sref_script }; /* 0x81ca5b0 */

static const struct ScriptCommand s_gs9_g74_s0_station_sref_script[] = { /* 0x81ca5bc */
    DEBUGINFO_O(9915),
    SELECT_ENTITIES(-1, 0),
    CANCEL_ENTITIES(73, 0),
    AWAIT_CUE(3),
    EXECUTE_FUNCTION(EVENT_S01E01A_L001),
    RET,
};

static const ScriptRef s_gs9_g74_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g74_s0_station_sref_script }; /* 0x81ca61c */

static const struct ScriptCommand s_gs9_g74_s0_eff0_script[] = { /* 0x81ca628 */
    DEBUGINFO_O(9926),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0080,  0x00000000,  0x00000000, NULL },
    CAMERA_INIT_PAN,
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g74_s0_lives0_dlg0[] = { /* 0x81ca698 */
    DEBUGINFO_O(9936),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(-1, (@@STRING:e15a701356687f652e0f70463dd334d2d3056c57dd25a61051e05267f60a72d4@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(45),
    ALERT_CUE(4),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WALK_GRID(256, 75),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    MSG_NPC(2, (@@STRING:23cc311c57a8b6d670f79999b5d2490ad29bcb2298cffadd6b9eb31ebc968848@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    { 0x2d, 0x03,  0x0003,  0x0000006e,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    { 0x2d, 0x09,  0x0003,  0x0000006e,  0x00000000, NULL },
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9bb1d7f8a99f351433ad36c8795a6d34350dbc152f38ea65c14593b6744b0d93@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    MSG_NPC(2, (@@STRING:23c312e9bb8e54fd8585d93a82de465f17ba2d301c7534db1d167f773b7cf35f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:23b5fd257f3c00c8a0befed6d6bb9c602dfb96415d93ee40b136388c2a86eeac@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    MSG_NPC(2, (@@STRING:f4eb3698dcf0495183bd13bf490fcabc38912aca6a4f2750baff1c87ae1dcc68@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    WAIT(1),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e40ed3dbb64f2baaff993f5b8053d7e3ef285cbc63524d04463fc731fbc9b63f@@)),
    VARIANT(/* == */  1, (@@STRING:f31554efc900596f128332b86824788f4437fb869d000efa510ceacfb4ba1a4c@@)),
    VARIANT(/* == */  1, (@@STRING:113ea0888ce6495a2e9128b80e80981f41c8524b9bd126973a7cb1fe3ab44055@@)),
    VARIANT(/* == */  1, (@@STRING:c96e44f56cd3b17a3efe4ba42166565b88c890b28224d6358e4ceca33f1493fa@@)),
    VARIANT(/* == */  1, (@@STRING:0eaf0b7f3be32a1eeb9466b3f41507b08fcb36d3579b55d6f486373482ad751f@@)),
    VARIANT(/* == */  1, (@@STRING:959c5d9a17977c9fcde1278abf782b8adfd320cbe68c7ea27d70127b2f191d54@@)),
    VARIANT_DEFAULT((@@STRING:e40ed3dbb64f2baaff993f5b8053d7e3ef285cbc63524d04463fc731fbc9b63f@@)),
    VARIANT_DEFAULT((@@STRING:a9ba69f29d8d97ae12d0363087474807ab57041a6c35a137970e49176b022a45@@)),
    VARIANT_DEFAULT((@@STRING:f3f40113a573048274bc199161dc1931c5fda4892ae4a59e8291850a5680b4d5@@)),
    VARIANT_DEFAULT((@@STRING:9118af5b3aec46b61d109a3bbcf19a3a7d54a2f71e76190ec703be390ad81a55@@)),
    VARIANT_DEFAULT((@@STRING:f8b6c19eb89717be4da411d20f10f4f703ca7a922c8d70d00b111bd0f3addb09@@)),
    VARIANT_DEFAULT((@@STRING:a66d88759106d907ced1fd2efc57d63518f6c6220f1a2d23616abf90ec9973c9@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};



static const struct ScriptCommand s_gs9_g74_s0_lives1_dlg0[] = { /* 0x81cb178 */
    DEBUGINFO_O(10050),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    WALK_GRID(256, 76),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    WAIT_FANFARE2(470),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g74_s0_lives2_dlg0[] = { /* 0x81cb3a8 */
    DEBUGINFO_O(10088),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x01,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    WALK_GRID(256, 77),
    WALK_GRID(256, 78),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(7),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WAIT(5),
    SELECT_ANIMATION(19),
    WAIT(30),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    WALK_GRID(256, 82),
    ALERT_CUE(8),
    ALERT_CUE(6),
    WALK_GRID(256, 79),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g74_s0_lives3_dlg0[] = { /* 0x81cb508 */
    DEBUGINFO_O(10113),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    WALK_GRID(256, 80),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
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
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    WALK_GRID(256, 82),
    WALK_GRID(256, 81),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g75_s0_station_sref_script[] = { /* 0x81cb768 */
    DEBUGINFO_O(10154),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    RET,
};

static const ScriptRef s_gs9_g75_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g75_s0_station_sref_script }; /* 0x81cb7f8 */

static const struct ScriptCommand s_gs9_g75_s0_eff0_script[] = { /* 0x81cb804 */
    DEBUGINFO_O(10168),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_GRID(512, 83),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_GRID(256, 84),
    ALERT_CUE(5),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g75_s0_lives0_dlg0[] = { /* 0x81cb8b4 */
    DEBUGINFO_O(10182),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 2, 0),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, -2, 0),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8712777b258b9c155e8f0100f7c1348b80118341eb56f579145bf29415ff7708@@)),
    VARIANT(/* == */  1, (@@STRING:9824a410aa680ae2a72ec82f817ea7985613a6e6c004a40dadcf488e32d8d277@@)),
    VARIANT_DEFAULT((@@STRING:13bfef9d1a8d37f6b482c332971f348802b13dd1b26cb58a6b8a7bc2d8e14d26@@)),
    VARIANT_DEFAULT((@@STRING:87b24c6f425fc257dbd8ac1865aa8b95827665997271a44c22fac3a1f2500fd4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:82a31ba61b5ccaef87fd73be01154a4a52e06ab39dfb2fe1768c3b9bfb102e20@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    MSG_NPC(2, (@@STRING:7d4047b32bce81d5210f2d738bbcc46e326bbfe52e1735c032aac142312f23f6@@)),
    MSG_NPC(2, (@@STRING:b7b56fc62db0d8d61e2907c1ba67e73041183108dcd87663364d1e158be61639@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    FANFARE_PLAY(203),
    MSG_INSTANT((@@STRING:c2c5ee8d66f3ea82efd8920b3b81fc47e0a24ad4fcba1756c24d3c9a740bd79a@@)),
    WAIT_FANFARE1(203),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:f69fd84c29224db4957b9e1507e44643de1ab484f70e7726e8f149f76d17035b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:9c7d3ed0d0dc10543de8f63aa4495f291ef316413902eebc802b2ef09e849ab4@@)),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:7423706cbdd634dab6a05ed6ef639b9c0e8fc476bba0985de8ad70efa249e890@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    MSG_NPC(2, (@@STRING:709a6feea6cad903069c8c78bfbc0526ec91f2ec58de4bb0cf6d3e74e622fc5c@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1cd40eae69188d59b1d11b4ae0b84e5d8d24ac71a78cbb8d9fbe739f7e33e8bd@@)),
    VARIANT(/* == */  1, (@@STRING:5be3e5d0c9f5233134e877f533f4af2bd9d838ac0e9620bd97d561348015562f@@)),
    VARIANT(/* == */  3, (@@STRING:9442880a1138d46d845da8a8c8d6f5f99844dba842e7493eb52d27829e2cc17a@@)),
    VARIANT(/* == */  3, (@@STRING:2429cbd6b7aca566fe282ff854c98df5f0b8ba9cb07db09f70ac485a2479a568@@)),
    VARIANT_DEFAULT((@@STRING:b415220dda1c773ad9e08ae032e1d99aa121b516c5f0df61f00b789b7c28a532@@)),
    VARIANT_DEFAULT((@@STRING:5be3e5d0c9f5233134e877f533f4af2bd9d838ac0e9620bd97d561348015562f@@)),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d523b95495a0121af6d1fb95783db8fccf8767261461ff98731d47a56245fd96@@)),
    VARIANT(/* == */  3, (@@STRING:6526036598ad7d2018f8bb7f8b0b4cfef4954b472f80c621b5a470d3a69b3661@@)),
    VARIANT_DEFAULT((@@STRING:394c601a601db53ebbf779e35db846f54be26321294ee47e1992b28f8c7dfd1d@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    WAIT_FANFARE2(470),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(30),
    MSG_NPC(-1, (@@STRING:91eb3edf06ba581564e702e5bf5dfa7013b696101b7cc677b12a8ab73819ba00@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(1),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT_FANFARE2(465),
    ALERT_CUE(4),
    BGM_FADEOUT(90),
    AWAIT_CUE(5),
    WAIT(15),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0001, 0x0000000c),
    PORTRAIT_POS(1, 2, 0),
    MSG_NPC(1, (@@STRING:e5ccada1961ce6996b1af69f5f2a5a58d7132b22aabbb6b22e7af751589a900e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:7e603eda034f020e1bb5c5070e4cdf66a2ce19d8180b672f3b7623afa5f8375f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f3cb68ff55cf8165d8b35c0547abaaa40f88110921f30db29742dedcc8258695@@)),
    VARIANT(/* == */  1, (@@STRING:1cb05c791d7bf7d56584c1dee37f1e68329ae9230c63c52ec19e26650fe981e3@@)),
    VARIANT_DEFAULT((@@STRING:9eb88128705da1a81cb2d430ada2052796f20357a7e0a656c62da91e43a3cd22@@)),
    VARIANT_DEFAULT((@@STRING:8a954b134b6101cd0657011d384e11770dd49477e1f8b68a5f5c8b01ca03d355@@)),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_THERES_TROUBLE),
    ALERT_CUE(4),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    ALERT_CUE(8),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:e2677143afe5e8263279b0f45a05b2a1932c373e2f2dc9310bc46fe1c91e65ad@@)),
    ALERT_CUE(9),
    ALERT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    MSG_NPC(4, (@@STRING:e2d2f9a3982dda70c23527231fc424ef2f87c9df8503c91a8c265726ad365491@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:b5cdc4a5e355c775429158a717145dc267af9c74eb097502fe7a704bd101dc39@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:a7e0166258526e2544b3bb22d34b191c890b612bb906c7bc132639fae300a2d3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    WAIT(10),
    ALERT_CUE(6),
    WAIT(1),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    SELECT_ANIMATION(41),
    BGM_STOP,
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:6b0e67b137d7d34aebe1e9490adea882f6a522712c8f3ac125753b4aa025b729@@)),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:260fa0b5b5fbdc6ad802a49aa2e262680d14934db4748f8cdcf60343a75cab29@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:da55795603bfd553068a77d6c8367e2b636ee06acca8aa43c76db0e0bbfa4997@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    WAIT(1),
    SELECT_ANIMATION(2),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    PORTRAIT_POS(1, -1, -4),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:037c3e58ff8343adf9596be5c16337289429263dede2fc96a26628d107e4442c@@)),
    VARIANT_DEFAULT((@@STRING:037c3e58ff8343adf9596be5c16337289429263dede2fc96a26628d107e4442c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:4018cd35f91a049e1419c859137a10fea5e1c0552ad288aeb14a3b1c31da7597@@)),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:4018cd35f91a049e1419c859137a10fea5e1c0552ad288aeb14a3b1c31da7597@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:73bb06364d681ba62ddee9931d9776a9a280a5f3ae6e8020a497bfbbf2df4d4a@@)),
    VARIANT_DEFAULT((@@STRING:651d2e98734de53303e912b3f39805bc1e6f2c48f1f41a117f2236ca3d0f2898@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:1cfc2d09a7dc01071a96433f4159f18e9917699eb01c3965dbc6105f1209acee@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a833ca8bad27a76c6a8c987dc1de5e4a8e5275c5f1f6ac2ebc19be3a84da82ab@@)),
    VARIANT_DEFAULT((@@STRING:73bb06364d681ba62ddee9931d9776a9a280a5f3ae6e8020a497bfbbf2df4d4a@@)),
    TEXTBOX_CLEAR,
    BGM_FADEIN(30, 1),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(5),
    WAIT(20),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:831f5fca881a40d9e1a52f22b364c390e5f5dc89dd185ba896a9d0b003f16e5d@@)),
    MSG_NPC(4, (@@STRING:e494fa71cc8870ebdb070318ba2178f382031d2590c84dace30fe275924ddaca@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:4d5a2282ea78db2fe8a9a0fa4ed3121ab2fe71d8e565db2a719d15f1413ad392@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:7600fe0d9fb329adbcad0c40afa3dd6f117aa78c57d685f788898a667c7f7256@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:583a4ac4b15f5df39606e748ecd8ab160672e1681b78ce9459b0cf7c750ea701@@)),
    VARIANT_DEFAULT((@@STRING:bf48033a87725440bea57e9f8c4bf88babdd981090556f183cc129ee0c105ab9@@)),
    ALERT_CUE(9),
    MSG_NPC(4, (@@STRING:aa4517a53da66eae6d83dff35a4d85fb90b1b9baca20d2e4bf2abadc3ef929b5@@)),
    MSG_NPC(4, (@@STRING:7d35b18bbbd8c7c830d0863f416ecb9dfbaed9ef5f2e3a79dab30b5ac4437136@@)),
    MSG_NPC(4, (@@STRING:a43ae4bb6d9f6b2d6b14f7686c00dcecf4572b07f3616ad452d9ceaa7aaa602e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:eae7bd8d2dfd561bb87ac518af0d0785be93f00e7cb474e9ab23a073f6fe3ac9@@)),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:f6b097d5d2869fde0f7122e2219a62ece035747a4c906739e143a87eb959c1b0@@)),
    CHOICE(/* label */ 15, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */ 16, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(16), /* = 0x10 */
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    SELECT_ENTITIES(-1, 1),
    WAIT(2),
    AWAIT_CUE(5),
    WAIT(20),
    MSG_NPC(4, (@@STRING:e24820ca8c0a322875b3c67d17c2eba3788c59d6da3c914b8bfcc59fd8c54281@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:f4b7c740012c1ce4f397e6849fc76585c1a03318fbc8f28251cd4ca52556ac65@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:376fdc6fbf757c38efeea7f16afde408f07b2297fb4821aedc5593e8e8dbecf9@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_E5(6, 0),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    WAIT(4),
    CMD_UNK_E5(6, 0),
    SELECT_ANIMATION(41),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    WARP_WAYPOINT(1, 89),
    SELECT_ANIMATION(5),
    ALERT_CUE(11),
    ALERT_CUE(10),
    ALERT_CUE(9),
    WAIT(30),
    MSG_ON_BG_AUTO(30, (@@STRING:225e2b6c9c09f3f01079060c5cff40ededdcda9398aa50e3a40a1510fde1cd04@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:24578bb8b37684fdc705284c7d305304c3cab003d9a4b5f1ec64ab0c609b19f7@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:d083faaed8d43758f72b21b6b9865e28ac7f2059b3ee2333272161fb2e40d26f@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    BGM_SWITCH(MUS_THERES_TROUBLE),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    SET_DIR_WAIT(DIRECTION_SOUTHEAST, 1),
    ALERT_CUE(6),
    ALERT_CUE(11),
    ALERT_CUE(9),
    ALERT_CUE(7),
    ALERT_CUE(8),
    { 0x62, 0x00,  0x0200, -0x00000010, -0x00000010, NULL },
    WAIT(20),
    SELECT_ANIMATION(41),
    WAIT(30),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0500,  0x00000008,  0x00000008, NULL },
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(1),
    SELECT_ANIMATION(2),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:d8957e142ed92a66e3128fd3b1e5a63eb2d545af39f46670702dad5c83efeab1@@)),
    MSG_NPC(4, (@@STRING:77ea5cb3c67dd67d0abf5cafe599a6ffaf9bf7bb9795ed4fb703473ca58acfae@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTH, 1),
    WAIT(30),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    BGM_FADEIN(30, 1),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(4, (@@STRING:1a8ceef602d4e62682cbd1b9ef6780242608e39be6cd9b6d060cf6b16c11784c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:598fc739707798ee99726f708070f25652ddac2558e2bbe582810f5018694775@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:33847f2d214ce3617c71f1e963189a965587e5344ee5982078dde837018f7d68@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    PORTRAIT_POS(1, -1, -4),
    MSG_NPC(1, (@@STRING:eae7bd8d2dfd561bb87ac518af0d0785be93f00e7cb474e9ab23a073f6fe3ac9@@)),
    MSG_NPC(1, (@@STRING:fdd3ea0fecd70099b38e1666b2125123a4bb24bba81d8b92c800de090d4b1678@@)),
    WAIT(10),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:f6b097d5d2869fde0f7122e2219a62ece035747a4c906739e143a87eb959c1b0@@)),
    CHOICE(/* label */ 15, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */ 16, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(15), /* = 0x0f */
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    SET_DIR_WAIT(DIRECTION_SOUTH, 1),
    SELECT_ENTITIES(-1, 2),
    WAIT(2),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT_POS(1, -1, -4),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 2, 0),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, -2, 0),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    WAIT(30),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:310ad2550271846eb542ddd1a6c5d9a54ff6eac17fd05ddece7dcee0ec41e7f6@@)),
    VARIANT_DEFAULT((@@STRING:3b88b21efc6e525e8a2e1cc8cddbcaa23b90d459b3e56469c68033c7a8f6493f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:2ea09744e4f5363d81549d3f20ed637c62e81e4b1b7c84efdee0de93b54cc0a4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:89f74e2d4628159aba4755a7db855dc388a85bab4be0e301e7306f4646cb4d8f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:19ab5ae47af1f3ade97a62b3eec3911bfd2f90efd92d870a405f6f20ce613051@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4fc7b52a2976ae4a236286036df8af3bad7e6c025d3c26de503deca2d0165529@@)),
    VARIANT(/* == */  1, (@@STRING:1b34e9bd1133a34d22541c9ca6c889c08abb6d898f51d65998acbab1a31003f9@@)),
    VARIANT(/* == */  3, (@@STRING:4fc7b52a2976ae4a236286036df8af3bad7e6c025d3c26de503deca2d0165529@@)),
    VARIANT(/* == */  3, (@@STRING:bed2bcccd3940a2fe129f324eddd28dd3c39bc2f157f8c4cc26327ceaadb47aa@@)),
    VARIANT_DEFAULT((@@STRING:4fc7b52a2976ae4a236286036df8af3bad7e6c025d3c26de503deca2d0165529@@)),
    VARIANT_DEFAULT((@@STRING:aa4ed497abaafd937446dcae8c9ea76e020ee8d9f46d691ecabcd4d71f951619@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:4ba85e3b829a5ca6bdd02a1b111cdccd86ffbf1a89448a09fc1d4f2f3c7a00b4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8dbd2140cc1a10f799c2eddf678c791de2d9a35218c8caee5728b624ae3b6c49@@)),
    VARIANT(/* == */  1, (@@STRING:171647012f45b04c233f841e9e30c96bc4b78243444ba900604623ba60e3bfb5@@)),
    VARIANT(/* == */  1, (@@STRING:8ebc856f431b33f281360a6d2f63f355d3ae3ba6b0829389d3336466eefeb045@@)),
    VARIANT_DEFAULT((@@STRING:8dbd2140cc1a10f799c2eddf678c791de2d9a35218c8caee5728b624ae3b6c49@@)),
    VARIANT_DEFAULT((@@STRING:414e9c9e7164b8afd734b95cb4e40844e275516bd9dae490e2ea5b9699aabc6e@@)),
    VARIANT_DEFAULT((@@STRING:28443c43c10b435224e7a94093ef71f53fc8aa6fdbf4f1a71628ac130c05b137@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:4018cd35f91a049e1419c859137a10fea5e1c0552ad288aeb14a3b1c31da7597@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:4018cd35f91a049e1419c859137a10fea5e1c0552ad288aeb14a3b1c31da7597@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:4e26ca46a09bac9c74f8144f2a256a6e3dab8e0dd9cdfc3daf911af94f636c0f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:c086d2e06325d08ad1ed44d68f7bdbbb3875eaa3e9ec17e636351ddefa22a17b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:74752aabb1a2d29437e65a386716d88a3d6d006bbb2b361e54451370484fd66d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:23de6026819caa1f9e35f5356030291f0868634f4b34a941fd9124c70537da27@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:53c306349553e4f0f62b485e80b807ce470c3d86e7b70af399c0bce2be965265@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(12),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0007, 0x00000041),
    MSG_NPC(7, (@@STRING:d553d5e17600600dedb9536083af8af314a9a614da233cc3338b92876bd952e6@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    WAIT(1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(30),
    MSG_NPC(7, (@@STRING:68c3b7aae901772a66ce65cea33d8a0095e54d19a57b29017de372d78f80bf78@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    CMD_UNK_E5(7, 0),
    CMD_UNK_E5(8, 0),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:8fd799fbffeff9deaca6e29401e7a02511e8a940adccec04f65ab785c8ca0a1a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:045377a0b830c66afdb7480dfec6a2dd19d14f7197522415a4b926bf26a62486@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:0e0b98f931d314db6ebfae80dd0a4b84fa4be284c3eb08da4dcbcd4993bcf4e7@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x0000000b),
    MSG_NPC(1, (@@STRING:0432d5ebb218c3cee67435f395c504a687ed3c62bafd4315ad7ee9c9b4b620ec@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(4, (@@STRING:ad44414e0b509be9e084a89de91751d3e067d34317a8bc38b6ca8f72ce0e4a9c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    ALERT_CUE(12),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:2cffedd066924fe8f801c58590ce9bbe5cdee2222e5449acedd5803b3eedeb77@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:2cffedd066924fe8f801c58590ce9bbe5cdee2222e5449acedd5803b3eedeb77@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    WAIT(60),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    WAIT(80),
    ALERT_CUE(3),
    HALT,
};































static const struct ScriptCommand s_gs9_g75_s0_lives1_dlg0[] = { /* 0x81ce8cc */
    DEBUGINFO_O(10728),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(1),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(2, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    SELECT_ANIMATION(41),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    FANFARE_PLAY2(468),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT_FANFARE2(468),
    AWAIT_CUE(6),
    ROTATE_TO(2, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(1),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s0_lives2_dlg0[] = { /* 0x81cea9c */
    DEBUGINFO_O(10760),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(19),
    WAIT(30),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    { 0x89, 0x10,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x89, 0x10,  0x0100,  0x00000004,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(19),
    WAIT(30),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(7),
    { 0x61, 0x00,  0x0200,  0x00000128,  0x00000138, NULL },
    SELECT_ANIMATION(9),
    WAIT(30),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    SELECT_ANIMATION(5),
    WAIT(20),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    WALK_GRID(256, 85),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    SELECT_ANIMATION(19),
    WAIT(30),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(19),
    WAIT(30),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(19),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s0_lives3_dlg0[] = { /* 0x81cee3c */
    DEBUGINFO_O(10821),
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
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(8),
    { 0x61, 0x00,  0x0200,  0x00000100,  0x00000138, NULL },
    SELECT_ANIMATION(9),
    WAIT(30),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    SELECT_ANIMATION(5),
    WAIT(20),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(8),
    WALK_GRID(256, 86),
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
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s0_lives4_dlg0[] = { /* 0x81cf1ac */
    DEBUGINFO_O(10879),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    WALK_GRID(256, 87),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WALK_GRID(256, 88),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(30),
    { 0x63, 0x00,  0x0040,  0x00000057,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s0_lives5_dlg0[] = { /* 0x81cf33c */
    DEBUGINFO_O(10907),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    WALK_GRID(256, 90),
    AWAIT_CUE(10),
    FANFARE_PLAY2(458),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WALK_GRID(256, 91),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(30),
    { 0x63, 0x00,  0x0040,  0x0000005a,  0x00000000, NULL },
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s0_lives6_dlg0[] = { /* 0x81cf49c */
    DEBUGINFO_O(10932),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    WALK_GRID(256, 92),
    AWAIT_CUE(11),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    WALK_GRID(256, 93),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(30),
    { 0x63, 0x00,  0x0040,  0x0000005c,  0x00000000, NULL },
    AWAIT_CUE(11),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s0_lives7_dlg0[] = { /* 0x81cf60c */
    DEBUGINFO_O(10958),
    SELECT_ANIMATION(5),
    { 0x54, 0x00,  0x0400,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(12),
    WALK_GRID(384, 94),
    SELECT_ANIMATION(2),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(12),
    WALK_GRID(256, 95),
    WALK_GRID(256, 96),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(12),
    SELECT_ANIMATION(17),
    AWAIT_CUE(12),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s1_lives0_dlg0[] = { /* 0x81cf72c */
    DEBUGINFO_O(10979),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTH, 1),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(1),
    AWAIT_CUE(6),
    SELECT_ANIMATION(41),
    WAIT(1),
    AWAIT_CUE(6),
    { 0x58, 0x01,  0x0000,  0x00000148,  0x00000168, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTHWEST, 1),
    SELECT_ANIMATION(5),
    AWAIT_CUE(6),
    WAIT(10),
    { 0x62, 0x00,  0x0100,  0x00000010, -0x00000010, NULL },
    SELECT_ANIMATION(41),
    WAIT(30),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0a00, -0x00000010,  0x00000010, NULL },
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(1),
    SELECT_ANIMATION(2),
    WAIT(1),
    AWAIT_CUE(6),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTH, 1),
    AWAIT_CUE(6),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(10),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s1_lives1_dlg0[] = { /* 0x81cf94c */
    DEBUGINFO_O(11016),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(472),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WALK_GRID(256, 88),
    AWAIT_CUE(9),
    WARP_WAYPOINT(1, 97),
    AWAIT_CUE(9),
    SELECT_ANIMATION(5),
    WAIT(40),
    { 0x63, 0x00,  0x0100,  0x00000059,  0x00000000, NULL },
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    WAIT(5),
    { 0x63, 0x00,  0x0100,  0x00000057,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    SELECT_ANIMATION(2),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s1_lives2_dlg0[] = { /* 0x81cfacc */
    DEBUGINFO_O(11043),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(10),
    FANFARE_PLAY2(458),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WALK_GRID(256, 91),
    AWAIT_CUE(10),
    WARP_WAYPOINT(1, 90),
    SET_DIR_WAIT(DIRECTION_NORTHWEST, 1),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s1_lives3_dlg0[] = { /* 0x81cfbec */
    DEBUGINFO_O(11064),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(11),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    WALK_GRID(256, 93),
    AWAIT_CUE(11),
    SET_DIR_WAIT(DIRECTION_NORTHEAST, 1),
    { 0x58, 0x01,  0x0000,  0x00000130,  0x00000180, NULL },
    AWAIT_CUE(11),
    SELECT_ANIMATION(5),
    WAIT(10),
    { 0x62, 0x00,  0x0200,  0x00000010, -0x00000010, NULL },
    WAIT(40),
    FANFARE_PLAY2(497),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    { 0x63, 0x00,  0x0100,  0x0000005c,  0x00000000, NULL },
    WAIT(10),
    AWAIT_CUE(11),
    SELECT_ANIMATION(2),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s2_lives0_dlg0[] = { /* 0x81cfd9c */
    DEBUGINFO_O(11094),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    { 0x54, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s2_lives1_dlg0[] = { /* 0x81cff1c */
    DEBUGINFO_O(11121),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s2_lives2_dlg0[] = { /* 0x81cffdc */
    DEBUGINFO_O(11136),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(10),
    WALK_GRID(256, 98),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g75_s2_lives3_dlg0[] = { /* 0x81d009c */
    DEBUGINFO_O(11151),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(11),
    WALK_GRID(256, 99),
    WALK_GRID(256, 100),
    ROTATE_TO(1, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g76_s0_station_sref_script[] = { /* 0x81d018c */
    DEBUGINFO_O(11169),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_TEAM_BASE),
    MSG_ON_BG_AUTO(30, (@@STRING:acb1e3657f772628c9f6ae06c90fdb7a38180477cf167431ece01af0682db4a5@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:b18701815cdd68e69a23062bf6546aa0f3078c4f284d5cff933a3305b3991994@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:d26633b06a3f9786afa9b316be4f8a38e8a74dcdaebed07e89115cb2449fc9de@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:e83e5d241e39e62732ea717b15b7293bdd985900711bda622cfb5bf7eb2c5242@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(60, 1),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs9_g76_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g76_s0_station_sref_script }; /* 0x81d0340 */


static const struct ScriptCommand s_gs9_g76_s0_eff0_script[] = { /* 0x81d034c */
    DEBUGINFO_O(11195),
    CAMERA_INIT_PAN,
    WALK_GRID(256, 102),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(512, 103),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_GRID(256, 104),
    ALERT_CUE(5),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g76_s0_lives0_dlg0[] = { /* 0x81d041c */
    DEBUGINFO_O(11211),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0007, 0x00000000),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:f18d09028ecf4b5c5bc9f64165f257529d6c05a180ed1c1c49ca57e85fbe1379@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_NPC(1, (@@STRING:d217d04d4fa628f52386274bdd2027232a944eebbeedaee3bf9d3624d2f4e168@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ALERT_CUE(8),
    WAIT(80),
    ALERT_CUE(12),
    MSG_NPC(7, (@@STRING:12ee66983255aafb94b4810a3424a4fe84e71a200176a9eba257224ae9608962@@)),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(7),
    ALERT_CUE(8),
    MSG_NPC(7, (@@STRING:29f258b752511b4344a7e1e87d5aeeebd693f3ba796c43c0f8ed84805ac6e145@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:dea87700ed4d452f508a9a24d6152c3c2075b25abb0c8101b03ab07f34dd5205@@)),
    VARIANT_DEFAULT((@@STRING:cc97bb3247c8167e5b3a036fd48c864bcb080744aaa11b66efb121221af38fcf@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:d685e9d7bf0bd8c3edfeaf7480e3d97f245860475a348e4170041f5c98c1f111@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    WAIT(20),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(12),
    WAIT(1),
    { 0x53, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    WALK_GRID(256, 105),
    WALK_GRID(256, 106),
    { 0x52, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    ALERT_CUE(4),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0007, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ffdb035d6019e2017c82f861d6700b362139c9bddafbeff97839cf949e1b7909@@)),
    VARIANT_DEFAULT((@@STRING:73bb06364d681ba62ddee9931d9776a9a280a5f3ae6e8020a497bfbbf2df4d4a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(12),
    MSG_NPC(7, (@@STRING:8f0b6b515f000c2bedfff1d9dd21caae0c704201dfaabacac5f0099d2bc59903@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, -2, 0),
    MSG_NPC(4, (@@STRING:feeb6f761f8bcaca9319dd3879001def79d2413cedfcc0e2e1f41d65d8302683@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(12),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(20),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:185a9a90e3a49ef85fc0722d13149c19f6e3b2a4ed2eae6b862cc66b79fdf87c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:e8eb410b4b61dab34f04b1c016c53e3fe40d409caf381090d73dab4bba5ff7e8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:9675ac27d4ab7d4c1a83c814d6e68f93ccafc9a2064224346069135305b43037@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:8368c0bf922aae6278f1216113ac483aad22641c8ab7cee487a7829d9464fbe8@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1c9ebf0d3bf8537a655dbe89ddd640220d2bcd8b724f41072126aaa11e4dc742@@)),
    VARIANT_DEFAULT((@@STRING:81b924f6d9e51f3cf223f5483a6188cc32392b8bb27da2c978c98805b53ff6a3@@)),
    MSG_NPC(4, (@@STRING:b90640bd07851172417269aa7969dc8df3db5bc806aa65ad59c87d8775e44c62@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1a3179c7e385fa5970cc47b90295560882aa1c06a7dcb0182825ed2557300aa0@@)),
    VARIANT(/* == */  1, (@@STRING:b5e3d61954094ded203ac9527b4790d71ecd42a6cfa185265aa2810c553535b8@@)),
    VARIANT(/* == */  1, (@@STRING:d4c345e93d4ad18b9084a007460d5e6a8183cf90d991e10eaac8fa935b600bde@@)),
    VARIANT_DEFAULT((@@STRING:347711a01bc75fbcf8bc6c87cc6cc65ac580d1f6e4786bbcab804f2c1fe2e327@@)),
    VARIANT_DEFAULT((@@STRING:1b1611dd2d36aecb41a7c04d6e030c367ba356477bb87a66d2870c1a1dc461a5@@)),
    VARIANT_DEFAULT((@@STRING:45f84f23a1eee8cc81c53da17140337a690ef2b806846c884bdccbdd1af1406e@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};










static const struct ScriptCommand s_gs9_g76_s0_lives1_dlg0[] = { /* 0x81d11b8 */
    DEBUGINFO_O(11372),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(1),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    WALK_GRID(256, 107),
    WALK_GRID(256, 108),
    { 0x52, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(1),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g76_s0_lives2_dlg0[] = { /* 0x81d1408 */
    DEBUGINFO_O(11412),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    SELECT_ANIMATION(5),
    WAIT(20),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(7),
    WAIT(16),
    { 0x53, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    WALK_GRID(256, 115),
    WALK_GRID(256, 116),
    WALK_GRID(256, 117),
    { 0x52, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs9_g76_s0_lives3_dlg0[] = { /* 0x81d1578 */
    DEBUGINFO_O(11438),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
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
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(8),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    { 0x53, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    WALK_GRID(256, 112),
    WALK_GRID(256, 113),
    WALK_GRID(256, 114),
    { 0x52, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs9_g76_s0_lives4_dlg0[] = { /* 0x81d17f8 */
    DEBUGINFO_O(11481),
    SELECT_ANIMATION(6),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    SELECT_ANIMATION(2),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs9_g76_s0_lives5_dlg0[] = { /* 0x81d1888 */
    DEBUGINFO_O(11493),
    SELECT_ANIMATION(6),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x01,  0x0000,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs9_g76_s0_lives6_dlg0[] = { /* 0x81d1918 */
    DEBUGINFO_O(11505),
    SELECT_ANIMATION(6),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    SELECT_ANIMATION(2),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs9_g76_s0_lives7_dlg0[] = { /* 0x81d1998 */
    DEBUGINFO_O(11516),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(12),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(12),
    WALK_RELATIVE(256, -16, 0),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(12),
    { 0x53, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    WAIT(20),
    WALK_GRID(204, 109),
    WALK_GRID(256, 110),
    WALK_GRID(256, 111),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    { 0x52, 0x00,  0x0000,  0x00000001,  0x00000000, NULL },
    AWAIT_CUE(12),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(12),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s0_station_sref_script[] = { /* 0x81d1b28 */
    DEBUGINFO_O(11544),
    JUMPIF_EQUAL(WARP_LOCK, 0, /* to label */ 0),
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    JUMPIF_EQUAL(SCENARIO_SUB1, 30, /* to label */ 1),
    RET_DIRECT,
  LABEL(1), /* = 0x01 */
    SELECT_ENTITIES(-1, 0),
    RET_DIRECT,
};

static const ScriptRef s_gs9_g77_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs9_g77_s0_station_sref_script }; /* 0x81d1bb8 */

static const struct ScriptCommand s_gs9_g77_s0_lives0_dlg0[] = { /* 0x81d1bc4 */
    DEBUGINFO_O(11558),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g77_s0_lives0_dlg2[] = { /* 0x81d1bf4 */
    DEBUGINFO_O(11564),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_HASITEM(ITEM_CHESTNUT, /* to label */ 0),
    MSG_NPC(1, (@@STRING:414afb4533985109de1d8378332dbbe1a138480dd9c845988ef861f4e63dfef3@@)),
    MSG_NPC(1, (@@STRING:d3401fdb1cb2a73be97fcb2706ff50247138499b93bf74b47c3dd6ee0c996d72@@)),
    MSG_NPC(1, (@@STRING:f9755687cf9904d224c4c6d2a4e2d975c7a927bd08422ccbd9f3994049a73d75@@)),
    MSG_NPC(1, (@@STRING:08c7aa679fd7f63a851702753968396ed84ae9775ac352fdb909f37a43f9e20e@@)),
    MSG_NPC(1, (@@STRING:1d45833a4c6b9e21e97d41b3a33e6881040d9a848aa9a2bceeb1c8a88b7cdb5d@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};


static const struct ScriptCommand s_gs9_g77_s0_lives1_dlg0[] = { /* 0x81d1df4 */
    DEBUGINFO_O(11582),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g77_s0_lives1_dlg2[] = { /* 0x81d1e24 */
    DEBUGINFO_O(11588),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_HASITEM(ITEM_CHESTNUT, /* to label */ 0),
    MSG_NPC(1, (@@STRING:a0ab80d56b0c9264bb9c2c25e729e79c78dc52a95ed3db49355efd43696a64f9@@)),
    MSG_NPC(1, (@@STRING:d3401fdb1cb2a73be97fcb2706ff50247138499b93bf74b47c3dd6ee0c996d72@@)),
    MSG_NPC(1, (@@STRING:f9755687cf9904d224c4c6d2a4e2d975c7a927bd08422ccbd9f3994049a73d75@@)),
    MSG_NPC(1, (@@STRING:d5e9ae94636eef01d72ca3f051d7a7a9c2434ed5cd4888b528da39fbdce2e5d8@@)),
    MSG_NPC(1, (@@STRING:f35f55b00202b6883cfcc6220beaedcba49cc48d2c4319dc3ebb65038eb9f764@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};


static const struct ScriptCommand s_gs9_g77_s0_lives2_dlg0[] = { /* 0x81d1f5c */
    DEBUGINFO_O(11606),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g77_s0_lives2_dlg2[] = { /* 0x81d1f8c */
    DEBUGINFO_O(11612),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_HASITEM(ITEM_CHESTNUT, /* to label */ 0),
    MSG_NPC(1, (@@STRING:a0ab80d56b0c9264bb9c2c25e729e79c78dc52a95ed3db49355efd43696a64f9@@)),
    MSG_NPC(1, (@@STRING:d3401fdb1cb2a73be97fcb2706ff50247138499b93bf74b47c3dd6ee0c996d72@@)),
    MSG_NPC(1, (@@STRING:f9755687cf9904d224c4c6d2a4e2d975c7a927bd08422ccbd9f3994049a73d75@@)),
    MSG_NPC(1, (@@STRING:d5e9ae94636eef01d72ca3f051d7a7a9c2434ed5cd4888b528da39fbdce2e5d8@@)),
    MSG_NPC(1, (@@STRING:f35f55b00202b6883cfcc6220beaedcba49cc48d2c4319dc3ebb65038eb9f764@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};


static const struct ScriptCommand s_gs9_g77_s0_lives3_dlg0[] = { /* 0x81d206c */
    DEBUGINFO_O(11630),
    RET,
};

static const struct ScriptCommand s_gs9_g77_s0_lives3_dlg2[] = { /* 0x81d208c */
    DEBUGINFO_O(11635),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:0922820370ec1a19fc2b41e643c0574b2f0fcf422ae787d777c44a9904d32645@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g77_s0_lives4_dlg2[] = { /* 0x81d2130 */
    DEBUGINFO_O(11644),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000041),
    WAIT(1),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(1),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g77_s0_lives4_dlg3[] = { /* 0x81d21f0 */
    DEBUGINFO_O(11659),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    CALL_SCRIPT(WAIT_END_TALK_FUNC),
    RET,
};

static const struct ScriptCommand s_gs9_g77_s1_station_sref_script[] = { /* 0x81d22c0 */
    DEBUGINFO_O(11675),
    SELECT_ENTITIES(-1, 1),
    RET,
};

static const ScriptRef s_gs9_g77_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs9_g77_s1_station_sref_script }; /* 0x81d22f0 */

static const struct ScriptCommand s_gs9_g77_s1_eff0_script[] = { /* 0x81d22fc */
    DEBUGINFO_O(11683),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_GRID(256, 83),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_GRID(256, 84),
    ALERT_CUE(5),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g77_s1_lives0_dlg0[] = { /* 0x81d23bc */
    DEBUGINFO_O(11698),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    JUMPIF_EQUAL(PARTNER1_KIND, 0, /* to label */ 1),
    CMD_UNK_E5(6, 0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_E5(7, 0),
    CMD_UNK_E5(8, 0),
    CMD_UNK_E5(9, 0),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:7c2adf165877c9f4797c9498df1643b8ad529563105db057026512e5093ecf11@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 1, 0),
    MSG_NPC(2, (@@STRING:a0ff3ad532aa507c7202eaf3001a1fd8daa7ba37168140a6e0bd4e2b0586b938@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 2, (@@STRING:bb8567f22953beb19af3ebaf60a33cfffe7862b69beb3d5c78e4bc4e5c9afc02@@)),
    CHOICE(/* label */  3, (@@STRING:7fc3a245a118f2ea617731cc6725a2abb31ccde9376a2bc19aef80814be80fec@@)),
    CHOICE(/* label */  4, (@@STRING:891331a5d5af7b8c6c815aebf7b3daeaf0bb730a6a5495fd4e3e80c9fffdecd9@@)),
  LABEL(4), /* = 0x04 */
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 2),
    WAIT(2),
    AWAIT_CUE(5),
    WAIT(20),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:e24820ca8c0a322875b3c67d17c2eba3788c59d6da3c914b8bfcc59fd8c54281@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 1, 0),
    MSG_NPC(2, (@@STRING:f4b7c740012c1ce4f397e6849fc76585c1a03318fbc8f28251cd4ca52556ac65@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, -2, 0),
    MSG_NPC(2, (@@STRING:376fdc6fbf757c38efeea7f16afde408f07b2297fb4821aedc5593e8e8dbecf9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:83b14413c940e2dfa139fbdade1046abfad10ab006a68758ba17597271df73fc@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:24578bb8b37684fdc705284c7d305304c3cab003d9a4b5f1ec64ab0c609b19f7@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:724fe385399821ab7332d47f90ba4d71bb29b723f39f41a186b9082b69c10fc2@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(7, 0),
    CMD_UNK_E5(8, 0),
    CMD_UNK_E5(9, 0),
    { 0x22, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:d8957e142ed92a66e3128fd3b1e5a63eb2d545af39f46670702dad5c83efeab1@@)),
    MSG_NPC(2, (@@STRING:77ea5cb3c67dd67d0abf5cafe599a6ffaf9bf7bb9795ed4fb703473ca58acfae@@)),
    TEXTBOX_CLEAR,
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    CAMERA_INIT_PAN,
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    BGM_FADEIN(30, 1),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    JUMP_SCRIPT(END_TALK),
  LABEL(3), /* = 0x03 */
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_INSTANT((@@STRING:cb7c677c3995a0a4ff0b1a3fb6dba0227d1f9c29b2ccbb24823696c66e502faf@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    SELECT_ENTITIES(-1, 3),
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:c6b538ebc19e445a73296b9e7b8e08c9fb5e2fd32e5b324c49ad135be99654b3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(1),
    CMD_UNK_E5(7, 0),
    CMD_UNK_E5(8, 0),
    CMD_UNK_E5(9, 0),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:258730ff7460ec49292c901ba3001fadb5adbc77a5de9291a4c552bee55c520b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 1, 0),
    MSG_NPC(2, (@@STRING:73ba33bc3f774c33735db7992eeb6b5133655c606fa133f3493a5311ce72b56b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(1),
    CMD_UNK_E5(7, 0),
    CMD_UNK_E5(8, 0),
    CMD_UNK_E5(9, 0),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:2ae7365eedede0eb10b08b6e3d1a121362cdca4119e12b72b6089f0aa6b72f3d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, -2, 0),
    MSG_NPC(2, (@@STRING:09ad92ece43ff98feb0111ffe44f9a33d2212b95e6a2a92b8a2d71b0872ec663@@)),
    TEXTBOX_CLEAR,
    SCENARIO_ADVANCE(SCENARIO_SUB1, /*unused*/ 30),
    REMOVE_ITEMSTACK(ITEM_CHESTNUT),
    JUMPIF_SCENE_LT(SCENARIO_SUB1, 30, 2, /* to label */ 7),
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_ON_BG_AUTO(30, (@@STRING:acb1e3657f772628c9f6ae06c90fdb7a38180477cf167431ece01af0682db4a5@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:82e43adccd583b23b59640cc810b1cfb6a921e9b04d6b075ffcff35a277df109@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:f10f7430010286d01653b123afad9ff32f6c79cb5de5302433db6ac8e76d53b5@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:59ee2586748f8536a8871195ac0a5a1e9820567c823e7a237bb9a2c60daab242@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:6acd7f92e3071913fc5310405c738df7075508e98a71d6c919a04adfd640c12f@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    CAMERA_INIT_PAN,
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    JUMP_SCRIPT(END_TALK),
  LABEL(8), /* = 0x08 */
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S01E01C_L001),
    HALT,
};





static const struct ScriptCommand s_gs9_g77_s1_lives1_dlg0[] = { /* 0x81d3084 */
    DEBUGINFO_O(11857),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs9_g77_s1_lives2_dlg0[] = { /* 0x81d3104 */
    DEBUGINFO_O(11868),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s1_lives3_dlg0[] = { /* 0x81d3164 */
    DEBUGINFO_O(11877),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s1_lives4_dlg0[] = { /* 0x81d31c4 */
    DEBUGINFO_O(11886),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s2_lives0_dlg0[] = { /* 0x81d3224 */
    DEBUGINFO_O(11895),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    { 0x6f, 0x08,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s2_lives1_dlg0[] = { /* 0x81d3314 */
    DEBUGINFO_O(11913),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(8),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    { 0x6f, 0x08,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    SELECT_ANIMATION(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s2_lives2_dlg0[] = { /* 0x81d33e4 */
    DEBUGINFO_O(11929),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(9),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    { 0x6f, 0x08,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    SELECT_ANIMATION(8),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s3_lives0_dlg0[] = { /* 0x81d34b4 */
    DEBUGINFO_O(11945),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(1),
    AWAIT_CUE(7),
    WAIT(1),
    AWAIT_CUE(7),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(1),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s3_lives1_dlg0[] = { /* 0x81d35a4 */
    DEBUGINFO_O(11963),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(8),
    WAIT(1),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(1),
    AWAIT_CUE(8),
    WAIT(1),
    AWAIT_CUE(8),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(1),
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs9_g77_s3_lives2_dlg0[] = { /* 0x81d3694 */
    DEBUGINFO_O(11981),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(1),
    AWAIT_CUE(9),
    WAIT(1),
    AWAIT_CUE(9),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    WAIT(1),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_station_sref_script[] = { /* 0x81d3774 */
    DEBUGINFO_O(11998),
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(MAP_TEAM_BASE),
    { 0x2d, 0x09,  0x0000,  0x0000006f,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:acb1e3657f772628c9f6ae06c90fdb7a38180477cf167431ece01af0682db4a5@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:2d3cca6e9414e959a950f7f53c5619f99b1229a89ed2531cadcc13d0eaf93014@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:f10f7430010286d01653b123afad9ff32f6c79cb5de5302433db6ac8e76d53b5@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:54416c7dd1f129ce98cf729e761cdfaf35f895b4bf1cfe985f9fbb438be0bd2a@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:73221e3d04dca9034784ab442f848318b11ea057e22fae331089a57885fc9cf9@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x2d, 0x09,  0x0000,  0x0000006f,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:d2c813f15a131a5aa2d2263f7c4c170861c787a2969ab77eb3bd9520e14e45bc@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:09b1c1529fcf44b268cdb03900bc897026e230d2b7f13bed9e2174e92b254372@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:64190181bf4f5c77280ee16f46a4e38562d1626756768c6cbacc339ab17b572b@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:b5200803c490d2dde1ad092c800add03fa9a3d06eda05b0a515b10a346d685c7@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:acb1e3657f772628c9f6ae06c90fdb7a38180477cf167431ece01af0682db4a5@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:bbb58b7534a3d342e5e09710076f39a4a10c36be6b5f706b3b2f914ba3a40cfb@@)),
    TEXTBOX_CLEAR,
    CANCEL_ENTITIES(-1, 0),
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x00,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs9_g78_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g78_s0_station_sref_script }; /* 0x81d3b78 */



static const struct ScriptCommand s_gs9_g78_s0_eff0_script[] = { /* 0x81d3b84 */
    DEBUGINFO_O(12039),
    CAMERA_INIT_PAN,
    WALK_GRID(256, 118),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_GRID(256, 119),
    BGM_STOP,
    WAIT(20),
    FANFARE_PLAY(201),
    WAIT_FANFARE1(201),
    WAIT(30),
    BGM_FADEIN(120, 1),
    WALK_GRID(256, 118),
    ALERT_CUE(5),
    WAIT(1),
    AWAIT_CUE(4),
    WALK_GRID(512, 120),
    CAMERA_END_PAN,
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_lives0_dlg0[] = { /* 0x81d3cc4 */
    DEBUGINFO_O(12062),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0007, 0x00000000),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:73cadb4fbc33a59d79b02606769dcd0f6cb2ff0673caf077c0ed63783785cbce@@)),
    VARIANT_DEFAULT((@@STRING:124d793360a89f54563ad2f66d82063314e71a9b5073cd4040a652b9df31a379@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c5b5a9c8a43d69e1b1636a50be76503699ceb9ecda74780b80be6796516d56f5@@)),
    VARIANT(/* == */  1, (@@STRING:c42de411d964260de8dbce62b951212e594f3ee72e5e76c5ed882cc23f6d4fa8@@)),
    VARIANT(/* == */  3, (@@STRING:bf8ffdc4f60895b74e85d62b599ebc4ef9b9b89da30ada2ecbd2c0124f543cd5@@)),
    VARIANT(/* == */  3, (@@STRING:c42de411d964260de8dbce62b951212e594f3ee72e5e76c5ed882cc23f6d4fa8@@)),
    VARIANT_DEFAULT((@@STRING:a97831bdf8447947ce103d4d5de83e1aca2f1a1d13591f9af9e2d85e4f302d16@@)),
    VARIANT_DEFAULT((@@STRING:c42de411d964260de8dbce62b951212e594f3ee72e5e76c5ed882cc23f6d4fa8@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(4),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:061cbc7e0760bedc3a8d9e84511ce87adc1502d1b701ee319d89e7ee5a9abfa0@@)),
    VARIANT_DEFAULT((@@STRING:c61c850e7ca97aedc009d8440e1defa2e37a535f7e72d8222a16195f0127e4b1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a55787bb5aaea99ecf99f0aea087f5c0a78d9214a409d2d1ceb57a8f94340810@@)),
    VARIANT_DEFAULT((@@STRING:1828d3e88386bf4dd7b5c61f7cace187ce119dcb81eb1aee58e3ed403651d98b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(12),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    MSG_NPC(7, (@@STRING:0bf17f30f7af3f3b6b1d36844b00d53a7aaa4d42cbf75fd36e9251e91cf88a98@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:44bf9d9633e4e6e191ce604589fd8f554bddb01dc6db15f23c5387ac6ddc2cc8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(20),
    PORTRAIT_REP(0x0001, 0x0000000a),
    MSG_NPC(1, (@@STRING:a7bf44a09b329a1af11970926efa25f67eeb5c39c60e4f403ccb67a76c91a151@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, -3, 0),
    MSG_NPC(4, (@@STRING:90ebef2d8da3d1256d086ba54304c436ba1e761f343a64919b1a11d0847401b7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    CMD_UNK_E5(6, 0),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(12),
    MSG_NPC(4, (@@STRING:104a16e90dd69dce0d47bf6c7383dd08fc91720d252f77220bb92e4946964b34@@)),
    MSG_NPC(4, (@@STRING:38002431c04993430674391d407d370a1985af35deb5b32fb9fcab3dae30ee8a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:687047d1067a5828642f5be0ddefd4c5a2b3d229b7a0a51c887c8dd7e32d95ac@@)),
    VARIANT(/* == */  1, (@@STRING:ec8a3b9ea0cc63a8632aff9e9ae802b623827324c8acdd4a0ba34dc927212545@@)),
    VARIANT(/* == */  1, (@@STRING:06f7be93411240c1a408ff97a0e9709dc5331ace22421d48b9c136df1c824a02@@)),
    VARIANT_DEFAULT((@@STRING:8db520bc40d29644f067efb16abc75d3e1ddafb07738ebcfab13824526119073@@)),
    VARIANT_DEFAULT((@@STRING:ec8a3b9ea0cc63a8632aff9e9ae802b623827324c8acdd4a0ba34dc927212545@@)),
    VARIANT_DEFAULT((@@STRING:06f7be93411240c1a408ff97a0e9709dc5331ace22421d48b9c136df1c824a02@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(120),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, -3, 0),
    MSG_NPC(4, (@@STRING:2bc4231730a59162aa38a34761d321224ee37991a1845966ed50a19a7dd0954c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:64dd060e87e91f8a875eaf3b6f2fcd8b4f36875d925512376c0630b3d1405215@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    CMD_UNK_E5(9, 0),
    CMD_UNK_E5(10, 0),
    CMD_UNK_E5(11, 0),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:79c19b760f7816e62bc10a7cd7e2b1aaddb3b15c44c6995f0b1c26edf7c47e92@@)),
    TEXTBOX_CLEAR,
    CLEAR_ARRAY(EVENT_LOCAL),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    CMD_UNK_E5(9, 0),
    CMD_UNK_E5(10, 0),
    CMD_UNK_E5(11, 0),
    WAIT(20),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(12),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(5),
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:3aa9e4b920a01636c5b8016bd877d32e67be4c870ae1d515e7720d6f5ffea0ca@@)),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_THERES_TROUBLE),
    CMD_UNK_E5(9, 0),
    CMD_UNK_E5(10, 0),
    CMD_UNK_E5(11, 0),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:326a5554864add837e3b2afbb3fc2c158b2c849dee1cf40a68d83c672a3c3fec@@)),
    VARIANT_DEFAULT((@@STRING:81333bc975b7af9ce3ba1e0cce139e98e79fd1e4312401af65fb78fb620976a9@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_E5(6, 0),
    CMD_UNK_E5(7, 0),
    CMD_UNK_E5(8, 0),
    CMD_UNK_E5(12, 0),
    WAIT(10),
    WALK_RELATIVE(384, 0, -48),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    WAIT(20),
    SELECT_ANIMATION(9),
    WAIT(30),
    ALERT_CUE(10),
    WAIT(60),
    ALERT_CUE(10),
    ALERT_CUE(3),
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000008, NULL },
    WAIT(10),
    SELECT_ANIMATION(2),
    HALT,
};










static const struct ScriptCommand s_gs9_g78_s0_lives1_dlg0[] = { /* 0x81d4d24 */
    DEBUGINFO_O(12257),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(10),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(10),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    WALK_RELATIVE(384, -16, -64),
    WALK_GRID(256, 122),
    WALK_GRID(256, 121),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    SELECT_ANIMATION(9),
    ALERT_CUE(9),
    WAIT(100),
    SELECT_ANIMATION(40),
    ALERT_CUE(9),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000004, NULL },
    WAIT(30),
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000004, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_lives2_dlg0[] = { /* 0x81d5054 */
    DEBUGINFO_O(12311),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(5),
    WAIT(20),
    SELECT_ANIMATION(2),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(7),
    WAIT(70),
    WALK_GRID(256, 126),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_lives3_dlg0[] = { /* 0x81d5184 */
    DEBUGINFO_O(12333),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(8),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(8),
    WAIT(90),
    WALK_RELATIVE(512, -32, 0),
    WALK_RELATIVE(256, 0, -56),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    SELECT_ANIMATION(19),
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_lives4_dlg0[] = { /* 0x81d52f4 */
    DEBUGINFO_O(12359),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    FANFARE_PLAY2(472),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    WAIT_FANFARE2(472),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WALK_GRID(512, 123),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(9),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    FANFARE_PLAY2(702),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    WAIT(24),
    FANFARE_PLAY2(610),
    WAIT_FANFARE2(610),
    ALERT_CUE(5),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    FANFARE_PLAY2(702),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    WAIT(24),
    FANFARE_PLAY2(610),
    WAIT_FANFARE2(610),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    FANFARE_FADEOUT2(100, 702),
    FANFARE_FADEOUT2(100, 610),
    AWAIT_CUE(9),
    SELECT_ANIMATION(9),
    AWAIT_CUE(9),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000004, NULL },
    WAIT(30),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000004, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_lives5_dlg0[] = { /* 0x81d5644 */
    DEBUGINFO_O(12415),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WALK_GRID(512, 124),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    WAIT(20),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    AWAIT_CUE(10),
    SELECT_ANIMATION(9),
    AWAIT_CUE(10),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000008, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_lives6_dlg0[] = { /* 0x81d5854 */
    DEBUGINFO_O(12451),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(11),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(11),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WALK_GRID(512, 124),
    WALK_GRID(512, 125),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(4),
    AWAIT_CUE(11),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    WAIT(10),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    WAIT(16),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT(20),
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    HALT,
};

static const struct ScriptCommand s_gs9_g78_s0_lives7_dlg0[] = { /* 0x81d5a84 */
    DEBUGINFO_O(12489),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(12),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(12),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(12),
    CMD_UNK_93(6, DIR_TRANS_10, 114),
    WAIT(80),
    WALK_GRID(204, 127),
    HALT,
};

static const struct ScriptCommand s_gs9_g79_s0_station_sref_script[] = { /* 0x81d5b94 */
    DEBUGINFO_O(12509),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs9_g79_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g79_s0_station_sref_script }; /* 0x81d5c34 */

static const struct ScriptCommand s_gs9_g79_s0_eff0_script[] = { /* 0x81d5c40 */
    DEBUGINFO_O(12524),
    CAMERA_INIT_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    WALK_GRID(512, 128),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_RELATIVE(512, 0, -116),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0xa8,  0x0100,  0x00000004,  0x00000000, NULL },
    { 0x89, 0x48,  0x0100,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs9_g79_s0_lives0_dlg0[] = { /* 0x81d5d20 */
    DEBUGINFO_O(12541),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:84e5afd5085db49d90a67feb6902693c41582a4c6330dc91f136d906bd94ea31@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6cb7373f66d5863f03a18acb751a3da01a5b5857fc8a67ff7e24a67f1ce571a1@@)),
    VARIANT(/* == */  1, (@@STRING:fa21819cdf116c88faf1e6c59d163de6fe80492352d5e1a9b0138df38905f555@@)),
    VARIANT_DEFAULT((@@STRING:ef2e7211125a9192c580bb1981085ee203d57db0dd87e4284c102b89324054b4@@)),
    VARIANT_DEFAULT((@@STRING:f96e3bf9bae2b49993db05477d7a512da5eb3d659c608c302dd8c156a564f187@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:db40cf92709b964820dd930d4d25ceecd8c51463d2ed68d9168dd0543d5ed24b@@)),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:27cc09c9252a2257d5d31dac612362b25f9c3c0b8cd3fb1ef0da1d1f0bf8da3b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(4),
    WAIT(15),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    WAIT(15),
    ALERT_CUE(8),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:bbafca8fbb59584689266bf9a4194e677f1e77432d4470768f203167663a9396@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(9),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:e42aa88a85bd795fefd44a94c8b9ccc3010e4c34536ab242b9483fcb0722c5e7@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    PORTRAIT_POS(1, -1, -4),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b53b7d1fb00b0566013d1ef2afaf6a1c585a33698eb1c0e872d41cb1e5ff1614@@)),
    VARIANT_DEFAULT((@@STRING:b53b7d1fb00b0566013d1ef2afaf6a1c585a33698eb1c0e872d41cb1e5ff1614@@)),
    WAIT(20),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:434145cd1b51bfa105aaa51225239d44cdceb306e4a43ee07d11c69095d02c0e@@)),
    VARIANT_DEFAULT((@@STRING:9dd277a845dacb04634ec04ab508faa5693338164615bde41782d5b17c116c42@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:5c9551bb59c979d4e29d9cf62bbfd805c885169455d2990df707c90790284b05@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:576075465dcd3819e1c1cefeca0200a0121e1c0a3b43579e0d0d3212e7f15048@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:8c2e7b39163bfd7b0daabaf74e13cec31837879f16117192a090b2ca1b4eae93@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    PORTRAIT_POS(2, 3, 0),
    MSG_NPC(2, (@@STRING:7ecd7829c6136b06dffd09df58aa6b614f77beb7e9aad996469c215bedc0a680@@)),
    WAIT(20),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:c1a220f1754f9e6d5fced7dcbc8712ea2623147b764c9e397e6b3cae030f8f00@@)),
    ALERT_CUE(7),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1e4df81df1654e047daecc22cd8b89a5221436de1fb2f03e78b9d46ea008410d@@)),
    VARIANT_DEFAULT((@@STRING:d62ea4ba3649461f7726f30d656f8fa34fd4bb76de45783dd3c2e1dd2ae8c4e5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:3a0ff359d2e84f6f4d33f6fe36658b7fef11b13e37baba5c01ad02588638f485@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:7c045572ea3fdefcd77dc42a49f98597935b68b6dbaee9cb698c032e6a9ab797@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:0751bb5b9ed23a67b6323c2230dc4ef21982bdd17d86c69bcb9a1652dd3615d7@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(7),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:056f4dbff93edeca0224a6495b4760b7ef48d31631b017818aa35b70818ce455@@)),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    WAIT(20),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:e1f4b81e00c90036b1cab3407ccb9cd5f4b261c3f6ea9a2e5366cbd05d6fa498@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:05c2efcaf47cde601adb062c97badcf7c42fed30c963c978470703625aa58d96@@)),
    MSG_NPC(2, (@@STRING:f5b1471ca63e6d0b4bc33db3eb6899e1d717060cbb4f8092f9f194c5a5ef6817@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:b486d032fdaf3498f96f82125a4fda65f921b061e87a389b31010fa972d039e0@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:f73e181c31be167ebc5f7d80d0ce7fbec580fe39ed4b8a60828277b6868ede0e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(30),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(8),
    ALERT_CUE(7),
    WAIT(15),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:29506166e9a233e540d745013003d7ddfbe0ae2133fdee58d0889a5a462d047f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:b0e50148e6ef6083482d761d750e95e4e4db04e1adc9aa49c1f5297efead300c@@)),
    MSG_NPC(3, (@@STRING:c2ed74f531f125329c3659ab526511686cf60e6e303c7e7e368e09b2742ff0dd@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(45),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:a38186da4e3b08bdf471251ae3830e262ca8a58ab861492016aed1ff4c7adfd1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:a988ba8ebcc13083d53d38b108c594db00a727f26ad478ff02479793e71ee11a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fb779ea6140948d811c5b92a36dc5ce7e49989762cf42522337360b43290ddcb@@)),
    VARIANT_DEFAULT((@@STRING:88b54264fb1fba55e1019a3d15403fae6af3593013bbc3ce503731e1593d4fe1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:62d02252fe55033aaade625e3e268f63463d7ff958a45ea338ddcb3159291097@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:34c1ff42d90392a8f6467b636bc0555357585e8fca572179466184ce41c86d82@@)),
    MSG_NPC(2, (@@STRING:7809509d6f976ba785995f4e9636c8b95bd0298b5b05eb3f3b18d8e3c4315a0d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:709fee73705a02a43fa4103949477e25c6ce649b176d082e534d10875532ec5c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(5),
    SELECT_LIVES(79, 1),
    ALERT_CUE(4),
    ALERT_CUE(6),
    WALK_GRID(256, 129),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:cd27a15d051d03696901ec14484335613cedc6bdaf277a0fdc80427701839462@@)),
    MSG_NPC(2, (@@STRING:0b4668f7f5c0e0d9ac0ddacad6b414858671efca9a65c0227274e20aab0686ad@@)),
    MSG_NPC(2, (@@STRING:15aa84219c3377fb403893d1dfa19223c3bb0b47770804f1d2aa557922ba1d90@@)),
    TEXTBOX_CLEAR,
    { 0x3b, 0x1d,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 16),
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:abddb6ce29ee29ea5232e60bcfe0bcb48c7f43f326eac03960bd614c92409fbb@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    WAIT(10),
    { 0x3b, 0x1e,  0x0000,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:539ad240ef54cd579ff632173b2ea8e14dd4e53401ef66b07b784a9a59543f74@@)),
    CHOICE(/* label */ 17, (@@STRING:e5b4158fa246c99386bbc5f943f4887ac2b3ac75150fd1e13dd84ace1bee0678@@)),
    CHOICE(/* label */ 18, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(17), /* = 0x11 */
    RENAME_ALLY(-1),
  LABEL(18), /* = 0x12 */
    { 0x3b, 0x1f,  0x0002,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    SCENARIO_CALC(SCENARIO_SUB1, 32,  3),
    MSG_NPC(2, (@@STRING:06f825721ca5b63414228259953b8fceabba17a29650a1b6f106ed0fe75ae776@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
  LABEL(16), /* = 0x10 */
    SCENARIO_CALC(SCENARIO_SUB1, 32,  2),
    MSG_NPC(2, (@@STRING:edb018fb07bff941c2e43c6536036f5285d8ad36eed8df7206986924dfcbd779@@)),
    MSG_NPC(2, (@@STRING:1f2a61ddbead9d377af7e5a6766ce2d46be15d3447b5e823ddfe95a9f081d0ef@@)),
    MSG_NPC(2, (@@STRING:49f3d16b38233e447b0a6f09e23bdf1acf8750e42a8ee2a052923efbc3319cfc@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};

















static const struct ScriptCommand s_gs9_g79_s0_lives1_dlg0[] = { /* 0x81d764c */
    DEBUGINFO_O(12813),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT_FANFARE2(469),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 0, -112),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    HALT,
};

static const struct ScriptCommand s_gs9_g79_s0_lives2_dlg0[] = { /* 0x81d797c */
    DEBUGINFO_O(12867),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    AWAIT_CUE(7),
    WALK_RELATIVE(512, -16, 0),
    FANFARE_PLAY2(457),
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x62, 0x00,  0x0100,  0x00000010,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x62, 0x00,  0x0200, -0x00000010,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    { 0x62, 0x00,  0x0100,  0x00000010,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    WAIT(10),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(30),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_RELATIVE(512, 0, 32),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(1),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WAIT(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_GRID(512, 129),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g79_s0_lives3_dlg0[] = { /* 0x81d7dcc */
    DEBUGINFO_O(12939),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    WALK_RELATIVE(256, 0, -32),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(8),
    WALK_RELATIVE(256, 0, -88),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(8),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    { 0x62, 0x00,  0x0100,  0x00000004,  0x00000000, NULL },
    WAIT(5),
    SELECT_ANIMATION(5),
    WAIT(30),
    SELECT_ANIMATION(2),
    { 0x62, 0x00,  0x0100, -0x00000004,  0x00000000, NULL },
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(8),
    WALK_RELATIVE(256, 0, 80),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g79_s0_lives4_dlg0[] = { /* 0x81d7fbc */
    DEBUGINFO_O(12973),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    WAIT(10),
    WALK_RELATIVE(256, 0, -16),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(9),
    WALK_RELATIVE(256, 0, -104),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(9),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT(30),
    { 0x62, 0x00,  0x0100, -0x00000004,  0x00000000, NULL },
    SELECT_ANIMATION(5),
    WAIT(35),
    SELECT_ANIMATION(2),
    { 0x62, 0x00,  0x0100,  0x00000004,  0x00000000, NULL },
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(9),
    WALK_RELATIVE(256, 0, 80),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g79_s1_lives0_dlg0[] = { /* 0x81d81ec */
    DEBUGINFO_O(13011),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs9_g80_s0_lives0_dlg1[] = { /* 0x81d825c */
    DEBUGINFO_O(13021),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    { 0x51, 0x00,  0x0083,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(MOVE_RANDOM),
};

static const struct ScriptCommand s_gs9_g80_s0_lives0_dlg2[] = { /* 0x81d829c */
    DEBUGINFO_O(13028),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:6355d1a4a567d7f3d17064cb63001fbb9d7260933e223f345f5c269ce13372bc@@)),
    MSG_NPC(1, (@@STRING:157ad6d4acdf1f85952b6e77683c716668838775038f9c279aff51da0174af0d@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:80e0ced2dc86dc605d0536520bc46c6f18cd544e5c99e8cee74d6b43f7192dbd@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:7248777aac36d0160b95f91cb3e8d356687ba4e5b699b3991c27fba3d71c6527@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:91592fcedb0f0dbb28e16fb7850cdf3b90d00d9c7533e0de18ddff1df5fb0990@@)),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:baab8f808ea4ba003520674a06bef2ef6a2fe9b785ff475deaaff11cd743f116@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    JUMPIF_SCENE_GT(SCENARIO_SUB2, 33, 2, /* to label */ 1),
    SCENARIO_CALC(SCENARIO_SUB2, 33,  2),
  LABEL(1), /* = 0x01 */
    SELECT_LIVES(80, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g80_s0_lives0_dlg3[] = { /* 0x81d8594 */
    DEBUGINFO_O(13061),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs9_g81_s0_station_sref_script[] = { /* 0x81d86b4 */
    DEBUGINFO_O(13082),
    BGM_STOP,
    SELECT_MAP(MAP_TEAM_BASE),
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:073cabd067c43cc736398f1ca77b7fc491cc8a29a46d04c298fbf1233b97c75c@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g81_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g81_s0_station_sref_script }; /* 0x81d87cc */

static const struct ScriptCommand s_gs9_g81_s0_lives0_dlg0[] = { /* 0x81d87d8 */
    DEBUGINFO_O(13103),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:fe84d712b84b3e381bebf66d8cb386a3d247542e60e765d45c1269c5f913997d@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:100981c8aafe211347d0b35797256a2180fcaff2af2cd350ed82f08d19ba6156@@)),
    VARIANT(/* == */  3, (@@STRING:129d7148b69bfc7160dc3d64fa21230418fbb5f44a4c9b1676d766ad7be1a2a3@@)),
    VARIANT_DEFAULT((@@STRING:129d7148b69bfc7160dc3d64fa21230418fbb5f44a4c9b1676d766ad7be1a2a3@@)),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f8f1d4714fcba3154cd5b5379cf3f780c254332bdb7f077e94225f12946db771@@)),
    VARIANT(/* == */  3, (@@STRING:43e802451bed9adc3eecbf8f2bb404f8d610ef2660ced4beccbe026ae36ff6a3@@)),
    VARIANT_DEFAULT((@@STRING:3937d25b099624ad59452a6b1479a68afa2aa19cf16cb0c36f496bc8726cf627@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(7),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 97),
    CALL_SCRIPT(SHOCK_FUNC),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:ea2163315524cf3f173fbfbf61d8feb7c56ac8f95c9f109d1a4ab3b88b2cfb59@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_E5(7, 0),
    AWAIT_CUE(5),
    WAIT(60),
    MSG_NPC(2, (@@STRING:e296cf99d0c401a431437def138fbd1cd761220c6be33bcf37aa2b98316b6697@@)),
    MSG_NPC(2, (@@STRING:7a0fb8cd268bfa069767536f44eb5b01da6bc179258dbda247244042808b8599@@)),
    MSG_NPC(2, (@@STRING:fa6057b3911bae1f060d479f09cd392244fcb029e61c4a5054428fe3d917258e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(470),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:033cf483d4290db7dcc877110748cc589e06dcdd622b8713698b0681e3a01254@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    MSG_NPC(-1, (@@STRING:d58af829af9376e2f15a1b2404d4428d9650a3b87ffc751078ee494a50e64feb@@)),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    ALERT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:6ba6282abfd78df0d8a945c7ba3e5fccb2987631f430808aac579d810f89ff22@@)),
    MSG_NPC(3, (@@STRING:adac41c6587f1c8384fb84dc2e889739f940cd6476135d8a909e311231e8d4bf@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:e9a89e32cbf658149591d3330dd148d6d753f146603bf974d67770c7d892aa0e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:6e14e8ef8ae1f4fb261f2ab4d308e2b06dfcbaf14b0d1dee92ef3fd351165d6e@@)),
    MSG_NPC(3, (@@STRING:4f6a8ca4ee45606cc4b9bc8870b2067f26d0a3e4a9b008a981739cf5117db66c@@)),
    MSG_NPC(3, (@@STRING:5fe23b088b914a73400da6039de353f1ae2d46777c49560b0cf411cd0dfa9131@@)),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:8d835c89c80639014f15220f2fe899c84c0e0b6e12024f14f2aaa684c5524f66@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    WAIT(60),
    ALERT_CUE(7),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 97),
    CALL_SCRIPT(SHOCK_FUNC),
    MSG_NPC(2, (@@STRING:ea2163315524cf3f173fbfbf61d8feb7c56ac8f95c9f109d1a4ab3b88b2cfb59@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    CMD_UNK_E5(7, 0),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:ee8b56bdb1b5b9134ece029a3fc773909e9d35f541bac35722fd32214e61abdb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:df27a4e8cfa3721a2407be63a310b7b6babd8c9851922ca0b1003bdb7f271da1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:1a367a75f900cc0a76942ff6230d688845c1a340cf697ad9bb424f3813b34d38@@)),
    MSG_NPC(2, (@@STRING:5ab50a1d96337e0a02a9c70f7459d24729acdc4ac86b68d4c29ecb44f2e2ede6@@)),
    MSG_NPC(2, (@@STRING:dfab29120027d273fd4fe3d59ba535b06678485773ecec5588be1118ec75de7e@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:5dc5d9b31d07491dd23cd826b820f25020b1e29d0fa53d3049e8706866f755b1@@)),
    VARIANT_DEFAULT((@@STRING:80be4a3725e72e1388aa4d2f54166e11fa59b01c47c20a888d7bc4b0156300ab@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    MSG_NPC(1, (@@STRING:ab5373f4e0f40d05675c17d0842d24f2cfe8662ccb5526e1409115b4828bb22a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:6bea10452a90d985e3b7756e1b3fdb3e75765a7285c7e8c30ae656766b577e75@@)),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000003),
    MSG_NPC(3, (@@STRING:b5389fd85ca3c6c308e46f884573dcf49844a122ce81cb72e5f053a72eab08e9@@)),
    MSG_NPC(3, (@@STRING:6301deb257318af0f80e365c977e91f73fa5b9a2df63b90aa91973fbe7a8cfd9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x0000000a),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:db4356a2f4f7afeb29c16d9fc58d59b94a5bf5c12e6626b191dc90fb61c268ef@@)),
    VARIANT_DEFAULT((@@STRING:f26124509c7e5b864328849864fac7ba1e59d355ed9449bdfb84a26f2ff97168@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(8),
    PORTRAIT_REP(0x0003, 0x00000002),
    MSG_NPC(3, (@@STRING:c8b0ca3420d569ccd3e7c77de399ee3702082ca0360dbeca95ded277598bac6a@@)),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:b460ab47a6bda9db333f8b2181fd81ffea82944f68fc9501a247481abbe321e5@@)),
    PORTRAIT_REP(0x0003, 0x00000003),
    MSG_NPC(3, (@@STRING:320118efa6f91f8ff10100578beda2f927518cebf40820b1e0e5303dc7fe672b@@)),
    MSG_NPC(3, (@@STRING:5752c03d29ee7c27fa0ea0b548256a0b7dce8a7ffc721635c043b4b76692f2a1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(15),
    ALERT_CUE(6),
    ALERT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 97),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:f9500875b0297901df66ccf03c874d6981e8629eda2593f8e19bf11124b17c4a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:15e663c3a4d149c3554c75bdbd6fb3412ad741cb4f41b610b3b290b085d4884d@@)),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:de297fbd8fe8ebdf677d7b8f21c1c81b23981a6b31c6e7d8f8e02c87871d4250@@)),
    MSG_NPC(2, (@@STRING:8048f6149f3a5148d6c94d5100ea01e7b628cf7921c865825e548917280df98b@@)),
    MSG_NPC(2, (@@STRING:19ce99699b0a81fc1ec551323e265d8217a0a0445b6509154301d3e373300fc2@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    MSG_NPC(3, (@@STRING:7a91c98eac0ece0412ff166fdd46af93d7e4dc222c32ccb4ddbefa85ebde7d90@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:8e98908912a4d9b4ee301acc3fc1209a9db1dabc758b9cd9d27572f969727985@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:75cd5b0b5ce78b0ccbddad58fa1cf0f8fbf641cdfedd8e9b4d0045716eeded25@@)),
    VARIANT_DEFAULT((@@STRING:75cd5b0b5ce78b0ccbddad58fa1cf0f8fbf641cdfedd8e9b4d0045716eeded25@@)),
    TEXTBOX_CLEAR,
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(7),
    ALERT_CUE(8),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:480e0d7296dc7801982c505899a84f876e88c13280c28be0695ded7082cecdec@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};



















static const struct ScriptCommand s_gs9_g81_s0_lives1_dlg0[] = { /* 0x81d9bb4 */
    DEBUGINFO_O(13306),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 97),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 97),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 97),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 1),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(4),
    RET,
};

static const struct ScriptCommand s_gs9_g81_s0_lives2_dlg0[] = { /* 0x81d9e14 */
    DEBUGINFO_O(13347),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    FANFARE_PLAY2(474),
    SELECT_ANIMATION(9),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    FANFARE_PLAY2(474),
    SELECT_ANIMATION(9),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    SELECT_ANIMATION(4),
    RET,
};

static const struct ScriptCommand s_gs9_g81_s0_lives3_dlg0[] = { /* 0x81da054 */
    DEBUGINFO_O(13386),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    WALK_GRID(256, 132),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005e,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    SELECT_ANIMATION(4),
    RET,
};

static const struct ScriptCommand s_gs9_g82_s0_station_sref_script[] = { /* 0x81da204 */
    DEBUGINFO_O(13416),
    SELECT_MAP(MAP_TEAM_BASE),
    BGM_STOP,
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g82_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g82_s0_station_sref_script }; /* 0x81da284 */

static const struct ScriptCommand s_gs9_g83_s0_station_sref_script[] = { /* 0x81da290 */
    DEBUGINFO_O(13429),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs9_g83_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g83_s0_station_sref_script }; /* 0x81da310 */

static const struct ScriptCommand s_gs9_g83_s0_eff1_script[] = { /* 0x81da31c */
    DEBUGINFO_O(13442),
    AWAIT_CUE(8),
  LABEL(0), /* = 0x00 */
    UPDATE_VARINT(CALC_ADD, EVENT_LOCAL, 1),
    { 0x56, 0x00,  0x0000,  0x00000063,  0x00000000, NULL },
    { 0x62, 0x00,  0x0800, -0x00000008,  0x00000000, NULL },
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 30, /* to label */ 1),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g83_s0_lives0_dlg0[] = { /* 0x81da3bc */
    DEBUGINFO_O(13455),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000003, NULL },
    MSG_OVERHEARD((@@STRING:740789f2746dd63725b7e4a2cc8ba159427eb7418b71f4e3c9fa9ec6003209cf@@)),
    WALK_RELATIVE(512, 0, 80),
    WAIT(60),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x0000000c),
    MSG_QUIET(0, (@@STRING:60265523ea4cfd7aff604548d4746899f5651ad65bb25e4070651d0513ee207e@@)),
    MSG_QUIET(0, (@@STRING:aa5db7379c43a9ffee6f04ce39025abf0be818ce3f1c33d1e27a7ec54a3ac284@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    MSG_OVERHEARD((@@STRING:84f5724004ea88a54a77fa2afd1044e6e5a656df4a6ec1bbc8b5011c87137173@@)),
    WAIT(20),
    FANFARE_STOP2(508),
    FANFARE_PLAY2(779),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
  LABEL(1), /* = 0x01 */
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 30, /* to label */ 2),
    JUMP_LABEL(1),
  LABEL(2), /* = 0x02 */
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(30),
    SELECT_ANIMATION(2),
    WAIT(30),
    WALK_RELATIVE(512, 0, 40),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0000, 0x00000004),
    MSG_QUIET(0, (@@STRING:976c7a3bcaba02760ecbdc3a433facbe433d9b76adc174e2982424d34454aaa7@@)),
    MSG_QUIET(0, (@@STRING:817d31a14eb5743b81667a9527b796de95ac4220d7d73f64f0d64c94dc9d5207@@)),
    MSG_QUIET(0, (@@STRING:88ba1c5d8c7bca5fa31f3a7e79510f53fc8909477c8bff573e1d16ffb4d54018@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    MSG_QUIET(0, (@@STRING:382ab49458281a012db5f23b59fb8f9484937a55e0542d50b2d58a29cd8d1dc4@@)),
    MSG_QUIET(0, (@@STRING:e2acaee0384f3e31efb8ab12144ffe00d472e8402015a6d5b91183226ce27045@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    WALK_RELATIVE(153, 0, -40),
    ALERT_CUE(3),
    WALK_RELATIVE(153, 0, -40),
    HALT,
};


static const struct ScriptCommand s_gs9_g83_s0_lives1_dlg0[] = { /* 0x81da88c */
    DEBUGINFO_O(13513),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    WALK_RELATIVE(5120, -120, 0),
    ALERT_CUE(5),
    WALK_RELATIVE(5120, -120, 0),
    ALERT_CUE(8),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g84_s0_station_sref_script[] = { /* 0x81da91c */
    DEBUGINFO_O(13525),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g84_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g84_s0_station_sref_script }; /* 0x81da9bc */

static const struct ScriptCommand s_gs9_g84_s0_lives0_dlg0[] = { /* 0x81da9c8 */
    DEBUGINFO_O(13540),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000002),
    PORTRAIT_POS(3, 2, 0),
    MSG_NPC(3, (@@STRING:d59bd0a6d1ba2fc52e14f2f8b7059ccd51c8544f5f9b6352de3c82255799baa6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0002, 0x00000006),
    PORTRAIT_POS(2, -2, 0),
    MSG_NPC(2, (@@STRING:220730dd2ccefd0ab37cd33a10126a3301be62ca9d7970bf5cf1e05146467115@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:a257bd58341992e22ebee535b6e0ff3ec46b334b8dc83bb83b5d8f3592bbf3f6@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    PORTRAIT_REP(0x0002, 0x00000006),
    MSG_NPC(2, (@@STRING:f9e37d94ed27d4da472caf66decdcab02ce516b8eff3f4f1eab07bb8621f6ac4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000004),
    MSG_NPC(2, (@@STRING:43fb0b29c01903eb1ee619e1ba569c14b75fb8d0bd5519ce974b2cea6a9936c7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    PORTRAIT_REP(0x0002, 0x00000005),
    MSG_NPC(2, (@@STRING:55d1137c06ce3b0c063a8d86999d920d53868f1c1ba70f9e598e55edfcce2d8d@@)),
    MSG_NPC(2, (@@STRING:12d1e85c2bd7640ab4b77b7d2ea5986c71506618a348cf0a70d4d749af7a66a1@@)),
    MSG_NPC(2, (@@STRING:5d5f26b6ef98b6427d3ae5fce3f1b62f08220b1a7e78cf5c4e86dfe6a7b1ec9d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:479ceaa9d074e36c7b4e77f5435231944407af512345f72f0e9a6e9125e6819d@@)),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:f61efaf00038a231a370b28329d73fe97a35b34b700aba7e156db0567f8c3edc@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    WAIT(30),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_2C, 54, 0),
    WAIT(30),
    JUMP_LABEL(4),
  LABEL(4), /* = 0x04 */
    ALERT_CUE(7),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:5d0c40d738c01cc2a1285b93ac0b0061d9b414804dec3e98b4d0ac4ba688b754@@)),
    PORTRAIT_REP(0x0002, 0x00000003),
    MSG_NPC(2, (@@STRING:b861feaf211ff3ac0218f64507528aab7f7ff74d79c6026d2a12256665e61af0@@)),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:8ce5e9698190be3aa5b0c173203c9339b63864ef5acb80239cd4eb5cb4091405@@)),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:ec1d2ee5aadea59de2c8c57b023ef2cf03ce4993262277a879e7fe6aa47bc24a@@)),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:6a236aa1a15d2decc8ee09bd458bd80dfc6e6bdbba517dda1ff0ff3687ca9719@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};





static const struct ScriptCommand s_gs9_g84_s0_lives1_dlg0[] = { /* 0x81db1f8 */
    DEBUGINFO_O(13623),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 92),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 92),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(ANGRY_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(ANGRY_END_FUNC),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_RELATIVE(256, 0, 32),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WALK_RELATIVE(256, 0, -32),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g84_s0_lives1_dlg2[] = { /* 0x81db3d8 */
    DEBUGINFO_O(13656),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:5d0c40d738c01cc2a1285b93ac0b0061d9b414804dec3e98b4d0ac4ba688b754@@)),
    MSG_NPC(1, (@@STRING:b861feaf211ff3ac0218f64507528aab7f7ff74d79c6026d2a12256665e61af0@@)),
    MSG_NPC(1, (@@STRING:8ce5e9698190be3aa5b0c173203c9339b63864ef5acb80239cd4eb5cb4091405@@)),
    MSG_NPC(1, (@@STRING:ec1d2ee5aadea59de2c8c57b023ef2cf03ce4993262277a879e7fe6aa47bc24a@@)),
    MSG_NPC(1, (@@STRING:6a236aa1a15d2decc8ee09bd458bd80dfc6e6bdbba517dda1ff0ff3687ca9719@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g84_s0_lives2_dlg0[] = { /* 0x81db4b8 */
    DEBUGINFO_O(13669),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    WAIT(30),
    ALERT_CUE(5),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 93),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(8),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g84_s0_lives2_dlg2[] = { /* 0x81db5e8 */
    DEBUGINFO_O(13691),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:84c6168136f46a61dc68dc34303e535f2cfae689bb840c3f95d3eb0d4e21fc81@@)),
    MSG_NPC(1, (@@STRING:0000edf979c091cb828a2b28b2ff6aea1d90b1da3bda718643799a0cea7a845c@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g85_s0_station_sref_script[] = { /* 0x81db6b4 */
    DEBUGINFO_O(13701),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs9_g85_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g85_s0_station_sref_script }; /* 0x81db734 */

static const struct ScriptCommand s_gs9_g85_s0_lives0_dlg0[] = { /* 0x81db740 */
    DEBUGINFO_O(13714),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f64067650fcfabdee9db6df2b3a0b0b8ae59995a1c5be9ecf69cdfe828e7a0e8@@)),
    VARIANT_DEFAULT((@@STRING:7cab28019e7c00c790e754783f719fe3c833244904070bec7fbe779b291be821@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_INSTANT((@@STRING:79b68bcdfb3343e3f5d10cd40a1e5ef7b94d27fc0f3da3440b14a88919c2f9aa@@)),
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:54c538701a8776f284cda915bc78d2311d9a22633f55e36df0d7bf84ab3216b6@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    { 0x3b, 0x2a,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 2),
    COND_EQUAL(1, /* to label */ 2),
    WAIT(10),
    MSG_INSTANT((@@STRING:4ae5c66294dcf8a0dfe2db23ef073b4623e0be4f2d9df21e7f003fb879b43972@@)),
    MSG_INSTANT((@@STRING:48b77d9c75e3356ccfc73a59413e8e4e9597c172073cae546f9043b5c3bd787a@@)),
    FANFARE_PLAY(212),
    WAIT_FANFARE1(212),
    TEXTBOX_CLEAR2,
  LABEL(2), /* = 0x02 */
    { 0x3b, 0x2b,  0x0000,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:539ad240ef54cd579ff632173b2ea8e14dd4e53401ef66b07b784a9a59543f74@@)),
    CHOICE(/* label */  3, (@@STRING:e5b4158fa246c99386bbc5f943f4887ac2b3ac75150fd1e13dd84ace1bee0678@@)),
    CHOICE(/* label */  4, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(3), /* = 0x03 */
    RENAME_ALLY(-1),
  LABEL(4), /* = 0x04 */
    { 0x3b, 0x2c,  0x0001,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(3),
    HALT,
};



static const struct ScriptCommand s_gs9_g85_s0_lives1_dlg0[] = { /* 0x81dba98 */
    DEBUGINFO_O(13757),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g85_s0_lives2_dlg0[] = { /* 0x81dbad8 */
    DEBUGINFO_O(13764),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g86_s0_station_sref_script[] = { /* 0x81dbb18 */
    DEBUGINFO_O(13771),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    SELECT_ENTITIES(-1, 1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_ENTITIES(87, 0),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g86_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g86_s0_station_sref_script }; /* 0x81dbc08 */

static const struct ScriptCommand s_gs9_g86_s0_lives0_dlg0[] = { /* 0x81dbc14 */
    DEBUGINFO_O(13791),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(2, (@@STRING:2996f0852117d47934bb3ef21aa821a5622daed8ead86f0ca34ced9ea5591d60@@)),
    MSG_NPC(2, (@@STRING:53336e0365f07a1c74204e9a399ca87d2275e02c76bcbe3c5ea5e6257cf73cd0@@)),
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:ff32cfaba36e32f34863f8dd140dcccc42ffcf19637ba3ba8129585bb4e2cfeb@@)),
    MSG_NPC(2, (@@STRING:0c7b59ea3d42b0e02215cc880064b213770364e3b5e47b916b3c0e487c2ae84c@@)),
    MSG_NPC(2, (@@STRING:3d475bf319b5248c88e714d1c7400dd6e8aadedf461f9768b5c48ccd03c06ac3@@)),
    MSG_NPC(2, (@@STRING:166cacbc1d043efbb3fb450fb3706f88c88bc2d001966ed0399ef30caab163b2@@)),
    MSG_NPC(2, (@@STRING:a997f3f8c35800b2d72f4559f81e823fa3bf9d0ee91e890954efbe45dbbd39c6@@)),
    MSG_NPC(2, (@@STRING:ece975137552e25bb36dc12b8949a90cfb3f7b4813753d43dabd9c708cb36a98@@)),
    TEXTBOX_CLEAR,
    ASK3(FALSE, /*default*/ -1, /* speaker */ 2, (@@STRING:3808ad590f8e1c43f519140c74c17cbc846258d8f98efa12b5772a5eb8b3eff6@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(2), /* = 0x02 */
    WAIT(4),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 2),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:73f52cbfdfd93a2c5c1e2c4f73c7e82223f785a4935306b33e951c5671262199@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(4),
  LABEL(3), /* = 0x03 */
    PORTRAIT_REP(0x0002, 0x00000043),
    MSG_NPC(2, (@@STRING:fefd0675a9a746feac595a709b8497d01e3ace3373ad72c83bb9049e346f7725@@)),
    MSG_NPC(2, (@@STRING:149c47440262427a7aeebf2e5a67cdcc60124aa8e649d874bd623c3b2e26af3e@@)),
    MSG_NPC(2, (@@STRING:debb05a40f188e7fa5875710de91bf9de73e532156d0da4e81d4edf2ef7e4921@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    SELECT_ENTITIES(-1, 3),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:504d2c8a5e0e8f40a0651af9a5be9ffd186a27393a3cd55e07a3721e2ef90a13@@)),
    MSG_NPC(2, (@@STRING:ece975137552e25bb36dc12b8949a90cfb3f7b4813753d43dabd9c708cb36a98@@)),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 2, (@@STRING:3808ad590f8e1c43f519140c74c17cbc846258d8f98efa12b5772a5eb8b3eff6@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(4), /* = 0x04 */
    WAIT(10),
    BGM_STOP,
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:e2ae4442c3913611db3a8152f516812f864675c4142bfca0bf193a2d466e6f60@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:3465480ff19fbf63af301d7f0b4a74676f55b4c366c792ebc8f327458b34c234@@)),
    MSG_NPC(2, (@@STRING:ab0fd62d462300006926897a1aecc1b88c9f85aa99d64d48a78c77ff77eddcf5@@)),
    MSG_NPC(2, (@@STRING:5d6a71265eaa456f6b2899acd3b0241181effcb65a3fb9f1d55f75d6901fd53d@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};




static const struct ScriptCommand s_gs9_g86_s1_lives0_dlg0[] = { /* 0x81dc418 */
    DEBUGINFO_O(13859),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g86_s2_lives0_dlg0[] = { /* 0x81dc458 */
    DEBUGINFO_O(13866),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g86_s3_lives0_dlg0[] = { /* 0x81dc4d8 */
    DEBUGINFO_O(13877),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x30,  0x0080,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(30),
    { 0x89, 0x18,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g87_s0_lives0_dlg2[] = { /* 0x81dc588 */
    DEBUGINFO_O(13891),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(1, (@@STRING:3465480ff19fbf63af301d7f0b4a74676f55b4c366c792ebc8f327458b34c234@@)),
    MSG_NPC(1, (@@STRING:ab0fd62d462300006926897a1aecc1b88c9f85aa99d64d48a78c77ff77eddcf5@@)),
    MSG_NPC(1, (@@STRING:5d6a71265eaa456f6b2899acd3b0241181effcb65a3fb9f1d55f75d6901fd53d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g88_s0_station_sref_script[] = { /* 0x81dc618 */
    DEBUGINFO_O(13903),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g88_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g88_s0_station_sref_script }; /* 0x81dc6b8 */

static const struct ScriptCommand s_gs9_g88_s0_lives0_dlg0[] = { /* 0x81dc6c4 */
    DEBUGINFO_O(13918),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:c9fc56def43d13c279f9199456f030b36469acaf841569881f900da075f63057@@)),
    MSG_NPC(2, (@@STRING:e18696f95ee5f440ca53595f5ee25b30d381051d1725b48caa434618860086bb@@)),
    MSG_NPC(2, (@@STRING:4cb94b705cee548ade34841fa3eaa721dc3a011c1136c85ea1ea10a45754cb03@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs9_g88_s0_lives1_dlg0[] = { /* 0x81dc828 */
    DEBUGINFO_O(13934),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g88_s0_lives1_dlg2[] = { /* 0x81dc878 */
    DEBUGINFO_O(13942),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:5d0c40d738c01cc2a1285b93ac0b0061d9b414804dec3e98b4d0ac4ba688b754@@)),
    MSG_NPC(1, (@@STRING:b861feaf211ff3ac0218f64507528aab7f7ff74d79c6026d2a12256665e61af0@@)),
    MSG_NPC(1, (@@STRING:8ce5e9698190be3aa5b0c173203c9339b63864ef5acb80239cd4eb5cb4091405@@)),
    MSG_NPC(1, (@@STRING:ec1d2ee5aadea59de2c8c57b023ef2cf03ce4993262277a879e7fe6aa47bc24a@@)),
    MSG_NPC(1, (@@STRING:6a236aa1a15d2decc8ee09bd458bd80dfc6e6bdbba517dda1ff0ff3687ca9719@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs9_g89_s0_station_sref_script[] = { /* 0x81dc95c */
    DEBUGINFO_O(13955),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE_INSIDE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_ENTITIES(90, 0),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs9_g89_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs9_g89_s0_station_sref_script }; /* 0x81dca3c */

static const struct ScriptCommand s_gs9_g89_s0_lives0_dlg0[] = { /* 0x81dca48 */
    DEBUGINFO_O(13974),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:2996f0852117d47934bb3ef21aa821a5622daed8ead86f0ca34ced9ea5591d60@@)),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 2, (@@STRING:638199bfbe471a16054fbeae11f0a93e8b8d62d73bec9e6232b628321607483a@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(2), /* = 0x02 */
    WAIT(4),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:d0fe646087b4af5840747c9ee437a110e8fd8877561d588ef8dae171cfbd38b2@@)),
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:c135bd6150cb1182e5d480dac9611fc7a207ba3948f18c3727c383ac56e7a790@@)),
    MSG_NPC(2, (@@STRING:344e41b38ac86911372d111b293ad3dc777c0766484058d1d8e69ca61b6546bc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:3b0384fd0f6265d891b7df123a6729da4209577596c64490a47ef1042fed260a@@)),
    MSG_NPC(2, (@@STRING:e4707ddc3c8bf660695820b2fe555837600ecf908ad57d9aea7d44025171920c@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(4),
  LABEL(3), /* = 0x03 */
    PORTRAIT_REP(0x0002, 0x00000043),
    MSG_NPC(2, (@@STRING:a971badf5d825fcd82de5ee2887802735c573dbe7c109cd7a26be183f0dc5134@@)),
    MSG_NPC(2, (@@STRING:66932a758ec5a505c934416e1fcdefbde68501735a29aabf6c5a7bd489199a5b@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 2),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:419e77311f5f21cd86e3edb80789b5a1d19b0f2438b04b4f277ea0d638899790@@)),
    MSG_NPC(2, (@@STRING:b1bc90a958592b36e01275ac62940e84ee017c7a5a22f38279ddc63746d76db2@@)),
    MSG_NPC(2, (@@STRING:19b2a52d6ac299d738b67f2460f8241bdc5d61c2473b4d909cf5327c5ccd18c8@@)),
    PORTRAIT_REP(0x0002, 0x00000000),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 2, (@@STRING:09ebb39e7ce245792db4d3645396e92e103cbd67ce9e9ef51d81feabc772b556@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(4), /* = 0x04 */
    WAIT(10),
    BGM_STOP,
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:e2ae4442c3913611db3a8152f516812f864675c4142bfca0bf193a2d466e6f60@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_RESCUE_TEAM_BASE),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:b524561be05f61d5284fb289e567302699397d6875dfe794d6028e3fd3edcfd0@@)),
    MSG_NPC(2, (@@STRING:d032ec10028f27b61b299f13f49311e8cfa1628c83fa49280735d0b9a01166cb@@)),
    MSG_NPC(2, (@@STRING:fe56a8ff524492f4c0526a6a32c08afdfb96308da98898f5e307a7746be9ba1f@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};




static const struct ScriptCommand s_gs9_g89_s0_lives1_dlg0[] = { /* 0x81dd114 */
    DEBUGINFO_O(14042),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs9_g89_s1_lives0_dlg0[] = { /* 0x81dd154 */
    DEBUGINFO_O(14049),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g89_s2_lives0_dlg0[] = { /* 0x81dd224 */
    DEBUGINFO_O(14065),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x30,  0x0080,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(30),
    { 0x89, 0x18,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs9_g90_s0_lives0_dlg2[] = { /* 0x81dd2d4 */
    DEBUGINFO_O(14079),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:1bf1b1b31c616d9a2eb540bd9ecebfc18e02a266a3c6e7d1a6ce588b7c15913e@@)),
    MSG_NPC(1, (@@STRING:d032ec10028f27b61b299f13f49311e8cfa1628c83fa49280735d0b9a01166cb@@)),
    MSG_NPC(1, (@@STRING:856acc8ad0f988c427093ad62688046a8b506b7516636209f11c4f45b8dda07b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs9_g91_s0_station_sref_script[] = { /* 0x81dd364 */
    DEBUGINFO_O(14091),
    SELECT_MAP(MAP_TEAM_BASE),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_BENEVOLENT_SPIRIT),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs9_g91_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs9_g91_s0_station_sref_script }; /* 0x81dd404 */

static const struct ScriptCommand s_gs9_g91_s0_lives0_dlg0[] = { /* 0x81dd410 */
    DEBUGINFO_O(14106),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:c62c6d3485403b6b461d1baf78832bfac67628255bf1332369b5f6e48884df44@@)),
    MSG_NPC(3, (@@STRING:135f48f79a919def622d6c72697799b2ef98a464ec936f4edf72542f2f9a086f@@)),
    MSG_NPC(3, (@@STRING:720ee0c1f8a07224f994d42c2cda2093986c39d67672d807caeaac821eab3aaa@@)),
    MSG_NPC(3, (@@STRING:f5a378bb19369f32aad90d0e28996c822ec217d007379cca13b7a12db3bf74f5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:8fad089a930f14b58dfcf6cdf2c9a6c18d5ad51dd662b7ae3c39e37a32edcceb@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    MSG_NPC(2, (@@STRING:ead3708ee34dab4934f211a4f621b2648a8791c37ea5d1c36d27ed772596e08a@@)),
    MSG_NPC(2, (@@STRING:3d35c3065f1c304529d1660aebce8f972a67d253c8f16ef799b5d322e8069c58@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(30),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_2C, 9, 0),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(2, (@@STRING:1d80b8aa26e05bb69fba92aa2c414f136d91bebaf74c6d95fb7154243f75b506@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    BGM_FADEOUT(60),
    ALERT_CUE(7),
    WAIT(20),
    ALERT_CUE(8),
    MSG_NPC(3, (@@STRING:b5405a16a252b63c7a3a268b8d418781c8ba407b1dcf7aca36c956bafc329e3d@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:fa033908cb775261223aa6443b0a942637c342eeab858e223bf5e4e8fd426771@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:d80190e19ebe79356dae4af4920b1b4951d244c17e95c598fc54c2c2e805b62e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:62aaff54005a97710d5f940d5d21ebe82466cf8b9ca9ac02cc7d6037773240d3@@)),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:1bd5f44847b39e33b16c49a2cdc8301d8e899ab320766fc1189a1bd40d1b17ac@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:0d9ff5331268d320f954cf372174c7c8f3ad343e77c8bdfca162ff184446bc92@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};










static const struct ScriptCommand s_gs9_g91_s0_lives1_dlg0[] = { /* 0x81dd9c8 */
    DEBUGINFO_O(14176),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x89, 0x18,  0x0100,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x89, 0x28,  0x0080,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    END_DELETE,
};

static const struct ScriptCommand s_gs9_g91_s0_lives2_dlg0[] = { /* 0x81ddad8 */
    DEBUGINFO_O(14196),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    END_DELETE,
};

static const struct GroundLivesData s_gs9_g0_s1_lives[] = { /* 0x81ddb58 */
    /*  0 */ {   0,   6,   0,   0, {  61,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   6,   0,   0, {  64,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g0_s2_lives[] = { /* 0x81ddb88 */
    /*  0 */ {   0,   2,   0,   0, {   8,  46, 0, 0 }, {
        [0] = s_gs9_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   5,  46, 0, 0 }, {
        [0] = s_gs9_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g0_s3_lives[] = { /* 0x81ddbb8 */
    /*  0 */ {   0,   4,   0,   0, {  34,  62, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  64, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g0_s4_lives[] = { /* 0x81ddbe8 */
    /*  0 */ {   0,   0,   0,   0, {  34,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  34,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g0_s5_lives[] = { /* 0x81ddc18 */
    /*  0 */ {   0,   4,   0,   0, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s5_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s5_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g0_s6_lives[] = { /* 0x81ddc48 */
    /*  0 */ {   0,   4,   0,   0, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s6_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g0_s6_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g0_s7_lives[] = { /* 0x81ddc78 */
    /*  0 */ {  51,   0,   0,   0, {  63,  40, 0, 0 }, {
        [2] = s_gs9_g0_s7_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g1_s1_lives[] = { /* 0x81ddc90 */
    /*  0 */ {  10,   0,   0,   0, {  30,  49, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g1_s1_lives0_dlg2,
    } },
    /*  1 */ {  11,   0,   0,   0, {  30,  52, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g1_s1_lives1_dlg2,
    } },
    /*  2 */ {  12,   0,   0,   0, {  27,  49, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g1_s1_lives2_dlg2,
    } },
    /*  3 */ {  13,   0,   0,   0, {  27,  52, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g1_s1_lives3_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g2_s1_lives[] = { /* 0x81ddcf0 */
    /*  0 */ {  55,   4,   0,   0, {  54,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g2_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g5_s0_lives[] = { /* 0x81ddd08 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g5_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g5_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g5_s1_lives[] = { /* 0x81ddd38 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g5_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g6_s1_lives[] = { /* 0x81ddd50 */
    /*  0 */ {   0,   2,   0,   0, {  32,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g6_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   6,   0,   0, {  37,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g6_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g6_s2_lives[] = { /* 0x81ddd80 */
    /*  0 */ {   0,   4,   0,   0, {  34,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g6_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g7_s0_lives[] = { /* 0x81ddd98 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g7_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g7_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g7_s1_lives[] = { /* 0x81dddc8 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g7_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g8_s0_lives[] = { /* 0x81ddde0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g8_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g8_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g9_s0_lives[] = { /* 0x81dde10 */
    /*  0 */ { 124,   0,   0,   0, {  27,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g9_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g10_s0_lives[] = { /* 0x81dde28 */
    /*  0 */ { 134,   0,   0,   0, {  46,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g10_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g11_s0_lives[] = { /* 0x81dde40 */
    /*  0 */ { 115,   0,   0,   0, {  49,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g11_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g12_s0_lives[] = { /* 0x81dde58 */
    /*  0 */ { 120,   0,   0,   0, {  52,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g12_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g13_s0_lives[] = { /* 0x81dde70 */
    /*  0 */ {  70,   0,   0,   0, {  55,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g13_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g14_s0_lives[] = { /* 0x81dde88 */
    /*  0 */ { 128,   0,   0,   0, {  58,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g14_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g15_s0_lives[] = { /* 0x81ddea0 */
    /*  0 */ { 123,   0,   0,   0, {  61,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g15_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g16_s0_lives[] = { /* 0x81ddeb8 */
    /*  0 */ {  82,   0,   0,   0, {  64,  39, 0, CPOS_HALFTILE }, {
        [2] = s_gs9_g16_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g17_s0_lives[] = { /* 0x81dded0 */
    /*  0 */ {   0,   4,   0,   0, {  34,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g17_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  37,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g17_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g17_s2_lives[] = { /* 0x81ddf00 */
    /*  0 */ {  34,   0,   0,   0, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g17_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g17_s3_lives[] = { /* 0x81ddf18 */
    /*  0 */ {  34,   0,   0,   0, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g17_s3_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g18_s0_lives[] = { /* 0x81ddf30 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g18_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g18_s0_lives1_dlg0,
    } },
    /*  2 */ {  55,   4,   0,   0, {  54,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g18_s0_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g19_s0_lives[] = { /* 0x81ddf78 */
    /*  0 */ {  34,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g19_s0_lives0_dlg0,
        [2] = s_gs9_g19_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g19_s1_lives[] = { /* 0x81ddf90 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g19_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g19_s1_lives1_dlg0,
        [2] = s_gs9_g19_s1_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g20_s0_lives[] = { /* 0x81ddfc0 */
    /*  0 */ {   0,   4,   0,   0, {  31,  36, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g20_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g20_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g20_s1_lives[] = { /* 0x81ddff0 */
    /*  0 */ {  34,   0,   0,   0, {  34,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g20_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g20_s2_lives[] = { /* 0x81de008 */
    /*  0 */ {  34,   0,   0,   0, {  34,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g20_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g21_s0_lives[] = { /* 0x81de020 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g21_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g21_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g22_s1_lives[] = { /* 0x81de050 */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g22_s1_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {   8,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g22_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g22_s2_lives[] = { /* 0x81de080 */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g22_s2_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {   8,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g22_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g23_s0_lives[] = { /* 0x81de0b0 */
    /*  0 */ {   0,   2,   0,   0, {  32,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g23_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  37,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g23_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g24_s1_lives[] = { /* 0x81de0e0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g24_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g25_s0_lives[] = { /* 0x81de0f8 */
    /*  0 */ {   0,   2,   0,   0, {  31,  36, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g25_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  34,  50, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g25_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g26_s0_lives[] = { /* 0x81de128 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g26_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g26_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g26_s1_lives[] = { /* 0x81de158 */
    /*  0 */ {  66,   0,   0,   0, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g26_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g27_s0_lives[] = { /* 0x81de170 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g27_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g27_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g28_s0_lives[] = { /* 0x81de1a0 */
    /*  0 */ {   0,   4,   0,   0, {  32,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g28_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g28_s0_lives1_dlg0,
    } },
    /*  2 */ {  68,   0,   0,   0, {  32,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g28_s0_lives2_dlg0,
    } },
    /*  3 */ {  61,   0,   0,   0, {  36,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g28_s0_lives3_dlg0,
    } },
    /*  4 */ {  62,   0,   0,   0, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g28_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g28_s1_lives[] = { /* 0x81de218 */
    /*  0 */ {  66,   0,   0,   0, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g28_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g29_s0_lives[] = { /* 0x81de230 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g29_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g29_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g30_s0_lives[] = { /* 0x81de260 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g30_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g30_s0_lives1_dlg0,
    } },
    /*  2 */ {  91,   4,   0,   0, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g30_s0_lives2_dlg0,
    } },
    /*  3 */ {  92,   4,   0,   0, {  37,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g30_s0_lives3_dlg0,
    } },
    /*  4 */ {  93,   4,   0,   0, {  31,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g30_s0_lives4_dlg0,
    } },
    /*  5 */ {  55,   6,   0,   0, {  54,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g30_s0_lives5_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g31_s0_lives[] = { /* 0x81de2f0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g31_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g31_s0_lives1_dlg0,
    } },
    /*  2 */ {  91,   2,   0,   0, {  34,  49, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g31_s0_lives2_dlg0,
    } },
    /*  3 */ {  92,   2,   0,   0, {  37,  49, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g31_s0_lives3_dlg0,
    } },
    /*  4 */ {  93,   2,   0,   0, {  31,  49, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g31_s0_lives4_dlg0,
    } },
    /*  5 */ {  54,   2,   0,   0, {  34,  50, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g31_s0_lives5_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g32_s0_lives[] = { /* 0x81de380 */
    /*  0 */ {  54,   4,   0,   0, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g32_s0_lives0_dlg0,
        [2] = s_gs9_g32_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g33_s0_lives[] = { /* 0x81de398 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g33_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g33_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g34_s0_lives[] = { /* 0x81de3c8 */
    /*  0 */ {   0,   4,   0,   0, {  32,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g34_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  36,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g34_s0_lives1_dlg0,
    } },
    /*  2 */ {  54,   0,   0,   0, {  32,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g34_s0_lives2_dlg0,
    } },
    /*  3 */ {  94,   0,   0,   0, {  36,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g34_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g35_s0_lives[] = { /* 0x81de428 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g35_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g35_s1_lives[] = { /* 0x81de440 */
    /*  0 */ {  34,   6,   0,   0, {  34,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g35_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g35_s2_lives[] = { /* 0x81de458 */
    /*  0 */ {  78,   4,   0,   0, {  34,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g35_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g36_s0_lives[] = { /* 0x81de470 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g36_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   7,   0,   0, {  37,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g36_s0_lives1_dlg0,
    } },
    /*  2 */ {  78,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g36_s0_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g37_s0_lives[] = { /* 0x81de4b8 */
    /*  0 */ {  78,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g37_s0_lives0_dlg0,
        [2] = s_gs9_g37_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g38_s0_lives[] = { /* 0x81de4d0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g38_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g38_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g39_s0_lives[] = { /* 0x81de500 */
    /*  0 */ {   0,   4,   0,   0, {  33,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g39_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  36,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g39_s0_lives1_dlg0,
    } },
    /*  2 */ {  78,   0,   0,   0, {  33,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g39_s0_lives2_dlg0,
    } },
    /*  3 */ {  95,   0,   0,   0, {  36,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g39_s0_lives3_dlg0,
    } },
    /*  4 */ {  88,   6,   0,   0, {  52,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g39_s0_lives4_dlg0,
    } },
    /*  5 */ {  90,   6,   0,   0, {  54,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g39_s0_lives5_dlg0,
    } },
    /*  6 */ {  89,   6,   0,   0, {  54,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g39_s0_lives6_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g40_s0_lives[] = { /* 0x81de5a8 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g40_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g40_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g42_s0_lives[] = { /* 0x81de5d8 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g42_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g42_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g43_s0_lives[] = { /* 0x81de608 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g43_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g43_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g44_s0_lives[] = { /* 0x81de638 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g44_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g44_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g45_s0_lives[] = { /* 0x81de668 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g45_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g45_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g45_s1_lives[] = { /* 0x81de698 */
    /*  0 */ {  55,   0,   0,   0, {  54,  31, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g45_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g46_s0_lives[] = { /* 0x81de6b0 */
    /*  0 */ {   0,   2,   0,   0, {  32,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g46_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g46_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g47_s0_lives[] = { /* 0x81de6e0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g47_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g47_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g48_s0_lives[] = { /* 0x81de710 */
    /*  0 */ {   0,   2,   0,   0, {  34,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g48_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  38,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g48_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g48_s1_lives[] = { /* 0x81de740 */
    /*  0 */ {  88,   6,   0,   0, {  42,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g48_s1_lives0_dlg0,
    } },
    /*  1 */ {  89,   6,   0,   0, {  43,  45, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g48_s1_lives1_dlg0,
    } },
    /*  2 */ {  90,   6,   0,   0, {  43,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g48_s1_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g48_s2_lives[] = { /* 0x81de788 */
    /*  0 */ {  54,   6,   0,   0, {  42,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g48_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g49_s0_lives[] = { /* 0x81de7a0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g49_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  34,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g49_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g50_s0_lives[] = { /* 0x81de7d0 */
    /*  0 */ {  34,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g50_s0_lives0_dlg0,
        [2] = s_gs9_g50_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g50_s2_lives[] = { /* 0x81de7e8 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g50_s2_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g50_s2_lives1_dlg0,
        [2] = s_gs9_g50_s2_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g50_s3_lives[] = { /* 0x81de818 */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g50_s3_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g50_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g51_s0_lives[] = { /* 0x81de848 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g51_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g51_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g52_s0_lives[] = { /* 0x81de878 */
    /*  0 */ {   0,   2,   0,   0, {  34,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g52_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   1,   0,   0, {  37,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g52_s0_lives1_dlg0,
    } },
    /*  2 */ {  88,   6,   0,   0, {  41,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g52_s0_lives2_dlg0,
    } },
    /*  3 */ {  89,   6,   0,   0, {  42,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g52_s0_lives3_dlg0,
    } },
    /*  4 */ {  90,   6,   0,   0, {  42,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g52_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g53_s0_lives[] = { /* 0x81de8f0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s0_lives1_dlg0,
    } },
    /*  2 */ {  54,   4,   0,   0, {  37,  45, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s0_lives2_dlg0,
    } },
    /*  3 */ {  94,   4,   0,   0, {  33,  45, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s0_lives3_dlg0,
    } },
    /*  4 */ {  55,   0,   0,   0, {  54,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s0_lives4_dlg0,
    } },
    /*  5 */ {  78,   4,   0,   0, {  34,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s0_lives5_dlg0,
    } },
    /*  6 */ {  95,   4,   0,   0, {  36,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s0_lives6_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g53_s2_lives[] = { /* 0x81de998 */
    /*  0 */ {  68,   0,   0,   0, {  39,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g53_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g55_s0_lives[] = { /* 0x81de9b0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g55_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g55_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g55_s1_lives[] = { /* 0x81de9e0 */
    /*  0 */ {  55,   4,   0,   0, {  54,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g55_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g57_s0_lives[] = { /* 0x81de9f8 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g57_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g57_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g58_s0_lives[] = { /* 0x81dea28 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g58_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g58_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g58_s1_lives[] = { /* 0x81dea58 */
    /*  0 */ {  77,   4,   0,   0, {  52,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g58_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g59_s0_lives[] = { /* 0x81dea70 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g59_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g59_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g60_s0_lives[] = { /* 0x81deaa0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g60_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g60_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g61_s0_lives[] = { /* 0x81dead0 */
    /*  0 */ {  34,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g61_s0_lives0_dlg0,
        [2] = s_gs9_g61_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g61_s1_lives[] = { /* 0x81deae8 */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g61_s1_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g61_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g62_s0_lives[] = { /* 0x81deb18 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g62_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g62_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g63_s0_lives[] = { /* 0x81deb48 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g63_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g63_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g64_s1_lives[] = { /* 0x81deb78 */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g64_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g65_s0_lives[] = { /* 0x81deb90 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g65_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g65_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g67_s0_lives[] = { /* 0x81debc0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g67_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g67_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g68_s0_lives[] = { /* 0x81debf0 */
    /*  0 */ {   0,   4,   0,   0, {  34,  51, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  34,  36, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g68_s0_lives1_dlg0,
    } },
    /*  2 */ {  54,   3,   0,   0, {  32,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives2_dlg0,
    } },
    /*  3 */ {  94,   5,   0,   0, {  36,  39, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g68_s0_lives3_dlg0,
    } },
    /*  4 */ {  78,   5,   0,   0, {  38,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives4_dlg0,
    } },
    /*  5 */ {  95,   5,   0,   0, {  40,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives5_dlg0,
    } },
    /*  6 */ {  80,   5,   0,   0, {  25,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives6_dlg0,
    } },
    /*  7 */ {  79,   0,   0,   0, {  28,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives7_dlg0,
    } },
    /*  8 */ {  77,   6,   0,   0, {  38,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives8_dlg0,
    } },
    /*  9 */ {  85,   2,   0,   0, {  44,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives9_dlg0,
    } },
    /* 10 */ {  88,   6,   0,   0, {  34,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives10_dlg0,
    } },
    /* 11 */ {  89,   0,   0,   0, {  30,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives11_dlg0,
    } },
    /* 12 */ {  90,   1,   0,   0, {  38,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g68_s0_lives12_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g69_s0_lives[] = { /* 0x81ded28 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g69_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   0,   0,   0, {  34,  26, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g69_s0_lives1_dlg0,
    } },
    /*  2 */ {  54,   4,   0,   0, {  34,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g69_s0_lives2_dlg0,
    } },
    /*  3 */ {  94,   4,   0,   0, {  37,  45, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g69_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g71_s0_lives[] = { /* 0x81ded88 */
    /*  0 */ {   0,   0,   0,   0, {  34,  62, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g71_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   0,   0,   0, {  34,  64, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g71_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g72_s0_lives[] = { /* 0x81dedb8 */
    /*  0 */ {   0,   6,   0,   0, {  37,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g72_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {  32,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g72_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g72_s1_lives[] = { /* 0x81dede8 */
    /*  0 */ {   7,   2,   0,   0, {  32,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g72_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g72_s2_lives[] = { /* 0x81dee00 */
    /*  0 */ {   7,   2,   0,   0, {  32,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g72_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g74_s0_lives[] = { /* 0x81dee18 */
    /*  0 */ {   0,   6,   0,   0, {  34,  46, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g74_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   6,   0,   0, {  34,  43, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g74_s0_lives1_dlg0,
    } },
    /*  2 */ { 109,   6,   0,   0, {  57,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g74_s0_lives2_dlg0,
    } },
    /*  3 */ { 110,   6,   0,   0, {  60,  43, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g74_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g75_s0_lives[] = { /* 0x81dee78 */
    /*  0 */ {   0,   4,   0,   0, {  32,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives1_dlg0,
    } },
    /*  2 */ { 109,   0,   0,   0, {  36,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives2_dlg0,
    } },
    /*  3 */ { 110,   0,   0,   0, {  32,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives3_dlg0,
    } },
    /*  4 */ { 112,   4,   0,   0, {  34,  57, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives4_dlg0,
    } },
    /*  5 */ { 113,   4,   0,   0, {  32,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives5_dlg0,
    } },
    /*  6 */ { 114,   4,   0,   0, {  36,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives6_dlg0,
    } },
    /*  7 */ {  54,   0,   0,   0, {  53,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s0_lives7_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g75_s1_lives[] = { /* 0x81def38 */
    /*  0 */ {  34,   4,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s1_lives0_dlg0,
    } },
    /*  1 */ { 112,   4,   0,   0, {  34,  48, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s1_lives1_dlg0,
    } },
    /*  2 */ { 113,   4,   0,   0, {  32,  50, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s1_lives2_dlg0,
    } },
    /*  3 */ { 114,   4,   0,   0, {  36,  50, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s1_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g75_s2_lives[] = { /* 0x81def98 */
    /*  0 */ {  34,   4,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s2_lives0_dlg0,
    } },
    /*  1 */ { 112,   4,   0,   0, {  34,  48, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s2_lives1_dlg0,
    } },
    /*  2 */ { 113,   4,   0,   0, {  32,  50, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s2_lives2_dlg0,
    } },
    /*  3 */ { 114,   4,   0,   0, {  36,  50, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g75_s2_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g76_s0_lives[] = { /* 0x81deff8 */
    /*  0 */ {   0,   4,   0,   0, {  37,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g76_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  35,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g76_s0_lives1_dlg0,
    } },
    /*  2 */ { 109,   4,   0,   0, {  32,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g76_s0_lives2_dlg0,
    } },
    /*  3 */ { 110,   3,   0,   0, {  29,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g76_s0_lives3_dlg0,
    } },
    /*  4 */ { 112,   0,   0,   0, {  24,  45, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g76_s0_lives4_dlg0,
    } },
    /*  5 */ { 113,   0,   0,   0, {  24,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g76_s0_lives5_dlg0,
    } },
    /*  6 */ { 114,   0,   0,   0, {  27,  43, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g76_s0_lives6_dlg0,
    } },
    /*  7 */ {  54,   5,   0,   0, {  39,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g76_s0_lives7_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g77_s0_lives[] = { /* 0x81df0b8 */
    /*  0 */ { 112,   0,   0,   0, {  23,  43, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g77_s0_lives0_dlg0,
        [2] = s_gs9_g77_s0_lives0_dlg2,
    } },
    /*  1 */ { 113,   0,   0,   0, {  24,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s0_lives1_dlg0,
        [2] = s_gs9_g77_s0_lives1_dlg2,
    } },
    /*  2 */ { 114,   0,   0,   0, {  27,  41, CPOS_HALFTILE, 0 }, {
        [0] = s_gs9_g77_s0_lives2_dlg0,
        [2] = s_gs9_g77_s0_lives2_dlg2,
    } },
    /*  3 */ { 109,   2,   0,   0, {  29,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s0_lives3_dlg0,
        [2] = s_gs9_g77_s0_lives3_dlg2,
    } },
    /*  4 */ { 110,   6,   0,   0, {  43,  22, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs9_g77_s0_lives4_dlg2,
        [3] = s_gs9_g77_s0_lives4_dlg3,
    } },
};

static const struct GroundLivesData s_gs9_g77_s1_lives[] = { /* 0x81df130 */
    /*  0 */ {   0,   4,   0,   0, {  32,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s1_lives1_dlg0,
    } },
    /*  2 */ { 112,   0,   0,   0, {  23,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s1_lives2_dlg0,
    } },
    /*  3 */ { 113,   0,   0,   0, {  24,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s1_lives3_dlg0,
    } },
    /*  4 */ { 114,   0,   0,   0, {  27,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s1_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g77_s2_lives[] = { /* 0x81df1a8 */
    /*  0 */ { 112,   4,   0,   0, {  23,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s2_lives0_dlg0,
    } },
    /*  1 */ { 113,   4,   0,   0, {  24,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s2_lives1_dlg0,
    } },
    /*  2 */ { 114,   4,   0,   0, {  27,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s2_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g77_s3_lives[] = { /* 0x81df1f0 */
    /*  0 */ { 112,   4,   0,   0, {  22,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s3_lives0_dlg0,
    } },
    /*  1 */ { 113,   4,   0,   0, {  24,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s3_lives1_dlg0,
    } },
    /*  2 */ { 114,   4,   0,   0, {  27,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g77_s3_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g78_s0_lives[] = { /* 0x81df238 */
    /*  0 */ {   0,   4,   0,   0, {  34,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  38,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives1_dlg0,
    } },
    /*  2 */ { 109,   4,   0,   0, {  37,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives2_dlg0,
    } },
    /*  3 */ { 110,   4,   0,   0, {  40,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives3_dlg0,
    } },
    /*  4 */ { 112,   4,   0,   0, {  31,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives4_dlg0,
    } },
    /*  5 */ { 113,   4,   0,   0, {  28,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives5_dlg0,
    } },
    /*  6 */ { 114,   4,   0,   0, {  30,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives6_dlg0,
    } },
    /*  7 */ {  54,   4,   0,   0, {  34,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g78_s0_lives7_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g79_s0_lives[] = { /* 0x81df2f8 */
    /*  0 */ {   1,   4,   0,   0, {  32,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g79_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g79_s0_lives1_dlg0,
    } },
    /*  2 */ { 124,   0,   0,   0, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g79_s0_lives2_dlg0,
    } },
    /*  3 */ { 126,   4,   0,   0, {  32,  63, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g79_s0_lives3_dlg0,
    } },
    /*  4 */ { 125,   4,   0,   0, {  36,  63, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g79_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g79_s1_lives[] = { /* 0x81df370 */
    /*  0 */ { 124,   0,   0,   0, {  25,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g79_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g80_s0_lives[] = { /* 0x81df388 */
    /*  0 */ {  93,   0,   0,   0, {  63,  45, 0, CPOS_HALFTILE }, {
        [1] = s_gs9_g80_s0_lives0_dlg1,
        [2] = s_gs9_g80_s0_lives0_dlg2,
        [3] = s_gs9_g80_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs9_g81_s0_lives[] = { /* 0x81df3a0 */
    /*  0 */ {   1,   4,   0,   0, {  32,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g81_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g81_s0_lives1_dlg0,
    } },
    /*  2 */ {  97,   0,   0,   0, {  34,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g81_s0_lives2_dlg0,
    } },
    /*  3 */ { 104,   6,   0,   0, {  52,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g81_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g83_s0_lives[] = { /* 0x81df400 */
    /*  0 */ {  33,   0,   0,   0, {  34,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g83_s0_lives0_dlg0,
    } },
    /*  1 */ { 121,   6,   0,   0, {  54,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g83_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g84_s0_lives[] = { /* 0x81df430 */
    /*  0 */ {   0,   4,   0,   0, {  34,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g84_s0_lives0_dlg0,
    } },
    /*  1 */ {  93,   0,   0,   0, {  31,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g84_s0_lives1_dlg0,
        [2] = s_gs9_g84_s0_lives1_dlg2,
    } },
    /*  2 */ {  92,   0,   0,   0, {  37,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g84_s0_lives2_dlg0,
        [2] = s_gs9_g84_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g85_s0_lives[] = { /* 0x81df478 */
    /*  0 */ {  33,   4,   0,   0, {  37,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g85_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs9_g85_s0_lives1_dlg0,
    } },
    /*  2 */ {  32,   0,   0,   0, {  34,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g85_s0_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g86_s0_lives[] = { /* 0x81df4c0 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g86_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g86_s1_lives[] = { /* 0x81df4d8 */
    /*  0 */ {  91,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g86_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g86_s2_lives[] = { /* 0x81df4f0 */
    /*  0 */ {  91,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g86_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g86_s3_lives[] = { /* 0x81df508 */
    /*  0 */ {  91,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g86_s3_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g87_s0_lives[] = { /* 0x81df520 */
    /*  0 */ {  91,   0,   0,   0, {  25,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs9_g87_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g88_s0_lives[] = { /* 0x81df538 */
    /*  0 */ {   0,   4,   0,   0, {  34,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g88_s0_lives0_dlg0,
    } },
    /*  1 */ {  91,   0,   0,   0, {  34,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g88_s0_lives1_dlg0,
        [2] = s_gs9_g88_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g89_s0_lives[] = { /* 0x81df568 */
    /*  0 */ {   0,   0,   0,   0, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g89_s0_lives0_dlg0,
    } },
    /*  1 */ {  91,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g89_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g89_s1_lives[] = { /* 0x81df598 */
    /*  0 */ {  91,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g89_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g89_s2_lives[] = { /* 0x81df5b0 */
    /*  0 */ {  91,   4,   0,   0, {  34,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g89_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs9_g90_s0_lives[] = { /* 0x81df5c8 */
    /*  0 */ {  91,   0,   0,   0, {  25,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs9_g90_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs9_g91_s0_lives[] = { /* 0x81df5e0 */
    /*  0 */ {   0,   4,   0,   0, {  31,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g91_s0_lives0_dlg0,
    } },
    /*  1 */ {  91,   4,   0,   0, {  37,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g91_s0_lives1_dlg0,
    } },
    /*  2 */ {  82,   0,   0,   0, {  34,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs9_g91_s0_lives2_dlg0,
    } },
};

static const struct GroundObjectData s_gs9_g0_s0_objs[] = { /* 0x81df628 */
    /*  0 */ {  13,   0,   3,   4, {  31,  34, CPOS_HALFTILE, 0 }, {
        [2] = s_gs9_g0_s0_obj0_dlg2,
    } },
    /*  1 */ {  26,   0,   4,   3, {  27,  16, 0, CPOS_HALFTILE }, {} },
    /*  2 */ {  15,   0,   3,   2, {   8,  42, CPOS_HALFTILE, 0 }, {
        [2] = s_gs9_g0_s0_obj2_dlg2,
    } },
    /*  3 */ {  65,   0,   2,   2, {  50,  33, 0, 0 }, {
        [0] = s_gs9_g0_s0_obj3_dlg0,
    } },
    /*  4 */ {  62,   0,   2,   2, {  54,  34, 0, 0 }, {
        [0] = s_gs9_g0_s0_obj4_dlg0,
    } },
    /*  5 */ {  63,   0,   2,   2, {  63,  32, 0, 0 }, {
        [0] = s_gs9_g0_s0_obj5_dlg0,
    } },
    /*  6 */ {  64,   0,   2,   2, {  59,  34, 0, 0 }, {
        [0] = s_gs9_g0_s0_obj6_dlg0,
    } },
};

static const struct GroundObjectData s_gs9_g2_s2_objs[] = { /* 0x81df6d0 */
    /*  0 */ {  64,   0,   2,   2, {  59,  34, 0, 0 }, {
        [0] = s_gs9_g2_s2_obj0_dlg0,
    } },
};

static const struct GroundObjectData s_gs9_g19_s0_objs[] = { /* 0x81df6e8 */
    /*  0 */ {  13,   0,   3,   4, {  31,  34, CPOS_HALFTILE, 0 }, {
        [2] = s_gs9_g19_s0_obj0_dlg2,
    } },
};

static const struct GroundObjectData s_gs9_g24_s0_objs[] = { /* 0x81df700 */
    /*  0 */ {  13,   0,   3,   4, {  31,  34, CPOS_HALFTILE, 0 }, {
        [2] = s_gs9_g24_s0_obj0_dlg2,
    } },
};

static const struct GroundEffectData s_gs9_g2_s0_effs[] = { /* 0x81df718 */
    /*  0 */ {   0,   0,   1,   1, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g2_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g2_s1_effs[] = { /* 0x81df724 */
    /*  0 */ {   2,   4,   1,   1, {  54,  35, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g2_s1_eff0_script },
};

static const struct GroundEffectData s_gs9_g5_s0_effs[] = { /* 0x81df730 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g6_s0_effs[] = { /* 0x81df73c */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g7_s0_effs[] = { /* 0x81df748 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g17_s0_effs[] = { /* 0x81df754 */
    /*  0 */ {   0,   0,   1,   1, {  34,  38, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g17_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g18_s0_effs[] = { /* 0x81df760 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g18_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g20_s0_effs[] = { /* 0x81df76c */
    /*  0 */ {   0,   0,   1,   1, {  34,  36, 0, CPOS_HALFTILE }, s_gs9_g20_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g21_s0_effs[] = { /* 0x81df778 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g23_s0_effs[] = { /* 0x81df784 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g25_s0_effs[] = { /* 0x81df790 */
    /*  0 */ {   0,   0,   1,   1, {  34,  36, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g25_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g26_s0_effs[] = { /* 0x81df79c */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g27_s0_effs[] = { /* 0x81df7a8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g28_s0_effs[] = { /* 0x81df7b4 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g28_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g29_s0_effs[] = { /* 0x81df7c0 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g30_s0_effs[] = { /* 0x81df7cc */
    /*  0 */ {   0,   0,   1,   1, {  34,  31, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g30_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g31_s0_effs[] = { /* 0x81df7d8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g31_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g33_s0_effs[] = { /* 0x81df7e4 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g34_s0_effs[] = { /* 0x81df7f0 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g35_s0_effs[] = { /* 0x81df7fc */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g36_s0_effs[] = { /* 0x81df808 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g38_s0_effs[] = { /* 0x81df814 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g39_s0_effs[] = { /* 0x81df820 */
    /*  0 */ {   0,   0,   1,   1, {  34,  43, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g39_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g40_s0_effs[] = { /* 0x81df82c */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g42_s0_effs[] = { /* 0x81df838 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g43_s0_effs[] = { /* 0x81df844 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g43_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g44_s0_effs[] = { /* 0x81df850 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g45_s0_effs[] = { /* 0x81df85c */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g46_s0_effs[] = { /* 0x81df868 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g47_s0_effs[] = { /* 0x81df874 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g48_s0_effs[] = { /* 0x81df880 */
    /*  0 */ {   0,   0,   1,   1, {  36,  44, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g48_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g49_s0_effs[] = { /* 0x81df88c */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g52_s0_effs[] = { /* 0x81df898 */
    /*  0 */ {   0,   0,   1,   1, {  39,  44, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g53_s0_effs[] = { /* 0x81df8a4 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g53_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g55_s0_effs[] = { /* 0x81df8b0 */
    /*  0 */ {   0,   0,   1,   1, {  34,  31, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g57_s0_effs[] = { /* 0x81df8bc */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g58_s0_effs[] = { /* 0x81df8c8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g58_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g59_s0_effs[] = { /* 0x81df8d4 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g60_s0_effs[] = { /* 0x81df8e0 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g60_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g62_s0_effs[] = { /* 0x81df8ec */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g62_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g63_s0_effs[] = { /* 0x81df8f8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g65_s0_effs[] = { /* 0x81df904 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g67_s0_effs[] = { /* 0x81df910 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g68_s0_effs[] = { /* 0x81df91c */
    /*  0 */ {   0,   0,   1,   1, {  34,  22, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g68_s0_eff0_script },
    /*  1 */ {   5,   0,   1,   1, {  34,  37, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g68_s0_eff1_script },
    /*  2 */ {   4,   0,   1,   1, {  34,  51, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g68_s0_eff2_script },
};

static const struct GroundEffectData s_gs9_g69_s0_effs[] = { /* 0x81df940 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g69_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g72_s0_effs[] = { /* 0x81df94c */
    /*  0 */ {   0,   0,   1,   1, {  34,  41, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g74_s0_effs[] = { /* 0x81df958 */
    /*  0 */ {   0,   0,   1,   1, {  34,  45, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g74_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g75_s0_effs[] = { /* 0x81df964 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g75_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g76_s0_effs[] = { /* 0x81df970 */
    /*  0 */ {   0,   0,   1,   1, {  34,   8, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g76_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g77_s1_effs[] = { /* 0x81df97c */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g77_s1_eff0_script },
};

static const struct GroundEffectData s_gs9_g78_s0_effs[] = { /* 0x81df988 */
    /*  0 */ {   0,   0,   1,   1, {  34,  48, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g78_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g79_s0_effs[] = { /* 0x81df994 */
    /*  0 */ {   0,   0,   1,   1, {  34,  43, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs9_g79_s0_eff0_script },
};

static const struct GroundEffectData s_gs9_g81_s0_effs[] = { /* 0x81df9a0 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g82_s0_effs[] = { /* 0x81df9ac */
    /*  0 */ {   0,   0,   1,   1, {  34,  28, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g83_s0_effs[] = { /* 0x81df9b8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
    /*  1 */ {   5,   0,   1,   1, {  49,  40, 0, CPOS_HALFTILE }, s_gs9_g83_s0_eff1_script },
};

static const struct GroundEffectData s_gs9_g84_s0_effs[] = { /* 0x81df9d0 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g85_s0_effs[] = { /* 0x81df9dc */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g86_s0_effs[] = { /* 0x81df9e8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g88_s0_effs[] = { /* 0x81df9f4 */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g89_s0_effs[] = { /* 0x81dfa00 */
    /*  0 */ {   0,   0,   1,   1, {  34,  30, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs9_g91_s0_effs[] = { /* 0x81dfa0c */
    /*  0 */ {   0,   0,   1,   1, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs9_g0_s0_evts[] = { /* 0x81dfa18 */
    /*  0 */ {   3,  12,   0,   0, {  66,  37, 0, 0 }, &s_gs9_g0_s0_evt0_sref },
    /*  1 */ {   3,  12,   0,   0, {   0,  39, 0, 0 }, &s_gs9_g0_s0_evt1_sref },
    /*  2 */ {  23,   3,   0,   0, {  24,  66, 0, 0 }, &s_gs9_g0_s0_evt2_sref },
    /*  3 */ {   3,   3,   0,   0, {  33,  24, 0, 0 }, &s_gs9_g0_s0_evt3_sref },
};

static const struct GroundEventData s_gs9_g19_s0_evts[] = { /* 0x81dfa48 */
    /*  0 */ {  15,   3,   0,   0, {  27,  39, 0, 0 }, &s_gs9_g19_s0_evt0_sref },
};

static const struct GroundEventData s_gs9_g24_s0_evts[] = { /* 0x81dfa54 */
    /*  0 */ {  15,   3,   0,   0, {  27,  39, 0, 0 }, &s_gs9_g24_s0_evt0_sref },
};

static const struct GroundEventData s_gs9_g50_s1_evts[] = { /* 0x81dfa60 */
    /*  0 */ {   9,   3,   0,   0, {  30,  36, 0, 0 }, &s_gs9_g50_s1_evt0_sref },
};

static const struct GroundEventData s_gs9_g73_s0_evts[] = { /* 0x81dfa6c */
    /*  0 */ {  15,   3,   0,   0, {  27,  39, 0, 0 }, &s_gs9_g73_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x81dfa78 */
    &s_gs9_g0_s0_station_sref,
    &s_gs9_g1_s0_station_sref,
    &s_gs9_g2_s0_station_sref,
    &s_gs9_g3_s0_station_sref,
    &s_gs9_g4_s0_station_sref,
    &s_gs9_g5_s0_station_sref,
    &s_gs9_g6_s0_station_sref,
    &s_gs9_g7_s0_station_sref,
    &s_gs9_g8_s0_station_sref,
    &s_gs9_g17_s0_station_sref,
    &s_gs9_g18_s0_station_sref,
    &s_gs9_g19_s0_station_sref,
    &s_gs9_g19_s1_station_sref,
    &s_gs9_g20_s0_station_sref,
    &s_gs9_g21_s0_station_sref,
    &s_gs9_g22_s0_station_sref,
    &s_gs9_g22_s1_station_sref,
    &s_gs9_g22_s2_station_sref,
    &s_gs9_g23_s0_station_sref,
    &s_gs9_g24_s0_station_sref,
    &s_gs9_g24_s1_station_sref,
    &s_gs9_g25_s0_station_sref,
    &s_gs9_g26_s0_station_sref,
    &s_gs9_g27_s0_station_sref,
    &s_gs9_g28_s0_station_sref,
    &s_gs9_g29_s0_station_sref,
    &s_gs9_g30_s0_station_sref,
    &s_gs9_g31_s0_station_sref,
    &s_gs9_g32_s0_station_sref,
    &s_gs9_g33_s0_station_sref,
    &s_gs9_g34_s0_station_sref,
    &s_gs9_g35_s0_station_sref,
    &s_gs9_g36_s0_station_sref,
    &s_gs9_g37_s0_station_sref,
    &s_gs9_g38_s0_station_sref,
    &s_gs9_g39_s0_station_sref,
    &s_gs9_g40_s0_station_sref,
    &s_gs9_g41_s0_station_sref,
    &s_gs9_g42_s0_station_sref,
    &s_gs9_g43_s0_station_sref,
    &s_gs9_g44_s0_station_sref,
    &s_gs9_g45_s0_station_sref,
    &s_gs9_g46_s0_station_sref,
    &s_gs9_g47_s0_station_sref,
    &s_gs9_g48_s0_station_sref,
    &s_gs9_g49_s0_station_sref,
    &s_gs9_g50_s0_station_sref,
    &s_gs9_g50_s2_station_sref,
    &s_gs9_g50_s3_station_sref,
    &s_gs9_g51_s0_station_sref,
    &s_gs9_g52_s0_station_sref,
    &s_gs9_g53_s0_station_sref,
    &s_gs9_g55_s0_station_sref,
    &s_gs9_g56_s0_station_sref,
    &s_gs9_g57_s0_station_sref,
    &s_gs9_g58_s0_station_sref,
    &s_gs9_g59_s0_station_sref,
    &s_gs9_g60_s0_station_sref,
    &s_gs9_g61_s0_station_sref,
    &s_gs9_g61_s1_station_sref,
    &s_gs9_g62_s0_station_sref,
    &s_gs9_g63_s0_station_sref,
    &s_gs9_g64_s0_station_sref,
    &s_gs9_g64_s1_station_sref,
    &s_gs9_g65_s0_station_sref,
    &s_gs9_g66_s0_station_sref,
    &s_gs9_g67_s0_station_sref,
    &s_gs9_g68_s0_station_sref,
    &s_gs9_g69_s0_station_sref,
    &s_gs9_g70_s0_station_sref,
    &s_gs9_g71_s0_station_sref,
    &s_gs9_g72_s0_station_sref,
    &s_gs9_g74_s0_station_sref,
    &s_gs9_g75_s0_station_sref,
    &s_gs9_g76_s0_station_sref,
    &s_gs9_g77_s0_station_sref,
    &s_gs9_g77_s1_station_sref,
    &s_gs9_g78_s0_station_sref,
    &s_gs9_g79_s0_station_sref,
    &s_gs9_g81_s0_station_sref,
    &s_gs9_g82_s0_station_sref,
    &s_gs9_g83_s0_station_sref,
    &s_gs9_g84_s0_station_sref,
    &s_gs9_g85_s0_station_sref,
    &s_gs9_g86_s0_station_sref,
    &s_gs9_g88_s0_station_sref,
    &s_gs9_g89_s0_station_sref,
    &s_gs9_g91_s0_station_sref,
};

static const struct GroundScriptSector s_gs9_g0_sectors[] = { /* 0x81dfbd8 */
    { 0,NULL, LPARRAY(s_gs9_g0_s0_objs), 0,NULL, LPARRAY(s_gs9_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs9_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g0_s5_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g0_s6_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g0_s7_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g1_sectors[] = { /* 0x81dfd18 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs9_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g2_sectors[] = { /* 0x81dfd68 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs9_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
    { LPARRAY(s_gs9_g2_s1_lives), 0,NULL, LPARRAY(s_gs9_g2_s1_effs), 0,NULL, 0,NULL, },
    { 0,NULL, LPARRAY(s_gs9_g2_s2_objs), 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g3_sectors[] = { /* 0x81dfde0 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptSector s_gs9_g4_sectors[] = { /* 0x81dfe08 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[4], },
};

static const struct GroundScriptSector s_gs9_g5_sectors[] = { /* 0x81dfe30 */
    { LPARRAY(s_gs9_g5_s0_lives), 0,NULL, LPARRAY(s_gs9_g5_s0_effs), 0,NULL, 1,&sStationScripts[5], },
    { LPARRAY(s_gs9_g5_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g6_sectors[] = { /* 0x81dfe80 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs9_g6_s0_effs), 0,NULL, 1,&sStationScripts[6], },
    { LPARRAY(s_gs9_g6_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g6_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g7_sectors[] = { /* 0x81dfef8 */
    { LPARRAY(s_gs9_g7_s0_lives), 0,NULL, LPARRAY(s_gs9_g7_s0_effs), 0,NULL, 1,&sStationScripts[7], },
    { LPARRAY(s_gs9_g7_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g8_sectors[] = { /* 0x81dff48 */
    { LPARRAY(s_gs9_g8_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[8], },
};

static const struct GroundScriptSector s_gs9_g9_sectors[] = { /* 0x81dff70 */
    { LPARRAY(s_gs9_g9_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g10_sectors[] = { /* 0x81dff98 */
    { LPARRAY(s_gs9_g10_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g11_sectors[] = { /* 0x81dffc0 */
    { LPARRAY(s_gs9_g11_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g12_sectors[] = { /* 0x81dffe8 */
    { LPARRAY(s_gs9_g12_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g13_sectors[] = { /* 0x81e0010 */
    { LPARRAY(s_gs9_g13_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g14_sectors[] = { /* 0x81e0038 */
    { LPARRAY(s_gs9_g14_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g15_sectors[] = { /* 0x81e0060 */
    { LPARRAY(s_gs9_g15_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g16_sectors[] = { /* 0x81e0088 */
    { LPARRAY(s_gs9_g16_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g17_sectors[] = { /* 0x81e00b0 */
    { LPARRAY(s_gs9_g17_s0_lives), 0,NULL, LPARRAY(s_gs9_g17_s0_effs), 0,NULL, 1,&sStationScripts[9], },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g17_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g17_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g18_sectors[] = { /* 0x81e0150 */
    { LPARRAY(s_gs9_g18_s0_lives), 0,NULL, LPARRAY(s_gs9_g18_s0_effs), 0,NULL, 1,&sStationScripts[10], },
};

static const struct GroundScriptSector s_gs9_g19_sectors[] = { /* 0x81e0178 */
    { LPARRAY(s_gs9_g19_s0_lives), LPARRAY(s_gs9_g19_s0_objs), 0,NULL, LPARRAY(s_gs9_g19_s0_evts), 1,&sStationScripts[11], },
    { LPARRAY(s_gs9_g19_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[12], },
};

static const struct GroundScriptSector s_gs9_g20_sectors[] = { /* 0x81e01c8 */
    { LPARRAY(s_gs9_g20_s0_lives), 0,NULL, LPARRAY(s_gs9_g20_s0_effs), 0,NULL, 1,&sStationScripts[13], },
    { LPARRAY(s_gs9_g20_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g20_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g21_sectors[] = { /* 0x81e0240 */
    { LPARRAY(s_gs9_g21_s0_lives), 0,NULL, LPARRAY(s_gs9_g21_s0_effs), 0,NULL, 1,&sStationScripts[14], },
};

static const struct GroundScriptSector s_gs9_g22_sectors[] = { /* 0x81e0268 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[15], },
    { LPARRAY(s_gs9_g22_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[16], },
    { LPARRAY(s_gs9_g22_s2_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[17], },
};

static const struct GroundScriptSector s_gs9_g23_sectors[] = { /* 0x81e02e0 */
    { LPARRAY(s_gs9_g23_s0_lives), 0,NULL, LPARRAY(s_gs9_g23_s0_effs), 0,NULL, 1,&sStationScripts[18], },
};

static const struct GroundScriptSector s_gs9_g24_sectors[] = { /* 0x81e0308 */
    { 0,NULL, LPARRAY(s_gs9_g24_s0_objs), 0,NULL, LPARRAY(s_gs9_g24_s0_evts), 1,&sStationScripts[19], },
    { LPARRAY(s_gs9_g24_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[20], },
};

static const struct GroundScriptSector s_gs9_g25_sectors[] = { /* 0x81e0358 */
    { LPARRAY(s_gs9_g25_s0_lives), 0,NULL, LPARRAY(s_gs9_g25_s0_effs), 0,NULL, 1,&sStationScripts[21], },
};

static const struct GroundScriptSector s_gs9_g26_sectors[] = { /* 0x81e0380 */
    { LPARRAY(s_gs9_g26_s0_lives), 0,NULL, LPARRAY(s_gs9_g26_s0_effs), 0,NULL, 1,&sStationScripts[22], },
    { LPARRAY(s_gs9_g26_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g27_sectors[] = { /* 0x81e03d0 */
    { LPARRAY(s_gs9_g27_s0_lives), 0,NULL, LPARRAY(s_gs9_g27_s0_effs), 0,NULL, 1,&sStationScripts[23], },
};

static const struct GroundScriptSector s_gs9_g28_sectors[] = { /* 0x81e03f8 */
    { LPARRAY(s_gs9_g28_s0_lives), 0,NULL, LPARRAY(s_gs9_g28_s0_effs), 0,NULL, 1,&sStationScripts[24], },
    { LPARRAY(s_gs9_g28_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g29_sectors[] = { /* 0x81e0448 */
    { LPARRAY(s_gs9_g29_s0_lives), 0,NULL, LPARRAY(s_gs9_g29_s0_effs), 0,NULL, 1,&sStationScripts[25], },
};

static const struct GroundScriptSector s_gs9_g30_sectors[] = { /* 0x81e0470 */
    { LPARRAY(s_gs9_g30_s0_lives), 0,NULL, LPARRAY(s_gs9_g30_s0_effs), 0,NULL, 1,&sStationScripts[26], },
};

static const struct GroundScriptSector s_gs9_g31_sectors[] = { /* 0x81e0498 */
    { LPARRAY(s_gs9_g31_s0_lives), 0,NULL, LPARRAY(s_gs9_g31_s0_effs), 0,NULL, 1,&sStationScripts[27], },
};

static const struct GroundScriptSector s_gs9_g32_sectors[] = { /* 0x81e04c0 */
    { LPARRAY(s_gs9_g32_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[28], },
};

static const struct GroundScriptSector s_gs9_g33_sectors[] = { /* 0x81e04e8 */
    { LPARRAY(s_gs9_g33_s0_lives), 0,NULL, LPARRAY(s_gs9_g33_s0_effs), 0,NULL, 1,&sStationScripts[29], },
};

static const struct GroundScriptSector s_gs9_g34_sectors[] = { /* 0x81e0510 */
    { LPARRAY(s_gs9_g34_s0_lives), 0,NULL, LPARRAY(s_gs9_g34_s0_effs), 0,NULL, 1,&sStationScripts[30], },
};

static const struct GroundScriptSector s_gs9_g35_sectors[] = { /* 0x81e0538 */
    { LPARRAY(s_gs9_g35_s0_lives), 0,NULL, LPARRAY(s_gs9_g35_s0_effs), 0,NULL, 1,&sStationScripts[31], },
    { LPARRAY(s_gs9_g35_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g35_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g36_sectors[] = { /* 0x81e05b0 */
    { LPARRAY(s_gs9_g36_s0_lives), 0,NULL, LPARRAY(s_gs9_g36_s0_effs), 0,NULL, 1,&sStationScripts[32], },
};

static const struct GroundScriptSector s_gs9_g37_sectors[] = { /* 0x81e05d8 */
    { LPARRAY(s_gs9_g37_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[33], },
};

static const struct GroundScriptSector s_gs9_g38_sectors[] = { /* 0x81e0600 */
    { LPARRAY(s_gs9_g38_s0_lives), 0,NULL, LPARRAY(s_gs9_g38_s0_effs), 0,NULL, 1,&sStationScripts[34], },
};

static const struct GroundScriptSector s_gs9_g39_sectors[] = { /* 0x81e0628 */
    { LPARRAY(s_gs9_g39_s0_lives), 0,NULL, LPARRAY(s_gs9_g39_s0_effs), 0,NULL, 1,&sStationScripts[35], },
};

static const struct GroundScriptSector s_gs9_g40_sectors[] = { /* 0x81e0650 */
    { LPARRAY(s_gs9_g40_s0_lives), 0,NULL, LPARRAY(s_gs9_g40_s0_effs), 0,NULL, 1,&sStationScripts[36], },
};

static const struct GroundScriptSector s_gs9_g41_sectors[] = { /* 0x81e0678 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[37], },
};

static const struct GroundScriptSector s_gs9_g42_sectors[] = { /* 0x81e06a0 */
    { LPARRAY(s_gs9_g42_s0_lives), 0,NULL, LPARRAY(s_gs9_g42_s0_effs), 0,NULL, 1,&sStationScripts[38], },
};

static const struct GroundScriptSector s_gs9_g43_sectors[] = { /* 0x81e06c8 */
    { LPARRAY(s_gs9_g43_s0_lives), 0,NULL, LPARRAY(s_gs9_g43_s0_effs), 0,NULL, 1,&sStationScripts[39], },
};

static const struct GroundScriptSector s_gs9_g44_sectors[] = { /* 0x81e06f0 */
    { LPARRAY(s_gs9_g44_s0_lives), 0,NULL, LPARRAY(s_gs9_g44_s0_effs), 0,NULL, 1,&sStationScripts[40], },
};

static const struct GroundScriptSector s_gs9_g45_sectors[] = { /* 0x81e0718 */
    { LPARRAY(s_gs9_g45_s0_lives), 0,NULL, LPARRAY(s_gs9_g45_s0_effs), 0,NULL, 1,&sStationScripts[41], },
    { LPARRAY(s_gs9_g45_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g46_sectors[] = { /* 0x81e0768 */
    { LPARRAY(s_gs9_g46_s0_lives), 0,NULL, LPARRAY(s_gs9_g46_s0_effs), 0,NULL, 1,&sStationScripts[42], },
};

static const struct GroundScriptSector s_gs9_g47_sectors[] = { /* 0x81e0790 */
    { LPARRAY(s_gs9_g47_s0_lives), 0,NULL, LPARRAY(s_gs9_g47_s0_effs), 0,NULL, 1,&sStationScripts[43], },
};

static const struct GroundScriptSector s_gs9_g48_sectors[] = { /* 0x81e07b8 */
    { LPARRAY(s_gs9_g48_s0_lives), 0,NULL, LPARRAY(s_gs9_g48_s0_effs), 0,NULL, 1,&sStationScripts[44], },
    { LPARRAY(s_gs9_g48_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g48_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g49_sectors[] = { /* 0x81e0830 */
    { LPARRAY(s_gs9_g49_s0_lives), 0,NULL, LPARRAY(s_gs9_g49_s0_effs), 0,NULL, 1,&sStationScripts[45], },
};

static const struct GroundScriptSector s_gs9_g50_sectors[] = { /* 0x81e0858 */
    { LPARRAY(s_gs9_g50_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[46], },
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs9_g50_s1_evts), 0,NULL, },
    { LPARRAY(s_gs9_g50_s2_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[47], },
    { LPARRAY(s_gs9_g50_s3_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[48], },
};

static const struct GroundScriptSector s_gs9_g51_sectors[] = { /* 0x81e08f8 */
    { LPARRAY(s_gs9_g51_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[49], },
};

static const struct GroundScriptSector s_gs9_g52_sectors[] = { /* 0x81e0920 */
    { LPARRAY(s_gs9_g52_s0_lives), 0,NULL, LPARRAY(s_gs9_g52_s0_effs), 0,NULL, 1,&sStationScripts[50], },
};

static const struct GroundScriptSector s_gs9_g53_sectors[] = { /* 0x81e0948 */
    { LPARRAY(s_gs9_g53_s0_lives), 0,NULL, LPARRAY(s_gs9_g53_s0_effs), 0,NULL, 1,&sStationScripts[51], },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g53_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g55_sectors[] = { /* 0x81e09c0 */
    { LPARRAY(s_gs9_g55_s0_lives), 0,NULL, LPARRAY(s_gs9_g55_s0_effs), 0,NULL, 1,&sStationScripts[52], },
    { LPARRAY(s_gs9_g55_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g56_sectors[] = { /* 0x81e0a10 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[53], },
};

static const struct GroundScriptSector s_gs9_g57_sectors[] = { /* 0x81e0a38 */
    { LPARRAY(s_gs9_g57_s0_lives), 0,NULL, LPARRAY(s_gs9_g57_s0_effs), 0,NULL, 1,&sStationScripts[54], },
};

static const struct GroundScriptSector s_gs9_g58_sectors[] = { /* 0x81e0a60 */
    { LPARRAY(s_gs9_g58_s0_lives), 0,NULL, LPARRAY(s_gs9_g58_s0_effs), 0,NULL, 1,&sStationScripts[55], },
    { LPARRAY(s_gs9_g58_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g59_sectors[] = { /* 0x81e0ab0 */
    { LPARRAY(s_gs9_g59_s0_lives), 0,NULL, LPARRAY(s_gs9_g59_s0_effs), 0,NULL, 1,&sStationScripts[56], },
};

static const struct GroundScriptSector s_gs9_g60_sectors[] = { /* 0x81e0ad8 */
    { LPARRAY(s_gs9_g60_s0_lives), 0,NULL, LPARRAY(s_gs9_g60_s0_effs), 0,NULL, 1,&sStationScripts[57], },
};

static const struct GroundScriptSector s_gs9_g61_sectors[] = { /* 0x81e0b00 */
    { LPARRAY(s_gs9_g61_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[58], },
    { LPARRAY(s_gs9_g61_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[59], },
};

static const struct GroundScriptSector s_gs9_g62_sectors[] = { /* 0x81e0b50 */
    { LPARRAY(s_gs9_g62_s0_lives), 0,NULL, LPARRAY(s_gs9_g62_s0_effs), 0,NULL, 1,&sStationScripts[60], },
};

static const struct GroundScriptSector s_gs9_g63_sectors[] = { /* 0x81e0b78 */
    { LPARRAY(s_gs9_g63_s0_lives), 0,NULL, LPARRAY(s_gs9_g63_s0_effs), 0,NULL, 1,&sStationScripts[61], },
};

static const struct GroundScriptSector s_gs9_g64_sectors[] = { /* 0x81e0ba0 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[62], },
    { LPARRAY(s_gs9_g64_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[63], },
};

static const struct GroundScriptSector s_gs9_g65_sectors[] = { /* 0x81e0bf0 */
    { LPARRAY(s_gs9_g65_s0_lives), 0,NULL, LPARRAY(s_gs9_g65_s0_effs), 0,NULL, 1,&sStationScripts[64], },
};

static const struct GroundScriptSector s_gs9_g66_sectors[] = { /* 0x81e0c18 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[65], },
};

static const struct GroundScriptSector s_gs9_g67_sectors[] = { /* 0x81e0c40 */
    { LPARRAY(s_gs9_g67_s0_lives), 0,NULL, LPARRAY(s_gs9_g67_s0_effs), 0,NULL, 1,&sStationScripts[66], },
};

static const struct GroundScriptSector s_gs9_g68_sectors[] = { /* 0x81e0c68 */
    { LPARRAY(s_gs9_g68_s0_lives), 0,NULL, LPARRAY(s_gs9_g68_s0_effs), 0,NULL, 1,&sStationScripts[67], },
};

static const struct GroundScriptSector s_gs9_g69_sectors[] = { /* 0x81e0c90 */
    { LPARRAY(s_gs9_g69_s0_lives), 0,NULL, LPARRAY(s_gs9_g69_s0_effs), 0,NULL, 1,&sStationScripts[68], },
};

static const struct GroundScriptSector s_gs9_g70_sectors[] = { /* 0x81e0cb8 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[69], },
};

static const struct GroundScriptSector s_gs9_g71_sectors[] = { /* 0x81e0ce0 */
    { LPARRAY(s_gs9_g71_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[70], },
};

static const struct GroundScriptSector s_gs9_g72_sectors[] = { /* 0x81e0d08 */
    { LPARRAY(s_gs9_g72_s0_lives), 0,NULL, LPARRAY(s_gs9_g72_s0_effs), 0,NULL, 1,&sStationScripts[71], },
    { LPARRAY(s_gs9_g72_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g72_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g73_sectors[] = { /* 0x81e0d80 */
    { 0,NULL, 0,NULL, 0,NULL, LPARRAY(s_gs9_g73_s0_evts), 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g74_sectors[] = { /* 0x81e0da8 */
    { LPARRAY(s_gs9_g74_s0_lives), 0,NULL, LPARRAY(s_gs9_g74_s0_effs), 0,NULL, 1,&sStationScripts[72], },
};

static const struct GroundScriptSector s_gs9_g75_sectors[] = { /* 0x81e0dd0 */
    { LPARRAY(s_gs9_g75_s0_lives), 0,NULL, LPARRAY(s_gs9_g75_s0_effs), 0,NULL, 1,&sStationScripts[73], },
    { LPARRAY(s_gs9_g75_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g75_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g76_sectors[] = { /* 0x81e0e48 */
    { LPARRAY(s_gs9_g76_s0_lives), 0,NULL, LPARRAY(s_gs9_g76_s0_effs), 0,NULL, 1,&sStationScripts[74], },
};

static const struct GroundScriptSector s_gs9_g77_sectors[] = { /* 0x81e0e70 */
    { LPARRAY(s_gs9_g77_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[75], },
    { LPARRAY(s_gs9_g77_s1_lives), 0,NULL, LPARRAY(s_gs9_g77_s1_effs), 0,NULL, 1,&sStationScripts[76], },
    { LPARRAY(s_gs9_g77_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g77_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g78_sectors[] = { /* 0x81e0f10 */
    { LPARRAY(s_gs9_g78_s0_lives), 0,NULL, LPARRAY(s_gs9_g78_s0_effs), 0,NULL, 1,&sStationScripts[77], },
};

static const struct GroundScriptSector s_gs9_g79_sectors[] = { /* 0x81e0f38 */
    { LPARRAY(s_gs9_g79_s0_lives), 0,NULL, LPARRAY(s_gs9_g79_s0_effs), 0,NULL, 1,&sStationScripts[78], },
    { LPARRAY(s_gs9_g79_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g80_sectors[] = { /* 0x81e0f88 */
    { LPARRAY(s_gs9_g80_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g81_sectors[] = { /* 0x81e0fb0 */
    { LPARRAY(s_gs9_g81_s0_lives), 0,NULL, LPARRAY(s_gs9_g81_s0_effs), 0,NULL, 1,&sStationScripts[79], },
};

static const struct GroundScriptSector s_gs9_g82_sectors[] = { /* 0x81e0fd8 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs9_g82_s0_effs), 0,NULL, 1,&sStationScripts[80], },
};

static const struct GroundScriptSector s_gs9_g83_sectors[] = { /* 0x81e1000 */
    { LPARRAY(s_gs9_g83_s0_lives), 0,NULL, LPARRAY(s_gs9_g83_s0_effs), 0,NULL, 1,&sStationScripts[81], },
};

static const struct GroundScriptSector s_gs9_g84_sectors[] = { /* 0x81e1028 */
    { LPARRAY(s_gs9_g84_s0_lives), 0,NULL, LPARRAY(s_gs9_g84_s0_effs), 0,NULL, 1,&sStationScripts[82], },
};

static const struct GroundScriptSector s_gs9_g85_sectors[] = { /* 0x81e1050 */
    { LPARRAY(s_gs9_g85_s0_lives), 0,NULL, LPARRAY(s_gs9_g85_s0_effs), 0,NULL, 1,&sStationScripts[83], },
};

static const struct GroundScriptSector s_gs9_g86_sectors[] = { /* 0x81e1078 */
    { LPARRAY(s_gs9_g86_s0_lives), 0,NULL, LPARRAY(s_gs9_g86_s0_effs), 0,NULL, 1,&sStationScripts[84], },
    { LPARRAY(s_gs9_g86_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g86_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g86_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g87_sectors[] = { /* 0x81e1118 */
    { LPARRAY(s_gs9_g87_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g88_sectors[] = { /* 0x81e1140 */
    { LPARRAY(s_gs9_g88_s0_lives), 0,NULL, LPARRAY(s_gs9_g88_s0_effs), 0,NULL, 1,&sStationScripts[85], },
};

static const struct GroundScriptSector s_gs9_g89_sectors[] = { /* 0x81e1168 */
    { LPARRAY(s_gs9_g89_s0_lives), 0,NULL, LPARRAY(s_gs9_g89_s0_effs), 0,NULL, 1,&sStationScripts[86], },
    { LPARRAY(s_gs9_g89_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs9_g89_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g90_sectors[] = { /* 0x81e11e0 */
    { LPARRAY(s_gs9_g90_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs9_g91_sectors[] = { /* 0x81e1208 */
    { LPARRAY(s_gs9_g91_s0_lives), 0,NULL, LPARRAY(s_gs9_g91_s0_effs), 0,NULL, 1,&sStationScripts[87], },
};

static const struct GroundScriptGroup s_gs9_groups[] = { /* 0x81e1230 */
    { LPARRAY(s_gs9_g0_sectors) },
    { LPARRAY(s_gs9_g1_sectors) },
    { LPARRAY(s_gs9_g2_sectors) },
    { LPARRAY(s_gs9_g3_sectors) },
    { LPARRAY(s_gs9_g4_sectors) },
    { LPARRAY(s_gs9_g5_sectors) },
    { LPARRAY(s_gs9_g6_sectors) },
    { LPARRAY(s_gs9_g7_sectors) },
    { LPARRAY(s_gs9_g8_sectors) },
    { LPARRAY(s_gs9_g9_sectors) },
    { LPARRAY(s_gs9_g10_sectors) },
    { LPARRAY(s_gs9_g11_sectors) },
    { LPARRAY(s_gs9_g12_sectors) },
    { LPARRAY(s_gs9_g13_sectors) },
    { LPARRAY(s_gs9_g14_sectors) },
    { LPARRAY(s_gs9_g15_sectors) },
    { LPARRAY(s_gs9_g16_sectors) },
    { LPARRAY(s_gs9_g17_sectors) },
    { LPARRAY(s_gs9_g18_sectors) },
    { LPARRAY(s_gs9_g19_sectors) },
    { LPARRAY(s_gs9_g20_sectors) },
    { LPARRAY(s_gs9_g21_sectors) },
    { LPARRAY(s_gs9_g22_sectors) },
    { LPARRAY(s_gs9_g23_sectors) },
    { LPARRAY(s_gs9_g24_sectors) },
    { LPARRAY(s_gs9_g25_sectors) },
    { LPARRAY(s_gs9_g26_sectors) },
    { LPARRAY(s_gs9_g27_sectors) },
    { LPARRAY(s_gs9_g28_sectors) },
    { LPARRAY(s_gs9_g29_sectors) },
    { LPARRAY(s_gs9_g30_sectors) },
    { LPARRAY(s_gs9_g31_sectors) },
    { LPARRAY(s_gs9_g32_sectors) },
    { LPARRAY(s_gs9_g33_sectors) },
    { LPARRAY(s_gs9_g34_sectors) },
    { LPARRAY(s_gs9_g35_sectors) },
    { LPARRAY(s_gs9_g36_sectors) },
    { LPARRAY(s_gs9_g37_sectors) },
    { LPARRAY(s_gs9_g38_sectors) },
    { LPARRAY(s_gs9_g39_sectors) },
    { LPARRAY(s_gs9_g40_sectors) },
    { LPARRAY(s_gs9_g41_sectors) },
    { LPARRAY(s_gs9_g42_sectors) },
    { LPARRAY(s_gs9_g43_sectors) },
    { LPARRAY(s_gs9_g44_sectors) },
    { LPARRAY(s_gs9_g45_sectors) },
    { LPARRAY(s_gs9_g46_sectors) },
    { LPARRAY(s_gs9_g47_sectors) },
    { LPARRAY(s_gs9_g48_sectors) },
    { LPARRAY(s_gs9_g49_sectors) },
    { LPARRAY(s_gs9_g50_sectors) },
    { LPARRAY(s_gs9_g51_sectors) },
    { LPARRAY(s_gs9_g52_sectors) },
    { LPARRAY(s_gs9_g53_sectors) },
    {},
    { LPARRAY(s_gs9_g55_sectors) },
    { LPARRAY(s_gs9_g56_sectors) },
    { LPARRAY(s_gs9_g57_sectors) },
    { LPARRAY(s_gs9_g58_sectors) },
    { LPARRAY(s_gs9_g59_sectors) },
    { LPARRAY(s_gs9_g60_sectors) },
    { LPARRAY(s_gs9_g61_sectors) },
    { LPARRAY(s_gs9_g62_sectors) },
    { LPARRAY(s_gs9_g63_sectors) },
    { LPARRAY(s_gs9_g64_sectors) },
    { LPARRAY(s_gs9_g65_sectors) },
    { LPARRAY(s_gs9_g66_sectors) },
    { LPARRAY(s_gs9_g67_sectors) },
    { LPARRAY(s_gs9_g68_sectors) },
    { LPARRAY(s_gs9_g69_sectors) },
    { LPARRAY(s_gs9_g70_sectors) },
    { LPARRAY(s_gs9_g71_sectors) },
    { LPARRAY(s_gs9_g72_sectors) },
    { LPARRAY(s_gs9_g73_sectors) },
    { LPARRAY(s_gs9_g74_sectors) },
    { LPARRAY(s_gs9_g75_sectors) },
    { LPARRAY(s_gs9_g76_sectors) },
    { LPARRAY(s_gs9_g77_sectors) },
    { LPARRAY(s_gs9_g78_sectors) },
    { LPARRAY(s_gs9_g79_sectors) },
    { LPARRAY(s_gs9_g80_sectors) },
    { LPARRAY(s_gs9_g81_sectors) },
    { LPARRAY(s_gs9_g82_sectors) },
    { LPARRAY(s_gs9_g83_sectors) },
    { LPARRAY(s_gs9_g84_sectors) },
    { LPARRAY(s_gs9_g85_sectors) },
    { LPARRAY(s_gs9_g86_sectors) },
    { LPARRAY(s_gs9_g87_sectors) },
    { LPARRAY(s_gs9_g88_sectors) },
    { LPARRAY(s_gs9_g89_sectors) },
    { LPARRAY(s_gs9_g90_sectors) },
    { LPARRAY(s_gs9_g91_sectors) },
};

static const struct GroundLink s_gs9_links[] = { /* 0x81e1510 */
    /* link   0 */ { { /*x*/  31, /*y*/  36, /*flags*/ CPOS_HALFTILE|CPOS_CURRENT, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  31, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  31, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/  31, /*y*/  35, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   4 */ { { /*x*/  16, /*y*/  35, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   5 */ { { /*x*/  34, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   6 */ { { /*x*/  34, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   7 */ { { /*x*/  34, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   8 */ { { /*x*/  37, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   9 */ { { /*x*/  37, /*y*/  35, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  10 */ { { /*x*/  34, /*y*/  35, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  11 */ { { /*x*/  34, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  12 */ { { /*x*/  34, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  13 */ { { /*x*/  31, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  14 */ { { /*x*/  34, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  15 */ { { /*x*/  31, /*y*/  34, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 3 },
    /* link  16 */ { { /*x*/  34, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  17 */ { { /*x*/  34, /*y*/  66, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  18 */ { { /*x*/  15, /*y*/  46, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  19 */ { { /*x*/  34, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  20 */ { { /*x*/  50, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  21 */ { { /*x*/  50, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  22 */ { { /*x*/  38, /*y*/  47, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  23 */ { { /*x*/  34, /*y*/  47, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  24 */ { { /*x*/  34, /*y*/  55, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  25 */ { { /*x*/  34, /*y*/  47, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  26 */ { { /*x*/  34, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  27 */ { { /*x*/  34, /*y*/  45, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  28 */ { { /*x*/  31, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  29 */ { { /*x*/  34, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  30 */ { { /*x*/  34, /*y*/  39, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  31 */ { { /*x*/  34, /*y*/  35, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  32 */ { { /*x*/  34, /*y*/  54, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  33 */ { { /*x*/  37, /*y*/  39, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  34 */ { { /*x*/  37, /*y*/  37, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  35 */ { { /*x*/  37, /*y*/  54, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  36 */ { { /*x*/  31, /*y*/  39, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  37 */ { { /*x*/  31, /*y*/  37, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  38 */ { { /*x*/  31, /*y*/  54, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  39 */ { { /*x*/  34, /*y*/  35, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  40 */ { { /*x*/  51, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  41 */ { { /*x*/  36, /*y*/  46, /*flags*/ CPOS_CURRENT, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  42 */ { { /*x*/   1, /*y*/  46, /*flags*/ 0, CPOS_CURRENT }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  43 */ { { /*x*/  34, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  44 */ { { /*x*/  37, /*y*/  30, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  45 */ { { /*x*/  34, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  46 */ { { /*x*/  34, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  47 */ { { /*x*/  34, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  48 */ { { /*x*/  33, /*y*/  43, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  49 */ { { /*x*/  25, /*y*/  43, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  50 */ { { /*x*/  12, /*y*/  43, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  51 */ { { /*x*/  34, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  52 */ { { /*x*/  37, /*y*/  32, /*flags*/ 0, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  53 */ { { /*x*/  36, /*y*/  35, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  54 */ { { /*x*/  34, /*y*/  35, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  55 */ { { /*x*/  33, /*y*/  37, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  56 */ { { /*x*/  37, /*y*/  37, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  57 */ { { /*x*/  31, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  58 */ { { /*x*/  34, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  59 */ { { /*x*/  38, /*y*/  35, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  60 */ { { /*x*/  35, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  61 */ { { /*x*/  35, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  62 */ { { /*x*/  34, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  63 */ { { /*x*/  37, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  64 */ { { /*x*/  35, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  65 */ { { /*x*/  35, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  66 */ { { /*x*/  34, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  67 */ { { /*x*/  34, /*y*/  43, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  68 */ { { /*x*/  34, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  69 */ { { /*x*/  38, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  70 */ { { /*x*/  40, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  71 */ { { /*x*/  33, /*y*/  45, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  72 */ { { /*x*/  31, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  73 */ { { /*x*/  34, /*y*/  39, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  74 */ { { /*x*/  37, /*y*/  31, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  75 */ { { /*x*/  34, /*y*/  45, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  76 */ { { /*x*/  34, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  77 */ { { /*x*/  42, /*y*/  43, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  78 */ { { /*x*/  38, /*y*/  46, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  79 */ { { /*x*/  34, /*y*/  65, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  80 */ { { /*x*/  38, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  81 */ { { /*x*/  34, /*y*/  63, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  82 */ { { /*x*/  38, /*y*/  47, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  83 */ { { /*x*/  34, /*y*/  59, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  84 */ { { /*x*/  34, /*y*/  47, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  85 */ { { /*x*/  36, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  86 */ { { /*x*/  32, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  87 */ { { /*x*/  34, /*y*/  48, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  88 */ { { /*x*/  34, /*y*/  45, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  89 */ { { /*x*/  28, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  90 */ { { /*x*/  32, /*y*/  50, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  91 */ { { /*x*/  32, /*y*/  47, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  92 */ { { /*x*/  36, /*y*/  50, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  93 */ { { /*x*/  36, /*y*/  47, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  94 */ { { /*x*/  41, /*y*/  44, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  95 */ { { /*x*/  36, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  96 */ { { /*x*/  34, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  97 */ { { /*x*/  28, /*y*/  45, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  98 */ { { /*x*/  28, /*y*/  44, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  99 */ { { /*x*/  36, /*y*/  48, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 100 */ { { /*x*/  40, /*y*/  44, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 101 */ { { /*x*/  39, /*y*/  46, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 102 */ { { /*x*/  34, /*y*/  30, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 103 */ { { /*x*/  24, /*y*/  43, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 104 */ { { /*x*/  29, /*y*/  43, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 105 */ { { /*x*/  37, /*y*/  43, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 106 */ { { /*x*/  32, /*y*/  45, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 107 */ { { /*x*/  35, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 108 */ { { /*x*/  30, /*y*/  43, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 109 */ { { /*x*/  36, /*y*/  31, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 110 */ { { /*x*/  36, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 111 */ { { /*x*/  34, /*y*/  43, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 112 */ { { /*x*/  34, /*y*/  30, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 113 */ { { /*x*/  34, /*y*/  36, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 114 */ { { /*x*/  33, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 115 */ { { /*x*/  34, /*y*/  31, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 116 */ { { /*x*/  34, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 117 */ { { /*x*/  32, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 118 */ { { /*x*/  34, /*y*/  44, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 119 */ { { /*x*/  34, /*y*/  23, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 120 */ { { /*x*/  34, /*y*/  31, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 121 */ { { /*x*/  34, /*y*/  29, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 122 */ { { /*x*/  36, /*y*/  32, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 123 */ { { /*x*/  34, /*y*/  27, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 124 */ { { /*x*/  34, /*y*/  34, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 125 */ { { /*x*/  42, /*y*/  22, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 126 */ { { /*x*/  36, /*y*/  30, /*flags*/ CPOS_HALFTILE, 0 }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 127 */ { { /*x*/  36, /*y*/  30, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 128 */ { { /*x*/  34, /*y*/  60, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 129 */ { { /*x*/  34, /*y*/  30, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 130 */ { { /*x*/  25, /*y*/  29, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 131 */ { { /*x*/  48, /*y*/  41, /*flags*/ 0, 0 }, /*w*/ 17, /*h*/  7, /*ret*/ 3, /*?*/ 2 },
    /* link 132 */ { { /*x*/  40, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 133 */ { { /*x*/  37, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs9 = { LPARRAY(s_gs9_groups), s_gs9_links }; /* 0x81e1940 */
