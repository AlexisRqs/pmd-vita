







static const struct ScriptCommand s_gs174_g0_s0_station_sref_script[] = { /* 0x822a124 */
    DEBUGINFO_O(10),
    SELECT_MAP(174),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs174_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs174_g0_s0_station_sref_script }; /* 0x822a190 */

static const struct ScriptCommand s_gs174_g1_s0_station_sref_script[] = { /* 0x822a19c */
    DEBUGINFO_O(19),
    { 0x3b, 0x39,  0x0001,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(174),
    SELECT_ENTITIES(-1, -1),
    BGM_STOP,
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    AWAIT_CUE(3),
    BGM_FADEOUT(150),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(180),
    RET,
};

static const ScriptRef s_gs174_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs174_g1_s0_station_sref_script }; /* 0x822a24c */

static const struct ScriptCommand s_gs174_g1_s0_lives0_dlg0[] = { /* 0x822a258 */
    DEBUGINFO_O(35),
    SELECT_ANIMATION(52),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    BGM_FADEIN(30, 37),
    WAIT(60),
    MSG_QUIET(0, (@@STRING:c727263cbbf3e2bc5179928bbaa33098be2d3a6fb3d4fae6b23c901332c9c762@@)),
    MSG_QUIET(0, (@@STRING:cc71399372d6f2677e0a9bc67448537f8fcdfc6f7f7db752966ee67161e95f5a@@)),
    MSG_QUIET(0, (@@STRING:8c279b6d53d548819bf5ea68034fba7176a000d9ecc4e64c8c229113892a7dc6@@)),
    MSG_QUIET(0, (@@STRING:6baf400e1513a7095d7094190bd6c3cc557ac293b130eda9bcb6a1a14dae7441@@)),
    MSG_QUIET(0, (@@STRING:8c279b6d53d548819bf5ea68034fba7176a000d9ecc4e64c8c229113892a7dc6@@)),
    MSG_QUIET(0, (@@STRING:b08c05c4d105fc7effa7ae18ef0c188e7434352bffba418b2cf3199d181251aa@@)),
    MSG_QUIET(0, (@@STRING:3ebf60df40b31b75e48749d206f4f48c42471ce31df0f0aeed3df4f0c576df0f@@)),
    MSG_QUIET(0, (@@STRING:bfe60063a747de125e53d1ac8fc82e5e6bd4dc887e104f8c3a932b047dafd0a7@@)),
    MSG_QUIET(0, (@@STRING:ed3adfbbb2cfd173449309732340e1908f880aef019222c73d84a697ef7d95f8@@)),
    MSG_QUIET(0, (@@STRING:6c7262b9eb8b73077c54e4ee2d5b0dca374431162bbf32965d5055e51b5d356f@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(485),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    SELECT_LIVES(-1, 1),
    FLASH_FROM(TRUE, PALUTIL_KIND_05, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    MSG_QUIET(0, (@@STRING:bfa37a30c511159ef4d5fc06f8fbd026bf64e0a32f187c739457b5598a67d0db@@)),
    MSG_QUIET(0, (@@STRING:c5813b92384b3beaea830941b27fc7663979d3457d2dd9ebfbd17e2d7b161d85@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:3c6426a20dcd4c5f944450f807c0d4178f8e0c2291320d94cbaecf6390754beb@@)),
    MSG_NPC(4, (@@STRING:ac564f6ce81d804483fe7cbfca91201dfd0bd2d443f080021e9b551dcf47ffdc@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0004, 0x00000041),
    MSG_NPC(4, (@@STRING:f0d72370c96dd6b2ada46270c50417ea4b3997313387fe4ca219d00e63aa34a9@@)),
    MSG_NPC(4, (@@STRING:97734ffd0b8d4c02a25d15e8bd52176acb29ca992f4647f85fec5fca32da8391@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    SELECT_ANIMATION(51),
    { 0x3b, 0x36,  0x0004,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000005),
    MSG_QUIET(0, (@@STRING:bfa37a30c511159ef4d5fc06f8fbd026bf64e0a32f187c739457b5598a67d0db@@)),
    MSG_QUIET(0, (@@STRING:6768bcd804c5739592246fefca1ecdf137ee62d0530e14a5b5f23577aaf73495@@)),
    MSG_QUIET(0, (@@STRING:39c66a978f46ffcbef4bf35293e49b87c5e3cb4e9d0e1e6bf0ecff63c2515f6e@@)),
    MSG_QUIET(0, (@@STRING:d3630f8590342ad80b09e070eaef822b70a937f1295cecbe5ec7b107740c0cf9@@)),
    MSG_QUIET(0, (@@STRING:88344527c14e9de2e6e5d2de12dbf753d532ff89463b9c000e4bbc5dab13e518@@)),
    MSG_QUIET(0, (@@STRING:70e3ce2bf4b08c601424bfa8c0e3ce7c374dfb6a3798dc8ff03a990ebf1c23f6@@)),
    TEXTBOX_CLEAR,
    WAIT(90),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP, 0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:14a7a76d2133aa001b14284344027c616bc9f27793b1ae5e9fb89d1f11882041@@)),
    MSG_NPC(4, (@@STRING:2bc4231730a59162aa38a34761d321224ee37991a1845966ed50a19a7dd0954c@@)),
    { 0x3b, 0x36,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(9),
    AWAIT_CUE(5),
    SELECT_ANIMATION(52),
    PORTRAIT_REP(0x0004, 0x00000044),
    MSG_NPC(4, (@@STRING:c66eec807fff1505d614544c8e712825cc816a2bae80c5cde9d0749f38ff1315@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(9),
    AWAIT_CUE(5),
    MSG_NPC(4, (@@STRING:fda5f6a661a30602c488189a3131612ef577e3a60640fa80a5aa3f9cfc7eea3a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_QUIET(0, (@@STRING:ecbf09341ed880c15455e23053b6640aeeb150b161fbe8b8edc6ccaa2532398a@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    WAIT(60),
    MSG_NPC(4, (@@STRING:1cf246f3c3be6f21383e61edd4846725489548618066d7a2b85bc3854412fdd6@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(9),
    AWAIT_CUE(5),
    WAIT(30),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0004, 0x00000044),
    MSG_NPC(4, (@@STRING:34e3d36252767f6c50918b2967e67ea9de03ced806571badfaf8ea22190b78dc@@)),
    PORTRAIT_REP(0x0004, 0x00000000),
    MSG_NPC(4, (@@STRING:087d6215e4669400906e3a0e050a9ce3f91e6870ae3b44d7cebe8fa211dbb073@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(9),
    WAIT(20),
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs174_g1_s1_lives0_dlg0[] = { /* 0x822abd8 */
    DEBUGINFO_O(135),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    AWAIT_CUE(9),
    CALL_SCRIPT(JUMP_ANGRY_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    WALK_RELATIVE(128, 16, 32),
    ROTATE_TO(8, DIR_TRANS_10, DIRECTION_WEST),
    WAIT(60),
    ROTATE_TO(10, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(45),
    { 0x54, 0x00,  0x001f,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(9),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(20),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(20),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(20),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_SOUTH),
    WAIT(20),
    ROTATE_TO(6, DIR_TRANS_10, DIRECTION_EAST),
    WAIT(60),
    { 0x89, 0x10,  0x0100,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(9),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_WEST),
    ALERT_CUE(5),
    AWAIT_CUE(9),
    { 0x89, 0x50,  0x0099,  0x00000002,  0x00000000, NULL },
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs174_g1_s0_lives[] = { /* 0x822ae98 */
    /*  0 */ {   0,   4,   0,   0, {  20,  11, 0, CPOS_HALFTILE }, {
        [0] = s_gs174_g1_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs174_g1_s1_lives[] = { /* 0x822aeb0 */
    /*  0 */ {  91,   0,   0,   0, {  20,   7, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs174_g1_s1_lives0_dlg0,
    } },
};

static const struct GroundEffectData s_gs174_g1_s0_effs[] = { /* 0x822aec8 */
    /*  0 */ {   0,   0,   1,   1, {  20,  12, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x822aed4 */
    &s_gs174_g0_s0_station_sref,
    &s_gs174_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs174_g0_sectors[] = { /* 0x822aedc */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs174_g1_sectors[] = { /* 0x822af04 */
    { LPARRAY(s_gs174_g1_s0_lives), 0,NULL, LPARRAY(s_gs174_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs174_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs174_groups[] = { /* 0x822af54 */
    { LPARRAY(s_gs174_g0_sectors) },
    { LPARRAY(s_gs174_g1_sectors) },
};

static const struct GroundLink s_gs174_links[] = { /* 0x822af64 */
    {},
};

const GroundScriptHeader gGroundScript_gs174 = { LPARRAY(s_gs174_groups), s_gs174_links }; /* 0x822af6c */
