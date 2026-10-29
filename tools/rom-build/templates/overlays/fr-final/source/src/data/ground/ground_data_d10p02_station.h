







static const struct ScriptCommand s_gs199_g0_s0_station_sref_script[] = { /* 0x824e714 */
    DEBUGINFO_O(10),
    SELECT_MAP(MAP_FROSTY_FOREST_MID),
    CJUMP_SCENARIO_0(SCENARIO_MAIN),
    COND(JUDGE_EQ, 13, /* to label */ 0),
    COND(JUDGE_GT, 17, /* to label */ 1),
    JUMP_LABEL(2),
  LABEL(0), /* = 0x00 */
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    JUMP_LABEL(2),
  LABEL(1), /* = 0x01 */
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 0),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    JUMP_LABEL(2),
  LABEL(2), /* = 0x02 */
    JUMPIF_EQUAL(START_MODE, STARTMODE_CONTINUE_GAME, /* to label */ 3),
    JUMPIF_EQUAL(START_MODE, STARTMODE_3, /* to label */ 4),
    JUMPIF_EQUAL(START_MODE, STARTMODE_GROUND, /* to label */ 5),
    JUMPIF_EQUAL(START_MODE, STARTMODE_DUNGEON_WON, /* to label */ 5),
    JUMP_LABEL(3),
  LABEL(5), /* = 0x05 */
    CJUMP_VAR(GROUND_GETOUT),
    COND_EQUAL(1, /* to label */ 6),
    JUMP_LABEL(6),
  LABEL(3), /* = 0x03 */
    SELECT_LIVES(0, 3),
    JUMP_LABEL(7),
  LABEL(4), /* = 0x04 */
    SELECT_LIVES(0, 4),
    JUMP_LABEL(7),
  LABEL(6), /* = 0x06 */
    SELECT_LIVES(0, 1),
    JUMP_LABEL(7),
  LABEL(7), /* = 0x07 */
    BGM_SWITCH(MUS_FROSTY_FOREST),
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs199_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs199_g0_s0_station_sref_script }; /* 0x824e980 */

static const struct ScriptCommand s_gs199_g0_s0_evt0_sref_script[] = { /* 0x824e98c */
    DEBUGINFO_O(51),
    ASK1(FALSE, /*default*/ 0, /* speaker */ -1, (@@STRING:6002c00e31fa0c315e66d9b6c6cf3e325359e833692ece879c90a552911b55e3@@)),
    CHOICE(/* label */  0, (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@)),
    CHOICE(/* label */  1, (@@STRING:c45a0ef176cec279ebab66e5bced078af4a24adb4836b83e3999337971467ea1@@)),
  LABEL(1), /* = 0x01 */
    JUMP_SCRIPT(END_TALK),
  LABEL(0), /* = 0x00 */
    TEXTBOX_CLEAR,
    BGM_FADEOUT(60),
    NEXT_DUNGEON(30, SCRIPT_DUNGEON_FROSTY_GROTTO),
    COND_EQUAL(-1, /* to label */ 1),
    HALT,
};

static const ScriptRef s_gs199_g0_s0_evt0_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs199_g0_s0_evt0_sref_script }; /* 0x824ea68 */

static const struct ScriptCommand s_gs199_g0_s0_evt1_sref_script[] = { /* 0x824ea74 */
    DEBUGINFO_O(68),
    JUMPIF_SCENARIOCHECK(QUEST_UNK5, /* to label */ 0),
    ASK1(FALSE, /*default*/ 0, /* speaker */ -1, (@@STRING:915479f315ae4edeb999eb1c6ec20885343b09028c3e1548d038eaa8f99dec8a@@)),
    CHOICE(/* label */  1, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  2, (@@STRING:c45a0ef176cec279ebab66e5bced078af4a24adb4836b83e3999337971467ea1@@)),
  LABEL(2), /* = 0x02 */
    JUMP_SCRIPT(END_TALK),
  LABEL(1), /* = 0x01 */
    TEXTBOX_CLEAR,
    BGM_FADEOUT(30),
    { 0x23, 0x01, -0x0001,  0x00000000,  0x00000000, NULL },
    CALL_SCRIPT(DISMISSAL_SALLY_MEMBER4_FUNC),
    SET_DUNGEON_RES(/* result */ 10, /* enter */ -1),
    EXECUTE_STATION(MAP_TEAM_BASE_INSIDE, 4, 0),
    HALT,
  LABEL(0), /* = 0x00 */
    ASK1(FALSE, /*default*/ 0, /* speaker */ -1, (@@STRING:eea42cc8b3a23b4f9003c1d9bc76399a67ffa9b17965705399ff3b96bb32e209@@)),
    CHOICE(/* label */  3, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  4, (@@STRING:c45a0ef176cec279ebab66e5bced078af4a24adb4836b83e3999337971467ea1@@)),
  LABEL(4), /* = 0x04 */
    JUMP_SCRIPT(END_TALK),
  LABEL(3), /* = 0x03 */
    TEXTBOX_CLEAR,
    { 0x01, 0x00,  0x001e,  0x000000c6,  0x00000000, NULL },
    HALT,
};

static const ScriptRef s_gs199_g0_s0_evt1_sref = { GETOUT_NORMAL, SCRIPT_TYPE_02, NULL, s_gs199_g0_s0_evt1_sref_script }; /* 0x824ec3c */

static const struct ScriptCommand s_gs199_g0_s0_obj0_dlg2[] = { /* 0x824ec48 */
    DEBUGINFO_O(98),
    JUMP_SCRIPT(SAVE_POINT),
};

static const struct ScriptCommand s_gs199_g0_s1_lives0_dlg0[] = { /* 0x824ec68 */
    DEBUGINFO_O(103),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s1_lives1_dlg0[] = { /* 0x824eca8 */
    DEBUGINFO_O(110),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s3_lives0_dlg0[] = { /* 0x824ece8 */
    DEBUGINFO_O(117),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s3_lives1_dlg0[] = { /* 0x824ed28 */
    DEBUGINFO_O(124),
    SELECT_ANIMATION(2),
    CALL_SCRIPT(WAIT_START_FUNC),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s4_lives0_dlg0[] = { /* 0x824ed68 */
    DEBUGINFO_O(131),
    CALL_SCRIPT(LIVES_WARP_ARRIVE_FUNC),
    RET,
};

static const struct ScriptCommand s_gs199_g0_s4_lives1_dlg0[] = { /* 0x824ed98 */
    DEBUGINFO_O(137),
    CALL_SCRIPT(LIVES_WARP_ARRIVE2_FUNC),
    RET,
};

static const struct ScriptCommand s_gs199_g1_s0_station_sref_script[] = { /* 0x824edc8 */
    DEBUGINFO_O(143),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_FROSTY_FOREST_MID),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_FROSTY_FOREST_MID),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_FROSTY_FOREST_MID),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_FROSTY_FOREST),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs199_g1_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs199_g1_s0_station_sref_script }; /* 0x824ee98 */

static const struct ScriptCommand s_gs199_g1_s0_lives0_dlg0[] = { /* 0x824eea4 */
    DEBUGINFO_O(161),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    AWAIT_CUE(5),
    { 0x2d, 0x09,  0x0002,  0x00000066,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fe902f4d4e1f035df3014e2047ded366a7c22f8e02dd304af919fb57eb21bd90@@)),
    VARIANT_DEFAULT((@@STRING:454f5a19151b218f3361e729c474b25a7895199b8729b080bcea24a7edf52f7e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2b6f0dd4d3ccc68dc57bc458ee9dfb2411509f67b74a6a4301bd1bc5b509e445@@)),
    VARIANT_DEFAULT((@@STRING:d191ad8274e4e25823fed5a4408929a279e0446b9c0183cb48a93e8ef6f5fb40@@)),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:78721b0017c17a186894d3b4df4ca1b44b24fbb7792bb54fb0f6cc3407ea1e98@@)),
    VARIANT_DEFAULT((@@STRING:5c9404e349b5d73010f28765390855cc1255b1d34d94cfe37bdc75b69eed60f6@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs199_g1_s0_lives1_dlg0[] = { /* 0x824f190 */
    DEBUGINFO_O(195),
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
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct ScriptCommand s_gs199_g2_s0_station_sref_script[] = { /* 0x824f260 */
    DEBUGINFO_O(211),
    SET_DUNGEON_RES(/* result */ 0, /* enter */ -1),
    UPDATE_VARINT(CALC_SET, GROUND_ENTER, MAP_FROSTY_FOREST_MID),
    UPDATE_VARINT(CALC_SET, GROUND_GETOUT, MAP_FROSTY_FOREST_MID),
    UPDATE_VARINT(CALC_SET, PARTNER1_KIND, 2),
    UPDATE_VARINT(CALC_SET, PARTNER2_KIND, 0),
    SELECT_MAP(MAP_FROSTY_FOREST_MID),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_FROSTY_FOREST),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    SELECT_EVENTS(0, 0),
    RET,
};

static const ScriptRef s_gs199_g2_s0_station_sref = { EVENT_STATION, SCRIPT_TYPE_07, NULL, s_gs199_g2_s0_station_sref_script }; /* 0x824f330 */

static const struct ScriptCommand s_gs199_g2_s0_lives0_dlg0[] = { /* 0x824f33c */
    DEBUGINFO_O(229),
    CALL_SCRIPT(INIT_SLEEP_FUNC),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CALL_SCRIPT(WAKEUP_FUNC),
    CALL_SCRIPT(LOOK_AROUND_LEFT_FUNC),
    AWAIT_CUE(5),
    { 0x2d, 0x09,  0x0002,  0x00000066,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f1dd8af2f8d7ee6920cba17966f312da37a49a74f70988a67de03665a3ae6168@@)),
    VARIANT_DEFAULT((@@STRING:a59161d65f1b1018bb98df36aac37a2def613c91f8ff11c6972cac95b89d2fe1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f437d8b6b2c9a528844af537e300718c515121a7c2758a00d812817ddf495896@@)),
    VARIANT(/* == */  1, (@@STRING:f505e5a9d24c3da639049d97be5dd4b47ec262296afb605308a211beda69d401@@)),
    VARIANT(/* == */  1, (@@STRING:f924012563be5a743b2814d6feded92de5fbedc35a21900448a1701bd67df6e3@@)),
    VARIANT_DEFAULT((@@STRING:0fa0ac7fbd361ea1b70d946434f5a45d98fc20f49cd438a4c5bf34ca6ff1fadf@@)),
    VARIANT_DEFAULT((@@STRING:f95c4d0bd19e0e3a32ebe67b0d4f549ac0df107ac200a71bfa529a8a5fa6795f@@)),
    VARIANT_DEFAULT((@@STRING:d15734b2794aad0d14f8526518de097a062b341980b91a186ece2f76de29b879@@)),
    TEXTBOX_CLEAR,
    { 0x9b, 0x00,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    ALERT_CUE(6),
    RET,
};


static const struct ScriptCommand s_gs199_g2_s0_lives1_dlg0[] = { /* 0x824f6ac */
    DEBUGINFO_O(263),
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
    { 0x52, 0x00,  0x0000,  0x00001000,  0x00000000, NULL },
    RET,
};

static const struct GroundLivesData s_gs199_g0_s0_lives[] = { /* 0x824f77c */
    /*  0 */ { 145,   0,   0,   0, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {} },
};

static const struct GroundLivesData s_gs199_g0_s1_lives[] = { /* 0x824f794 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s1_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s1_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g0_s3_lives[] = { /* 0x824f7c4 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s3_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s3_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g0_s4_lives[] = { /* 0x824f7f4 */
    /*  0 */ {   0,   4,   0,   0, {  28,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s4_lives0_dlg0,
    } },
    /*  1 */ {   4,   4,   0,   0, {  28,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs199_g0_s4_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g1_s0_lives[] = { /* 0x824f824 */
    /*  0 */ {   0,   0,   0,   0, {  31,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  26,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs199_g2_s0_lives[] = { /* 0x824f854 */
    /*  0 */ {   0,   0,   0,   0, {  31,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {   4,   0,   0,   0, {  26,  38, 0, CPOS_HALFTILE }, {
        [0] = s_gs199_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundObjectData s_gs199_g0_s0_objs[] = { /* 0x824f884 */
    /*  0 */ {   4,   0,   4,   3, {  28,  28, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [2] = s_gs199_g0_s0_obj0_dlg2,
    } },
};

static const struct GroundEffectData s_gs199_g1_s0_effs[] = { /* 0x824f89c */
    /*  0 */ {   0,   0,   1,   1, {  28,  37, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs199_g2_s0_effs[] = { /* 0x824f8a8 */
    /*  0 */ {   0,   0,   1,   1, {  28,  37, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEventData s_gs199_g0_s0_evts[] = { /* 0x824f8b4 */
    /*  0 */ {  15,   3,   0,   0, {  21,  12, 0, 0 }, &s_gs199_g0_s0_evt0_sref },
    /*  1 */ {  15,   3,   0,   0, {  21,  42, 0, 0 }, &s_gs199_g0_s0_evt1_sref },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x824f8cc */
    &s_gs199_g0_s0_station_sref,
    &s_gs199_g1_s0_station_sref,
    &s_gs199_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs199_g0_sectors[] = { /* 0x824f8d8 */
    { LPARRAY(s_gs199_g0_s0_lives), LPARRAY(s_gs199_g0_s0_objs), 0,NULL, LPARRAY(s_gs199_g0_s0_evts), 1,&sStationScripts[0], },
    { LPARRAY(s_gs199_g0_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs199_g0_s3_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
    { LPARRAY(s_gs199_g0_s4_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs199_g1_sectors[] = { /* 0x824f9a0 */
    { LPARRAY(s_gs199_g1_s0_lives), 0,NULL, LPARRAY(s_gs199_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs199_g2_sectors[] = { /* 0x824f9c8 */
    { LPARRAY(s_gs199_g2_s0_lives), 0,NULL, LPARRAY(s_gs199_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs199_groups[] = { /* 0x824f9f0 */
    { LPARRAY(s_gs199_g0_sectors) },
    { LPARRAY(s_gs199_g1_sectors) },
    { LPARRAY(s_gs199_g2_sectors) },
};

static const struct GroundLink s_gs199_links[] = { /* 0x824fa08 */
    {},
};

const GroundScriptHeader gGroundScript_gs199 = { LPARRAY(s_gs199_groups), s_gs199_links }; /* 0x824fa10 */
