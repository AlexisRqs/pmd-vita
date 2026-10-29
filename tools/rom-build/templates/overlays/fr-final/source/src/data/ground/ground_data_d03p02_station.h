












static const struct ScriptCommand s_gs183_g0_s0_station_sref_script[] = { /* 0x8233258 */
    DEBUGINFO_O(15),
    SELECT_MAP(183),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs183_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs183_g0_s0_station_sref_script }; /* 0x82332c4 */

static const struct ScriptCommand s_gs183_g1_s0_station_sref_script[] = { /* 0x82332d0 */
    DEBUGINFO_O(24),
    SELECT_MAP(183),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    WAIT(30),
    RET,
};

static const ScriptRef s_gs183_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs183_g1_s0_station_sref_script }; /* 0x8233350 */

static const struct ScriptCommand s_gs183_g1_s0_eff0_script[] = { /* 0x823335c */
    DEBUGINFO_O(37),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x1c,  0x0100,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs183_g1_s0_lives0_dlg0[] = { /* 0x82333ec */
    DEBUGINFO_O(49),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:30e9714d5d5180bb5c76b2b625dc0904120587792128b9e3e0311250d410a05c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    AWAIT_CUE(5),
    WAIT(90),
    ALERT_CUE(4),
    ALERT_CUE(6),
    WAIT(5),
    WALK_RELATIVE(256, 0, -24),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fbddcdb44b2f1305d41b94f6c7d2cd816097f00969360ebbcd18fb55f46e1670@@)),
    VARIANT(/* == */  1, (@@STRING:195645e4cd1aa91e1a572a0bea024b03fa2e9ca805132950ec213b1de464704b@@)),
    VARIANT_DEFAULT((@@STRING:879d3029a3190fcf52a5bb85f57521bbc73e70710a19f5151660df5e6adf3b86@@)),
    VARIANT_DEFAULT((@@STRING:74e4fd2d01952ee5038f7a88e75e01e522f64495288eea3c7cd82207cacdeefd@@)),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000041),
    MSG_NPC(2, (@@STRING:ba4457010317b2bb691727dfe673a589a5eeb3e32a1ba5eae1212e06a14eb309@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:dbd16043d7c9f3e1c7da4fa67a789fa751a56b979305c980d7df3503267bac67@@)),
    VARIANT_DEFAULT((@@STRING:12228570010681a375d7f3a9fd0ce723fc73160d23a5041c835dc79bb6e993c4@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:b06ebbd86175364b534b040302d588c7b39e738ecb55bf83fe397306dbf1f226@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9e08fa6655477985ef2ccc0a3aebb1155cb9ce3afd251820ffece0a300b61d76@@)),
    VARIANT_DEFAULT((@@STRING:12cc30a3a4788f483f8aa2c5e8ca74f149fb4d9be79908890d22ffc5512fc5ed@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:5fb88722c17f9e34aceac05a73e568bc46b8cf7b17dc340b190087787829671f@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0004, 0x00000000),
    MSG_NPC(-1, (@@STRING:3ec8448028232f3050161761fb9aef3c2108bf9e8c1cd401acbabbd04e196b4d@@)),
    ALERT_CUE(6),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:9bb5c3086bd67a0dc8e781fea0bba35770bbab8af83c27c153c4ebc6b5314d2a@@)),
    VARIANT_DEFAULT((@@STRING:5d176d7b4f9ecb39608f2dd3496857819ab241b7bbe4b86dfb74e304919c2abe@@)),
    TEXTBOX_CLEAR,
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, 2, 0),
    MSG_NPC(4, (@@STRING:6e3f3005bef9ba7ef0377201a43ee5deacb5870549138f9d857889ef666e57e6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:c55cda75491ee244ab38c406e30cd5f81f49f30ad5656c6b78439adc55ce1911@@)),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0004, 0x00000000),
    PORTRAIT_POS(4, -2, 0),
    MSG_NPC(4, (@@STRING:bd2887ef5762c9ff7c0fbabd2f2340fde54a1ac35b1d9473a65dd292c0f578be@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};








static const struct ScriptCommand s_gs183_g1_s0_lives1_dlg0[] = { /* 0x8233bec */
    DEBUGINFO_O(137),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 0, -24),
    AWAIT_CUE(6),
    WALK_GRID(128, 0),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    { 0x62, 0x00,  0x0080,  0x00000000,  0x00000008, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(128, 0, -8),
    SELECT_ANIMATION(40),
    FANFARE_PLAY2(463),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs183_g1_s0_lives2_dlg0[] = { /* 0x8233d8c */
    DEBUGINFO_O(166),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(9),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs183_g1_s0_lives3_dlg0[] = { /* 0x8233e3c */
    DEBUGINFO_O(180),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    FANFARE_PLAY2(459),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000045,  0x00000000, NULL },
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs183_g1_s1_lives0_dlg0[] = { /* 0x8233eec */
    DEBUGINFO_O(194),
    WARP_WAYPOINT(0, 2),
    { 0x60, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(483),
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    WALK_GRID(128, 4),
    CMD_UNK_93(4, DIR_TRANS_10, 68),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x52, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    WALK_RELATIVE(76, 0, -16),
    CMD_UNK_93(4, DIR_TRANS_10, 68),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs183_g1_s1_lives1_dlg0[] = { /* 0x823405c */
    DEBUGINFO_O(220),
    WARP_WAYPOINT(0, 1),
    { 0x60, 0x00,  0x0000,  0x0000005a,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x70, 0x00,  0x0200,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(8),
    WALK_GRID(128, 3),
    CMD_UNK_93(4, DIR_TRANS_10, 68),
    AWAIT_CUE(8),
    { 0x52, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    WALK_RELATIVE(76, 0, -16),
    CMD_UNK_93(4, DIR_TRANS_10, 68),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs183_g1_s0_lives[] = { /* 0x823418c */
    /*  0 */ {   0,   4,   0,   0, {  26,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs183_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  30,  41, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs183_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  68,   0,   0,   0, {  28,  26, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs183_g1_s0_lives2_dlg0,
    } },
    /*  3 */ {  69,   0,   0,   0, {  28,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs183_g1_s0_lives3_dlg0,
    } },
};

static const struct GroundLivesData s_gs183_g1_s1_lives[] = { /* 0x82341ec */
    /*  0 */ {  61,   0,   0,   0, {  27,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs183_g1_s1_lives0_dlg0,
    } },
    /*  1 */ {  62,   0,   0,   0, {  30,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs183_g1_s1_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs183_g1_s0_effs[] = { /* 0x823421c */
    /*  0 */ {   0,   0,   1,   1, {  28,  39, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs183_g1_s0_eff0_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8234228 */
    &s_gs183_g0_s0_station_sref,
    &s_gs183_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs183_g0_sectors[] = { /* 0x8234230 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs183_g1_sectors[] = { /* 0x8234258 */
    { LPARRAY(s_gs183_g1_s0_lives), 0,NULL, LPARRAY(s_gs183_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs183_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs183_groups[] = { /* 0x82342a8 */
    { LPARRAY(s_gs183_g0_sectors) },
    { LPARRAY(s_gs183_g1_sectors) },
};

static const struct GroundLink s_gs183_links[] = { /* 0x82342b8 */
    /* link   0 */ { { /*x*/  29, /*y*/  36, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  30, /*y*/  32, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   2 */ { { /*x*/  27, /*y*/  32, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   3 */ { { /*x*/  31, /*y*/  28, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   4 */ { { /*x*/  26, /*y*/  28, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs183 = { LPARRAY(s_gs183_groups), s_gs183_links }; /* 0x82342e0 */
