
#define NPC_PARTNER 1
#define NPC_RAYQUAZA 2





static const struct ScriptCommand s_gs209_g0_s0_station_sref_script[] = { /* 0x82620a8 */
    DEBUGINFO_O(10),
    SELECT_MAP(MAP_SKY_TOWER_END),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs209_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs209_g0_s0_station_sref_script }; /* 0x8262114 */

static const struct ScriptCommand s_gs209_g1_s0_station_sref_script[] = { /* 0x8262120 */
    DEBUGINFO_O(19),
    SELECT_MAP(MAP_SKY_TOWER_END),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RAYQUAZAS_DOMAIN),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x0010,  0x00000000,  0x00000000, NULL },
    FANFARE_FADEOUT2(16, 512),
    RET,
};

static const ScriptRef s_gs209_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs209_g1_s0_station_sref_script }; /* 0x82621b0 */

static const struct ScriptCommand s_gs209_g1_s0_eff0_script[] = { /* 0x82621bc */
    DEBUGINFO_O(33),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    { 0x89, 0x20,  0x0500,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs209_g1_s0_lives0_dlg0[] = { /* 0x826223c */
    DEBUGINFO_O(44),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(5),
    MSG_OVERHEARD((@@STRING:58ec03c90d82365258523f2aa9dc520df9df5daabb358ee795ad3d27ada8fb56@@)),
    WAIT(30),
    FANFARE_PLAY2(493),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 8, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(5),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 8, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(20),
    FANFARE_PLAY2(493),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 8, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(5),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 8, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(120),
    TEXTBOX_CLEAR2,
    FANFARE_PLAY2(848),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    { 0x2e, 0x0f,  0x0002, -0x00000002,  0x00000000, NULL },
    MSG_OVERHEARD((@@STRING:d9bd4b9fd7eabd612ad1cfb5901f6012cef9498110d4c10370f6b621d043cb04@@)),
    WAIT(90),
    TEXTBOX_CLEAR,
    WAIT(60),
    ALERT_CUE(7),
    ALERT_CUE(6),
    ALERT_CUE(10),
    CALL_SCRIPT(SHOCK_FUNC),
    AWAIT_CUE(5),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 30, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(30),
    FANFARE_PLAY2(512),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 16, RGB_U32(0xFF, 0xFF, 0xFF)),
    { 0x97, 0x00,  0x0002,  0x00000005,  0x00000002, NULL },
    WAIT(40),
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(15),
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000001, NULL },
    ALERT_CUE(6),
    ALERT_CUE(10),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(60),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PARTNER, 12),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c61f7e4432b97ecb4a8df564aaf69a8f94d1254cf1bf5426c8f70559d0add082@@)),
    VARIANT(/* == */  1, (@@STRING:60d5b6d498f10cc94a11ad5fcb44c6d03a36c8a98dbf6af3d54ba0304a0db224@@)),
    VARIANT_DEFAULT((@@STRING:12adf9aece9f2a13195c4667cafd0f8ceb4eff94f9bc7ef2e6c7ac83f399ecda@@)),
    VARIANT_DEFAULT((@@STRING:a6cdebee566f5063bba308538e44679ca8ddad46ea5d18d2336d6e04d55cecbd@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, NPC_RAYQUAZA, 0),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:42e02c0b3a8062b075a85689ee956142918755902cf45f0f8d3e57b70d963309@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2c6ad4360333885bb2584cd637246ca0e7940dce23006a2f9545b11b67094b72@@)),
    VARIANT_DEFAULT((@@STRING:ff5d01ef33d2aaa634a70b5f8bfba495cec99382f8431be991f80ef6ce1a81d6@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(7),
    ALERT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(20),
    ALERT_CUE(4),
    ALERT_CUE(3),
    HALT,
};





static const struct ScriptCommand s_gs209_g1_s0_lives1_dlg0[] = { /* 0x826282c */
    DEBUGINFO_O(124),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    HALT,
};

static const struct ScriptCommand s_gs209_g1_s0_lives2_dlg0[] = { /* 0x826290c */
    DEBUGINFO_O(141),
    SELECT_ANIMATION(2),
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs209_g1_s0_lives3_dlg0[] = { /* 0x82629ac */
    DEBUGINFO_O(154),
    SELECT_ANIMATION(2),
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(10),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(10),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs209_g1_s0_lives4_dlg0[] = { /* 0x8262a4c */
    DEBUGINFO_O(167),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(9),
    AWAIT_CUE(7),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(22),
    FANFARE_PLAY2(652),
    { 0x97, 0x00,  0x0001,  0x00000000,  0x00000000, NULL },
    WAIT(8),
    { 0x97, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(7),
    FANFARE_PLAY2(672),
    { 0x62, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    WAIT(2),
    { 0x62, 0x00,  0x0100, -0x00000001,  0x00000000, NULL },
    WAIT(2),
    { 0x62, 0x00,  0x0100,  0x00000001,  0x00000000, NULL },
    WAIT(2),
    { 0x62, 0x00,  0x0100, -0x00000001,  0x00000000, NULL },
    WAIT(20),
    FANFARE_PLAY2(672),
    { 0x62, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    WAIT(1),
    { 0x62, 0x00,  0x0100, -0x00000002,  0x00000000, NULL },
    WAIT(1),
    { 0x62, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    WAIT(1),
    { 0x62, 0x00,  0x0100, -0x00000002,  0x00000000, NULL },
    { 0x62, 0x00,  0x0100,  0x00000002,  0x00000000, NULL },
    WAIT(1),
    { 0x62, 0x00,  0x0100, -0x00000002,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(774),
    SELECT_ANIMATION(23),
    MSG_OVERHEARD((@@STRING:a97460a4b10a56b25964cef1a7a4173f2a9ad0c746978a80afae7737b1e5a17f@@)),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 8, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(5),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 8, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(90),
    TEXTBOX_CLEAR2,
    SELECT_ANIMATION(24),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    FANFARE_PLAY2(517),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(3),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 4, RGB_U32(0xFF, 0xFF, 0xFF)),
    SELECT_ANIMATION(25),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(7),
    CALL_SCRIPT(NOTICE_FUNC),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    { 0x54, 0x00,  0x001b,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs209_g2_s0_station_sref_script[] = { /* 0x8262e10 */
    DEBUGINFO_O(229),
    SELECT_MAP(MAP_SKY_TOWER_END),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RAYQUAZAS_DOMAIN),
    { 0x97, 0x00,  0x0002,  0x00000001,  0x00000001, NULL },
    WAIT(15),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 16, RGB_U32(0xFF, 0xFF, 0xFF)),
    RET,
};

static const ScriptRef s_gs209_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs209_g2_s0_station_sref_script }; /* 0x8262eb0 */

static const struct ScriptCommand s_gs209_g2_s0_eff0_script[] = { /* 0x8262ebc */
    DEBUGINFO_O(244),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    WAIT(10),
    CAMERA_INIT_PAN,
    { 0x89, 0x14,  0x0500,  0x00000004,  0x00000000, NULL },
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs209_g2_s0_lives0_dlg0[] = { /* 0x8262f4c */
    DEBUGINFO_O(256),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, NPC_RAYQUAZA, 0),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:f3fdea0f7fb215bc2e7cfed67b2a087fa5f2d08c54b0722281838fd1c612680d@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PARTNER, 12),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:267da77b48c09243c17e60dffe4f701bc5beb3c4d8abd1b15b0fdd579e877c22@@)),
    VARIANT(/* == */  1, (@@STRING:5fda38854e0522b3d22a50fec096f76a6450107a3b40854d8cf22ae8afb262ec@@)),
    VARIANT_DEFAULT((@@STRING:ff43422979b6c9886ec69156ce5852a07cd0d7f1ec1644b256756d7c2ba8a16a@@)),
    VARIANT_DEFAULT((@@STRING:d7245cce8240b172e0c5e177bbd77468e8b9c57935abbdf336768646689a1a77@@)),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:44da0021e2ab888a05ecd52f6a52f82a2ab5c5b365db4054b6b370133470ba86@@)),
    VARIANT(/* == */  3, (@@STRING:415c5a768f8c31ca4a9b4bc6f29be63140352c360a8f2d5439cd59ced197993f@@)),
    VARIANT_DEFAULT((@@STRING:f9fefd01b6ac2e751e26e89163937ec67ea457e6b445ed46c508fa04a2f419eb@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(15),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:7aada858813f469082ebf4b1158e4a0c4cb4c704edf309f4c2ce33976d270c53@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:df3162607d957cb4d85d8ff7f2bc42da85bbc0cf0df70ff7192cb42aecaeb547@@)),
    VARIANT_DEFAULT((@@STRING:96f76e02184bea618d0672f1a8275d255418ddd51b31aabfd1394fd0c2dca963@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:5c7745ada235cd6cbbd47f2d226088ee3e0383a7e688fd63548b76ac4a5417e9@@)),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:105216b3a4abb75c05774c8c68d422c104a0181d9b4aa44b33675da7863d62c6@@)),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:f09e2a743f834cb6bae36a9070ddaeb1c10398ad0e026fc9af2dd906d2549348@@)),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:87b36f489692a0c1d131d490deefe167a0f58d52776941b8be00383c805732f6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:a84181e90542516425a16e222f72ba98e4709c20d191b74aaa4a4d4fbbe08629@@)),
    VARIANT_DEFAULT((@@STRING:1447362624b1096c7c010a73e12a5d4bed7e9297a50f29eac6c3d48eee5eec6b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:43997741c2670190d356808244e985804f4abf09573126275c0a6ce046759b64@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    BGM_FADEOUT(120),
    FANFARE_PLAY2(664),
    ALERT_CUE(8),
    AWAIT_CUE(5),
    MSG_NPC(NPC_RAYQUAZA, (@@STRING:70bb6a9faef92c1c3c75a741b5e35814c6d0d905861bb9aa99253a88ac61a49a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    FANFARE_PLAY2(513),
    ALERT_CUE(8),
    ALERT_CUE(4),
    WAIT(10),
    ALERT_CUE(3),
    HALT,
};








static const struct ScriptCommand s_gs209_g2_s0_lives1_dlg0[] = { /* 0x8263660 */
    DEBUGINFO_O(331),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs209_g2_s0_lives2_dlg0[] = { /* 0x82636a0 */
    DEBUGINFO_O(338),
    SELECT_ANIMATION(2),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs209_g2_s0_lives3_dlg0[] = { /* 0x82636e0 */
    DEBUGINFO_O(345),
    SELECT_ANIMATION(2),
    AWAIT_CUE(10),
    HALT,
};

static const struct ScriptCommand s_gs209_g2_s0_lives4_dlg0[] = { /* 0x8263720 */
    DEBUGINFO_O(352),
    { 0x54, 0x00,  0x001b,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    SELECT_ANIMATION(24),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(7),
    ALERT_CUE(8),
    { 0x54, 0x00,  0x001a,  0x00000000,  0x00000000, NULL },
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct ScriptCommand s_gs209_g2_s0_eff1_script[] = { /* 0x8263860 */
    DEBUGINFO_O(375),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x0000006f,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000070,  0x00000000, NULL },
    WAIT(120),
    ALERT_CUE(5),
    AWAIT_CUE(8),
    { 0x56, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(1),
    AWAIT_CUE(8),
    { 0x59, 0x00,  0x0000, -0x0000001a,  0x00000000, NULL },
    WAIT(1),
    { 0x56, 0x00,  0x0000,  0x00000133,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x56, 0x00,  0x0000,  0x00000134,  0x00000000, NULL },
    AWAIT_CUE(8),
    HALT,
};

static const struct ScriptCommand s_gs209_g3_s0_station_sref_script[] = { /* 0x8263980 */
    DEBUGINFO_O(396),
    SELECT_MAP(MAP_SKY_TOWER_END),
    SELECT_ENTITIES(-1, -1),
    BGM_SWITCH(MUS_RAYQUAZAS_DOMAIN),
    { 0x97, 0x00,  0x0002,  0x00000005,  0x00000002, NULL },
    WAIT(15),
    FLASH_FROM(FALSE, PALUTIL_KIND_05, 16, RGB_U32(0xFF, 0xFF, 0xFF)),
    AWAIT_CUE(3),
    BGM_FADEOUT(60),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(120),
    TEXTBOX_CLEAR2,
    TEXTBOX_AUTO_PRESS(-1, -1),
    WAIT(240),
    RET,
};

static const ScriptRef s_gs209_g3_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs209_g3_s0_station_sref_script }; /* 0x8263a70 */

static const struct ScriptCommand s_gs209_g3_s0_lives0_dlg0[] = { /* 0x8263a7c */
    DEBUGINFO_O(416),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    WAIT(30),
    TEXTBOX_AUTO_PRESS(15, 15),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, NPC_PARTNER, 12),
    MSG_NPC(NPC_PARTNER, (@@STRING:74a177deb2445de6b154e14be3ab64a53890546edf55d45cab38fe272c8b8551@@)),
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs209_g3_s0_lives1_dlg0[] = { /* 0x8263b44 */
    DEBUGINFO_O(431),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs209_g3_s0_lives2_dlg0[] = { /* 0x8263b84 */
    DEBUGINFO_O(438),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs209_g3_s0_lives3_dlg0[] = { /* 0x8263bb4 */
    DEBUGINFO_O(444),
    SELECT_ANIMATION(2),
    HALT,
};

static const struct ScriptCommand s_gs209_g3_s0_lives4_dlg0[] = { /* 0x8263be4 */
    DEBUGINFO_O(450),
    { 0x54, 0x00,  0x001a,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs209_g3_s0_eff1_script[] = { /* 0x8263c24 */
    DEBUGINFO_O(457),
    { 0x56, 0x00,  0x0000,  0x00000134,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs209_g1_s0_lives[] = { /* 0x8263c54 */
    /*  0 */ {   0,   4,   0,   0, {  37,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  10,   4,   0,   0, {  34,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g1_s0_lives2_dlg0,
    } },
    /*  3 */ {  11,   4,   0,   0, {  38,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g1_s0_lives3_dlg0,
    } },
    /*  4 */ { 108,   0,   0,   0, {  34,  34, CPOS_HALFTILE, 0 }, {
        [0] = s_gs209_g1_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs209_g2_s0_lives[] = { /* 0x8263ccc */
    /*  0 */ {   0,   4,   0,   0, {  37,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g2_s0_lives1_dlg0,
    } },
    /*  2 */ {  10,   4,   0,   0, {  34,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g2_s0_lives2_dlg0,
    } },
    /*  3 */ {  11,   4,   0,   0, {  38,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g2_s0_lives3_dlg0,
    } },
    /*  4 */ { 108,   0,   0,   0, {  34,  34, CPOS_HALFTILE, 0 }, {
        [0] = s_gs209_g2_s0_lives4_dlg0,
    } },
};

static const struct GroundLivesData s_gs209_g3_s0_lives[] = { /* 0x8263d44 */
    /*  0 */ {   0,   4,   0,   0, {  37,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   4,   0,   0, {  32,  37, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g3_s0_lives1_dlg0,
    } },
    /*  2 */ {  10,   4,   0,   0, {  34,  42, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g3_s0_lives2_dlg0,
    } },
    /*  3 */ {  11,   4,   0,   0, {  38,  41, 0, CPOS_HALFTILE }, {
        [0] = s_gs209_g3_s0_lives3_dlg0,
    } },
    /*  4 */ { 108,   0,   0,   0, {  34,  34, CPOS_HALFTILE, 0 }, {
        [0] = s_gs209_g3_s0_lives4_dlg0,
    } },
};

static const struct GroundEffectData s_gs209_g1_s0_effs[] = { /* 0x8263dbc */
    /*  0 */ {   0,   0,   1,   1, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs209_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs209_g2_s0_effs[] = { /* 0x8263dc8 */
    /*  0 */ {   0,   0,   1,   1, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs209_g2_s0_eff0_script },
    /*  1 */ {   4,   4,   1,   1, {  35,  31, 0, 0 }, s_gs209_g2_s0_eff1_script },
};

static const struct GroundEffectData s_gs209_g3_s0_effs[] = { /* 0x8263de0 */
    /*  0 */ {   0,   0,   1,   1, {  34,  35, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
    /*  1 */ {   3,   0,   1,   1, {  35,  28, 0, 0 }, s_gs209_g3_s0_eff1_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8263df8 */
    &s_gs209_g0_s0_station_sref,
    &s_gs209_g1_s0_station_sref,
    &s_gs209_g2_s0_station_sref,
    &s_gs209_g3_s0_station_sref,
};

static const struct GroundScriptSector s_gs209_g0_sectors[] = { /* 0x8263e08 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs209_g1_sectors[] = { /* 0x8263e30 */
    { LPARRAY(s_gs209_g1_s0_lives), 0,NULL, LPARRAY(s_gs209_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs209_g2_sectors[] = { /* 0x8263e58 */
    { LPARRAY(s_gs209_g2_s0_lives), 0,NULL, LPARRAY(s_gs209_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs209_g3_sectors[] = { /* 0x8263e80 */
    { LPARRAY(s_gs209_g3_s0_lives), 0,NULL, LPARRAY(s_gs209_g3_s0_effs), 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptGroup s_gs209_groups[] = { /* 0x8263ea8 */
    { LPARRAY(s_gs209_g0_sectors) },
    { LPARRAY(s_gs209_g1_sectors) },
    { LPARRAY(s_gs209_g2_sectors) },
    { LPARRAY(s_gs209_g3_sectors) },
};

static const struct GroundLink s_gs209_links[] = { /* 0x8263ec8 */
    {},
};

const GroundScriptHeader gGroundScript_gs209 = { LPARRAY(s_gs209_groups), s_gs209_links }; /* 0x8263ed0 */
