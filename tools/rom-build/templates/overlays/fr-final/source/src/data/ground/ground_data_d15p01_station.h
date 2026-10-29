







static const struct ScriptCommand s_gs211_g0_s0_station_sref_script[] = { /* 0x8264158 */
    DEBUGINFO_O(10),
    SELECT_MAP(211),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs211_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs211_g0_s0_station_sref_script }; /* 0x82641c4 */

static const struct ScriptCommand s_gs211_g1_s0_station_sref_script[] = { /* 0x82641d0 */
    DEBUGINFO_O(19),
    SELECT_MAP(211),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs211_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs211_g1_s0_station_sref_script }; /* 0x8264250 */

static const struct ScriptCommand s_gs211_g1_s0_lives0_dlg0[] = { /* 0x826425c */
    DEBUGINFO_O(32),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(2, (@@STRING:2ddef278b108cb08b143aa7c6f9f764bbc79574b5c7ee68013a89e50a422f517@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:828e5121b1c5c1e2930b8afeff26f662218bab0cd96ceed317836b516c304801@@)),
    MSG_NPC(2, (@@STRING:fbe216ba677e6176c0b25b13ce779a4510eba2ddf7a66439dc217f2c6be58070@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:d3e485e438a2c78ff05dd67a36a825a332bfa261a0fef54f5318c331a1114217@@)),
    MSG_NPC(2, (@@STRING:180cfa6a95ef839e42be419f91cbf832584b4a4c4ee014177a2fae8605b664c8@@)),
    TEXTBOX_CLEAR,
    MSG_INSTANT((@@STRING:51ae92d233e088ce32166e5788e2f275fa9cf4957afe9736fc9ad29d96b378cd@@)),
    MSG_INSTANT((@@STRING:d257ad5514bf8b91ad6a7af9ea6f25f7a8814dcb9911aeccf6bb559741dc5d33@@)),
    MSG_INSTANT((@@STRING:ec53b5fb7aedf1e8500777810848e4a1f7f859d7f3d6aa72d50f0210c70a6a07@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:ff73d68170b354dafff4a3290a104006c6f99f36ba029313a8e6eadfbcab7af8@@)),
    MSG_NPC(2, (@@STRING:2c4ea39b960e3b4121e9b5924ca5b1c5f39bcbefb72493a5ece986bbec6473fa@@)),
    MSG_NPC(2, (@@STRING:c72ec9b0890dc1ebec7184641ac8c291ea76cf28e77d721a88aff645c3df93f8@@)),
    MSG_NPC(2, (@@STRING:50a2b0c84e4a0184c92fd288268042d7b4239853d50a4a5e4e93bf19faa67b2c@@)),
    MSG_NPC(2, (@@STRING:ba61d1cd8124d48a435eb270b8deb0dc94c9340c5e197805cbe592c3a5c542f0@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY(212),
    MSG_INSTANT((@@STRING:9c24c4b8905745eac85759f75bc874a6e765d1e6f42dbd87f475433a144368c6@@)),
    WAIT_FANFARE1(212),
    MSG_INSTANT((@@STRING:a7a652c338f994a26302f8ee9a9b3a15332bb5724fc1c2558a7965dcb349d656@@)),
    FANFARE_PLAY(205),
    MSG_INSTANT((@@STRING:a38d23d92f1cab6e482a3b68612d10ee675dca4bea47992418b6a3f83294a9da@@)),
    WAIT_FANFARE1(205),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};






static const struct ScriptCommand s_gs211_g1_s0_lives1_dlg0[] = { /* 0x8264734 */
    DEBUGINFO_O(73),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs211_g1_s0_lives[] = { /* 0x8264774 */
    /*  0 */ {   0,   4,   0,   0, {  34,  42, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs211_g1_s0_lives0_dlg0,
    } },
    /*  1 */ { 133,   0,   0,   0, {  34,  37, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs211_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs211_g1_s0_effs[] = { /* 0x82647a4 */
    /*  0 */ {   0,   0,   1,   1, {  34,  39, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x82647b0 */
    &s_gs211_g0_s0_station_sref,
    &s_gs211_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs211_g0_sectors[] = { /* 0x82647b8 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs211_g1_sectors[] = { /* 0x82647e0 */
    { LPARRAY(s_gs211_g1_s0_lives), 0,NULL, LPARRAY(s_gs211_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs211_groups[] = { /* 0x8264808 */
    { LPARRAY(s_gs211_g0_sectors) },
    { LPARRAY(s_gs211_g1_sectors) },
};

static const struct GroundLink s_gs211_links[] = { /* 0x8264818 */
    {},
};

const GroundScriptHeader gGroundScript_gs211 = { LPARRAY(s_gs211_groups), s_gs211_links }; /* 0x8264820 */
