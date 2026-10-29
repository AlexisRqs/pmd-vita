









static const struct ScriptCommand s_gs182_g0_s0_station_sref_script[] = { /* 0x8232124 */
    DEBUGINFO_O(12),
    SELECT_MAP(182),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs182_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs182_g0_s0_station_sref_script }; /* 0x8232190 */

static const struct ScriptCommand s_gs182_g1_s0_station_sref_script[] = { /* 0x823219c */
    DEBUGINFO_O(21),
    SELECT_MAP(182),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_STEEL),
    AWAIT_CUE(3),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs182_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs182_g1_s0_station_sref_script }; /* 0x823221c */

static const struct ScriptCommand s_gs182_g1_s0_lives0_dlg0[] = { /* 0x8232228 */
    DEBUGINFO_O(34),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000064,  0x00000000, NULL },
    ALERT_CUE(3),
    ALERT_CUE(6),
    WALK_RELATIVE(256, 0, -100),
    WAIT(15),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:786778471cb63bebf8955ad671de5ad90a1319b3f97941b3b56262fef4755e8e@@)),
    VARIANT(/* == */  1, (@@STRING:37453ccf3222b52885cc3d4d395b54afc76c488bb92c3b1c4d16b878b18fc2d7@@)),
    VARIANT_DEFAULT((@@STRING:4ff99e8f6e677e35b5e0755f3ed6eda5e5daf253a4b78b50eb61858fad56b18b@@)),
    VARIANT_DEFAULT((@@STRING:6862512e13ddd4a664dd4617ea29e4afd40118522a759e8f81f68a431121624e@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:6e2e191d5ccee7578d6f02c52de418aa5f16c443a14254c6e09de9cb4df3d4a6@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    WAIT(15),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(60),
    { 0x2d, 0x0a,  0x0000,  0x00000002,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:236fa7ac88a2bed5b12d8ff66b29e31f919aaa4b8aeb8165cb3161cb95c82d75@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(6),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f30798d7b51f7d5f7e5ce7348a337d7bb3ba84b5593ec3c7752dbb046bb12283@@)),
    VARIANT_DEFAULT((@@STRING:b96c8096b051adf2cbeb224810693f32ba81ea27557c3a9f5abf6f7d6e5dcbfd@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(45),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(179, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs182_g1_s0_lives1_dlg0[] = { /* 0x82326cc */
    DEBUGINFO_O(96),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000064,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 0, -100),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(179, 0),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs182_g1_s1_lives0_dlg0[] = { /* 0x823282c */
    DEBUGINFO_O(121),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct ScriptCommand s_gs182_g2_s0_station_sref_script[] = { /* 0x823290c */
    DEBUGINFO_O(138),
    SELECT_MAP(182),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_MT_STEEL),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    RET,
};

static const ScriptRef s_gs182_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs182_g2_s0_station_sref_script }; /* 0x823297c */

static const struct ScriptCommand s_gs182_g2_s0_lives0_dlg0[] = { /* 0x8232988 */
    DEBUGINFO_O(150),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0002,  0x00000042,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000044,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000064,  0x00000000, NULL },
    ALERT_CUE(3),
    ALERT_CUE(6),
    WALK_RELATIVE(256, 0, -100),
    WAIT(15),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:33fa5226b740b3208af82c606bace502588e68d576514d2a6ab365c732326495@@)),
    VARIANT(/* == */  1, (@@STRING:23451645a60609c8b73b6c2cee3ae7d19bc87930aedb4306390d0606fcc5beae@@)),
    VARIANT_DEFAULT((@@STRING:bd2218abbb815527b8c27095607b14d7bd66c4d7ada14ca0873e94378b05d3e5@@)),
    VARIANT_DEFAULT((@@STRING:02edf492bc38e28ad2f2bc6d20ea12c96e49c55e2660d53b0e75c0fe79402a00@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    MSG_NPC(-1, (@@STRING:fae2391950ae800e1ca8436ed7bd5ef59b0ae452f264241259f36df4786aee9f@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 1),
    WAIT(15),
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHEAST),
    CALL_SCRIPT(SHOCK_FUNC),
    WAIT(60),
    { 0x2d, 0x0a,  0x0000,  0x00000002,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_MIDRIGHT_TOP_FLIP, 0x0002, 0x00000000),
    MSG_NPC(2, (@@STRING:42d5a41cb8ff56b3b6bdc4b9f3a0d6c9ecc7a2a894f041306569ddc482410dac@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(7),
    AWAIT_CUE(5),
    WAIT(60),
    ALERT_CUE(6),
    FANFARE_PLAY2(470),
    CALL_SCRIPT(SWEAT_FUNC),
    AWAIT_CUE(5),
    WAIT(30),
    ALERT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 34),
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000004),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:d0b3d3905a297239b3265cf3b4e691cfdc4ac785b8bf90a1c3544cda0f500a50@@)),
    VARIANT_DEFAULT((@@STRING:b96c8096b051adf2cbeb224810693f32ba81ea27557c3a9f5abf6f7d6e5dcbfd@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    WAIT(45),
    { 0x23, 0x00,  0x0050,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(179, 1),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    ALERT_CUE(3),
    HALT,
};




static const struct ScriptCommand s_gs182_g2_s0_lives1_dlg0[] = { /* 0x8232e30 */
    DEBUGINFO_O(215),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    { 0x59, 0x00,  0x0000,  0x00000064,  0x00000000, NULL },
    AWAIT_CUE(6),
    WALK_RELATIVE(256, 0, -100),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTHWEST),
    AWAIT_CUE(6),
    CALL_SCRIPT(SWEAT_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CMD_UNK_93(4, DIR_TRANS_10, 0),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_10, DIRECTION_NORTH),
    AWAIT_CUE(6),
    WAIT(15),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WALK_GRID(179, 1),
    { 0x52, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    HALT,
};

static const struct ScriptCommand s_gs182_g2_s1_lives0_dlg0[] = { /* 0x8232fc0 */
    DEBUGINFO_O(243),
    { 0x57, 0x00,  0x0002,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    FANFARE_PLAY2(454),
    SELECT_ANIMATION(22),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    SELECT_ANIMATION(2),
    AWAIT_CUE(7),
    FANFARE_PLAY2(486),
    SELECT_ANIMATION(23),
    STOP_ANIMATION_ON_CURRENT_FRAME,
    ALERT_CUE(5),
    { 0x57, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    END_DELETE,
};

static const struct GroundLivesData s_gs182_g1_s0_lives[] = { /* 0x82330a0 */
    /*  0 */ {   0,   2,   0,   0, {  20,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs182_g1_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs182_g1_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs182_g1_s1_lives[] = { /* 0x82330d0 */
    /*  0 */ {  66,   0,   0,   0, {  22,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs182_g1_s1_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs182_g2_s0_lives[] = { /* 0x82330e8 */
    /*  0 */ {   0,   2,   0,   0, {  20,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs182_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  24,  24, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs182_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundLivesData s_gs182_g2_s1_lives[] = { /* 0x8233118 */
    /*  0 */ {  66,   0,   0,   0, {  22,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs182_g2_s1_lives0_dlg0,
    } },
};

static const struct GroundEffectData s_gs182_g1_s0_effs[] = { /* 0x8233130 */
    /*  0 */ {   0,   0,   1,   1, {  22,  23, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs182_g2_s0_effs[] = { /* 0x823313c */
    /*  0 */ {   0,   0,   1,   1, {  22,  23, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8233148 */
    &s_gs182_g0_s0_station_sref,
    &s_gs182_g1_s0_station_sref,
    &s_gs182_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs182_g0_sectors[] = { /* 0x8233154 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs182_g1_sectors[] = { /* 0x823317c */
    { LPARRAY(s_gs182_g1_s0_lives), 0,NULL, LPARRAY(s_gs182_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
    { LPARRAY(s_gs182_g1_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptSector s_gs182_g2_sectors[] = { /* 0x82331cc */
    { LPARRAY(s_gs182_g2_s0_lives), 0,NULL, LPARRAY(s_gs182_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
    { LPARRAY(s_gs182_g2_s1_lives), 0,NULL, 0,NULL, 0,NULL, 0,NULL, },
};

static const struct GroundScriptGroup s_gs182_groups[] = { /* 0x823321c */
    { LPARRAY(s_gs182_g0_sectors) },
    { LPARRAY(s_gs182_g1_sectors) },
    { LPARRAY(s_gs182_g2_sectors) },
};

static const struct GroundLink s_gs182_links[] = { /* 0x8233234 */
    /* link   0 */ { { /*x*/  22, /*y*/  16, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
    /* link   1 */ { { /*x*/  22, /*y*/  16, /*flags*/ 0, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 2, /*?*/ 1 },
};

const GroundScriptHeader gGroundScript_gs182 = { LPARRAY(s_gs182_groups), s_gs182_links }; /* 0x8233244 */
