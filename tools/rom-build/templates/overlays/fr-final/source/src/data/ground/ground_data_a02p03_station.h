









static const struct ScriptCommand s_gs166_g0_s0_station_sref_script[] = { /* 0x8218bbc */
    DEBUGINFO_O(12),
    SELECT_MAP(166),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs166_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs166_g0_s0_station_sref_script }; /* 0x8218c28 */

static const struct ScriptCommand s_gs166_g1_s0_station_sref_script[] = { /* 0x8218c34 */
    DEBUGINFO_O(21),
    SELECT_MAP(166),
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs166_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs166_g1_s0_station_sref_script }; /* 0x8218ca4 */

static const struct ScriptCommand s_gs166_g1_s0_lives0_dlg0[] = { /* 0x8218cb0 */
    DEBUGINFO_O(33),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    WALK_GRID(512, 0),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    BGM_FADEOUT(60),
    WAIT(20),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_NPC(1, (@@STRING:1dcbc6435877c41cb7403058901e94c96992b9076e0270ff08225c0dc3f654c0@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:0e471082665c6a3f6ea7c68904c678a5d1996b2060ef56aa8105dce717f633ed@@)),
    TEXTBOX_CLEAR,
    BGM_SWITCH(MUS_THE_MOUNTAIN_OF_FIRE),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_EAST),
    WAIT(20),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs166_g1_s0_lives1_dlg0[] = { /* 0x8218e38 */
    DEBUGINFO_O(59),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_GRID(512, 1),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_WEST),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    WAIT(20),
    FANFARE_PLAY2(455),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    HALT,
};

static const struct ScriptCommand s_gs166_g2_s0_station_sref_script[] = { /* 0x8218f08 */
    DEBUGINFO_O(75),
    SELECT_MAP(166),
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    MSG_NPC(-1, (@@STRING:a0aab80e401120e22e512900839a64fd6d96e34685138ac1b3ec820715a09d50@@)),
    MSG_NPC(-1, (@@STRING:f58cddbb3ef2fa35ea587269f3ddc47251c99c5f32df73923dfee880c32c0d41@@)),
    MSG_NPC(-1, (@@STRING:e64dc033948214a8c8b61080cc32be4160f72b75173af0c068d58d60dfc581c1@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:fd9f1ce716144b50698676c7067edc14f6b7f67be33b816d0b6c11479dec7122@@)),
    TEXTBOX_CLEAR,
    WAIT(15),
    MSG_NPC(-1, (@@STRING:bab3a2fe57e0b82ec5858548c603b64bfa95bc217fc39b4f0eeca855381569f1@@)),
    TEXTBOX_CLEAR,
    BGM_FADEOUT(90),
    WAIT(120),
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs166_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs166_g2_s0_station_sref_script }; /* 0x8219150 */


static const struct ScriptCommand s_gs166_g2_s0_lives0_dlg0[] = { /* 0x821915c */
    DEBUGINFO_O(102),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:9711d06f163a1a7b3338169c5fd16ce7f7b468a4172abdc42b67bdb33bd14405@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:8fc861a0ccb2df9f41cf33cebf45168c283899d9d96be9ec1902389186c21037@@)),
    MSG_NPC(1, (@@STRING:d71e1d9458c6c136b0608ddf7819acfede9af743806896dca5366f9c89c29252@@)),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:e31915ddedff257c510140cf91381651e0920ae5f5da0b6395f327d6708fa4a7@@)),
    TEXTBOX_CLEAR,
    WAIT(20),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHEAST),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:1566a4a7efb658bb5e70bfbea309d3d4cbee3970514aec7578d509fb64b6382b@@)),
    TEXTBOX_CLEAR,
    WAIT(45),
    MSG_NPC(-1, (@@STRING:56d526d2aafae481342c6005b0cecdc7078344cbc30a82dd77bc579dfe58ef82@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    MSG_NPC(-1, (@@STRING:e5eb840a753dd5e99c95e0e01a92e7b0f2fb6c624625d5706ef4a5cc5ed4621d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000002),
    MSG_NPC(1, (@@STRING:0dd2e5b006077b5e806791905323d70168e25ddfe7a028098b6bddb4ea4b8465@@)),
    MSG_NPC(1, (@@STRING:6f2c8d27b0084309066117a56651c03e32a6e0d77d090562a7594d7d2820c99d@@)),
    TEXTBOX_CLEAR,
    { 0x23, 0x00,  0x0028,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    WAIT(5),
    { 0x89, 0x50,  0x0200,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};



static const struct ScriptCommand s_gs166_g2_s0_lives1_dlg0[] = { /* 0x821952c */
    DEBUGINFO_O(151),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_WEST),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_11, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x89, 0x50,  0x0200,  0x00000002,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs166_g1_s0_lives[] = { /* 0x821964c */
    /*  0 */ {   0,   2,   0,   0, {  14,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs166_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  18,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs166_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs166_g2_s0_lives[] = { /* 0x821967c */
    /*  0 */ {   0,   2,   0,   0, {  28,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs166_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  32,  27, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs166_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs166_g1_s0_effs[] = { /* 0x82196ac */
    /*  0 */ {   0,   0,   1,   1, {  30,  28, 0, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs166_g2_s0_effs[] = { /* 0x82196b8 */
    /*  0 */ {   0,   0,   1,   1, {  30,  28, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x82196c4 */
    &s_gs166_g0_s0_station_sref,
    &s_gs166_g1_s0_station_sref,
    &s_gs166_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs166_g0_sectors[] = { /* 0x82196d0 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs166_g1_sectors[] = { /* 0x82196f8 */
    { LPARRAY(s_gs166_g1_s0_lives), 0,NULL, LPARRAY(s_gs166_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs166_g2_sectors[] = { /* 0x8219720 */
    { LPARRAY(s_gs166_g2_s0_lives), 0,NULL, LPARRAY(s_gs166_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs166_groups[] = { /* 0x8219748 */
    { LPARRAY(s_gs166_g0_sectors) },
    { LPARRAY(s_gs166_g1_sectors) },
    { LPARRAY(s_gs166_g2_sectors) },
};

static const struct GroundLink s_gs166_links[] = { /* 0x8219760 */
    /* link   0 */ { { /*x*/  28, /*y*/  25, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  32, /*y*/  27, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs166 = { LPARRAY(s_gs166_groups), s_gs166_links }; /* 0x8219770 */
