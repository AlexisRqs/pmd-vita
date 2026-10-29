







static const struct ScriptCommand s_gs215_g0_s0_station_sref_script[] = { /* 0x82673c8 */
    DEBUGINFO_O(10),
    SELECT_MAP(215),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs215_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs215_g0_s0_station_sref_script }; /* 0x8267434 */

static const struct ScriptCommand s_gs215_g1_s0_station_sref_script[] = { /* 0x8267440 */
    DEBUGINFO_O(19),
    SELECT_MAP(215),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_THERES_TROUBLE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs215_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs215_g1_s0_station_sref_script }; /* 0x82674c0 */

static const struct ScriptCommand s_gs215_g1_s0_lives0_dlg0[] = { /* 0x82674cc */
    DEBUGINFO_O(32),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_NPC(2, (@@STRING:fe0d6f72a1b09f0d9d904777a980bb03a3cefcba9888b077050bffe06f7e4cb6@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:d3c1c7bcfb07e7e16d100c68d1001fe301eb71d9bf0e9f217dc386169aadf78d@@)),
    MSG_NPC(2, (@@STRING:50b166b4b136ec524cd7a0bc1e84b88d6c62dfbf2c024aa2bfbfba94ad5f1d7c@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:601e63cb2e9003dfd459f0842997c66c8abe81093ee175d35e08c99b25e1b69b@@)),
    MSG_NPC(2, (@@STRING:dd857a99d507b367af60e52cb53dd7b089986c3714ac133a38e3e52bd0138c28@@)),
    MSG_NPC(2, (@@STRING:543558f707a9600602944faaab657e55ffacc60e9f839f528a4d4709410e79c2@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:e51c93fae6ed8a0d41468b0adb82ac811bb6fe6a7beb21ab484a1bc107a743dc@@)),
    TEXTBOX_CLEAR,
    MSG_INSTANT((@@STRING:fb2db02d47996d17bc00ec73d0c1537fead5054b270517be506e6a0950e289f7@@)),
    MSG_INSTANT((@@STRING:0dcd6f0d376ee0996bdeedc76270903aaab5d9bd6dbf721d6d53296835b8620f@@)),
    MSG_INSTANT((@@STRING:396f79e1bc9915e8dc7cc3d15746d4023ff8a08a52e2617926fa439e2f4b91bd@@)),
    TEXTBOX_CLEAR,
    MSG_NPC(2, (@@STRING:422d0cdee89aca51c4b3ff4e6062cd8e25a19dd031b2031dc5fd9282871962d0@@)),
    MSG_NPC(2, (@@STRING:34e212bdc1071532078a2b173469709ba381a1c51320775aef33c8d88c5972df@@)),
    MSG_NPC(2, (@@STRING:1f5c3ab084aeb9e18a27f0bc30105ee9477f9df00d4c72845ce90d54314f1913@@)),
    MSG_NPC(2, (@@STRING:34546c6cff2634b2d28fbfb587e02d62458a54105889cf268e778eec9f407abe@@)),
    MSG_NPC(2, (@@STRING:454678b82bffe42c430a9a27a69a7211679369605cac5cddec4e26a6a091b41d@@)),
    MSG_NPC(2, (@@STRING:6eeb809e34bc08d80afc1a283bf2666dff4bcf5ae4a07ce8c52f3c1284837a47@@)),
    TEXTBOX_CLEAR,
    MSG_INSTANT((@@STRING:11b880c580c2a99a54a9dfb9d0878799d3e8615e9be926703abcf78c2b3f078b@@)),
    MSG_INSTANT((@@STRING:a7a652c338f994a26302f8ee9a9b3a15332bb5724fc1c2558a7965dcb349d656@@)),
    MSG_INSTANT((@@STRING:b1bb05c892c0d0acb12083eba4d47a386edd1c7d1bce2f437235959b458d2b8a@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};






static const struct ScriptCommand s_gs215_g1_s0_lives1_dlg0[] = { /* 0x82679c8 */
    DEBUGINFO_O(73),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    HALT,
};

static const struct GroundLivesData s_gs215_g1_s0_lives[] = { /* 0x8267a08 */
    /*  0 */ {   0,   4,   0,   0, {  35,  32, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs215_g1_s0_lives0_dlg0,
    } },
    /*  1 */ { 119,   0,   0,   0, {  35,  26, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs215_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs215_g1_s0_effs[] = { /* 0x8267a38 */
    /*  0 */ {   0,   0,   1,   1, {  35,  29, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8267a44 */
    &s_gs215_g0_s0_station_sref,
    &s_gs215_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs215_g0_sectors[] = { /* 0x8267a4c */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs215_g1_sectors[] = { /* 0x8267a74 */
    { LPARRAY(s_gs215_g1_s0_lives), 0,NULL, LPARRAY(s_gs215_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs215_groups[] = { /* 0x8267a9c */
    { LPARRAY(s_gs215_g0_sectors) },
    { LPARRAY(s_gs215_g1_sectors) },
};

static const struct GroundLink s_gs215_links[] = { /* 0x8267aac */
    {},
};

const GroundScriptHeader gGroundScript_gs215 = { LPARRAY(s_gs215_groups), s_gs215_links }; /* 0x8267ab4 */
