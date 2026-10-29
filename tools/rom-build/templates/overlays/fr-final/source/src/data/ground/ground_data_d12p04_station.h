







static const struct ScriptCommand s_gs206_g0_s0_station_sref_script[] = { /* 0x825e858 */
    DEBUGINFO_O(10),
    SELECT_MAP(206),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs206_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs206_g0_s0_station_sref_script }; /* 0x825e8c4 */

static const struct ScriptCommand s_gs206_g1_s0_station_sref_script[] = { /* 0x825e8d0 */
    DEBUGINFO_O(19),
    SELECT_MAP(206),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_IN_THE_DEPTHS_OF_THE_PIT),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    FANFARE_FADEOUT2(60, 453),
    BGM_FADEOUT(60),
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(90),
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0000,  0x00000001,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000058,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000067,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:d912f22b1daa79d92c97bc4dd788095c10ef2778352fb1f46c0d6dd7902c9da9@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:b2f5606ddc7a4d2af87b002ba3af53b4d09f0bdcefb642f7d4c9087b90e8fc54@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    { 0x3b, 0x39,  0x0000,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs206_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs206_g1_s0_station_sref_script }; /* 0x825eacc */

static const struct ScriptCommand s_gs206_g1_s0_eff0_script[] = { /* 0x825ead8 */
    DEBUGINFO_O(48),
    CAMERA_END_PAN,
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s0_lives0_dlg0[] = { /* 0x825eb18 */
    DEBUGINFO_O(55),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(493),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(5),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(15),
    FANFARE_PLAY2(493),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(5),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    ALERT_CUE(7),
    WAIT(20),
    MSG_OVERHEARD((@@STRING:56c7ce6e7bd4c39fb0fbefe880a3ef458abb110887f414291c18e0c67dd72187@@)),
    WAIT(120),
    TEXTBOX_CLEAR,
    WAIT(90),
    FANFARE_PLAY2(499),
    ALERT_CUE(11),
    ALERT_CUE(12),
    ALERT_CUE(13),
    AWAIT_CUE(5),
    SELECT_ENTITIES(-1, 1),
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:f082bd72f32dcf5b2017825b2c4b662890cde3de6042f4df74b0e386bcb5f0eb@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    PORTRAIT(PLACEMENT_RIGHT_MIDTOP_FLIP, 0x0005, 0x00000000),
    MSG_NPC(5, (@@STRING:dd3ccebc244e2d50aa8bdf8c28beeb98bc78677c8f26538cee76ea83e1ac7d4f@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(10),
    ALERT_CUE(9),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0004, 0x00000043),
    MSG_NPC(4, (@@STRING:35b43b035166737cfcf4657a204e5e6135d9520985f6008278faedfddfbbe9a1@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:bd6ef19c7b65b4cc674d20c475a91eccc8545e01824fd06e147324d3761a44b8@@)),
    VARIANT_DEFAULT((@@STRING:a2d50da96d479aa68efebe0a495da6f8a104e68f7571bb13740c703bbf258af0@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    WAIT(30),
    PORTRAIT(PLACEMENT_CENTERRIGHT_TOP_FLIP, 0x0003, 0x00000000),
    MSG_NPC(3, (@@STRING:7cb4f6e547f2a1333dbb94efbc218ed8473ba864e23bec83091499c6f1337e4e@@)),
    MSG_NPC(3, (@@STRING:67df430e57ba1ac129eabbb6357d52d7d246cdb6c04cc52a7d008bce89d79e91@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0005, 0x00000005),
    MSG_NPC(1, (@@STRING:0e70348475e6d03e6bed4fe5df0752bef449358a3d9a406a43fd4055912408ba@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:84584b91a67960cc81016d5558d8bb28a9070e2e7675dd0e2cda4ba15a21a370@@)),
    MSG_NPC(3, (@@STRING:baedc55358732eead201bbe332858b79d66bac19236a60f4bed277ba4faa4d72@@)),
    MSG_NPC(3, (@@STRING:44049a1895986b433a366ec4f29828726fb7f84ffa2b3e3aa45e9e184fe57486@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(453),
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000003, NULL },
    WAIT(30),
    ALERT_CUE(6),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(14),
    WAIT(30),
    PORTRAIT_REP(0x0005, 0x0000000c),
    MSG_NPC(1, (@@STRING:501b5c0a606366f5bd566f264a14509829ec87734fccdbcbf04092b0a35186bf@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(3, (@@STRING:6194671a96c5009687ff556ddddfaeab3fb3dd8156e151a248ae6e239778de52@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(8),
    ALERT_CUE(9),
    ALERT_CUE(10),
    ALERT_CUE(14),
    { 0x89, 0x78,  0x0100,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs206_g1_s0_lives1_dlg0[] = { /* 0x825f2ec */
    DEBUGINFO_O(157),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_RELATIVE(128, 0, -8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    { 0x89, 0x78,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_lives2_dlg0[] = { /* 0x825f41c */
    DEBUGINFO_O(179),
    SELECT_ANIMATION(2),
    AWAIT_CUE(14),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(14),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x78,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_lives3_dlg0[] = { /* 0x825f49c */
    DEBUGINFO_O(190),
    SELECT_ANIMATION(2),
    AWAIT_CUE(14),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(14),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0x89, 0x78,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_lives4_dlg0[] = { /* 0x825f51c */
    DEBUGINFO_O(201),
    SELECT_ANIMATION(22),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    SELECT_ANIMATION(23),
    WAIT(30),
    FANFARE_PLAY2(665),
    WAIT(60),
    FANFARE_PLAY2(662),
    { 0x97, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    WAIT(20),
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s0_eff1_script[] = { /* 0x825f5fc */
    DEBUGINFO_O(218),
    AWAIT_CUE(11),
    { 0x56, 0x00,  0x0000,  0x00000067,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s0_eff2_script[] = { /* 0x825f65c */
    DEBUGINFO_O(227),
    AWAIT_CUE(12),
    { 0x56, 0x00,  0x0000,  0x00000067,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s0_eff3_script[] = { /* 0x825f6bc */
    DEBUGINFO_O(236),
    AWAIT_CUE(13),
    { 0x56, 0x00,  0x0000,  0x00000067,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    END_DELETE,
};

static const struct ScriptCommand s_gs206_g1_s1_lives0_dlg0[] = { /* 0x825f71c */
    DEBUGINFO_O(245),
    { 0x54, 0x00,  0x001a,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0003,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(8),
    { 0x62, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000001,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000001,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000001,  0x00000000, NULL },
    WAIT(30),
    { 0x62, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000002,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000002,  0x00000000, NULL },
    WAIT(30),
    SELECT_ANIMATION(2),
    WAIT(30),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(10),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    AWAIT_CUE(8),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(8),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x89, 0x78,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s1_lives1_dlg0[] = { /* 0x825f91c */
    DEBUGINFO_O(280),
    SELECT_ANIMATION(25),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(9),
    WAIT(10),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    WAIT(25),
    { 0x62, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000002,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100, -0x00000002,  0x00000000, NULL },
    WAIT(25),
    SELECT_ANIMATION(2),
    WAIT(45),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(20),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_EAST),
    AWAIT_CUE(9),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHEAST),
    AWAIT_CUE(9),
    CALL_SCRIPT(NOTICE_FUNC),
    AWAIT_CUE(9),
    { 0x89, 0x88,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs206_g1_s1_lives2_dlg0[] = { /* 0x825fb1c */
    DEBUGINFO_O(315),
    SELECT_ANIMATION(23),
    { 0x2d, 0x07,  0x0005,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(10),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    AWAIT_CUE(10),
    WAIT(15),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000001, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000001, NULL },
    WAIT(30),
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000002, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000002, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000,  0x00000002, NULL },
    { 0x62, 0x00,  0x0100,  0x00000000, -0x00000002, NULL },
    WAIT(40),
    SELECT_ANIMATION(2),
    WAIT(40),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    WAIT(10),
    ROTATE_TO(10, DIR_TRANS_SPINLEFT1, DIRECTION_SOUTHEAST),
    WAIT(5),
    ROTATE_TO(10, DIR_TRANS_SPINRIGHT1, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(10),
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    AWAIT_CUE(10),
    WAIT(5),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_SOUTHWEST),
    AWAIT_CUE(10),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(10),
    { 0x89, 0x88,  0x0100,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs206_g1_s0_lives[] = { /* 0x825fdcc */
    /*  0 */ {   0,   4,   0,   0, {  34,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  27,  29, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  10,   4,   0,   0, {  29,  34, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives2_dlg0,
    } },
    /*  3 */ {  11,   4,   0,   0, {  33,  33, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s0_lives3_dlg0,
    } },
    /*  4 */ { 103,   0,   0,   0, {  30,  22, CPOS_HALFTILE, 0 }, {
        [0] = s_gs206_g1_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs206_g1_s1_lives[] = { /* 0x825fe44 */
    /*  0 */ {  88,   0,   0,   0, {  30,  26, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s1_lives0_dlg0,
    } },
    /*  1 */ {  89,   7,   0,   0, {  26,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s1_lives1_dlg0,
    } },
    /*  2 */ {  90,   1,   0,   0, {  36,  24, 0, CPOS_HALFTILE }, {
        [0] = s_gs206_g1_s1_lives2_dlg0,
    } },
};

static const struct GroundEffectData s_gs206_g1_s0_effs[] = { /* 0x825fe8c */
    /*  0 */ {   0,   0,   1,   1, {  31,  26, 0, CPOS_HALFTILE }, s_gs206_g1_s0_eff0_script },
    /*  1 */ {   4,   0,   2,   1, {  30,  26, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs206_g1_s0_eff1_script },
    /*  2 */ {   4,   0,   2,   1, {  36,  24, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs206_g1_s0_eff2_script },
    /*  3 */ {   4,   0,   2,   1, {  26,  24, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs206_g1_s0_eff3_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x825febc */
    &s_gs206_g0_s0_station_sref,
    &s_gs206_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs206_g0_sectors[] = { /* 0x825fec4 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs206_g1_sectors[] = { /* 0x825feec */
    { LPARRAY(s_gs206_g1_s0_lives), 0,NULL, LPARRAY(s_gs206_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs206_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs206_groups[] = { /* 0x825ff3c */
    { LPARRAY(s_gs206_g0_sectors) },
    { LPARRAY(s_gs206_g1_sectors) },
};

static const struct GroundLink s_gs206_links[] = { /* 0x825ff4c */
    {},
};

const GroundScriptHeader gGroundScript_gs206 = { LPARRAY(s_gs206_groups), s_gs206_links }; /* 0x825ff54 */
