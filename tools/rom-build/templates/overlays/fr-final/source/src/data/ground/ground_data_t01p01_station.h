

























































































































































static const struct ScriptCommand s_gs1_g0_s0_station_sref_script[] = { /* 0x8138268 */
    DEBUGINFO_O(156),
    SELECT_MAP(1),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_LT, 4, /* to label */ 0),
    COND(JUDGE_EQ, 4, /* to label */ 1),
    COND(JUDGE_EQ, 5, /* to label */ 2),
    COND(JUDGE_EQ, 6, /* to label */ 3),
    COND(JUDGE_EQ, 7, /* to label */ 4),
    COND(JUDGE_EQ, 8, /* to label */ 5),
    COND(JUDGE_EQ, 9, /* to label */ 6),
    COND(JUDGE_EQ, 10, /* to label */ 7),
    COND(JUDGE_EQ, 11, /* to label */ 8),
    COND(JUDGE_LT, 15, /* to label */ 0),
    COND(JUDGE_EQ, 15, /* to label */ 9),
    COND(JUDGE_EQ, 16, /* to label */ 10),
    COND(JUDGE_LT, 18, /* to label */ 11),
    COND(JUDGE_EQ, 18, /* to label */ 12),
    JUMP_LABEL(13),
  LABEL(1), /* = 0x01 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 3, /* to label */ 14),
    JUMP_LABEL(15),
  LABEL(14), /* = 0x0e */
    CALL_STATION(  7,  0),
    JUMP_LABEL(0),
  LABEL(15), /* = 0x0f */
    CALL_STATION(  7,  0),
    JUMP_LABEL(0),
  LABEL(2), /* = 0x02 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 16),
    COND(JUDGE_LE, 3, /* to label */ 17),
    COND_EQUAL(4, /* to label */ 18),
    CALL_STATION( 11,  0),
    JUMP_LABEL(0),
  LABEL(16), /* = 0x10 */
    CALL_STATION(  7,  0),
    JUMP_LABEL(0),
  LABEL(17), /* = 0x11 */
    CALL_STATION(  8,  0),
    JUMP_LABEL(0),
  LABEL(18), /* = 0x12 */
    CALL_STATION(  8,  0),
    SELECT_ENTITIES(8, 2),
    JUMP_LABEL(0),
  LABEL(3), /* = 0x03 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 19),
    CALL_STATION( 13,  0),
    JUMP_LABEL(0),
  LABEL(19), /* = 0x13 */
    CALL_STATION( 11,  0),
    JUMP_LABEL(0),
  LABEL(4), /* = 0x04 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 20),
    CALL_STATION( 14,  0),
    JUMP_LABEL(0),
  LABEL(20), /* = 0x14 */
    CALL_STATION( 13,  0),
    JUMP_LABEL(0),
  LABEL(5), /* = 0x05 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 21),
    CALL_STATION( 15,  0),
    JUMP_LABEL(0),
  LABEL(21), /* = 0x15 */
    CALL_STATION( 14,  0),
    JUMP_LABEL(0),
  LABEL(6), /* = 0x06 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 1, /* to label */ 22),
    COND(JUDGE_LE, 3, /* to label */ 23),
    COND(JUDGE_LE, 5, /* to label */ 24),
    JUMP_LABEL(0),
  LABEL(22), /* = 0x16 */
    CALL_STATION( 15,  0),
    JUMP_LABEL(0),
  LABEL(23), /* = 0x17 */
    CALL_STATION( 16,  0),
    JUMP_LABEL(0),
  LABEL(24), /* = 0x18 */
    CALL_STATION( 18,  0),
    JUMP_LABEL(0),
  LABEL(7), /* = 0x07 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 3, /* to label */ 25),
    JUMP_LABEL(0),
  LABEL(25), /* = 0x19 */
    JUMP_SCRIPT(EVENT_M01E06A_L003),
  LABEL(8), /* = 0x08 */
    CALL_STATION( 22,  0),
    JUMP_LABEL(0),
  LABEL(9), /* = 0x09 */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 3, /* to label */ 26),
    COND(JUDGE_LE, 5, /* to label */ 27),
    COND(JUDGE_LE, 7, /* to label */ 28),
    COND(JUDGE_LE, 11, /* to label */ 29),
    JUMP_LABEL(30),
  LABEL(26), /* = 0x1a */
    CALL_STATION( 24,  0),
    JUMP_LABEL(0),
  LABEL(27), /* = 0x1b */
    CALL_STATION( 25,  0),
    JUMP_LABEL(0),
  LABEL(28), /* = 0x1c */
    CALL_STATION( 27,  0),
    JUMP_LABEL(0),
  LABEL(29), /* = 0x1d */
    CALL_STATION( 29,  0),
    JUMP_LABEL(0),
  LABEL(30), /* = 0x1e */
    CALL_STATION( 30,  0),
    JUMP_LABEL(0),
  LABEL(10), /* = 0x0a */
    CJUMP_SCENARIO_1(SCENARIO_MAIN),
    COND(JUDGE_LE, 2, /* to label */ 31),
    COND(JUDGE_LE, 4, /* to label */ 32),
    JUMP_LABEL(33),
  LABEL(31), /* = 0x1f */
    CALL_STATION( 34,  0),
    JUMP_LABEL(0),
  LABEL(32), /* = 0x20 */
    CALL_STATION( 35,  0),
    JUMP_LABEL(0),
  LABEL(33), /* = 0x21 */
    CALL_STATION( 36,  0),
    JUMP_LABEL(0),
  LABEL(11), /* = 0x0b */
    CALL_STATION( 36,  0),
    JUMP_LABEL(0),
  LABEL(12), /* = 0x0c */
    CALL_STATION( 38,  0),
    JUMP_LABEL(0),
  LABEL(13), /* = 0x0d */
    CALL_STATION(  1,  0),
    JUMP_LABEL(0),
  LABEL(0), /* = 0x00 */
    JUMPIF_EQUAL(START_MODE, STARTMODE_CONTINUE_GAME, /* to label */ 34),
    JUMPIF_EQUAL(START_MODE, STARTMODE_3, /* to label */ 35),
    JUMPIF_EQUAL(START_MODE, STARTMODE_GROUND, /* to label */ 36),
    JUMPIF_EQUAL(START_MODE, STARTMODE_DUNGEON_WON, /* to label */ 36),
    JUMP_LABEL(34),
  LABEL(36), /* = 0x24 */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(9, /* to label */ 37),
    COND_EQUAL(10, /* to label */ 37),
    COND_EQUAL(11, /* to label */ 37),
    COND_EQUAL(15, /* to label */ 37),
    COND_EQUAL(16, /* to label */ 37),
    COND_EQUAL(17, /* to label */ 37),
    COND_EQUAL(2, /* to label */ 38),
    COND_EQUAL(3, /* to label */ 38),
    COND_EQUAL(4, /* to label */ 39),
    COND_EQUAL(6, /* to label */ 40),
    JUMP_LABEL(37),
  LABEL(34), /* = 0x22 */
    SELECT_LIVES(0, 7),
    JUMP_LABEL(41),
  LABEL(35), /* = 0x23 */
    SELECT_LIVES(0, 8),
    JUMP_LABEL(41),
  LABEL(37), /* = 0x25 */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(41),
  LABEL(38), /* = 0x26 */
    SELECT_LIVES(0, 2),
    JUMP_LABEL(41),
  LABEL(39), /* = 0x27 */
    SELECT_LIVES(0, 3),
    JUMP_LABEL(41),
  LABEL(40), /* = 0x28 */
    SELECT_LIVES(0, 4),
    JUMP_LABEL(41),
  LABEL(41), /* = 0x29 */
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs1_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs1_g0_s0_station_sref_script }; /* 0x8138db4 */

static const struct ScriptCommand s_gs1_g0_s0_evt0_sref_script[] = { /* 0x8138dc0 */
    DEBUGINFO_O(339),
    JUMPIF_SCENE_EQ(SCENARIO_MAIN, 9, 5, /* to label */ 0),
    JUMPIF_EQUAL(WARP_LOCK, 0, /* to label */ 1),
    JUMPIF_EQUAL(WARP_LOCK, 3, /* to label */ 2),
    JUMPIF_EQUAL(WARP_LOCK, 4, /* to label */ 3),
    JUMP_LABEL(1),
    CALL_SCRIPT(EVENT_DIVIDE_WARP_LOCK_FUNC),
    RET,
  LABEL(1), /* = 0x01 */
    { 0x01, 0x00, -0x0001,  0x00000009,  0x00000000, NULL },
    HALT,
  LABEL(2), /* = 0x02 */
    EXECUTE_STATION(-1, 7, 1),
    HALT,
  LABEL(3), /* = 0x03 */
    EXECUTE_STATION(-1, 8, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    EXECUTE_STATION(-1, 19, 0),
    HALT,
};

static const ScriptRef s_gs1_g0_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs1_g0_s0_evt0_sref_script }; /* 0x8138f00 */


static const struct ScriptCommand s_gs1_g0_s0_evt1_sref_script[] = { /* 0x8138f0c */
    DEBUGINFO_O(365),
    { 0x01, 0x00, -0x0001,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs1_g0_s0_evt1_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs1_g0_s0_evt1_sref_script }; /* 0x8138f3c */

static const struct ScriptCommand s_gs1_g0_s0_evt2_sref_script[] = { /* 0x8138f48 */
    DEBUGINFO_O(373),
    { 0x01, 0x00, -0x0001,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs1_g0_s0_evt2_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs1_g0_s0_evt2_sref_script }; /* 0x8138f78 */

static const struct ScriptCommand s_gs1_g0_s0_evt3_sref_script[] = { /* 0x8138f84 */
    DEBUGINFO_O(381),
    { 0x01, 0x00, -0x0001,  0x00000006,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs1_g0_s0_evt3_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs1_g0_s0_evt3_sref_script }; /* 0x8138fb4 */

static const struct ScriptCommand s_gs1_g0_s0_obj0_dlg2[] = { /* 0x8138fc0 */
    DEBUGINFO_O(389),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_INSTANT((@@STRING:96d9ee427632d27c46ed8bd03c5fee09916daee7eb9dce423b37bea18fc7d90b@@)),
    MSG_INSTANT((@@STRING:3b2be627a25db62d752a011453feca378442536a6eda328a1409a101933fa3a6@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s0_obj1_dlg2[] = { /* 0x81390c0 */
    DEBUGINFO_O(401),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_INSTANT((@@STRING:5fe5f86e5896fc03b7e37a53106f80f143d041faba9ce4b89be2a8704883fec1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s0_obj2_dlg2[] = { /* 0x8139158 */
    DEBUGINFO_O(412),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_INSTANT((@@STRING:bbfebd0e35007af6998acaab92d4c79836067629aeae0905156d3d5cc7b9e932@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(2),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s1_lives0_dlg0[] = { /* 0x81391f4 */
    DEBUGINFO_O(423),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s1_lives1_dlg0[] = { /* 0x8139234 */
    DEBUGINFO_O(430),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s2_lives0_dlg0[] = { /* 0x8139274 */
    DEBUGINFO_O(437),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s2_lives1_dlg0[] = { /* 0x81392b4 */
    DEBUGINFO_O(444),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s3_lives0_dlg0[] = { /* 0x81392f4 */
    DEBUGINFO_O(451),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s3_lives1_dlg0[] = { /* 0x8139334 */
    DEBUGINFO_O(458),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s4_lives0_dlg0[] = { /* 0x8139374 */
    DEBUGINFO_O(465),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s4_lives1_dlg0[] = { /* 0x81393b4 */
    DEBUGINFO_O(472),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s7_lives0_dlg0[] = { /* 0x81393f4 */
    DEBUGINFO_O(479),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s7_lives1_dlg0[] = { /* 0x8139434 */
    DEBUGINFO_O(486),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s8_lives0_dlg0[] = { /* 0x8139474 */
    DEBUGINFO_O(493),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g0_s8_lives1_dlg0[] = { /* 0x81394a4 */
    DEBUGINFO_O(499),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g1_s0_station_sref_script[] = { /* 0x81394d4 */
    DEBUGINFO_O(505),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g1_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g1_s0_station_sref_script }; /* 0x8139514 */

static const struct ScriptCommand s_gs1_g1_s0_lives0_dlg2[] = { /* 0x8139520 */
    DEBUGINFO_O(514),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives1_dlg2[] = { /* 0x8139580 */
    DEBUGINFO_O(523),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives2_dlg2[] = { /* 0x81395e0 */
    DEBUGINFO_O(532),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives3_dlg2[] = { /* 0x8139640 */
    DEBUGINFO_O(541),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives4_dlg2[] = { /* 0x81396a0 */
    DEBUGINFO_O(550),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives5_dlg2[] = { /* 0x8139700 */
    DEBUGINFO_O(559),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives6_dlg2[] = { /* 0x8139760 */
    DEBUGINFO_O(568),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:9c16dc053c8983be3ac3eae290c6877362bab496adbb900d7041ef02cbe5a3ce@@)),
    MSG_NPC(1, (@@STRING:8c7f5256d0ab39ccf4b9de161a2a1d09109003903e0392c5f6b87c9da18e218b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives7_dlg2[] = { /* 0x8139840 */
    DEBUGINFO_O(578),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:f5fe26b6ef35bf85a6cf1db99e5b194009f7247a317fc8128a81465dede525cf@@)),
    MSG_NPC(1, (@@STRING:d471e66b8c2cbdda286227f6fa1beaba1caeca17a66f53c1f7da1bcae3358b65@@)),
    MSG_NPC(1, (@@STRING:1c6205c4968681c90fe9ef2704fdc8ae0d824fc503bd650b54cb7d3dd0fe4e04@@)),
    MSG_NPC(1, (@@STRING:ff94873df2bee6a3984619c74235741d3aea3a4cc722a220bf2bf57157f1535e@@)),
    MSG_NPC(1, (@@STRING:96cdc70523d18af0a422c9b653654ec57318df84c2d6607596c1c64f0371d238@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives8_dlg2[] = { /* 0x8139a3c */
    DEBUGINFO_O(591),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000050,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:19446b8a50f23bc2c34f8281bffe6a01c133801a3b011dc96a7d2c845516edf9@@)),
    MSG_NPC(1, (@@STRING:b059509da77c78d32818864cd4d6b817f2880ef1147058e6d8281a03734b37c5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives9_dlg2[] = { /* 0x8139b2c */
    DEBUGINFO_O(602),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:babe7bff4fa4f6e9ceb72038571a28c13e46a4448f43d8bdd30a26de655410c0@@)),
    MSG_NPC(1, (@@STRING:412475d7d26ebefcff477f65a1623f9a256a6ec913928e93ff47868976ffd30e@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives10_dlg2[] = { /* 0x8139bf4 */
    DEBUGINFO_O(612),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:26e6d2e5d2e523e67f394530dab4254cc19c4754c234013f40249a8809f9da22@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives11_dlg2[] = { /* 0x8139c9c */
    DEBUGINFO_O(621),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:149d8e1fb82830d18c035ae9f0ec7ecf52a07d2c8ac0adf8b4a91cd2b79196ec@@)),
    MSG_NPC(1, (@@STRING:9e26fe693363e415070611e96523a8f074821aff99f39277735695bedee4ddac@@)),
    MSG_NPC(1, (@@STRING:6afd5dfa51bba2c180cc9ac8a6dc0ea7a437008b3a9386cdab22c24827bf53e8@@)),
    MSG_NPC(1, (@@STRING:2bae4e674d227f4c5817adcd90fc4140418476d83cea34499b0a912734be3469@@)),
    MSG_NPC(1, (@@STRING:0ff51bbf53b19a81b87f5f5b20171ec8512d9a370c097f760689b6823ead5e0e@@)),
    MSG_NPC(1, (@@STRING:c077c33ebff8af2c7d992f7218992928e9ed6108c04f2a5f426bddada6b45132@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives12_dlg2[] = { /* 0x8139ef4 */
    DEBUGINFO_O(637),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1a77ebaff01e82e90f24d2a5f052e5dc57468ed941f4a523be191765ba76e62c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g1_s0_lives13_dlg2[] = { /* 0x8139f7c */
    DEBUGINFO_O(646),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1b0d6486509ced0c775f23bc2135170b02ef96f494ae4da00908dcfcc0668387@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g2_s0_station_sref_script[] = { /* 0x813a004 */
    DEBUGINFO_O(655),
    JUMPIF_EQUAL(WARP_LOCK, 0, /* to label */ 0),
    RET_DIRECT,
  LABEL(0), /* = 0x00 */
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 19, -1, /* to label */ 6),
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(4, /* to label */ 2),
    JUMPIF_SCENE_EQ(SCENARIO_SUB4, 38, 1, /* to label */ 3),
  LABEL(2), /* = 0x02 */
    JUMPIF_SCENE_EQ(SCENARIO_SUB4, 43, 0, /* to label */ 4),
    JUMPIF_SCENE_EQ(SCENARIO_SUB4, 43, 1, /* to label */ 4),
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 53, 3, /* to label */ 5),
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 53, 4, /* to label */ 5),
    JUMPIF_SCENE_LT(SCENARIO_SUB7, 49, 2, /* to label */ 6),
    JUMPIF_SCENE_GT(SCENARIO_SUB7, 49, -1, /* to label */ 6),
    JUMPIF_SCENE_LT(SCENARIO_SUB7, 49, 4, /* to label */ 7),
    JUMPIF_SUM(JUDGE_LT, EVENT_S07E01, 11, /* to label */ 7),
  LABEL(6), /* = 0x06 */
    CLEAR_ARRAY(EVENT_LOCAL),
    JUMPIF_SCENE_EQ(SCENARIO_SUB1, 32, 2, /* to label */ 9),
    JUMP_LABEL(10),
  LABEL(9), /* = 0x09 */
    SELECT_ENTITIES(39, 0),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    JUMP_LABEL(10),
  LABEL(10), /* = 0x0a */
    CJUMP_SCENARIO_0(SCENARIO_SUB2),
    COND(JUDGE_EQ, 33, /* to label */ 12),
    COND(JUDGE_EQ, 34, /* to label */ 13),
    JUMP_LABEL(14),
  LABEL(12), /* = 0x0c */
    JUMPIF_SCENE_EQ(SCENARIO_SUB2, 33, 2, /* to label */ 15),
    JUMP_LABEL(14),
  LABEL(15), /* = 0x0f */
    SELECT_ENTITIES(40, 0),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    JUMP_LABEL(14),
  LABEL(13), /* = 0x0d */
    JUMPIF_SCENE_EQ(SCENARIO_SUB2, 34, 1, /* to label */ 16),
    JUMP_LABEL(14),
  LABEL(16), /* = 0x10 */
    SELECT_ENTITIES(41, 0),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    JUMP_LABEL(14),
  LABEL(14), /* = 0x0e */
    JUMPIF_SCENE_LT(SCENARIO_SUB4, 38, 2, /* to label */ 19),
    JUMPIF_SCENE_LT(SCENARIO_SUB4, 43, 0, /* to label */ 20),
    JUMP_LABEL(19),
  LABEL(3), /* = 0x03 */
    SELECT_ENTITIES(42, 0),
    RET_DIRECT,
  LABEL(20), /* = 0x14 */
    SELECT_ENTITIES(44, 0),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    JUMP_LABEL(19),
  LABEL(4), /* = 0x04 */
    SELECT_ENTITIES(45, 0),
    RET_DIRECT,
  LABEL(19), /* = 0x13 */
    JUMP_LABEL(22),
  LABEL(7), /* = 0x07 */
    SELECT_ENTITIES(50, 0),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    JUMP_LABEL(6),
  LABEL(22), /* = 0x16 */
    JUMPIF_SCENE_EQ(SCENARIO_SUB9, 55, 2, /* to label */ 24),
    JUMP_LABEL(25),
  LABEL(5), /* = 0x05 */
    SELECT_ENTITIES(51, 0),
    RET_DIRECT,
  LABEL(24), /* = 0x18 */
    SELECT_ENTITIES(52, 0),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    JUMP_LABEL(25),
  LABEL(25), /* = 0x19 */
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 19, -1, /* to label */ 26),
    JUMPIF(JUDGE_NE, EVENT_LOCAL, 0, /* to label */ 26),
    { 0x3b, 0x33,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 27),
    WAIT(0),
    JUMP_LABEL(26),
  LABEL(28), /* = 0x1c */
    SELECT_ENTITIES(3, 0),
    JUMP_LABEL(26),
  LABEL(27), /* = 0x1b */
    CJUMP_RANDOM(2),
    COND_EQUAL(0, /* to label */ 29),
    COND_EQUAL(1, /* to label */ 30),
  LABEL(29), /* = 0x1d */
    SELECT_ENTITIES(4, 0),
    JUMP_LABEL(26),
  LABEL(30), /* = 0x1e */
    SELECT_ENTITIES(5, 0),
    JUMP_LABEL(26),
  LABEL(26), /* = 0x1a */
    RET_DIRECT,
};

static const ScriptRef s_gs1_g2_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g2_s0_station_sref_script }; /* 0x813a604 */








static const struct ScriptCommand s_gs1_g3_s0_lives0_dlg2[] = { /* 0x813a610 */
    DEBUGINFO_O(763),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3( TRUE, /*default*/ 0, /* speaker */ -1, (@@STRING:a7e41f531884e5ff0e419f5bd01d5e5f45e51ed3a27753a39345acb372b1a6e8@@)),
    CHOICE(/* label */  1, (@@STRING:28777b32c4783975e3d8378d67acfb278e3214c52dad8a9fefeb494d388f19dd@@)),
    CHOICE(/* label */  2, (@@STRING:6aa32b020e750c7adcb95ba5d7a71c37d96a2ad745855e31b2978744e0cad41e@@)),
    CHOICE(/* label */  3, (@@STRING:a1de55097382051338324f2454a9bb9dfb7131cdac0fd69de4d06ead447f21ab@@)),
  LABEL(3), /* = 0x03 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    CANCEL_ENTITIES(3, 0),
    SELECT_ENTITIES(4, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    TEXTBOX_CLEAR,
    CANCEL_ENTITIES(3, 0),
    SELECT_ENTITIES(5, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g4_s0_lives0_dlg1[] = { /* 0x813a7a0 */
    DEBUGINFO_O(787),
    SELECT_ANIMATION(1),
    WALK_GRID(256, 0),
  LABEL(0), /* = 0x00 */
    { 0x3b, 0x11,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 1),
    { 0x3b, 0x15,  0x0000,  0x00000020,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 2),
  LABEL(1), /* = 0x01 */
    WALK_RELATIVE(128, -1, 0),
    CJUMP_DIR_TO_LINK(1),
    COND_EQUAL(6, /* to label */ 0),
    WALK_GRID(128, 2),
    END_DELETE,
  LABEL(2), /* = 0x02 */
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s0_lives0_dlg2[] = { /* 0x813a8b0 */
    DEBUGINFO_O(807),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:64dd060e87e91f8a875eaf3b6f2fcd8b4f36875d925512376c0630b3d1405215@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g4_s1_station_sref_script[] = { /* 0x813a938 */
    DEBUGINFO_O(816),
    { 0xb2, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 3),
    SELECT_ENTITIES(1, 0),
    RET,
};

static const ScriptRef s_gs1_g4_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g4_s1_station_sref_script }; /* 0x813a9a8 */

static const struct ScriptCommand s_gs1_g4_s1_lives0_dlg0[] = { /* 0x813a9b4 */
    DEBUGINFO_O(828),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    AWAIT_CUE(5),
    FANFARE_PLAY2(515),
    MSG_OVERHEARD((@@STRING:ba42881a01af73f63680a9b90f18379f74b0e1fda568b2cb85fb1b17d89f88d0@@)),
    WAIT(60),
    TEXTBOX_CLEAR,
    WAIT(1),
    FANFARE_PLAY2(465),
    SELECT_ENTITIES(-1, 2),
    ALERT_CUE(6),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    WAIT(60),
    MSG_NPC(2, (@@STRING:57a5add0c0c8a556bc814dc924aa7563ea08126ebbd8e3d442a22eb2f606d2fb@@)),
    MSG_NPC(2, (@@STRING:51d99413ddc9ab628d338f0d83652e4b2f5fd5e457d9cf15a675e092f909e0e7@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs1_g4_s1_lives1_dlg0[] = { /* 0x813ac3c */
    DEBUGINFO_O(859),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g4_s1_lives2_dlg0[] = { /* 0x813acdc */
    DEBUGINFO_O(872),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(465),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SET_DIR_WAIT(DIRECTION_SOUTH, 60),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives0_dlg0[] = { /* 0x813ad6c */
    DEBUGINFO_O(884),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives1_dlg0[] = { /* 0x813adcc */
    DEBUGINFO_O(893),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives2_dlg0[] = { /* 0x813ae2c */
    DEBUGINFO_O(902),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives3_dlg0[] = { /* 0x813ae8c */
    DEBUGINFO_O(911),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives4_dlg0[] = { /* 0x813aeec */
    DEBUGINFO_O(920),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives5_dlg0[] = { /* 0x813af4c */
    DEBUGINFO_O(929),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives6_dlg0[] = { /* 0x813afac */
    DEBUGINFO_O(938),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives7_dlg0[] = { /* 0x813b00c */
    DEBUGINFO_O(947),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives8_dlg0[] = { /* 0x813b06c */
    DEBUGINFO_O(956),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s2_lives9_dlg0[] = { /* 0x813b0cc */
    DEBUGINFO_O(965),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s3_lives0_dlg0[] = { /* 0x813b12c */
    DEBUGINFO_O(974),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    RET,
};

static const struct ScriptCommand s_gs1_g4_s3_lives0_dlg1[] = { /* 0x813b16c */
    DEBUGINFO_O(981),
    SELECT_ANIMATION(1),
    WALK_GRID(128, 2),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g4_s3_lives0_dlg2[] = { /* 0x813b1ac */
    DEBUGINFO_O(988),
    CLEAR_ARRAY(EVENT_LOCAL),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:05b1b08866b45cefaa4d25530ac376e6e08001f4d1be36216c45c9a540e4e997@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(1), /* = 0x01 */
    PORTRAIT_REP(0x0001, 0x00000042),
    MSG_NPC(1, (@@STRING:22b96971241aa3d9b09787c737f7de771c19dcfd81ecc86362ffd326c13c475d@@)),
    PORTRAIT_REP(0x0001, 0x00000041),
    MSG_NPC(1, (@@STRING:79a2513c3f6cee52a3bd4ac1fd355c93e3c215d91d115de52c70ac38c38db0b3@@)),
    SPECIAL_TEXT(SPECIAL_TEXT_TOOL_BOX, 0, 0),
    COND_EQUAL(-1, /* to label */ 2),
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    ALERT_CUE(6),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000045),
    MSG_NPC(1, (@@STRING:74d53fdfe5c8b0d89e82999234d7dd7cfaa65e97fcf06fa8922647e7e80a36c4@@)),
    MSG_NPC(1, (@@STRING:ea8cafaf5a4e280e1af294c1ba23bce5a4f09a6d831bbc8490885cd3a92474ec@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(3), /* = 0x03 */
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(6),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_INSTANT((@@STRING:ca3d5b369cd4ee5d7b08df951130ffc3c077bd141ea1c6eb26f3b440c6d51eff@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000041),
    MSG_NPC(1, (@@STRING:a379aa8539d089a7bea638ed9346e1a36a05e76c3030465b18bd6095a17c42a5@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    FANFARE_PLAY2(516),
    MSG_QUIET(-1, (@@STRING:71c42680c4b8444ca0ce8a3083d5f8be804ab79750350b2b011ff66e5500f6dc@@)),
    MSG_QUIET(-1, (@@STRING:71c42680c4b8444ca0ce8a3083d5f8be804ab79750350b2b011ff66e5500f6dc@@)),
    FANFARE_STOP2(516),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000044),
    MSG_NPC(1, (@@STRING:9ab8d7f403d51a19e789be6edf94c497cae0b108c97a641c0b7b8bd5e9e2adb3@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000043),
    MSG_NPC(1, (@@STRING:5121bcc1023b0753ee90e38cc777e2edf2644b203d7324fb57f4bd193cca4c7d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:49f5777b9f5c790982d6d324a08107213cd8f349f492c908733c29145ffc724d@@)),
    MSG_NPC(1, (@@STRING:8add3bea6e706fc190cfbf437916b28eab27000874191391994bbdbf52bbc71d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_2C, 43, 0),
    WAIT(30),
    MSG_NPC(1, (@@STRING:105b4c92fcad7df9e3ff16f3340fc3c47b7ed247e82e06a5f006ca0325d18706@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 4),
    RET,
};





static const struct ScriptCommand s_gs1_g4_s3_lives0_dlg3[] = { /* 0x813b7d8 */
    DEBUGINFO_O(1058),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 0),
    AWAIT_CUE(2),
    WAIT(12),
    RET,
  LABEL(0), /* = 0x00 */
    AWAIT_CUE(6),
    SET_DIR_WAIT(DIRECTION_SOUTH, 10),
    { 0x54, 0x00,  0x001f,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs1_g4_s4_lives0_dlg1[] = { /* 0x813b948 */
    DEBUGINFO_O(1084),
    SELECT_ANIMATION(1),
    WALK_GRID(256, 2),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g4_s4_lives0_dlg2[] = { /* 0x813b988 */
    DEBUGINFO_O(1091),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000044),
    MSG_NPC(1, (@@STRING:4c87ddd4fa5d04ee85c3cbe78cde5d42861b37d4eb5253da1b0876fb05fb7ed6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g5_s0_lives0_dlg1[] = { /* 0x813b9e8 */
    DEBUGINFO_O(1100),
    SELECT_ANIMATION(1),
    WALK_GRID(256, 4),
  LABEL(0), /* = 0x00 */
    { 0x3b, 0x11,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 1),
    { 0x3b, 0x15,  0x0000,  0x00000040,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 2),
  LABEL(1), /* = 0x01 */
    WALK_RELATIVE(256, -1, 0),
    CJUMP_DIR_TO_LINK(5),
    COND_EQUAL(6, /* to label */ 0),
    WALK_GRID(256, 6),
    END_DELETE,
  LABEL(2), /* = 0x02 */
    EXECUTE_STATION(-1, -1, 1),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s0_lives0_dlg2[] = { /* 0x813baf8 */
    DEBUGINFO_O(1120),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g5_s1_station_sref_script[] = { /* 0x813bb74 */
    DEBUGINFO_O(1129),
    { 0xb2, 0x00,  0x0006,  0x00000000,  0x00000000, NULL },
    SELECT_LIVES(-1, 1),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 3),
    SELECT_ENTITIES(1, 0),
    RET,
};

static const ScriptRef s_gs1_g5_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g5_s1_station_sref_script }; /* 0x813bbe4 */

static const struct ScriptCommand s_gs1_g5_s1_lives0_dlg0[] = { /* 0x813bbf0 */
    DEBUGINFO_O(1141),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    AWAIT_CUE(5),
    FANFARE_PLAY2(400),
    MSG_OVERHEARD((@@STRING:eb38d0fb8d858510ed5795a05c2d4ceeeef734dac58ffff6752b6bd420a9e6f7@@)),
    AWAIT_CUE(5),
    FANFARE_PLAY2(900),
    SELECT_OBJECTS(-1, 1),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    WAIT(1),
    FANFARE_PLAY2(465),
    SELECT_ENTITIES(-1, 2),
    ALERT_CUE(6),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    WAIT(60),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000045),
    MSG_NPC(2, (@@STRING:64dd060e87e91f8a875eaf3b6f2fcd8b4f36875d925512376c0630b3d1405215@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs1_g5_s1_lives1_dlg0[] = { /* 0x813be18 */
    DEBUGINFO_O(1178),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g5_s1_lives2_dlg0[] = { /* 0x813beb8 */
    DEBUGINFO_O(1191),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(19),
    WAIT(4),
    CMD_UNK_E5(5, 0),
    WAIT(8),
    CMD_UNK_E5(5, 0),
    WAIT(60),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x54, 0x00,  0x001a,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    WAIT(10),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s1_obj0_dlg0[] = { /* 0x813bfc8 */
    DEBUGINFO_O(1211),
    SELECT_ANIMATION(8),
    { 0x5d, 0x00,  0x0000,  0x0000007f,  0x00000000, NULL },
    WALK_RELATIVE(512, -32, 0),
    WALK_RELATIVE(256, -8, 0),
    WALK_RELATIVE(128, -2, 0),
    { 0x52, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000040,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g5_s1_obj0_dlg1[] = { /* 0x813c058 */
    DEBUGINFO_O(1223),
    SELECT_ANIMATION(8),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s1_obj0_dlg2[] = { /* 0x813c088 */
    DEBUGINFO_O(1229),
    FANFARE_PLAY2(330),
    CANCEL_OBJECTS(-1, 1),
    EXECUTE_STATION(-1, -1, 4),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s1_obj1_dlg0[] = { /* 0x813c0d8 */
    DEBUGINFO_O(1237),
    SELECT_ANIMATION(8),
    { 0x5d, 0x00,  0x0000,  0x0000007f,  0x00000000, NULL },
    { 0x84, 0x00,  0x0200, -0x00000018, -0x00000004, NULL },
    { 0x84, 0x00,  0x0100, -0x00000008, -0x00000002, NULL },
    { 0x84, 0x00,  0x0080, -0x00000002, -0x00000001, NULL },
    { 0x52, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000040,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g5_s1_obj1_dlg1[] = { /* 0x813c168 */
    DEBUGINFO_O(1249),
    SELECT_ANIMATION(8),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s1_obj1_dlg2[] = { /* 0x813c198 */
    DEBUGINFO_O(1255),
    FANFARE_PLAY2(330),
    CANCEL_OBJECTS(-1, 1),
    EXECUTE_STATION(-1, -1, 4),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s1_obj2_dlg0[] = { /* 0x813c1e8 */
    DEBUGINFO_O(1263),
    SELECT_ANIMATION(8),
    { 0x5d, 0x00,  0x0000,  0x0000007f,  0x00000000, NULL },
    { 0x84, 0x00,  0x0200, -0x00000018,  0x00000004, NULL },
    { 0x84, 0x00,  0x0100, -0x00000008,  0x00000002, NULL },
    { 0x84, 0x00,  0x0080, -0x00000002,  0x00000001, NULL },
    { 0x52, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000040,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g5_s1_obj2_dlg1[] = { /* 0x813c278 */
    DEBUGINFO_O(1275),
    SELECT_ANIMATION(8),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s1_obj2_dlg2[] = { /* 0x813c2a8 */
    DEBUGINFO_O(1281),
    FANFARE_PLAY2(330),
    CANCEL_OBJECTS(-1, 1),
    EXECUTE_STATION(-1, -1, 4),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives0_dlg0[] = { /* 0x813c2f8 */
    DEBUGINFO_O(1289),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives1_dlg0[] = { /* 0x813c358 */
    DEBUGINFO_O(1298),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives2_dlg0[] = { /* 0x813c3b8 */
    DEBUGINFO_O(1307),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives3_dlg0[] = { /* 0x813c418 */
    DEBUGINFO_O(1316),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives4_dlg0[] = { /* 0x813c478 */
    DEBUGINFO_O(1325),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives5_dlg0[] = { /* 0x813c4d8 */
    DEBUGINFO_O(1334),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives6_dlg0[] = { /* 0x813c538 */
    DEBUGINFO_O(1343),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives7_dlg0[] = { /* 0x813c598 */
    DEBUGINFO_O(1352),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives8_dlg0[] = { /* 0x813c5f8 */
    DEBUGINFO_O(1361),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s2_lives9_dlg0[] = { /* 0x813c658 */
    DEBUGINFO_O(1370),
    SELECT_ANIMATION(2),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 127),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s3_lives0_dlg1[] = { /* 0x813c6b8 */
    DEBUGINFO_O(1379),
    { 0x53, 0x00,  0x0000,  0x00000008,  0x00000000, NULL },
    SELECT_ANIMATION(1),
    WALK_RELATIVE(64, -36, 0),
    CANCEL_OBJECTS(-1, 1),
    WAIT(30),
    WALK_GRID(128, 6),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g5_s3_lives0_dlg2[] = { /* 0x813c738 */
    DEBUGINFO_O(1390),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g5_s4_station_sref_script[] = { /* 0x813c798 */
    DEBUGINFO_O(1399),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs1_g5_s4_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g5_s4_station_sref_script }; /* 0x813c7d8 */

static const struct ScriptCommand s_gs1_g5_s4_lives0_dlg0[] = { /* 0x813c7e4 */
    DEBUGINFO_O(1408),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    CMD_UNK_93(8, DIR_TRANS_10, 127),
    PORTRAIT_REP(0x0002, 0x00000000),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 2, (@@STRING:2bc47939b37354b4372dec624a5b814b427e572c9b848e02ea8e3c7ae8638633@@)),
    CHOICE(/* label */  1, (@@STRING:4e8cfe0b453b23fe6d3db33012c7b78a89e7136bb9e6046539f88d2be1d59d52@@)),
    CHOICE(/* label */  2, (@@STRING:d304443fe9cf368c644d9b3b5ae1325d33daaf7d50d48f3ea268d34f433bd2ad@@)),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    WAIT(20),
    FANFARE_PLAY2(333),
    MSG_INSTANT((@@STRING:6f08bd6f3a88d616aa393346f68eb9b72386eb5fd2d2b862e44b487e769f264a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:22b96971241aa3d9b09787c737f7de771c19dcfd81ecc86362ffd326c13c475d@@)),
    MSG_NPC(2, (@@STRING:943a23ba1aa5eed820eb20ab379ac34abc50239020eee50f86966e98305c8e7c@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0002, 0x00000042),
    MSG_NPC(2, (@@STRING:528eee2846d4cabc96672de71cd80b9d9dd6462a8f58199853792f616db54e28@@)),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:5a6ccd364276c1f7a217406d166071b9a9956e33f8171174196a67117805506c@@)),
    MSG_NPC(2, (@@STRING:8add3bea6e706fc190cfbf437916b28eab27000874191391994bbdbf52bbc71d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    SPECIAL_TEXT(SPECIAL_TEXT_UNK_2C, 43, 0),
    WAIT(30),
    MSG_NPC(2, (@@STRING:105b4c92fcad7df9e3ff16f3340fc3c47b7ed247e82e06a5f006ca0325d18706@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 5),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
  LABEL(2), /* = 0x02 */
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000045),
    MSG_NPC(2, (@@STRING:eccf9d47a5a356be1d56a5ab53f970444ea9f7483d0ec9b4f36d5bdb8e6b2899@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:1530eef98ac05a560d8e7e07f0a3b74bf18d12fbc1621460fa33e17e5618797c@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(20),
    MSG_NPC(2, (@@STRING:dc80aab2486eeadb215ddbbc2847b518d1e603d093620df95695c88b13541085@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    SELECT_ENTITIES(-1, 6),
    { 0x3b, 0x34,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};





static const struct ScriptCommand s_gs1_g5_s4_lives1_dlg0[] = { /* 0x813cd90 */
    DEBUGINFO_O(1480),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g5_s4_lives2_dlg0[] = { /* 0x813cdf0 */
    DEBUGINFO_O(1489),
    { 0x53, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    { 0x56, 0x00, -0x0001,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    { 0xda, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
  LABEL(0), /* = 0x00 */
    HALT,
  LABEL(1), /* = 0x01 */
    AWAIT_CUE(7),
    SET_DIR_WAIT(DIRECTION_SOUTH, 10),
    SELECT_ANIMATION(32),
    AWAIT_CUE(7),
    { 0x54, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(24),
    WAIT(30),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_95(8, DIR_TRANS_10, 3),
    SELECT_ANIMATION(33),
    { 0x53, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    WALK_RELATIVE(128, 32, 0),
  LABEL(2), /* = 0x02 */
    { 0x3b, 0x15,  0x0000,  0x00000040,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 3),
    WALK_RELATIVE(128, 4, 0),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    { 0x54, 0x00,  0x0800,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    WAIT(10),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    { 0x52, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_95(4, DIR_TRANS_10, 3),
    WAIT(10),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs1_g5_s5_lives0_dlg1[] = { /* 0x813d100 */
    DEBUGINFO_O(1541),
    SELECT_ANIMATION(1),
    WALK_GRID(256, 6),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g5_s5_lives0_dlg2[] = { /* 0x813d140 */
    DEBUGINFO_O(1548),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_NPC(1, (@@STRING:49f5777b9f5c790982d6d324a08107213cd8f349f492c908733c29145ffc724d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g5_s6_lives0_dlg1[] = { /* 0x813d190 */
    DEBUGINFO_O(1556),
    SELECT_ANIMATION(33),
    WALK_GRID(256, 3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g5_s6_lives0_dlg2[] = { /* 0x813d1d0 */
    DEBUGINFO_O(1563),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT_REP(0x0001, 0x00000045),
    MSG_NPC(1, (@@STRING:a6ea156d52e8cd50a0d2c0f6155d15eb9d9d02ec395fbfce5a12fb3f8d7aaa97@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g6_s0_station_sref_script[] = { /* 0x813d240 */
    DEBUGINFO_O(1573),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, 1),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    SELECT_ENTITIES(7, 0),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs1_g6_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs1_g6_s0_station_sref_script }; /* 0x813d310 */

static const struct ScriptCommand s_gs1_g6_s0_eff0_script[] = { /* 0x813d31c */
    DEBUGINFO_O(1591),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    CAMERA_PAN(512, 9),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(512, 10),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(512, 11),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(512, 12),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(512, 13),
    CAMERA_END_PAN,
    WAIT(1),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g6_s0_lives0_dlg0[] = { /* 0x813d45c */
    DEBUGINFO_O(1614),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WALK_GRID(128, 7),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:368f71c293e9a6da60b690c8e943c128efa830a980e99757395669732f797960@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9d69c687a5a652f8f5fd81f4e3566c767290c2e868bb77bb7af20e355c50ad28@@)),
    VARIANT_DEFAULT((@@STRING:9d69c687a5a652f8f5fd81f4e3566c767290c2e868bb77bb7af20e355c50ad28@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1912a028b75e78f427048b224f3bcf324ef3e52b15d389de9da1f007f2618c4a@@)),
    VARIANT(/* == */  1, (@@STRING:2d8750147a100ead11c81d3366326ab5ab53846e4245f89c9a68ed0d832701ff@@)),
    VARIANT_DEFAULT((@@STRING:1912a028b75e78f427048b224f3bcf324ef3e52b15d389de9da1f007f2618c4a@@)),
    VARIANT_DEFAULT((@@STRING:2d8750147a100ead11c81d3366326ab5ab53846e4245f89c9a68ed0d832701ff@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:32d920d1f05dd3465aad5a40fa205757afb2266b1684481b945ad0ae72db56d5@@)),
    VARIANT(/* == */  1, (@@STRING:3cf14a434bed4752d8ee309e8a375481bba0e2ccb65e7463833c698cb738f10c@@)),
    VARIANT(/* == */  1, (@@STRING:206108c806c05111a56ca8f042f6380b57ab2763f6183364ef43327ddc665f58@@)),
    VARIANT(/* == */  3, (@@STRING:32d920d1f05dd3465aad5a40fa205757afb2266b1684481b945ad0ae72db56d5@@)),
    VARIANT(/* == */  3, (@@STRING:3cf14a434bed4752d8ee309e8a375481bba0e2ccb65e7463833c698cb738f10c@@)),
    VARIANT(/* == */  3, (@@STRING:206108c806c05111a56ca8f042f6380b57ab2763f6183364ef43327ddc665f58@@)),
    VARIANT_DEFAULT((@@STRING:32d920d1f05dd3465aad5a40fa205757afb2266b1684481b945ad0ae72db56d5@@)),
    VARIANT_DEFAULT((@@STRING:3cf14a434bed4752d8ee309e8a375481bba0e2ccb65e7463833c698cb738f10c@@)),
    VARIANT_DEFAULT((@@STRING:206108c806c05111a56ca8f042f6380b57ab2763f6183364ef43327ddc665f58@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8a6e50112b29688bffc562d8a62a2592c24c1a98917e179da220b0c233e1c2d7@@)),
    VARIANT(/* == */  1, (@@STRING:a216d8bef7265ea649d07655d7d2d49cb85ea1dc97d05cb0ea7ce132551e7a80@@)),
    VARIANT_DEFAULT((@@STRING:8a6e50112b29688bffc562d8a62a2592c24c1a98917e179da220b0c233e1c2d7@@)),
    VARIANT_DEFAULT((@@STRING:a216d8bef7265ea649d07655d7d2d49cb85ea1dc97d05cb0ea7ce132551e7a80@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:58e26becdea5ebb8569c07d985aff559697e411b7b5ad072c4ed48851d1624ef@@)),
    VARIANT_DEFAULT((@@STRING:58e26becdea5ebb8569c07d985aff559697e411b7b5ad072c4ed48851d1624ef@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:52cdbe73801aaf4bbae665e2e91286dc0261fd40ddbfabecde737c72ada742e0@@)),
    VARIANT_DEFAULT((@@STRING:52cdbe73801aaf4bbae665e2e91286dc0261fd40ddbfabecde737c72ada742e0@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2765a15e68caaae1c1b90c65ecd287d1a6c2ca27275b36a8ea14127a38604cee@@)),
    VARIANT(/* == */  1, (@@STRING:85887d5f76b5c619ef0526bfebdbbee98cb65ac12ddccae36db17ea6a920148f@@)),
    VARIANT(/* == */  3, (@@STRING:2765a15e68caaae1c1b90c65ecd287d1a6c2ca27275b36a8ea14127a38604cee@@)),
    VARIANT(/* == */  3, (@@STRING:85887d5f76b5c619ef0526bfebdbbee98cb65ac12ddccae36db17ea6a920148f@@)),
    VARIANT_DEFAULT((@@STRING:2765a15e68caaae1c1b90c65ecd287d1a6c2ca27275b36a8ea14127a38604cee@@)),
    VARIANT_DEFAULT((@@STRING:85887d5f76b5c619ef0526bfebdbbee98cb65ac12ddccae36db17ea6a920148f@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs1_g6_s0_lives1_dlg0[] = { /* 0x813df88 */
    DEBUGINFO_O(1694),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    WALK_GRID(128, 8),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CMD_UNK_8E(4, DIR_TRANS_10, 0),
    SELECT_ANIMATION(4),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    CMD_UNK_8E(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs1_g7_s0_station_sref_script[] = { /* 0x813e0f8 */
    DEBUGINFO_O(1720),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g7_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g7_s0_station_sref_script }; /* 0x813e128 */

static const struct ScriptCommand s_gs1_g7_s0_lives0_dlg2[] = { /* 0x813e134 */
    DEBUGINFO_O(1728),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives1_dlg2[] = { /* 0x813e194 */
    DEBUGINFO_O(1737),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives2_dlg2[] = { /* 0x813e1f4 */
    DEBUGINFO_O(1746),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives3_dlg2[] = { /* 0x813e254 */
    DEBUGINFO_O(1755),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives4_dlg2[] = { /* 0x813e2b4 */
    DEBUGINFO_O(1764),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives5_dlg1[] = { /* 0x813e314 */
    DEBUGINFO_O(1773),
    { 0x51, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g7_s0_lives5_dlg2[] = { /* 0x813e354 */
    DEBUGINFO_O(1780),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:8f189d7e1d30e965d27f8abef29b06aa84319a44ad6ba26f2760763fa7fd03ad@@)),
    MSG_NPC(1, (@@STRING:64eb413179de779226bd023bc3cb8ed177866abc735579662c46e53228c8a587@@)),
    MSG_NPC(1, (@@STRING:59bb43ceac42f57c3bb64c3b6c9f2ca4df431c2b2707fcc179854eaff5d1fb97@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives6_dlg1[] = { /* 0x813e494 */
    DEBUGINFO_O(1791),
    { 0x51, 0x00,  0x000e,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_GIRL),
    RET,
};

static const struct ScriptCommand s_gs1_g7_s0_lives6_dlg2[] = { /* 0x813e4d4 */
    DEBUGINFO_O(1798),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:40e8fb0ddefe055b1840e053f85a9412a97dcab0e25c8635508a46b3011414e5@@)),
    MSG_NPC(1, (@@STRING:94dbc0a197a2f2bc91ed8ecbd5845896a7088298716397c6667124403d993fa4@@)),
    MSG_NPC(1, (@@STRING:fb015c6145f7ada558e227191bddaf4703d8c63763d487ba56e3884e7cb1db93@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives7_dlg2[] = { /* 0x813e61c */
    DEBUGINFO_O(1809),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:34a5a903d39056edb08273b48c2eb1afec8288b93ac73df7c0397c752dee4bb2@@)),
    MSG_NPC(1, (@@STRING:8c07cd4027596f606bf3fadc605dca790c3a917621e9aeedab977a005eb86fdc@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:6522f642769a4257b1367c3efde1fbc21358df9b450a70065dac45a23b0f8639@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:6d2c5ea16fe981317e93144a2491d02eb5ea070a464e39d339759ef57b1166e5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g7_s0_lives7_dlg3[] = { /* 0x813e794 */
    DEBUGINFO_O(1825),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    CALL_SCRIPT(WAIT_END_TALK_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g7_s1_station_sref_script[] = { /* 0x813e844 */
    DEBUGINFO_O(1839),
    SELECT_ENTITIES(-1, -1),
    RET,
};

static const ScriptRef s_gs1_g7_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g7_s1_station_sref_script }; /* 0x813e874 */

static const struct ScriptCommand s_gs1_g7_s1_lives0_dlg0[] = { /* 0x813e880 */
    DEBUGINFO_O(1847),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:11faf5e4b790544ebc35bd665dedf41b70be70552a1f4c966a4694eb29efb836@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_93(8, DIR_TRANS_10, 4),
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9a9a52ca0f37a737cc33c7b0ade7729cf1f648993156a9345380f04eef16fcc8@@)),
    VARIANT(/* == */  1, (@@STRING:26e0a38b5e528c5e8fabbed4fec7e5ae708a4a315e76dcbd4ce38fedf2fb4dee@@)),
    VARIANT_DEFAULT((@@STRING:2ff672e342fa95ba5bc2f6a5c8a4ae1ad1fdc983500b76c12bc97100e435e8ae@@)),
    VARIANT_DEFAULT((@@STRING:dc0e18a2951762ba1781f8eca8b3da81d2f3944635e4a90d4ff1c0623c2f4c85@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs1_g7_s1_lives1_dlg0[] = { /* 0x813ead4 */
    DEBUGINFO_O(1871),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g8_s0_station_sref_script[] = { /* 0x813eb54 */
    DEBUGINFO_O(1882),
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 5, 4, /* to label */ 0),
    CANCEL_LIVES(8, 0),
    JUMP_LABEL(1),
  LABEL(0), /* = 0x00 */
    SELECT_ENTITIES(-1, -1),
  LABEL(1), /* = 0x01 */
    RET_DIRECT,
};

static const ScriptRef s_gs1_g8_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g8_s0_station_sref_script }; /* 0x813ebd4 */

static const struct ScriptCommand s_gs1_g8_s0_lives0_dlg2[] = { /* 0x813ebe0 */
    DEBUGINFO_O(1895),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s0_lives1_dlg2[] = { /* 0x813ec40 */
    DEBUGINFO_O(1904),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s0_lives2_dlg2[] = { /* 0x813eca0 */
    DEBUGINFO_O(1913),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s0_lives3_dlg2[] = { /* 0x813ed00 */
    DEBUGINFO_O(1922),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s0_lives4_dlg2[] = { /* 0x813ed60 */
    DEBUGINFO_O(1931),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s0_lives5_dlg2[] = { /* 0x813edc0 */
    DEBUGINFO_O(1940),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 5, 4, /* to label */ 0),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    EXECUTE_STATION(-1, 9, 0),
    HALT,
};

static const struct ScriptCommand s_gs1_g8_s0_lives6_dlg1[] = { /* 0x813ee60 */
    DEBUGINFO_O(1953),
    { 0x51, 0x00,  0x0010,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s0_lives6_dlg2[] = { /* 0x813eea0 */
    DEBUGINFO_O(1960),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:21bd1bb6b07852cd58c240e4fcec937447354042660ac5ec1a71b2d97ed8babf@@)),
    MSG_NPC(1, (@@STRING:1da59385629561d984a1c23712a6cb45e33b58946d4f9646574fb226a23977f0@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s0_lives7_dlg1[] = { /* 0x813ef7c */
    DEBUGINFO_O(1970),
    { 0x51, 0x00,  0x0011,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_GIRL),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s0_lives7_dlg2[] = { /* 0x813efbc */
    DEBUGINFO_O(1977),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x0000004f,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:3b7646bce5c38772b5510aded1dda6e6ed066617bbf1d9737b99f8e6ebe36285@@)),
    MSG_NPC(1, (@@STRING:a7890b927be3b47fee1b2b331b19cac8fa2d024ae98809b7f4c503b6deed653f@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s1_station_sref_script[] = { /* 0x813f0a0 */
    DEBUGINFO_O(1988),
    SELECT_ENTITIES(-1, -1),
    RET,
};

static const ScriptRef s_gs1_g8_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g8_s1_station_sref_script }; /* 0x813f0d0 */

static const struct ScriptCommand s_gs1_g8_s1_lives0_dlg0[] = { /* 0x813f0dc */
    DEBUGINFO_O(1996),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:625411de72a9bd7a8c7c2146f7bccc12bc847295c46b893172be22ad1a480efc@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_93(8, DIR_TRANS_10, 4),
    WAIT(10),
    MSG_NPC(1, (@@STRING:dc92228d6e1b94dc96adfa01a879744fe7633ba08beb51a296aae82869443e0e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s1_lives1_dlg0[] = { /* 0x813f23c */
    DEBUGINFO_O(2015),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives0_dlg0[] = { /* 0x813f2bc */
    DEBUGINFO_O(2026),
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives1_dlg0[] = { /* 0x813f2ec */
    DEBUGINFO_O(2032),
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives2_dlg0[] = { /* 0x813f31c */
    DEBUGINFO_O(2038),
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives3_dlg0[] = { /* 0x813f34c */
    DEBUGINFO_O(2044),
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives4_dlg0[] = { /* 0x813f37c */
    DEBUGINFO_O(2050),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives5_dlg0[] = { /* 0x813f3bc */
    DEBUGINFO_O(2057),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives6_dlg0[] = { /* 0x813f3fc */
    DEBUGINFO_O(2064),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0008,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives7_dlg0[] = { /* 0x813f44c */
    DEBUGINFO_O(2072),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0009,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    RET,
};

static const struct ScriptCommand s_gs1_g8_s2_lives8_dlg2[] = { /* 0x813f49c */
    DEBUGINFO_O(2080),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s2_lives9_dlg2[] = { /* 0x813f4fc */
    DEBUGINFO_O(2089),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g8_s2_evt0_sref_script[] = { /* 0x813f55c */
    DEBUGINFO_O(2098),
    EXECUTE_STATION(-1, 10, 0),
    HALT,
};

static const ScriptRef s_gs1_g8_s2_evt0_sref = { NORMAL_EVENT, SCRIPT_TYPE_07, NULL, s_gs1_g8_s2_evt0_sref_script }; /* 0x813f58c */

static const struct ScriptCommand s_gs1_g9_s0_station_sref_script[] = { /* 0x813f598 */
    DEBUGINFO_O(2106),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    SCENARIO_CALC(SCENARIO_MAIN,  5,  4),
    CANCEL_LIVES(8, 0),
    SELECT_ENTITIES(8, 2),
    RET,
};

static const ScriptRef s_gs1_g9_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g9_s0_station_sref_script }; /* 0x813f608 */

static const struct ScriptCommand s_gs1_g9_s0_lives0_dlg0[] = { /* 0x813f614 */
    DEBUGINFO_O(2118),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(6),
    WALK_GRID(256, 18),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_NPC(2, (@@STRING:4792a4a8e7557cbe4e43121465b54b55238ebbda254b6a5a566c279030ba0861@@)),
    MSG_NPC(2, (@@STRING:a76b1d8aae0155f52b9a573fa43e5b20d0c17c9cccc2b1cd7e90be22d59a9ad2@@)),
    MSG_NPC(2, (@@STRING:eb3a51e647f7c607627f5fee7d7d8a745fc741e99e9a14d588a26017bf32da63@@)),
    MSG_NPC(2, (@@STRING:3edd8371dc59cdaf0b0d10eb946fc4d92d19587847df2ba0bef9160dba9694da@@)),
    MSG_NPC(2, (@@STRING:478762863572fe086bd73e101bc1b93b98c54e570e5ab02808dd0f63ac6ffc9f@@)),
    MSG_NPC(2, (@@STRING:6471da789f09154e68b94ec5425daa850e07f4f3934c14ef35638acd7e509579@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(603),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    WAIT_FANFARE2(603),
    FANFARE_PLAY(206),
    { 0x3b, 0x17,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_NPC(2, (@@STRING:628e17abc3533a3f6e486011cad8da62eaabe45db60f603133e3acc8098d66ca@@)),
    MSG_NPC(2, (@@STRING:b491d42bed839e7b266562aed05ed7c9ec1dbcdace9f04822f359369fd23fc3c@@)),
    MSG_NPC(2, (@@STRING:c8f4e2621a2981442b642a5580595872ee526c86fb585b2eb1f0c2aa5a8bfe5e@@)),
    MSG_NPC(2, (@@STRING:f38f294983b2970cd3094b37a2a603975cd8c215877d24a66d7ab6e2b17d6642@@)),
    MSG_NPC(2, (@@STRING:59edd45ca7a4d212e5eaa9ff297b2cf6c25b360331f54a07ded0230f43cc064f@@)),
    MSG_NPC(2, (@@STRING:4886cc63121b2d2b86867e2755c1f9f4f36d36ceb019834f45bc9892321d3a87@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    SELECT_ENTITIES(-1, 1),
    WAIT(1),
    WAIT(15),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:38e6b701ffb92bf9f859ac61e43953a4805ce8830a7433b5d0ebb3f005e4ad4f@@)),
    MSG_NPC(3, (@@STRING:46a5be7b4335b27ed74725787181c4a68ebf0ada11d9573c9d44737f8e799641@@)),
    MSG_NPC(3, (@@STRING:d3d40ec6312a9d8f1fc60cc4b4c65784dc114ad887e1ca22928cd028799a2fb4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:d7f2c34621166944345963aa330411c70bf78200c4207a4753452d99b6879de1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_NPC(2, (@@STRING:e21de7be793bf64308a196daafda37a76f83615663a38303e54d1fa2890d6e35@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(603),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 2, RGB_U32(0x80, 0x80, 0x10)),
    WAIT_FANFARE2(603),
    FANFARE_PLAY(206),
    MSG_NPC(2, (@@STRING:d7fa167f5330eaca62aa631e939686c6a46ac10171d8ed100949bdbed91c1b5c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(9),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000041),
    MSG_NPC(4, (@@STRING:765a91dd8ab4b12577043f979bca002bc4afba302396ccd63a4609d4e271cf87@@)),
    MSG_NPC(4, (@@STRING:4ef99fa3196b7d4a096c9fe003c62223910eddc70299fde28aee46abd865e804@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(15),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:2c7bccd802e18cf6d61dd3f31c50fb703cc0f88e53c069c9d29271bb24db25e6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:33bbf94f718a80d06762f1810ac286e655c51c2971867d5e0c6f98d8f530d05f@@)),
    MSG_NPC(3, (@@STRING:6127df86cbc25121fea99a5b3df947b2627eb23cf4ed83a45a6fcf0cdfdd5fd5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ccabe375aca9a11b07ad92c57499e4ee9f6dd2f2a58787a78751b7d341dd7fb8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:82e6722a458bc486085f6b66ea421806b3284c1b20a1570dd379b9260b282936@@)),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:232cb81e35fab485be51fda8bf847580f996648badae2bf482c730df6e366bb4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:cc3719d1f0690038746ff4798676a8cafa0323c54281955d2eec0f7007987875@@)),
    MSG_NPC(3, (@@STRING:e8a30f28c0d40b9ede4e39cb6d3bec6374db00dce1da209dac731b162488f0aa@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    PORTRAIT_REP(0x0004, 0x00000041),
    MSG_NPC(4, (@@STRING:dd71d9d1fec22e8ef4eed0333973abe7268285b135e266730d62fd8ab76ba3e8@@)),
    MSG_NPC(4, (@@STRING:452e7937f628b1864860bf737dee3555e8f32cd99a0b714bb14bf3ed4d16a520@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:f8f91c1d0a91b772020868ef1ef31fdb4f5aaea1bb218f4fd0f5d39566b8ed6d@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    WAIT(30),
    { 0x3b, 0x18,  0x0000,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:7b626470026442c5c7978874973ca5d45c573dba8f8403e8b368b9d4b5f5cfd2@@)),
    CHOICE(/* label */  0, (@@STRING:e5b4158fa246c99386bbc5f943f4887ac2b3ac75150fd1e13dd84ace1bee0678@@)),
    CHOICE(/* label */  1, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(0), /* = 0x00 */
    RENAME_ALLY(-1),
  LABEL(1), /* = 0x01 */
    { 0x3b, 0x19,  0x0004,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(30),
    ALERT_CUE(8),
    ALERT_CUE(9),
    WAIT(10),
    PORTRAIT_REP(0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:d057a2288d650cd9264d8aec1faba05f4d4e51f72c96624df240ef3a262ce422@@)),
    MSG_NPC(4, (@@STRING:102f8818f1ddf96e780afc058373b8cd6ea4ad979031fe0a744d35516139bc38@@)),
    MSG_NPC(4, (@@STRING:03117d0a5957a89e63ca7d4ae3c0b5622db524b9ca26d77edb0eeeefb0fa81ef@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_NPC(2, (@@STRING:59f5068efa360363d2e8544f8df6c89463fa37c5e73c0d20c796852bd5285b36@@)),
    MSG_NPC(2, (@@STRING:a780e6261a24b10de84feaae25b2facc59b0901471a4228c2008e9a5bd2f2b32@@)),
    MSG_NPC(2, (@@STRING:e94036ffb6008e4c9b9d6e982e5a00283c67df2d266db8a78669110a63fcb4bd@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};

static const struct ScriptCommand s_gs1_g9_s0_lives1_dlg0[] = { /* 0x81408d0 */
    DEBUGINFO_O(2273),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(256, 19),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    WAIT(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(6),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g9_s0_lives2_dlg0[] = { /* 0x8140a10 */
    DEBUGINFO_O(2296),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    AWAIT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs1_g9_s0_lives2_dlg2[] = { /* 0x8140ae0 */
    DEBUGINFO_O(2312),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_SCENE_LT(SCENARIO_MAIN, 5, 4, /* to label */ 0),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    SCENARIO_CALC(SCENARIO_MAIN,  5,  4),
    CANCEL_LIVES(8, 0),
    SELECT_ENTITIES(8, 2),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g9_s1_lives0_dlg0[] = { /* 0x8140ba0 */
    DEBUGINFO_O(2327),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    WALK_GRID(384, 20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_START_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(8),
    { 0x89, 0x10,  0x0080,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(SMILE_START_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(8),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x88,  0x0100,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g9_s1_lives1_dlg0[] = { /* 0x8140dc0 */
    DEBUGINFO_O(2364),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    WALK_GRID(384, 21),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(9),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(7),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    AWAIT_CUE(9),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    CALL_SCRIPT(SMILE_START_FUNC),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(9),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(9),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x88,  0x0100,  0x00000006,  0x00000000, NULL },
    AWAIT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s0_station_sref_script[] = { /* 0x8140f60 */
    DEBUGINFO_O(2393),
    SELECT_ENTITIES(-1, 0),
    CANCEL_ENTITIES(8, 0),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 1),
    ALERT_CUE(5),
    AWAIT_CUE(3),
    SELECT_ENTITIES(-1, 2),
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    EXECUTE_FUNCTION(EVENT_M01E03A_L003),
    RET,
};

static const ScriptRef s_gs1_g10_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g10_s0_station_sref_script }; /* 0x8141040 */

static const struct ScriptCommand s_gs1_g10_s0_eff0_script[] = { /* 0x814104c */
    DEBUGINFO_O(2412),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x28,  0x0200,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0x28,  0x0200,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0x28,  0x0200,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0x20,  0x0300,  0x00000006,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0x30,  0x0200,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x88, 0x00,  0x0400,  0x00000059,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x88, 0x00,  0x0100,  0x0000005a,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x88, 0x00,  0x0100,  0x00000058,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WAIT(30),
    WALK_DIRECT(240, 27),
    AWAIT_CUE(4),
    { 0x89, 0x18,  0x0100,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x88, 0x00,  0x0180,  0x0000005b,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s0_lives2_dlg0[] = { /* 0x81412bc */
    DEBUGINFO_O(2454),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:2e5f5a61be1ad12e25c85cd6ec1a1b529787c64bdd3a18212e5fa9b555e42f51@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(120),
    ALERT_CUE(4),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 22),
    CMD_UNK_93(4, DIR_TRANS_11, 78),
    ALERT_CUE(6),
    WAIT(30),
    AWAIT_CUE(5),
    WAIT(15),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:6f9af36dcce74d742bc12c6913a8b592394c7a5eaa94f60a1b07a0f9f1b14f13@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:51461dab971b359c83eba3baf91cbb073a549ff232797649ac95fccca6e2861f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:ecfa4d46d7e83333d8caf08d33c0ad5d14659243ece9eafefae4c95e3c1b300c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:07e2a2dec58ed3ee8d719c51b0ca3de185281a8bd542ab8cad2f32691c6510e9@@)),
    VARIANT_DEFAULT((@@STRING:07e2a2dec58ed3ee8d719c51b0ca3de185281a8bd542ab8cad2f32691c6510e9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:1497bd2daf3f4099d65801b88bc1542d32a18bbbac2896393d52fb5dfe1bc73f@@)),
    MSG_NPC(4, (@@STRING:78b59eca4d7da74ae83a3893478d6c9f0424816a2ab110bbbd7ce999b089cb9c@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:5e461d0859487c03e531555eca3b2cd9d661cfec435c3016e30e068f291f2ebb@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(4),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    { 0x2e, 0x00,  0x0004, -0x00000002,  0x00000000, NULL },
    MSG_NPC(4, (@@STRING:d8cb874805b929461f5d7c708a92ed53aaea50a51cde09e717c612a18d14483f@@)),
    MSG_NPC(4, (@@STRING:34398e2a21d6799b5892700192fe52617628e876abbc19d119ce288c464aad82@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:3f07f8050f530c81e89e08254ea5ccfdaad745b7dc1e47825e43d1b0182149e2@@)),
    MSG_NPC(4, (@@STRING:da22579c603610612113db5a83b17a1f43e7ee4eeb0a8441ea09cdaeafd2a904@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(9),
    ALERT_CUE(6),
    MSG_NPC(-1, (@@STRING:706b8e2c37cc844965a0f62fc5068a7e9a7354c3fd147dc06c5be80eb8e87acd@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    WAIT(4),
    ALERT_CUE(4),
    ALERT_CUE(8),
    ALERT_CUE(7),
    ALERT_CUE(13),
    ALERT_CUE(14),
    WAIT(20),
    CMD_UNK_93(4, DIR_TRANS_11, 88),
    WAIT(1),
    ALERT_CUE(6),
    WAIT(1),
    ALERT_CUE(9),
    WAIT(70),
    ALERT_CUE(8),
    ALERT_CUE(13),
    ALERT_CUE(14),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:e9d79ca992ee99c4e372707ce393915ba6ce22a86a5e369b97827788fb429257@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:d16dcef492b743c50487e6ae986c5c15fd01d174b85d500109487030a3d3faff@@)),
    MSG_NPC(-1, (@@STRING:5e51fe83c438cfbc55e570a19e71425f488f9fac05ed47f16d6cc392573ae610@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    ALERT_CUE(7),
    ALERT_CUE(13),
    ALERT_CUE(14),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:a7b42277a4cc28ed6fef0120659c31dac1823b2f1555b9964d7476225fca28bf@@)),
    MSG_NPC(5, (@@STRING:a01126185d8b4c6528fb62808a38a8fd72c20168c53c0ceddaf8e04f3421138d@@)),
    MSG_NPC(5, (@@STRING:e567f02768eea246d347938361a3a769e018bd0339143b3552454e6275bb2091@@)),
    MSG_NPC(5, (@@STRING:923b033726170b6709781cdcdc969680e1306366e5ccf8b445f3c95f69b35083@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0003, 0x00000041),
    MSG_NPC(3, (@@STRING:b2143da8fef7f7d9abce55b4c5dc416d1c02dd800e2de03b3a16b717f31a88c1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(13),
    ALERT_CUE(14),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(13),
    ALERT_CUE(14),
    MSG_NPC(-1, (@@STRING:48dd161b776268894289fa65e4da1eb0f788e0aa8a08183701d0343b2d9dfeff@@)),
    MSG_NPC(-1, (@@STRING:bd2f124dfb1c2017a1fb78fe633c4f1c750a922ca3fdc9ce25515b18f6dfd611@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    BGM_FADEIN(80, 7),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:eb8063d9f9e466e224082702eabe8e31402f3fa3c4a8c274aab5df8c6e62e85d@@)),
    VARIANT_DEFAULT((@@STRING:eb8063d9f9e466e224082702eabe8e31402f3fa3c4a8c274aab5df8c6e62e85d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:f3a72c350f2f17e3257ad524576f58db166092fdd822598fb8baa7fee36ef840@@)),
    MSG_NPC(4, (@@STRING:bf282f28bb9933693e982d058aed3431b166757e897d10d55d78ab3245a6fb27@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(9),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(6),
    WAIT(20),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    { 0x2e, 0x00,  0x0004, -0x00000002,  0x00000000, NULL },
    MSG_NPC(4, (@@STRING:688a8a484802133d6bd1720970318abb2d5bd341b232ae86b910466a4c2a2c31@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:465a067daeaed9622d1032d9c368b678bae64560695d2c1b79f88030eb7f76fd@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:7e6730ac68f93be4f393d8a4f7a46caaee2cb75e55819df43df1bc5749374870@@)),
    MSG_NPC(4, (@@STRING:d923d640899b42cc40df80adfe3a94dc78b70b92a357ad269e7c50f58cc1f706@@)),
    MSG_NPC(4, (@@STRING:bd7f955f0c2da0d78a69be3677f6109539eab71cf7d773a1f636d6db2c012332@@)),
    MSG_NPC(4, (@@STRING:9cc59a8750e523c88fa6801ef6fd3608c21fe6374a6de46584ef82c1748d0c0b@@)),
    MSG_NPC(4, (@@STRING:8cdefdee2f68746cae774cdd6ce1fbcfcdc7925c0085a69bcbe90ec267813501@@)),
    TEXTBOX_CLEAR,
    WAIT(16),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:05dda2f5bebecd64360f2fe322dd422dab42528ad8adfd17d28dd1cc1f7ea4a5@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:2913ac84e95d6107b513179e6131deb37f54ced5226493c806d5eda13808564a@@)),
    MSG_NPC(5, (@@STRING:8156f12a508bdc2914b504028eb5568bc2a421993280dc589833946bdf725686@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    WAIT(1),
    ALERT_CUE(7),
    ALERT_CUE(4),
    ALERT_CUE(12),
    ALERT_CUE(11),
    ALERT_CUE(10),
    ALERT_CUE(13),
    ALERT_CUE(14),
    WAIT(46),
    MSG_OVERHEARD((@@STRING:7ae2d3d6a6335846610a76f147c641996d843dc0bc62ad0179551ff54203bb1b@@)),
    WAIT(60),
    MSG_OVERHEARD((@@STRING:c86b7632799d1bdda61568dd9ad5b60b913152c933fcc06621b1b8972d85ba7a@@)),
    WAIT(40),
    ROTATE_TO(10, DIR_TRANS_11, DIRECTION_EAST),
    ALERT_CUE(6),
    ALERT_CUE(9),
    WAIT(70),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(30),
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:2795351dd6072aabf8dab96c40ea82c65958341c629c593bca3ab32101bd9ec9@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(10),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(9),
    ALERT_CUE(7),
    WAIT(24),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:dd11190fe6f48992b8d31ca6df95d7ddf126c915c4ebfc2dedb94dcfe42bb341@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(12),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:73bb06364d681ba62ddee9931d9776a9a280a5f3ae6e8020a497bfbbf2df4d4a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:171fc535222cc7f40d4715e8a1e2d5b944789e4c63e2719ebf67eea2415193ac@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    WAIT(64),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:19213029b0dfdc3e722e8912d26882ca68e03140581b0b883ee25201ed97ba67@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    WAIT(94),
    WAIT(30),
    ALERT_CUE(9),
    BGM_FADEIN(60, 7),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:31e5c1ed5bee10a950c62e59d8f6950ca365c695eafa6ae3d8b863dd515ade18@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0001, 0x0000000b),
    MSG_NPC(1, (@@STRING:a0903c455c85f9a6a477d7b470b9cd67c59389911752ef75621ba06c3bf0ee2e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3c62f734d4fcaaed459d399b581c3dff5d8535479b3ada2265f1cb612e9900c1@@)),
    VARIANT(/* == */  1, (@@STRING:c74e1b62d80bb53b2c9aa9b84bb45cd1ac3c214f7da7ee9dcd0c8a06e259988e@@)),
    VARIANT(/* == */  3, (@@STRING:3c62f734d4fcaaed459d399b581c3dff5d8535479b3ada2265f1cb612e9900c1@@)),
    VARIANT(/* == */  3, (@@STRING:c74e1b62d80bb53b2c9aa9b84bb45cd1ac3c214f7da7ee9dcd0c8a06e259988e@@)),
    VARIANT_DEFAULT((@@STRING:3c62f734d4fcaaed459d399b581c3dff5d8535479b3ada2265f1cb612e9900c1@@)),
    VARIANT_DEFAULT((@@STRING:c74e1b62d80bb53b2c9aa9b84bb45cd1ac3c214f7da7ee9dcd0c8a06e259988e@@)),
    TEXTBOX_CLEAR,
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    { 0x2d, 0x00,  0x0005,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0005, 0x00000000),
    WAIT(32),
    MSG_NPC(-1, (@@STRING:e5c77e5e7ec5c0c3177eef87f41184a8fe976aaa6120157ebda8f08cd63cd89b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    AWAIT_CUE(5),
    BGM_FADEOUT(120),
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};

























static const struct ScriptCommand s_gs1_g10_s0_lives3_dlg0[] = { /* 0x8142cf4 */
    DEBUGINFO_O(2759),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 78),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    CAMERA_PAN(256, 23),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 78),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    WAIT(3),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 88),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 88),
    AWAIT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_90(32, DIR_TRANS_NONE, 28),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g10_s0_lives4_dlg0[] = { /* 0x8142f64 */
    DEBUGINFO_O(2801),
    SELECT_ANIMATION(3),
    { 0x2d, 0x07,  0x0009,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    AWAIT_CUE(14),
    CMD_UNK_93(4, DIR_TRANS_11, 88),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    AWAIT_CUE(14),
    CALL_SCRIPT(SHOCK_FUNC),
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    { 0x61, 0x00,  0x0400,  0x00000230,  0x00000108, NULL },
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(14),
    WAIT(150),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    HALT,
};

static const struct ScriptCommand s_gs1_g10_s0_lives5_dlg0[] = { /* 0x8143104 */
    DEBUGINFO_O(2830),
    SELECT_ANIMATION(3),
    { 0x2d, 0x07,  0x0009,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    AWAIT_CUE(14),
    WAIT(10),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    AWAIT_CUE(14),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(14),
    WAIT(150),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    HALT,
};

static const struct ScriptCommand s_gs1_g10_s0_lives6_dlg0[] = { /* 0x8143254 */
    DEBUGINFO_O(2854),
    SELECT_ANIMATION(3),
    { 0x2d, 0x07,  0x0008,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    AWAIT_CUE(13),
    CMD_UNK_93(4, DIR_TRANS_11, 88),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    AWAIT_CUE(13),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(65),
    ROTATE_TO(1, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    { 0x61, 0x00,  0x0400,  0x000001d0,  0x00000108, NULL },
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(13),
    WAIT(120),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    HALT,
};

static const struct ScriptCommand s_gs1_g10_s0_lives7_dlg0[] = { /* 0x81433e4 */
    DEBUGINFO_O(2882),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    AWAIT_CUE(7),
    AWAIT_CUE(7),
    AWAIT_CUE(7),
    { 0x89, 0x10,  0x0200,  0x00000006,  0x00000000, NULL },
    { 0x89, 0x10,  0x0100,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(13),
    ALERT_CUE(14),
    WAIT(48),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x89, 0x08,  0x0100,  0x00000003,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    WAIT(50),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    WAIT(70),
    { 0x89, 0x30,  0x0100,  0x00000002,  0x00000000, NULL },
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs1_g10_s0_lives8_dlg0[] = { /* 0x8143574 */
    DEBUGINFO_O(2910),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 88),
    AWAIT_CUE(8),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    FANFARE_STOP2(465),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    FANFARE_PLAY2(468),
    WAIT(48),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    WAIT(40),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    FANFARE_PLAY2(468),
    WAIT(40),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    FANFARE_PLAY2(468),
    WAIT(40),
    FANFARE_STOP2(468),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    WAIT(16),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WAIT(1),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(460, 24),
    WAIT(1),
    ALERT_CUE(7),
    WALK_GRID(460, 24),
    WAIT(32),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s0_lives9_dlg0[] = { /* 0x81437d4 */
    DEBUGINFO_O(2951),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 88),
    AWAIT_CUE(7),
    { 0x62, 0x00,  0x0100,  0x00000005,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(460, 25),
    AWAIT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s0_lives10_dlg0[] = { /* 0x8143884 */
    DEBUGINFO_O(2965),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 88),
    AWAIT_CUE(7),
    { 0x62, 0x00,  0x0100,  0x00000005,  0x00000000, NULL },
    AWAIT_CUE(7),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(460, 25),
    AWAIT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s0_lives11_dlg0[] = { /* 0x8143934 */
    DEBUGINFO_O(2979),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 4),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 85),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    AWAIT_CUE(9),
    WAIT(3),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(9),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 88),
    AWAIT_CUE(9),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 4),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 88),
    AWAIT_CUE(9),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(9),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    { 0x62, 0x00,  0x0100, -0x00000008, -0x00000008, NULL },
    AWAIT_CUE(9),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs1_g10_s1_lives0_dlg0[] = { /* 0x8143b44 */
    DEBUGINFO_O(3015),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 26),
    AWAIT_CUE(10),
    { 0x89, 0x0f,  0x0100,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WAIT(30),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_DIRECT(240, 27),
    AWAIT_CUE(10),
    FANFARE_PLAY2(466),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    WAIT(10),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(10),
    CMD_UNK_8E(16, DIR_TRANS_NONE, 89),
    WAIT(16),
    CMD_UNK_8E(16, DIR_TRANS_NONE, 90),
    WAIT(16),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WALK_DIRECT(128, 28),
    WAIT(128),
    AWAIT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s1_lives1_dlg0[] = { /* 0x8143d14 */
    DEBUGINFO_O(3047),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 29),
    AWAIT_CUE(11),
    WAIT(30),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_DIRECT(240, 30),
    AWAIT_CUE(11),
    WAIT(5),
    CMD_UNK_8E(16, DIR_TRANS_NONE, 88),
    WAIT(16),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    WAIT(5),
    FANFARE_STOP2(469),
    AWAIT_CUE(11),
    WALK_DIRECT(136, 31),
    WAIT(136),
    AWAIT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s1_lives2_dlg0[] = { /* 0x8143e74 */
    DEBUGINFO_O(3072),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    WALK_GRID(256, 32),
    AWAIT_CUE(12),
    WAIT(30),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_DIRECT(240, 33),
    AWAIT_CUE(12),
    CMD_UNK_8E(16, DIR_TRANS_NONE, 88),
    WAIT(16),
    AWAIT_CUE(12),
    WALK_DIRECT(136, 34),
    WAIT(136),
    AWAIT_CUE(3),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g10_s2_lives0_dlg0[] = { /* 0x8143f74 */
    DEBUGINFO_O(3091),
    SELECT_ANIMATION(2),
    { 0x2d, 0x01,  0x0005,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(4, DIR_TRANS_NONE, 0),
    AWAIT_CUE(10),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(10),
    SELECT_ANIMATION(24),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    WAIT(20),
    ALERT_CUE(5),
    WAIT(20),
    WALK_DIRECT(140, 35),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g11_s0_station_sref_script[] = { /* 0x8144064 */
    DEBUGINFO_O(3109),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g11_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g11_s0_station_sref_script }; /* 0x8144094 */

static const struct ScriptCommand s_gs1_g11_s0_lives0_dlg2[] = { /* 0x81440a0 */
    DEBUGINFO_O(3117),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives1_dlg2[] = { /* 0x8144100 */
    DEBUGINFO_O(3126),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives2_dlg2[] = { /* 0x8144160 */
    DEBUGINFO_O(3135),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives3_dlg2[] = { /* 0x81441c0 */
    DEBUGINFO_O(3144),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives4_dlg2[] = { /* 0x8144220 */
    DEBUGINFO_O(3153),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives5_dlg2[] = { /* 0x8144280 */
    DEBUGINFO_O(3162),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives6_dlg1[] = { /* 0x81442e0 */
    DEBUGINFO_O(3171),
    { 0x51, 0x00,  0x0024,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g11_s0_lives6_dlg2[] = { /* 0x8144320 */
    DEBUGINFO_O(3178),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x0000004d,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:67ed4dd06cf990de208baa5399c21289c05d5d40d108c63126dba6aceba11975@@)),
    MSG_NPC(1, (@@STRING:61ba7e6c82fb6ff515bc0f3dd53aed8011f87dd48ccae052bb15dde019733fcb@@)),
    MSG_NPC(1, (@@STRING:6655f10ad14a707b80c1040f7b4c1c1f2e49ea0478948e52b914180d5e8a0d43@@)),
    MSG_NPC(1, (@@STRING:c2885e898040679d75fffee7906332ecab67a004a6f39f3cb0fbb271d0c7dcaa@@)),
    MSG_NPC(1, (@@STRING:21cc268d7bcfec1413e2b0634530ebfe392eda8d6e3187d832e61f64529df6e9@@)),
    MSG_NPC(1, (@@STRING:de7a4f2deda9ffb8dba3f868755befca09efcffcb23bc6ac8ef3b95f91d7713d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives7_dlg1[] = { /* 0x8144578 */
    DEBUGINFO_O(3193),
    SELECT_ANIMATION(1),
    SET_DIR_WAIT(DIRECTION_WEST, 0),
    RET,
};

static const struct ScriptCommand s_gs1_g11_s0_lives7_dlg2[] = { /* 0x81445b8 */
    DEBUGINFO_O(3200),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:198edd35fa6db91635b96242faefabe6f96de7b494b0334440bf4b5cd9caec3d@@)),
    MSG_NPC(1, (@@STRING:e53a9589a842d52973cc68ff722e26d26464fded0d7226b19fe5d564801eb3ad@@)),
    MSG_NPC(1, (@@STRING:aa73ece6ce17268fe78c4ab4c00b6fa488e24a138266203a1781aa6ee9a3c2b4@@)),
    MSG_NPC(1, (@@STRING:4d25f3f34d12dba583a3e8514b3371b2693dc433ad8a29b9ec0af67a4bc12ad6@@)),
    MSG_NPC(1, (@@STRING:87c2986580acb8d0d78f85465af02614628ab877c4a200317a3b960fbd1b20f0@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:c8e0ad313d13a7687c2aadf66ded47190799f3fbc746d5be30842b40c6111ac5@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:8f841c088b6cb5957663d5a628cfab4cedc50a91eeceec17a6a04a554a2e4939@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g11_s0_lives7_dlg3[] = { /* 0x8144888 */
    DEBUGINFO_O(3219),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    CALL_SCRIPT(WAIT_END_TALK_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g11_s0_lives8_dlg2[] = { /* 0x8144938 */
    DEBUGINFO_O(3233),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:14bf0d0c7d2ff37a50357d43435257613eafb0c00e6f208f07b60c903bd00b0e@@)),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:171f3b7c227964bba7f867d357f2e76c4a40184b577c69ec395198426d4316cb@@)),
    CHOICE(/* label */  0, (@@STRING:8ef47e63a1eb22c64f6a071ce4830d67fcd9dbd1ee236561de81cddda19a602a@@)),
    CHOICE(/* label */  1, (@@STRING:c0fb5a7c1413af86f7ac28841884d3f059cdbdb5524c73116683030aa63b8bba@@)),
  LABEL(0), /* = 0x00 */
    MSG_NPC(1, (@@STRING:6aa6a752f2cb6411eee6ea469913ed5b381080ab4937c267d113877a1030b45d@@)),
    MSG_NPC(1, (@@STRING:375a6b9421c32d4d1bfe60093def2878047ae191d9f31c9ffe1f3a1fc8453729@@)),
    MSG_NPC(1, (@@STRING:7abe88824ac295b2eea4d6167f79d197d46d2bcd76dcfebee62cbe79e058175c@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    MSG_NPC(1, (@@STRING:caddd224d4880287d138f24e1174027c88ea98a9be26590c2498f0e6e63b31c9@@)),
    MSG_NPC(1, (@@STRING:04a5a34d5009b0323626b91300045ac3ed95d7924dd8b4ca4d6931e9093e71ed@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g12_s0_station_sref_script[] = { /* 0x8144bf0 */
    DEBUGINFO_O(3253),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    FANFARE_PLAY(0),
    FLASH_FROM(TRUE, PALUTIL_KIND_14, 30, RGB_U32(0x00, 0x00, 0x00)),
    AWAIT_CUE(3),
    FANFARE_STOP(0),
    FLASH_TO(TRUE, PALUTIL_KIND_14, 30, RGB_U32(0x00, 0x00, 0x00)),
    RET,
};

static const ScriptRef s_gs1_g12_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g12_s0_station_sref_script }; /* 0x8144c80 */

static const struct ScriptCommand s_gs1_g12_s0_lives0_dlg0[] = { /* 0x8144c8c */
    DEBUGINFO_O(3267),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0000, 0x00000041),
    MSG_NPC(0, (@@STRING:6f9af36dcce74d742bc12c6913a8b592394c7a5eaa94f60a1b07a0f9f1b14f13@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:51461dab971b359c83eba3baf91cbb073a549ff232797649ac95fccca6e2861f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(0, (@@STRING:ecfa4d46d7e83333d8caf08d33c0ad5d14659243ece9eafefae4c95e3c1b300c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs1_g12_s0_lives1_dlg0[] = { /* 0x8144d9c */
    DEBUGINFO_O(3290),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives2_dlg0[] = { /* 0x8144ddc */
    DEBUGINFO_O(3297),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives3_dlg0[] = { /* 0x8144e0c */
    DEBUGINFO_O(3303),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives4_dlg0[] = { /* 0x8144e3c */
    DEBUGINFO_O(3309),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives5_dlg0[] = { /* 0x8144e6c */
    DEBUGINFO_O(3315),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives6_dlg0[] = { /* 0x8144e9c */
    DEBUGINFO_O(3321),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives7_dlg0[] = { /* 0x8144ecc */
    DEBUGINFO_O(3327),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives8_dlg0[] = { /* 0x8144efc */
    DEBUGINFO_O(3333),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g12_s0_lives9_dlg0[] = { /* 0x8144f2c */
    DEBUGINFO_O(3339),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g13_s0_station_sref_script[] = { /* 0x8144f5c */
    DEBUGINFO_O(3345),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g13_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g13_s0_station_sref_script }; /* 0x8144f8c */

static const struct ScriptCommand s_gs1_g13_s0_lives0_dlg2[] = { /* 0x8144f98 */
    DEBUGINFO_O(3353),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g13_s0_lives1_dlg2[] = { /* 0x8144ff8 */
    DEBUGINFO_O(3362),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g13_s0_lives2_dlg2[] = { /* 0x8145058 */
    DEBUGINFO_O(3371),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g13_s0_lives3_dlg2[] = { /* 0x81450b8 */
    DEBUGINFO_O(3380),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g13_s0_lives4_dlg2[] = { /* 0x8145118 */
    DEBUGINFO_O(3389),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g13_s0_lives5_dlg2[] = { /* 0x8145178 */
    DEBUGINFO_O(3398),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g13_s0_lives6_dlg1[] = { /* 0x81451d8 */
    DEBUGINFO_O(3407),
    { 0x51, 0x00,  0x0026,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g13_s0_lives6_dlg2[] = { /* 0x8145218 */
    DEBUGINFO_O(3414),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ec23484094ad9cfc345501ce7c948e0b8e9fe63c74c47495c29fc8c042e0cd61@@)),
    MSG_NPC(1, (@@STRING:5d7d173894cdc2f274d5f19a857eacd163f2919144e705c6cfc34608cdbd17b3@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g13_s0_lives7_dlg1[] = { /* 0x81452e0 */
    DEBUGINFO_O(3424),
    { 0x51, 0x00,  0x0025,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_GIRL),
    RET,
};

static const struct ScriptCommand s_gs1_g13_s0_lives7_dlg2[] = { /* 0x8145320 */
    DEBUGINFO_O(3431),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:a11c0e7aad2c13a5c4079f1ec45ab8e80ff9bb6700c9eb79ac1baf8944e436ad@@)),
    MSG_NPC(1, (@@STRING:fd9f803008538e27e555ec2f138da9e62e6fdf1b893dc9e14bf4e538b7c53501@@)),
    MSG_NPC(1, (@@STRING:3e091fbe00e6995d2c02585f4db586b4924e949d501bb66bb4b492bc626242b8@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_station_sref_script[] = { /* 0x8145458 */
    DEBUGINFO_O(3442),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g14_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g14_s0_station_sref_script }; /* 0x8145488 */

static const struct ScriptCommand s_gs1_g14_s0_lives0_dlg2[] = { /* 0x8145494 */
    DEBUGINFO_O(3450),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives1_dlg2[] = { /* 0x81454f4 */
    DEBUGINFO_O(3459),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives2_dlg2[] = { /* 0x8145554 */
    DEBUGINFO_O(3468),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives3_dlg2[] = { /* 0x81455b4 */
    DEBUGINFO_O(3477),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives4_dlg2[] = { /* 0x8145614 */
    DEBUGINFO_O(3486),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives5_dlg2[] = { /* 0x8145674 */
    DEBUGINFO_O(3495),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives6_dlg1[] = { /* 0x81456d4 */
    DEBUGINFO_O(3504),
    { 0x51, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g14_s0_lives6_dlg2[] = { /* 0x8145714 */
    DEBUGINFO_O(3511),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:29e2ca50c4a29de466f345d6e494f0d64d3be844ffac0ff7ac97aaedcd559f74@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives7_dlg1[] = { /* 0x81457a4 */
    DEBUGINFO_O(3520),
    { 0x51, 0x00,  0x0027,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_GIRL),
    RET,
};

static const struct ScriptCommand s_gs1_g14_s0_lives7_dlg2[] = { /* 0x81457e4 */
    DEBUGINFO_O(3527),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:abd74cf2342b5b72b246abe87f5efe915238ea3f9094b9c9765300641478f6ed@@)),
    MSG_NPC(1, (@@STRING:d3243cf74796525d9917e949b7fc7e1d91eb88a3d502e9db813eaa1c8e87d0f0@@)),
    MSG_NPC(1, (@@STRING:f49113d410f5e2d4a0cae02f6b9c911e2a3e6a8c17520905751e7f4c24902dc9@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives8_dlg1[] = { /* 0x8145914 */
    DEBUGINFO_O(3538),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g14_s0_lives8_dlg2[] = { /* 0x8145944 */
    DEBUGINFO_O(3544),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000050,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000004e,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000001),
    MSG_NPC(2, (@@STRING:408ec1f6953112eb01379128a137c6f472e0e5cda92348cb32ec61e324d8695c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:7c9ba9256daf177337d12cdbd68650e8ef920f89bd6fae85686d7921603a2bd3@@)),
    MSG_NPC(3, (@@STRING:ebf91b186b3019f8a00e71bb4b1393d22ef49ab96b55942dd8adf051a843db39@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000001),
    MSG_NPC(3, (@@STRING:42a63e32ca0cff655e27f963e4428eacdb3a1f72a23e124172ef7de7374e1422@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives9_dlg1[] = { /* 0x8145ae4 */
    DEBUGINFO_O(3564),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g14_s0_lives9_dlg2[] = { /* 0x8145b14 */
    DEBUGINFO_O(3570),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000050,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000004e,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000001),
    MSG_NPC(2, (@@STRING:408ec1f6953112eb01379128a137c6f472e0e5cda92348cb32ec61e324d8695c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:7c9ba9256daf177337d12cdbd68650e8ef920f89bd6fae85686d7921603a2bd3@@)),
    MSG_NPC(3, (@@STRING:ebf91b186b3019f8a00e71bb4b1393d22ef49ab96b55942dd8adf051a843db39@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000001),
    MSG_NPC(3, (@@STRING:42a63e32ca0cff655e27f963e4428eacdb3a1f72a23e124172ef7de7374e1422@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g14_s0_lives10_dlg1[] = { /* 0x8145c24 */
    DEBUGINFO_O(3590),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g14_s0_lives10_dlg2[] = { /* 0x8145c54 */
    DEBUGINFO_O(3596),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000050,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000004e,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000001),
    MSG_NPC(2, (@@STRING:408ec1f6953112eb01379128a137c6f472e0e5cda92348cb32ec61e324d8695c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:7c9ba9256daf177337d12cdbd68650e8ef920f89bd6fae85686d7921603a2bd3@@)),
    MSG_NPC(3, (@@STRING:ebf91b186b3019f8a00e71bb4b1393d22ef49ab96b55942dd8adf051a843db39@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000001),
    MSG_NPC(3, (@@STRING:42a63e32ca0cff655e27f963e4428eacdb3a1f72a23e124172ef7de7374e1422@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_station_sref_script[] = { /* 0x8145d64 */
    DEBUGINFO_O(3616),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g15_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g15_s0_station_sref_script }; /* 0x8145d94 */

static const struct ScriptCommand s_gs1_g15_s0_lives0_dlg2[] = { /* 0x8145da0 */
    DEBUGINFO_O(3624),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives1_dlg2[] = { /* 0x8145e00 */
    DEBUGINFO_O(3633),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives2_dlg2[] = { /* 0x8145e60 */
    DEBUGINFO_O(3642),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives3_dlg2[] = { /* 0x8145ec0 */
    DEBUGINFO_O(3651),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives4_dlg2[] = { /* 0x8145f20 */
    DEBUGINFO_O(3660),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives5_dlg2[] = { /* 0x8145f80 */
    DEBUGINFO_O(3669),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives6_dlg1[] = { /* 0x8145fe0 */
    DEBUGINFO_O(3678),
    { 0x51, 0x00,  0x0029,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g15_s0_lives6_dlg2[] = { /* 0x8146020 */
    DEBUGINFO_O(3685),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x0000004d,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:3cb373884d8a9dd7c66e6d51aa7b1f083250e6ca1ebcbe96e604ad7e729f2d21@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives7_dlg1[] = { /* 0x81460d8 */
    DEBUGINFO_O(3695),
    { 0x51, 0x00,  0x002a,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g15_s0_lives7_dlg2[] = { /* 0x8146118 */
    DEBUGINFO_O(3702),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x0000004f,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:0408ba42d6ecad5822b064298917566ae9fbd38a8706fe63eb2786f80282bf10@@)),
    MSG_NPC(1, (@@STRING:d546a3f92304696f28b207b1fd9b90dc1fbdb8b9896a62d64c181ac2420db43e@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives8_dlg2[] = { /* 0x8146204 */
    DEBUGINFO_O(3713),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:0a02f5cb986ce736e5f6814b2ce5101b72800f1018ef019ece31c6c1ab2d21b6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g15_s0_lives9_dlg2[] = { /* 0x8146288 */
    DEBUGINFO_O(3722),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:26fa555e1141591aed8c6ae093a10d6303384076c2efc98617c51ac4f99ff1bb@@)),
    MSG_NPC(1, (@@STRING:a3585126196af2bf0eba5a50426096c947e52c0400a95d211be9c0129b231d2a@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g16_s0_station_sref_script[] = { /* 0x8146350 */
    DEBUGINFO_O(3732),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g16_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g16_s0_station_sref_script }; /* 0x8146380 */

static const struct ScriptCommand s_gs1_g16_s0_lives0_dlg2[] = { /* 0x814638c */
    DEBUGINFO_O(3740),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g16_s0_lives1_dlg2[] = { /* 0x81463ec */
    DEBUGINFO_O(3749),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g16_s0_lives2_dlg2[] = { /* 0x814644c */
    DEBUGINFO_O(3758),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g16_s0_lives3_dlg2[] = { /* 0x81464ac */
    DEBUGINFO_O(3767),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g16_s0_lives4_dlg2[] = { /* 0x814650c */
    DEBUGINFO_O(3776),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g16_s0_lives5_dlg2[] = { /* 0x814656c */
    DEBUGINFO_O(3785),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g16_s0_evt0_sref_script[] = { /* 0x81465cc */
    DEBUGINFO_O(3794),
    EXECUTE_STATION(-1, 17, 0),
    HALT,
};

static const ScriptRef s_gs1_g16_s0_evt0_sref = { NORMAL_EVENT, SCRIPT_TYPE_07, NULL, s_gs1_g16_s0_evt0_sref_script }; /* 0x81465fc */

static const struct ScriptCommand s_gs1_g17_s0_station_sref_script[] = { /* 0x8146608 */
    DEBUGINFO_O(3802),
    SELECT_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    SELECT_ENTITIES(18, 0),
    CANCEL_ENTITIES(16, 0),
    SCENARIO_CALC(SCENARIO_MAIN,  9,  4),
    RET,
};

static const ScriptRef s_gs1_g17_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g17_s0_station_sref_script }; /* 0x8146678 */

static const struct ScriptCommand s_gs1_g17_s0_eff0_script[] = { /* 0x8146684 */
    DEBUGINFO_O(3814),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0180,  0x00000000,  0x00000000, NULL },
    WAIT(20),
    CAMERA_END_PAN,
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g17_s0_lives0_dlg0[] = { /* 0x8146704 */
    DEBUGINFO_O(3825),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0005,  0x00000062,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0006,  0x00000063,  0x00000000, NULL },
    WAIT(30),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 4),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:20ca255d8675259f49b3fab009dbb5418412d32873952b5b855ac3b352645c2a@@)),
    VARIANT_DEFAULT((@@STRING:88d2e1900c35075493f4e5d6a52047dde9ed9617d406db7088477e6c71dd6a37@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(4),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:9ee9b5afe011ae9f13df823bba2f8e02f2c5a674d4d6cbc3161dd4502f428237@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:2223180699776690a6c6d13071144267f9f2608e2162a8591043612e1b5c945e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:85e95545136bf340b56fb166df8e69049ec7aa98955c4fd7d271a201727a1f1b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    WALK_GRID(256, 45),
    WALK_GRID(256, 43),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:07e2a2dec58ed3ee8d719c51b0ca3de185281a8bd542ab8cad2f32691c6510e9@@)),
    VARIANT_DEFAULT((@@STRING:73bb06364d681ba62ddee9931d9776a9a280a5f3ae6e8020a497bfbbf2df4d4a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:858ef3a45385d34ba8feae4237f0532e51607b5d1d6d262583a67145da89bcc7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    WALK_RELATIVE(256, 16, 0),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:d590cebf8720b32392e57b39d222727ad3dc9e3d1e8d1b381e9c7e0677689375@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    MSG_NPC(2, (@@STRING:8181a149507616ef18f34715068e2aa05c6caf6a530d84a6c3533a3ae37c93ea@@)),
    MSG_NPC(2, (@@STRING:283017fdbb15cdf86f39e87ed691ef8756ce08bdc01066f60c1ed44047b15a41@@)),
    MSG_NPC(2, (@@STRING:87541b213e669f3163bf3073a363f43bc7645a93e3da8960fb384ef2148650d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:837fb98e078b810f286ca29bc799f9fa67dd39579dd636dd20552cf883de5fee@@)),
    ALERT_CUE(6),
    MSG_NPC(4, (@@STRING:779c28566aafa03c3063351f875dc19b7a686f4163c254aa6918f2ec00d8e90a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:36ddc7629feafd9e0747318a9ae2f60734c1172958f76befcc686323f42a7519@@)),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    MSG_NPC(3, (@@STRING:41fa7070c0a2b7b4a915adc081af1cc93b0ebd9cc41fd29d69568aa9bd07af25@@)),
    MSG_NPC(3, (@@STRING:b064ea69b72ed2b199bca481b8c028a7b18ff84e25c1cf695f55ba129cf37c8e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:44a2f83346670b50b45a0a996fc9623cb25b527a12769435b4fed8e024ac913b@@)),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    MSG_NPC(2, (@@STRING:d52b4139cd27e38f312767a52eeed9514d664c0b1c30aa2c7fc96672f969f171@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:f4e6e358622d5661ea25929397a7970097087f5060d4bcff36b1a35e9194531f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(60),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:0bacd846fb57af60d71a56048916942a44bf6b208cf096d9daee24caff80d01d@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(3),
    RET,
};

static const struct ScriptCommand s_gs1_g17_s0_lives1_dlg0[] = { /* 0x8147160 */
    DEBUGINFO_O(3932),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(464),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    WALK_GRID(256, 44),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 16, 0),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    WAIT(20),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g17_s0_lives2_dlg0[] = { /* 0x8147330 */
    DEBUGINFO_O(3964),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    WAIT(30),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(7),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs1_g17_s0_lives3_dlg0[] = { /* 0x81474c0 */
    DEBUGINFO_O(3992),
    SELECT_ANIMATION(2),
    SET_DIR_WAIT(DIRECTION_SOUTHWEST, 1),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g17_s0_lives4_dlg0[] = { /* 0x8147590 */
    DEBUGINFO_O(4008),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g18_s0_station_sref_script[] = { /* 0x8147620 */
    DEBUGINFO_O(4020),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g18_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g18_s0_station_sref_script }; /* 0x8147650 */

static const struct ScriptCommand s_gs1_g18_s0_lives0_dlg2[] = { /* 0x814765c */
    DEBUGINFO_O(4028),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives1_dlg2[] = { /* 0x81476bc */
    DEBUGINFO_O(4037),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives2_dlg2[] = { /* 0x814771c */
    DEBUGINFO_O(4046),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives3_dlg2[] = { /* 0x814777c */
    DEBUGINFO_O(4055),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives4_dlg2[] = { /* 0x81477dc */
    DEBUGINFO_O(4064),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives5_dlg2[] = { /* 0x814783c */
    DEBUGINFO_O(4073),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives6_dlg2[] = { /* 0x814789c */
    DEBUGINFO_O(4082),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:a6b069d6c4f4e0d5bb243b68eb0c38af06e221cd8d6159aecc27280730b5b8f2@@)),
    MSG_NPC(1, (@@STRING:d15f8a345375dce44cc679531a38075352fb8898860502cdf0deb9e9d7a5dfe0@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives7_dlg2[] = { /* 0x8147968 */
    DEBUGINFO_O(4092),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:e0b37a9286fcb7c85b252c894bd9cf56d08b6af492ebab0d75f951bd260c5047@@)),
    MSG_NPC(1, (@@STRING:eca5352e2f76ea9e0f74e650d0a51249a924dbdea01f80a931aa0681ae93226d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g18_s0_lives8_dlg2[] = { /* 0x8147a08 */
    DEBUGINFO_O(4102),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:d9e87ccf1f0e06e082fac26f2c06cd0ae2a07fd5ad74104b7dac5770db659ae0@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g19_s0_station_sref_script[] = { /* 0x8147a68 */
    DEBUGINFO_O(4111),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    BGM_FADEOUT(45),
    { 0x23, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    EXECUTE_FUNCTION(EVENT_M01E05B_L005),
    HALT,
};

static const ScriptRef s_gs1_g19_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g19_s0_station_sref_script }; /* 0x8147ae8 */

static const struct ScriptCommand s_gs1_g19_s0_lives0_dlg0[] = { /* 0x8147af4 */
    DEBUGINFO_O(4124),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WAIT(1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:497ffd22210acf621e573432409fa256cdae6862f1754126b799d5f106491b0a@@)),
    VARIANT_DEFAULT((@@STRING:497ffd22210acf621e573432409fa256cdae6862f1754126b799d5f106491b0a@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3eb50e0f51f330c3d41595073eca56ffa9ec98fb2002e096392c4c8e59999196@@)),
    VARIANT_DEFAULT((@@STRING:3eb50e0f51f330c3d41595073eca56ffa9ec98fb2002e096392c4c8e59999196@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    ALERT_CUE(3),
    HALT,
};

static const struct ScriptCommand s_gs1_g19_s0_lives1_dlg0[] = { /* 0x8147cf0 */
    DEBUGINFO_O(4148),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(8, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs1_g20_s0_station_sref_script[] = { /* 0x8147d50 */
    DEBUGINFO_O(4157),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_STOP,
    ALERT_CUE(4),
    { 0x22, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    { 0x23, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(4, 0),
    AWAIT_CUE(3),
    { 0x22, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    { 0x23, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(4, 0),
    AWAIT_CUE(3),
    { 0x22, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    ALERT_CUE(6),
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs1_g20_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g20_s0_station_sref_script }; /* 0x8147ea0 */

static const struct ScriptCommand s_gs1_g20_s0_eff0_script[] = { /* 0x8147eac */
    DEBUGINFO_O(4183),
    WARP_WAYPOINT(0, 46),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_DIRECT(180, 47),
    AWAIT_CUE(4),
    CMD_UNK_E5(3, 0),
    WARP_WAYPOINT(0, 48),
    { 0x6c, 0xb4,  0x0100,  0x00000031,  0x00000000, NULL },
    AWAIT_CUE(4),
    CMD_UNK_E5(3, 0),
    WARP_WAYPOINT(0, 50),
    { 0x62, 0x00,  0x0100, -0x00000050,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g20_s0_lives0_dlg0[] = { /* 0x8147f8c */
    DEBUGINFO_O(4200),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(5),
    WALK_RELATIVE(128, 80, 0),
    ALERT_CUE(6),
    FANFARE_PLAY2(469),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:45ee416aff4784042dbd04adaf001ca180eaddd77c880605df52f29dbd7a52b5@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(6),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:24883106ffd05981341e488253bc0e9c68df2e046a05e69dc257dbea767c957a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:84488192f192c494bd24b4fb3dfbfe4516da17977196e6f61b3e2edcb6a107c4@@)),
    MSG_NPC(1, (@@STRING:1cc2745504541d675c61b1aac1f6774d350f73e7d5dabceec441fd3616cbc95c@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(3),
    ALERT_CUE(6),
    WALK_RELATIVE(256, 120, 0),
    HALT,
};


static const struct ScriptCommand s_gs1_g20_s0_lives1_dlg0[] = { /* 0x81481f8 */
    DEBUGINFO_O(4235),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(128, 80, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 72, 0),
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(15),
    ROTATE_TO(5, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(15),
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 120, 0),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs1_g21_s0_station_sref_script[] = { /* 0x8148378 */
    DEBUGINFO_O(4262),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_STOP,
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs1_g21_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g21_s0_station_sref_script }; /* 0x81483f8 */

static const struct ScriptCommand s_gs1_g21_s0_eff0_script[] = { /* 0x8148404 */
    DEBUGINFO_O(4275),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_RELATIVE(256, 34, 0),
    AWAIT_CUE(4),
    WAIT(30),
    WALK_GRID(512, 51),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_DIRECT(5, 58),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g21_s0_lives0_dlg0[] = { /* 0x81484d4 */
    DEBUGINFO_O(4291),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0007,  0x00000061,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0008,  0x00000052,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_RELATIVE(256, 70, 0),
    WAIT(30),
    FANFARE_PLAY2(464),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6d19d9af7f3a8987e671ffc082b80f58aa1e1445e92c45a13a2f7f83f257ea19@@)),
    VARIANT_DEFAULT((@@STRING:6d19d9af7f3a8987e671ffc082b80f58aa1e1445e92c45a13a2f7f83f257ea19@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:07e2a2dec58ed3ee8d719c51b0ca3de185281a8bd542ab8cad2f32691c6510e9@@)),
    VARIANT_DEFAULT((@@STRING:07e2a2dec58ed3ee8d719c51b0ca3de185281a8bd542ab8cad2f32691c6510e9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000001),
    MSG_NPC(5, (@@STRING:35c26e4a0c2b4355e2f770f632782f057f1a4c0f48f38310035c64bd8d6a09d2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6a913597240b171d005d1ed2b522aec836fd55075de5cab89571d43daa53f57d@@)),
    VARIANT_DEFAULT((@@STRING:6a913597240b171d005d1ed2b522aec836fd55075de5cab89571d43daa53f57d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:7a81a7954b60df61198d39d7787e764d9cdfe2b4a731228887c5d592e72ea640@@)),
    MSG_NPC(5, (@@STRING:e14181dbff9cd77c5e2e55076a1254f9ba953ef23d51671c22fc2f1ec51552b2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:778462106296c05fb1e38be3427b89ae22b93e1cd0a915a7b2b33c7b108591e9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    ALERT_CUE(6),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(5, DIR_TRANS_10, 54),
    MSG_NPC(1, (@@STRING:7ad596e931faf6b71ae1ff1a42854aef928d03d085fba33a7ead55f9b052bea1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(10),
    CMD_UNK_93(10, DIR_TRANS_10, 54),
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:3b7cd2673c7ac97deaffedfbf617f207b707f66c09071fa45d9e12b218ea9cbd@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:2aebd76ee5c07519ffdd3812c4d4dbc236cd50061c456d8101ac023bd43f5ce5@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:052afe127b23601452f6ffd434870e34378f985ccb34c94e02283e6afed239d0@@)),
    MSG_NPC(6, (@@STRING:fe28563518e17de2f76422ad84f7037240b81e24b4a7324976a70b5808342c87@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(11),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d3ba79a603742bdbbc9884bb77087d153aea81f00fd231e5765f0adffb823df0@@)),
    VARIANT_DEFAULT((@@STRING:2c124b66a26aea99d58418fd8d593d767e911ae7129c93e54e3e27d7a60ba2f4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:53e1617275539677e7cc44b6a6d5b2b310bf022224cae5d80dcf42d528aee6e2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(10),
    ALERT_CUE(11),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    WAIT(15),
    ALERT_CUE(4),
    WAIT(30),
    ALERT_CUE(7),
    ALERT_CUE(11),
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(10),
    WAIT(10),
    ALERT_CUE(6),
    WALK_DIRECT(150, 55),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    WAIT(30),
    FANFARE_PLAY2(473),
    ALERT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:0b1bfe29a775f19e433f6206d9d4ae788355ab6b502a9d5e434dedf4bab4d514@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    BGM_SWITCH(MUS_RISING_FEAR),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:1d695750008a320b9a13eddbba6849f5b941565c0779bdcfb37325ed55ccb473@@)),
    MSG_NPC(2, (@@STRING:0dd6cf77e80937129b181e2a390932599aa602eba5dc8ef5226ee305f93a4943@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:289553151636ad3ce9a5b47a57d2c1dfa18b9303dfd0c3bc940da993d93fa5ae@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:13d4c47e44adc86f1fb724fed6f9ee7b089f6685a750efe7a8687a29d5719f31@@)),
    PORTRAIT_REP(0x0002, 0x00000004),
    MSG_NPC(2, (@@STRING:ccc793ddb8e9546a760ded96c3cf6fa92f7013cf1e226f9b624db5c57a6ae3a4@@)),
    PORTRAIT_REP(0x0002, 0x00000006),
    MSG_NPC(2, (@@STRING:92e77cef8b2c825e38522eadefa15b0435324dbbd0cc65a582f32432271cda39@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    CALL_LABEL(15),
    FANFARE_PLAY2(464),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(5, DIR_TRANS_10, 34),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:185a9a90e3a49ef85fc0722d13149c19f6e3b2a4ed2eae6b862cc66b79fdf87c@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:5a41fde5b17a08e1dfc2537c1a2892b9d51449ca7c89f4e980c5d84fa4685837@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT_REP(0x0002, 0x00000004),
    MSG_NPC(2, (@@STRING:cf9b503a379d638f96e9f0824b204a3f4b51c620b413a6de72fa27aa558ebbf6@@)),
    MSG_NPC(2, (@@STRING:db8bda8d38a59dd06bcd7c0e4b8d4f776f7e06a2bb3efe805277eb70a62d4a8a@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:fcc98a41959f11583a188d63a479e60a5a5ca938c1c595579c3549399715ec81@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:364c5f852ec6babf38eb0fe9d55c75d0ad74860f9f45d115936b74d898c18ee1@@)),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000004),
    MSG_NPC(2, (@@STRING:144b855282efff3346a29f6c048b8ef786fa46914d8f18f116221c237de4cdf7@@)),
    MSG_NPC(2, (@@STRING:3281ff6818003eb8ad198ef08641dda259608c0d63fa4242e58884551be2c495@@)),
    MSG_NPC(2, (@@STRING:c2f62dc9bd4e308a3c7560cce64f2606fd75ea7768b3744dc0cbe75b7b054170@@)),
    PORTRAIT_REP(0x0002, 0x00000006),
    MSG_NPC(2, (@@STRING:f7e96c25ff54024c04d38f2c1ed1ecdac50292e524448e07b915220de9c96497@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    CALL_LABEL(15),
    FANFARE_PLAY2(473),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    MSG_NPC(4, (@@STRING:037c3e58ff8343adf9596be5c16337289429263dede2fc96a26628d107e4442c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0005, 0x00000001),
    MSG_NPC(5, (@@STRING:1d428d3b0f4aef79ee667b41a900e450a51b6aa61de9403be3dca5662087af2d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(6, (@@STRING:7bb9a0cd6518f845dd79eb2239d04d7daf981e228e805bc0973c41f53edfd791@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3b9a84c2aea17a17a7612748a8189e8b60385dd6387caca0be57a3823d327b5f@@)),
    VARIANT_DEFAULT((@@STRING:3b9a84c2aea17a17a7612748a8189e8b60385dd6387caca0be57a3823d327b5f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:f7465e81041bd34cec66bb5260c531a183c3c0286158b3ed88b268b3efe05e34@@)),
    MSG_NPC(2, (@@STRING:e9fd7b77de55d4930bfcc1906304d745df8b332e608293466514cd6e9bc10d25@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(16),
    ALERT_CUE(17),
    FANFARE_PLAY2(465),
    WAIT(60),
    MSG_NPC(6, (@@STRING:80eb54bd6e7f6d9fc2bff6edcd827583e16bc6d67063b01ed5f694b9c213ce5f@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    MSG_NPC(2, (@@STRING:7408cff12852106ef009c4c094d04452431360557c7b8b6fd4acd77ad46b2352@@)),
    MSG_NPC(2, (@@STRING:8cf3a1f5c8799c15465ed2009cd30c0eb8a832ff3c3f260a7f40f3245f9c041e@@)),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:7ef13a9be9964ff22da77087538a5f37a004376fa01d0b38d2e659fd84effb48@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    WAIT(15),
    CMD_UNK_E5(9, 0),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:c138e182e9e91fb6a6afb9b81e156b62dd4fc7b260e6c62a407e315e22fc5eda@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_BOTTOM, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:bc260fde297d2461165cc2a230a4db4f0356db818608e2af3191f6c1707aefa2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:59ec3d42a2d112fbc0dbb95dd4cf2b3f025b9f139444e0531c9e16671f1f3835@@)),
    ALERT_CUE(9),
    ALERT_CUE(11),
    PORTRAIT_REP(0x0002, 0x00000004),
    MSG_NPC(2, (@@STRING:e93bbed0a1dfbfc163230ef3eb0311a157a21cd2ebee7705c268b376efd8d61e@@)),
    TEXTBOX_CLEAR,
    BGM_STOP,
    ALERT_CUE(7),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:21adea87d7bcd7c0ae2305d18dc5142e1403df3a83ce7b9331467f9ef8231143@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    CALL_LABEL(15),
    FANFARE_PLAY2(473),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    CLEAR_ARRAY(EVENT_LOCAL),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:f49630f66ce2e5acbe65254e5cfc108747b37b09e778794fab3e20e98106222f@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    MSG_NPC(5, (@@STRING:1c02b056e0885d4d483a9a0f912d5879466b14b390021a06d7495cc2580ce428@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:7df9de54a2c8b8826423f23c880b1ccd47dcbb9f64a46845c89f30d95fb5c3e4@@)),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_THERES_TROUBLE),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:332abf15ca95b618c56baa7dc4eff60538d0c269a02be6f732af16279a5aee26@@)),
    VARIANT_DEFAULT((@@STRING:004c07c55e481b4611881169d134c4cd7e33eafc13ee334f82880fadfc99a4ee@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(11),
    ALERT_CUE(6),
    MSG_NPC(6, (@@STRING:6560be819156ac30772a26143f929a2e78c7f3f49f16bbe18103d541c6eda65b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(6, (@@STRING:2f167ab45788e1920135e8931c9958a64c82dac5fbe3fa52f40979ca5678b076@@)),
    { 0x2e, 0x15,  0x0006, -0x00000002,  0x00000000, NULL },
    ASK3(FALSE, /*default*/ -1, /* speaker */ 6, (@@STRING:cbb310c62c04cde0de30348d8fc28d1b36ca1eaaf693bdf458de4113560f4597@@)),
    CHOICE(/* label */ 35, (@@STRING:ed3adfbbb2cfd173449309732340e1908f880aef019222c73d84a697ef7d95f8@@)),
    CHOICE(/* label */ 35, (@@STRING:ed3adfbbb2cfd173449309732340e1908f880aef019222c73d84a697ef7d95f8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
  LABEL(35), /* = 0x23 */
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:70cbe3be9d4b7225edfff7f1a4e0b8c4ab0b6460770bebe2e5bb9b7e3af36070@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:70cbe3be9d4b7225edfff7f1a4e0b8c4ab0b6460770bebe2e5bb9b7e3af36070@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:fd6d8b0bd9528f2aa0ef05af1cb5e111971d491838e955a1162cefd9685de2a3@@)),
    AWAIT_CUE(5),
    WAIT(15),
    ALERT_CUE(7),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:f544218850e305a8a54eb4a1c68d2d672ad9bf4800a6797be728f45a979f3760@@)),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    CALL_LABEL(15),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    WAIT(60),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:5e836596c9f4e7eb5cd5a51d3dc367843b920be028a6c2231e1a6fe2b8750156@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    CALL_LABEL(15),
    WAIT(60),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    CALL_LABEL(15),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:037c3e58ff8343adf9596be5c16337289429263dede2fc96a26628d107e4442c@@)),
    VARIANT(/* == */  1, (@@STRING:262f0517c536b775b12a1520536f119c54d6db1e8513dca0b18f8e2f2fdcf6e3@@)),
    VARIANT_DEFAULT((@@STRING:037c3e58ff8343adf9596be5c16337289429263dede2fc96a26628d107e4442c@@)),
    VARIANT_DEFAULT((@@STRING:262f0517c536b775b12a1520536f119c54d6db1e8513dca0b18f8e2f2fdcf6e3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(5, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(15),
    ROTATE_TO(5, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(15),
    ROTATE_TO(5, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    { 0x62, 0x00,  0x004c, -0x00000008,  0x00000000, NULL },
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:3916a00d7502cbd4511fba4c0cfce48f5117df738b76327e9c557f10b478aef3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    WAIT(20),
    ALERT_CUE(8),
    ALERT_CUE(6),
    SET_DIR_WAIT(DIRECTION_SOUTHEAST, 0),
    FANFARE_PLAY2(497),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000008, -0x00000008, NULL },
    WAIT(60),
    SELECT_ANIMATION(2),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b41e65ebef9efc3955afaf79b130eaf0a5ef72ba7832deb04d8f10136b5b2de9@@)),
    VARIANT_DEFAULT((@@STRING:b41e65ebef9efc3955afaf79b130eaf0a5ef72ba7832deb04d8f10136b5b2de9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:c2b43774b1758821842b7a4c2e738e9332405da1562bc7d33eaeec4003917d73@@)),
    TEXTBOX_CLEAR,
    CMD_UNK_E5(6, 0),
    CMD_UNK_93(2, DIR_TRANS_10, 34),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(7),
    CALL_LABEL(15),
    WAIT(15),
    CMD_UNK_E5(8, 0),
    WALK_RELATIVE(768, -120, 0),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:9c5b4dd95903c6cea8799eadcf215e398d0eb9dd33b62e48508e86cd63c73b1a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
  LABEL(15), /* = 0x0f */
    ALERT_CUE(12),
    ALERT_CUE(13),
    ALERT_CUE(14),
    ALERT_CUE(15),
    ALERT_CUE(16),
    ALERT_CUE(17),
    RET_DIRECT,
    HALT,
};








































static const struct ScriptCommand s_gs1_g21_s0_lives1_dlg0[] = { /* 0x814a970 */
    DEBUGINFO_O(4726),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    WALK_RELATIVE(256, 80, 0),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 24, 0),
    WAIT(15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    CMD_UNK_93(10, DIR_TRANS_10, 91),
    AWAIT_CUE(6),
    WALK_DIRECT(150, 54),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(6),
    AWAIT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(6),
  LABEL(0), /* = 0x00 */
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    WAIT(15),
    WALK_RELATIVE(256, 16, 0),
    CMD_UNK_93(5, DIR_TRANS_10, 80),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    SELECT_ANIMATION(4),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    { 0x62, 0x00,  0x004c, -0x00000008, -0x00000008, NULL },
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    ROTATE_TO(2, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    WAIT(15),
    { 0x62, 0x00,  0x004c, -0x00000008,  0x00000008, NULL },
    AWAIT_CUE(6),
    CMD_UNK_93(2, DIR_TRANS_10, 0),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    CALL_SCRIPT(SHOCK_FUNC),
    WALK_GRID(512, 55),
    ROTATE_TO(2, DIR_TRANS_10, DIRECTION_EAST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    ROTATE_TO(2, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(15),
    WALK_RELATIVE(768, -120, 0),
    HALT,
};

static const struct ScriptCommand s_gs1_g21_s0_lives2_dlg0[] = { /* 0x814aee0 */
    DEBUGINFO_O(4816),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_START_FUNC),
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(7),
    CMD_UNK_93(5, DIR_TRANS_10, 77),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_SOUTH),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    SELECT_ANIMATION(2),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_START_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    ROTATE_TO(6, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(6, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(15),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_SOUTH),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    CALL_SCRIPT(SMILE_START_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_END_FUNC),
    SET_DIR_WAIT(DIRECTION_SOUTH, 0),
    { 0x62, 0x00,  0x004c,  0x00000000, -0x00000010, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(7),
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_WEST),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs1_g21_s0_lives3_dlg0[] = { /* 0x814b1e0 */
    DEBUGINFO_O(4867),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WALK_GRID(256, 61),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(10, DIR_TRANS_10, 91),
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WALK_GRID(128, 62),
    WALK_GRID(128, 53),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(8),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(4),
    COND_EQUAL(0, /* to label */ 2),
    COND_EQUAL(1, /* to label */ 3),
    COND_EQUAL(2, /* to label */ 4),
    COND_EQUAL(3, /* to label */ 5),
  LABEL(2), /* = 0x02 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTH),
    JUMP_LABEL(6),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTHEAST),
    JUMP_LABEL(6),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTHWEST),
    JUMP_LABEL(6),
  LABEL(5), /* = 0x05 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_EAST),
    JUMP_LABEL(6),
  LABEL(6), /* = 0x06 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(8),
    AWAIT_CUE(8),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(8),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(8),
    SET_DIR_WAIT(DIRECTION_NORTHEAST, 0),
    { 0x62, 0x00,  0x0080, -0x00000010,  0x00000010, NULL },
    WAIT(30),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(8),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g21_s0_lives4_dlg0[] = { /* 0x814b6a0 */
    DEBUGINFO_O(4946),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(9),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(4),
    COND_EQUAL(0, /* to label */ 3),
    COND_EQUAL(1, /* to label */ 4),
    COND_EQUAL(2, /* to label */ 5),
    COND_EQUAL(3, /* to label */ 6),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTH),
    JUMP_LABEL(7),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    JUMP_LABEL(7),
  LABEL(5), /* = 0x05 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTHWEST),
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_WEST),
    JUMP_LABEL(7),
  LABEL(7), /* = 0x07 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(9),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(9),
    CMD_UNK_93(5, DIR_TRANS_10, 80),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(9),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(9),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(9),
    WALK_GRID(128, 57),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(9),
    WALK_DIRECT(30, 55),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x000c,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x62, 0x00,  0x0080,  0x00000018,  0x00000000, NULL },
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    AWAIT_CUE(9),
    { 0x62, 0x00,  0x004c,  0x00000008,  0x00000000, NULL },
    AWAIT_CUE(9),
    WAIT(15),
    { 0x62, 0x00,  0x0300, -0x00000030,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs1_g21_s0_lives5_dlg0[] = { /* 0x814bad0 */
    DEBUGINFO_O(5017),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(10),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    WAIT(15),
    WALK_GRID(204, 59),
    ALERT_CUE(5),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    SELECT_ANIMATION(4),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 54),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 54),
    AWAIT_CUE(10),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(10),
    WALK_GRID(128, 60),
    WALK_GRID(128, 56),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(10),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(10),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(4),
    COND_EQUAL(0, /* to label */ 3),
    COND_EQUAL(1, /* to label */ 4),
    COND_EQUAL(2, /* to label */ 5),
    COND_EQUAL(3, /* to label */ 6),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_EAST),
    JUMP_LABEL(7),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    JUMP_LABEL(7),
  LABEL(5), /* = 0x05 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_SOUTH),
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    JUMP_LABEL(7),
  LABEL(7), /* = 0x07 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(10),
    AWAIT_CUE(10),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(10),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(10),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(10),
    SET_DIR_WAIT(DIRECTION_SOUTH, 0),
    { 0x62, 0x00,  0x004c, -0x00000008,  0x00000000, NULL },
    AWAIT_CUE(10),
    { 0x62, 0x00,  0x004c,  0x00000000,  0x00000008, NULL },
    AWAIT_CUE(10),
    ROTATE_TO(5, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(15),
    { 0x62, 0x00,  0x0200, -0x00000008,  0x00000008, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs1_g21_s0_lives6_dlg0[] = { /* 0x814bfb0 */
    DEBUGINFO_O(5099),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    CMD_UNK_93(2, DIR_TRANS_10, 34),
    CALL_SCRIPT(ANGRY_START_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    CALL_SCRIPT(ANGRY_END_FUNC),
    AWAIT_CUE(11),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(11),
    WALK_GRID(128, 52),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(11),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(11),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(4),
    COND_EQUAL(0, /* to label */ 3),
    COND_EQUAL(1, /* to label */ 4),
    COND_EQUAL(2, /* to label */ 5),
    COND_EQUAL(3, /* to label */ 6),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTH),
    JUMP_LABEL(7),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTHEAST),
    JUMP_LABEL(7),
  LABEL(5), /* = 0x05 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_NORTHWEST),
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    ROTATE_TO(5, DIR_TRANS_10, DIRECTION_WEST),
    JUMP_LABEL(7),
  LABEL(7), /* = 0x07 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(11),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(11),
    CMD_UNK_93(5, DIR_TRANS_10, 77),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(11),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(11),
    CALL_SCRIPT(ANGRY_START_FUNC),
    CMD_UNK_93(5, DIR_TRANS_10, 34),
    AWAIT_CUE(11),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    CALL_SCRIPT(ANGRY_END_FUNC),
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    CMD_UNK_93(5, DIR_TRANS_10, 91),
    AWAIT_CUE(11),
    CMD_UNK_93(5, DIR_TRANS_10, 0),
    AWAIT_CUE(11),
    WALK_RELATIVE(76, -24, 0),
    SET_DIR_WAIT(DIRECTION_NORTHWEST, 0),
    SELECT_ANIMATION(7),
    AWAIT_CUE(11),
    { 0x62, 0x00,  0x004c, -0x00000008,  0x00000000, NULL },
    AWAIT_CUE(11),
    ROTATE_TO(5, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT(15),
    { 0x62, 0x00,  0x0200, -0x00000008, -0x00000008, NULL },
    HALT,
};


static const struct ScriptCommand s_gs1_g21_s0_lives7_dlg0[] = { /* 0x814c4b0 */
    DEBUGINFO_O(5183),
    SELECT_ANIMATION(2),
    AWAIT_CUE(12),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(12),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(6, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(6, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(12),
    CALL_LABEL(2),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(12),
    CALL_LABEL(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(12),
    CALL_LABEL(2),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(12),
    CALL_LABEL(2),
    WALK_RELATIVE(128, -64, -8),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(12),
    CALL_LABEL(2),
    WALK_RELATIVE(768, -16, 8),
    AWAIT_CUE(12),
  LABEL(2), /* = 0x02 */
    WAIT_RANDOM(0, 30),
    RET_DIRECT,
    RET,
};

static const struct ScriptCommand s_gs1_g21_s0_lives8_dlg0[] = { /* 0x814c770 */
    DEBUGINFO_O(5230),
    SELECT_ANIMATION(2),
    AWAIT_CUE(13),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(13),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(6, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(6, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(13),
    CALL_LABEL(2),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(13),
    CALL_LABEL(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(13),
    CALL_LABEL(2),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(13),
    CALL_LABEL(2),
    WALK_RELATIVE(128, -24, -8),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(13),
    CALL_LABEL(2),
    { 0x62, 0x00,  0x0300, -0x00000008,  0x00000000, NULL },
    AWAIT_CUE(13),
  LABEL(2), /* = 0x02 */
    WAIT_RANDOM(0, 30),
    RET_DIRECT,
    RET,
};

static const struct ScriptCommand s_gs1_g21_s0_lives9_dlg0[] = { /* 0x814ca30 */
    DEBUGINFO_O(5277),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(14),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(14),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    { 0x62, 0x00,  0x0080,  0x00000000, -0x00000010, NULL },
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    { 0x62, 0x00,  0x0080,  0x00000000,  0x00000010, NULL },
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(2), /* = 0x02 */
    { 0x62, 0x00,  0x0080,  0x00000000,  0x00000010, NULL },
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(14),
    CALL_LABEL(3),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(14),
    CALL_LABEL(3),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(14),
    CALL_LABEL(3),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(14),
    CALL_LABEL(3),
    WALK_RELATIVE(128, -32, 0),
    WALK_RELATIVE(128, -32, 24),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(14),
    CALL_LABEL(3),
    { 0x62, 0x00,  0x0100, -0x00000020,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(14),
  LABEL(3), /* = 0x03 */
    WAIT_RANDOM(0, 30),
    RET_DIRECT,
    RET,
};

static const struct ScriptCommand s_gs1_g21_s0_lives10_dlg0[] = { /* 0x814cd40 */
    DEBUGINFO_O(5329),
    SELECT_ANIMATION(2),
    AWAIT_CUE(15),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(15),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    SELECT_ANIMATION(3),
    { 0x70, 0x00,  0x0200,  0x00000007,  0x00000000, NULL },
    WAIT(1),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(15),
    CALL_LABEL(2),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(15),
    CALL_LABEL(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(15),
    CALL_LABEL(2),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(15),
    CALL_LABEL(2),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(15),
  LABEL(2), /* = 0x02 */
    WAIT_RANDOM(0, 30),
    RET_DIRECT,
    RET,
};

static const struct ScriptCommand s_gs1_g21_s0_lives11_dlg0[] = { /* 0x814cfe0 */
    DEBUGINFO_O(5374),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(16),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(16),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(15),
    CMD_UNK_93(4, DIR_TRANS_10, 71),
    SELECT_ANIMATION(4),
    AWAIT_CUE(16),
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(16),
    CALL_LABEL(0),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(16),
    CALL_LABEL(0),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(16),
    CALL_LABEL(0),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(16),
    WAIT(15),
    WALK_RELATIVE(76, -24, -16),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(16),
    CALL_LABEL(0),
    CMD_UNK_93(4, DIR_TRANS_10, 71),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(16),
  LABEL(0), /* = 0x00 */
    WAIT_RANDOM(0, 30),
    RET_DIRECT,
    RET,
};

static const struct ScriptCommand s_gs1_g21_s0_lives12_dlg0[] = { /* 0x814d270 */
    DEBUGINFO_O(5418),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(17),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(17),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(15),
    CMD_UNK_93(4, DIR_TRANS_10, 70),
    SELECT_ANIMATION(4),
    AWAIT_CUE(17),
    CALL_SCRIPT(NOTICE_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(17),
    CALL_LABEL(0),
    CALL_SCRIPT(SHOCK_FUNC),
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(17),
    CALL_LABEL(0),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(17),
    CALL_LABEL(0),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(17),
    WAIT(30),
    WALK_RELATIVE(76, -16, -8),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(17),
    CALL_LABEL(0),
    CMD_UNK_93(4, DIR_TRANS_10, 70),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(17),
  LABEL(0), /* = 0x00 */
    WAIT_RANDOM(0, 30),
    RET_DIRECT,
    RET,
};

static const struct ScriptCommand s_gs1_g22_s0_station_sref_script[] = { /* 0x814d4f0 */
    DEBUGINFO_O(5461),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g22_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g22_s0_station_sref_script }; /* 0x814d520 */

static const struct ScriptCommand s_gs1_g22_s0_lives0_dlg1[] = { /* 0x814d52c */
    DEBUGINFO_O(5469),
    JUMP_SCRIPT(MOVE_SLEEP),
};

static const struct ScriptCommand s_gs1_g22_s0_lives0_dlg2[] = { /* 0x814d54c */
    DEBUGINFO_O(5474),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g22_s0_lives0_dlg3[] = { /* 0x814d5cc */
    DEBUGINFO_O(5485),
    SELECT_ANIMATION(6),
    JUMP_SCRIPT(LIVES_REPLY),
};

static const struct ScriptCommand s_gs1_g22_s0_lives1_dlg1[] = { /* 0x814d5fc */
    DEBUGINFO_O(5491),
    JUMP_SCRIPT(MOVE_SLEEP),
};

static const struct ScriptCommand s_gs1_g22_s0_lives1_dlg2[] = { /* 0x814d61c */
    DEBUGINFO_O(5496),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g22_s0_lives1_dlg3[] = { /* 0x814d69c */
    DEBUGINFO_O(5507),
    SELECT_ANIMATION(6),
    JUMP_SCRIPT(LIVES_REPLY),
};

static const struct ScriptCommand s_gs1_g22_s0_lives2_dlg1[] = { /* 0x814d6cc */
    DEBUGINFO_O(5513),
    JUMP_SCRIPT(MOVE_SLEEP),
};

static const struct ScriptCommand s_gs1_g22_s0_lives2_dlg2[] = { /* 0x814d6ec */
    DEBUGINFO_O(5518),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g22_s0_lives2_dlg3[] = { /* 0x814d76c */
    DEBUGINFO_O(5529),
    SELECT_ANIMATION(6),
    JUMP_SCRIPT(LIVES_REPLY),
};

static const struct ScriptCommand s_gs1_g22_s0_lives3_dlg1[] = { /* 0x814d79c */
    DEBUGINFO_O(5535),
    JUMP_SCRIPT(MOVE_SLEEP),
};

static const struct ScriptCommand s_gs1_g22_s0_lives3_dlg2[] = { /* 0x814d7bc */
    DEBUGINFO_O(5540),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g22_s0_lives3_dlg3[] = { /* 0x814d83c */
    DEBUGINFO_O(5551),
    SELECT_ANIMATION(6),
    JUMP_SCRIPT(LIVES_REPLY),
};

static const struct ScriptCommand s_gs1_g22_s0_lives4_dlg1[] = { /* 0x814d86c */
    DEBUGINFO_O(5557),
    JUMP_SCRIPT(MOVE_SLEEP),
};

static const struct ScriptCommand s_gs1_g22_s0_lives4_dlg2[] = { /* 0x814d88c */
    DEBUGINFO_O(5562),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g22_s0_lives4_dlg3[] = { /* 0x814d90c */
    DEBUGINFO_O(5573),
    SELECT_ANIMATION(6),
    JUMP_SCRIPT(LIVES_REPLY),
};

static const struct ScriptCommand s_gs1_g22_s0_lives5_dlg1[] = { /* 0x814d93c */
    DEBUGINFO_O(5579),
    JUMP_SCRIPT(MOVE_SLEEP),
};

static const struct ScriptCommand s_gs1_g22_s0_lives5_dlg2[] = { /* 0x814d95c */
    DEBUGINFO_O(5584),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_1, 0x0000, 0x00000000),
    { 0x2e, 0x00,  0x0001, -0x00000002,  0x00000000, NULL },
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g22_s0_lives5_dlg3[] = { /* 0x814d9dc */
    DEBUGINFO_O(5595),
    SELECT_ANIMATION(6),
    JUMP_SCRIPT(LIVES_REPLY),
};

static const struct ScriptCommand s_gs1_g23_s0_station_sref_script[] = { /* 0x814da0c */
    DEBUGINFO_O(5601),
    BGM_STOP,
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(1),
    MSG_ON_BG_AUTO(30, (@@STRING:263d8f45aa9772cd254b6cb9d5f602bcfab7d9cde697dabc6037e1143f6d4ffd@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs1_g23_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g23_s0_station_sref_script }; /* 0x814db38 */


static const struct ScriptCommand s_gs1_g23_s0_eff0_script[] = { /* 0x814db44 */
    DEBUGINFO_O(5623),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x20,  0x0100,  0x00000006,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0x1c,  0x0100,  0x00000002,  0x00000000, NULL },
    AWAIT_CUE(4),
    { 0x89, 0x40,  0x0099,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g23_s0_lives0_dlg0[] = { /* 0x814dc14 */
    DEBUGINFO_O(5639),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(472),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:871b2dd976823a20bb36e6caec83e4f53ccda2523e11e2c846b0fb0a9d3bf01b@@)),
    MSG_NPC(2, (@@STRING:43739c792183c005b0ea33c2e06aee9dd1a52c32420ca52f7d576af8b121463c@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(8),
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:c6d4fc9c82e93ed8ce19605feab35d1e7712293c40f9eb3d3523c45904dd8227@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(10),
    MSG_NPC(4, (@@STRING:2a378a158f41b5059ebff57f4483cb94e6a3e717dfca9f1feae646e56110c969@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:7ecfc06b9f7f5f2297821e74269db3b7b624ff477d65a53ed20d0709acd36bd7@@)),
    MSG_NPC(5, (@@STRING:4e53935f409c4b9cdad5e9093fc9d897a1039c2f29dc20189aeb2b1c2181e823@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    ALERT_CUE(8),
    ALERT_CUE(7),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, -1, 0),
    MSG_NPC(3, (@@STRING:103b8dbf15d92e050c3fbfbfc773d5523c37b70bd97c1c6a3cdb651af41b008a@@)),
    MSG_NPC(3, (@@STRING:869c7dee0e008113b3ad38935a4adf4ef4ff6184c298780b0644b4ce821b5a7e@@)),
    MSG_NPC(3, (@@STRING:17669fa93c4b0031bb5151ca3e95dac9b74e0c733f20adb0ce37a1b81fd72ce0@@)),
    MSG_NPC(3, (@@STRING:270166d7830a348b9cd0db092fe7eb87e3c76f3f80cd7fd99b3f5791912ae6d0@@)),
    MSG_NPC(3, (@@STRING:55c8740ea541e75e78715d436d094a92fc2df695d8f306bcd5ef99a70e596272@@)),
    MSG_NPC(3, (@@STRING:0a30cd44f5aeb08933a7ebfd9afecf8eb41bbaf618c9555d04d37ef3bbd58246@@)),
    MSG_NPC(3, (@@STRING:f6efe8612754de4ef04e6b1be476cd5711f3acf25ccea93a5a085af4ff026e5f@@)),
    ALERT_CUE(8),
    PORTRAIT_REP(0x0003, 0x00000042),
    MSG_NPC(3, (@@STRING:2607456296275aa98e19b7393b7a3223ee9f91c622936d9e09c502eb2e4008db@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERLEFT_TOP, 0x0002, 0x00000043),
    MSG_NPC(2, (@@STRING:3fc90f91795ab115e1d977798a9eee8371e9b57a72373953cf0416c40b74f227@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000041),
    MSG_NPC(4, (@@STRING:eb8b58d1ea973fd6635e93b31b47ebc5ff23a9ea9929614567246ac0bae4ef35@@)),
    MSG_NPC(4, (@@STRING:0fa551f75a7c836955fe0dc92322b07aab03a2844f102431c283993bfdb60871@@)),
    MSG_NPC(4, (@@STRING:b16a9a05b561a6d81fb2a4ac27a0e9c6fd775852e6e34c53308b720ef12721e2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:1c3c63df4c2b4a1bc26339158aff092694d18d44dabf0de24c2c360a4328458f@@)),
    MSG_NPC(2, (@@STRING:44930a5fbf1943711006e0e2200125f02dca716e9dc8cb6a8e18fcda31caf325@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT_REP(0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:120ded35f40b7a46676fb9948db5f3ce53c494fcba0d6c513f25c5f6f1d4f78a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:aeab82777ccdf010e082a7b44ce856a809bcc1587d0c9468856e69481f5a0e62@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(13),
    WAIT(15),
    ALERT_CUE(12),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:0a0dc52ffd5b66aa523840aaf208f526c1e24aa6d04cf39acd078f5bacd57093@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(12),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0007, 0x00000042),
    MSG_NPC(7, (@@STRING:b32d6ea809497abbd99607f72fea4268faa82c2ee93206c3a0f24ce4f7f8d5ae@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:88af1bea752528e81f9109221beed53a9db062ae943f469a84a1e634b40def60@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(12),
    PORTRAIT_REP(0x0007, 0x00000045),
    MSG_NPC(7, (@@STRING:cb05b4b5ca59d9abc3daab1063e80434c8e6711d3831ebcae1ea66059811235a@@)),
    MSG_NPC(7, (@@STRING:7a0df1dd7635a6316647cce6ce1d66490a4abeca125b410d62c15b67ebbb551d@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(463),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000046),
    MSG_NPC(2, (@@STRING:5d29e92e847f6277c38d1ad087fd91ab7115a008a2c6ee2e40638ba454518615@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(12),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    WAIT(50),
    ALERT_CUE(6),
    ALERT_CUE(16),
    WALK_GRID(256, 63),
    AWAIT_CUE(5),
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000042),
    PORTRAIT_POS(3, 0, -1),
    MSG_NPC(3, (@@STRING:ab56404531f0594708163c4cd0c90a2635e9e9fe2e7b179a9b46cd221f0b266c@@)),
    WAIT(4),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0006, 0x00000042),
    PORTRAIT_POS(6, -2, 0),
    MSG_NPC(6, (@@STRING:a01f9534a9bf380dac2e2da406c63fa8561918e7aa87ce9373eec211b5b13803@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000000),
    PORTRAIT_POS(5, 1, 0),
    MSG_NPC(5, (@@STRING:a5bd659a075455db7ebb8d2062136a8b31cd428b2ddc20f440ea0549a60d0c7e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(6),
    ALERT_CUE(16),
    ALERT_CUE(7),
    ALERT_CUE(9),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    WALK_GRID(256, 64),
    AWAIT_CUE(5),
    WAIT(30),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:073ce3f57f99858c8f5a466b45327e5cf52189f4931859201e18ddc785e4ac06@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:c00850397305e7868a07a4eea5e415af03652020ac1a8a83508e2b0fe1ff7c3c@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:caaaf4eedb26cc9b9e45f1f85605bfe5e44fa6844f51363376855a5162c40a26@@)),
    VARIANT_DEFAULT((@@STRING:53f927ce0e7580e9da8a08637dabdc416002235f5f9e7f31d28da6383b26ac58@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:18312012fa5a86bf263327e96eb9d5838e71cad7db34398a26aeb5e234d09a2a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000003),
    CMD_UNK_93(1, DIR_TRANS_11, 91),
    MSG_NPC(1, (@@STRING:437b74c0b80172f8515c437ff1e65f53fb361be529e767d4c01d15332d670fee@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:bccfdcf8f540528e64e45a853ef99dc38fe822d64fb2f8907e081881daaa89fe@@)),
    ALERT_CUE(7),
    MSG_NPC(2, (@@STRING:032ea34498e7629115a50ad35f7fe5576fa2c2a0aa5eb6b5b109cf51a80aed4a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c3139cc7517d5fb7324811a2b21b358b4bb1a73aec929dea1b45a991b8405411@@)),
    VARIANT(/* == */  1, (@@STRING:cb09b54e85174af4198a8e917290ec0df739e7f1772d8e3b65c1296acc39583f@@)),
    VARIANT(/* == */  1, (@@STRING:0f7cae365aecba040087ad4fae61ce73bd4be31f54a58d3cc46f8fe110a9a521@@)),
    VARIANT_DEFAULT((@@STRING:8461cd1fa5538cf44bcecb7111277e11ede15fd7e88c7059fd504f639a775ddd@@)),
    VARIANT_DEFAULT((@@STRING:cb09b54e85174af4198a8e917290ec0df739e7f1772d8e3b65c1296acc39583f@@)),
    VARIANT_DEFAULT((@@STRING:0f7cae365aecba040087ad4fae61ce73bd4be31f54a58d3cc46f8fe110a9a521@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(463),
    ALERT_CUE(7),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT_REP(0x0002, 0x00000046),
    MSG_NPC(2, (@@STRING:b22ede51b58cb6b854fb1746d1eccf4fce9e112172391c340c828f4f014c080b@@)),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, 1, 0),
    MSG_NPC(4, (@@STRING:3aa9e4b920a01636c5b8016bd877d32e67be4c870ae1d515e7720d6f5ffea0ca@@)),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000042),
    PORTRAIT_POS(3, -1, 0),
    MSG_NPC(3, (@@STRING:705e0c4590f5cb7ca7fd7053ed2e4260a75b8ae8bbde958f7cecf1a5420984c6@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:26a01551d3310322d5b0cb97e6e425ff2d15ab4f4494f394597a065fcc727fe3@@)),
    VARIANT(/* == */  1, (@@STRING:4aaeea14366e59ab67a55e2fd94c120430beea618e1c27a996bb62979e6f2ba5@@)),
    VARIANT(/* == */  1, (@@STRING:0de1314c14a66a7c668a85fbf7b0fcbd4b3a394cef3250ca9e5ffc72fa2bd276@@)),
    VARIANT_DEFAULT((@@STRING:b336145bb5537ef9d128f3460a11bec5763f72ae7885ab32a41f6cf90da70ba8@@)),
    VARIANT_DEFAULT((@@STRING:4aaeea14366e59ab67a55e2fd94c120430beea618e1c27a996bb62979e6f2ba5@@)),
    VARIANT_DEFAULT((@@STRING:732448646e260617b0aaa291c959bf7be6ff9065c9484bd411015e853a879ba0@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:6a91273879c717ccfbb2a3ec5a7d63f70f1d7c79e97a2e99cb6dfa6dd8619f6a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    WAIT(60),
    FANFARE_PLAY2(470),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:c6e671a82ae5050c569f6c6b8bf5d3ef47842892aa6f49a3a74707def0b96765@@)),
    MSG_NPC(2, (@@STRING:703969892b9656e74f33328f318063e39dc674581002ea4927f59c1f1adeddb7@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:963b638228653caefc5e63192ecf32126b487439b5b453daaaa42258244fdec0@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    WAIT(45),
    PORTRAIT_REP(0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:9dda027e360308c8e82e51a8cc10524652f0f164ad6f7ac45e744687e75ccf22@@)),
    MSG_NPC(2, (@@STRING:b722fbbaf74f53a22953f43c58d61dd8823af4e79734423971fc9d42265f0862@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:465feee80ad54b3616314fe45f0d9dad2400f98c666acca8867e974d55329f10@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(470),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:bd8b11b77751e3f8f8475a737e3517f7ad51a0f9018c28db553014b8693b1c98@@)),
    MSG_NPC(2, (@@STRING:3d251d856357f63ac5658b37b9e10a72246c1c08914fb86bfd32788126540867@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:fdd485e4b49f421768276ea22f55325ec7cd9a15eb5482c6043b516d744a2354@@)),
    TEXTBOX_CLEAR,
    WAIT(90),
    FANFARE_PLAY2(468),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    WAIT(180),
    PORTRAIT_REP(0x0002, 0x00000044),
    MSG_NPC(2, (@@STRING:9ed79d2596d8a250b5e2ae55b8f04b3a5d3dbebc713100f108a8baceb14bdd7c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(11),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:2eefe692a8d50da0494e70a2868f629cae0407b85bb222a337407968970ebd40@@)),
    ALERT_CUE(11),
    MSG_NPC(6, (@@STRING:c0e1458870b6b6a09afbf3a870f840430a9b03e9e4dab9a56003e417fecfd7d9@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(468),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000046),
    MSG_NPC(2, (@@STRING:62aaff54005a97710d5f940d5d21ebe82466cf8b9ca9ac02cc7d6037773240d3@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    WAIT(30),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:0cff72046c27c2cc2111669f3172e52e89e8e2a7463324ae5408356f70933372@@)),
    MSG_NPC(3, (@@STRING:be935a714f0be5cf854b86db089d427755eb32ed624a45b734e15e88da63e06e@@)),
    MSG_NPC(3, (@@STRING:a18255ea771e01b784b2db66f2b40c19569534ba82250b7a9d582d78809e42b1@@)),
    MSG_NPC(3, (@@STRING:d9809e2234f4c153e26430f3e89e51d35faaff1af3e439dafb1eabc6cd134122@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(455),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP, 0x0002, 0x00000046),
    MSG_NPC(2, (@@STRING:6bc8e39c21aac6be8f03204eebcdd0db8d266597a755939a3f2c7534f1b412cb@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000041),
    MSG_NPC(4, (@@STRING:6a4fc8908cbb9cc750f4fd0df87cbc04583a94e2c39622c4af2eaec6c686bdce@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:a9bf3324eae7421c8983edaa1279d98176c707a335767755822a56a3c0c19a73@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    WAIT(60),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000046),
    MSG_NPC(2, (@@STRING:9bfa9bc6c687b9272cf0c55de1524dc36116741a99f7520512c5db5df6825de0@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    PORTRAIT_REP(0x0001, 0x00000008),
    MSG_NPC(1, (@@STRING:487046c2ab0b393059d2c6126bb3d69656e2acf33f517187970a617cbfffdbe3@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    SELECT_ENTITIES(-1, 1),
    ALERT_CUE(6),
    ALERT_CUE(16),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(15),
    WAIT(15),
    TEXTBOX_AUTO_PRESS(210, 210),
    { 0x2e, 0x03,  0x0009, -0x00000002,  0x00000000, NULL },
    MSG_NPC(9, (@@STRING:898b58efd99d911a064fcf363fde7e2955e6b12838211004e60aa4bc9789e237@@)),
    TEXTBOX_CLEAR2,
    TEXTBOX_AUTO_PRESS(-1, -1),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(5),
    WAIT(90),
    FANFARE_PLAY2(468),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0008, 0x00000000),
    MSG_NPC(8, (@@STRING:8d8744bfdf00d85bc71de3d6e3a1bb9fad6fdb20e9bbccacf349910848936aac@@)),
    TEXTBOX_CLEAR,
    WAIT(4),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0007, 0x00000000),
    MSG_NPC(7, (@@STRING:3f6ecd0698bfb781adb78ef6748993ad6fbd98a22ae23ba4f3e8839c3bd55ebe@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:e0102b3fbe3d74fb98e29794f6419c1bffbd6ec8c2cf03522105bafc4baf49a9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(30),
    MSG_LETTER((@@STRING:5b117a7870a35fd6944728d86758d9965c38d271ac326c2122e4ef179ddaf9b0@@)),
    MSG_LETTER((@@STRING:aafd9b7f4c5e50bb5d7dafd080ffaabb0cbe80d4766a47a6b6295b8dffd066f8@@)),
    MSG_LETTER((@@STRING:e556c4be52f2204f1ed9731a303b3da1da587a80855a50743b89184cadd30d1f@@)),
    MSG_LETTER((@@STRING:cd0697e39d9e4e298097afd149782b96bb41af20b0fc3f39795063665fdd4669@@)),
    MSG_LETTER((@@STRING:e98430b1a0a295fb762a8455365a680fbf52714c06e17570e55534964dacf94c@@)),
    MSG_LETTER((@@STRING:32a50f8b29710004e7c3e7f5bc570f1a383be65e31e836264b6e43aa3b784b5e@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(470),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    WAIT(30),
    MSG_NPC(2, (@@STRING:35f9f1ef8fda3e3e3ae584f56b4cfb51980f8ebc29878ce23925dab650f794c7@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0004, 0x00000041),
    PORTRAIT_POS(4, 2, 0),
    MSG_NPC(4, (@@STRING:699264125e2bffd9001284e53ee6ae02c4bc983d7290d2fa99354342800035b8@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(455),
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    WAIT(30),
    MSG_NPC(2, (@@STRING:f5c19e599c1dd7a0643cf187a14379f33a8a4b67e489c85f849d5e619b5fda55@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(12),
    ALERT_CUE(13),
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(16),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    WAIT(80),
    FANFARE_PLAY2(471),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:1cc44e059f423a16c9fae767add2d25fea43d4cb6bcf5c5c3b7b737a1e2a4838@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WAIT(180),
    ALERT_CUE(4),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(16),
    CMD_UNK_93(8, DIR_TRANS_11, 54),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:fece5088b0242e500a83ddd04aaf5bece3bde4db38a83096d54778c085729699@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_NPC(1, (@@STRING:d6eb1e811e0090848b4761a33aa0f83aee60adb5d48bce1d78690ddd519f53fd@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0006, 0x00000042),
    MSG_NPC(6, (@@STRING:f694a6b14d8c5f8643ee54d5d98e5f895cb38db71a36650ba494e762d52cc998@@)),
    MSG_NPC(6, (@@STRING:8e838ef34a6d8746d33bf32a63e96389969fe5e5b2c841355127e0b06d5273cf@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(1, (@@STRING:584b0f29d974ab90f1127c9717202b2a85bcdf1ac8a6fa4f52526360b7e263c9@@)),
    MSG_NPC(1, (@@STRING:291107a44f386dfcd6c1b4e1d2499d9c7f28d79377d36a17654902c36bd26c55@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:7a0e84bf1b5f0d6407070b6004467ab398d0504b1f56c2dcd33734b8d6ba9feb@@)),
    VARIANT(/* == */  1, (@@STRING:706d214ed0b7dd19043d967f12707e5b6e54019444b2464490b5e849d222efcd@@)),
    VARIANT(/* == */  1, (@@STRING:5a0f66183a0013ea5a667c012c567c76817e265592f7a0f15e864ab997617825@@)),
    VARIANT_DEFAULT((@@STRING:58f777a19902eec8aef77b20f40d40d265530aff4a1fa30648dadd845116fefd@@)),
    VARIANT_DEFAULT((@@STRING:fc7df89b9cb54a886ffdc029687bd1bdc7173a989ce003909e369b1e72e69470@@)),
    VARIANT_DEFAULT((@@STRING:bb8961080994cfe0617e8e0ee2b8b981865582cf96ceb0780810c075ec9b0782@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};













































static const struct ScriptCommand s_gs1_g23_s0_lives1_dlg0[] = { /* 0x8150a08 */
    DEBUGINFO_O(6162),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 65),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(256, 66),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_11, 54),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(210),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(45),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 54),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives2_dlg0[] = { /* 0x8150cb8 */
    DEBUGINFO_O(6208),
    SELECT_ANIMATION(2),
    AWAIT_CUE(16),
    WALK_GRID(256, 67),
    AWAIT_CUE(16),
    WALK_GRID(256, 68),
    AWAIT_CUE(16),
    WAIT(220),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(16),
    WAIT(45),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(16),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(16),
    WAIT(5),
    CMD_UNK_93(8, DIR_TRANS_10, 54),
    AWAIT_CUE(16),
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives3_dlg0[] = { /* 0x8150de8 */
    DEBUGINFO_O(6230),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(7),
    WAIT(6),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    AWAIT_CUE(7),
    CALL_SCRIPT(ANGRY_START_FUNC),
    WAIT(60),
    CALL_SCRIPT(ANGRY_END_FUNC),
    FANFARE_PLAY2(472),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(8, DIR_TRANS_11, 77),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_11, 93),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(7),
    WAIT(65),
    WALK_GRID(153, 72),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(7),
    { 0x89, 0x08,  0x0100,  0x00000007,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(SWEAT_FUNC),
    { 0x7e, 0x00,  0x0100,  0x00000008, -0x00000008, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT(1),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(8, DIR_TRANS_11, 77),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(180),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(7),
    WAIT(10),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    WAIT(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    WAIT(20),
    { 0x62, 0x00,  0x0100,  0x00000000, -0x0000000c, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(7),
    { 0x89, 0x40,  0x0200,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives4_dlg0[] = { /* 0x81513c8 */
    DEBUGINFO_O(6327),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    WAIT(10),
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    AWAIT_CUE(8),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    AWAIT_CUE(8),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(8),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_11, 93),
    AWAIT_CUE(8),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    AWAIT_CUE(8),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(140),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    WAIT(15),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    { 0x89, 0x10,  0x0099,  0x00000000,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x89, 0x38,  0x0200,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives5_dlg0[] = { /* 0x81516e8 */
    DEBUGINFO_O(6380),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_11, 80),
    AWAIT_CUE(9),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    CALL_SCRIPT(ANGRY_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(ANGRY_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WAIT(2),
    CMD_UNK_93(60, DIR_TRANS_11, 93),
    AWAIT_CUE(9),
    WAIT(2),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(9),
    WAIT(62),
    WALK_GRID(153, 71),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(9),
    WAIT(2),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(9),
    WAIT(5),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(9),
    WAIT(8),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(160),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(9),
    WAIT(12),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(9),
    { 0x89, 0x30,  0x0099,  0x00000004,  0x00000000, NULL },
    { 0x54, 0x00,  0x001f,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    ALERT_CUE(17),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(9),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    FANFARE_PLAY2(471),
    CALL_SCRIPT(ANGRY_START_FUNC),
    WAIT(45),
    CALL_SCRIPT(ANGRY_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WAIT(10),
    { 0x89, 0x38,  0x0200,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives6_dlg0[] = { /* 0x8151b48 */
    DEBUGINFO_O(6453),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    AWAIT_CUE(10),
    WAIT(5),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    AWAIT_CUE(10),
    WAIT(2),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    AWAIT_CUE(10),
    WAIT(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(10),
    WAIT(8),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    AWAIT_CUE(10),
    WAIT(8),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(150),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(10),
    { 0x89, 0x06,  0x0100,  0x00000005,  0x00000000, NULL },
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    AWAIT_CUE(10),
    WAIT(20),
    { 0x89, 0x38,  0x0200,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives7_dlg0[] = { /* 0x8151e18 */
    DEBUGINFO_O(6501),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    WAIT(8),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    AWAIT_CUE(11),
    WAIT(8),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(11),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    WAIT(60),
    WALK_GRID(153, 69),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHWEST),
    AWAIT_CUE(11),
    WAIT(5),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(11),
    WAIT(2),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    AWAIT_CUE(11),
    WAIT(2),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    AWAIT_CUE(11),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    { 0x89, 0x08,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(11),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(200),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(11),
    WAIT(13),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(10),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(11),
    { 0x89, 0x08,  0x0080,  0x00000003,  0x00000000, NULL },
    AWAIT_CUE(11),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    AWAIT_CUE(11),
    { 0x89, 0x18,  0x0080,  0x00000004,  0x00000000, NULL },
    { 0x89, 0x05,  0x0080,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives8_dlg0[] = { /* 0x81521a8 */
    DEBUGINFO_O(6561),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(12),
    WALK_GRID(512, 73),
    ALERT_CUE(5),
    AWAIT_CUE(12),
    CMD_UNK_93(4, DIR_TRANS_11, 91),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(12),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(12),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(12),
    WAIT(55),
    WALK_GRID(153, 74),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(12),
    WAIT(5),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(12),
    WAIT(2),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    AWAIT_CUE(12),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    AWAIT_CUE(12),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    AWAIT_CUE(12),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(12),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(12),
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    AWAIT_CUE(12),
    WAIT(30),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(230),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(120),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(12),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(12),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(12),
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x40,  0x0200,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s0_lives9_dlg0[] = { /* 0x81525b8 */
    DEBUGINFO_O(6629),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0008,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(13),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    AWAIT_CUE(13),
    CMD_UNK_93(4, DIR_TRANS_11, 93),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(13),
    WAIT(5),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    AWAIT_CUE(13),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    AWAIT_CUE(13),
    CMD_UNK_93(8, DIR_TRANS_11, 91),
    AWAIT_CUE(13),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    AWAIT_CUE(13),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTH),
    WAIT(10),
    CALL_SCRIPT(QUESTION_FUNC),
    AWAIT_CUE(13),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(13),
    CMD_UNK_93(4, DIR_TRANS_11, 85),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(13),
    CMD_UNK_93(4, DIR_TRANS_11, 77),
    AWAIT_CUE(13),
    WAIT(15),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(215),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(13),
    WAIT(10),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(13),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(13),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(13),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(13),
    WAIT(15),
    { 0x89, 0x40,  0x0200,  0x00000004,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g23_s1_lives0_dlg0[] = { /* 0x8152988 */
    DEBUGINFO_O(6693),
    { 0x2d, 0x07,  0x0009,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    FANFARE_PLAY2(451),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SET_DIR_WAIT(DIRECTION_SOUTHEAST, 0),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SET_DIR_WAIT(DIRECTION_EAST, 0),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    FANFARE_STOP2(451),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g23_s1_eff0_script[] = { /* 0x8152a68 */
    DEBUGINFO_O(6710),
    AWAIT_CUE(15),
    WAIT(344),
    ALERT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(16),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(11),
    ALERT_CUE(13),
    ALERT_CUE(17),
    { 0x56, 0x00,  0x0000,  0x00000065,  0x00000000, NULL },
    WAIT(288),
    { 0x52, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000066,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(15),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g23_s1_eff1_script[] = { /* 0x8152ba8 */
    DEBUGINFO_O(6733),
    { 0x52, 0x00,  0x0000,  0x00020000,  0x00000000, NULL },
    AWAIT_CUE(17),
    WAIT(328),
    { 0x56, 0x00,  0x0000,  0x000001be,  0x00000000, NULL },
    AWAIT_CUE(17),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g24_s0_station_sref_script[] = { /* 0x8152c28 */
    DEBUGINFO_O(6744),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g24_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g24_s0_station_sref_script }; /* 0x8152c68 */

static const struct ScriptCommand s_gs1_g24_s0_lives0_dlg2[] = { /* 0x8152c74 */
    DEBUGINFO_O(6753),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  0,  1),
    MSG_NPC(1, (@@STRING:c6c565966c3edcd55bc763c0d6a9141bdf44d36c5de7ed5ced14b9004df42b71@@)),
    MSG_NPC(1, (@@STRING:bfa56c25f083ea8ff5c39531373226505a4b744c8622a47ab0c8f128830d4abd@@)),
    MSG_NPC(1, (@@STRING:ecabee29fa8b1f269a7c14f296e8e83c94531bb38e2cf1438c9a6816e75e6b63@@)),
    MSG_NPC(1, (@@STRING:67df0455cbeb46632ea42921094182b9c51db9c1521e65e60d400d3bdefe000f@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives1_dlg2[] = { /* 0x8152e2c */
    DEBUGINFO_O(6770),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  1,  1),
    EXECUTE_STATION(-1, 24, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives2_dlg2[] = { /* 0x8152edc */
    DEBUGINFO_O(6784),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 2, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  2,  1),
    MSG_NPC(1, (@@STRING:93afb371b8edb0c4b9c3fe2382959d117d62874c642072357024bb8670a9a640@@)),
    MSG_NPC(1, (@@STRING:8571df008d3c3887acac83445a657fdc50337d05ec50b45462eb1ae7b2e73a61@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives3_dlg2[] = { /* 0x8153034 */
    DEBUGINFO_O(6799),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 3, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  3,  1),
    MSG_NPC(1, (@@STRING:f1f135f660397ce913c6d40cd7d1f8507b899c4dad7bbeff754da01cb47bf56f@@)),
    MSG_NPC(1, (@@STRING:b966ac19293e0a729628337294ba47b946f692c2f27a7b3ffee563a6c56408b0@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives4_dlg2[] = { /* 0x8153174 */
    DEBUGINFO_O(6814),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 4, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  4,  1),
    MSG_NPC(1, (@@STRING:a5f7a30e8fde579c86a2516e881f31a092d7ed5a6a83253684401faa3969d8d7@@)),
    MSG_NPC(1, (@@STRING:f0397d66a4256e092108b89af7865bf9b476729f5e308e76841ad9e47f700545@@)),
    MSG_NPC(1, (@@STRING:47dd9b6763f311f71b2b2aaaa374458ba2b39f8bda4f962e7f76244b56f4261f@@)),
    MSG_NPC(1, (@@STRING:24e37fc82e5d1a51d33f999610cebd66792643f67b8a0966e15727c29253061c@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives5_dlg2[] = { /* 0x8153334 */
    DEBUGINFO_O(6831),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  5,  1),
    MSG_NPC(1, (@@STRING:12fef6b27b9c4a3ce0592f267040c814433db1c8f82c10edccf9253731745be0@@)),
    MSG_NPC(1, (@@STRING:67c234b415363649e62a635f8db9c590390f5de61a73a9ebc26bc781a8dcbc13@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives6_dlg1[] = { /* 0x8153430 */
    DEBUGINFO_O(6846),
    { 0x51, 0x00,  0x004f,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g24_s0_lives6_dlg2[] = { /* 0x8153470 */
    DEBUGINFO_O(6853),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:9b49900092d3c0b747680054f867a1f41b4f8560c187409c77ae5e7be4471eee@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives7_dlg1[] = { /* 0x81534fc */
    DEBUGINFO_O(6862),
    { 0x51, 0x00,  0x004e,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_GIRL),
    RET,
};

static const struct ScriptCommand s_gs1_g24_s0_lives7_dlg2[] = { /* 0x815353c */
    DEBUGINFO_O(6869),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:4dd3150f8f641446423b4c32c52c51f67162a0f2c9bcdcc7861acfc92ccd5b2b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives8_dlg1[] = { /* 0x81535e0 */
    DEBUGINFO_O(6878),
    { 0x51, 0x00,  0x004d,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_RANDOM),
    RET,
};

static const struct ScriptCommand s_gs1_g24_s0_lives8_dlg2[] = { /* 0x8153620 */
    DEBUGINFO_O(6885),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:aad18d9b25ad31e8ec3b0d2565fc232db674fe4cc986901ce66f90497794a1e5@@)),
    MSG_NPC(1, (@@STRING:3362b03f84aef9bd9c54d59d9b73dacc2f368ca84dd65a8a4a7f2d148c08f6cc@@)),
    MSG_NPC(1, (@@STRING:ba26e7ec15233c17bc9f8ce610fb5d5d02feed0294c63f7117ddefda4471b0b7@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s0_lives9_dlg2[] = { /* 0x8153768 */
    DEBUGINFO_O(6896),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:af54d38425d48fc141972df0917988e530d8126f4b43ffbec52ab83e3977fb07@@)),
    MSG_NPC(1, (@@STRING:a90dcba5cba26fae13ece0a74b65c9e506c40079b2cbdf349467bfa9d89a44f5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s1_station_sref_script[] = { /* 0x8153848 */
    DEBUGINFO_O(6906),
    SELECT_LIVES(-1, 1),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs1_g24_s1_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g24_s1_station_sref_script }; /* 0x8153888 */

static const struct ScriptCommand s_gs1_g24_s1_lives0_dlg0[] = { /* 0x8153894 */
    DEBUGINFO_O(6915),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:ffc8c110592fe410a96d90b82fa0c6620e68371ad4c3b7ebaba0764bc07cef45@@)),
    MSG_NPC(3, (@@STRING:f72451cfba709c24ac3ba3ce9090ed1ac7251fe7386ddfda1640a207db7b7ae3@@)),
    MSG_NPC(3, (@@STRING:55f282229e672c5f67d2a05b8cffa7130b216472da88f18bce56d659114a9f34@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:34dc82b8f0c69ee1846f0951c587347c6c81ef223303f84408d3ca5930bb442e@@)),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:902c4b450cd0e7b7c1315eddee8b3c7acf243eb1f88fa2b1806b2d06ccc013e8@@)),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:9e983dc3611cf91456081dda9267abd2cfc1286bb60aece16cde6b15b0001eee@@)),
    MSG_NPC(3, (@@STRING:a00254c6bb9781cd2d7c33d11f17d3304f3ff5e011e71ad76c935b2d52ef5707@@)),
    ALERT_CUE(3),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    TEXTBOX_CLEAR,
    SELECT_LIVES(-1, 0),
    RET,
};

static const struct ScriptCommand s_gs1_g24_s1_lives1_dlg0[] = { /* 0x8153bf4 */
    DEBUGINFO_O(6945),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g24_s1_lives2_dlg0[] = { /* 0x8153c34 */
    DEBUGINFO_O(6952),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    RET,
};

static const struct ScriptCommand s_gs1_g24_s1_lives2_dlg2[] = { /* 0x8153cd4 */
    DEBUGINFO_O(6965),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  0,  1),
    MSG_NPC(1, (@@STRING:c6c565966c3edcd55bc763c0d6a9141bdf44d36c5de7ed5ced14b9004df42b71@@)),
    MSG_NPC(1, (@@STRING:bfa56c25f083ea8ff5c39531373226505a4b744c8622a47ab0c8f128830d4abd@@)),
    MSG_NPC(1, (@@STRING:ecabee29fa8b1f269a7c14f296e8e83c94531bb38e2cf1438c9a6816e75e6b63@@)),
    MSG_NPC(1, (@@STRING:67df0455cbeb46632ea42921094182b9c51db9c1521e65e60d400d3bdefe000f@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g24_s1_lives3_dlg0[] = { /* 0x8153db4 */
    DEBUGINFO_O(6982),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    RET,
};

static const struct ScriptCommand s_gs1_g24_s1_lives3_dlg2[] = { /* 0x8153e64 */
    DEBUGINFO_O(6996),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_2N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_2N,  1,  1),
    EXECUTE_STATION(-1, 24, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_station_sref_script[] = { /* 0x8153f14 */
    DEBUGINFO_O(7010),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g25_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g25_s0_station_sref_script }; /* 0x8153f54 */

static const struct ScriptCommand s_gs1_g25_s0_lives0_dlg2[] = { /* 0x8153f60 */
    DEBUGINFO_O(7019),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives1_dlg2[] = { /* 0x8153fc0 */
    DEBUGINFO_O(7028),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives2_dlg2[] = { /* 0x8154020 */
    DEBUGINFO_O(7037),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives3_dlg2[] = { /* 0x8154080 */
    DEBUGINFO_O(7046),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives4_dlg2[] = { /* 0x81540e0 */
    DEBUGINFO_O(7055),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives5_dlg2[] = { /* 0x8154140 */
    DEBUGINFO_O(7064),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives6_dlg1[] = { /* 0x81541a0 */
    DEBUGINFO_O(7073),
    { 0x51, 0x00,  0x0052,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g25_s0_lives6_dlg2[] = { /* 0x81541e0 */
    DEBUGINFO_O(7080),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:d54a29357ec28b4d89798ea5ea58974c7d3b3dd15f8c3c4a16a7d6d351862e9d@@)),
    MSG_NPC(1, (@@STRING:9a6fe7e95a72bb5b0abd0f1f00f44ce6dd4751a14486b9f2e60215a2a3036259@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives7_dlg1[] = { /* 0x81542ac */
    DEBUGINFO_O(7090),
    { 0x51, 0x00,  0x0051,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_GIRL),
    RET,
};

static const struct ScriptCommand s_gs1_g25_s0_lives7_dlg2[] = { /* 0x81542ec */
    DEBUGINFO_O(7097),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:2912a3cf8f799a1c32afb2f98e53b7cda539ed4cb1c6646c0910da5893b9576f@@)),
    MSG_NPC(1, (@@STRING:c54eeaafcbe122ad4d02e62a337c817f32ae7d3268625981a8fff60e696ec85f@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives8_dlg1[] = { /* 0x815439c */
    DEBUGINFO_O(7107),
    { 0x51, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_RANDOM),
    RET,
};

static const struct ScriptCommand s_gs1_g25_s0_lives8_dlg2[] = { /* 0x81543dc */
    DEBUGINFO_O(7114),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:194b1186441763ddf0e30486afe57237aac2466645ad3838109255c10d1b351a@@)),
    MSG_NPC(1, (@@STRING:48df8b0e63c03f2fcdb7c0719bb131ee9a47f5d9a6eaf6b5b09a92c9b3219d65@@)),
    MSG_NPC(1, (@@STRING:fb7857b46af0b2cd8fd1007bb8e43c3f9dac24963ca6927f5683861d515e63c4@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g25_s0_lives9_dlg2[] = { /* 0x8154500 */
    DEBUGINFO_O(7125),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6056398520a1083e3e43862891ebca8bd7e85bd72653e68bbca664cbcd03912d@@)),
    MSG_NPC(1, (@@STRING:6f917a0b7bc29f8425a2cfb1816bb0ba818f6afb7a49205e4ac1166d5e828c63@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g26_s0_station_sref_script[] = { /* 0x81545e8 */
    DEBUGINFO_O(7135),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_STOP,
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(120),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs1_g26_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g26_s0_station_sref_script }; /* 0x8154678 */

static const struct ScriptCommand s_gs1_g26_s0_eff0_script[] = { /* 0x8154684 */
    DEBUGINFO_O(7149),
    { 0x59, 0x00, -0x0040,  0x00000000,  0x00000000, NULL },
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_RELATIVE(256, 64, 0),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_RELATIVE(256, -64, 0),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_RELATIVE(256, 64, 0),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_RELATIVE(256, -64, 0),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g26_s0_lives0_dlg0[] = { /* 0x8154794 */
    DEBUGINFO_O(7169),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0008,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0009,  0x00000067,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(7),
    WALK_GRID(256, 83),
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:a37862b4cd6939b940c07ebc8892a572d141e678c61055c35e1b42c6a4b12e15@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:47e2d727c85f85fb138c5bddfb9a280d4dbf7ca0fa6db81bd47ed67daa2b7115@@)),
    MSG_NPC(2, (@@STRING:1c50a9b2b10742075d9eec6cd63d8fb2962d5d5489699ce6823f30faf74d45d3@@)),
    MSG_NPC(2, (@@STRING:cb47b44ec4a8ad5dbefafae09f7652b19cad3e57e1a18afee5f0351f8648907f@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(60),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, 0, -1),
    MSG_NPC(3, (@@STRING:58f76872709f4184c839b89c05d94e8c1274af41d0f6828ba62915dac94da07e@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(3, (@@STRING:72dd56c142a1023688a54e8cca3ee5aed3240a1d1008949fbef254fa1278a687@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(3, (@@STRING:0c47f7918a4cec19384d1c67a7dcf4c5a975b357f7c099d8e6c24c52cbdb3c05@@)),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    PORTRAIT_REP(0x0003, 0x00000001),
    MSG_NPC(3, (@@STRING:469a8e77823a71e7f90ea3997dad3522d6156afa0600ba75ac252711261bc38c@@)),
    MSG_NPC(3, (@@STRING:629cb779fc63e81c5b2a87eae5b87b7177518623f39c465f4f5339d423188f6e@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(20),
    FANFARE_PLAY2(473),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    WAIT(90),
    MSG_NPC(-1, (@@STRING:3aa9e4b920a01636c5b8016bd877d32e67be4c870ae1d515e7720d6f5ffea0ca@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:f46fa3d70c373e93998b5dd53610e0438013bdd17af9d0df2942f79e5c3e35ed@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:9004bab410dd8cf0718c72a21028522c34d6c8f80260527d0c6119517a729def@@)),
    MSG_NPC(3, (@@STRING:cf1a2526f4d48461f757abb88fe342adca912287f153bb162db0c6b63bc22e4a@@)),
    MSG_NPC(3, (@@STRING:7a2de00d8bd6b966280922fa03cc456fe57b02e02ef4dbab48ff36edfc23a5a1@@)),
    MSG_NPC(3, (@@STRING:7a18d765b34ad3bdfaaae02af648bd5fa4d8d570e852ad28e44ac2f04949b7ae@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(20),
    WAIT(90),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    MSG_NPC(-1, (@@STRING:8bc0b17a36e3992e19591490d885645fde95747fb9b5095ef4faf4366e0d1d08@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:309b5cda1d5400f75f95fc65ad7057b3802dcbe37363c62c48285d93ab10a86e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    MSG_NPC(-1, (@@STRING:dd69cf90c2c15900055fcb81775b5a88f0e8023b08f978d329296af737b352cc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:6ae1afac03f0e9825e87ecd1561beff2d31f8e61a154d735e323fe8a4290f279@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    MSG_NPC(-1, (@@STRING:f9603f768844b3956b8c07ae69de99ac9d529411e7e2e0bd0ad97ba193ddab0b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:f9fa431b02fabece29cf88313dd7549a1bde210912f9717ca1b96aae4979cdb3@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    MSG_NPC(-1, (@@STRING:850ee9219893d512e0846501b7cb9633e74e89f66920c70537733f1534623457@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:f5e9f3fbd32b6252931c06f6a90f3349f27898fa0949d0d972a2cc2a8f8dc932@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(20),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(60),
    MSG_NPC(3, (@@STRING:a09da4f6640b2e5a7081886a3b74b6f2b519b6f01d45b41b373df4242be37949@@)),
    MSG_NPC(3, (@@STRING:c64a30ff56e87f8e3f74f5caa04d663d096b4c6a860c37cfad419d3dcfabbb2a@@)),
    MSG_NPC(3, (@@STRING:475bf1bdea1e5a39e7c9083faa315bd4516a96977f1f68e6ec06b5483e097ad9@@)),
    MSG_NPC(3, (@@STRING:ba6a8d92f3bdd579122b3629931779e365bbf6ffbd06a180c170be8dfc5ca1df@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(20),
    WAIT(60),
    MSG_NPC(3, (@@STRING:daac682eb4b54e3b56c0facabae4e06e867894e2c3740ee49d75b19a997fdd19@@)),
    MSG_NPC(3, (@@STRING:53ab2a54a407728ccd5d7375dd2171b670fb47a3a94d7ea7e6438b620d59aff2@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(150),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:248cea0fd78420cbbe6e3a0a69960383d6349d822b4f28c21d3e7340c38d08af@@)),
    VARIANT_DEFAULT((@@STRING:9337b65e663dcc04469dccbd3c578395645a9123ce278f3f5d73eeed79a95860@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    { 0x62, 0x00,  0x0100, -0x00000010,  0x00000000, NULL },
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:a27cd42a136a9cee5a8daba502e1f350997989d728ebc4da438c48176ddc692d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:122c0f82a07c4e179f89c4ed52ad81b47e992fd3e55f9f67b00c297b1d37c817@@)),
    VARIANT_DEFAULT((@@STRING:5d19d4fcdf71913945f2c918f024fb69fdd11b77a2da47f827aab49949db9f90@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:70a6d9b299b6eb5a85dd7b68c7fca5af018fd5984c2996f8d93c2e6e69879ae0@@)),
    MSG_NPC(2, (@@STRING:2170c0cdf8541919ff946d05f92d57a89b79eec3233516ac0287f112d3c10029@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    WAIT(30),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:649f1614080ce2706b7ce4b31a46949cb4818ac7cc79e5736530fbc01a0e77be@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(20),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    WAIT(120),
    ALERT_CUE(9),
    MSG_NPC(-1, (@@STRING:ec6a7c3a94bd332566a84c8c32027dbadb8849b3673f1a72a21dfc9689ea6edf@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(8),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(60),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    MSG_NPC(-1, (@@STRING:c4efad50db4baef6ddcac54b97da83c3db707e0c4dc5ae0e62917631435888b4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    MSG_NPC(-1, (@@STRING:bf3a8e09dfa1210d99f3618cf45c9f1b0c9e7b1fc0a5f0cb3e53c3cf67952d5d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:d877d75a505591d7f6d71ad54f6bb1cfa8b635a7acbf573713f8b902b79b3f4d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:d65fe5f0f5337f7d4e1d2be7db2f359cc0f4f34527e467d57894336112107d37@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, 0, 1),
    MSG_NPC(4, (@@STRING:4ef3a019c0b98b18fd4c4caa1f3c7f93e7738ed84f10985fe738d9a772afd19a@@)),
    MSG_NPC(4, (@@STRING:d6ce80aa7f155f6b41529f3101c4c8398bc9ffb50fcb3a5ff3dc8dd16dec5978@@)),
    MSG_NPC(4, (@@STRING:c98daed4ba1aba300c5eb3c016ae3eec9060c236d560232c3de7b72e778570b5@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    MSG_NPC(-1, (@@STRING:2f0c1bab059e024a05898ab4fa369a9994ebb0049122b84a2b9d545df3480ce8@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(9),
    ALERT_CUE(11),
    ALERT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(60),
    MSG_NPC(-1, (@@STRING:5b93d785d002c8b6c2f5cd0468fecc05b97cecb21927fdc10c75c5b1d705d0f8@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    MSG_NPC(-1, (@@STRING:446cc7dff5c166039bca969b6be13c8db3a42b9ff36c47f7b84863f45ffff439@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:23193a8dfe60e5d9f059d67c03fcd43738e6567a56784cc44d8111e39ad85b60@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:bf3eefcf0331551cd65c23b41b72e917e79acf06c30a47e600e627b1d6f9419f@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    PORTRAIT_POS(5, 0, -1),
    MSG_NPC(5, (@@STRING:b3930ec20f7cae80892d4dfdf9336549a2d352fe26fd49ed8ddeae7375741c31@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:e5e524d334cdfef1742383178033c4f7e4b8971527852620646a2c11dd8ffcfb@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(60),
    MSG_NPC(-1, (@@STRING:8913d81ef2555b7f97083e140c39b60a338f810a6aaa6b740984f67383a4d9e9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    MSG_NPC(-1, (@@STRING:01e8cd62d61ddac9561164b16a654c97f858ea745642f238899570eafba46519@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:ccf1637e713baf74e93a12c6cdc424c02bc9c88f09fa08bc442d77b72cf966b1@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0006, 0x00000000),
    PORTRAIT_POS(6, 0, 1),
    MSG_NPC(6, (@@STRING:849ad498e6578889a3259ebed720517dfa0f41392e8ee3847b0d6068e0ac7673@@)),
    MSG_NPC(6, (@@STRING:d8f58fc13f09dc5ec48e58cdd063e1e79d990d77e9fdd8ab5fbf7b9be6b54e70@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    WAIT(30),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    ALERT_CUE(15),
    WAIT(30),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:e7f849b6c1c066599c062543c2ec1c0f5901303dd6800e6088a3f7e58a67cbcf@@)),
    MSG_NPC(3, (@@STRING:2ad38c2a4ef316bcb51abb4c4433d484d8283686c7b002a455b830adfbc855ec@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(60),
    MSG_NPC(3, (@@STRING:92e43af7bd43bce452beebf8ba3e2b4a847f1c418eb0387f567e93e6e4a254d7@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(20),
    MSG_NPC(-1, (@@STRING:30ac7d045ced9e30c30861235f749b86f1e636af5600541f323bd5003b2b0d2e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:140cffa57c15be93c069748f3139ec64f5c9e5a33c847b46f740e7cb19cf29ae@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:ea4a5538c5e5d6d21cf693229eaba7567318889ebad66db07b0b7243806c0332@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(20),
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(7),
    WALK_GRID(256, 84),
    WALK_GRID(256, 85),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ROTATE_TO(30, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(5),
    MSG_NPC(-1, (@@STRING:26364ccb51e8608af9f6f337d193cbc9bf42b8d36770e492e81183960da0456e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(-1, (@@STRING:0591d9cf4437912bd6159ef17abc81b821015cedcbf36ce26a7c90655c823f89@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    MSG_NPC(2, (@@STRING:34313adb8486f51f97e34c4a8c59e34690e6b8acc7c4ca99d0ea9a955ce42b4a@@)),
    MSG_NPC(2, (@@STRING:d28d6bba79cb924377dd4805059deff14e5df33d0d9f8e70ee3e90e3a9be0af4@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:30594cbf1c40dcb9068d7a53c4d8e676762f1ab4ead033ef918d44952a7079a3@@)),
    VARIANT_DEFAULT((@@STRING:79eafd02ada70ff6dcc25b502e8bd605c8b7dbd5af4b663d10102e4f0bb654af@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};


























static const struct ScriptCommand s_gs1_g26_s0_lives1_dlg0[] = { /* 0x8156884 */
    DEBUGINFO_O(7518),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 86),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    SET_DIR_WAIT(DIRECTION_SOUTH, 0),
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000010, NULL },
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(15),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    WAIT(30),
    WALK_GRID(256, 84),
    WALK_GRID(256, 87),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ROTATE_TO(20, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives2_dlg0[] = { /* 0x8156c44 */
    DEBUGINFO_O(7581),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    WALK_GRID(256, 88),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WALK_RELATIVE(256, 0, 8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(7),
    WALK_GRID(256, 89),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(30),
    ROTATE_TO(30, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    WALK_RELATIVE(256, 0, 16),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    ALERT_CUE(7),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives3_dlg0[] = { /* 0x8156eb4 */
    DEBUGINFO_O(7623),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    AWAIT_CUE(8),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(5),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    AWAIT_CUE(8),
    HALT,
};




static const struct ScriptCommand s_gs1_g26_s0_lives4_dlg0[] = { /* 0x81570c4 */
    DEBUGINFO_O(7662),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(3),
    COND_EQUAL(0, /* to label */ 3),
    COND_EQUAL(1, /* to label */ 4),
    COND_EQUAL(2, /* to label */ 5),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    JUMP_LABEL(6),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    JUMP_LABEL(6),
  LABEL(5), /* = 0x05 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    JUMP_LABEL(6),
  LABEL(6), /* = 0x06 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
  LABEL(7), /* = 0x07 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 8),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 8),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(7),
  LABEL(8), /* = 0x08 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WALK_RELATIVE(76, 8, 0),
    AWAIT_CUE(9),
    WALK_GRID(76, 90),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
  LABEL(9), /* = 0x09 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 9),
    AWAIT_CUE(9),
  LABEL(10), /* = 0x0a */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 10),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(30),
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WALK_GRID(256, 91),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};


static const struct ScriptCommand s_gs1_g26_s0_lives5_dlg0[] = { /* 0x81575e4 */
    DEBUGINFO_O(7748),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(3),
    COND_EQUAL(0, /* to label */ 2),
    COND_EQUAL(1, /* to label */ 3),
    COND_EQUAL(2, /* to label */ 4),
  LABEL(2), /* = 0x02 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    JUMP_LABEL(5),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    JUMP_LABEL(5),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
  LABEL(5), /* = 0x05 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
  LABEL(6), /* = 0x06 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 7),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 7),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(6),
  LABEL(7), /* = 0x07 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(10),
  LABEL(8), /* = 0x08 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 8),
    AWAIT_CUE(10),
    WALK_GRID(76, 92),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
  LABEL(9), /* = 0x09 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 9),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(30),
    WALK_GRID(256, 91),
    AWAIT_CUE(10),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives6_dlg0[] = { /* 0x8157a64 */
    DEBUGINFO_O(7823),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(3),
    COND_EQUAL(0, /* to label */ 2),
    COND_EQUAL(1, /* to label */ 3),
    COND_EQUAL(2, /* to label */ 4),
  LABEL(2), /* = 0x02 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    JUMP_LABEL(5),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    JUMP_LABEL(5),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
  LABEL(5), /* = 0x05 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
  LABEL(6), /* = 0x06 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 7),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 7),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(6),
  LABEL(7), /* = 0x07 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(11),
  LABEL(8), /* = 0x08 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 8),
    AWAIT_CUE(11),
  LABEL(9), /* = 0x09 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 9),
    AWAIT_CUE(11),
    WALK_GRID(76, 93),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(11),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(60),
    WALK_GRID(256, 91),
    AWAIT_CUE(11),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives7_dlg0[] = { /* 0x8157ee4 */
    DEBUGINFO_O(7898),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_RANDOM(0, 60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    CJUMP_RANDOM(3),
    COND_EQUAL(0, /* to label */ 2),
    COND_EQUAL(1, /* to label */ 3),
    COND_EQUAL(2, /* to label */ 4),
  LABEL(2), /* = 0x02 */
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    JUMP_LABEL(5),
  LABEL(3), /* = 0x03 */
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    JUMP_LABEL(5),
  LABEL(4), /* = 0x04 */
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
  LABEL(5), /* = 0x05 */
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(6), /* = 0x06 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 6),
    AWAIT_CUE(20),
  LABEL(7), /* = 0x07 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 7),
    AWAIT_CUE(20),
  LABEL(8), /* = 0x08 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 8),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(9), /* = 0x09 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 9),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives8_dlg0[] = { /* 0x8158324 */
    DEBUGINFO_O(7969),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_RANDOM(0, 60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    AWAIT_CUE(20),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives9_dlg0[] = { /* 0x8158684 */
    DEBUGINFO_O(8026),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
  LABEL(4), /* = 0x04 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 4),
    AWAIT_CUE(20),
  LABEL(5), /* = 0x05 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 5),
    AWAIT_CUE(20),
  LABEL(6), /* = 0x06 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 6),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(7), /* = 0x07 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 7),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives10_dlg0[] = { /* 0x8158a44 */
    DEBUGINFO_O(8089),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_RANDOM(0, 60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    AWAIT_CUE(20),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives11_dlg0[] = { /* 0x8158da4 */
    DEBUGINFO_O(8146),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_RANDOM(0, 60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    AWAIT_CUE(20),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives12_dlg0[] = { /* 0x8159104 */
    DEBUGINFO_O(8203),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_RANDOM(0, 60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    AWAIT_CUE(20),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives13_dlg0[] = { /* 0x8159464 */
    DEBUGINFO_O(8260),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_RANDOM(0, 60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    AWAIT_CUE(20),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    WALK_GRID(128, 95),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives14_dlg0[] = { /* 0x8159804 */
    DEBUGINFO_O(8321),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    AWAIT_CUE(20),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives15_dlg0[] = { /* 0x8159b04 */
    DEBUGINFO_O(8372),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    { 0x54, 0x00,  0x000b,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x0000000a,  0x00000000, NULL },
    WAIT(2),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_RANDOM(0, 60),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    WAIT_RANDOM(0, 60),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    AWAIT_CUE(20),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 2),
    AWAIT_CUE(15),
    CAMERA_PAN(256, 94),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g26_s0_lives16_dlg0[] = { /* 0x8159e94 */
    DEBUGINFO_O(8432),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
  LABEL(4), /* = 0x04 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 4),
    AWAIT_CUE(20),
  LABEL(5), /* = 0x05 */
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    WAIT(60),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 5),
    AWAIT_CUE(20),
  LABEL(6), /* = 0x06 */
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    WAIT(60),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 6),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 120),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(7), /* = 0x07 */
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    WAIT(30),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 7),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g27_s0_station_sref_script[] = { /* 0x815a254 */
    DEBUGINFO_O(8495),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g27_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g27_s0_station_sref_script }; /* 0x815a294 */

static const struct ScriptCommand s_gs1_g27_s0_lives0_dlg2[] = { /* 0x815a2a0 */
    DEBUGINFO_O(8504),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives1_dlg2[] = { /* 0x815a300 */
    DEBUGINFO_O(8513),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives2_dlg2[] = { /* 0x815a360 */
    DEBUGINFO_O(8522),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives3_dlg2[] = { /* 0x815a3c0 */
    DEBUGINFO_O(8531),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives4_dlg2[] = { /* 0x815a420 */
    DEBUGINFO_O(8540),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives5_dlg2[] = { /* 0x815a480 */
    DEBUGINFO_O(8549),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives6_dlg1[] = { /* 0x815a4e0 */
    DEBUGINFO_O(8558),
    { 0x51, 0x00,  0x0062,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_BOY),
    RET,
};

static const struct ScriptCommand s_gs1_g27_s0_lives6_dlg2[] = { /* 0x815a520 */
    DEBUGINFO_O(8565),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:b6636e9b70a87d9b6d0869ae06b32800968118e01ae187b41130a184f91e1a79@@)),
    MSG_NPC(1, (@@STRING:063a2110dec4042ac6bee063f62d1af6493a8404e4c4213358af41a4324c7b65@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives7_dlg1[] = { /* 0x815a620 */
    DEBUGINFO_O(8575),
    { 0x51, 0x00,  0x0061,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_GIRL),
    RET,
};

static const struct ScriptCommand s_gs1_g27_s0_lives7_dlg2[] = { /* 0x815a660 */
    DEBUGINFO_O(8582),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:79fe9f575a3f84f6c7e5688e23d27cb7c9bea9f9f26b55870272db9c2383c34c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives8_dlg1[] = { /* 0x815a714 */
    DEBUGINFO_O(8591),
    { 0x51, 0x00,  0x0060,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(MOVE_RANDOM),
    RET,
};

static const struct ScriptCommand s_gs1_g27_s0_lives8_dlg2[] = { /* 0x815a754 */
    DEBUGINFO_O(8598),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:a09251f139714829921e87fb3be5a1c092f25e9dd83163262f9dc96627f7c3ee@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g27_s0_lives9_dlg2[] = { /* 0x815a810 */
    DEBUGINFO_O(8607),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:35e999a0c51178ce99488e6777e9cc2ad90699190f1b4820f6def761f4ba104c@@)),
    MSG_NPC(1, (@@STRING:43d40b3471c5f0149b7e945df9ddb7d23acf6f1ee2fb322a4de13d7e148383d6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g28_s0_station_sref_script[] = { /* 0x815a904 */
    DEBUGINFO_O(8617),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_STOP,
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs1_g28_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g28_s0_station_sref_script }; /* 0x815a9a4 */

static const struct ScriptCommand s_gs1_g28_s0_eff0_script[] = { /* 0x815a9b0 */
    DEBUGINFO_O(8632),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_GRID(256, 112),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(256, 113),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    CAMERA_PAN(256, 112),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_GRID(256, 114),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WALK_GRID(256, 112),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g28_s0_lives0_dlg0[] = { /* 0x815aae0 */
    DEBUGINFO_O(8654),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0008,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0009,  0x00000067,  0x00000000, NULL },
    ALERT_CUE(6),
    WALK_GRID(256, 99),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9dbab4444a6625af4dc4b40b217fc7ba57e7d6af8ba3c130312f3541e154f4de@@)),
    VARIANT(/* == */  1, (@@STRING:3f521a5844cb161c5849d4744fccddb5b8c4210a5e51704a49091c158b41e832@@)),
    VARIANT_DEFAULT((@@STRING:46588057329bcb569bf3558c3f451d5957677eec3a0f00479ec47855238afb70@@)),
    VARIANT_DEFAULT((@@STRING:70b8383bca4da01d99d559def3ff8b70ce61a9e7d3225accacd535ef749a4217@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:988fe5bfc626f3a4d1a9ea42a3b40aebb15de9b40d6257fafba15ca9c198f620@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:0f74c0f5399c5b21a73b7499d6c6d9bc4a08e5403cd7a65c799038292b7efa4a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(6),
    WALK_GRID(256, 100),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(5),
    BGM_SWITCH(MUS_RISING_FEAR),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:b5fc107147e9bb7673806fe27e36df09c578ca31aa68f28b8f8c46c545537de4@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:537dfe181d9b49520e5a3f4e3e6801866dda4558b588a58a14035c01ab15b530@@)),
    VARIANT_DEFAULT((@@STRING:41736c18d8ee3ba161146bcf9460a96b37e8c5435d872f96523da00cd4b8fc73@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, 0, -1),
    MSG_NPC(3, (@@STRING:73602188bfb34ec1124b4a07d62d602fec65b12836f3e3fe0e96bf2388e3b978@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    MSG_NPC(1, (@@STRING:6bef43299e1e36dc55e0099cbe75a0246873f362f2a00ff097c66b67eaaee5fc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000003),
    PORTRAIT_POS(5, 0, 1),
    MSG_NPC(5, (@@STRING:8d241448495b02f42bc9d552c804b6bf707e5b1ac39ba2a46bf3194e5bcb7cb9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0006, 0x00000000),
    PORTRAIT_POS(6, 0, -1),
    MSG_NPC(6, (@@STRING:04e055a8bc43173228211b1c9808434d777178b69bebaaef19c444ccae996c13@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0007, 0x00000000),
    PORTRAIT_POS(7, 0, 1),
    MSG_NPC(7, (@@STRING:f5deb8457c571b51da04f40c3ac36a1543303bef86806783bd06c5018d6831b6@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(60),
    ALERT_CUE(8),
    WAIT(30),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    MSG_NPC(3, (@@STRING:31eeccfba9fbaffc7e845fc37cba04b7c0a899dc52202f90b7d4f7d9ec1d6cb1@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(60),
    WAIT(60),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    MSG_NPC(-1, (@@STRING:9bfa9bc6c687b9272cf0c55de1524dc36116741a99f7520512c5db5df6825de0@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(13),
    ALERT_CUE(8),
    ALERT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(5),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:ef8457683c2fa0633a36b33a838773bedaa57cbb94d3ec6f4e30c473c9fba349@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_BOTTOM_FLIP, 0x0001, 0x00000003),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9d8c58b3e034c041503861a833732ee737c371ceec7784b851ab36a342f96463@@)),
    VARIANT(/* == */  1, (@@STRING:3053d6ed25ba07d13442ca08c0f89e2096d73b2c5726c278324e9095a9e6b2f5@@)),
    VARIANT_DEFAULT((@@STRING:9d8c58b3e034c041503861a833732ee737c371ceec7784b851ab36a342f96463@@)),
    VARIANT_DEFAULT((@@STRING:68a203b696822f53f89d740a26cf6df252f8b8e35f52395e05798410b6e193b9@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:ab3f7bf0f79f91f0e3345cc3b54c694d4641fd651641a00a13f469fccd864e13@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:ee2564ee09a698808389d32b86ec93429e3f1f6fac664213995437c795e57b3e@@)),
    TEXTBOX_CLEAR,
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(20),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(30),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(60),
    MSG_NPC(-1, (@@STRING:bb3a2b166cc0324307a2adfbf4edc5dd13330860cea5ffb3e4116ef49a1715c5@@)),
    MSG_NPC(-1, (@@STRING:3490051441a498887f605b339cf9aa0311cbe8f0389dae809ea7114e3c595a31@@)),
    MSG_NPC(-1, (@@STRING:342771fc9104aa4fadfdf1fae03690e542ac73ed965948fd20b20f06d6d94732@@)),
    MSG_NPC(-1, (@@STRING:da2963f38aeaa83cc8d92f3953aa341f2b30084359cf507b24920933cb5fccc9@@)),
    MSG_NPC(-1, (@@STRING:f8a0127d0b9cb1d5b9b9547cc7bd640565964637bb38734e9eb6e3711a1d3810@@)),
    MSG_NPC(-1, (@@STRING:bdc27b241d3114e7372e12bac611726351c4d39aa06f22b4896b7abda41cfbe2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:2f9a73f04054abd5d23866310f3cf0a1f9d77f7d3e4f7ab8a31e81a3a7eea38d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:41e39910f78d1ec7deb3fa3514a7a0d5070db7a22ad60e064651ebfe747a68ba@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:dc15d2402e8c08fbd61b78c75e5c4ed6b7e6f4a91a9c44da2254f9c5500d0ae5@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    WAIT(15),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x00000005),
    PORTRAIT_POS(1, -2, 0),
    MSG_NPC(1, (@@STRING:de5f51e6f92e7e38a44d0ee5d9d37c2dfb5b7ad599e60376201fad53da74c86a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP_FLIP, 0x0001, 0x00000000),
    MSG_NPC(4, (@@STRING:60616098427cf5f2117a72c3d632344bf406753daae1d048327ca0563123e376@@)),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:05d5a2f5bb00896bcf4a67c9b23e255c61cacfd1d37874e4a4f0d6a7d84b93f6@@)),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000001),
    MSG_NPC(4, (@@STRING:fbcd32408554f057490cef76ba242f3431f1a15043c9463b98a945081806d34a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:00283d8148d742fc25b543d71a07e5aa70e8354fb477cd890cf9d684d45ba9ac@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    BGM_FADEOUT(150),
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:546e4475e6b69ed8b61fa1c1f2276a9e2db01caff86fd65b2cb66661537946c5@@)),
    VARIANT(/* == */  1, (@@STRING:e59655428b7482dff7bcf9c4438f8d8ee87b8079f45a014f7e3004f6d4b5a3c8@@)),
    VARIANT(/* == */  1, (@@STRING:e8313f89f9651e8f826895c91111cc5f81461bba4a6fdcbae5b9489e922c4fe8@@)),
    VARIANT(/* == */  3, (@@STRING:546e4475e6b69ed8b61fa1c1f2276a9e2db01caff86fd65b2cb66661537946c5@@)),
    VARIANT(/* == */  3, (@@STRING:e59655428b7482dff7bcf9c4438f8d8ee87b8079f45a014f7e3004f6d4b5a3c8@@)),
    VARIANT(/* == */  3, (@@STRING:e8313f89f9651e8f826895c91111cc5f81461bba4a6fdcbae5b9489e922c4fe8@@)),
    VARIANT_DEFAULT((@@STRING:546e4475e6b69ed8b61fa1c1f2276a9e2db01caff86fd65b2cb66661537946c5@@)),
    VARIANT_DEFAULT((@@STRING:e59655428b7482dff7bcf9c4438f8d8ee87b8079f45a014f7e3004f6d4b5a3c8@@)),
    VARIANT_DEFAULT((@@STRING:e8313f89f9651e8f826895c91111cc5f81461bba4a6fdcbae5b9489e922c4fe8@@)),
    TEXTBOX_CLEAR,
  LABEL(17), /* = 0x11 */
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:3423fa5622940697d435e245541a1c10dfa9f8e9d60abd3821463b9e4f49ba74@@)),
    CHOICE(/* label */ 18, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */ 19, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(19), /* = 0x13 */
    MSG_NPC(1, (@@STRING:97cab9f4396336cfa684fa1c1ca896935f72c6d53b17ff91fe2ccf59daa45715@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(17),
  LABEL(18), /* = 0x12 */
    PORTRAIT_REP(0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a70d5657abe860e73dd6f1a9ba33d383198071683f996b850dc1a3f69cf90b63@@)),
    VARIANT(/* == */  1, (@@STRING:219f05403b8402dabb7a7f85bc83429acf3405b8bd35f9f05ff2d92fab4094e4@@)),
    VARIANT_DEFAULT((@@STRING:b98b2f0bd6694e20d5b9252221665d978374ce9573c51826a2a3faa30839b70c@@)),
    VARIANT_DEFAULT((@@STRING:219f05403b8402dabb7a7f85bc83429acf3405b8bd35f9f05ff2d92fab4094e4@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:ad5f2df53a207cd8f2dcbf45c31199cbe020b1dbc81c4919d8102d489141e0e1@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(20),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    AWAIT_CUE(5),
    WAIT(15),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(60),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:761d70880df4b850c848e7375c9e18ca06eafa41fcd274383cfb18ea130c38ce@@)),
    VARIANT(/* == */  3, (@@STRING:761d70880df4b850c848e7375c9e18ca06eafa41fcd274383cfb18ea130c38ce@@)),
    VARIANT_DEFAULT((@@STRING:761d70880df4b850c848e7375c9e18ca06eafa41fcd274383cfb18ea130c38ce@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    ALERT_CUE(20),
    FANFARE_PLAY2(465),
    WAIT(30),
    MSG_NPC(-1, (@@STRING:f967ac4f35aa084dd30412e0a4a007a04cbedd898ed97f4ec6efb84c54285c7c@@)),
    MSG_NPC(-1, (@@STRING:9f435eb7fbdd3fbc54327ac8fa3f9f542806f192b6d626ea039ede567f5b6ea0@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0004, 0x00000006),
    MSG_NPC(4, (@@STRING:d9c8c9662dd5c11cd1564cbe9c83d27962154f2341d803d91fe2a349992e836a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(20),
    AWAIT_CUE(5),
    MSG_NPC(-1, (@@STRING:5df9796e0d1c9b71ecd998319f77232a5b820d7f93746e1bb7f411043e343029@@)),
    MSG_NPC(-1, (@@STRING:82aca3db4549224f67390e92c51db6084f0588343767da39dbc5be3156b9f452@@)),
    MSG_NPC(-1, (@@STRING:74113aee27d376039c2fc8ed66ddc328a1106d92c17800b3257559deaa13f3c4@@)),
    MSG_NPC(-1, (@@STRING:973383b9fc25efa64e4f8159748918ba8defb59f54678abc39227cdeb6a635dd@@)),
    MSG_NPC(-1, (@@STRING:aeb3a67acb82237232f212ac327693268437b6dd736b018889572fd5a89b2193@@)),
    MSG_NPC(-1, (@@STRING:63998d6d82ed0d81d3bb26a014224be631d932c83386aa774fb0b3a81dcff3f2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:52086c5e6270394cb22833a1e02f165f91136ab3f5300c54db1b917f6b5da624@@)),
    VARIANT(/* == */  3, (@@STRING:042888c5167cd5b7c52381e928fa3ad37a43f6f29eedaae732b1059cbbcdf692@@)),
    VARIANT_DEFAULT((@@STRING:042888c5167cd5b7c52381e928fa3ad37a43f6f29eedaae732b1059cbbcdf692@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(20),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3035d9de7b886ebd5db1956f5eb7204d36839165991a25f253f147f0329af704@@)),
    VARIANT(/* == */  1, (@@STRING:6eaa07006a414ae150e7b5373177976a0e285f1355aa5de29631a04fdb260350@@)),
    VARIANT(/* == */  1, (@@STRING:8f369775272aefe53ff1ac583638de6a6517357e605ce235c582093c3da229e2@@)),
    VARIANT(/* == */  3, (@@STRING:34c3449e65b2c93ee1df591664c8889842601a6f88022927cba9d7227cab7cf3@@)),
    VARIANT(/* == */  3, (@@STRING:82c9c0ec61ab311c47257b279c0e9bab0e223b21ed51972baa70a1e38de67e0d@@)),
    VARIANT(/* == */  3, (@@STRING:8f369775272aefe53ff1ac583638de6a6517357e605ce235c582093c3da229e2@@)),
    VARIANT_DEFAULT((@@STRING:3035d9de7b886ebd5db1956f5eb7204d36839165991a25f253f147f0329af704@@)),
    VARIANT_DEFAULT((@@STRING:82c9c0ec61ab311c47257b279c0e9bab0e223b21ed51972baa70a1e38de67e0d@@)),
    VARIANT_DEFAULT((@@STRING:8f369775272aefe53ff1ac583638de6a6517357e605ce235c582093c3da229e2@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2cab4906de03704c736799187e86759cece653b65394cbe1227a73de1a16b360@@)),
    VARIANT(/* == */  1, (@@STRING:677c06e4149de72d70b179776137a4acd34646f14b801497fc7c5718c3cc775b@@)),
    VARIANT(/* == */  3, (@@STRING:b647ee07d66a1199684d2893a8e7596b3d0b6207098d8b30f8eeef0ac7269697@@)),
    VARIANT(/* == */  3, (@@STRING:677c06e4149de72d70b179776137a4acd34646f14b801497fc7c5718c3cc775b@@)),
    VARIANT_DEFAULT((@@STRING:2cab4906de03704c736799187e86759cece653b65394cbe1227a73de1a16b360@@)),
    VARIANT_DEFAULT((@@STRING:677c06e4149de72d70b179776137a4acd34646f14b801497fc7c5718c3cc775b@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000003),
    MSG_NPC(4, (@@STRING:4b0ae8aa0f46d2a3b49c6fc2516ae7efa6ade8dd2da9b68cfd8ab012c5157509@@)),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:272aad5315d6da67bae1916b165da2ab9b922ff11c02c5587a1eda9eb7917b72@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, 0, -1),
    MSG_NPC(3, (@@STRING:9f618652542d89837e6a2a8182bcafe3bfd4072a1616890ca2d63eb8327694d5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(20),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 85),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000003),
    MSG_NPC(4, (@@STRING:a120b672d1b0f26c1085f3369efb13c55580a4563fc5ba91737352253dbef156@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(20),
    WAIT(60),
    MSG_NPC(-1, (@@STRING:5b1a149ad0667c637f596bee95cf48c5518cf28e898ce9aaebf4382716f6685e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(5),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP_FLIP, 0x0004, 0x00000006),
    MSG_NPC(4, (@@STRING:d9c8c9662dd5c11cd1564cbe9c83d27962154f2341d803d91fe2a349992e836a@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    MSG_NPC(-1, (@@STRING:3194217dfe92be0569cc537f58e36ade8bf669eea4bc081bb81f6c008954d21e@@)),
    MSG_NPC(-1, (@@STRING:63990ae96bc6643be60c56d7b2be0bc754f286aeac37238382a5124b198fbebd@@)),
    MSG_NPC(-1, (@@STRING:dfb828b624b0eb1dbe2a06b4504e962e21030d7354c6318eec90bd18bef9418b@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000006),
    MSG_NPC(4, (@@STRING:0115762ee1840efc8c0459b65bd7e58e6e05188d64cd1b3b2aea363db5a8a08b@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000003),
    MSG_NPC(4, (@@STRING:0ac7f80aca168219a22bdb7533eec221045ac0483103452461696cfa582d9841@@)),
    WAIT(15),
    ALERT_CUE(20),
    PORTRAIT_REP(0x0004, 0x00000002),
    MSG_NPC(4, (@@STRING:2b5d342a46634a7d4e877af0e679fc12fa9ef075086c5a45c95e4d5bc143f8ad@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    PORTRAIT_REP(0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:3dd6af67a911fe9f624d992c8aa1e04b54a60d1881b1c2800a08367a2dc44315@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(9),
    ALERT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 104),
    WAIT(60),
    MSG_NPC(5, (@@STRING:f43179345f8b6fe82359bb451fcd5aece00bd55b8ed17ab1c4e37c267288d6f2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000b),
    MSG_NPC(1, (@@STRING:359b869ede0b80a58a837e1ab87039549086fd71c550b1bf6d8863bdab7f91d3@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(5, (@@STRING:2505a75245d9ff3631d44ed0ffc97acd7cc2d34be42fc0c99c18b29084508a7b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0004, 0x00000006),
    MSG_NPC(4, (@@STRING:6a91273879c717ccfbb2a3ec5a7d63f70f1d7c79e97a2e99cb6dfa6dd8619f6a@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    MSG_NPC(6, (@@STRING:f9b9eeeac6f88c251440a3bd0948c78873a18a63e7a72e5e8ac4a8f69ca00d1e@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(12),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    MSG_NPC(7, (@@STRING:99ecf1951ba3c0d649b5a4b2f313874e804b5a8ac43e9a82b92957de69b80c58@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000b),
    MSG_NPC(1, (@@STRING:afb9627d1648e21fed746d5a2d80aaf8aae791b6cb9b5fed6202df0c2a4563e2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000003),
    MSG_NPC(4, (@@STRING:73c8c254262136f3dd1ef8c76f34be35bd0ebc862071c97ce5ec8b9878aa03da@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:c138e182e9e91fb6a6afb9b81e156b62dd4fc7b260e6c62a407e315e22fc5eda@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    MSG_NPC(-1, (@@STRING:405b3174d09f7ae34e7e43b5a8161c6aeca8d7d76bcecf06f6c8c38c718f6e63@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    MSG_NPC(-1, (@@STRING:68c64d1749e32bd98a3abe7ff8da08a7be8e911c5cc714260fc071cefe0d13f3@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    MSG_NPC(-1, (@@STRING:a7311d721c1dc266efcad66db21af31cec7abec2b73c9cffbeacba5c237dd331@@)),
    WAIT(30),
    ALERT_CUE(20),
    MSG_NPC(-1, (@@STRING:f8abfe5703e70ec5cd523a11f4dc99ab5d000a903629545096e8c39196fd4836@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:1e8bdd7834402d1e05baed786af8b838a958e1feca4ed2ac11d63e0a57328948@@)),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    ALERT_CUE(20),
    ALERT_CUE(8),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:304eb0adbd575e909a57e52312f7c2578b3023a578a4751d65527f593e943909@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(16),
    ALERT_CUE(9),
    ALERT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(5),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    WAIT(30),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(5),
    ALERT_CUE(20),
    WAIT(60),
    MSG_NPC(5, (@@STRING:d163cde7ca30dd95b9b515bccd1815ea603a91e203aaa3de228036f7eb196dad@@)),
    MSG_NPC(5, (@@STRING:587a71fd40be1a79117ea8ebadb040858bdb807a4a9b959477836f47bb1b87ba@@)),
    MSG_NPC(5, (@@STRING:9ec5bf7097b8c6c72d10ce7182a31db694943bd7d66b54baa779ef2d938295eb@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(15),
    ALERT_CUE(20),
    WAIT(60),
    MSG_NPC(5, (@@STRING:466680c8a8e279c0fe823c97c7bcb700d416634cbc6ff4637b0bc0e0926aaac4@@)),
    MSG_NPC(5, (@@STRING:0c99882fa864cee3d646a567155f963ba4712b521fe9b9a7527479d3ab1941e8@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(20),
    MSG_NPC(-1, (@@STRING:f8abfe5703e70ec5cd523a11f4dc99ab5d000a903629545096e8c39196fd4836@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(3),
    HALT,
};







































static const struct ScriptCommand s_gs1_g28_s0_lives1_dlg0[] = { /* 0x815dbb8 */
    DEBUGINFO_O(9193),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(256, 101),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(30),
    WALK_GRID(256, 102),
    WALK_GRID(256, 103),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    FANFARE_PLAY2(464),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    FANFARE_PLAY2(463),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(5),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 85),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(30),
    ROTATE_TO(8, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(15),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 85),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_SPINLEFT1, 104),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(6),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives2_dlg0[] = { /* 0x815e298 */
    DEBUGINFO_O(9306),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(8),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives3_dlg0[] = { /* 0x815e488 */
    DEBUGINFO_O(9340),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    WALK_GRID(256, 104),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WALK_GRID(256, 105),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(30),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(15),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 105),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 106),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WALK_GRID(768, 106),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives4_dlg0[] = { /* 0x815eaa8 */
    DEBUGINFO_O(9441),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x001a,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives5_dlg0[] = { /* 0x815ebb8 */
    DEBUGINFO_O(9461),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    AWAIT_CUE(11),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives6_dlg0[] = { /* 0x815ec78 */
    DEBUGINFO_O(9476),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(22),
    AWAIT_CUE(12),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(12),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives7_dlg0[] = { /* 0x815ed38 */
    DEBUGINFO_O(9491),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 34),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(60),
    CMD_UNK_93(4, DIR_TRANS_SPINRIGHT1, 34),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives8_dlg0[] = { /* 0x815f118 */
    DEBUGINFO_O(9556),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives9_dlg0[] = { /* 0x815f428 */
    DEBUGINFO_O(9608),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    WALK_GRID(128, 107),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    SELECT_ANIMATION(4),
    WAIT_RANDOM(60, 120),
    SELECT_ANIMATION(2),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    WALK_GRID(128, 108),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    SELECT_ANIMATION(4),
    WAIT_RANDOM(60, 120),
    SELECT_ANIMATION(2),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    WALK_GRID(128, 109),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(30),
    WALK_GRID(76, 110),
    CMD_UNK_93(4, DIR_TRANS_10, 142),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 142),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(16),
    { 0x62, 0x00,  0x0100, -0x00000010,  0x00000000, NULL },
  LABEL(2), /* = 0x02 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 2),
    AWAIT_CUE(20),
    WALK_RELATIVE(128, 16, 0),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives10_dlg0[] = { /* 0x815f928 */
    DEBUGINFO_O(9691),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g28_s0_lives11_dlg0[] = { /* 0x815fc58 */
    DEBUGINFO_O(9745),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    SELECT_ANIMATION(4),
    WAIT_RANDOM(60, 120),
    SELECT_ANIMATION(2),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    SELECT_ANIMATION(4),
    WAIT_RANDOM(60, 120),
    SELECT_ANIMATION(2),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    SELECT_ANIMATION(4),
    WAIT_RANDOM(60, 120),
    SELECT_ANIMATION(2),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    SELECT_ANIMATION(4),
    WAIT_RANDOM(60, 120),
    SELECT_ANIMATION(2),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(4), /* = 0x04 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives12_dlg0[] = { /* 0x8160158 */
    DEBUGINFO_O(9828),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 1),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
  LABEL(2), /* = 0x02 */
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    WAIT_RANDOM(15, 90),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 3),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT_RANDOM(15, 90),
    JUMP_LABEL(2),
  LABEL(3), /* = 0x03 */
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(4), /* = 0x04 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 4),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives13_dlg0[] = { /* 0x8160588 */
    DEBUGINFO_O(9898),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives14_dlg0[] = { /* 0x8160898 */
    DEBUGINFO_O(9950),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    CMD_UNK_93(8, DIR_TRANS_10, 136),
    WAIT(30),
    WALK_GRID(128, 111),
    SELECT_ANIMATION(4),
    ALERT_CUE(5),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 136),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(16),
    { 0x62, 0x00,  0x0100,  0x00000010,  0x00000000, NULL },
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g28_s0_lives15_dlg0[] = { /* 0x8160c78 */
    DEBUGINFO_O(10015),
    SELECT_ANIMATION(2),
    AWAIT_CUE(13),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000010, NULL },
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WALK_RELATIVE(256, -16, 16),
    WALK_RELATIVE(256, -8, 0),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 85),
    AWAIT_CUE(20),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    SELECT_ANIMATION(4),
    AWAIT_CUE(20),
    WAIT(30),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
  LABEL(0), /* = 0x00 */
    CMD_UNK_93(4, DIR_TRANS_10, 91),
    WAIT(15),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(20),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(20),
    { 0x56, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    WAIT_RANDOM(30, 90),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(20),
    HALT,
    SELECT_ANIMATION(2),
    RET,
};

static const struct ScriptCommand s_gs1_g29_s0_station_sref_script[] = { /* 0x8161008 */
    DEBUGINFO_O(10075),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g29_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g29_s0_station_sref_script }; /* 0x8161048 */

static const struct ScriptCommand s_gs1_g29_s0_lives0_dlg2[] = { /* 0x8161054 */
    DEBUGINFO_O(10084),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  0,  1),
    MSG_NPC(1, (@@STRING:df66ba6adbd0f4c8111dc6410175f009a8df2feef4136825cdb86bb7cfd8329a@@)),
    MSG_NPC(1, (@@STRING:109747a77ec9c4b9de7e5b015377b4d80371d4969468fe262bd7df7de6be4e47@@)),
    MSG_NPC(1, (@@STRING:964470c3496b457c18193d326dc8fb4e1c450b070e8f84a1ca7f6232f8bd2b5e@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives1_dlg2[] = { /* 0x81611f0 */
    DEBUGINFO_O(10101),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  1,  1),
    EXECUTE_STATION(-1, 29, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives2_dlg2[] = { /* 0x81612a0 */
    DEBUGINFO_O(10115),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 2, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  2,  1),
    MSG_NPC(1, (@@STRING:769d3f0ee2ceae02fa984565d2f6dbcc4e85899986ab82219d3bc40e240217d8@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives3_dlg2[] = { /* 0x81613b4 */
    DEBUGINFO_O(10129),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 3, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  3,  1),
    MSG_NPC(1, (@@STRING:0d8d7b7e4ac66811c5221e4dac83e4e668c51190aa553f4bc60d38a271f9c09b@@)),
    MSG_NPC(1, (@@STRING:eda33c20b03a9278bfb70ede8ec0ba490a3f5477cbd4b91bc60f75fc097c4daf@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives4_dlg2[] = { /* 0x81614e0 */
    DEBUGINFO_O(10145),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 4, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  4,  1),
    MSG_NPC(1, (@@STRING:003a30f1d1c261871504d1419800deb1784b8e0103ff1447a4deb391bdf73502@@)),
    MSG_NPC(1, (@@STRING:0b83fefec7545e625a7e20ea5ed3d4792ae2a15d8ce4e680853b62ecd10ef6ef@@)),
    MSG_NPC(1, (@@STRING:4b0051befd0379df17c685bd15f40a9a69e4d13dce48369d1c6b62328790d0ad@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives5_dlg2[] = { /* 0x816167c */
    DEBUGINFO_O(10161),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  5,  1),
    MSG_NPC(1, (@@STRING:6097f216f7bcbaad259beb4f7073616a95646b17fb68b6f7b351aefc9f539deb@@)),
    MSG_NPC(1, (@@STRING:87098b11fd120ddfe43ecd002d5983795b0d44b3b57db5a6b55f98317f6e343a@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives6_dlg0[] = { /* 0x8161794 */
    DEBUGINFO_O(10176),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g29_s0_lives6_dlg2[] = { /* 0x81617c4 */
    DEBUGINFO_O(10182),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000004d,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000068,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:ad80ea586c2516b61bf794e000608d40e44e158e6d21a0a0b2de5161d79c87a8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:60aee345d8138dccbb3e8c8dfd0680afbb63a780f351706c541e6a10c189acd2@@)),
    MSG_NPC(3, (@@STRING:3ee69d4a6e927da8b29f23198a8d6f5716c5770fa11448d8bfa171746dfcb0d5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives7_dlg0[] = { /* 0x8161948 */
    DEBUGINFO_O(10199),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g29_s0_lives7_dlg2[] = { /* 0x8161978 */
    DEBUGINFO_O(10205),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000004d,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000068,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(2, (@@STRING:ad80ea586c2516b61bf794e000608d40e44e158e6d21a0a0b2de5161d79c87a8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:60aee345d8138dccbb3e8c8dfd0680afbb63a780f351706c541e6a10c189acd2@@)),
    MSG_NPC(3, (@@STRING:3ee69d4a6e927da8b29f23198a8d6f5716c5770fa11448d8bfa171746dfcb0d5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives8_dlg0[] = { /* 0x8161a58 */
    DEBUGINFO_O(10222),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g29_s0_lives8_dlg2[] = { /* 0x8161a88 */
    DEBUGINFO_O(10228),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000004f,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000069,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:a534d8a03f07787da6a061cd2f634f527e0975b9959c9bf6d0e5c25050433a84@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:ed12a2455cbf24fe3e9cb318f42ef41cde645aa607ccda5b1199c5fac1ffcaf1@@)),
    MSG_NPC(2, (@@STRING:d3f5fba7eeebff2a84e0143c5ae4e3f4a9ce5c4ed43edf593dacd3dd01b5161f@@)),
    MSG_NPC(2, (@@STRING:02fbe4cd15431818d9e04e4932c94ce37b250ccfa739f85b877ec4cec7792407@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives9_dlg0[] = { /* 0x8161c7c */
    DEBUGINFO_O(10246),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g29_s0_lives9_dlg2[] = { /* 0x8161cac */
    DEBUGINFO_O(10252),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x0000004f,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000069,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:a534d8a03f07787da6a061cd2f634f527e0975b9959c9bf6d0e5c25050433a84@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:ed12a2455cbf24fe3e9cb318f42ef41cde645aa607ccda5b1199c5fac1ffcaf1@@)),
    MSG_NPC(2, (@@STRING:d3f5fba7eeebff2a84e0143c5ae4e3f4a9ce5c4ed43edf593dacd3dd01b5161f@@)),
    MSG_NPC(2, (@@STRING:02fbe4cd15431818d9e04e4932c94ce37b250ccfa739f85b877ec4cec7792407@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives10_dlg0[] = { /* 0x8161d9c */
    DEBUGINFO_O(10270),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g29_s0_lives10_dlg2[] = { /* 0x8161dcc */
    DEBUGINFO_O(10276),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000055,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000006a,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:9bbd8d929b6b3c4a8df0599f4a3d527bd6bae18e321cbf8ebfa958c6e52fcfa8@@)),
    MSG_NPC(3, (@@STRING:d048aeb63e8e630f536d00d02a20632922f5ce141cb9bc32694589d209e1b871@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:af6d5535a83518620d4d8226daaf12bebbf198aa0e7465111f56631dfbfe763c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives11_dlg0[] = { /* 0x8161f5c */
    DEBUGINFO_O(10293),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g29_s0_lives11_dlg2[] = { /* 0x8161f8c */
    DEBUGINFO_O(10299),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000055,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x0000006a,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:9bbd8d929b6b3c4a8df0599f4a3d527bd6bae18e321cbf8ebfa958c6e52fcfa8@@)),
    MSG_NPC(3, (@@STRING:d048aeb63e8e630f536d00d02a20632922f5ce141cb9bc32694589d209e1b871@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:af6d5535a83518620d4d8226daaf12bebbf198aa0e7465111f56631dfbfe763c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s0_lives12_dlg2[] = { /* 0x816206c */
    DEBUGINFO_O(10316),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:e434d48d19937e3939e1f0dde4294461aa2ff0d0f8eab9b61a1cb36ed0edc369@@)),
    MSG_NPC(1, (@@STRING:c89bb7f0a19561ff6d58350d0eb8f7dd848bdc57e0850f0b9a6b9ccd5758f141@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s1_station_sref_script[] = { /* 0x8162144 */
    DEBUGINFO_O(10326),
    SELECT_LIVES(-1, 1),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs1_g29_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g29_s1_station_sref_script }; /* 0x8162184 */

static const struct ScriptCommand s_gs1_g29_s1_lives0_dlg0[] = { /* 0x8162190 */
    DEBUGINFO_O(10335),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:d5bed385d23a5f7402fa8f2794b6ba99d0387174436c664e0dda52585195a0d6@@)),
    MSG_NPC(3, (@@STRING:fb479ceb9652c01fd760077f9bcd1d16e7df25682130742a1d0c90cc210be76b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:d2e44b2bbb6e4d5879f0e32393c628484a84fcfc7c11e37be088ee90ca1e7438@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:902c4b450cd0e7b7c1315eddee8b3c7acf243eb1f88fa2b1806b2d06ccc013e8@@)),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:5bbad31d1552897c423d9d0f2e803e9d6004a6207ef41fc360b6a966e2d55f45@@)),
    MSG_NPC(3, (@@STRING:df5e067e3cef511b86495d849c413a83a48ab04cfb49b7db631b5a08e568ea32@@)),
    ALERT_CUE(3),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    TEXTBOX_CLEAR,
    SELECT_LIVES(-1, 0),
    RET,
};

static const struct ScriptCommand s_gs1_g29_s1_lives1_dlg0[] = { /* 0x81624a0 */
    DEBUGINFO_O(10367),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g29_s1_lives2_dlg0[] = { /* 0x81624e0 */
    DEBUGINFO_O(10374),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    RET,
};

static const struct ScriptCommand s_gs1_g29_s1_lives2_dlg2[] = { /* 0x8162580 */
    DEBUGINFO_O(10387),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  0,  1),
    MSG_NPC(1, (@@STRING:df66ba6adbd0f4c8111dc6410175f009a8df2feef4136825cdb86bb7cfd8329a@@)),
    MSG_NPC(1, (@@STRING:109747a77ec9c4b9de7e5b015377b4d80371d4969468fe262bd7df7de6be4e47@@)),
    MSG_NPC(1, (@@STRING:964470c3496b457c18193d326dc8fb4e1c450b070e8f84a1ca7f6232f8bd2b5e@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g29_s1_lives3_dlg0[] = { /* 0x8162660 */
    DEBUGINFO_O(10404),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    RET,
};

static const struct ScriptCommand s_gs1_g29_s1_lives3_dlg2[] = { /* 0x8162710 */
    DEBUGINFO_O(10418),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  1,  1),
    EXECUTE_STATION(-1, 29, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_station_sref_script[] = { /* 0x81627c0 */
    DEBUGINFO_O(10432),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g30_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g30_s0_station_sref_script }; /* 0x8162800 */

static const struct ScriptCommand s_gs1_g30_s0_lives0_dlg2[] = { /* 0x816280c */
    DEBUGINFO_O(10441),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  0,  1),
    MSG_NPC(1, (@@STRING:df66ba6adbd0f4c8111dc6410175f009a8df2feef4136825cdb86bb7cfd8329a@@)),
    MSG_NPC(1, (@@STRING:109747a77ec9c4b9de7e5b015377b4d80371d4969468fe262bd7df7de6be4e47@@)),
    MSG_NPC(1, (@@STRING:964470c3496b457c18193d326dc8fb4e1c450b070e8f84a1ca7f6232f8bd2b5e@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives1_dlg0[] = { /* 0x81628ec */
    DEBUGINFO_O(10458),
    RET,
};

static const struct ScriptCommand s_gs1_g30_s0_lives1_dlg2[] = { /* 0x816290c */
    DEBUGINFO_O(10463),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  1,  1),
    EXECUTE_STATION(-1, 30, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives2_dlg2[] = { /* 0x81629bc */
    DEBUGINFO_O(10477),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 2, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  2,  1),
    MSG_NPC(1, (@@STRING:769d3f0ee2ceae02fa984565d2f6dbcc4e85899986ab82219d3bc40e240217d8@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives3_dlg2[] = { /* 0x8162a6c */
    DEBUGINFO_O(10491),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 3, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  3,  1),
    MSG_NPC(1, (@@STRING:0d8d7b7e4ac66811c5221e4dac83e4e668c51190aa553f4bc60d38a271f9c09b@@)),
    MSG_NPC(1, (@@STRING:eda33c20b03a9278bfb70ede8ec0ba490a3f5477cbd4b91bc60f75fc097c4daf@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives4_dlg2[] = { /* 0x8162b3c */
    DEBUGINFO_O(10507),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 4, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  4,  1),
    MSG_NPC(1, (@@STRING:003a30f1d1c261871504d1419800deb1784b8e0103ff1447a4deb391bdf73502@@)),
    MSG_NPC(1, (@@STRING:0b83fefec7545e625a7e20ea5ed3d4792ae2a15d8ce4e680853b62ecd10ef6ef@@)),
    MSG_NPC(1, (@@STRING:4b0051befd0379df17c685bd15f40a9a69e4d13dce48369d1c6b62328790d0ad@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives5_dlg2[] = { /* 0x8162c3c */
    DEBUGINFO_O(10523),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  5,  1),
    MSG_NPC(1, (@@STRING:6097f216f7bcbaad259beb4f7073616a95646b17fb68b6f7b351aefc9f539deb@@)),
    MSG_NPC(1, (@@STRING:87098b11fd120ddfe43ecd002d5983795b0d44b3b57db5a6b55f98317f6e343a@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives6_dlg0[] = { /* 0x8162cfc */
    DEBUGINFO_O(10538),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g30_s0_lives6_dlg2[] = { /* 0x8162d2c */
    DEBUGINFO_O(10544),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000068,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000069,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x0000006a,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0005,  0x0000006b,  0x00000000, NULL },
    WAIT(1),
    { 0x2e, 0x00,  0x0005, -0x00000002,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(3, (@@STRING:339556bb56523497711662951d7220ac65165e7ef834fb5e82d9f0cfd8b783b1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:20920e93df76dc2ccbec972b69af9b360fdc081beae74497549527126ff3defe@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:27ef892de955b1c29ed316409c32ca80038ab101362e5aec60477b2b4f43e010@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:712a49fb6d636478a743625b9a1991c1504df2362464f8ac68baa692f391ca13@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:f1f980f9f6cb610650ed141f8e212fb52e3c7d4d1be1aacc7e71048e04c8a220@@)),
    MSG_NPC(3, (@@STRING:a22de57e5610f2b42355419f5baab7cee222f598b8710b1fc235d76ba33317c1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(5, (@@STRING:82473405fb626095a4286bb0f56a72979ec04cd5c1e9c591612ef6e677c06d26@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives7_dlg0[] = { /* 0x8163090 */
    DEBUGINFO_O(10577),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g30_s0_lives7_dlg2[] = { /* 0x81630c0 */
    DEBUGINFO_O(10583),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000068,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000069,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x0000006a,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0005,  0x0000006b,  0x00000000, NULL },
    WAIT(1),
    { 0x2e, 0x00,  0x0005, -0x00000002,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(3, (@@STRING:339556bb56523497711662951d7220ac65165e7ef834fb5e82d9f0cfd8b783b1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:20920e93df76dc2ccbec972b69af9b360fdc081beae74497549527126ff3defe@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:27ef892de955b1c29ed316409c32ca80038ab101362e5aec60477b2b4f43e010@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:712a49fb6d636478a743625b9a1991c1504df2362464f8ac68baa692f391ca13@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:f1f980f9f6cb610650ed141f8e212fb52e3c7d4d1be1aacc7e71048e04c8a220@@)),
    MSG_NPC(3, (@@STRING:a22de57e5610f2b42355419f5baab7cee222f598b8710b1fc235d76ba33317c1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(5, (@@STRING:82473405fb626095a4286bb0f56a72979ec04cd5c1e9c591612ef6e677c06d26@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives8_dlg0[] = { /* 0x81632a0 */
    DEBUGINFO_O(10616),
    { 0x53, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g30_s0_lives8_dlg2[] = { /* 0x81632d0 */
    DEBUGINFO_O(10622),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000068,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000069,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0004,  0x0000006a,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0005,  0x0000006b,  0x00000000, NULL },
    WAIT(1),
    { 0x2e, 0x00,  0x0005, -0x00000002,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(3, (@@STRING:339556bb56523497711662951d7220ac65165e7ef834fb5e82d9f0cfd8b783b1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:20920e93df76dc2ccbec972b69af9b360fdc081beae74497549527126ff3defe@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:27ef892de955b1c29ed316409c32ca80038ab101362e5aec60477b2b4f43e010@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:712a49fb6d636478a743625b9a1991c1504df2362464f8ac68baa692f391ca13@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:f1f980f9f6cb610650ed141f8e212fb52e3c7d4d1be1aacc7e71048e04c8a220@@)),
    MSG_NPC(3, (@@STRING:a22de57e5610f2b42355419f5baab7cee222f598b8710b1fc235d76ba33317c1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(5, (@@STRING:82473405fb626095a4286bb0f56a72979ec04cd5c1e9c591612ef6e677c06d26@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives9_dlg1[] = { /* 0x81634b0 */
    DEBUGINFO_O(10655),
  LABEL(0), /* = 0x00 */
    SELECT_ANIMATION(5),
    WALK_RELATIVE(256, -16, 0),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(90),
    WALK_RELATIVE(256, 16, 0),
    WAIT(90),
    WALK_RELATIVE(256, 16, 0),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(90),
    WALK_RELATIVE(256, -16, 0),
    WAIT(90),
    JUMP_LABEL(0),
};

static const struct ScriptCommand s_gs1_g30_s0_lives9_dlg2[] = { /* 0x81635b0 */
    DEBUGINFO_O(10674),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ad26af6255b188a91d225dae7b24b26ea7111014a9e1d43598e9d4c22dc0f570@@)),
    MSG_NPC(1, (@@STRING:1a7a70c368518de884a132e0e6087fe90b0d74c639bce8f638618e8bfebfd50e@@)),
    MSG_NPC(1, (@@STRING:2fbf2c99c74e01ce52f39ee80d475230034b7035e04055a65bfec7b51fc67a6e@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives10_dlg2[] = { /* 0x81636d0 */
    DEBUGINFO_O(10685),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:13474feaa9b7b9bb232badc989fa43ba30277d787d9a9274e294631bf35561d9@@)),
    MSG_NPC(1, (@@STRING:1c5220cefede2371cfbff85a296305808d625ed6b45755791cbd266a4971f3ca@@)),
    MSG_NPC(1, (@@STRING:dfb843b7f03b8a8c5fae1051147831ea53f20ba42671278a68eb030ba09b3e50@@)),
    MSG_NPC(1, (@@STRING:7b371248fa77fbf14a307af99a3b85273f981b8b2f5fe5015223c186b328d989@@)),
    MSG_NPC(1, (@@STRING:93ea82dbb3216cf4ce2a6cc5c65d933c5062293ebe4ef0a28f5385c725cc2c29@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives11_dlg2[] = { /* 0x81638c0 */
    DEBUGINFO_O(10698),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1e12b082bf68f539d298410975ed44801d8df593deffdcadaa3d96aaec350f53@@)),
    MSG_NPC(1, (@@STRING:7a64ddb76806f5dd99d2f65621420dff874bdbef7241853117f7957ca8a693af@@)),
    MSG_NPC(1, (@@STRING:4b1f870c5ecaa8c2c4d5dc5451937b3a935e6275fc4c45b7850cc93d358e45e6@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s0_lives12_dlg2[] = { /* 0x81639bc */
    DEBUGINFO_O(10709),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:75319e39d21355be8b95b6db36fc724652b0584c20a0de605ef311375d28dbf7@@)),
    MSG_NPC(1, (@@STRING:9f58665e303a4adb3cbb7294eeca1914b900fee8157f2ed66e87e04fd21e3582@@)),
    MSG_NPC(1, (@@STRING:6f8ac8fdf3e7fada3e658ee8072616b56a26bab16c6e81f8e868088a78d3c5ba@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s1_station_sref_script[] = { /* 0x8163ad8 */
    DEBUGINFO_O(10720),
    SELECT_LIVES(-1, 1),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs1_g30_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g30_s1_station_sref_script }; /* 0x8163b18 */

static const struct ScriptCommand s_gs1_g30_s1_lives0_dlg0[] = { /* 0x8163b24 */
    DEBUGINFO_O(10729),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:d5bed385d23a5f7402fa8f2794b6ba99d0387174436c664e0dda52585195a0d6@@)),
    MSG_NPC(3, (@@STRING:fb479ceb9652c01fd760077f9bcd1d16e7df25682130742a1d0c90cc210be76b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:d2e44b2bbb6e4d5879f0e32393c628484a84fcfc7c11e37be088ee90ca1e7438@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:902c4b450cd0e7b7c1315eddee8b3c7acf243eb1f88fa2b1806b2d06ccc013e8@@)),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:5bbad31d1552897c423d9d0f2e803e9d6004a6207ef41fc360b6a966e2d55f45@@)),
    MSG_NPC(3, (@@STRING:df5e067e3cef511b86495d849c413a83a48ab04cfb49b7db631b5a08e568ea32@@)),
    ALERT_CUE(3),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    TEXTBOX_CLEAR,
    SELECT_LIVES(-1, 0),
    RET,
};

static const struct ScriptCommand s_gs1_g30_s1_lives1_dlg0[] = { /* 0x8163cf4 */
    DEBUGINFO_O(10761),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g30_s1_lives2_dlg0[] = { /* 0x8163d34 */
    DEBUGINFO_O(10768),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    RET,
};

static const struct ScriptCommand s_gs1_g30_s1_lives2_dlg2[] = { /* 0x8163dd4 */
    DEBUGINFO_O(10781),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  0,  1),
    MSG_NPC(1, (@@STRING:df66ba6adbd0f4c8111dc6410175f009a8df2feef4136825cdb86bb7cfd8329a@@)),
    MSG_NPC(1, (@@STRING:109747a77ec9c4b9de7e5b015377b4d80371d4969468fe262bd7df7de6be4e47@@)),
    MSG_NPC(1, (@@STRING:964470c3496b457c18193d326dc8fb4e1c450b070e8f84a1ca7f6232f8bd2b5e@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g30_s1_lives3_dlg0[] = { /* 0x8163eb4 */
    DEBUGINFO_O(10798),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    RET,
};

static const struct ScriptCommand s_gs1_g30_s1_lives3_dlg2[] = { /* 0x8163f64 */
    DEBUGINFO_O(10812),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E09A_8N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E09A_8N,  1,  1),
    EXECUTE_STATION(-1, 30, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g31_s0_station_sref_script[] = { /* 0x8164014 */
    DEBUGINFO_O(10826),
    BGM_STOP,
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(1),
    MSG_ON_BG_AUTO(30, (@@STRING:6e00bd59ba8bf2d5ce128a9270eb629a7f785cbdea9605ea4e71ffe4f57db050@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 20, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(20),
    RET,
};

static const ScriptRef s_gs1_g31_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g31_s0_station_sref_script }; /* 0x816412c */


static const struct ScriptCommand s_gs1_g31_s0_eff0_script[] = { /* 0x8164138 */
    DEBUGINFO_O(10848),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    WALK_GRID(256, 115),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g31_s0_lives0_dlg0[] = { /* 0x81641b8 */
    DEBUGINFO_O(10859),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(2, (@@STRING:3577a93136e09fcc953ec750b55ca81a860f1f884f0eb3c0262293c54824a300@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, -1, 0),
    MSG_NPC(3, (@@STRING:308a4620032438ef767de6d2b5c558e71d9be117ac154ab8568b10a79b96598c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    WAIT(20),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:2c2e4a22632eeb531037e2e75279a70df93f9eac5576507c129ecb99c3acceeb@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:ea4a5538c5e5d6d21cf693229eaba7567318889ebad66db07b0b7243806c0332@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    WAIT(90),
    ALERT_CUE(20),
    ALERT_CUE(6),
    ALERT_CUE(13),
    ALERT_CUE(15),
    ALERT_CUE(16),
    WALK_GRID(204, 116),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(12),
    WAIT(30),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0004, 0x00000042),
    MSG_NPC(4, (@@STRING:cce4dd5822c372c225bb03ad040e452e56c88afc80d5dd53db340da804c5345c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0007, 0x00000000),
    MSG_NPC(7, (@@STRING:86a366073758c4543b1cd732c7ad80d53897e6678188307dd68dd3f9a817a5bb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(6, (@@STRING:9b305fc754b387d674f27fd4371fbeb7ead6f836c89205b6b126cc1d8e4590f5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:9133aad003444bc66df8482eaf99fc15b59805cb732c58dc9bee95cf44a6d67c@@)),
    MSG_NPC(1, (@@STRING:e234f2eb6af5d3684a44116f43fab595e31c0cd9583895108c5f5b9283aea4f5@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    PORTRAIT_POS(3, 1, 0),
    MSG_NPC(3, (@@STRING:884ed8234a342bc98d80e80e52603377fb0165560738a6976c42dfc9d4dc7281@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:e53a8421d5bad93cd4a5cbf30849dcd58accb10ed1688e13a4a525d12fdd09dc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(7, (@@STRING:a6d9315c9a8af4f6abdd379e06c1ed6befeee74480b90557e8ca6dc08d8a456b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:de143d3484d07a99ab77cfaccde188ec88cd10b88456f87fd0c28589f83b9645@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    MSG_NPC(8, (@@STRING:8351c62d56dba6db7050f6a36533d5836f15eeea155dc8235c53fe76eae89be3@@)),
    MSG_NPC(8, (@@STRING:0adf1f0fa9d74ab074aae149cdea0593f54cef54b58f32d96bf4e49e0879aa42@@)),
    MSG_NPC(8, (@@STRING:2cffb6659d80459f897becbe0f11ad9d92e37b0c2876ec440cf82e09764156e7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(5),
    PORTRAIT_REP(0x0001, 0x00000008),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:23144bc7f64e7c1482097346841c3cfc8fdb61d005a030381dfacf2d17cf3107@@)),
    VARIANT(/* == */  1, (@@STRING:91422bde2b20b839c5664fe6e916caed252a534af0af3aff0e5f1c02fb928f98@@)),
    VARIANT(/* == */  3, (@@STRING:47cb702efa82af502c0798286c0431c321300f17d2cfeef11288638137592ab1@@)),
    VARIANT(/* == */  3, (@@STRING:56c2b2f37f6e63c7101fb749548ae1822c5d899f0f7e7103a5b0180786aa2fc3@@)),
    VARIANT_DEFAULT((@@STRING:23144bc7f64e7c1482097346841c3cfc8fdb61d005a030381dfacf2d17cf3107@@)),
    VARIANT_DEFAULT((@@STRING:255e989ee962777224a1f5d1955bd39d3bac6e27a7c1134f322a84ea697341bd@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(5, (@@STRING:c5fbc70b8cd3ccb592c077400573c4aaad2b2ad8dc40458b4924ad2556ee6737@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(20),
    ALERT_CUE(10),
    ALERT_CUE(7),
    WAIT(90),
    ALERT_CUE(20),
    ALERT_CUE(10),
    ALERT_CUE(7),
    BGM_FADEOUT(30),
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(60),
    FANFARE_PLAY2(468),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:473c655d55340ebea30396f7f9dbeb5e9dfe1df7852dd7236c34f138cc2b2c1b@@)),
    MSG_NPC(2, (@@STRING:17952f03f37841a98147efa81cd596e264c070d1785c1b27b340b588fb4a6336@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(15),
    ALERT_CUE(16),
    ALERT_CUE(20),
    WAIT(60),
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(60),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    MSG_NPC(3, (@@STRING:9b77d6dc0e4f9c20654404e35d6867df92f6d600c88289100f5b3f41eaf99ad6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(6, (@@STRING:8c932e5ae36fc713a233fc309e4c5ddc1461c0ccdd9c1875d9a52a6c44280972@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(7, (@@STRING:f9a68f0765a17e1218809b074243c6be736271929d04d98818deb25581f63d20@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(15),
    ALERT_CUE(16),
    ALERT_CUE(20),
    WAIT(60),
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(60),
    { 0x2d, 0x09,  0x0009,  0x00000061,  0x00000000, NULL },
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:33c82890df12a56de8557ee6de7db8b5e4755bb0b4d980401463624cc2e5ba2f@@)),
    VARIANT(/* == */  1, (@@STRING:ff82abc3598bb50780a6bbc5aee4acec9e6af8dadeb8dc3754d00d687e515569@@)),
    VARIANT_DEFAULT((@@STRING:ed0629196debb23289834df0fa618a9bd5e87914dedb0e4b4066092536f8e7c2@@)),
    VARIANT_DEFAULT((@@STRING:58315c99098b75c1f752485941247cb7508aa0dfa7ea485101e47558b471555d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    MSG_NPC(8, (@@STRING:a2ccdf97520e3778743c0f885f779dd0c1e9679c7604970caea7116adbfe68fd@@)),
    MSG_NPC(8, (@@STRING:aa1c5498bcc8b54bd8baf29e781a62406544ce2feaa869e6db8734577a20e6b7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    BGM_SWITCH(MUS_WORLD_CALAMITY),
    { 0x2e, 0x00,  0x0009, -0x00000002,  0x00000000, NULL },
    MSG_NPC(9, (@@STRING:b5f1f328232f0cebe131945d69d80bed61c1e73f18b9fe1f9756965b372fa498@@)),
    MSG_NPC(9, (@@STRING:a36d754e18f115549d28ff3027e8efd696151653c0da527bf607f55f36574f1f@@)),
    TEXTBOX_CLEAR,
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};















static const struct ScriptCommand s_gs1_g31_s0_lives1_dlg0[] = { /* 0x8165464 */
    DEBUGINFO_O(11075),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(204, 117),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(3),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    WAIT(5),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(6),
    WAIT(5),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives2_dlg0[] = { /* 0x8165654 */
    DEBUGINFO_O(11109),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(7),
    WALK_GRID(256, 123),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(7),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives3_dlg0[] = { /* 0x8165794 */
    DEBUGINFO_O(11132),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(8),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WALK_GRID(256, 121),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    WALK_RELATIVE(128, -8, 8),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives4_dlg0[] = { /* 0x8165964 */
    DEBUGINFO_O(11164),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(9),
    WALK_GRID(256, 122),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(9),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WAIT(5),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(9),
    WAIT(5),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(9),
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives5_dlg0[] = { /* 0x8165ab4 */
    DEBUGINFO_O(11188),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    WALK_GRID(256, 124),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(10),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(45),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(45),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives6_dlg0[] = { /* 0x8165c34 */
    DEBUGINFO_O(11215),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(11),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    WALK_GRID(256, 125),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(50),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(11),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(50),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives7_dlg0[] = { /* 0x8165d94 */
    DEBUGINFO_O(11240),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(12),
    WALK_GRID(256, 126),
    AWAIT_CUE(12),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(12),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(12),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(12),
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives8_dlg0[] = { /* 0x8165ea4 */
    DEBUGINFO_O(11260),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0008,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(13),
    WALK_GRID(204, 118),
    AWAIT_CUE(13),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives9_dlg0[] = { /* 0x8165f34 */
    DEBUGINFO_O(11272),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(15),
    WALK_GRID(204, 119),
    AWAIT_CUE(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(45),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHWEST),
    WAIT(45),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(15),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives10_dlg0[] = { /* 0x8166034 */
    DEBUGINFO_O(11291),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(16),
    WALK_GRID(204, 120),
    AWAIT_CUE(16),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(30),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(16),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    WAIT(30),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(16),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives11_dlg0[] = { /* 0x8166134 */
    DEBUGINFO_O(11310),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WALK_GRID(256, 132),
    AWAIT_CUE(20),
    WAIT(5),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(20),
    WAIT(10),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(30),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHEAST),
    AWAIT_CUE(20),
    WAIT(10),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(30),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives12_dlg0[] = { /* 0x81662a4 */
    DEBUGINFO_O(11336),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WAIT(45),
    WALK_GRID(256, 134),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(20),
    WAIT(3),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(20),
    WAIT(5),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(20),
    WAIT(5),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(15),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives13_dlg0[] = { /* 0x8166474 */
    DEBUGINFO_O(11368),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WAIT(30),
    WALK_GRID(256, 133),
    AWAIT_CUE(20),
    WAIT(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(20),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(20),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    WAIT(45),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives14_dlg0[] = { /* 0x81665d4 */
    DEBUGINFO_O(11393),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WALK_GRID(256, 128),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    WAIT(5),
    AWAIT_CUE(20),
    WAIT(7),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(30),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(20),
    WAIT(7),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(30),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives15_dlg0[] = { /* 0x8166724 */
    DEBUGINFO_O(11417),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WAIT(30),
    WALK_GRID(256, 129),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives16_dlg0[] = { /* 0x81667f4 */
    DEBUGINFO_O(11433),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WALK_GRID(256, 127),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives17_dlg0[] = { /* 0x81668b4 */
    DEBUGINFO_O(11448),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WAIT(45),
    WALK_GRID(256, 130),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(20),
    WAIT(2),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(20),
    WAIT(3),
    CALL_SCRIPT(LOOK_AROUND_FUNC),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives18_dlg0[] = { /* 0x81669d4 */
    DEBUGINFO_O(11469),
    SELECT_ANIMATION(2),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(20),
    WAIT(60),
    WALK_GRID(256, 131),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(20),
    CALL_SCRIPT(SMILE_START_FUNC),
    AWAIT_CUE(20),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(20),
    WAIT(12),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(20),
    WAIT(12),
    ROTATE_TO(12, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(20),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(20),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives19_dlg0[] = { /* 0x8166b54 */
    DEBUGINFO_O(11496),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives19_dlg2[] = { /* 0x8166b84 */
    DEBUGINFO_O(11502),
    RET,
};

static const struct ScriptCommand s_gs1_g31_s0_lives20_dlg0[] = { /* 0x8166ba4 */
    DEBUGINFO_O(11507),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g31_s0_lives20_dlg2[] = { /* 0x8166bd4 */
    DEBUGINFO_O(11513),
    RET,
};

static const struct ScriptCommand s_gs1_g32_s0_station_sref_script[] = { /* 0x8166bf4 */
    DEBUGINFO_O(11518),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_WORLD_CALAMITY),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 32, RGB_U32(0xFF, 0xFF, 0xFF)),
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs1_g32_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g32_s0_station_sref_script }; /* 0x8166c74 */

static const struct ScriptCommand s_gs1_g32_s0_lives0_dlg0[] = { /* 0x8166c80 */
    DEBUGINFO_O(11531),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(8, (@@STRING:9501cbdf97653462b968eb59c8e9a4429fb9350c84ad48abde7cd44f4feec1f6@@)),
    MSG_NPC(8, (@@STRING:1caf321db6c6659818b3a9ddbb6d2c39ddc95e7612611d71d808ee7386c11724@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    { 0x2d, 0x09,  0x0007,  0x0000006c,  0x00000000, NULL },
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    { 0x2e, 0x00,  0x0009, -0x00000002,  0x00000000, NULL },
    MSG_NPC(9, (@@STRING:4f37c74698fa22749e0a8a97dab040057393bd1178f857d5f92d34e1876a18ca@@)),
    MSG_NPC(9, (@@STRING:991851ccf3e9874ed96b3570658ee1f78bf84969bca7a29fbbabc4b7ed851d37@@)),
    MSG_NPC(9, (@@STRING:598e1ecbd98f946dc30ac6b037b56b559e764990f41fe1b08d57d8b40edafc62@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:6ede2d3f02d9cca381829deffc5c6c7c66511f6897e5eff0b86afca6a637a6b4@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    MSG_NPC(9, (@@STRING:0dc9575bf60b557c9464dbd9ae4b27f8883fd26e470390f89f48cf4f08255137@@)),
    MSG_NPC(9, (@@STRING:2d428539347c01bc49a25fbeb472e0addad708ad14657edf361f779af3d4416e@@)),
    MSG_NPC(9, (@@STRING:ced358d1281db19d60fdded736c251b5dce41d3e7cde306a3f0e3ca2ed2d46bc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(8, (@@STRING:c4ddd4cccc1ce8b900ecc0c7a9251fd06f74c79015ab8235670a25e099dba020@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    MSG_NPC(9, (@@STRING:18f922bc59bdb52d45232833fde538b779b222a54149b1815dda5bb60070688a@@)),
    MSG_NPC(9, (@@STRING:e825c49360363cafbe303a023dcaa935b38d7a32e9ed03cc7ac44fa74a3cad16@@)),
    MSG_NPC(9, (@@STRING:c15c59a06b76f49f819e079c010fc00b629387a9f38fd4555e622b53b22be570@@)),
    MSG_NPC(9, (@@STRING:5e0a76a0cb3ac787ed7ce31851fc7b97770cdfcc10ea352d5d5220aff18d1868@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:84a214b0b02ee8377cfc51f5e78c51bd1f1c3ec126828f5781ee8911be60bb3c@@)),
    VARIANT(/* == */  3, (@@STRING:84a214b0b02ee8377cfc51f5e78c51bd1f1c3ec126828f5781ee8911be60bb3c@@)),
    VARIANT_DEFAULT((@@STRING:84a214b0b02ee8377cfc51f5e78c51bd1f1c3ec126828f5781ee8911be60bb3c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(8, (@@STRING:8ffccbccdf92c734daa040be1e649c9df4f88c185ef6826eb798581646019632@@)),
    MSG_NPC(8, (@@STRING:5c7b415b7455d0858fd74e1cb41d268682c7c8e3ed226b936eafe4d7dcd9d9d5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:45c18a25d8d899b67296914bf209d610785373161f90a78984b093351f4731bc@@)),
    VARIANT(/* == */  1, (@@STRING:32ebe0f560954f5c0b45d402cba5c9e7124d72411ed60e60963672d36be8bdde@@)),
    VARIANT(/* == */  3, (@@STRING:45c18a25d8d899b67296914bf209d610785373161f90a78984b093351f4731bc@@)),
    VARIANT(/* == */  3, (@@STRING:32ebe0f560954f5c0b45d402cba5c9e7124d72411ed60e60963672d36be8bdde@@)),
    VARIANT_DEFAULT((@@STRING:45c18a25d8d899b67296914bf209d610785373161f90a78984b093351f4731bc@@)),
    VARIANT_DEFAULT((@@STRING:32ebe0f560954f5c0b45d402cba5c9e7124d72411ed60e60963672d36be8bdde@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(487),
    FLASH_TO(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 15, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    MSG_NPC(9, (@@STRING:9dcb816d5a1b3ecc73fee1b3b4ff5d21fcc53b53463ccc85429cbdf4ae86192e@@)),
    MSG_NPC(9, (@@STRING:b5b7cb1db1379311523d9a5c00850fc3a7e2d83854391e547cee42e0afc9a19b@@)),
    MSG_NPC(9, (@@STRING:fb87e0e580355cd95a20ca1b35e5f8ecf6563893faf98541148dd12145635916@@)),
    MSG_NPC(9, (@@STRING:e799ce119b7102e2e73321ae8a7853785c202f1471514c8a2e66b5d56b03f1d7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(1, (@@STRING:251587169dad797a40d31ef0c93c5bf729eefa734e4c928e2783ef055afc3f6a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b48221c33c3faa1efa476f2da79f7d1911df873552e384025cf2a55af7f6e94e@@)),
    VARIANT_DEFAULT((@@STRING:b4162b4db439783c0b30f1c729bcd56ab93a7713d7f6ef9bfba917aad59b7773@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};












static const struct ScriptCommand s_gs1_g32_s0_lives1_dlg0[] = { /* 0x8167744 */
    DEBUGINFO_O(11636),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_HAPPY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives2_dlg0[] = { /* 0x8167814 */
    DEBUGINFO_O(11652),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives3_dlg0[] = { /* 0x8167854 */
    DEBUGINFO_O(11659),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00, -0x0008,  0x00000008,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives4_dlg0[] = { /* 0x81678a4 */
    DEBUGINFO_O(11667),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives5_dlg0[] = { /* 0x81678e4 */
    DEBUGINFO_O(11674),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives6_dlg0[] = { /* 0x8167924 */
    DEBUGINFO_O(11681),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives7_dlg0[] = { /* 0x8167964 */
    DEBUGINFO_O(11688),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives8_dlg0[] = { /* 0x81679a4 */
    DEBUGINFO_O(11695),
    SELECT_ANIMATION(5),
    WAIT(1),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0008,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives9_dlg0[] = { /* 0x8167a04 */
    DEBUGINFO_O(11704),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives10_dlg0[] = { /* 0x8167a34 */
    DEBUGINFO_O(11710),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives11_dlg0[] = { /* 0x8167a64 */
    DEBUGINFO_O(11716),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives12_dlg0[] = { /* 0x8167aa4 */
    DEBUGINFO_O(11723),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives13_dlg0[] = { /* 0x8167ae4 */
    DEBUGINFO_O(11730),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives14_dlg0[] = { /* 0x8167b24 */
    DEBUGINFO_O(11737),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives15_dlg0[] = { /* 0x8167b64 */
    DEBUGINFO_O(11744),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives16_dlg0[] = { /* 0x8167ba4 */
    DEBUGINFO_O(11751),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives17_dlg0[] = { /* 0x8167be4 */
    DEBUGINFO_O(11758),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g32_s0_lives18_dlg0[] = { /* 0x8167c24 */
    DEBUGINFO_O(11765),
    SELECT_ANIMATION(2),
    AWAIT_CUE(20),
    HALT,
};

static const struct ScriptCommand s_gs1_g33_s0_station_sref_script[] = { /* 0x8167c64 */
    DEBUGINFO_O(11772),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, 1),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    SELECT_ENTITIES(0, 0),
    CALL_STATION( 34,  0),
    BGM_SWITCH(MUS_WORLD_CALAMITY),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs1_g33_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs1_g33_s0_station_sref_script }; /* 0x8167d34 */

static const struct ScriptCommand s_gs1_g33_s0_lives0_dlg0[] = { /* 0x8167d40 */
    DEBUGINFO_O(11790),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs1_g34_s0_station_sref_script[] = { /* 0x8167d80 */
    DEBUGINFO_O(11797),
    SELECT_ENTITIES(-1, -1),
    RET_DIRECT,
};

static const ScriptRef s_gs1_g34_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g34_s0_station_sref_script }; /* 0x8167db0 */

static const struct ScriptCommand s_gs1_g34_s0_lives0_dlg2[] = { /* 0x8167dbc */
    DEBUGINFO_O(11805),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:58f777a19902eec8aef77b20f40d40d265530aff4a1fa30648dadd845116fefd@@)),
    VARIANT_DEFAULT((@@STRING:58f777a19902eec8aef77b20f40d40d265530aff4a1fa30648dadd845116fefd@@)),
    TEXTBOX_CLEAR,
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:43e419956cd6b88e92bf2781eb053d8828ba06d6993eb05e9dc2ed1c56ba0074@@)),
    VARIANT_DEFAULT((@@STRING:43e419956cd6b88e92bf2781eb053d8828ba06d6993eb05e9dc2ed1c56ba0074@@)),
    CHOICE(/* label */  2, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  3, (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@)),
  LABEL(3), /* = 0x03 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fc89e0e1cee64d6894cb549ccb867fb39861c51f6d18a236467a7b434b42f6e8@@)),
    VARIANT(/* == */  1, (@@STRING:984f8b1b1983f9cb2879ef0c511ece943dfc79fc4670dfc40eb351cbe4e8c1fd@@)),
    VARIANT_DEFAULT((@@STRING:fc89e0e1cee64d6894cb549ccb867fb39861c51f6d18a236467a7b434b42f6e8@@)),
    VARIANT_DEFAULT((@@STRING:984f8b1b1983f9cb2879ef0c511ece943dfc79fc4670dfc40eb351cbe4e8c1fd@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a987645a89cac583a2353c547d8af115f8c5454a948e2905fe9f25e61ab5cd3d@@)),
    VARIANT(/* == */  1, (@@STRING:8dafaead945380290ca829c95de6cdc7950f7722482a0fcd54fdeee05d3e6c9f@@)),
    VARIANT(/* == */  1, (@@STRING:7671dd517784c60e0d57f0350747b5c05a272c978a989960d978f5435666d3be@@)),
    VARIANT(/* == */  1, (@@STRING:8881259a5bcbf691928d07b584f5ed4a7ddff7c0775ef2cb4cb1e2c1f2618cad@@)),
    VARIANT_DEFAULT((@@STRING:2284f76e58d9ea3633d27aaa50c5f427eb3ec6688872aba100d0b2fe02d5ecab@@)),
    VARIANT_DEFAULT((@@STRING:8dafaead945380290ca829c95de6cdc7950f7722482a0fcd54fdeee05d3e6c9f@@)),
    VARIANT_DEFAULT((@@STRING:251776675a05d4ad1b4e2f2b55bfb668493cf1c1bdf21cef897a5c6fdef277ff@@)),
    VARIANT_DEFAULT((@@STRING:3e655e1912334e6b9806492620d3868eaa7b5540b24d13b4ef5c7dcefc6cc4fc@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(150),
    { 0x23, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(180),
    EXECUTE_FUNCTION(EVENT_M01E10A_L002),
    HALT,
};



static const struct ScriptCommand s_gs1_g34_s0_lives1_dlg2[] = { /* 0x8168208 */
    DEBUGINFO_O(11846),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_1N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_1N,  0,  1),
    MSG_NPC(1, (@@STRING:7e69502b1b42836fe5fb249edad634c0e08996dc18c654ed02091482e381d038@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives2_dlg2[] = { /* 0x81682ec */
    DEBUGINFO_O(11860),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_1N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_1N,  1,  1),
    MSG_NPC(1, (@@STRING:78d757094bdd2b0bd2e4589f474358cc22b6c9b9a307f483d92a7ef90a120f50@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives3_dlg2[] = { /* 0x81683c4 */
    DEBUGINFO_O(11874),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_1N, 2, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_1N,  2,  1),
    MSG_NPC(1, (@@STRING:83ef4d042f1361278d4a2784a8f970d25f9cf1fa557e161db9a33e102cbd968f@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives4_dlg2[] = { /* 0x8168494 */
    DEBUGINFO_O(11888),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_1N, 3, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_1N,  3,  1),
    MSG_NPC(1, (@@STRING:cd71fcae13b15a9108a370c17122fbf6d865b293de9b9b7694e0a2f8ca189fca@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives5_dlg2[] = { /* 0x816856c */
    DEBUGINFO_O(11902),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_1N, 4, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_1N,  4,  1),
    MSG_NPC(1, (@@STRING:4659b30ea4952b1e9eeb11582aa9da22fb02893a06b736ac70eacc63773734c0@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives6_dlg2[] = { /* 0x8168674 */
    DEBUGINFO_O(11916),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_1N, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_1N,  5,  1),
    MSG_NPC(1, (@@STRING:898049510e4b46401249f12b06a8f47cd3ae414037707933a2411ead81858a14@@)),
    MSG_NPC(1, (@@STRING:07f6243c6d4e3bb32170351235b8d9a5433e7e3f243a45a5094106d0a4affdf0@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives7_dlg2[] = { /* 0x8168798 */
    DEBUGINFO_O(11931),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:7db001ae89b91908a86f4f6841fd598617621012f662456f3356087b2417f607@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives8_dlg2[] = { /* 0x8168824 */
    DEBUGINFO_O(11940),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:2f3fb31e9385f463a4cf2a249367bbbb7af324b081cb5570087e68e92ebe1f26@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives9_dlg2[] = { /* 0x81688dc */
    DEBUGINFO_O(11949),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ff8e0c6297534fa22f20c8ced21558cbc95415442041a4d00cce82585d38a681@@)),
    MSG_NPC(1, (@@STRING:b5625e972acf5fce0ec4c7cf19982fb2e4d85a8bf6b1d971a872cc91f9984cf4@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives10_dlg2[] = { /* 0x81689c4 */
    DEBUGINFO_O(11959),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:827cbb2eed85427fd2b4c6cc3bf8564d53c24087f6ab86f3eb25b46934d5f7f0@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives11_dlg2[] = { /* 0x8168a5c */
    DEBUGINFO_O(11968),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:48efde24e09a8e94180158a9b194dbb89359ac9b923af7e40900012aff29f48c@@)),
    MSG_NPC(1, (@@STRING:cec5ee3a5638bf175abbdea3109f9c57278eaeb59951b409fadc7e3facb5cf45@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives12_dlg2[] = { /* 0x8168b28 */
    DEBUGINFO_O(11978),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:bddff3928091ba338aa85efc28294244cd82ff2226f7506c91e572f6a3a31cb4@@)),
    MSG_NPC(1, (@@STRING:c6243097c7873718539f9cde104adaa1ead7cd354dbeb9f6b675e5cf5385c546@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives13_dlg2[] = { /* 0x8168be8 */
    DEBUGINFO_O(11988),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:20dca0ec1c8f57e3e26aabd049ed02f77aa96e38d375d5a4c3cb2d987ad4ce03@@)),
    MSG_NPC(1, (@@STRING:8867cc477646436924cba27392b65e58f11572f60dfb50ac598aadb2b4536830@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives14_dlg2[] = { /* 0x8168cbc */
    DEBUGINFO_O(11998),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ad99b83d6d6b3a57b719add50f112f4cf7086978bcca2f5dea3b226655f68bd0@@)),
    MSG_NPC(1, (@@STRING:25a86cbfc16111a7a5679d753a125b98be5090b3cea2753676c2606b2086bb4b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g34_s0_lives15_dlg2[] = { /* 0x8168d80 */
    DEBUGINFO_O(12008),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:1788132f23ffdcae533664312b07c4c8a82fbdcfd3aa1118eab54e5625a5e500@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_station_sref_script[] = { /* 0x8168e18 */
    DEBUGINFO_O(12017),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g35_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g35_s0_station_sref_script }; /* 0x8168e58 */

static const struct ScriptCommand s_gs1_g35_s0_lives0_dlg2[] = { /* 0x8168e64 */
    DEBUGINFO_O(12026),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_3N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_3N,  0,  1),
    MSG_NPC(1, (@@STRING:17bb503d6634658a96360866366d418572b18fb131448e6a8863796633750766@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives1_dlg2[] = { /* 0x8168f48 */
    DEBUGINFO_O(12040),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_3N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_3N,  1,  1),
    MSG_NPC(1, (@@STRING:fb8acae61b6d1a71179aac4828bb40976f0608c48d8103af89f0170ec10f6097@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives2_dlg2[] = { /* 0x816901c */
    DEBUGINFO_O(12054),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_3N, 2, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_3N,  2,  1),
    MSG_NPC(1, (@@STRING:5dd568f3cafd874c2e37f9d1236ed803856fb503f976ed715b2b372fe2146ea0@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives3_dlg2[] = { /* 0x81690ec */
    DEBUGINFO_O(12068),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_3N, 3, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_3N,  3,  1),
    MSG_NPC(1, (@@STRING:a37f684b8506a30a5bfd48e15531e1caf5543b5c8fbd76ad3742773c79cfa5c9@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives4_dlg2[] = { /* 0x81691cc */
    DEBUGINFO_O(12082),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_3N, 4, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_3N,  4,  1),
    MSG_NPC(1, (@@STRING:67eb7b381d7babadaa245decd71e2b855e1244d572c2734e400f38f931b608f0@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives5_dlg2[] = { /* 0x81692a8 */
    DEBUGINFO_O(12096),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_3N, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_3N,  5,  1),
    MSG_NPC(1, (@@STRING:d4190205c9654136919fda6071b313c8ca81519397f4ac83a07b14aedf745ae3@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives6_dlg2[] = { /* 0x8169384 */
    DEBUGINFO_O(12110),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:bf9e1d4835aa998c7a4d3e1b5c2e86edb085cb2a441f4b0329e35ba7954f0e52@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives7_dlg2[] = { /* 0x816941c */
    DEBUGINFO_O(12119),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6de366c325e536772c6ce4e20fddd0abf7b16874a93ca5b17c34b960f3c73156@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives8_dlg2[] = { /* 0x816949c */
    DEBUGINFO_O(12128),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:05929d8fb827da564fa57e7e0cdcd587ee238333ddbea0507dbb7422a5270a63@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives9_dlg2[] = { /* 0x816953c */
    DEBUGINFO_O(12137),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:68dbf504cbb5ceb72fe90d34eac3817601d6202f749dd1f0450d43cdc20d827b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives10_dlg2[] = { /* 0x81695ac */
    DEBUGINFO_O(12146),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6407752e2c8d636904a4229f8dc36a9198bc2d98ad591ae20134ba43ef74311a@@)),
    MSG_NPC(1, (@@STRING:5b1ab7f3286fac390bcbd17244c97c804bd0b135971341f4a5ee5c3ebf759e76@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives11_dlg2[] = { /* 0x8169664 */
    DEBUGINFO_O(12156),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:972e5d92ceedfadd449565b3adb1f5deaa2cc8cb46ece6bb72a14e2bcee6d034@@)),
    MSG_NPC(1, (@@STRING:898812655aed60bdb1c828353b44e48a604770d5ce0996ac97f322c90a9178b7@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives12_dlg2[] = { /* 0x816972c */
    DEBUGINFO_O(12166),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ce89dec47095f6e42472f34359b5424f7f94c60be89e1f19c9ba05dc0971902a@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives13_dlg2[] = { /* 0x81697a4 */
    DEBUGINFO_O(12175),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:e737f886e41f5d0ba2ba4c35cc77415811ed7a266ba2690424a66c1a9890f294@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g35_s0_lives14_dlg2[] = { /* 0x8169830 */
    DEBUGINFO_O(12184),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:fca16927d14dd9e2399a6085197eaa073f9aefdb7747d1aea0c7cc154bdf476c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_station_sref_script[] = { /* 0x81698ac */
    DEBUGINFO_O(12193),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g36_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g36_s0_station_sref_script }; /* 0x81698ec */

static const struct ScriptCommand s_gs1_g36_s0_lives0_dlg2[] = { /* 0x81698f8 */
    DEBUGINFO_O(12202),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_5N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_5N,  0,  1),
    MSG_NPC(1, (@@STRING:d0c6e314d162b90e1db351eed92cea4169a41e1328ea1710431eea39535af2d9@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives1_dlg2[] = { /* 0x81699e0 */
    DEBUGINFO_O(12216),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_5N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_5N,  1,  1),
    MSG_NPC(1, (@@STRING:b7cc06a4517c2c1a0dd1729b555775e93db94fd1c69ae17c51e5a4605850e825@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives2_dlg2[] = { /* 0x8169ac8 */
    DEBUGINFO_O(12230),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_5N, 2, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_5N,  2,  1),
    MSG_NPC(1, (@@STRING:5156b67c789687cfb212a8e6c2fd05be07993b28e9b2fa8cebc9d0d36df6cef7@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives3_dlg2[] = { /* 0x8169bac */
    DEBUGINFO_O(12244),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_5N, 3, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_5N,  3,  1),
    MSG_NPC(1, (@@STRING:64babc426cbc91135329b41ec89497eed19e99db252701cb612d3a028a9ea2d7@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives4_dlg2[] = { /* 0x8169ca0 */
    DEBUGINFO_O(12258),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_5N, 4, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_5N,  4,  1),
    MSG_NPC(1, (@@STRING:a43ed739958ef04e073a423a48496eb11c6ad95e0ca9967197d380a79fef3ba6@@)),
    MSG_NPC(1, (@@STRING:37a397b079aedb65173e943de12d4db47f8f80d9e1053e114d3ba8bb6bf4bc48@@)),
    MSG_NPC(1, (@@STRING:1b5f87bb46459f1af1d64cb6a0e526cd714643ac8902f03f96a86d411c83c269@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives5_dlg2[] = { /* 0x8169dcc */
    DEBUGINFO_O(12274),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M01E10A_5N, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M01E10A_5N,  5,  1),
    MSG_NPC(1, (@@STRING:4afc5d3a7f40fc6105b91eec95dce6b97bfc4a723c807d9c7d78fadaea154127@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives6_dlg2[] = { /* 0x8169eac */
    DEBUGINFO_O(12288),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:74ce197d798e518c4019c8929649beb0fc25e5eb5d7f0ce5b4b4b6984eb5dd85@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives7_dlg2[] = { /* 0x8169f3c */
    DEBUGINFO_O(12297),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:264c45f8c962b6ed7838541f16974414d05e57883d74c02d8e1d0e17b5f2957f@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives8_dlg2[] = { /* 0x8169fdc */
    DEBUGINFO_O(12306),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:ac9553086d6170f04652cb532390211a951186a6270d2c43163ff527a3ac4636@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives9_dlg2[] = { /* 0x816a084 */
    DEBUGINFO_O(12315),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:c86e02464e6ba55dd1c427d4d740f1047b4c4038292c938e8cf6ccfba7c6f36c@@)),
    MSG_NPC(1, (@@STRING:a34a8ff34b58763bd25daba868d43f3e3abf506e105c15ab68b810684dd9beba@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives10_dlg2[] = { /* 0x816a134 */
    DEBUGINFO_O(12325),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:a72b0e7a0364df534940bd55d52d980a1522ac848c69f922c58def939ceb0b15@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives11_dlg2[] = { /* 0x816a1b4 */
    DEBUGINFO_O(12334),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:50dfde2d8bc2227d41f7cc18f5713339d970fd702cbf8efcbfeb1e11234c7a33@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives12_dlg2[] = { /* 0x816a23c */
    DEBUGINFO_O(12343),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:56f53553526f9792652b77246b3a220c0d7f4185c732c5b9608fd8d36e09326b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives13_dlg2[] = { /* 0x816a2c4 */
    DEBUGINFO_O(12352),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:f60a14ae4ef1c029d8ac63adc9ce97286178561fd3dc8df48fbe7c557523d975@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g36_s0_lives14_dlg2[] = { /* 0x816a344 */
    DEBUGINFO_O(12361),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:9f949c38709a6753918c1165e540128d1b5dec72b74dde2f71142656f6b38eb1@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g37_s0_station_sref_script[] = { /* 0x816a3d0 */
    DEBUGINFO_O(12370),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, -1),
    { 0x22, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(240),
    { 0x23, 0x01,  0x002d,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs1_g37_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g37_s0_station_sref_script }; /* 0x816a440 */

static const struct ScriptCommand s_gs1_g37_s0_eff0_script[] = { /* 0x816a44c */
    DEBUGINFO_O(12382),
    CAMERA_INIT_PAN,
    WALK_GRID(153, 135),
    HALT,
};

static const struct ScriptCommand s_gs1_g38_s0_station_sref_script[] = { /* 0x816a48c */
    DEBUGINFO_O(12389),
    SELECT_ENTITIES(-1, -1),
    JUMP_STATION(  2,  0),
    RET,
};

static const ScriptRef s_gs1_g38_s0_station_sref = { STATION_CONTROL, SCRIPT_TYPE_08, NULL, s_gs1_g38_s0_station_sref_script }; /* 0x816a4cc */

static const struct ScriptCommand s_gs1_g38_s0_lives0_dlg2[] = { /* 0x816a4d8 */
    DEBUGINFO_O(12398),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  0,  1),
    MSG_NPC(1, (@@STRING:02d7c594e90bbda3cf81241f45f0c78753acad612215ed5103451ba550635c2f@@)),
    MSG_NPC(1, (@@STRING:6388647fc03e4b09a587f76ee34d14c08a285bc4080efff62c45f0a837808877@@)),
    MSG_NPC(1, (@@STRING:f25785df4a3d394a5b9f127e0e96ae61eebf7efab36bd4a1f2fb8b765d1c8a06@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives1_dlg2[] = { /* 0x816a628 */
    DEBUGINFO_O(12414),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  1,  1),
    EXECUTE_STATION(-1, 38, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives2_dlg2[] = { /* 0x816a6d8 */
    DEBUGINFO_O(12428),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 2, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  2,  1),
    MSG_NPC(1, (@@STRING:532ea8b49f1bc4a8ecaacf495a15e1ff5487540030f91cbc517234674fd4a697@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives3_dlg2[] = { /* 0x816a7b0 */
    DEBUGINFO_O(12442),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 3, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  3,  1),
    MSG_NPC(1, (@@STRING:93e79f57ec7a6c28b19bd16d7e11225312f2e3000f0480dbcd87788d7fca1ca2@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives4_dlg2[] = { /* 0x816a8a4 */
    DEBUGINFO_O(12456),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 4, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  4,  1),
    MSG_NPC(1, (@@STRING:25f394263c86785bd78c2b1f4d9f13d75c942d4c6e0f8680df2be83ea24df155@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives5_dlg2[] = { /* 0x816a980 */
    DEBUGINFO_O(12470),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  5,  1),
    MSG_NPC(1, (@@STRING:a9953f1f1f89cf11c26603e2badb2e803e3ba51e59ae9a1a1a0100598c98bbdb@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives6_dlg2[] = { /* 0x816aa80 */
    DEBUGINFO_O(12484),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:718580cc34dd071c88b601b43b8ff8ddddf24248bd46748f9a977bbbe312c82c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives7_dlg2[] = { /* 0x816ab1c */
    DEBUGINFO_O(12493),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:362ba77842f25a53577acaae5fd3b1f88b12fa0f707cbf99e134021a77555c46@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives8_dlg2[] = { /* 0x816abb8 */
    DEBUGINFO_O(12502),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:2dc8238b0a3996c67b1be2dd69ae676c9e6a3d24f035038573126e31f4ed60c5@@)),
    MSG_NPC(1, (@@STRING:4f563bab3293aa47535d132079e595736c9275658eed299a8232e8868109d20d@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives9_dlg2[] = { /* 0x816ac98 */
    DEBUGINFO_O(12513),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:c83bbf20fb37a90159db2f8faf0976177c5e329b3bd88bcf59021feef4159d8c@@)),
    MSG_NPC(1, (@@STRING:c74b3f0a0bcdcc04f8e04f4142e8175b323c404b121f317b6c2be765bba8930b@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives10_dlg2[] = { /* 0x816ad78 */
    DEBUGINFO_O(12523),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:6f3543634db71916d298c47c68f1ecf4d4c8aba4d86271a190c0a7d29e7f6884@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives11_dlg2[] = { /* 0x816adf0 */
    DEBUGINFO_O(12532),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:cf0c8c30546e1b38fb1eabdd722bda76da576feae2c762727b3ebeeb4ea58252@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives12_dlg2[] = { /* 0x816ae70 */
    DEBUGINFO_O(12541),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:cd84141489c9e579e7179c3c6ef6d98eaed19443910574183583a56125bdef60@@)),
    MSG_NPC(1, (@@STRING:2254d6362440607a9364708a8ce9741b16fa07610b7f4f57580dfc7cec7b1ba5@@)),
    MSG_NPC(1, (@@STRING:0e13533eee9f6a73667b26755d27f82e6d985f71333a7134d54282cb73b0e62c@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s0_lives13_dlg2[] = { /* 0x816af9c */
    DEBUGINFO_O(12553),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:cd84141489c9e579e7179c3c6ef6d98eaed19443910574183583a56125bdef60@@)),
    MSG_NPC(1, (@@STRING:64b21dab97e618ea4ab1d2cbd45a2d1877ac3b73476af539314c31351c368f0b@@)),
    MSG_NPC(1, (@@STRING:d6be722f6e1b55270fa1b2981a31f3fef98e9551444430087a8d6942b8273450@@)),
    MSG_NPC(1, (@@STRING:f43269ba31a20c48fadacec70a0d7656cc72d0db25c61c9dc0df5b201ed90d08@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s1_station_sref_script[] = { /* 0x816b104 */
    DEBUGINFO_O(12566),
    SELECT_LIVES(-1, 1),
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs1_g38_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g38_s1_station_sref_script }; /* 0x816b144 */

static const struct ScriptCommand s_gs1_g38_s1_lives0_dlg0[] = { /* 0x816b150 */
    DEBUGINFO_O(12575),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    WAIT(1),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:111c0628d1db2ad0430055295f433ee2e1ebdf2297f21e14d173612c17304ccf@@)),
    MSG_NPC(3, (@@STRING:13ce5ded0cc2e2a65583dd8535c656fa784b27c02e1b55f60e112a848822ae97@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:01f3b3b09fb761a9e584355370a27a3b6a25e6ad13dc69e71fbdd0b292cab751@@)),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:902c4b450cd0e7b7c1315eddee8b3c7acf243eb1f88fa2b1806b2d06ccc013e8@@)),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:d3a78c85e2d813dfbf218630804301d1aba9bbb3bc8c942db0b43d65b49af301@@)),
    MSG_NPC(3, (@@STRING:325f4b62833914699969bd770e549d135f9f441b3b61a08f566f226b42b3b143@@)),
    ALERT_CUE(3),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    RET,
};

static const struct ScriptCommand s_gs1_g38_s1_lives1_dlg0[] = { /* 0x816b424 */
    DEBUGINFO_O(12606),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(7),
    SELECT_ANIMATION(4),
    RET,
};

static const struct ScriptCommand s_gs1_g38_s1_lives1_dlg2[] = { /* 0x816b4d4 */
    DEBUGINFO_O(12620),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 0, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  0,  1),
    MSG_NPC(1, (@@STRING:83b18a88adb71e6dbab50315368c4a69e186a9d1c6d088561f29885da6f179ef@@)),
    MSG_NPC(1, (@@STRING:1e3f182d30bdd5ba8f06a02b6ce03f23c7f3b45f246864d27ae3e54dd21c5d4d@@)),
    MSG_NPC(1, (@@STRING:325f4b62833914699969bd770e549d135f9f441b3b61a08f566f226b42b3b143@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g38_s1_lives2_dlg0[] = { /* 0x816b620 */
    DEBUGINFO_O(12636),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WAIT(30),
    SELECT_ANIMATION(4),
    RET,
};

static const struct ScriptCommand s_gs1_g38_s1_lives2_dlg2[] = { /* 0x816b6f0 */
    DEBUGINFO_O(12652),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_M02E01A_2N, 1, /* to label */ 0),
    SET_ARRAYVAL(EVENT_M02E01A_2N,  1,  1),
    EXECUTE_STATION(-1, 38, 1),
    HALT,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g39_s0_lives0_dlg2[] = { /* 0x816b7a0 */
    DEBUGINFO_O(12666),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:6e8864269fb485da86c62df6c692805e6a5f67a77a26923020ea117c26a22b1a@@)),
    CHOICE(/* label */  0, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  1, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(0), /* = 0x00 */
    { 0x3b, 0x1d,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 2),
    MSG_NPC(1, (@@STRING:1603fe57c7b8f5e0f67546527fd2082b9f451b80b733647544d3972ad7229d56@@)),
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:36165ddd5e1c30aea883419b9624f4cd3e4ebd2aed289b9ba8e45d2a6edb7e50@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    { 0x3b, 0x1e,  0x0000,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:cce73d449b87a907e38aef4f571aa7ea4790b7730f50989783a18724a29a86ce@@)),
    CHOICE(/* label */  3, (@@STRING:e5b4158fa246c99386bbc5f943f4887ac2b3ac75150fd1e13dd84ace1bee0678@@)),
    CHOICE(/* label */  4, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(3), /* = 0x03 */
    RENAME_ALLY(-1),
  LABEL(4), /* = 0x04 */
    { 0x3b, 0x1f,  0x0000,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    SCENARIO_CALC(SCENARIO_SUB1, 32,  3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    CANCEL_ENTITIES(39, -1),
    WAIT(30),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    MSG_NPC(1, (@@STRING:62d02252fe55033aaade625e3e268f63463d7ff958a45ea338ddcb3159291097@@)),
    MSG_NPC(1, (@@STRING:0e1745a1c9e438352c166173e48054004a0c0d0198b19ac6b898dac9dc882d44@@)),
    MSG_NPC(1, (@@STRING:d9f051020994ca5ed89639aa1657447e893af2b06d73d6d22a9f031e0f0c410c@@)),
    MSG_NPC(1, (@@STRING:fb99bb761e880a9cbe875033e5b4b1d52c0d17828d1b0d6dc76b02160f3044d4@@)),
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    MSG_NPC(1, (@@STRING:13ef6e3af9b3c14e7c2d703836fc88b16c6074ad57afec27c3ea8589461c8065@@)),
    MSG_NPC(1, (@@STRING:ae150f35b90afd216d7a9674fe9df7ef30d4135ca71d8f89d02bdab7ed4ff160@@)),
    MSG_NPC(1, (@@STRING:d9f051020994ca5ed89639aa1657447e893af2b06d73d6d22a9f031e0f0c410c@@)),
    MSG_NPC(1, (@@STRING:fb99bb761e880a9cbe875033e5b4b1d52c0d17828d1b0d6dc76b02160f3044d4@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g40_s0_lives0_dlg0[] = { /* 0x816bc04 */
    DEBUGINFO_O(12711),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g40_s0_lives0_dlg2[] = { /* 0x816bc34 */
    DEBUGINFO_O(12717),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    WAIT(1),
    ALERT_CUE(6),
    WAIT(30),
    MSG_NPC(1, (@@STRING:9ba16b961a0b532988c96d3082193bbcd58239f6d96b59b3dfcf664c2fb8ac54@@)),
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:19f444bf8121fdf6ab7f42ad4d5f57cd2c3072d50f1457515d18e17519c189f9@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000000),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:b852fd24385f2fc29232fc96a3eedcd0a3be1f3161554051c08215b3a064c9f1@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(3), /* = 0x03 */
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:fc6d2a2fcc771e9809ae86b65b2dfdef81fe2b2983da44dfeb584d9a0eef238d@@)),
    RESET_ARRAY(EVENT_LOCAL),
    JUMP_SCRIPT(END_TALK),
  LABEL(2), /* = 0x02 */
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:4142508711b338f9d36abbc33c234fb104e9da375352ad762e9de51415150ffb@@)),
    MSG_NPC(1, (@@STRING:f6b7adfa71bf5e2300582458e5f7a96f236edcaab68788b91c91a4fcc8d8041d@@)),
    PORTRAIT_REP(0x0001, 0x00000003),
    MSG_NPC(1, (@@STRING:ee6508b52b22a47434ac2340855f80a54df398220f1d202ba640f9465888488d@@)),
    MSG_NPC(1, (@@STRING:bfc807f1169099a3be3ffeca2efc96fe127f8e0a3f5d66d470db401a0881bac1@@)),
    MSG_NPC(1, (@@STRING:ecfb12b66fb62131c6a576999ba97ae300dbae0143e57692cbfe6c0bc425f0c8@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:fed1c618a43502a242b3a44f2ffc524c486e307bc4a64217f115a6d0eb96e041@@)),
    MSG_NPC(1, (@@STRING:eecf5d6970ecdcbe80b3c426d7e810f113fd8aaa196d501fa2ebfa0c982339b7@@)),
    MSG_NPC(1, (@@STRING:583dab348604cecafea86300fa13a85a81ee29810f630ed90a9d0929dbf199bb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    SELECT_ANIMATION(5),
    WAIT(45),
    SELECT_ANIMATION(2),
    WAIT(30),
    FANFARE_PLAY2(468),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:cd2f6deeacd0b6dc6b74a6efcf1a571e54f119e69d133d35bf6f1fa61589cfe5@@)),
    MSG_NPC(1, (@@STRING:f7300851e3ea0492a7f364ebefc070c79f8e9ae379af8b49d18f076c2b579e84@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(60),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    WAIT(30),
    MSG_NPC(1, (@@STRING:d30ebcefa92b85e8a52b851bdc2cfa4ace32a27b1162fafb951860cff6a2c5fc@@)),
    MSG_NPC(1, (@@STRING:2005490b08b652c5c77ea34144c4c524bcd64a13583bb071405e781d7dcc849b@@)),
    TEXTBOX_CLEAR,
    RESET_ARRAY(EVENT_LOCAL),
    JUMPIF_SCENE_GT(SCENARIO_SUB2, 33, 3, /* to label */ 4),
    SCENARIO_CALC(SCENARIO_SUB2, 33,  3),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(END_TALK),
};



static const struct ScriptCommand s_gs1_g40_s0_lives0_dlg3[] = { /* 0x816c390 */
    DEBUGINFO_O(12784),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005e,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(0, /* to label */ 0),
    CALL_SCRIPT(QUESTION_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_92(4, 11, DIR_TRANS_FLIP),
    AWAIT_CUE(6),
    CMD_UNK_92(4, 11, DIR_TRANS_FLIP),
    CALL_SCRIPT(NOTICE_FUNC),
  LABEL(0), /* = 0x00 */
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(2),
    WAIT(12),
    RET,
};

static const struct ScriptCommand s_gs1_g41_s0_lives0_dlg0[] = { /* 0x816c510 */
    DEBUGINFO_O(12811),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g41_s0_lives0_dlg2[] = { /* 0x816c540 */
    DEBUGINFO_O(12817),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:c87d5b9db6629938eb709cd9387a6a4bfab8b6b3cdf8509000cb8d158c3fdedc@@)),
    MSG_NPC(1, (@@STRING:86c346d6f63b0aadd221b33ab3a3f31ee2766c431351981dea9cb9cbd5849922@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:8b5aebb048968dbb28632ead3d60181e434845d4526b627456aee756bd474bca@@)),
    MSG_NPC(1, (@@STRING:c90e17e4cbc08546fc6f28e0f789fcaf0021b62b8f8e83f4f6ac058cfb2c3deb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:333e40e0d76067f58a2925aa3bf390eeee92887c8fcbf1cc500b60c6cdd29227@@)),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:2275629a29442037f6e42b253897b96f42134c6c203c225628719ace29872c20@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(3), /* = 0x03 */
    MSG_NPC(1, (@@STRING:557dc8144ec36fcc18cb4d812f81f9a753074a8f2d634280e89a87b1876b6fd0@@)),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:2275629a29442037f6e42b253897b96f42134c6c203c225628719ace29872c20@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(2), /* = 0x02 */
    MSG_NPC(1, (@@STRING:59f2b3eb2917ab28b2855db75e14f2ed5860185972b6b9622efef89d5bb585d4@@)),
    MSG_NPC(1, (@@STRING:2e1fa820df69997be64e23e4032ad62e733b91309c8618658b25f0c3186b5027@@)),
    TEXTBOX_CLEAR,
    JUMPIF_SCENE_GT(SCENARIO_SUB2, 34, 2, /* to label */ 4),
    SCENARIO_CALC(SCENARIO_SUB2, 34,  2),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(END_TALK),
};



static const struct ScriptCommand s_gs1_g41_s0_lives0_dlg3[] = { /* 0x816c958 */
    DEBUGINFO_O(12854),
    { 0x52, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000400,  0x00000000, NULL },
    CMD_UNK_8D(0, DIR_TRANS_NONE),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(2),
    WAIT(12),
    RET,
};

static const struct ScriptCommand s_gs1_g42_s0_lives0_dlg2[] = { /* 0x816ca38 */
    DEBUGINFO_O(12871),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x0000004d,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:7e4c5cfe8320128821be3ddd99dc57c245bd372b2f073ee85381405d6a9e9045@@)),
    MSG_NPC(1, (@@STRING:75491b4295a4eb1de6bde2d56c61ad7e28cbe578ff6602f6f74105a3a07c6e6a@@)),
    MSG_NPC(1, (@@STRING:f07275a2429098aceb24ad271a56687efc31d8d0a00f2171a80084777c3c87ab@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g42_s0_lives1_dlg0[] = { /* 0x816cb70 */
    DEBUGINFO_O(12883),
    CANCEL_ENTITIES(1, 0),
    RET,
};

static const struct ScriptCommand s_gs1_g42_s0_lives1_dlg2[] = { /* 0x816cba0 */
    DEBUGINFO_O(12889),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x0000004f,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:7d15dbf5f04ada8bb993751d4e29b53ab26cb262a5d99896a39e91c65a9428cf@@)),
    MSG_NPC(1, (@@STRING:8280d1fbf4c686357d9b21a7802afffadf29a7c6c1f7a4a3d1d011aeb2bf23d5@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g42_s0_lives2_dlg2[] = { /* 0x816cc54 */
    DEBUGINFO_O(12900),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g42_s0_lives3_dlg2[] = { /* 0x816ccb4 */
    DEBUGINFO_O(12909),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g42_s0_lives4_dlg2[] = { /* 0x816cd14 */
    DEBUGINFO_O(12918),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g42_s0_lives5_dlg2[] = { /* 0x816cd74 */
    DEBUGINFO_O(12927),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g42_s0_lives6_dlg2[] = { /* 0x816cdd4 */
    DEBUGINFO_O(12936),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g42_s0_evt0_sref_script[] = { /* 0x816ce34 */
    DEBUGINFO_O(12945),
    EXECUTE_STATION(-1, 43, 0),
    HALT,
};

static const ScriptRef s_gs1_g42_s0_evt0_sref = { NORMAL_EVENT, SCRIPT_TYPE_07, NULL, s_gs1_g42_s0_evt0_sref_script }; /* 0x816ce64 */

static const struct ScriptCommand s_gs1_g43_s0_station_sref_script[] = { /* 0x816ce70 */
    DEBUGINFO_O(12953),
    SELECT_ENTITIES(-1, 0),
    AWAIT_CUE(3),
    WAIT(10),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    EXECUTE_FUNCTION(EVENT_S04E01A_L001),
    RET,
};

static const ScriptRef s_gs1_g43_s0_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g43_s0_station_sref_script }; /* 0x816cef0 */

static const struct ScriptCommand s_gs1_g43_s0_eff0_script[] = { /* 0x816cefc */
    DEBUGINFO_O(12966),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    WALK_RELATIVE(512, -256, 0),
    HALT,
};

static const struct ScriptCommand s_gs1_g43_s0_lives0_dlg0[] = { /* 0x816cf4c */
    DEBUGINFO_O(12974),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:45ee416aff4784042dbd04adaf001ca180eaddd77c880605df52f29dbd7a52b5@@)),
    MSG_NPC(3, (@@STRING:38b0648d210ece70535c0be5502b499bc1592f13fe4e202f1a423e3e700cf0df@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:daa79808d3a518a492d6ce3840d31f0b485794ffd1dac5e1d913054448221aa9@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(120),
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(20),
    ALERT_CUE(4),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    { 0x58, 0x01,  0x0000,  0x000001c0,  0x00000138, NULL },
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    MSG_NPC(-1, (@@STRING:8d47f19a0a47929b6e04b62400203f17b6957879ed5944abd4635e3293123da3@@)),
    MSG_NPC(-1, (@@STRING:cdbfa6d4d7ac94101091413e14a9575d1f24cc1e73d18da5ee264699ae7e1f33@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:9c5cb40e1ef0342cfc4805d1eff08736152d505b782423551d66c1d7ed1b7616@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    ALERT_CUE(8),
    ALERT_CUE(7),
    ALERT_CUE(6),
    WALK_RELATIVE(460, -160, 0),
    HALT,
};





static const struct ScriptCommand s_gs1_g43_s0_lives1_dlg0[] = { /* 0x816d2cc */
    DEBUGINFO_O(13025),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8E(1, DIR_TRANS_NONE, 0),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(6),
    { 0x58, 0x01,  0x0000,  0x000001d0,  0x00000150, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(460, -200, 0),
    AWAIT_CUE(6),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g43_s0_lives2_dlg0[] = { /* 0x816d39c */
    DEBUGINFO_O(13041),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(10),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT_FANFARE2(468),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x58, 0x01,  0x0000,  0x000001f0,  0x00000138, NULL },
    AWAIT_CUE(7),
    WALK_RELATIVE(460, -200, 0),
    HALT,
};

static const struct ScriptCommand s_gs1_g43_s0_lives3_dlg0[] = { /* 0x816d48c */
    DEBUGINFO_O(13059),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x58, 0x01,  0x0000,  0x000001f0,  0x00000150, NULL },
    AWAIT_CUE(8),
    WALK_RELATIVE(460, -200, 0),
    HALT,
};

static const struct ScriptCommand s_gs1_g43_s0_lives4_dlg0[] = { /* 0x816d56c */
    DEBUGINFO_O(13076),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    WAIT(20),
    SELECT_ANIMATION(5),
    WALK_RELATIVE(256, 8, -8),
    WAIT(60),
    WALK_RELATIVE(256, 8, 8),
    WAIT(60),
    WALK_RELATIVE(256, 8, -8),
    FANFARE_PLAY2(468),
    WAIT_FANFARE2(468),
    FANFARE_PLAY2(468),
    WAIT(45),
    WALK_RELATIVE(256, 8, 8),
    FANFARE_PLAY2(468),
    WAIT_FANFARE2(468),
    FANFARE_PLAY2(468),
    WAIT(45),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    FANFARE_PLAY2(809),
    { 0x54, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    ROTATE_TO(1, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(10),
    WAIT_FANFARE2(809),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    FANFARE_PLAY2(510),
    WAIT(60),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs1_g44_s0_lives0_dlg2[] = { /* 0x816d78c */
    DEBUGINFO_O(13113),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000073,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:2453680685a9fd1f1c7deb0aa566ad1a5f77ab61e5da48a67aba5782b2ead2d8@@)),
    MSG_NPC(1, (@@STRING:a1d2c4c7d3f2c5900d44239d9bf63ec35549552d5aa3ebfc99a9e3484ac60a67@@)),
    MSG_NPC(1, (@@STRING:79c0b4ee7ecf9cad4115c7bea4aa140a7dacdc26271e2ba8f132835b8ba4036e@@)),
    JUMP_SCRIPT(END_TALK),
};

static const struct ScriptCommand s_gs1_g45_s0_lives0_dlg2[] = { /* 0x816d8b4 */
    DEBUGINFO_O(13125),
    EXECUTE_STATION(-1, 45, 1),
    HALT,
};

static const struct ScriptCommand s_gs1_g45_s1_station_sref_script[] = { /* 0x816d8e4 */
    DEBUGINFO_O(13131),
    SELECT_ENTITIES(-1, -1),
    AWAIT_CUE(3),
    SCENARIO_CALC(SCENARIO_SUB4, 43,  2),
    RET,
};

static const ScriptRef s_gs1_g45_s1_station_sref = { EVENT_WAKEUP, SCRIPT_TYPE_07, NULL, s_gs1_g45_s1_station_sref_script }; /* 0x816d934 */

static const struct ScriptCommand s_gs1_g45_s1_lives0_dlg0[] = { /* 0x816d940 */
    DEBUGINFO_O(13141),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:6e0f22e931943baa594b623ed0357c133f32a39f6dc0ba44e8264a80b97bfe8b@@)),
    MSG_NPC(2, (@@STRING:13529815d7095d022844c6afea43adc0c5a57444015199cfbf2229d68f9e9769@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:f69cda002130eda256736519fbc3dd834feb316e0412655473572e8bfdd0d8f2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:1e6f633dec3c10e45d5a04a6e7366400925868e0a77e59b36f288131ca8d1a96@@)),
    MSG_NPC(2, (@@STRING:1ee336020d60783bfb2981177f44c7c7cd5e0a89f26eb7818f9a45de73f99ea6@@)),
    MSG_NPC(2, (@@STRING:002964b86d842c629813c6fb4f07e64e7df93e7175f4b24438e3c51a98527af6@@)),
    MSG_NPC(2, (@@STRING:19c940b18497e092f33756f381ca1328f592b5acced3eca9a3ffe1dc3af451f9@@)),
    { 0x3b, 0x23,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 1),
    COND_EQUAL(1, /* to label */ 1),
    MSG_NPC(2, (@@STRING:75deb922cde64bff2e5ba6965ea07a9430ee6c8fe6c6996f414e1db1aef55c05@@)),
    ALERT_CUE(7),
    AWAIT_CUE(5),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    { 0x3b, 0x23,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(2, /* to label */ 2),
    MSG_NPC(2, (@@STRING:b9c0de72c87c5f16b36cbc2a76fdac8c3f77ba65b5d4d858bf868d147a1a1578@@)),
    MSG_NPC(2, (@@STRING:38a2b5d5f846f4a39930b369e185ddfdf1a6422ae88de27b306af31d98320668@@)),
    MSG_NPC(2, (@@STRING:a873fd597bf9a4053b9a45372bf31cf5fe6181832cff59e56447e1cca86c73bf@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:081939d24f0e7292f1c7191a2e7c64cd5731e46509206e6f7925db9e7a6cccd7@@)),
    MSG_NPC(2, (@@STRING:3c91df01f1315bb5485d2ba1267dc7d1d2dfb139ce959ae05b20ea6616121f2e@@)),
    MSG_NPC(2, (@@STRING:b96f678e68eee16c64271cd27a238b7bb0b3517d2d42af70d1e40fd88be33109@@)),
    MSG_NPC(2, (@@STRING:10a946bfdb87b53b94c25cd36a76f94870aa103228d9cdccb1618fc90698807d@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:b9c0de72c87c5f16b36cbc2a76fdac8c3f77ba65b5d4d858bf868d147a1a1578@@)),
    MSG_NPC(2, (@@STRING:ef08128bb7a184eb4725dab19d4f09e028d4741e7cbe0f8e3507e761586fea88@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(30),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    MSG_NPC(2, (@@STRING:4dd1dcd8d336423b3a1c06e14756bfa972817f131602d344928564b96ef44771@@)),
    MSG_NPC(2, (@@STRING:68f6450c2cd288c4e5daa6158d7c79ad59dd5d454169dccb13f62cbc94462274@@)),
    MSG_NPC(2, (@@STRING:c9e8d00ab0900b686999fd7ad8c3797f6df2a804cf7988fed85aec949cb5b648@@)),
    MSG_NPC(2, (@@STRING:052e8a477f68e3aef2f11b34748a31c88bc84c348135640c5a6fce5e562ef954@@)),
    MSG_NPC(2, (@@STRING:fae2edef681474488677841096dafbb076d3efd9133ab7ddf0a146221239db56@@)),
    MSG_NPC(2, (@@STRING:081939d24f0e7292f1c7191a2e7c64cd5731e46509206e6f7925db9e7a6cccd7@@)),
    MSG_NPC(2, (@@STRING:3c91df01f1315bb5485d2ba1267dc7d1d2dfb139ce959ae05b20ea6616121f2e@@)),
    MSG_NPC(2, (@@STRING:6ee1dd006eb4829388bd137b9f946740034599cabcd0ac714916a138dd39009d@@)),
    MSG_NPC(2, (@@STRING:7c230e89b31a6f017068225fc84e83e9643043af67cb246978b8070180a372ce@@)),
    MSG_NPC(2, (@@STRING:99a96014d54d9461b21301ccf7238895ebb186c61298141bb06172cf144c3ebd@@)),
    TEXTBOX_CLEAR,
  LABEL(3), /* = 0x03 */
    ALERT_CUE(7),
    { 0x52, 0x00,  0x0000,  0x00000004,  0x00000000, NULL },
    WALK_RELATIVE(256, -32, 0),
    CMD_UNK_8E(15, DIR_TRANS_10, 115),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};


static const struct ScriptCommand s_gs1_g45_s1_lives1_dlg0[] = { /* 0x816e32c */
    DEBUGINFO_O(13229),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(4),
    WAIT(60),
    { 0x54, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x3b, 0x23,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(0, /* to label */ 0),
    COND_EQUAL(1, /* to label */ 0),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT(20),
    ALERT_CUE(5),
    AWAIT_CUE(7),
  LABEL(0), /* = 0x00 */
    SELECT_ANIMATION(4),
    WAIT(60),
    { 0x54, 0x00,  0x000f,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(762),
    SELECT_ANIMATION(17),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT_FANFARE2(762),
    FANFARE_PLAY2(510),
    WAIT(60),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x3b, 0x23,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(2, /* to label */ 1),
    SELECT_ANIMATION(4),
    WAIT(80),
    SELECT_ANIMATION(2),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    FANFARE_PLAY2(473),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    WAIT_FANFARE2(473),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(4),
    WAIT(80),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    FANFARE_PLAY2(510),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
  LABEL(2), /* = 0x02 */
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WAIT(20),
    SELECT_ANIMATION(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(30),
    WALK_RELATIVE(256, 8, 16),
    ALERT_CUE(5),
    WAIT(60),
    WALK_RELATIVE(256, -8, 16),
    WAIT(60),
    WALK_RELATIVE(256, 8, 16),
    WAIT(60),
    WALK_RELATIVE(256, -8, 16),
    WAIT(60),
    WALK_RELATIVE(256, 8, 16),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    ALERT_CUE(5),
    WAIT(30),
    WALK_RELATIVE(256, -8, 16),
    WAIT(60),
    WALK_RELATIVE(256, 8, 16),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(30),
    WALK_RELATIVE(256, -8, 16),
    WAIT(30),
    WALK_RELATIVE(256, 8, 16),
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g46_s0_station_sref_script[] = { /* 0x816e8bc */
    DEBUGINFO_O(13321),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, 1),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs1_g46_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g46_s0_station_sref_script }; /* 0x816e97c */

static const struct ScriptCommand s_gs1_g46_s0_eff0_script[] = { /* 0x816e988 */
    DEBUGINFO_O(13338),
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    WALK_RELATIVE(256, -32, 0),
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g46_s0_lives0_dlg0[] = { /* 0x816e9f8 */
    DEBUGINFO_O(13348),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0005, 0x00000001),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:f030d2d8ec2530cc64819db1d700506934f2c36894c7ac42d729424749b1c6bf@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(15),
    MSG_NPC(3, (@@STRING:417dcacf6f627dc340efd445fa88f915f25def6a9ea7bf3cc6e6c1edd18a67c4@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:bd1f76fbe31b2f32a89d17df68b764df0f15acc67fb6412a952295c5b839fba6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:35a97cbfa999bd452dac1484dc75ae043c67425423509c237dc48e4943355932@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:abeabc4c470fb04a548b40ecee6891f914780d687c143a470450a3a0ecc0594c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    MSG_NPC(5, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(10),
    MSG_NPC(2, (@@STRING:d0cad0cf2eb4134abd5b869f29f29a64208a5b0ca1e14731f926f89a99d3864d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    MSG_NPC(5, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ff217b0046c271e4784e4e361c500241ee3c220327663bdf1da177f4f8183b53@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:f46fa3d70c373e93998b5dd53610e0438013bdd17af9d0df2942f79e5c3e35ed@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:ab612bdf1ae0bbb13be720058f91ddd8a0eccde9dd371679d133d2f8f1726399@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    MSG_NPC(5, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(10),
    MSG_NPC(3, (@@STRING:4310c9e03caa6af5dbf674d8a9546405a02bc5aff0e2e2547edc8bab8a50b551@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    MSG_NPC(5, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    TEXTBOX_CLEAR,
    WAIT(30),
    WALK_GRID(256, 137),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:2ba894204bc92b33e200ebc21842619b0e556fb8a4e406b79561e6c6bee3c364@@)),
    MSG_NPC(2, (@@STRING:05822dd4307c08797cb4ef8ec32696a51439ea1c237c9f57df113e9c65107a8d@@)),
    MSG_NPC(2, (@@STRING:fe7bad5c5b7b72071a36dcdce5b093d307bec9c252ee69ac64150419df8998c0@@)),
    TEXTBOX_CLEAR,
    ASK3( TRUE, /*default*/ -1, /* speaker */ 2, (@@STRING:3d21352396ac000a32ebe705252b200e99df2f097ead9cc177e83e2999503cac@@)),
    CHOICE(/* label */  5, (@@STRING:dab6e1b4cbe42c7954696002976e76a33adc8d41c254eabd8d14a92e59512915@@)),
    CHOICE(/* label */  6, (@@STRING:cc9bc68023e28ff8a8b7d6efa9dd1cc115ea62f023a223ea486ac36d04ab95f3@@)),
    CHOICE(/* label */  7, (@@STRING:d240d2000b9f6e39a27c9513af16437df9f51297886407e501e7ef6061db332f@@)),
  LABEL(5), /* = 0x05 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:9689ca8a584aed72c42e553fcafc340fdf92f36505550da3929a286421187cc4@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0002, 0x00000002),
    MSG_NPC(2, (@@STRING:b1be31b029bb89b1ca6865224fb550d9481ac6b5840efc82428b7ad18cb9a2ed@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(8),
  LABEL(6), /* = 0x06 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 2),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:85fa3113b06de5fbcde29a6cd0b74f08587f6e39a0ffc54df622dcd59da7ab35@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:ff20145d830c80a79412567177f62f846d43eec4ba58085119edd72534752e71@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(8),
  LABEL(7), /* = 0x07 */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 3),
    FANFARE_PLAY2(470),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0003, 0x00000001),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_FLIP, 0x0004, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(2, (@@STRING:331ac53115c61c1a3dc39e03c08ae47e2f8d7215ee471fc2978cb62d4e9b2d50@@)),
    MSG_NPC(3, (@@STRING:331ac53115c61c1a3dc39e03c08ae47e2f8d7215ee471fc2978cb62d4e9b2d50@@)),
    MSG_NPC(4, (@@STRING:331ac53115c61c1a3dc39e03c08ae47e2f8d7215ee471fc2978cb62d4e9b2d50@@)),
    MSG_NPC(5, (@@STRING:331ac53115c61c1a3dc39e03c08ae47e2f8d7215ee471fc2978cb62d4e9b2d50@@)),
    MSG_LETTER((@@STRING:b2b55f6750e779b266098498d6a922d023818fd8ad58c2a33c82d2c10e85475b@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    MSG_NPC(2, (@@STRING:40e281b971ba9eaa23a3244b97eab8e2b0ce8b58175ba5fca4276ef931966d19@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    MSG_NPC(3, (@@STRING:f6cff45007e5f6f70d989ba56e46388fc4286e53a87d9e93eb15c76e0c73eb92@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
  LABEL(8), /* = 0x08 */
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0003, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0004, 0x00000000),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0005, 0x00000001),
    WAIT(60),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    WAIT(30),
    MSG_NPC(4, (@@STRING:022a51109bdd5756d58cc73a0db04446f2dfefbaf4a087484c5e919103e5dc32@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 109),
    WAIT(60),
    MSG_NPC(4, (@@STRING:04d649b9022b902b6eddf84d9a0ddfa2cbd6dd1d46d02a941b3ccbf26be61a24@@)),
    MSG_NPC(4, (@@STRING:98a73b91c1a47ffd9fc29ac223e2c36d5a81d64cc0f747e1c1b2b40a049a4bff@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:5b9cd366c757b55dcee33c641e64b3b214e32094475ec5ee344cd43a8df53617@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:6a799e632e0d17052bc2fb1e5270402ca043c313fe9533289de3224a089c763b@@)),
    MSG_NPC(4, (@@STRING:366ae4ccde36c36c6f2410ec67739dfd9d5bd712d19552da5c8fcf21c5fc93a7@@)),
    MSG_NPC(4, (@@STRING:8b2d389e527e8d2f258368fd5097d5645e26c1b4362cb9e0bedfabeb72394d19@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    PORTRAIT_REP(0x0003, 0x00000001),
    MSG_NPC(3, (@@STRING:41308a6f4b0fbb6bb321a191f55653a9d7556a623b4e56ff9dbebe5c3a9d1d0f@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:4173d0ea0f4d36bc06db22a840afb99661e358da0a1440523313707e782b5774@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:fba5295685ddef2715b5eefc9150b046f878f28ed13b657231e6eb92d19b115c@@)),
    MSG_NPC(4, (@@STRING:81d4d4641d73c68b7513cc4233fe701216b76a6512a69b0e47dbb687853b8ce3@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(60),
    WAIT(30),
    MSG_NPC(-1, (@@STRING:cfe14e1b12d073119a77e2d5d680af3991cf287248193ae13b958cc612653f69@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 89),
    WAIT(30),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    BGM_SWITCH(MUS_RISING_FEAR),
    ALERT_CUE(11),
    ALERT_CUE(12),
    WAIT(120),
    { 0x62, 0x00,  0x0080,  0x00000010,  0x00000000, NULL },
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:ec74635e2dc045151084610290d808ccc8f13cc9c208dfffa0a01d20a3c875e1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(3, (@@STRING:4c43799292ba412592dd6ff35e0187903b9d89115064d55334aa7f59d29e1955@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:6d5b1481a6f38a4e55ff88caed63c06191ed868fecb1ce3f3a87eb0affd88509@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0006, 0x00000003),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0007, 0x00000003),
    MSG_NPC(7, (@@STRING:0d0e43f7e979957b2051d39eadd13af11bac9bb43cf0f66a5d17c761ad14de97@@)),
    MSG_NPC(7, (@@STRING:e40ba295d430162e90b72e03f67be192a9e915eb13c62c91eee8024f94ac5653@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(473),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    MSG_NPC(2, (@@STRING:a6caabb54e7fb59b760033d2972a5ca450b48f22c039ba3821211990876f9b9f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(6, (@@STRING:f4280e49530e679bc48b2f16aba0653222a65ee4a53f89ba009e50e06f076f79@@)),
    MSG_NPC(6, (@@STRING:2777143bd145350ee528c254b55ea91d48cbfcffa9d4af62e0dcb3dc57feaf3d@@)),
    MSG_NPC(6, (@@STRING:b314c0d493377f39e3d3eb4a7ada6d4a2bc0e955bf905cbceb87fba04fb7041b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    FANFARE_PLAY2(473),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    MSG_NPC(2, (@@STRING:b036c9234900d8e0a5c332b4b6bbee29abb72b22da01da220124474231696ed5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    WAIT(60),
    MSG_NPC(7, (@@STRING:b73811c363da613d3573862c119df2d1491a84f03a05163fcc73a38737d6891d@@)),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    MSG_NPC(7, (@@STRING:146be0299a30afe7e06bfc659e396095a0db209cb6e2bfbaf0152b07242d15e4@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(12),
    AWAIT_CUE(5),
    FANFARE_PLAY2(473),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    MSG_NPC(3, (@@STRING:8b3f83eabe3a7fea29db84cc55a8efb0d7fd6d9b54e160a362e7a5b705c2ba81@@)),
    MSG_NPC(3, (@@STRING:a94b05a03d34693482ef98e2efb7cedd18529b78cdcc811f3d3cd03bfb096a4c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    WAIT(60),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP, 0x0005, 0x00000000),
    MSG_NPC(2, (@@STRING:57e25ff31a1b77c2f335a821a536ecb04b289c840cf2c913942c22dd1e58deae@@)),
    ALERT_CUE(9),
    ALERT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    MSG_NPC(2, (@@STRING:5763aa03c0e7730a9f4ef5faa56c7109d2818029fc991bdca04c3e2dab291cfd@@)),
    MSG_NPC(2, (@@STRING:e7764599c11103e774b37b41437864f48c6fa15f20c24a9fdb97f21a0dcd2486@@)),
    MSG_NPC(2, (@@STRING:74e60f439699594cd788548335fb7a2b522e8e9ad2afe152d3b496e46a407db2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:caede02ca4a694837741252aace989ad587f21ff682c554d31d5d2f838f50ffe@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 109),
    AWAIT_CUE(5),
    ALERT_CUE(10),
    PORTRAIT_REP(0x0005, 0x00000001),
    MSG_NPC(5, (@@STRING:ade43547c4ce75bdaf709a5d6432f10f3c4237957f3f9bfef339fb7dfffe7731@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    WAIT(30),
    MSG_INSTANT((@@STRING:2ac0e314f4fa16250423cb9bd01ee0fbe3fba80fd211f5780bfb0cab6480ec4a@@)),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:d27633998060e787889a9821602eb20a36d595ea01f45cd8bea9ac802f9223fa@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    WAIT(30),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(3),
    AWAIT_CUE(5),
    RET,
};





















static const struct ScriptCommand s_gs1_g46_s0_lives1_dlg0[] = { /* 0x817094c */
    DEBUGINFO_O(13701),
    END_DELETE,
    RET,
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs1_g46_s0_lives2_dlg0[] = { /* 0x81709ac */
    DEBUGINFO_O(13710),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 1),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
    COND_EQUAL(3, /* to label */ 2),
  LABEL(0), /* = 0x00 */
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    JUMP_LABEL(3),
  LABEL(1), /* = 0x01 */
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
  LABEL(3), /* = 0x03 */
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 109),
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 89),
    AWAIT_CUE(7),
    WALK_GRID(256, 138),
    CMD_UNK_93(4, DIR_TRANS_10, 89),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(7),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(7),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    RET,
};

static const struct ScriptCommand s_gs1_g46_s0_lives3_dlg0[] = { /* 0x8170d6c */
    DEBUGINFO_O(13773),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CALL_SCRIPT(NOTICE_FUNC),
    CMD_UNK_93(4, DIR_TRANS_10, 1),
    AWAIT_CUE(8),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
    COND_EQUAL(3, /* to label */ 2),
  LABEL(0), /* = 0x00 */
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    JUMP_LABEL(3),
  LABEL(1), /* = 0x01 */
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    CALL_SCRIPT(SWEAT_FUNC),
  LABEL(3), /* = 0x03 */
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 109),
    AWAIT_CUE(8),
    SELECT_ANIMATION(9),
    WAIT(60),
    SELECT_ANIMATION(2),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 89),
    AWAIT_CUE(8),
    WALK_GRID(256, 139),
    CMD_UNK_93(4, DIR_TRANS_10, 89),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(8),
    WALK_GRID(768, 140),
    WALK_GRID(768, 141),
    END_DELETE,
};

static const struct ScriptCommand s_gs1_g46_s0_lives4_dlg0[] = { /* 0x817113c */
    DEBUGINFO_O(13837),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 1),
    WAIT(30),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
    COND_EQUAL(3, /* to label */ 2),
  LABEL(0), /* = 0x00 */
    JUMP_LABEL(3),
  LABEL(1), /* = 0x01 */
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    CALL_SCRIPT(SWEAT_FUNC),
  LABEL(3), /* = 0x03 */
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 89),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(9),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(9),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(9),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(9),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    AWAIT_CUE(9),
    RET,
};

static const struct ScriptCommand s_gs1_g46_s0_lives5_dlg0[] = { /* 0x817145c */
    DEBUGINFO_O(13890),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    AWAIT_CUE(10),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 79),
    AWAIT_CUE(10),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 1),
    WAIT(30),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(10),
    CJUMP_VAR(EVENT_LOCAL),
    COND_EQUAL(1, /* to label */ 0),
    COND_EQUAL(2, /* to label */ 1),
    COND_EQUAL(3, /* to label */ 2),
  LABEL(0), /* = 0x00 */
    JUMP_LABEL(3),
  LABEL(1), /* = 0x01 */
    JUMP_LABEL(3),
  LABEL(2), /* = 0x02 */
    CALL_SCRIPT(SWEAT_FUNC),
  LABEL(3), /* = 0x03 */
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 109),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 89),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(10),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 104),
    AWAIT_CUE(10),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 77),
    AWAIT_CUE(10),
    CMD_UNK_93(4, DIR_TRANS_10, 109),
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    SELECT_ANIMATION(19),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    RET,
};

static const struct ScriptCommand s_gs1_g46_s0_lives6_dlg0[] = { /* 0x817197c */
    DEBUGINFO_O(13975),
    SELECT_ANIMATION(32),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    { 0x6c, 0x78,  0x004c,  0x0000008e,  0x00000000, NULL },
    WAIT_RANDOM(30, 60),
    { 0x6c, 0x78,  0x004c,  0x0000008e,  0x00000000, NULL },
    WAIT_RANDOM(30, 60),
    WALK_GRID(76, 142),
    { 0x54, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    SELECT_ANIMATION(25),
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    WAIT(25),
    FANFARE_PLAY2(400),
    WAIT_FANFARE2(400),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    HALT,
};

static const struct ScriptCommand s_gs1_g46_s0_lives7_dlg0[] = { /* 0x8171aac */
    DEBUGINFO_O(13997),
    SELECT_ANIMATION(33),
    { 0x2d, 0x07,  0x0007,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(12),
    { 0x6c, 0xb4,  0x004c,  0x0000008f,  0x00000000, NULL },
    WAIT_RANDOM(30, 60),
    { 0x6c, 0x78,  0x004c,  0x0000008f,  0x00000000, NULL },
    WAIT_RANDOM(30, 60),
    WALK_GRID(76, 143),
    { 0x54, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    AWAIT_CUE(12),
    { 0x54, 0x00,  0x001a,  0x00000000,  0x00000000, NULL },
    { 0x54, 0x00,  0x0300,  0x00000000,  0x00000000, NULL },
    WAIT(20),
    FANFARE_PLAY2(400),
    WAIT_FANFARE2(400),
    ALERT_CUE(5),
    AWAIT_CUE(12),
    HALT,
};

static const struct ScriptCommand s_gs1_g47_s0_station_sref_script[] = { /* 0x8171bec */
    DEBUGINFO_O(14020),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, 1),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_TEAM_BASE),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x00,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs1_g47_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g47_s0_station_sref_script }; /* 0x8171cdc */

static const struct ScriptCommand s_gs1_g47_s0_eff0_script[] = { /* 0x8171ce8 */
    DEBUGINFO_O(14040),
    AWAIT_CUE(4),
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    CAMERA_END_PAN,
    ALERT_CUE(5),
    RET,
};

static const struct ScriptCommand s_gs1_g47_s0_lives0_dlg0[] = { /* 0x8171d48 */
    DEBUGINFO_O(14049),
    CAMERA_INIT_PAN,
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WALK_RELATIVE(256, 80, 0),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6be3dc2f6d13cbb60fbdfa812aedaccd2bc796726c1f7127ef55a4f1fee4baf1@@)),
    VARIANT_DEFAULT((@@STRING:50e80f46af352dd77dda2c8be9e92358f8f53472f2e07796559cf4eb5c3fb7ea@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(4),
    ALERT_CUE(6),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:d17c9d0ca1b613736260b332747581deebc1da60ad1e03ce8f2121ff976c89e8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    WALK_GRID(256, 145),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8c34d0bf3d5526f36f2f60d7d1ca79a55602798e5cc749ab7474e9ae35245f9a@@)),
    VARIANT_DEFAULT((@@STRING:c60f11e6e5daa1c5fdb8568f190261aba39c87127cd58dbafc3c43632abf4583@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:23aeb71bd84b038d4ccf363845b825f76ba6bedcd3d806b73117b4ef10eacc31@@)),
    MSG_NPC(2, (@@STRING:f8a59c4860f08f3d301bd15c244ac88b6c2382a3779d8e17b8591296efa79112@@)),
    ALERT_CUE(6),
    FANFARE_PLAY2(465),
    { 0x56, 0x00,  0x0000,  0x00000146,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    MSG_NPC(2, (@@STRING:a6ee45f3c8c697c5455f9f7f81a02334422341d8a2440e6545e5207f049fb372@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:fef9becfd988a5617f1a3d33ed7a4876176431078632a063385f94c3a5973722@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:c0b9ed53407490cabb01ce4c44e021cb929a623a7149e3bef7f04258907ada99@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(10),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:38ade5a97beb73d06619e164e1abe9010c3f475904d214d6c7485144ef19602b@@)),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0005, 0x00000001),
    MSG_NPC(5, (@@STRING:9e1fb1d91208c8509cfd0a0293355b5b0e6f168bc4965b5ce843128ee5d7e6a0@@)),
    ALERT_CUE(10),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:28ccd81732b2191fdd0c01c2e39e99190691dc756d3d24e17883e0870a1ee1ea@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:486cb9c778421dff37fa290ec044195a16c7d557be4a055e14eb710ba502a82f@@)),
    WAIT(10),
    MSG_NPC(6, (@@STRING:0ac89e17aa16bcbb3983c9a1ea8718967911e11c736364107a625055890ffbb2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:0b148661865d9f95c1288762d4daf639d394675ba27ef038ecb6658d3635ee48@@)),
    MSG_NPC(2, (@@STRING:0eab3a2f7a061a5989e23729692b2fff5997bb955236e01b8e8b9ca4b8d79aa1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(6, (@@STRING:eb2821ef0d7ccaee5fa207093a2f957b35e58828ccd8560ce2f0b0fe712ab29e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(2, (@@STRING:2aebd76ee5c07519ffdd3812c4d4dbc236cd50061c456d8101ac023bd43f5ce5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:a8e3fd67f5beb7c3900e359be24eadfc6304897a53646d0ad8055048b67dfed0@@)),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:94266db161f60a18aef1047ce453ef536338fc414f357afc3b9eba639d794438@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    MSG_NPC(6, (@@STRING:12a26184bd80e077194bd94a7f0d0cbf3b9f9a089ae4e5def7a21e06abc4c52c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    MSG_NPC(6, (@@STRING:f29ae6d6ceaab1e6b52ea8b6b25520d8d2cb9ecdc014e3e8f1c0d936ce36b1bc@@)),
    MSG_NPC(6, (@@STRING:d63257010f739d475d1617f27b926426c8b44a4bfb094a2ec934f73c9dc89c16@@)),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:a5dc1abe2b934444861a85f6ac272f8f20adb022eef199294619b72745e1b587@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cf74cc780b1909f3b510bbbd0670f715ed0d8979defef3b6b4f8078fb9414bce@@)),
    VARIANT_DEFAULT((@@STRING:7dc9cffc9e0b629edaa727eb6ef53495674784e0de8d0e8ff86fe84e64c31f4c@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_INSTANT((@@STRING:97cf886829f4f2ac5fac501e27b69b6ecdcfd6971587377c33d464a10260e18f@@)),
    MSG_INSTANT((@@STRING:64ca46f7b0d8e6f07ae7b66e731bc738d7b72c1321e7705d96f78b738f132442@@)),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:5e0b8199ee85777db769dafc2082a6f7622be1fafcb3a906ef21191596d57bd7@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};
















static const struct ScriptCommand s_gs1_g47_s0_lives1_dlg0[] = { /* 0x8172b68 */
    DEBUGINFO_O(14204),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    WALK_RELATIVE(256, 80, 0),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    WAIT(20),
    CMD_UNK_8E(1, DIR_TRANS_NONE, 1),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    WALK_GRID(256, 144),
    FANFARE_PLAY2(468),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT_FANFARE2(468),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x00000146,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(1, DIR_TRANS_10, DIRECTION_NORTH),
    HALT,
};

static const struct ScriptCommand s_gs1_g47_s0_lives2_dlg0[] = { /* 0x8172d68 */
    DEBUGINFO_O(14239),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    HALT,
};

static const struct ScriptCommand s_gs1_g47_s0_lives3_dlg0[] = { /* 0x8172de8 */
    DEBUGINFO_O(14250),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(ANGRY_START_FUNC),
    WAIT(60),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    WAIT(60),
    CALL_SCRIPT(ANGRY_END_FUNC),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    WALK_RELATIVE(512, -16, 0),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT_FANFARE2(469),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g47_s0_lives4_dlg0[] = { /* 0x8173008 */
    DEBUGINFO_O(14287),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    HALT,
};

static const struct ScriptCommand s_gs1_g47_s0_lives5_dlg0[] = { /* 0x81730a8 */
    DEBUGINFO_O(14300),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    ROTATE_TO(3, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(10),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    HALT,
};

static const struct ScriptCommand s_gs1_g47_s0_lives6_dlg0[] = { /* 0x8173188 */
    DEBUGINFO_O(14317),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000008,  0x00000000, NULL },
    AWAIT_CUE(11),
    WALK_RELATIVE(256, -8, 24),
    ALERT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    AWAIT_CUE(11),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g48_s0_station_sref_script[] = { /* 0x81732b8 */
    DEBUGINFO_O(14339),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs1_g48_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g48_s0_station_sref_script }; /* 0x8173358 */

static const struct ScriptCommand s_gs1_g48_s0_eff0_script[] = { /* 0x8173364 */
    DEBUGINFO_O(14354),
    CAMERA_END_PAN,
    HALT,
};

static const struct ScriptCommand s_gs1_g48_s0_lives0_dlg0[] = { /* 0x8173394 */
    DEBUGINFO_O(14360),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:d4b40457b0ec26dd5ac80dfd4d00255affee5fbf805fae05f5836dbeca0fbfac@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDLEFT_TOP, 0x0005, 0x00000000),
    PORTRAIT_POS(5, -1, 0),
    MSG_NPC(5, (@@STRING:3f8a801ce58fb81b1a24f97385fd03bc8c1d41447069cac4fbdf48a320024586@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:368f71c293e9a6da60b690c8e943c128efa830a980e99757395669732f797960@@)),
    VARIANT(/* == */  1, (@@STRING:b2a2232324800b3683baedbe6413d809149e55b443b13c4af2d887a7952142a2@@)),
    VARIANT_DEFAULT((@@STRING:368f71c293e9a6da60b690c8e943c128efa830a980e99757395669732f797960@@)),
    VARIANT_DEFAULT((@@STRING:ce0aafc7ddfe52bffe57f878648108c6b738e6dd076add819c4c6d41d3ed5d34@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000001),
    MSG_NPC(2, (@@STRING:fbb8b74da7e74fd7d0aae52bc292d171ab4991a720afd77bad1f39fade5361d0@@)),
    MSG_NPC(2, (@@STRING:3fcda1392f2211cec27384bbaa603cfb1fa27bcca72a4823e63461d812e4788f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, -3, 1),
    MSG_NPC(4, (@@STRING:8b7f8479983b2654f62fd9d34c6b464ff54cdd2ced6acd14183bdc31c646dc10@@)),
    MSG_NPC(4, (@@STRING:23692ee4b0866beb50c41569d3b685bf6173aa2759fbe6a0bd2f3ab6344aa830@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    MSG_NPC(5, (@@STRING:db3032881a3af0542e6edeb76ed74f348272cbc7371b1ec4d7721cf7adb1eb70@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(465),
    MSG_NPC(5, (@@STRING:a77f015ab5654f65ca6997cac3542898f263c913eddf0d1c336e347e3d6173a3@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    MSG_NPC(4, (@@STRING:6ca0e47be18ab3095faacc98cbb86f325cc4350ce364d30dbe573cdfcf231d61@@)),
    MSG_NPC(4, (@@STRING:b5cd2a53f2ca1065599a9e72cf627f467f95c915f19bd24ece426dac0a4f2b3b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    WAIT(60),
    MSG_NPC(5, (@@STRING:8a9f417bfdab4aa734a939e93cbf2aac1ac269270dfd774aca8e8c6314d5d7c1@@)),
    MSG_NPC(5, (@@STRING:216c4a14f12a598e762a89bced3d882c4457591012aafc5c48ea8dc37d948c04@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:afb8a1e8ad4b8a741c9441f5fa8b8cb919e04f1ae4ba85d48ccb641cf8c825b2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:cd2fae19a4c677c09f5be8db4a766d110548f3c66d7b8b4655d4afd2b935518b@@)),
    VARIANT_DEFAULT((@@STRING:63f7ccfded07b9062caf86efe29c4b922e92e7f9b5c898bfb2c645ac518ff2c1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:836c7b4e317d943595028e2fc88e05787cb571e3db87c80605646930b82eb870@@)),
    MSG_NPC(2, (@@STRING:10e1f2b4cca0303cd045a9804aa8c4a7e7ae4b7e9a0aa94a6ac29abfb0f0e76c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(6),
    MSG_NPC(5, (@@STRING:37ef6d8703a8bdb08f4d6ccfa5db3f71603cd3a44d0a5a8ea68cafff7fa425d0@@)),
    MSG_NPC(5, (@@STRING:84ca7dfbf0b8bd0fcf88f6a2cb9e2d14cb822861bf2302e574e13c1539d930cc@@)),
    MSG_NPC(5, (@@STRING:df3d2f3b23ff5fece97001907abbd5b476a6f9adacf24dc2a911ff738eb42e83@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:78b81ee26f1fee299389c5aa4816239c14bda6b32db22bd3a278151ef7104a40@@)),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    MSG_NPC(1, (@@STRING:06ce294beb912456cd6152c97715f2651e18d9a5e24882cf3427c7df7eaf4350@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    MSG_NPC(5, (@@STRING:1e921fa87f3cb03f31ad5c58f058855a46bca1fe70fadc92671e9b600a09e218@@)),
    MSG_NPC(5, (@@STRING:040d2d83ad8b8a4e8e6004df10a68e3f83cfbcce6411348a5d0f453e7b39e971@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:af212c66fcce46a148f62b327c7955ad46fc6ff2a8b687aefc085fc1ead24680@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(5, (@@STRING:ff6da9272edd27566420e0654b4067fb763e7306b52b6ce4f4c9e9d77189d794@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    MSG_NPC(5, (@@STRING:cd5150156858ea2f709d16d61007e13bb31ee82a81a287215e78ae3ad98430b6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    WAIT(60),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_NPC(2, (@@STRING:aa706627230c5297ec6e05e3619bfc73069e75939e53682061ef24083082a629@@)),
    MSG_NPC(2, (@@STRING:5d1de0c340bb402391d8a0aaaf9dc39e6064e056aafbc1dd3597534ccd53b7eb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(6),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:420d3545502b3b356a0846d14dac73ea336689121f9c7f45df45d9aa02c35460@@)),
    MSG_NPC(4, (@@STRING:7d735c6edbfa5cdbec889443237aba020cbc7bdb572a2e48774bee59110c873b@@)),
    MSG_NPC(4, (@@STRING:ca06a149e9604100691667bf9c59a61ecd23f6ead2af009eda4a41895e25bdb6@@)),
    MSG_NPC(4, (@@STRING:b271ea04d3386488f3ae47647ae7c2c8a61ff67dbe1ba3ac7702fc36fa24c65c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    PORTRAIT_REP(0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:0d286706d8be738beee3f3ba0ce1d1a2ab459750f023c986b8aac684be1f1ca8@@)),
    MSG_NPC(5, (@@STRING:a8fedcd3240ee4fefa2af0004888df0c383c280ab37b45dc22f87c83ac67869d@@)),
    MSG_NPC(5, (@@STRING:4ca995a0345b166cf179939958df10ceb659aae5a969b3d6fd80b3bdf615da34@@)),
    MSG_NPC(5, (@@STRING:3cfbbf080aa60047e38c21fbd99195c0e8b14e37181214ca53fe3edea2fb40b1@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:0823ff7be0ce272755c7579cd71a5c97e691e55be2404525e7c32796af7d7b8b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b87149679c8c2991a4f34418e2167185d25439f096e793a6011172d4f1113fc4@@)),
    VARIANT(/* == */  1, (@@STRING:d16253aad82d8b67ffcde924bea771d06c655f9af35772ebfbf819cccedd3ce7@@)),
    VARIANT_DEFAULT((@@STRING:69f0d9814a81fde254564731aff0cd7bf36bd6797d8e1c10b6752f65b50e44ea@@)),
    VARIANT_DEFAULT((@@STRING:d16253aad82d8b67ffcde924bea771d06c655f9af35772ebfbf819cccedd3ce7@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:1edcafb02d6ba565fca26f7d25870d2b1c14ba43f584cf81de4dcb2fe5ef02b8@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    ALERT_CUE(7),
    ALERT_CUE(6),
    ALERT_CUE(8),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:6e2f395b57ef61fcffb4b839804d2a0bfc5719cd359be9039efa034a70577f6b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    MSG_NPC(4, (@@STRING:93ea7f7ff8d964d49f3ea67a452a0b007d23769c76c0405e8a2368983c334463@@)),
    MSG_NPC(4, (@@STRING:5630a0623debc363e120ba687b4e6a7eb71aee31fedf0d548f75299c3de56b4f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:ff0ec5358d65233da0c33eff2a8b0c5149a04e5c4f6b7a0433e9b9bbbbd3e0b2@@)),
    MSG_NPC(1, (@@STRING:6f311d909b213ebc4ed8375f3f1bc60421e715eb10de33e0defb8f2b39084e5c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(4, (@@STRING:795cefc70a5b7e5d4ca47509a88bdac23603f2e9c8236730e40b47bd5ac02ffe@@)),
    MSG_NPC(4, (@@STRING:220e61803ed8e1a90949a19081035903186be9a89bbc26b0871579c44d0dee95@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_NPC(1, (@@STRING:03e7837b9042d020053ab195c8bcacff76a8d9194b3d5e165bb240ac67464360@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d82aa965c3f8f005d346a6f0692b5de343fea65d13edc7b8b66fb58ba67f3f06@@)),
    VARIANT(/* == */  1, (@@STRING:4a31aec51448e8057b110b944d9c12f02a6c94145a8b6fa7895de255b7beb238@@)),
    VARIANT(/* == */  3, (@@STRING:d0fbc14b4f01276b530f4ff4f838a70d9c0725a30ea547f45dd3fffdad901ae1@@)),
    VARIANT(/* == */  3, (@@STRING:a007de16d2dc733a93e883d56aed946c39f86dbaed6eec79a6072ed36a6f151d@@)),
    VARIANT_DEFAULT((@@STRING:d0fbc14b4f01276b530f4ff4f838a70d9c0725a30ea547f45dd3fffdad901ae1@@)),
    VARIANT_DEFAULT((@@STRING:a007de16d2dc733a93e883d56aed946c39f86dbaed6eec79a6072ed36a6f151d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    BGM_STOP,
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:7dd94cc21573231a2381e187f4c5a837519dd2b69a0d74218314b78eef00ff2b@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};





























static const struct ScriptCommand s_gs1_g48_s0_lives1_dlg0[] = { /* 0x8174e1c */
    DEBUGINFO_O(14606),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    FANFARE_PLAY2(469),
    CALL_SCRIPT(QUESTION_FUNC),
    WAIT_FANFARE2(469),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g48_s0_lives2_dlg0[] = { /* 0x817500c */
    DEBUGINFO_O(14640),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(8),
    CALL_SCRIPT(SHOCK_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs1_g48_s0_lives3_dlg0[] = { /* 0x81750cc */
    DEBUGINFO_O(14655),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(ANGRY_START_FUNC),
    WAIT(1),
    FANFARE_PLAY2(457),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    WAIT(10),
    WALK_RELATIVE(256, 0, -8),
    CALL_SCRIPT(ANGRY_END_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(7),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(465),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(7),
    WAIT(30),
    FANFARE_PLAY2(468),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    WAIT(20),
    FANFARE_PLAY2(468),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    FANFARE_PLAY2(457),
    { 0x56, 0x00,  0x0000,  0x00000047,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(SHOCK_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs1_g48_s0_lives4_dlg0[] = { /* 0x817534c */
    DEBUGINFO_O(14698),
    SELECT_ANIMATION(2),
    { 0x62, 0x00,  0x0500, -0x00000008,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    WALK_RELATIVE(512, -40, 0),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    AWAIT_CUE(9),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WALK_RELATIVE(256, 24, 0),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(9),
    WALK_RELATIVE(256, -24, 0),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g48_s0_lives5_dlg0[] = { /* 0x81754ac */
    DEBUGINFO_O(14723),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(6),
    AWAIT_CUE(10),
    SELECT_ANIMATION(4),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    { 0x54, 0x00,  0x001b,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    BGM_STOP,
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    FANFARE_PLAY2(475),
    { 0x54, 0x00,  0x000a,  0x00000000,  0x00000000, NULL },
    WAIT_FANFARE2(475),
    { 0x54, 0x00,  0x001a,  0x00000000,  0x00000000, NULL },
    WAIT(40),
    FANFARE_PLAY2(682),
    WAIT_FANFARE2(682),
    ALERT_CUE(5),
    SELECT_ANIMATION(25),
    AWAIT_CUE(10),
    { 0x54, 0x00,  0x001b,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    WAIT(30),
    { 0x54, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    SELECT_ANIMATION(25),
    AWAIT_CUE(10),
    { 0x54, 0x00,  0x001d,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    CALL_SCRIPT(SHOCK_FUNC),
    HALT,
};

static const struct ScriptCommand s_gs1_g49_s0_station_sref_script[] = { /* 0x817576c */
    DEBUGINFO_O(14770),
    SELECT_MAP(1),
    SELECT_ENTITIES(-1, 0),
    FLASH_FROM(TRUE, PALUTIL_KIND_01, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    RET,
};

static const ScriptRef s_gs1_g49_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs1_g49_s0_station_sref_script }; /* 0x81757ec */

static const struct ScriptCommand s_gs1_g49_s0_lives0_dlg0[] = { /* 0x81757f8 */
    DEBUGINFO_O(14783),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    BGM_SWITCH(MUS_POKEMON_SQUARE),
    WAIT(30),
    ALERT_CUE(10),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:1729bdf16cf6e5e887f080b45c731cf376895e6ab37347fefd10dd99c77fef27@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:ee513f51110f1302508a5cc407380b098ba9cdd3bf2d047c78ee34303ae76ceb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000001),
    MSG_NPC(5, (@@STRING:c954fcd52ca29295a6fb58b8556b826d94a18eb58f484d71fe9eb4ed4ce0f0be@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:7e7492c86aa9c7c9da1430f76e9786340935ad7dc902c12b8e1289fdee7e1ebc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:e4603ae3f40030d21f7926685704c00c6861dda3f4c1ac1a4ea14642d6e279eb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(8),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:fc9aa74e99863019750f12bd99d40d326bd8d49e466f1efc18b9c45e6c020144@@)),
    MSG_NPC(5, (@@STRING:a0b0ea5c7156a7861296d21cbc98f53444379f58b883d9ecc7f9d63c9486f6e8@@)),
    MSG_NPC(5, (@@STRING:1e5edab33e04ee596d385cd00f94ea11e99a19a72938bdbed4fa79ba9a33d573@@)),
    PORTRAIT_REP(0x0005, 0x00000001),
    MSG_NPC(5, (@@STRING:7ed3812d80bc104cd118dfc27ef8fe2d1cee0f579674db3dd7e24fbaa70857f2@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:6c79503feebf1e74c68688a8c105e51e0267fad3e69c88481267d227560295d6@@)),
    VARIANT_DEFAULT((@@STRING:44ea82232204d9270a55a82c49303ca7f915ed0810102266c5b36d0ea2c51b94@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT_REP(0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:db9f11e549095e3c6d008ad1301dbcb48626bb05f18d7ee9726f8e8e033d5d17@@)),
    MSG_NPC(5, (@@STRING:9afa7544a864e104ba77ba32fe155c232be470267571e627b37c4f716fb6847b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:c3d8b46df96f3d3e22d65202b44abef655ab10ff2cf8e3893976904ee756812e@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0006, 0x00000000),
    MSG_NPC(6, (@@STRING:7e4c66274b95f2dc9ffdc6f95e4e0bcb09643cb63d0f9c20def42262da3c2d25@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(5),
    MSG_NPC(5, (@@STRING:cddd946845f55c9dfab69ac69762f6ea42f31cad2d9ffc874f17d1d1321beacc@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:e72c717c52aa557954f9a9ac458ab9534d774ab9f13ffa9324b678a003cf654a@@)),
    VARIANT_DEFAULT((@@STRING:e72c717c52aa557954f9a9ac458ab9534d774ab9f13ffa9324b678a003cf654a@@)),
    CHOICE(/* label */ 10, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */ 11, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
  LABEL(11), /* = 0x0b */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:6f85a83aa5770315193dddafa0de49d32c2ee47f326514f0818e836adb0c4178@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000005),
    ASK3( TRUE, /*default*/ -1, /* speaker */ 1, (@@STRING:f0d63205d524e4749e3e9b2435011130968b000ee216248e8de1bbddbc909531@@)),
    CHOICE(/* label */ 10, (@@STRING:8393b7bd1e85c13e5193ec388929b5263bd844f9a9ce69a49f50b620146e7d30@@)),
    CHOICE(/* label */ 13, (@@STRING:7c8f37c083568c5cecc4a61c74bdbabb83b5b7fd69236f0c627e985cec1842a0@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
  LABEL(13), /* = 0x0d */
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(60),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:e1d063a288be72cd84db1db0d180d712b0fffe04ef22abd418c3d9859872d64e@@)),
    MSG_NPC(4, (@@STRING:c892d6c549c152f9eb8e4ba56ede8773ea99ef1cd4b9ecb7448841449fc143b0@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    MSG_NPC(4, (@@STRING:cd3a28212541118942a2e1a20cd52fb554f536a015b2e7f51d899b7f877eda81@@)),
    MSG_NPC(4, (@@STRING:e5523d302b4a9da3bf042581f66cea04d7465cbc16005b79a53fcf908148e49d@@)),
    MSG_NPC(4, (@@STRING:cfd033914727c5ed3a1096e91bceedad5503ba61ceedc7ae07f0591beed97d81@@)),
    MSG_NPC(4, (@@STRING:2335a9e6ae0b04c99f8f9d6679101df219e7e0608c8ad53ad43e4e17ca02a0af@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f29e56670a155a2dd674a1ae4cce1be98e5efec09453b0a8d80070c74cd0ca9c@@)),
    VARIANT_DEFAULT((@@STRING:f29e56670a155a2dd674a1ae4cce1be98e5efec09453b0a8d80070c74cd0ca9c@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    ASK3_VAR( TRUE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:1d70fd865bf88215a0bc1c0272321292ec211e5d94443f5772925858203a7c60@@)),
    VARIANT_DEFAULT((@@STRING:1d70fd865bf88215a0bc1c0272321292ec211e5d94443f5772925858203a7c60@@)),
    CHOICE(/* label */ 10, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */ 11, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(10), /* = 0x0a */
    TEXTBOX_CLEAR,
    WAIT(10),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ALERT_CUE(7),
    ALERT_CUE(8),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    ALERT_CUE(10),
    ALERT_CUE(11),
    AWAIT_CUE(5),
    ALERT_CUE(7),
    ALERT_CUE(8),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:938a5baa5df7b8b790fcae60fe3f8d9293b92d132b4063bf713cb2583b215916@@)),
    VARIANT(/* == */  1, (@@STRING:b3323d67d36df2640ecd49604c81c99387daf0fb81d55a0094ca9b1b25ee089a@@)),
    VARIANT_DEFAULT((@@STRING:938a5baa5df7b8b790fcae60fe3f8d9293b92d132b4063bf713cb2583b215916@@)),
    VARIANT_DEFAULT((@@STRING:b3323d67d36df2640ecd49604c81c99387daf0fb81d55a0094ca9b1b25ee089a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(10),
    ALERT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    PORTRAIT_REP(0x0005, 0x00000001),
    MSG_NPC(5, (@@STRING:1903bf42d4630a35a06e50c73ed6cbffb84c545f0b52934012c611e2267ade86@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0006, 0x00000001),
    MSG_NPC(6, (@@STRING:2998c072c34a40dbb8edde8ce690faf2cef20513b91af4ca20e875290ccb4270@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_INSTANT((@@STRING:36f6a41faeb0cd358e12655ca4c6b0c6074bfa574462b0c989676dad826d4cdc@@)),
    MSG_INSTANT((@@STRING:c3bb7fe8847e838b684b8867be18964ce9d8ba1670620e7472ec03d98aac0696@@)),
    BGM_STOP,
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:84a85edeb78aa00c39e71c9a87cc973b561f74c3cedc26d9a9f5775afc9de58c@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    { 0x3b, 0x24,  0x0000,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:03efadf8a90cba8e580f466c68a494ab1afce2a5f4113775cfd66906690f8aa2@@)),
    CHOICE(/* label */ 17, (@@STRING:e5b4158fa246c99386bbc5f943f4887ac2b3ac75150fd1e13dd84ace1bee0678@@)),
    CHOICE(/* label */ 18, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(17), /* = 0x11 */
    RENAME_ALLY(-1),
  LABEL(18), /* = 0x12 */
    { 0x3b, 0x25,  0x0000,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    { 0x3b, 0x26,  0x0000,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:5d7e4b2732633e206bd1e8003d1acba6e50359b5bd47bcd320498d78b22a2585@@)),
    CHOICE(/* label */ 19, (@@STRING:e5b4158fa246c99386bbc5f943f4887ac2b3ac75150fd1e13dd84ace1bee0678@@)),
    CHOICE(/* label */ 20, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(19), /* = 0x13 */
    RENAME_ALLY(-1),
  LABEL(20), /* = 0x14 */
    { 0x3b, 0x27,  0x0000,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(3),
    HALT,
};















static const struct ScriptCommand s_gs1_g49_s0_lives1_dlg0[] = { /* 0x8176dcc */
    DEBUGINFO_O(15024),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(6),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT_FANFARE2(465),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTH),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    HALT,
};


static const struct ScriptCommand s_gs1_g49_s0_lives2_dlg0[] = { /* 0x817708c */
    DEBUGINFO_O(15072),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(9),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(7),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(7),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(7),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    HALT,
};


static const struct ScriptCommand s_gs1_g49_s0_lives3_dlg0[] = { /* 0x817725c */
    DEBUGINFO_O(15105),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(8),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(8),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    AWAIT_CUE(8),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    HALT,
};


static const struct ScriptCommand s_gs1_g49_s0_lives4_dlg0[] = { /* 0x817742c */
    DEBUGINFO_O(15138),
    SELECT_ANIMATION(2),
    { 0x62, 0x00,  0x0500, -0x00000008,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
  LABEL(0), /* = 0x00 */
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(9),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 1),
    WALK_RELATIVE(256, -16, 0),
    AWAIT_CUE(9),
    { 0x62, 0x00,  0x0100,  0x00000010,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(9),
    JUMP_LABEL(0),
  LABEL(1), /* = 0x01 */
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHWEST),
    HALT,
};


static const struct ScriptCommand s_gs1_g49_s0_lives5_dlg0[] = { /* 0x817755c */
    DEBUGINFO_O(15161),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    SELECT_ANIMATION(22),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WALK_RELATIVE(256, -16, 0),
    WAIT(30),
    SELECT_ANIMATION(23),
    WAIT(60),
    WALK_RELATIVE(256, -8, 0),
    SELECT_ANIMATION(24),
    AWAIT_CUE(10),
    SELECT_ANIMATION(2),
    WALK_RELATIVE(256, -8, 8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    { 0x62, 0x00,  0x0200, -0x00000008,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    SELECT_ANIMATION(17),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    WAIT(10),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    { 0x62, 0x00,  0x0100, -0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    { 0x62, 0x00,  0x0100, -0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    { 0x62, 0x00,  0x0100,  0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    { 0x62, 0x00,  0x0100,  0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    { 0x62, 0x00,  0x0100,  0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    { 0x62, 0x00,  0x0100,  0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    { 0x62, 0x00,  0x0100, -0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    { 0x62, 0x00,  0x0100, -0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    { 0x62, 0x00,  0x0200,  0x00000008,  0x00000000, NULL },
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g49_s0_lives6_dlg0[] = { /* 0x817785c */
    DEBUGINFO_O(15212),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0006,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(11),
    SELECT_ANIMATION(22),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    WALK_RELATIVE(256, 16, 0),
    WAIT(30),
    SELECT_ANIMATION(23),
    WAIT(60),
    SELECT_ANIMATION(24),
    ALERT_CUE(5),
    AWAIT_CUE(11),
    SELECT_ANIMATION(2),
    WALK_RELATIVE(256, 0, -16),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTH),
    FANFARE_PLAY2(455),
    SELECT_ANIMATION(17),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    AWAIT_CUE(11),
    { 0x62, 0x00,  0x0100,  0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    { 0x62, 0x00,  0x0100,  0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    FANFARE_PLAY2(457),
    { 0x62, 0x00,  0x0100, -0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHWEST),
    { 0x62, 0x00,  0x0100, -0x00000008,  0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTH),
    { 0x62, 0x00,  0x0100, -0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_NORTHEAST),
    { 0x62, 0x00,  0x0100, -0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    FANFARE_PLAY2(457),
    { 0x62, 0x00,  0x0100,  0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    { 0x62, 0x00,  0x0100,  0x00000008, -0x00000008, NULL },
    ROTATE_TO(1, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTH),
    AWAIT_CUE(11),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    HALT,
};

static const struct ScriptCommand s_gs1_g50_s0_lives0_dlg2[] = { /* 0x8177b2c */
    DEBUGINFO_O(15260),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SET_ARRAYVAL(EVENT_S07E01,  0,  1),
    MSG_NPC(1, (@@STRING:5ddad1803bfa54891459410c137096042899830006eb1534ec7faf9e1d0e116c@@)),
    MSG_NPC(1, (@@STRING:88fd79c28c6c1590b1e92f9aba178bf5d986baf7fa3484e38f3183e03a1a5782@@)),
    MSG_NPC(1, (@@STRING:b260478f16cb9fc0676c98fb69b64be8e1c33762eb30e7708a44d834afcda778@@)),
    MSG_NPC(1, (@@STRING:5adc231b692b56e20ccc4a5aad8afeba5800ada79a410b70364e9cc114c27fc9@@)),
    MSG_NPC(1, (@@STRING:98abb948cc5cf2e11f1dec8a6969cd40a1aff4f7ed20d221a1ef9542f75cbc14@@)),
    MSG_NPC(1, (@@STRING:c924cf56512cf2951e047072e83158e67abc8f2ab8a59622375dad068fe9b0ed@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives1_dlg2[] = { /* 0x8177da0 */
    DEBUGINFO_O(15276),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SET_ARRAYVAL(EVENT_S07E01,  1,  1),
    MSG_NPC(1, (@@STRING:3923a303fb7e4cfdac7e95b860dabad44aa157aa64b58095066370d3851d3c9e@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives2_dlg2[] = { /* 0x8177e60 */
    DEBUGINFO_O(15287),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SET_ARRAYVAL(EVENT_S07E01,  2,  1),
    MSG_NPC(1, (@@STRING:8831249dd05b653ef5b347ac9f469a2d3f4bfa9015be7a7af6872e59bef9145d@@)),
    MSG_NPC(1, (@@STRING:830d447f94e303500f057297bab3fce5b001a936abed924249e5ef64921cba26@@)),
    MSG_NPC(1, (@@STRING:64920f6e2f230cc452538641bad10ea68a364bf3a7686770910c7d8168ff53ad@@)),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives3_dlg0[] = { /* 0x8177fcc */
    DEBUGINFO_O(15300),
    { 0x4f, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x00000200,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    SELECT_ANIMATION(1),
    SET_DIR_WAIT(-1, 1),
    RET,
};

static const struct ScriptCommand s_gs1_g50_s0_lives3_dlg2[] = { /* 0x817803c */
    DEBUGINFO_O(15310),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    SET_ARRAYVAL(EVENT_S07E01,  4,  1),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:f3c9eea1d44a29db94debf91aff79f3873939d84c1753c6a48afaed709348849@@)),
    MSG_NPC(1, (@@STRING:fca811794f730ef15fc1fd95d0f535670f8c54b53403717fc30f39329aa3f569@@)),
    MSG_NPC(1, (@@STRING:e31fba95c2a423d1fbc98407e53a59c102b0f9493dd35e0443f96f7ab921fe9a@@)),
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:8a420e52c8061f2de4c570f8f9cabfa54321db47ab923a83a64749b9586d3290@@)),
    TEXTBOX_CLEAR,
    AWAIT_CUE(5),
    JUMPIF_SCENE_GT(SCENARIO_SUB7, 49, 2, /* to label */ 1),
    WAIT(30),
    MSG_INSTANT((@@STRING:c5084813ebbe09fd49739ee966529c8b20f87f3f094bda7937ae952428b7af11@@)),
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:66f6d8420a47d13cf351246ac74b234f2336440825ec60df8c120e641092f6f7@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    JUMPIF_SCENE_GT(SCENARIO_SUB7, 49, 2, /* to label */ 1),
    CMD_UNK_AF(RESCUE_DUNGEON_BURIED_RELIC, TRUE),
    SCENARIO_CALC(SCENARIO_SUB7, 49,  3),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(END_TALK),
};



static const struct ScriptCommand s_gs1_g50_s0_lives3_dlg3[] = { /* 0x8178340 */
    DEBUGINFO_O(15342),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CMD_UNK_8D(1, DIR_TRANS_NONE),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x0000005d,  0x00000000, NULL },
    WAIT(60),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    CMD_UNK_E5(5, 0),
    RET,
};

static const struct ScriptCommand s_gs1_g50_s0_lives4_dlg2[] = { /* 0x8178410 */
    DEBUGINFO_O(15358),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_S07E01, 5, /* to label */ 0),
    SET_ARRAYVAL(EVENT_S07E01,  5,  1),
    MSG_NPC(1, (@@STRING:9ea70b16ab63f1aa831145f975f06d22246f9ac10bad39d94dd2d2361539dff4@@)),
    MSG_NPC(1, (@@STRING:c9dac4886e9adbd6d5a9d1a40f7f3c8bc3347a3bd92bbe7be5a6e0722e8edd49@@)),
    MSG_NPC(1, (@@STRING:7299595ca442ed0746739a6f56e583842580bae5c2ab2ae3749847ede2f831be@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_GREEN_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives5_dlg2[] = { /* 0x8178564 */
    DEBUGINFO_O(15375),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_S07E01, 6, /* to label */ 0),
    SET_ARRAYVAL(EVENT_S07E01,  6,  1),
    MSG_NPC(1, (@@STRING:77c1d0ea46df34b0ddfed82f430f766d0aa654098d5e1d44ae1587527ba22cfa@@)),
    MSG_NPC(1, (@@STRING:7299595ca442ed0746739a6f56e583842580bae5c2ab2ae3749847ede2f831be@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_PURPLE_KECLEON_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives6_dlg2[] = { /* 0x8178690 */
    DEBUGINFO_O(15391),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_S07E01, 7, /* to label */ 0),
    SET_ARRAYVAL(EVENT_S07E01,  7,  1),
    MSG_NPC(1, (@@STRING:5b31b4a68a09a4ccb268fab169629e2a722bdae1714a6d5b621834ef63833709@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_BANK, 0, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives7_dlg2[] = { /* 0x8178780 */
    DEBUGINFO_O(15406),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_S07E01, 8, /* to label */ 0),
    SET_ARRAYVAL(EVENT_S07E01,  8,  1),
    MSG_NPC(1, (@@STRING:1962ecf85969ed4e368a61b63e946491ae6574c92064ab2434afa8036a5a75e9@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_FRIEND_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives8_dlg2[] = { /* 0x8178870 */
    DEBUGINFO_O(15421),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_S07E01, 9, /* to label */ 0),
    SET_ARRAYVAL(EVENT_S07E01,  9,  1),
    MSG_NPC(1, (@@STRING:173e538755c076679c30fb7629a54acbc002cfa6348ba1d955b947a1f8956277@@)),
    MSG_NPC(1, (@@STRING:d79aa2703a13806a09d050d8c4c78c32c04cd9f0754ea23c7e5f54814d42282d@@)),
    MSG_NPC(1, (@@STRING:adb04854b46d8c269cb2acdf0e58e966206ab6d578d7e35b75869b6490ac2ce9@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_STORAGE_WITH_DIALOG, 0, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g50_s0_lives9_dlg2[] = { /* 0x81789bc */
    DEBUGINFO_O(15438),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    JUMPIF_ARRAY(EVENT_S07E01, 10, /* to label */ 0),
    SET_ARRAYVAL(EVENT_S07E01, 10,  1),
    MSG_NPC(1, (@@STRING:00f758eed34e9ff589737e02866ced9320e35803cfdeca803c171ee6a62d166f@@)),
    MSG_NPC(1, (@@STRING:9f1f5f33a0fcbada6a1bcf25d92e5af94f66eb449d78b4ab1a0c48f4dba9a5d9@@)),
    TEXTBOX_CLEAR,
  LABEL(0), /* = 0x00 */
    SPECIAL_TEXT(SPECIAL_TEXT_LINK_SHOP, 0, 0),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g51_s0_lives0_dlg2[] = { /* 0x8178b08 */
    DEBUGINFO_O(15454),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:007fdae2b7c153f15175797f6cb3a50894c5549df1df171ec7b9fe3d7031f4fb@@)),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000044),
    MSG_NPC(1, (@@STRING:81c3ce70f8c0f6ddb2e5208cf3027c4192106ba43b6a17f14d89b7049ea7c0a3@@)),
    SCENARIO_CALC(SCENARIO_SUB9, 53,  4),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g51_s0_lives1_dlg2[] = { /* 0x8178c10 */
    DEBUGINFO_O(15467),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:2e6e5410282e7cdd70bd69415b7b6c435fd28b1b309cae71f157baeb26c1aaf9@@)),
    MSG_NPC(1, (@@STRING:a5b2a070c43de4f5d2670d2b74bf202dbeeb542a8579e7e6fd8d28ba4d6958a7@@)),
    SCENARIO_CALC(SCENARIO_SUB9, 53,  4),
    JUMP_SCRIPT(END_TALK),
};


static const struct ScriptCommand s_gs1_g52_s0_lives0_dlg2[] = { /* 0x8178d0c */
    DEBUGINFO_O(15479),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    MSG_NPC(1, (@@STRING:b3167137b7ba693fc478b9945b8489f3726d4f92647baaef53f6b95fc6c7b52e@@)),
    MSG_NPC(1, (@@STRING:f8e1dc1dd93f26277e729c9314bfbda1b5dddd97facc7d1827c894b225d7ebd0@@)),
    ASK3(FALSE, /*default*/ -1, /* speaker */ 1, (@@STRING:bac4745e7c8861b2e2788eae2b0f2fe70d53e173cb380aaca62a830325643bc1@@)),
    CHOICE(/* label */  2, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  3, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(2), /* = 0x02 */
    { 0x3b, 0x30,  0x0000,  0x00000000,  0x00000000, NULL },
    COND_EQUAL(1, /* to label */ 4),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000041),
    MSG_NPC(1, (@@STRING:7cb8db2f2c8499b80778a9308edad7d21676579b9af6856ccd2e320c782fff3f@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY(204),
    MSG_INSTANT((@@STRING:0446cfbba8948728425ec124a581f42cfb26c981688960058622e7a1f528f7e5@@)),
    WAIT_FANFARE1(204),
    TEXTBOX_CLEAR,
    WAIT(30),
    { 0x3b, 0x31,  0x0000,  0x00000000,  0x00000000, NULL },
    ASK1(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:cce73d449b87a907e38aef4f571aa7ea4790b7730f50989783a18724a29a86ce@@)),
    CHOICE(/* label */  6, (@@STRING:e5b4158fa246c99386bbc5f943f4887ac2b3ac75150fd1e13dd84ace1bee0678@@)),
    CHOICE(/* label */  7, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(6), /* = 0x06 */
    RENAME_ALLY(-1),
  LABEL(7), /* = 0x07 */
    { 0x3b, 0x32,  0x0000,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    SCENARIO_CALC(SCENARIO_SUB9, 55,  3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    CANCEL_ENTITIES(52, -1),
    WAIT(30),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    JUMP_SCRIPT(END_TALK),
  LABEL(4), /* = 0x04 */
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000041),
    MSG_NPC(1, (@@STRING:62d02252fe55033aaade625e3e268f63463d7ff958a45ea338ddcb3159291097@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_NPC(1, (@@STRING:4b90591b6ba373638b0a1ff0605d6481d1de32e7ca2ad01a1016969dd67f18cd@@)),
    MSG_NPC(1, (@@STRING:31a6607b829ebdf71bfa085b3b63517728d1093037795468e7ab5bb0b86557eb@@)),
    MSG_NPC(1, (@@STRING:1522c6a1aede331372e382909aeee7749fcc772870f365defeef06eafcd32f00@@)),
    TEXTBOX_CLEAR,
    JUMP_SCRIPT(END_TALK),
  LABEL(3), /* = 0x03 */
    PORTRAIT_REP(0x0001, 0x00000042),
    MSG_NPC(1, (@@STRING:71246315a80c81da3c8958481cd4a621ee426b2c451b37344c0375d6b211a3e8@@)),
    TEXTBOX_CLEAR,
    JUMP_SCRIPT(END_TALK),
};

static const struct GroundLivesData s_gs1_g0_s1_lives[] = { /* 0x8179214 */
    /*  0 */ {   0,   2,   0,   0, {   8,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {   5,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g0_s2_lives[] = { /* 0x8179244 */
    /*  0 */ {   0,   0,   0,   0, {  64,   9, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s2_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  64,   7, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s2_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g0_s3_lives[] = { /* 0x8179274 */
    /*  0 */ {   0,   6,   0,   0, { 112,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   6,   0,   0, { 115,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g0_s4_lives[] = { /* 0x81792a4 */
    /*  0 */ {   0,   4,   0,   0, {  66,  83, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  66,  85, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g0_s7_lives[] = { /* 0x81792d4 */
    /*  0 */ {   0,   0,   0,   0, {  64,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s7_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  64,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s7_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g0_s8_lives[] = { /* 0x8179304 */
    /*  0 */ {   0,   0,   0,   0, {   8,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s8_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {   5,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g0_s8_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g1_s0_lives[] = { /* 0x8179334 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives5_dlg2,
    } },
    /*  6 */ {  85,   7,   0,   0, {  69,  36, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives6_dlg2,
    } },
    /*  7 */ {  77,   5,   0,   0, {  71,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives7_dlg2,
    } },
    /*  8 */ {  81,   0,   0,   0, {  58,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives8_dlg2,
    } },
    /*  9 */ {  89,   2,   0,   0, {  57,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives9_dlg2,
    } },
    /* 10 */ {  90,   6,   0,   0, {  61,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives10_dlg2,
    } },
    /* 11 */ {  88,   0,   0,   0, {  90,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives11_dlg2,
    } },
    /* 12 */ {  61,   0,   0,   0, {  58,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives12_dlg2,
    } },
    /* 13 */ {  62,   0,   0,   0, {  61,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g1_s0_lives13_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g3_s0_lives[] = { /* 0x8179484 */
    /*  0 */ { 127,   0,   0,   0, { 109,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g3_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g4_s0_lives[] = { /* 0x817949c */
    /*  0 */ { 127,   0,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g4_s0_lives0_dlg1,
        [2] = s_gs1_g4_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g4_s1_lives[] = { /* 0x81794b4 */
    /*  0 */ {   0,   0,   0,   0, { 115,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, { 115,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s1_lives1_dlg0,
    } },
    /*  2 */ { 127,   6,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s1_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g4_s2_lives[] = { /* 0x81794fc */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives0_dlg0,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives1_dlg0,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives2_dlg0,
    } },
    /*  3 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives3_dlg0,
    } },
    /*  4 */ {  85,   7,   0,   0, {  69,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives4_dlg0,
    } },
    /*  5 */ {  77,   5,   0,   0, {  71,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives5_dlg0,
    } },
    /*  6 */ {  81,   0,   0,   0, {  58,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives6_dlg0,
    } },
    /*  7 */ {  89,   2,   0,   0, {  57,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives7_dlg0,
    } },
    /*  8 */ {  90,   6,   0,   0, {  61,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives8_dlg0,
    } },
    /*  9 */ {  88,   0,   0,   0, {  90,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s2_lives9_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g4_s3_lives[] = { /* 0x81795ec */
    /*  0 */ { 127,   6,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g4_s3_lives0_dlg0,
        [1] = s_gs1_g4_s3_lives0_dlg1,
        [2] = s_gs1_g4_s3_lives0_dlg2,
        [3] = s_gs1_g4_s3_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs1_g4_s4_lives[] = { /* 0x8179604 */
    /*  0 */ { 127,   6,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g4_s4_lives0_dlg1,
        [2] = s_gs1_g4_s4_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g5_s0_lives[] = { /* 0x817961c */
    /*  0 */ { 127,   0,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g5_s0_lives0_dlg1,
        [2] = s_gs1_g5_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g5_s1_lives[] = { /* 0x8179634 */
    /*  0 */ {   0,   0,   0,   0, { 115,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, { 115,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s1_lives1_dlg0,
    } },
    /*  2 */ { 127,   6,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s1_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g5_s2_lives[] = { /* 0x817967c */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives0_dlg0,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives1_dlg0,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives2_dlg0,
    } },
    /*  3 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives3_dlg0,
    } },
    /*  4 */ {  85,   7,   0,   0, {  69,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives4_dlg0,
    } },
    /*  5 */ {  77,   5,   0,   0, {  71,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives5_dlg0,
    } },
    /*  6 */ {  81,   0,   0,   0, {  58,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives6_dlg0,
    } },
    /*  7 */ {  89,   2,   0,   0, {  57,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives7_dlg0,
    } },
    /*  8 */ {  90,   6,   0,   0, {  61,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives8_dlg0,
    } },
    /*  9 */ {  88,   0,   0,   0, {  90,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s2_lives9_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g5_s3_lives[] = { /* 0x817976c */
    /*  0 */ { 127,   6,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g5_s3_lives0_dlg1,
        [2] = s_gs1_g5_s3_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g5_s4_lives[] = { /* 0x8179784 */
    /*  0 */ {   0,   0,   0,   0, { 115,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, { 115,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s4_lives1_dlg0,
    } },
    /*  2 */ { 127,   6,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s4_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g5_s5_lives[] = { /* 0x81797cc */
    /*  0 */ { 127,   6,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g5_s5_lives0_dlg1,
        [2] = s_gs1_g5_s5_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g5_s6_lives[] = { /* 0x81797e4 */
    /*  0 */ { 127,   2,   0,   0, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g5_s6_lives0_dlg1,
        [2] = s_gs1_g5_s6_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g6_s0_lives[] = { /* 0x81797fc */
    /*  0 */ {   0,   2,   0,   0, {   5,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g6_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {   8,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g6_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g7_s0_lives[] = { /* 0x817982c */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g7_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g7_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g7_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g7_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g7_s0_lives4_dlg2,
    } },
    /*  5 */ {  77,   0,   0,   0, {  60,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g7_s0_lives5_dlg1,
        [2] = s_gs1_g7_s0_lives5_dlg2,
    } },
    /*  6 */ {  79,   3,   0,   0, {  62,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g7_s0_lives6_dlg1,
        [2] = s_gs1_g7_s0_lives6_dlg2,
    } },
    /*  7 */ {  80,   6,   0,   0, {  69,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g7_s0_lives7_dlg2,
        [3] = s_gs1_g7_s0_lives7_dlg3,
    } },
};

static const struct GroundLivesData s_gs1_g7_s1_lives[] = { /* 0x81798ec */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g7_s1_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {   8,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g7_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g8_s0_lives[] = { /* 0x817991c */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   0,   0,   0, {  75,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g8_s0_lives6_dlg1,
        [2] = s_gs1_g8_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   0,   0,   0, {  65,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g8_s0_lives7_dlg1,
        [2] = s_gs1_g8_s0_lives7_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g8_s1_lives[] = { /* 0x81799dc */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s1_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {   8,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g8_s2_lives[] = { /* 0x8179a0c */
    /*  0 */ {  78,   6,   0,   0, {  70,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives0_dlg0,
    } },
    /*  1 */ {  85,   2,   0,   0, {  65,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives1_dlg0,
    } },
    /*  2 */ {  86,   2,   0,   0, {  62,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives2_dlg0,
    } },
    /*  3 */ {  87,   2,   0,   0, {  62,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives3_dlg0,
    } },
    /*  4 */ {  77,   6,   0,   0, {  75,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives4_dlg0,
    } },
    /*  5 */ {  79,   4,   0,   0, {  65,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives5_dlg0,
    } },
    /*  6 */ {  54,   0,   0,   0, {  62,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives6_dlg0,
    } },
    /*  7 */ {  80,   0,   0,   0, {  66,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g8_s2_lives7_dlg0,
    } },
    /*  8 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s2_lives8_dlg2,
    } },
    /*  9 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g8_s2_lives9_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g9_s0_lives[] = { /* 0x8179afc */
    /*  0 */ {   0,   4,   0,   0, {  97,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g9_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   4,   0,   0, {  97,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g9_s0_lives1_dlg0,
    } },
    /*  2 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g9_s0_lives2_dlg0,
        [2] = s_gs1_g9_s0_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g9_s1_lives[] = { /* 0x8179b44 */
    /*  0 */ {  61,   6,   0,   0, {  79,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g9_s1_lives0_dlg0,
    } },
    /*  1 */ {  62,   6,   0,   0, {  77,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g9_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g10_s0_lives[] = { /* 0x8179b74 */
    /*  0 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  1 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  2 */ {   0,   6,   0,   0, {  79,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives2_dlg0,
    } },
    /*  3 */ {   7,   2,   0,   0, {  79,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives3_dlg0,
    } },
    /*  4 */ {  80,   0,   0,   0, {  66,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives4_dlg0,
    } },
    /*  5 */ {  79,   4,   0,   0, {  65,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives5_dlg0,
    } },
    /*  6 */ {  54,   0,   0,   0, {  62,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives6_dlg0,
    } },
    /*  7 */ {  78,   6,   0,   0, {  70,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives7_dlg0,
    } },
    /*  8 */ {  85,   2,   0,   0, {  65,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives8_dlg0,
    } },
    /*  9 */ {  86,   6,   0,   0, {  62,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives9_dlg0,
    } },
    /* 10 */ {  87,   2,   0,   0, {  62,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives10_dlg0,
    } },
    /* 11 */ {  77,   6,   0,   0, {  75,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s0_lives11_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g10_s1_lives[] = { /* 0x8179c94 */
    /*  0 */ {  88,   2,   0,   0, {  47,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s1_lives0_dlg0,
    } },
    /*  1 */ {  89,   2,   0,   0, {  44,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s1_lives1_dlg0,
    } },
    /*  2 */ {  90,   2,   0,   0, {  44,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s1_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g10_s2_lives[] = { /* 0x8179cdc */
    /*  0 */ {  91,   4,   0,   0, {  62,  60, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g10_s2_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g11_s0_lives[] = { /* 0x8179cf4 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g11_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g11_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g11_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g11_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g11_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g11_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   0,   0,   0, {  57,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g11_s0_lives6_dlg1,
        [2] = s_gs1_g11_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   6,   0,   0, {  67,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g11_s0_lives7_dlg1,
        [2] = s_gs1_g11_s0_lives7_dlg2,
        [3] = s_gs1_g11_s0_lives7_dlg3,
    } },
    /*  8 */ {  80,   0,   0,   0, {  68,  30, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g11_s0_lives8_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g12_s0_lives[] = { /* 0x8179dcc */
    /*  0 */ {  78,   6,   0,   0, {  70,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives0_dlg0,
    } },
    /*  1 */ {  85,   2,   0,   0, {  65,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives1_dlg0,
    } },
    /*  2 */ {  86,   2,   0,   0, {  62,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives2_dlg0,
    } },
    /*  3 */ {  87,   2,   0,   0, {  62,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives3_dlg0,
    } },
    /*  4 */ {  77,   6,   0,   0, {  75,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives4_dlg0,
    } },
    /*  5 */ {  80,   0,   0,   0, {  66,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives5_dlg0,
    } },
    /*  6 */ {  79,   4,   0,   0, {  65,  46, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives6_dlg0,
    } },
    /*  7 */ {  54,   0,   0,   0, {  62,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives7_dlg0,
    } },
    /*  8 */ {   0,   6,   0,   0, {  76,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives8_dlg0,
    } },
    /*  9 */ {  34,   6,   0,   0, {  76,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g12_s0_lives9_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g13_s0_lives[] = { /* 0x8179ebc */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g13_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g13_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g13_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g13_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g13_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g13_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   0,   0,   0, {  77,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g13_s0_lives6_dlg1,
        [2] = s_gs1_g13_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   0,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g13_s0_lives7_dlg1,
        [2] = s_gs1_g13_s0_lives7_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g14_s0_lives[] = { /* 0x8179f7c */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g14_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g14_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g14_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g14_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g14_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g14_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   0,   0,   0, {  77,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g14_s0_lives6_dlg1,
        [2] = s_gs1_g14_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   0,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g14_s0_lives7_dlg1,
        [2] = s_gs1_g14_s0_lives7_dlg2,
    } },
    /*  8 */ {  80,   0,   0,   0, {  59,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g14_s0_lives8_dlg1,
        [2] = s_gs1_g14_s0_lives8_dlg2,
    } },
    /*  9 */ {  78,   3,   0,   0, {  57,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g14_s0_lives9_dlg1,
        [2] = s_gs1_g14_s0_lives9_dlg2,
    } },
    /* 10 */ {  95,   5,   0,   0, {  61,  35, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g14_s0_lives10_dlg1,
        [2] = s_gs1_g14_s0_lives10_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g15_s0_lives[] = { /* 0x817a084 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   2,   0,   0, {  70,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g15_s0_lives6_dlg1,
        [2] = s_gs1_g15_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   6,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g15_s0_lives7_dlg1,
        [2] = s_gs1_g15_s0_lives7_dlg2,
    } },
    /*  8 */ {  78,   0,   0,   0, {  57,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives8_dlg2,
    } },
    /*  9 */ {  95,   0,   0,   0, {  61,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g15_s0_lives9_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g16_s0_lives[] = { /* 0x817a174 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g16_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g16_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g16_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g16_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g16_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g16_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   2,   0,   0, {  63,  40, 0, 0 }, {} },
    /*  7 */ {  79,   7,   0,   0, {  67,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  8 */ {  80,   5,   0,   0, {  67,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs1_g17_s0_lives[] = { /* 0x817a24c */
    /*  0 */ {   0,   2,   0,   0, {  46,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g17_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {  41,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g17_s0_lives1_dlg0,
    } },
    /*  2 */ {  77,   2,   0,   0, {  63,  40, 0, 0 }, {
        [0] = s_gs1_g17_s0_lives2_dlg0,
    } },
    /*  3 */ {  79,   7,   0,   0, {  67,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g17_s0_lives3_dlg0,
    } },
    /*  4 */ {  80,   5,   0,   0, {  67,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g17_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g18_s0_lives[] = { /* 0x817a2c4 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g18_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g18_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g18_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g18_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g18_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g18_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   2,   0,   0, {  63,  40, 0, 0 }, {
        [2] = s_gs1_g18_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   7,   0,   0, {  67,  38, 0, 0 }, {
        [2] = s_gs1_g18_s0_lives7_dlg2,
    } },
    /*  8 */ {  80,   5,   0,   0, {  67,  42, 0, 0 }, {
        [2] = s_gs1_g18_s0_lives8_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g19_s0_lives[] = { /* 0x817a39c */
    /*  0 */ {   0,   2,   0,   0, {   5,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g19_s0_lives0_dlg0,
    } },
    /*  1 */ {   7,   2,   0,   0, {   8,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g19_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g20_s0_lives[] = { /* 0x817a3cc */
    /*  0 */ {   0,   2,   0,   0, {   7,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g20_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {   4,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g20_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g21_s0_lives[] = { /* 0x817a3fc */
    /*  0 */ {   0,   2,   0,   0, {  34,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  34,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives1_dlg0,
    } },
    /*  2 */ {  91,   0,   0,   0, {  65,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives2_dlg0,
    } },
    /*  3 */ {  54,   3,   0,   0, {  60,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives3_dlg0,
    } },
    /*  4 */ {  77,   5,   0,   0, {  69,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives4_dlg0,
    } },
    /*  5 */ {  79,   3,   0,   0, {  59,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives5_dlg0,
    } },
    /*  6 */ {  80,   3,   0,   0, {  61,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives6_dlg0,
    } },
    /*  7 */ {  72,   7,   0,   0, {  70,  35, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives7_dlg0,
    } },
    /*  8 */ {  75,   5,   0,   0, {  71,  47, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives8_dlg0,
    } },
    /*  9 */ {  73,   6,   0,   0, {  77,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives9_dlg0,
    } },
    /* 10 */ {  76,   4,   0,   0, {  63,  48, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives10_dlg0,
    } },
    /* 11 */ {  70,   6,   0,   0, {  72,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives11_dlg0,
    } },
    /* 12 */ {  71,   6,   0,   0, {  72,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g21_s0_lives12_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g22_s0_lives[] = { /* 0x817a534 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs1_g22_s0_lives0_dlg1,
        [2] = s_gs1_g22_s0_lives0_dlg2,
        [3] = s_gs1_g22_s0_lives0_dlg3,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [1] = s_gs1_g22_s0_lives1_dlg1,
        [2] = s_gs1_g22_s0_lives1_dlg2,
        [3] = s_gs1_g22_s0_lives1_dlg3,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g22_s0_lives2_dlg1,
        [2] = s_gs1_g22_s0_lives2_dlg2,
        [3] = s_gs1_g22_s0_lives2_dlg3,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g22_s0_lives3_dlg1,
        [2] = s_gs1_g22_s0_lives3_dlg2,
        [3] = s_gs1_g22_s0_lives3_dlg3,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g22_s0_lives4_dlg1,
        [2] = s_gs1_g22_s0_lives4_dlg2,
        [3] = s_gs1_g22_s0_lives4_dlg3,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g22_s0_lives5_dlg1,
        [2] = s_gs1_g22_s0_lives5_dlg2,
        [3] = s_gs1_g22_s0_lives5_dlg3,
    } },
};

static const struct GroundLivesData s_gs1_g23_s0_lives[] = { /* 0x817a5c4 */
    /*  0 */ {   0,   2,   0,   0, {  43,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  43,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives1_dlg0,
    } },
    /*  2 */ {  83,   2,   0,   0, {  40,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives2_dlg0,
    } },
    /*  3 */ {  91,   0,   0,   0, {  65,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives3_dlg0,
    } },
    /*  4 */ {  85,   6,   0,   0, {  70,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives4_dlg0,
    } },
    /*  5 */ {  77,   4,   0,   0, {  65,  44, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives5_dlg0,
    } },
    /*  6 */ {  80,   5,   0,   0, {  70,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives6_dlg0,
    } },
    /*  7 */ {  54,   3,   0,   0, {  60,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives7_dlg0,
    } },
    /*  8 */ {  93,   2,   0,   0, {  46,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives8_dlg0,
    } },
    /*  9 */ {  92,   1,   0,   0, {  62,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g23_s0_lives9_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g23_s1_lives[] = { /* 0x817a6b4 */
    /*  0 */ {  55,   0,   0,   0, {  65,  44, CPOS_HALFTILE, 0 }, {
        [0] = s_gs1_g23_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g24_s0_lives[] = { /* 0x817a6cc */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g24_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g24_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g24_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g24_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g24_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g24_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   5,   0,   0, {  70,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g24_s0_lives6_dlg1,
        [2] = s_gs1_g24_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   3,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g24_s0_lives7_dlg1,
        [2] = s_gs1_g24_s0_lives7_dlg2,
    } },
    /*  8 */ {  85,   6,   0,   0, {  65,  36, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g24_s0_lives8_dlg1,
        [2] = s_gs1_g24_s0_lives8_dlg2,
    } },
    /*  9 */ {  80,   0,   0,   0, {  68,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g24_s0_lives9_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g24_s1_lives[] = { /* 0x817a7bc */
    /*  0 */ {   0,   0,   0,   0, {  61,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g24_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  61,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g24_s1_lives1_dlg0,
    } },
    /*  2 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g24_s1_lives2_dlg0,
        [2] = s_gs1_g24_s1_lives2_dlg2,
    } },
    /*  3 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g24_s1_lives3_dlg0,
        [2] = s_gs1_g24_s1_lives3_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g25_s0_lives[] = { /* 0x817a81c */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g25_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g25_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g25_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g25_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g25_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g25_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   0,   0,   0, {  70,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g25_s0_lives6_dlg1,
        [2] = s_gs1_g25_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   0,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g25_s0_lives7_dlg1,
        [2] = s_gs1_g25_s0_lives7_dlg2,
    } },
    /*  8 */ {  85,   0,   0,   0, {  65,  36, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g25_s0_lives8_dlg1,
        [2] = s_gs1_g25_s0_lives8_dlg2,
    } },
    /*  9 */ {  80,   0,   0,   0, {  68,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g25_s0_lives9_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g26_s0_lives[] = { /* 0x817a90c */
    /*  0 */ {   0,   2,   0,   0, {  38,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  35,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives1_dlg0,
    } },
    /*  2 */ {  77,   2,   0,   0, {  38,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives2_dlg0,
    } },
    /*  3 */ {  85,   6,   0,   0, {  76,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives3_dlg0,
    } },
    /*  4 */ { 104,   2,   0,   0, {  63,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives4_dlg0,
    } },
    /*  5 */ { 105,   1,   0,   0, {  69,  35, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives5_dlg0,
    } },
    /*  6 */ { 106,   3,   0,   0, {  67,  45, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives6_dlg0,
    } },
    /*  7 */ { 135,   1,   0,   0, {  64,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives7_dlg0,
    } },
    /*  8 */ { 136,   1,   0,   0, {  61,  35, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives8_dlg0,
    } },
    /*  9 */ { 137,   2,   0,   0, {  60,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives9_dlg0,
    } },
    /* 10 */ { 138,   1,   0,   0, {  65,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives10_dlg0,
    } },
    /* 11 */ { 139,   2,   0,   0, {  64,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives11_dlg0,
    } },
    /* 12 */ { 140,   3,   0,   0, {  63,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives12_dlg0,
    } },
    /* 13 */ { 141,   2,   0,   0, {  60,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives13_dlg0,
    } },
    /* 14 */ { 142,   2,   0,   0, {  67,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives14_dlg0,
    } },
    /* 15 */ { 143,   2,   0,   0, {  68,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives15_dlg0,
    } },
    /* 16 */ {  79,   3,   0,   0, {  70,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g26_s0_lives16_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g27_s0_lives[] = { /* 0x817aaa4 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g27_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g27_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g27_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g27_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g27_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g27_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   0,   0,   0, {  72,  45, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g27_s0_lives6_dlg1,
        [2] = s_gs1_g27_s0_lives6_dlg2,
    } },
    /*  7 */ {  79,   0,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g27_s0_lives7_dlg1,
        [2] = s_gs1_g27_s0_lives7_dlg2,
    } },
    /*  8 */ {  85,   0,   0,   0, {  62,  36, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g27_s0_lives8_dlg1,
        [2] = s_gs1_g27_s0_lives8_dlg2,
    } },
    /*  9 */ {  80,   0,   0,   0, {  68,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g27_s0_lives9_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g28_s0_lives[] = { /* 0x817ab94 */
    /*  0 */ {   0,   2,   0,   0, {  41,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  41,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives1_dlg0,
    } },
    /*  2 */ {  85,   6,   0,   0, {  76,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives2_dlg0,
    } },
    /*  3 */ {  91,   0,   0,   0, {  64,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives3_dlg0,
    } },
    /*  4 */ { 104,   6,   0,   0, {  72,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives4_dlg0,
    } },
    /*  5 */ { 105,   6,   0,   0, {  72,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives5_dlg0,
    } },
    /*  6 */ { 106,   5,   0,   0, {  72,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives6_dlg0,
    } },
    /*  7 */ {  77,   2,   0,   0, {  57,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives7_dlg0,
    } },
    /*  8 */ {  79,   3,   0,   0, {  66,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives8_dlg0,
    } },
    /*  9 */ { 136,   1,   0,   0, {  61,  35, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives9_dlg0,
    } },
    /* 10 */ { 137,   2,   0,   0, {  60,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives10_dlg0,
    } },
    /* 11 */ { 139,   2,   0,   0, {  64,  43, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives11_dlg0,
    } },
    /* 12 */ { 140,   3,   0,   0, {  63,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives12_dlg0,
    } },
    /* 13 */ { 141,   2,   0,   0, {  60,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives13_dlg0,
    } },
    /* 14 */ { 142,   1,   0,   0, {  68,  35, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives14_dlg0,
    } },
    /* 15 */ { 143,   2,   0,   0, {  64,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g28_s0_lives15_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g29_s0_lives[] = { /* 0x817ad14 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g29_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g29_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g29_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g29_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g29_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g29_s0_lives5_dlg2,
    } },
    /*  6 */ {  77,   2,   0,   0, {  62,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s0_lives6_dlg0,
        [2] = s_gs1_g29_s0_lives6_dlg2,
    } },
    /*  7 */ { 104,   6,   0,   0, {  65,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s0_lives7_dlg0,
        [2] = s_gs1_g29_s0_lives7_dlg2,
    } },
    /*  8 */ {  79,   2,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s0_lives8_dlg0,
        [2] = s_gs1_g29_s0_lives8_dlg2,
    } },
    /*  9 */ { 105,   6,   0,   0, {  62,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s0_lives9_dlg0,
        [2] = s_gs1_g29_s0_lives9_dlg2,
    } },
    /* 10 */ {  85,   2,   0,   0, {  65,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s0_lives10_dlg0,
        [2] = s_gs1_g29_s0_lives10_dlg2,
    } },
    /* 11 */ { 106,   6,   0,   0, {  68,  43, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s0_lives11_dlg0,
        [2] = s_gs1_g29_s0_lives11_dlg2,
    } },
    /* 12 */ {  80,   0,   0,   0, {  68,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g29_s0_lives12_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g29_s1_lives[] = { /* 0x817ae4c */
    /*  0 */ {   0,   0,   0,   0, {  61,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  61,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s1_lives1_dlg0,
    } },
    /*  2 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s1_lives2_dlg0,
        [2] = s_gs1_g29_s1_lives2_dlg2,
    } },
    /*  3 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g29_s1_lives3_dlg0,
        [2] = s_gs1_g29_s1_lives3_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g30_s0_lives[] = { /* 0x817aeac */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g30_s0_lives1_dlg0,
        [2] = s_gs1_g30_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives5_dlg2,
    } },
    /*  6 */ { 104,   0,   0,   0, {  65,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g30_s0_lives6_dlg0,
        [2] = s_gs1_g30_s0_lives6_dlg2,
    } },
    /*  7 */ { 105,   3,   0,   0, {  62,  42, 0, 0 }, {
        [0] = s_gs1_g30_s0_lives7_dlg0,
        [2] = s_gs1_g30_s0_lives7_dlg2,
    } },
    /*  8 */ { 106,   5,   0,   0, {  68,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g30_s0_lives8_dlg0,
        [2] = s_gs1_g30_s0_lives8_dlg2,
    } },
    /*  9 */ {  79,   0,   0,   0, {  59,  47, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [1] = s_gs1_g30_s0_lives9_dlg1,
        [2] = s_gs1_g30_s0_lives9_dlg2,
    } },
    /* 10 */ {  85,   0,   0,   0, {  57,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives10_dlg2,
    } },
    /* 11 */ {  80,   0,   0,   0, {  68,  31, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives11_dlg2,
    } },
    /* 12 */ {  78,   0,   0,   0, {  69,  14, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g30_s0_lives12_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g30_s1_lives[] = { /* 0x817afe4 */
    /*  0 */ {   0,   0,   0,   0, {  61,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g30_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  61,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g30_s1_lives1_dlg0,
    } },
    /*  2 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g30_s1_lives2_dlg0,
        [2] = s_gs1_g30_s1_lives2_dlg2,
    } },
    /*  3 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g30_s1_lives3_dlg0,
        [2] = s_gs1_g30_s1_lives3_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g31_s0_lives[] = { /* 0x817b044 */
    /*  0 */ {   0,   2,   0,   0, {  46,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  46,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives1_dlg0,
    } },
    /*  2 */ {  77,   4,   0,   0, {  82,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives2_dlg0,
    } },
    /*  3 */ {  54,   6,   0,   0, {  78,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives3_dlg0,
    } },
    /*  4 */ {  85,   0,   0,   0, {  82,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives4_dlg0,
    } },
    /*  5 */ { 104,   7,   0,   0, {  89,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives5_dlg0,
    } },
    /*  6 */ { 105,   6,   0,   0, {  90,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives6_dlg0,
    } },
    /*  7 */ { 106,   5,   0,   0, {  87,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives7_dlg0,
    } },
    /*  8 */ {  88,   2,   0,   0, {  41,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives8_dlg0,
    } },
    /*  9 */ {  89,   2,   0,   0, {  40,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives9_dlg0,
    } },
    /* 10 */ {  90,   2,   0,   0, {  40,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives10_dlg0,
    } },
    /* 11 */ { 143,   3,   0,   0, {  56,  50, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives11_dlg0,
    } },
    /* 12 */ { 135,   4,   0,   0, {  75,  54, 0, 0 }, {
        [0] = s_gs1_g31_s0_lives12_dlg0,
    } },
    /* 13 */ { 137,   4,   0,   0, {  67,  54, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives13_dlg0,
    } },
    /* 14 */ {  79,   0,   0,   0, {  62,  26, 0, 0 }, {
        [0] = s_gs1_g31_s0_lives14_dlg0,
    } },
    /* 15 */ { 136,   0,   0,   0, {  65,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives15_dlg0,
    } },
    /* 16 */ { 140,   0,   0,   0, {  66,  26, 0, 0 }, {
        [0] = s_gs1_g31_s0_lives16_dlg0,
    } },
    /* 17 */ { 141,   0,   0,   0, {  60,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives17_dlg0,
    } },
    /* 18 */ { 142,   0,   0,   0, {  68,  21, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives18_dlg0,
    } },
    /* 19 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives19_dlg0,
        [2] = s_gs1_g31_s0_lives19_dlg2,
    } },
    /* 20 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g31_s0_lives20_dlg0,
        [2] = s_gs1_g31_s0_lives20_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g32_s0_lives[] = { /* 0x817b23c */
    /*  0 */ {   0,   6,   0,   0, {  63,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  63,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives1_dlg0,
    } },
    /*  2 */ {  77,   5,   0,   0, {  67,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives2_dlg0,
    } },
    /*  3 */ {  54,   7,   0,   0, {  68,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives3_dlg0,
    } },
    /*  4 */ {  85,   6,   0,   0, {  70,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives4_dlg0,
    } },
    /*  5 */ { 104,   6,   0,   0, {  72,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives5_dlg0,
    } },
    /*  6 */ { 105,   6,   0,   0, {  72,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives6_dlg0,
    } },
    /*  7 */ { 106,   5,   0,   0, {  70,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives7_dlg0,
    } },
    /*  8 */ {  88,   2,   0,   0, {  59,  40, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives8_dlg0,
    } },
    /*  9 */ {  89,   2,   0,   0, {  58,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives9_dlg0,
    } },
    /* 10 */ {  90,   2,   0,   0, {  58,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives10_dlg0,
    } },
    /* 11 */ { 143,   4,   0,   0, {  60,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives11_dlg0,
    } },
    /* 12 */ { 135,   5,   0,   0, {  71,  45, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives12_dlg0,
    } },
    /* 13 */ { 137,   4,   0,   0, {  65,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives13_dlg0,
    } },
    /* 14 */ {  79,   0,   0,   0, {  62,  35, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives14_dlg0,
    } },
    /* 15 */ { 136,   0,   0,   0, {  63,  32, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives15_dlg0,
    } },
    /* 16 */ { 140,   0,   0,   0, {  66,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives16_dlg0,
    } },
    /* 17 */ { 141,   1,   0,   0, {  58,  34, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives17_dlg0,
    } },
    /* 18 */ { 142,   7,   0,   0, {  70,  33, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g32_s0_lives18_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g33_s0_lives[] = { /* 0x817b404 */
    /*  0 */ {   0,   0,   0,   0, {  65,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g33_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g34_s0_lives[] = { /* 0x817b41c */
    /*  0 */ {  34,   0,   0,   0, {  65,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives0_dlg2,
    } },
    /*  1 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives1_dlg2,
    } },
    /*  2 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives2_dlg2,
    } },
    /*  3 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives3_dlg2,
    } },
    /*  4 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives4_dlg2,
    } },
    /*  5 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives5_dlg2,
    } },
    /*  6 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives6_dlg2,
    } },
    /*  7 */ { 104,   6,   0,   0, {  72,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives7_dlg2,
    } },
    /*  8 */ { 105,   6,   0,   0, {  72,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives8_dlg2,
    } },
    /*  9 */ { 106,   4,   0,   0, {  64,  48, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives9_dlg2,
    } },
    /* 10 */ {  85,   6,   0,   0, {  70,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives10_dlg2,
    } },
    /* 11 */ {  77,   5,   0,   0, {  59,  47, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives11_dlg2,
    } },
    /* 12 */ {  54,   1,   0,   0, {  56,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives12_dlg2,
    } },
    /* 13 */ {  88,   1,   0,   0, {  60,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives13_dlg2,
    } },
    /* 14 */ {  89,   1,   0,   0, {  56,  35, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives14_dlg2,
    } },
    /* 15 */ {  90,   1,   0,   0, {  59,  31, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g34_s0_lives15_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g35_s0_lives[] = { /* 0x817b59c */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives5_dlg2,
    } },
    /*  6 */ { 104,   7,   0,   0, {  71,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives6_dlg2,
    } },
    /*  7 */ { 105,   6,   0,   0, {  73,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives7_dlg2,
    } },
    /*  8 */ { 106,   0,   0,   0, {  68,  31, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives8_dlg2,
    } },
    /*  9 */ {  85,   5,   0,   0, {  71,  45, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives9_dlg2,
    } },
    /* 10 */ {  77,   0,   0,   0, {  58,  36, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives10_dlg2,
    } },
    /* 11 */ {  89,   3,   0,   0, {  59,  46, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives11_dlg2,
    } },
    /* 12 */ {  90,   4,   0,   0, {  62,  48, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives12_dlg2,
    } },
    /* 13 */ {  61,   1,   0,   0, {  61,  28, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives13_dlg2,
    } },
    /* 14 */ {  62,   1,   0,   0, {  59,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g35_s0_lives14_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g36_s0_lives[] = { /* 0x817b704 */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives5_dlg2,
    } },
    /*  6 */ { 104,   7,   0,   0, {  71,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives6_dlg2,
    } },
    /*  7 */ { 105,   2,   0,   0, {  58,  20, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives7_dlg2,
    } },
    /*  8 */ { 106,   1,   0,   0, {  61,  18, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives8_dlg2,
    } },
    /*  9 */ {  85,   6,   0,   0, {  68,  34, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives9_dlg2,
    } },
    /* 10 */ {  77,   5,   0,   0, {  71,  45, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives10_dlg2,
    } },
    /* 11 */ {  89,   1,   0,   0, {  59,  46, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives11_dlg2,
    } },
    /* 12 */ {  90,   5,   0,   0, {  62,  48, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives12_dlg2,
    } },
    /* 13 */ {  61,   0,   0,   0, {  57,  36, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives13_dlg2,
    } },
    /* 14 */ {  62,   0,   0,   0, {  60,  36, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g36_s0_lives14_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g37_s0_lives[] = { /* 0x817b86c */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {} },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {} },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs1_g38_s0_lives[] = { /* 0x817b8fc */
    /*  0 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives0_dlg2,
    } },
    /*  1 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives1_dlg2,
    } },
    /*  2 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives2_dlg2,
    } },
    /*  3 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives3_dlg2,
    } },
    /*  4 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives4_dlg2,
    } },
    /*  5 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives5_dlg2,
    } },
    /*  6 */ {  85,   7,   0,   0, {  69,  36, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives6_dlg2,
    } },
    /*  7 */ {  77,   0,   0,   0, {  90,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives7_dlg2,
    } },
    /*  8 */ {  89,   0,   0,   0, {  57,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives8_dlg2,
    } },
    /*  9 */ {  90,   0,   0,   0, {  61,  33, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives9_dlg2,
    } },
    /* 10 */ {  61,   0,   0,   0, {  58,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives10_dlg2,
    } },
    /* 11 */ {  62,   0,   0,   0, {  61,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives11_dlg2,
    } },
    /* 12 */ {  95,   2,   0,   0, {  60,  43, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives12_dlg2,
    } },
    /* 13 */ {  78,   6,   0,   0, {  64,  43, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g38_s0_lives13_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g38_s1_lives[] = { /* 0x817ba4c */
    /*  0 */ {   0,   0,   0,   0, {  35,  25, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g38_s1_lives0_dlg0,
    } },
    /*  1 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g38_s1_lives1_dlg0,
        [2] = s_gs1_g38_s1_lives1_dlg2,
    } },
    /*  2 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g38_s1_lives2_dlg0,
        [2] = s_gs1_g38_s1_lives2_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g39_s0_lives[] = { /* 0x817ba94 */
    /*  0 */ { 124,   0,   0,   0, {  60,  11, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g39_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g40_s0_lives[] = { /* 0x817baac */
    /*  0 */ {  77,   5,   0,   0, {  71,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g40_s0_lives0_dlg0,
        [2] = s_gs1_g40_s0_lives0_dlg2,
        [3] = s_gs1_g40_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs1_g41_s0_lives[] = { /* 0x817bac4 */
    /*  0 */ {  88,   0,   0,   0, {  68,  27, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g41_s0_lives0_dlg0,
        [2] = s_gs1_g41_s0_lives0_dlg2,
        [3] = s_gs1_g41_s0_lives0_dlg3,
    } },
};

static const struct GroundLivesData s_gs1_g42_s0_lives[] = { /* 0x817badc */
    /*  0 */ {  77,   0,   0,   0, {  65,  37, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g42_s0_lives0_dlg2,
    } },
    /*  1 */ {  79,   0,   0,   0, {  65,  36, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g42_s0_lives1_dlg0,
        [2] = s_gs1_g42_s0_lives1_dlg2,
    } },
    /*  2 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g42_s0_lives2_dlg2,
    } },
    /*  3 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g42_s0_lives3_dlg2,
    } },
    /*  4 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g42_s0_lives4_dlg2,
    } },
    /*  5 */ {  76,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g42_s0_lives5_dlg2,
    } },
    /*  6 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g42_s0_lives6_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g43_s0_lives[] = { /* 0x817bb84 */
    /*  0 */ {   0,   2,   0,   0, {  70,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g43_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {  70,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g43_s0_lives1_dlg0,
    } },
    /*  2 */ {  77,   6,   0,   0, {  65,  38, 0, 0 }, {
        [0] = s_gs1_g43_s0_lives2_dlg0,
    } },
    /*  3 */ {  79,   0,   0,   0, {  65,  37, 0, 0 }, {
        [0] = s_gs1_g43_s0_lives3_dlg0,
    } },
    /*  4 */ { 115,   2,   0,   0, {  29,  41, 0, 0 }, {
        [0] = s_gs1_g43_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g44_s0_lives[] = { /* 0x817bbfc */
    /*  0 */ { 115,   0,   0,   0, {  70,  20, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g44_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g45_s0_lives[] = { /* 0x817bc14 */
    /*  0 */ { 115,   0,   0,   0, {  70,  20, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g45_s0_lives0_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g45_s1_lives[] = { /* 0x817bc2c */
    /*  0 */ {   0,   2,   0,   0, {  46,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g45_s1_lives0_dlg0,
    } },
    /*  1 */ { 115,   2,   0,   0, {  26,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g45_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g46_s0_lives[] = { /* 0x817bc5c */
    /*  0 */ {   1,   2,   0,   0, {  46,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g46_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   2,   0,   0, {  55,  40, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g46_s0_lives1_dlg0,
    } },
    /*  2 */ {  77,   7,   0,   0, {  67,  38, 0, 0 }, {
        [0] = s_gs1_g46_s0_lives2_dlg0,
    } },
    /*  3 */ {  79,   5,   0,   0, {  67,  43, 0, 0 }, {
        [0] = s_gs1_g46_s0_lives3_dlg0,
    } },
    /*  4 */ { 109,   3,   0,   0, {  63,  43, 0, 0 }, {
        [0] = s_gs1_g46_s0_lives4_dlg0,
    } },
    /*  5 */ { 110,   1,   0,   0, {  63,  38, 0, 0 }, {
        [0] = s_gs1_g46_s0_lives5_dlg0,
    } },
    /*  6 */ {  89,   2,   0,   0, {  42,  42, 0, 0 }, {
        [0] = s_gs1_g46_s0_lives6_dlg0,
    } },
    /*  7 */ { 104,   2,   0,   0, {  39,  39, 0, 0 }, {
        [0] = s_gs1_g46_s0_lives7_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g47_s0_lives[] = { /* 0x817bd1c */
    /*  0 */ {   1,   2,   0,   0, {  39,  41, 0, 0 }, {
        [0] = s_gs1_g47_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  43,  41, 0, 0 }, {
        [0] = s_gs1_g47_s0_lives1_dlg0,
    } },
    /*  2 */ {  70,   5,   0,   0, {  67,  44, 0, 0 }, {
        [0] = s_gs1_g47_s0_lives2_dlg0,
    } },
    /*  3 */ {  71,   4,   0,   0, {  65,  40, 0, 0 }, {
        [0] = s_gs1_g47_s0_lives3_dlg0,
    } },
    /*  4 */ {  72,   3,   0,   0, {  63,  44, 0, 0 }, {
        [0] = s_gs1_g47_s0_lives4_dlg0,
    } },
    /*  5 */ {  75,   1,   0,   0, {  63,  37, 0, 0 }, {
        [0] = s_gs1_g47_s0_lives5_dlg0,
    } },
    /*  6 */ {  88,   7,   0,   0, {  68,  37, 0, 0 }, {
        [0] = s_gs1_g47_s0_lives6_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g48_s0_lives[] = { /* 0x817bdc4 */
    /*  0 */ {   1,   3,   0,   0, {  60,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g48_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   3,   0,   0, {  62,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g48_s0_lives1_dlg0,
    } },
    /*  2 */ {  70,   5,   0,   0, {  68,  44, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g48_s0_lives2_dlg0,
    } },
    /*  3 */ {  71,   4,   0,   0, {  65,  46, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g48_s0_lives3_dlg0,
    } },
    /*  4 */ {  88,   5,   0,   0, {  71,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g48_s0_lives4_dlg0,
    } },
    /*  5 */ { 121,   0,   0,   0, {  65,  39, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g48_s0_lives5_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g49_s0_lives[] = { /* 0x817be54 */
    /*  0 */ {   1,   2,   0,   0, {  59,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g49_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  59,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g49_s0_lives1_dlg0,
    } },
    /*  2 */ {  70,   0,   0,   0, {  63,  35, 0, 0 }, {
        [0] = s_gs1_g49_s0_lives2_dlg0,
    } },
    /*  3 */ {  71,   0,   0,   0, {  67,  35, 0, 0 }, {
        [0] = s_gs1_g49_s0_lives3_dlg0,
    } },
    /*  4 */ {  88,   7,   0,   0, {  71,  37, 0, 0 }, {
        [0] = s_gs1_g49_s0_lives4_dlg0,
    } },
    /*  5 */ { 121,   6,   0,   0, {  69,  41, 0, 0 }, {
        [0] = s_gs1_g49_s0_lives5_dlg0,
    } },
    /*  6 */ { 122,   2,   0,   0, {  62,  41, 0, 0 }, {
        [0] = s_gs1_g49_s0_lives6_dlg0,
    } },
};

static const struct GroundLivesData s_gs1_g50_s0_lives[] = { /* 0x817befc */
    /*  0 */ {  77,   0,   0,   0, {  71,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives0_dlg2,
    } },
    /*  1 */ {  81,   4,   0,   0, {  58,  44, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives1_dlg2,
    } },
    /*  2 */ {  79,   4,   0,   0, {  59,  47, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives2_dlg2,
    } },
    /*  3 */ {  85,   2,   0,   0, {  61,  19, 0, CPOS_HALFTILE }, {
        [0] = s_gs1_g50_s0_lives3_dlg0,
        [2] = s_gs1_g50_s0_lives3_dlg2,
        [3] = s_gs1_g50_s0_lives3_dlg3,
    } },
    /*  4 */ {  70,   0,   0,   0, {  36,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives4_dlg2,
    } },
    /*  5 */ {  71,   0,   0,   0, {  39,  30, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives5_dlg2,
    } },
    /*  6 */ {  72,   0,   0,   0, {  82,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives6_dlg2,
    } },
    /*  7 */ {  73,   0,   0,   0, {  97,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives7_dlg2,
    } },
    /*  8 */ {  75,   0,   0,   0, {  41,  61, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives8_dlg2,
    } },
    /*  9 */ {  74,   0,   0,   0, {  82,  60, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs1_g50_s0_lives9_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g51_s0_lives[] = { /* 0x817bfec */
    /*  0 */ {  93,   2,   0,   0, {  61,  48, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g51_s0_lives0_dlg2,
    } },
    /*  1 */ {  92,   6,   0,   0, {  65,  48, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g51_s0_lives1_dlg2,
    } },
};

static const struct GroundLivesData s_gs1_g52_s0_lives[] = { /* 0x817c01c */
    /*  0 */ {  82,   6,   0,   0, {  65,  48, 0, CPOS_HALFTILE }, {
        [2] = s_gs1_g52_s0_lives0_dlg2,
    } },
};

static const struct GroundObjectData s_gs1_g0_s0_objs[] = { /* 0x817c034 */
    /*  0 */ {  15,   0,   3,   2, {  13,  37, CPOS_HALFTILE, 0 }, {
        [2] = s_gs1_g0_s0_obj0_dlg2,
    } },
    /*  1 */ {  15,   0,   3,   2, {  68,  10, CPOS_HALFTILE, 0 }, {
        [2] = s_gs1_g0_s0_obj1_dlg2,
    } },
    /*  2 */ {  15,   0,   3,   2, { 114,  36, CPOS_HALFTILE, 0 }, {
        [2] = s_gs1_g0_s0_obj2_dlg2,
    } },
};

static const struct GroundObjectData s_gs1_g5_s1_objs[] = { /* 0x817c07c */
    /*  0 */ {  66,   0,   2,   2, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s1_obj0_dlg0,
        [1] = s_gs1_g5_s1_obj0_dlg1,
        [2] = s_gs1_g5_s1_obj0_dlg2,
    } },
    /*  1 */ {  66,   0,   2,   2, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s1_obj1_dlg0,
        [1] = s_gs1_g5_s1_obj1_dlg1,
        [2] = s_gs1_g5_s1_obj1_dlg2,
    } },
    /*  2 */ {  66,   0,   2,   2, { 115,  39, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs1_g5_s1_obj2_dlg0,
        [1] = s_gs1_g5_s1_obj2_dlg1,
        [2] = s_gs1_g5_s1_obj2_dlg2,
    } },
};

static const struct GroundEffectData s_gs1_g6_s0_effs[] = { /* 0x817c0c4 */
    /*  0 */ {   0,   0,   1,   1, {  15,  39, 0, CPOS_HALFTILE }, s_gs1_g6_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g10_s0_effs[] = { /* 0x817c0d0 */
    /*  0 */ {   0,   0,   1,   1, {  66,  40, 0, CPOS_HALFTILE }, s_gs1_g10_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g12_s0_effs[] = { /* 0x817c0dc */
    /*  0 */ {   0,   0,   1,   1, {  66,  40, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs1_g17_s0_effs[] = { /* 0x817c0e8 */
    /*  0 */ {   0,   0,   1,   1, {  64,  40, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs1_g17_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g20_s0_effs[] = { /* 0x817c0f4 */
    /*  0 */ {   0,   0,   1,   1, {  11,  40, 0, CPOS_HALFTILE }, s_gs1_g20_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g21_s0_effs[] = { /* 0x817c100 */
    /*  0 */ {   0,   0,   1,   1, {  43,  42, 0, CPOS_HALFTILE }, s_gs1_g21_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g23_s0_effs[] = { /* 0x817c10c */
    /*  0 */ {   0,   0,   1,   1, {  66,  42, 0, CPOS_HALFTILE }, s_gs1_g23_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g23_s1_effs[] = { /* 0x817c118 */
    /*  0 */ {   5,   0,   1,   1, {  66,  41, 0, CPOS_HALFTILE }, s_gs1_g23_s1_eff0_script },
    /*  1 */ {   5,   0,   1,   1, {  66,  41, 0, CPOS_HALFTILE }, s_gs1_g23_s1_eff1_script },
};

static const struct GroundEffectData s_gs1_g26_s0_effs[] = { /* 0x817c130 */
    /*  0 */ {   0,   0,   1,   1, {  65,  42, 0, CPOS_HALFTILE }, s_gs1_g26_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g28_s0_effs[] = { /* 0x817c13c */
    /*  0 */ {   0,   0,   1,   1, {  53,  42, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs1_g28_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g31_s0_effs[] = { /* 0x817c148 */
    /*  0 */ {   0,   0,   1,   1, {  84,  40, 0, CPOS_HALFTILE }, s_gs1_g31_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g32_s0_effs[] = { /* 0x817c154 */
    /*  0 */ {   0,   0,   1,   1, {  65,  40, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs1_g37_s0_effs[] = { /* 0x817c160 */
    /*  0 */ {   0,   0,   1,   1, {  23,  34, 0, CPOS_HALFTILE }, s_gs1_g37_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g43_s0_effs[] = { /* 0x817c16c */
    /*  0 */ {   0,   0,   1,   1, {  69,  40, 0, CPOS_HALFTILE }, s_gs1_g43_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g46_s0_effs[] = { /* 0x817c178 */
    /*  0 */ {   0,   0,   1,   1, {  64,  42, 0, 0 }, s_gs1_g46_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g47_s0_effs[] = { /* 0x817c184 */
    /*  0 */ {   0,   0,   1,   1, {  65,  41, 0, 0 }, s_gs1_g47_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g48_s0_effs[] = { /* 0x817c190 */
    /*  0 */ {   0,   0,   1,   1, {  65,  44, 0, 0 }, s_gs1_g48_s0_eff0_script },
};

static const struct GroundEffectData s_gs1_g49_s0_effs[] = { /* 0x817c19c */
    /*  0 */ {   0,   0,   1,   1, {  64,  41, CPOS_HALFTILE, 0 }, NULL },
};

static const struct GroundEventData s_gs1_g0_s0_evts[] = { /* 0x817c1a8 */
    /*  0 */ {   3,  12,   0,   0, {   0,  35, 0, 0 }, &s_gs1_g0_s0_evt0_sref },
    /*  1 */ {  15,   6,   0,   0, {  57,   0, 0, 0 }, &s_gs1_g0_s0_evt1_sref },
    /*  2 */ {   3,  12,   0,   0, { 117,  34, 0, 0 }, &s_gs1_g0_s0_evt2_sref },
    /*  3 */ {   9,   3,   0,   0, {  63,  87, 0, 0 }, &s_gs1_g0_s0_evt3_sref },
};

static const struct GroundEventData s_gs1_g8_s2_evts[] = { /* 0x817c1d8 */
    /*  0 */ {   3,   9,   0,   0, {  75,  35, 0, 0 }, &s_gs1_g8_s2_evt0_sref },
};

static const struct GroundEventData s_gs1_g16_s0_evts[] = { /* 0x817c1e4 */
    /*  0 */ {   6,   9,   0,   0, {  47,  36, 0, 0 }, &s_gs1_g16_s0_evt0_sref },
};

static const struct GroundEventData s_gs1_g42_s0_evts[] = { /* 0x817c1f0 */
    /*  0 */ {   6,   9,   0,   0, {  71,  35, 0, 0 }, &s_gs1_g42_s0_evt0_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x817c1fc */
    &s_gs1_g0_s0_station_sref,
    &s_gs1_g1_s0_station_sref,
    &s_gs1_g2_s0_station_sref,
    &s_gs1_g4_s1_station_sref,
    &s_gs1_g5_s1_station_sref,
    &s_gs1_g5_s4_station_sref,
    &s_gs1_g6_s0_station_sref,
    &s_gs1_g7_s0_station_sref,
    &s_gs1_g7_s1_station_sref,
    &s_gs1_g8_s0_station_sref,
    &s_gs1_g8_s1_station_sref,
    &s_gs1_g9_s0_station_sref,
    &s_gs1_g10_s0_station_sref,
    &s_gs1_g11_s0_station_sref,
    &s_gs1_g12_s0_station_sref,
    &s_gs1_g13_s0_station_sref,
    &s_gs1_g14_s0_station_sref,
    &s_gs1_g15_s0_station_sref,
    &s_gs1_g16_s0_station_sref,
    &s_gs1_g17_s0_station_sref,
    &s_gs1_g18_s0_station_sref,
    &s_gs1_g19_s0_station_sref,
    &s_gs1_g20_s0_station_sref,
    &s_gs1_g21_s0_station_sref,
    &s_gs1_g22_s0_station_sref,
    &s_gs1_g23_s0_station_sref,
    &s_gs1_g24_s0_station_sref,
    &s_gs1_g24_s1_station_sref,
    &s_gs1_g25_s0_station_sref,
    &s_gs1_g26_s0_station_sref,
    &s_gs1_g27_s0_station_sref,
    &s_gs1_g28_s0_station_sref,
    &s_gs1_g29_s0_station_sref,
    &s_gs1_g29_s1_station_sref,
    &s_gs1_g30_s0_station_sref,
    &s_gs1_g30_s1_station_sref,
    &s_gs1_g31_s0_station_sref,
    &s_gs1_g32_s0_station_sref,
    &s_gs1_g33_s0_station_sref,
    &s_gs1_g34_s0_station_sref,
    &s_gs1_g35_s0_station_sref,
    &s_gs1_g36_s0_station_sref,
    &s_gs1_g37_s0_station_sref,
    &s_gs1_g38_s0_station_sref,
    &s_gs1_g38_s1_station_sref,
    &s_gs1_g43_s0_station_sref,
    &s_gs1_g45_s1_station_sref,
    &s_gs1_g46_s0_station_sref,
    &s_gs1_g47_s0_station_sref,
    &s_gs1_g48_s0_station_sref,
    &s_gs1_g49_s0_station_sref,
};

static const struct GroundScriptSector s_gs1_g0_sectors[] = { /* 0x817c2c8 */
    { 0,NULL, LPARRAY(s_gs1_g0_s0_objs), 0,NULL, LPARRAY(s_gs1_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs1_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g0_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g0_s7_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g0_s8_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g1_sectors[] = { /* 0x817c430 */
    { LPARRAY(s_gs1_g1_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs1_g2_sectors[] = { /* 0x817c458 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs1_g3_sectors[] = { /* 0x817c480 */
    { LPARRAY(s_gs1_g3_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g4_sectors[] = { /* 0x817c4a8 */
    { LPARRAY(s_gs1_g4_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g4_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[3], },
    { LPARRAY(s_gs1_g4_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g4_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g4_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g5_sectors[] = { /* 0x817c570 */
    { LPARRAY(s_gs1_g5_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g5_s1_lives), LPARRAY(s_gs1_g5_s1_objs), 0,NULL, 0,NULL, 1,&sStationScripts[4], },
    { LPARRAY(s_gs1_g5_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g5_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g5_s4_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[5], },
    { LPARRAY(s_gs1_g5_s5_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g5_s6_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g6_sectors[] = { /* 0x817c688 */
    { LPARRAY(s_gs1_g6_s0_lives), 0,NULL, LPARRAY(s_gs1_g6_s0_effs), 0,NULL, 1,&sStationScripts[6], },
};

static const struct GroundScriptSector s_gs1_g7_sectors[] = { /* 0x817c6b0 */
    { LPARRAY(s_gs1_g7_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[7], },
    { LPARRAY(s_gs1_g7_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[8], },
};

static const struct GroundScriptSector s_gs1_g8_sectors[] = { /* 0x817c700 */
    { LPARRAY(s_gs1_g8_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[9], },
    { LPARRAY(s_gs1_g8_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[10], },
    { LPARRAY(s_gs1_g8_s2_lives), 0,NULL, 0,NULL, LPARRAY(s_gs1_g8_s2_evts), 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g9_sectors[] = { /* 0x817c778 */
    { LPARRAY(s_gs1_g9_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[11], },
    { LPARRAY(s_gs1_g9_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g10_sectors[] = { /* 0x817c7c8 */
    { LPARRAY(s_gs1_g10_s0_lives), 0,NULL, LPARRAY(s_gs1_g10_s0_effs), 0,NULL, 1,&sStationScripts[12], },
    { LPARRAY(s_gs1_g10_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g10_s2_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g11_sectors[] = { /* 0x817c840 */
    { LPARRAY(s_gs1_g11_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[13], },
};

static const struct GroundScriptSector s_gs1_g12_sectors[] = { /* 0x817c868 */
    { LPARRAY(s_gs1_g12_s0_lives), 0,NULL, LPARRAY(s_gs1_g12_s0_effs), 0,NULL, 1,&sStationScripts[14], },
};

static const struct GroundScriptSector s_gs1_g13_sectors[] = { /* 0x817c890 */
    { LPARRAY(s_gs1_g13_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[15], },
};

static const struct GroundScriptSector s_gs1_g14_sectors[] = { /* 0x817c8b8 */
    { LPARRAY(s_gs1_g14_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[16], },
};

static const struct GroundScriptSector s_gs1_g15_sectors[] = { /* 0x817c8e0 */
    { LPARRAY(s_gs1_g15_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[17], },
};

static const struct GroundScriptSector s_gs1_g16_sectors[] = { /* 0x817c908 */
    { LPARRAY(s_gs1_g16_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs1_g16_s0_evts), 1,&sStationScripts[18], },
};

static const struct GroundScriptSector s_gs1_g17_sectors[] = { /* 0x817c930 */
    { LPARRAY(s_gs1_g17_s0_lives), 0,NULL, LPARRAY(s_gs1_g17_s0_effs), 0,NULL, 1,&sStationScripts[19], },
};

static const struct GroundScriptSector s_gs1_g18_sectors[] = { /* 0x817c958 */
    { LPARRAY(s_gs1_g18_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[20], },
};

static const struct GroundScriptSector s_gs1_g19_sectors[] = { /* 0x817c980 */
    { LPARRAY(s_gs1_g19_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[21], },
};

static const struct GroundScriptSector s_gs1_g20_sectors[] = { /* 0x817c9a8 */
    { LPARRAY(s_gs1_g20_s0_lives), 0,NULL, LPARRAY(s_gs1_g20_s0_effs), 0,NULL, 1,&sStationScripts[22], },
};

static const struct GroundScriptSector s_gs1_g21_sectors[] = { /* 0x817c9d0 */
    { LPARRAY(s_gs1_g21_s0_lives), 0,NULL, LPARRAY(s_gs1_g21_s0_effs), 0,NULL, 1,&sStationScripts[23], },
};

static const struct GroundScriptSector s_gs1_g22_sectors[] = { /* 0x817c9f8 */
    { LPARRAY(s_gs1_g22_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[24], },
};

static const struct GroundScriptSector s_gs1_g23_sectors[] = { /* 0x817ca20 */
    { LPARRAY(s_gs1_g23_s0_lives), 0,NULL, LPARRAY(s_gs1_g23_s0_effs), 0,NULL, 1,&sStationScripts[25], },
    { LPARRAY(s_gs1_g23_s1_lives), 0,NULL, LPARRAY(s_gs1_g23_s1_effs), 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g24_sectors[] = { /* 0x817ca70 */
    { LPARRAY(s_gs1_g24_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[26], },
    { LPARRAY(s_gs1_g24_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[27], },
};

static const struct GroundScriptSector s_gs1_g25_sectors[] = { /* 0x817cac0 */
    { LPARRAY(s_gs1_g25_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[28], },
};

static const struct GroundScriptSector s_gs1_g26_sectors[] = { /* 0x817cae8 */
    { LPARRAY(s_gs1_g26_s0_lives), 0,NULL, LPARRAY(s_gs1_g26_s0_effs), 0,NULL, 1,&sStationScripts[29], },
};

static const struct GroundScriptSector s_gs1_g27_sectors[] = { /* 0x817cb10 */
    { LPARRAY(s_gs1_g27_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[30], },
};

static const struct GroundScriptSector s_gs1_g28_sectors[] = { /* 0x817cb38 */
    { LPARRAY(s_gs1_g28_s0_lives), 0,NULL, LPARRAY(s_gs1_g28_s0_effs), 0,NULL, 1,&sStationScripts[31], },
};

static const struct GroundScriptSector s_gs1_g29_sectors[] = { /* 0x817cb60 */
    { LPARRAY(s_gs1_g29_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[32], },
    { LPARRAY(s_gs1_g29_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[33], },
};

static const struct GroundScriptSector s_gs1_g30_sectors[] = { /* 0x817cbb0 */
    { LPARRAY(s_gs1_g30_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[34], },
    { LPARRAY(s_gs1_g30_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[35], },
};

static const struct GroundScriptSector s_gs1_g31_sectors[] = { /* 0x817cc00 */
    { LPARRAY(s_gs1_g31_s0_lives), 0,NULL, LPARRAY(s_gs1_g31_s0_effs), 0,NULL, 1,&sStationScripts[36], },
};

static const struct GroundScriptSector s_gs1_g32_sectors[] = { /* 0x817cc28 */
    { LPARRAY(s_gs1_g32_s0_lives), 0,NULL, LPARRAY(s_gs1_g32_s0_effs), 0,NULL, 1,&sStationScripts[37], },
};

static const struct GroundScriptSector s_gs1_g33_sectors[] = { /* 0x817cc50 */
    { LPARRAY(s_gs1_g33_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[38], },
};

static const struct GroundScriptSector s_gs1_g34_sectors[] = { /* 0x817cc78 */
    { LPARRAY(s_gs1_g34_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[39], },
};

static const struct GroundScriptSector s_gs1_g35_sectors[] = { /* 0x817cca0 */
    { LPARRAY(s_gs1_g35_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[40], },
};

static const struct GroundScriptSector s_gs1_g36_sectors[] = { /* 0x817ccc8 */
    { LPARRAY(s_gs1_g36_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[41], },
};

static const struct GroundScriptSector s_gs1_g37_sectors[] = { /* 0x817ccf0 */
    { LPARRAY(s_gs1_g37_s0_lives), 0,NULL, LPARRAY(s_gs1_g37_s0_effs), 0,NULL, 1,&sStationScripts[42], },
};

static const struct GroundScriptSector s_gs1_g38_sectors[] = { /* 0x817cd18 */
    { LPARRAY(s_gs1_g38_s0_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[43], },
    { LPARRAY(s_gs1_g38_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[44], },
};

static const struct GroundScriptSector s_gs1_g39_sectors[] = { /* 0x817cd68 */
    { LPARRAY(s_gs1_g39_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g40_sectors[] = { /* 0x817cd90 */
    { LPARRAY(s_gs1_g40_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g41_sectors[] = { /* 0x817cdb8 */
    { LPARRAY(s_gs1_g41_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g42_sectors[] = { /* 0x817cde0 */
    { LPARRAY(s_gs1_g42_s0_lives), 0,NULL, 0,NULL, LPARRAY(s_gs1_g42_s0_evts), 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g43_sectors[] = { /* 0x817ce08 */
    { LPARRAY(s_gs1_g43_s0_lives), 0,NULL, LPARRAY(s_gs1_g43_s0_effs), 0,NULL, 1,&sStationScripts[45], },
};

static const struct GroundScriptSector s_gs1_g44_sectors[] = { /* 0x817ce30 */
    { LPARRAY(s_gs1_g44_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g45_sectors[] = { /* 0x817ce58 */
    { LPARRAY(s_gs1_g45_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs1_g45_s1_lives), 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[46], },
};

static const struct GroundScriptSector s_gs1_g46_sectors[] = { /* 0x817cea8 */
    { LPARRAY(s_gs1_g46_s0_lives), 0,NULL, LPARRAY(s_gs1_g46_s0_effs), 0,NULL, 1,&sStationScripts[47], },
};

static const struct GroundScriptSector s_gs1_g47_sectors[] = { /* 0x817ced0 */
    { LPARRAY(s_gs1_g47_s0_lives), 0,NULL, LPARRAY(s_gs1_g47_s0_effs), 0,NULL, 1,&sStationScripts[48], },
};

static const struct GroundScriptSector s_gs1_g48_sectors[] = { /* 0x817cef8 */
    { LPARRAY(s_gs1_g48_s0_lives), 0,NULL, LPARRAY(s_gs1_g48_s0_effs), 0,NULL, 1,&sStationScripts[49], },
};

static const struct GroundScriptSector s_gs1_g49_sectors[] = { /* 0x817cf20 */
    { LPARRAY(s_gs1_g49_s0_lives), 0,NULL, LPARRAY(s_gs1_g49_s0_effs), 0,NULL, 1,&sStationScripts[50], },
};

static const struct GroundScriptSector s_gs1_g50_sectors[] = { /* 0x817cf48 */
    { LPARRAY(s_gs1_g50_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g51_sectors[] = { /* 0x817cf70 */
    { LPARRAY(s_gs1_g51_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs1_g52_sectors[] = { /* 0x817cf98 */
    { LPARRAY(s_gs1_g52_s0_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs1_groups[] = { /* 0x817cfc0 */
    { LPARRAY(s_gs1_g0_sectors) },
    { LPARRAY(s_gs1_g1_sectors) },
    { LPARRAY(s_gs1_g2_sectors) },
    { LPARRAY(s_gs1_g3_sectors) },
    { LPARRAY(s_gs1_g4_sectors) },
    { LPARRAY(s_gs1_g5_sectors) },
    { LPARRAY(s_gs1_g6_sectors) },
    { LPARRAY(s_gs1_g7_sectors) },
    { LPARRAY(s_gs1_g8_sectors) },
    { LPARRAY(s_gs1_g9_sectors) },
    { LPARRAY(s_gs1_g10_sectors) },
    { LPARRAY(s_gs1_g11_sectors) },
    { LPARRAY(s_gs1_g12_sectors) },
    { LPARRAY(s_gs1_g13_sectors) },
    { LPARRAY(s_gs1_g14_sectors) },
    { LPARRAY(s_gs1_g15_sectors) },
    { LPARRAY(s_gs1_g16_sectors) },
    { LPARRAY(s_gs1_g17_sectors) },
    { LPARRAY(s_gs1_g18_sectors) },
    { LPARRAY(s_gs1_g19_sectors) },
    { LPARRAY(s_gs1_g20_sectors) },
    { LPARRAY(s_gs1_g21_sectors) },
    { LPARRAY(s_gs1_g22_sectors) },
    { LPARRAY(s_gs1_g23_sectors) },
    { LPARRAY(s_gs1_g24_sectors) },
    { LPARRAY(s_gs1_g25_sectors) },
    { LPARRAY(s_gs1_g26_sectors) },
    { LPARRAY(s_gs1_g27_sectors) },
    { LPARRAY(s_gs1_g28_sectors) },
    { LPARRAY(s_gs1_g29_sectors) },
    { LPARRAY(s_gs1_g30_sectors) },
    { LPARRAY(s_gs1_g31_sectors) },
    { LPARRAY(s_gs1_g32_sectors) },
    { LPARRAY(s_gs1_g33_sectors) },
    { LPARRAY(s_gs1_g34_sectors) },
    { LPARRAY(s_gs1_g35_sectors) },
    { LPARRAY(s_gs1_g36_sectors) },
    { LPARRAY(s_gs1_g37_sectors) },
    { LPARRAY(s_gs1_g38_sectors) },
    { LPARRAY(s_gs1_g39_sectors) },
    { LPARRAY(s_gs1_g40_sectors) },
    { LPARRAY(s_gs1_g41_sectors) },
    { LPARRAY(s_gs1_g42_sectors) },
    { LPARRAY(s_gs1_g43_sectors) },
    { LPARRAY(s_gs1_g44_sectors) },
    { LPARRAY(s_gs1_g45_sectors) },
    { LPARRAY(s_gs1_g46_sectors) },
    { LPARRAY(s_gs1_g47_sectors) },
    { LPARRAY(s_gs1_g48_sectors) },
    { LPARRAY(s_gs1_g49_sectors) },
    { LPARRAY(s_gs1_g50_sectors) },
    { LPARRAY(s_gs1_g51_sectors) },
    { LPARRAY(s_gs1_g52_sectors) },
};

static const struct GroundLink s_gs1_links[] = { /* 0x817d168 */
    /* link   0 */ { { /*x*/  90, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  30, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/   2, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/ 117, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   4 */ { { /*x*/  70, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   5 */ { { /*x*/  59, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   6 */ { { /*x*/   2, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   7 */ { { /*x*/  12, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   8 */ { { /*x*/  14, /*y*/  39, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   9 */ { { /*x*/  37, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  10 */ { { /*x*/  82, /*y*/  34, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  11 */ { { /*x*/  82, /*y*/  61, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  12 */ { { /*x*/  41, /*y*/  61, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  13 */ { { /*x*/  14, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  14 */ { { /*x*/  56, /*y*/  42, /*flags*/ 0, 0 }, /*w*/ 12, /*h*/  7, /*ret*/ 3, /*?*/ 2 },
    /* link  15 */ { { /*x*/  56, /*y*/  30, /*flags*/ 0, 0 }, /*w*/ 12, /*h*/  9, /*ret*/ 3, /*?*/ 2 },
    /* link  16 */ { { /*x*/  68, /*y*/  33, /*flags*/ 0, 0 }, /*w*/  8, /*h*/ 13, /*ret*/ 3, /*?*/ 2 },
    /* link  17 */ { { /*x*/  56, /*y*/  42, /*flags*/ 0, 0 }, /*w*/ 12, /*h*/  7, /*ret*/ 3, /*?*/ 2 },
    /* link  18 */ { { /*x*/  97, /*y*/  37, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  19 */ { { /*x*/  97, /*y*/  39, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  20 */ { { /*x*/  93, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  21 */ { { /*x*/  93, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  22 */ { { /*x*/  76, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  23 */ { { /*x*/  76, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  24 */ { { /*x*/  65, /*y*/  23, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  25 */ { { /*x*/  62, /*y*/  23, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  26 */ { { /*x*/  58, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  27 */ { { /*x*/  83, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  28 */ { { /*x*/ 101, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  29 */ { { /*x*/  56, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  30 */ { { /*x*/  86, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  31 */ { { /*x*/  98, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  32 */ { { /*x*/  56, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  33 */ { { /*x*/  86, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  34 */ { { /*x*/  99, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  35 */ { { /*x*/  49, /*y*/  65, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  36 */ { { /*x*/  56, /*y*/  42, /*flags*/ 0, 0 }, /*w*/ 12, /*h*/  7, /*ret*/ 3, /*?*/ 2 },
    /* link  37 */ { { /*x*/  56, /*y*/  41, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  8, /*ret*/ 3, /*?*/ 2 },
    /* link  38 */ { { /*x*/  67, /*y*/  33, /*flags*/ 0, 0 }, /*w*/ 12, /*h*/ 13, /*ret*/ 3, /*?*/ 2 },
    /* link  39 */ { { /*x*/  56, /*y*/  41, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  8, /*ret*/ 3, /*?*/ 2 },
    /* link  40 */ { { /*x*/  67, /*y*/  33, /*flags*/ 0, 0 }, /*w*/ 12, /*h*/ 13, /*ret*/ 3, /*?*/ 2 },
    /* link  41 */ { { /*x*/  68, /*y*/  33, /*flags*/ 0, 0 }, /*w*/  8, /*h*/ 13, /*ret*/ 3, /*?*/ 2 },
    /* link  42 */ { { /*x*/  56, /*y*/  42, /*flags*/ 0, 0 }, /*w*/ 12, /*h*/  7, /*ret*/ 3, /*?*/ 2 },
    /* link  43 */ { { /*x*/  58, /*y*/  37, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  44 */ { { /*x*/  58, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  45 */ { { /*x*/  56, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  46 */ { { /*x*/  94, /*y*/  20, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  47 */ { { /*x*/  94, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  48 */ { { /*x*/  35, /*y*/  62, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  49 */ { { /*x*/  87, /*y*/  62, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  50 */ { { /*x*/  26, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  51 */ { { /*x*/  65, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  52 */ { { /*x*/  65, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  53 */ { { /*x*/  61, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  54 */ { { /*x*/  59, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  55 */ { { /*x*/  59, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  56 */ { { /*x*/  60, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  57 */ { { /*x*/  65, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  58 */ { { /*x*/  61, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  59 */ { { /*x*/  51, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  60 */ { { /*x*/  57, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  61 */ { { /*x*/  51, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  62 */ { { /*x*/  57, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  63 */ { { /*x*/  50, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  64 */ { { /*x*/  60, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  65 */ { { /*x*/  50, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  66 */ { { /*x*/  60, /*y*/  42, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  67 */ { { /*x*/  47, /*y*/  41, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  68 */ { { /*x*/  56, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  69 */ { { /*x*/  63, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  70 */ { { /*x*/  63, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  71 */ { { /*x*/  66, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  72 */ { { /*x*/  66, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  73 */ { { /*x*/  60, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  74 */ { { /*x*/  59, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  75 */ { { /*x*/  65, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  76 */ { { /*x*/  39, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link  77 */ { { /*x*/  55, /*y*/  29, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  9, /*ret*/ 3, /*?*/ 2 },
    /* link  78 */ { { /*x*/  56, /*y*/  41, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  8, /*ret*/ 3, /*?*/ 2 },
    /* link  79 */ { { /*x*/  68, /*y*/  33, /*flags*/ 0, 0 }, /*w*/ 10, /*h*/ 13, /*ret*/ 3, /*?*/ 2 },
    /* link  80 */ { { /*x*/  55, /*y*/  29, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  9, /*ret*/ 3, /*?*/ 2 },
    /* link  81 */ { { /*x*/  56, /*y*/  41, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  8, /*ret*/ 3, /*?*/ 2 },
    /* link  82 */ { { /*x*/  68, /*y*/  33, /*flags*/ 0, 0 }, /*w*/ 10, /*h*/ 13, /*ret*/ 3, /*?*/ 2 },
    /* link  83 */ { { /*x*/  57, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  84 */ { { /*x*/  57, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  85 */ { { /*x*/  60, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  86 */ { { /*x*/  54, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  87 */ { { /*x*/  57, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  88 */ { { /*x*/  57, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  89 */ { { /*x*/  57, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  90 */ { { /*x*/  72, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  91 */ { { /*x*/  35, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  92 */ { { /*x*/  72, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  93 */ { { /*x*/  72, /*y*/  43, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  94 */ { { /*x*/  67, /*y*/  45, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  95 */ { { /*x*/  59, /*y*/  46, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link  96 */ { { /*x*/  55, /*y*/  29, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  9, /*ret*/ 3, /*?*/ 2 },
    /* link  97 */ { { /*x*/  56, /*y*/  41, /*flags*/ 0, 0 }, /*w*/ 11, /*h*/  8, /*ret*/ 3, /*?*/ 2 },
    /* link  98 */ { { /*x*/  68, /*y*/  33, /*flags*/ 0, 0 }, /*w*/ 10, /*h*/ 13, /*ret*/ 3, /*?*/ 2 },
    /* link  99 */ { { /*x*/  53, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 100 */ { { /*x*/  67, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 101 */ { { /*x*/  53, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 102 */ { { /*x*/  64, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 103 */ { { /*x*/  67, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 104 */ { { /*x*/  64, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 105 */ { { /*x*/  64, /*y*/  38, /*flags*/ CPOS_CURRENT, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 106 */ { { /*x*/  64, /*y*/  21, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 107 */ { { /*x*/  62, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 108 */ { { /*x*/  58, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 109 */ { { /*x*/  60, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 110 */ { { /*x*/  62, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 111 */ { { /*x*/  65, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 112 */ { { /*x*/  65, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 113 */ { { /*x*/  62, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 114 */ { { /*x*/  70, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 115 */ { { /*x*/  65, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 116 */ { { /*x*/  63, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 117 */ { { /*x*/  63, /*y*/  39, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 118 */ { { /*x*/  59, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 119 */ { { /*x*/  58, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 120 */ { { /*x*/  58, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 121 */ { { /*x*/  68, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 122 */ { { /*x*/  70, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 123 */ { { /*x*/  67, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 124 */ { { /*x*/  72, /*y*/  37, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 125 */ { { /*x*/  72, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 126 */ { { /*x*/  70, /*y*/  42, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 127 */ { { /*x*/  66, /*y*/  34, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 128 */ { { /*x*/  62, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 129 */ { { /*x*/  63, /*y*/  32, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 130 */ { { /*x*/  58, /*y*/  34, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 131 */ { { /*x*/  70, /*y*/  33, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 132 */ { { /*x*/  60, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 133 */ { { /*x*/  65, /*y*/  46, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 134 */ { { /*x*/  71, /*y*/  45, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 135 */ { { /*x*/  59, /*y*/  34, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 136 */ { { /*x*/  65, /*y*/  20, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link 137 */ { { /*x*/  59, /*y*/  40, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 138 */ { { /*x*/  59, /*y*/  35, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 139 */ { { /*x*/  59, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 140 */ { { /*x*/  67, /*y*/  44, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 141 */ { { /*x*/  67, /*y*/  59, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 142 */ { { /*x*/  56, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 143 */ { { /*x*/  57, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 144 */ { { /*x*/  60, /*y*/  41, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link 145 */ { { /*x*/  60, /*y*/  38, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs1 = { LPARRAY(s_gs1_groups), s_gs1_links }; /* 0x817d5f8 */
