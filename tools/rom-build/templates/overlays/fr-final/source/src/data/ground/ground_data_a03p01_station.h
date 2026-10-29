







static const struct ScriptCommand s_gs168_g0_s0_station_sref_script[] = { /* 0x821ba24 */
    DEBUGINFO_O(10),
    SELECT_MAP(168),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs168_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs168_g0_s0_station_sref_script }; /* 0x821ba90 */

static const struct ScriptCommand s_gs168_g1_s0_station_sref_script[] = { /* 0x821ba9c */
    DEBUGINFO_O(19),
    SELECT_MAP(168),
    SELECT_WEATHER(-1),
    SELECT_ENTITIES(-1, 0),
    BGM_FADEIN(120, 36),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs168_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs168_g1_s0_station_sref_script }; /* 0x821bb2c */

static const struct ScriptCommand s_gs168_g1_s0_eff0_script[] = { /* 0x821bb38 */
    DEBUGINFO_O(33),
    CAMERA_END_PAN,
    CAMERA_INIT_PAN,
    AWAIT_CUE(4),
    { 0x89, 0x50,  0x0100,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    { 0x89, 0x50,  0x0100,  0x00000006,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(4),
    WAIT(1),
    END_DELETE,
};

static const struct ScriptCommand s_gs168_g1_s0_lives0_dlg0[] = { /* 0x821bbf8 */
    DEBUGINFO_O(48),
    SELECT_ANIMATION(5),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x3b, 0x36,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(80),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    { 0x3b, 0x36,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000002),
    MSG_NPC(1, (@@STRING:cc6979a8af3859f2662f152703af15d90785c5681db3ed6c68ef3e48b667091a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    WAIT(8),
    FANFARE_PLAY2(480),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000007),
    MSG_NPC(1, (@@STRING:3c6a827de1ed7a325cb30d5fde774714c93f9befd7c69a4c3367f80b18673579@@)),
    TEXTBOX_CLEAR,
    WAIT(8),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHWEST),
    WAIT(24),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    SELECT_ANIMATION(2),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000005),
    MSG_NPC(1, (@@STRING:dda37eda014e652f2cb959282a53d87be012f9099d468d762ee7ab7403a6ba34@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    { 0x3b, 0x36,  0x0004,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(5),
    ALERT_CUE(6),
    WAIT(60),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:2f83930a62ec31587834fdae4819eb3958bbef24b69c5f4089bbef65ba2a4bea@@)),
    VARIANT(/* == */  1, (@@STRING:d1b1599a56329724e048bd14f959c25d538f657b1bca4d0b4c80dc21aee7f25b@@)),
    VARIANT(/* == */  1, (@@STRING:142d35b9b128b0313ea6202c3f4beee217d877318a232b7cc42049742d344af2@@)),
    VARIANT(/* == */  1, (@@STRING:fafccfb0c12a7eb17a1e86729e75ca5420b440611a8dc7e675cd31adb0cda4f1@@)),
    VARIANT(/* == */  1, (@@STRING:18aa6da4eabf99ce155d243a04e71b3a5f05d2f334853c9898f47c73c1437612@@)),
    VARIANT_DEFAULT((@@STRING:2f83930a62ec31587834fdae4819eb3958bbef24b69c5f4089bbef65ba2a4bea@@)),
    VARIANT_DEFAULT((@@STRING:2eb39a2814e0bfbec39f7224d628e3f54d57bde39382d1f5da8c7ac815afb42a@@)),
    VARIANT_DEFAULT((@@STRING:2d831790d9e215ddb65ebcfe669a3ed0c038bfc1858e72c50ff04c342dc8a859@@)),
    VARIANT_DEFAULT((@@STRING:987102f7ffe9de220bd38ecd56877c8416f5f22e1fb2833063fddb8bfa7e7df5@@)),
    VARIANT_DEFAULT((@@STRING:7bd0b0dd0a5f9f5804725cce5f6c2a48b6e8369af128f031d637bc5cd1227371@@)),
    TEXTBOX_CLEAR,
    { 0x3b, 0x36,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    FANFARE_PLAY2(465),
    CALL_SCRIPT(NOTICE_FUNC),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b47e35c9f3861ac43681585c127fd38b13459616c3d1de2c7a1648d2c7639a69@@)),
    VARIANT_DEFAULT((@@STRING:7a4dc8cbd1572d835b735f03286360c53e4092bd920664db8b386150bd34f375@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    AWAIT_CUE(5),
    MSG_NPC(-1, (@@STRING:7d6c1ed2377d7db3145ecb507f3306f6ead63947fb3b1d7d9540c62abb91a62d@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_MIDTOP, 0x0001, 0x0000000c),
    MSG_NPC(1, (@@STRING:f0f5bae625cb9d09e526b5ff3c04f1deb50061f24659dfdbf926da976e85d3b4@@)),
    TEXTBOX_CLEAR,
    WAIT(40),
    ALERT_CUE(7),
    WAIT(90),
    ALERT_CUE(4),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000004),
    MSG_NPC(1, (@@STRING:c34825aae82cf26237e0328b2a923fe104b8cba634706f0f8b061494a536f8c9@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:8a94690500b4748250028a8c64d3527023f114ce844fb4bc8930a217dfb2f98b@@)),
    VARIANT_DEFAULT((@@STRING:9e9fd97fc5689985df40523c4ca3d205556eec544ee880924bbca57192b756e6@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_NPC(1, (@@STRING:d2baac5396951f5043d09b474832aa46a487c11e66ce5d22601f63b01c455683@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:0784afc53a53f9108aec8a5de7ea6100cb7eb5fc47e2a1eb0dd5a529a4b16797@@)),
    VARIANT_DEFAULT((@@STRING:661caa57a74f8b0adfd14617f3a779f280c3e88936da68a95f86c230531e5a18@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    SELECT_ANIMATION(5),
    { 0x3b, 0x36,  0x0004,  0x00000000,  0x00000000, NULL },
    WAIT(64),
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs168_g1_s0_lives1_dlg0[] = { /* 0x821c620 */
    DEBUGINFO_O(155),
    SELECT_ANIMATION(5),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    { 0x62, 0x00,  0x0100, -0x00000018,  0x00000000, NULL },
    SELECT_ANIMATION(9),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    { 0x54, 0x00,  0x002f,  0x00000000,  0x00000000, NULL },
    WAIT(4),
    { 0x56, 0x00,  0x0000,  0x0000005b,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    SELECT_ANIMATION(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    { 0x56, 0x00,  0x0000,  0x00000058,  0x00000000, NULL },
    { 0xde, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x89, 0x0c,  0x0100,  0x00000002,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    ALERT_CUE(5),
    SELECT_ANIMATION(5),
    HALT,
};

static const struct ScriptCommand s_gs168_g1_s0_lives2_dlg0[] = { /* 0x821c8e0 */
    DEBUGINFO_O(202),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    SELECT_ANIMATION(32),
    WAIT(9),
    FANFARE_PLAY2(478),
    { 0x89, 0x50,  0x0400,  0x00000002,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs168_g2_s0_station_sref_script[] = { /* 0x821c980 */
    DEBUGINFO_O(215),
    SELECT_MAP(168),
    SELECT_WEATHER(-1),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_ESCAPE_THROUGH_THE_SNOW),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs168_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs168_g2_s0_station_sref_script }; /* 0x821ca10 */

static const struct ScriptCommand s_gs168_g2_s0_lives0_dlg0[] = { /* 0x821ca1c */
    DEBUGINFO_O(229),
    SELECT_ANIMATION(5),
    { 0x3b, 0x36,  0x0004,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    { 0x3b, 0x36,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f0724916e9c4cb92db9cb479f81152945521457451b485d605611b79d721d101@@)),
    VARIANT_DEFAULT((@@STRING:27cc09c9252a2257d5d31dac612362b25f9c3c0b8cd3fb1ef0da1d1f0bf8da3b@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_SOUTHEAST),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:02894f7a00f15bb70c4b2568fa07e6ba34865857a71e092617338209320d65d7@@)),
    VARIANT_DEFAULT((@@STRING:85c8b26b5cd523d8d748e4ff8e16cc36d94e3de39968063b86df8e62ed0181b3@@)),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_EAST),
    ALERT_CUE(6),
    MSG_NPC(1, (@@STRING:ef992f18eb5b837c995732a54e49aaa2bea54de3cf2c217b913e6e2cce5042f7@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs168_g2_s0_lives1_dlg0[] = { /* 0x821cc58 */
    DEBUGINFO_O(263),
    SELECT_ANIMATION(5),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x56, 0x00,  0x0000,  0x00000058,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    SELECT_ANIMATION(2),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINLEFT1, DIRECTION_NORTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_SPINRIGHT1, DIRECTION_EAST),
    AWAIT_CUE(6),
    HALT,
};

static const struct GroundLivesData s_gs168_g1_s0_lives[] = { /* 0x821cd58 */
    /*  0 */ {   0,   2,   0,   0, {  64,  23, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs168_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  64,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs168_g1_s0_lives1_dlg0,
    } },
    /*  2 */ {  83,   6,   0,   0, {  82,  22, 0, CPOS_HALFTILE }, {
        [0] = s_gs168_g1_s0_lives2_dlg0,
    } },
};

static const struct GroundLivesData s_gs168_g2_s0_lives[] = { /* 0x821cda0 */
    /*  0 */ {   0,   2,   0,   0, {  78,  23, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs168_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  81,  25, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs168_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs168_g1_s0_effs[] = { /* 0x821cdd0 */
    /*  0 */ {   0,   0,   1,   1, {  64,  24, 0, CPOS_HALFTILE }, s_gs168_g1_s0_eff0_script },
};

static const struct GroundEffectData s_gs168_g2_s0_effs[] = { /* 0x821cddc */
    /*  0 */ {   0,   0,   1,   1, {  79,  24, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x821cde8 */
    &s_gs168_g0_s0_station_sref,
    &s_gs168_g1_s0_station_sref,
    &s_gs168_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs168_g0_sectors[] = { /* 0x821cdf4 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs168_g1_sectors[] = { /* 0x821ce1c */
    { LPARRAY(s_gs168_g1_s0_lives), 0,NULL, LPARRAY(s_gs168_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs168_g2_sectors[] = { /* 0x821ce44 */
    { LPARRAY(s_gs168_g2_s0_lives), 0,NULL, LPARRAY(s_gs168_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs168_groups[] = { /* 0x821ce6c */
    { LPARRAY(s_gs168_g0_sectors) },
    { LPARRAY(s_gs168_g1_sectors) },
    { LPARRAY(s_gs168_g2_sectors) },
};

static const struct GroundLink s_gs168_links[] = { /* 0x821ce84 */
    {},
};

const GroundScriptHeader gGroundScript_gs168 = { LPARRAY(s_gs168_groups), s_gs168_links }; /* 0x821ce8c */
