







static const struct ScriptCommand s_gs223_g0_s0_station_sref_script[] = { /* 0x826df80 */
    DEBUGINFO_O(10),
    SELECT_MAP(223),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs223_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs223_g0_s0_station_sref_script }; /* 0x826dfec */

static const struct ScriptCommand s_gs223_g1_s0_station_sref_script[] = { /* 0x826dff8 - PART 1 0:00:31-0:00:45 - New game intro to personality test */
    DEBUGINFO_O(19),
    BGM_STOP,
    SELECT_MAP(223),
    MSG_ON_BG((@@STRING:5f3477fbce766d5e9e8f26880623b9d6c4524bf42642604b36e554a74bdb9df6@@)),
    MSG_ON_BG((@@STRING:862cbc21b417245918f52eb1f643ca41890714b0bae56855c4bf637f114fc922@@)),
    MSG_ON_BG((@@STRING:89f7527dd510c2487ad15d9d799655f7b93d63ac04ebcf3e7212b7498f1f8b2b@@)),
    MSG_ON_BG((@@STRING:11b5748b84bfc1f5470647abfcd42e3d904be7d4d7ea680cf877423243d32114@@)),
    MSG_ON_BG((@@STRING:4b34ea54cc99d8c42093380640f8858fe1c706618bda52f772d3ff7a891c2689@@)),
    MSG_ON_BG((@@STRING:d9d3ea8bfb53ce437975922e890c0af2ae436690fca7486ddf6837d3fb530861@@)),
    TEXTBOX_CLEAR,
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_WELCOME_TO_THE_WORLD_OF_POKEMON),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    SPECIAL_TEXT(SPECIAL_TEXT_PERSONALITY_QUIZ, 0, 0),
    BGM_FADEOUT(30),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs223_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs223_g1_s0_station_sref_script }; /* 0x826e200 */
static const struct GroundEffectData s_gs223_g1_s0_effs[] = { /* 0x826e20c */
    /*  0 */ {   0,   0,   1,   1, {  30,  19, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x826e218 */
    &s_gs223_g0_s0_station_sref,
    &s_gs223_g1_s0_station_sref,
};

static const struct GroundScriptSector s_gs223_g0_sectors[] = { /* 0x826e220 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs223_g1_sectors[] = { /* 0x826e248 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs223_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptGroup s_gs223_groups[] = { /* 0x826e270 */
    { LPARRAY(s_gs223_g0_sectors) },
    { LPARRAY(s_gs223_g1_sectors) },
};

static const struct GroundLink s_gs223_links[] = { /* 0x826e280 */
    {},
};

const GroundScriptHeader gGroundScript_gs223 = { LPARRAY(s_gs223_groups), s_gs223_links }; /* 0x826e288 */
