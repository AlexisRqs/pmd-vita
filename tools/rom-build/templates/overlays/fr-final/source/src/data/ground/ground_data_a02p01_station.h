









static const struct ScriptCommand s_gs164_g0_s0_station_sref_script[] = { /* 0x8218140 */
    DEBUGINFO_O(12),
    SELECT_MAP(164),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs164_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs164_g0_s0_station_sref_script }; /* 0x82181ac */

static const struct ScriptCommand s_gs164_g1_s0_station_sref_script[] = { /* 0x82181b8 */
    DEBUGINFO_O(21),
    BGM_SWITCH(MUS_THE_ESCAPE),
    { 0x23, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_MAP(164),
    { 0x2d, 0x09,  0x0000,  0x00000021,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:d92bda0a991cb5f80df293269c06350f44eefb5da0dbb709f9057421933f39e2@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:10a7f50c557b147426a231a580586717fb10fba77caa8f048ca18a33bab3a94c@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:cdc4a94627e282c80a400adba2475c99f8609a00427d580ee868bae45724e2cb@@)),
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs164_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs164_g1_s0_station_sref_script }; /* 0x8218330 */


static const struct ScriptCommand s_gs164_g1_s0_lives0_dlg0[] = { /* 0x821833c */
    DEBUGINFO_O(44),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    CAMERA_PAN(256, 0),
    ALERT_CUE(6),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:fc0cadaf73747da42d5daf2d281f29e2d5c97936196a8d8578e0f90ba82c4ef7@@)),
    VARIANT_DEFAULT((@@STRING:0216cac74a46cce2c707cb0c7c97720f6847a80eac66aa2a05c68db6446a5a0e@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs164_g1_s0_lives1_dlg0[] = { /* 0x8218458 */
    DEBUGINFO_O(61),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    CAMERA_PAN(256, 1),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    AWAIT_CUE(6),
    HALT,
};

static const struct GroundLivesData s_gs164_g1_s0_lives[] = { /* 0x82184d8 */
    /*  0 */ {   0,   2,   0,   0, {  25,  19, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs164_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   2,   0,   0, {  26,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs164_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs164_g1_s0_effs[] = { /* 0x8218508 */
    /*  0 */ {   0,   0,   1,   1, {  40,  20, 0, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8218514 */
    &s_gs164_g0_s0_station_sref,
    &s_gs164_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs164_g0_sectors[] = { /* 0x821851c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs164_g1_sectors[] = { /* 0x8218544 */
    { LPARRAY(s_gs164_g1_s0_lives), 0,NULL, LPARRAY(s_gs164_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs164_groups[] = { /* 0x821856c */
    { LPARRAY(s_gs164_g0_sectors) },
    { LPARRAY(s_gs164_g1_sectors) },
};

static const struct GroundLink s_gs164_links[] = { /* 0x821857c */
    /* link   0 */ { { /*x*/  34, /*y*/  19, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  35, /*y*/  21, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs164 = { LPARRAY(s_gs164_groups), s_gs164_links }; /* 0x821858c */
