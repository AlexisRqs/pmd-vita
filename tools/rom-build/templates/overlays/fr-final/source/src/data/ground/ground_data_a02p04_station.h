












static const struct ScriptCommand s_gs167_g0_s0_station_sref_script[] = { /* 0x8219784 */
    DEBUGINFO_O(15),
    SELECT_MAP(167),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs167_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs167_g0_s0_station_sref_script }; /* 0x82197f0 */

static const struct ScriptCommand s_gs167_g1_s0_station_sref_script[] = { /* 0x82197fc */
    DEBUGINFO_O(24),
    SELECT_MAP(167),
    SELECT_ENTITIES(-1, 0),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    WAIT(120),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs167_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs167_g1_s0_station_sref_script }; /* 0x821986c */

static const struct ScriptCommand s_gs167_g2_s0_station_sref_script[] = { /* 0x8219878 */
    DEBUGINFO_O(36),
    SELECT_MAP(167),
    SELECT_ENTITIES(-1, 0),
    BGM_SWITCH(MUS_THE_ESCAPE),
    { 0x22, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x001e,  0x00000000,  0x00000000, NULL },
    { 0x26, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0000,  0x00000021,  0x00000000, NULL },
    MSG_ON_BG_AUTO(30, (@@STRING:2cb771985b6048258715305a7587b8f3fe6d9093ae97bd2389da690f719912a2@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:c5cf40f234c4d1c363ad21acd9a385b6a1decc2e7d6a595276a95e6758337b0a@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:a756188052b01b4e43f846ebccf36e5d61c383fe9ce43c5244cf3d259de46ab7@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:ec5ae8933dc3520eb48e44e950c1a00572965aaa9cc3201a894c03cfff2c60ad@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:b88c46a2a959e446cbc6a1c562d741c40c40b7daf1fba60c9ad56b94c08f0133@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:7222a51ee23e371aefda42f479f3fd08945ccf0ae40c9eede3679e066c730c15@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:dcd98a182c9809d2c6073ab851b1c09da28b77ea782521904b427271d8fe48ec@@)),
    MSG_ON_BG_AUTO(30, (@@STRING:ba4f28a119142858ab0dc20cd2bf160aae5752e98eaca0ec61e6a22f307b78c5@@)),
    BGM_FADEOUT(120),
    { 0xe0, 0x00,  0x0018,  0x00000000,  0x00000000, NULL },
    TEXTBOX_CLEAR,
    WAIT(1),
    { 0x25, 0x01,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    RET,
};

static const ScriptRef s_gs167_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs167_g2_s0_station_sref_script }; /* 0x8219b4c */


static const struct ScriptCommand s_gs167_g2_s0_eff0_script[] = { /* 0x8219b58 */
    DEBUGINFO_O(66),
    CAMERA_END_PAN,
    WAIT(1),
    AWAIT_CUE(4),
    CAMERA_INIT_PAN,
    WALK_GRID(256, 0),
    AWAIT_CUE(4),
    WALK_GRID(153, 3),
    AWAIT_CUE(4),
    WAIT(45),
    { 0x23, 0x00,  0x005a,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(4),
    END_DELETE,
};

static const struct ScriptCommand s_gs167_g2_s0_lives0_dlg0[] = { /* 0x8219c28 */
    DEBUGINFO_O(82),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    ALERT_CUE(4),
    WAIT(120),
    ALERT_CUE(6),
    WALK_GRID(256, 1),
    CMD_UNK_93(4, DIR_TRANS_11, 34),
    WAIT(80),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:f0bdbe5662b74691644c8ab6d8efc8ead0588ad228e192d6a9d01a3a060bbe55@@)),
    VARIANT(/* == */  1, (@@STRING:823ecc8a23124f6ad8c376bee0301e8ea1ba2e4eb68ebadd168db6ec344a24ef@@)),
    VARIANT(/* == */  3, (@@STRING:f0ec9ce1e14297df04f35a40376272100a73a69ccca7571cb2ce66a837e5ee47@@)),
    VARIANT(/* == */  3, (@@STRING:5727c10697eb8f715ef5a2f1c6b6d1cac14b87df338829f15a8a7a1af6d6a54b@@)),
    VARIANT_DEFAULT((@@STRING:69f812f63595061039ee4c104530217bce63eaf5ae1a4dc2ab8c737cf2f0afcf@@)),
    VARIANT_DEFAULT((@@STRING:b2a37ad498e5eab16cbd841e6db7c8698e93e9193a74aa73047e097533c3c9af@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:c5eee58833075b840da77c8d82afb4919cba1368dbfbc51d9857450771227e66@@)),
    VARIANT_DEFAULT((@@STRING:8b25fd5d7f83db2c11337e882b4f51dc397895c3cb898ebc2be6f48ca7d40a97@@)),
    TEXTBOX_CLEAR,
    FANFARE_PLAY2(465),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:4a428ebace9659c11e9b7662aa5455c4be25dca0a719b5d2c61dbb5e794e3064@@)),
    VARIANT_DEFAULT((@@STRING:09e19155a7f725c4c3f2abd3045432f4691e3ea505219ee18597d284f6a917f5@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:1139f1c08a35cc5002b12f01815ae7fdfc5ced37bc465a56c439923999736762@@)),
    VARIANT(/* == */  1, (@@STRING:b4649154d785bf8eca2d62cb47c32776da811021fd6e57164a7d2846eb72922d@@)),
    VARIANT_DEFAULT((@@STRING:4794a1e78f14fbf50fd023251cfd44184e618f8faca64d15934b7d5339364762@@)),
    VARIANT_DEFAULT((@@STRING:57200daaf25f1d03d5c08285dce10a208536afa0b79b5aa9754b14b3a13e0046@@)),
    TEXTBOX_CLEAR,
    WAIT(90),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:b3df3e6f6bea5e9b1a96a029380e49e1f36a51a08e9dffc32061a6aa8e50384d@@)),
    VARIANT(/* == */  3, (@@STRING:dffb4163fe9d232586008847c226751323e62dd94eef0c5b8abea2047df33e90@@)),
    VARIANT_DEFAULT((@@STRING:b8582bb4c0b96b0e60cacad54d50001aab4fe8cd2815034f9e9c81d8547c7690@@)),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:19a51fc1ea524f8fa404a1eef6f2bc4e9300a15e797d6981d8abc3dc59218fb7@@)),
    VARIANT(/* == */  1, (@@STRING:e9def30181fce4dda7383912f5507c7ea649520eb6478ffd0f2d68f987fdfdeb@@)),
    VARIANT(/* == */  1, (@@STRING:1d308356a6adafa6b4ffa7113ca8b01007376c1c3f1b535160bc9cba7eb2d922@@)),
    VARIANT(/* == */  1, (@@STRING:cd6de13161c1e029c32f8f7249eb55caaf67cbe0852a37d78c887fa0eb5dd3ed@@)),
    VARIANT(/* == */  3, (@@STRING:b74692d29f2efb2416ecb2aea58d81155c05e78326f00a55f5f3075c8c83b4dd@@)),
    VARIANT(/* == */  3, (@@STRING:289b9a6d4a0cf492fe877a6f9fcc649c81e33fb01c12e1b72033f87374dddbac@@)),
    VARIANT(/* == */  3, (@@STRING:e5f9e5d20f7afa6389828ca9aa30a1d273ec3cd58d57ab8af2fe790067aa7ac5@@)),
    VARIANT(/* == */  3, (@@STRING:cff76fc1437cc64b61cc940e0cf520d5b21ca22fd4e4513f66b514f98f628417@@)),
    VARIANT_DEFAULT((@@STRING:ae91c089d4f336e79dcf3f410524cfd32ee74dea2ff9f88c467cd6d46f800591@@)),
    VARIANT_DEFAULT((@@STRING:1f9f625381b0c09519996dc9631b65f83500ad3705538b63326c92e21db53796@@)),
    VARIANT_DEFAULT((@@STRING:243d359f992d04a8deda56384433ef6265d81dfea9a6b528b8545a74cd9fae61@@)),
    VARIANT_DEFAULT((@@STRING:4f7d51a8a3e93ec27a515181f22d73293df240700fd34f4a5b3f852270b2cff9@@)),
    TEXTBOX_CLEAR,
    { 0x2e, 0x15,  0x0001, -0x00000002,  0x00000000, NULL },
    ASK3_VAR(FALSE, /*default*/ -1, /* speaker */ 1, PARTNER_TALK_KIND),
    VARIANT(/* == */  1, (@@STRING:a87c89d33194b584a5e833b0ea3fd4cf546fbb2ef735fc256b38f1bedffe28f2@@)),
    VARIANT(/* == */  3, (@@STRING:dbd337342d9d9bc29c584e940050ec6bb71c0c35f711255c83b956025dc8832b@@)),
    VARIANT_DEFAULT((@@STRING:525df379b779542c95224af4edee3a5d4994fb5d4eec01e9a6a9d3c7e112bd90@@)),
    CHOICE(/* label */  2, (@@STRING:d7f2e5e216fd71105a3617db942e881abfb0abbbd52809a57e31c57ff5f7196e@@)),
    CHOICE(/* label */  3, (@@STRING:cd7e50557d74f92d5ecdc64f7bf1fd269bb048334e1e5c46343d1474de25d2c6@@)),
  LABEL(2), /* = 0x02 */
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
    TEXTBOX_CLEAR,
    WAIT(30),
    FANFARE_PLAY2(455),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x0000000c),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:425ca0937d90f3f84f93ef49ce06a44a06427877ffc87bfe6d5102e1f235f419@@)),
    VARIANT(/* == */  1, (@@STRING:74251dba75d6012a2af623f2c7a1785cc90b8ec6a295056c2880d490b8f1678c@@)),
    VARIANT_DEFAULT((@@STRING:b5182b0c902564f67531b2abcf4097e71c66eac62bb2a1cf8d51d5f0b6c8c4c5@@)),
    VARIANT_DEFAULT((@@STRING:6fa7773ba9dbffdcf47b111d48590b058ad767244780b89834c4420bceb46c9c@@)),
    TEXTBOX_CLEAR,
    WAIT(30),
    PORTRAIT_REP(0x0001, 0x00000005),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:058309283ce8a4a067aa95f294ec12077969a72dc4b78c5917f871c6b0143425@@)),
    VARIANT(/* == */  1, (@@STRING:4708b0cada7e75df2da1dcabfe602e640ccdf00a87e9e0b553fd3c04f87cc13e@@)),
    VARIANT_DEFAULT((@@STRING:c5bc39ed6a709fd9df671cc6657959548a9c59d09c6fd6ba05b9a2f424d191c3@@)),
    VARIANT_DEFAULT((@@STRING:0f64a717abb2407ca31424266c8b704587d5841c959324033d29c063d8d90e35@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(4),
  LABEL(3), /* = 0x03 */
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 1),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0001, 0x0000000b),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:00631970a2c3c3a78e9a1266f857e5408629723d287969c26f2774be940e7f47@@)),
    VARIANT_DEFAULT((@@STRING:57dd9844335ebf5e7a0d40d05128c82ec444fcce9210d467a454ec61df727910@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_NPC(1, (@@STRING:9a0efe6a51a362e6ce764ac89be974694695a3dabaf8cbbe44dda867ca48b80a@@)),
    MSG_NPC(1, (@@STRING:97c9758697b2b6939cd9393037a1e8b45f7e89c6543babb547d148522f73643d@@)),
    MSG_NPC(1, (@@STRING:f6659de1be282df0f36ee0d45126f069860582934f5cf1b0d0b79bf19d6d6e40@@)),
    MSG_NPC(1, (@@STRING:357d840373f4437f98ab023be592d8ee30f9ac4a9984b2f9b845f44cad11cd2b@@)),
    TEXTBOX_CLEAR,
    WAIT(60),
    PORTRAIT_REP(0x0001, 0x00000002),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:3fcb8dbf1241114df174529e50a7361e8b54853457e9867ded768544c645cf6a@@)),
    VARIANT(/* == */  1, (@@STRING:c093fdb16b4f31025afcfb9a4d6cfc2bbabd4ab1105d761fd33170c129bc60fc@@)),
    VARIANT(/* == */  1, (@@STRING:3358131e351cd28e94790ca08b6c524e7c67134149524c750929b76e6c3b12c8@@)),
    VARIANT_DEFAULT((@@STRING:58a84602334f8ffb94799a482df9beb8d3f94a3d18f91c359a7a6accfa684354@@)),
    VARIANT_DEFAULT((@@STRING:8cb5748e881e099d5e43cccf5c34e4439bb613400885e8f3caab67ab51f5e0a7@@)),
    VARIANT_DEFAULT((@@STRING:ca2404e33d54d53e8a871d2d68268edbc08e34a451590ae0bcb929a1560df4ac@@)),
    TEXTBOX_CLEAR,
    JUMP_LABEL(4),
    UPDATE_VARINT(CALC_SET, EVENT_LOCAL, 0),
  LABEL(4), /* = 0x04 */
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e6696c7aef57fdf588acd2fdc6725ddc8eda45091dae4f0d537381bba4b0ab00@@)),
    VARIANT(/* == */  1, (@@STRING:8c4681130449457b145dc6ed85fa4da697505edb6b116ef47c268bf979faa12e@@)),
    VARIANT_DEFAULT((@@STRING:5f81d3ae6b4215fad6c088672631ed021548510df157912e0f5dbbdd44fa270d@@)),
    VARIANT_DEFAULT((@@STRING:1105cc2d8a5c0179beda601f030c02c39f2494067e68c9feb4370c57988e4729@@)),
    PORTRAIT_REP(0x0001, 0x00000009),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:ff16c163f0ff7b5ce837e69d9b7d6f8bbef27f52dc6bd91c3684c91f60438bcf@@)),
    VARIANT_DEFAULT((@@STRING:126b07b2e556aaf6e901283bb35401eea82295409dce2219373a7a8cdbcbf4f2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(4),
    ALERT_CUE(6),
    AWAIT_CUE(5),
    PORTRAIT_REP(0x0001, 0x00000000),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:011b5136b03f340a118da2dec867c4032e42f18b126693c93da8c6cfbf8ad15e@@)),
    VARIANT(/* == */  3, (@@STRING:2eaf4ac38d76ad6b2b799f5cc4792f76acaa8b99ebe47a68a3a1b9a27f7b461a@@)),
    VARIANT_DEFAULT((@@STRING:011b5136b03f340a118da2dec867c4032e42f18b126693c93da8c6cfbf8ad15e@@)),
    TEXTBOX_CLEAR,
    ROTATE_TO(10, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    WAIT(30),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e73671083fdf5e9dcb02a52981591028ba5ae07d01da754ff3faa8724978e6a7@@)),
    VARIANT(/* == */  1, (@@STRING:ce257b1fd15c0d4b323d4a9f19562b51ae77ba34b6d16b5c2861c54e2f456318@@)),
    VARIANT(/* == */  1, (@@STRING:185ffb3dcdf5b75198f0e2c6fa574bb12b0ae682b02cac20ebc4f0fafe6ef7b2@@)),
    VARIANT(/* == */  1, (@@STRING:0e882e0e8d20596157d64b450d98b966237a859bd9524efff6c53155df39689b@@)),
    VARIANT(/* == */  3, (@@STRING:0273c89eb45a63571c1da349b0f6703955935e88b2333b57e22a4a6966e50679@@)),
    VARIANT(/* == */  3, (@@STRING:d186670454f95ba0bd30e88f83b8d10318c5cb715fe16dfe482b85c6ce4967ca@@)),
    VARIANT(/* == */  3, (@@STRING:074d2e87bac320bc817ea6fbf57a550abe5762f5295a2b69017c8f443b43d691@@)),
    VARIANT(/* == */  3, (@@STRING:f594a46c50a791ab7d29bc21394f339d49241cd473e554d17dd067dcbe46e29c@@)),
    VARIANT_DEFAULT((@@STRING:31436c78651fa5a67a50b80693e9717caca15c0daae342f47bdc57cd25cb936e@@)),
    VARIANT_DEFAULT((@@STRING:0f504ef0b3163f00292a8c887d56030751e0233b9ce1ae789f8919900763c50d@@)),
    VARIANT_DEFAULT((@@STRING:444de26de61e1009f7c0f7d20bc22c91334c94940a1be7d5ac75988d4623cd9d@@)),
    VARIANT_DEFAULT((@@STRING:f594a46c50a791ab7d29bc21394f339d49241cd473e554d17dd067dcbe46e29c@@)),
    TEXTBOX_CLEAR,
    PORTRAIT_REP(0x0001, 0x00000001),
    MSG_VAR(2, PARTNER_TALK_KIND, 1),
    VARIANT(/* == */  1, (@@STRING:e3ab304672e2d77193375bb5f5fe31c36e24c086b002f5963d2c1a713795f19f@@)),
    VARIANT(/* == */  1, (@@STRING:e4f3e340181c3cc5eafa27783f6ea2173e67889788c7c0a3f1fbd6296e02f9dc@@)),
    VARIANT(/* == */  3, (@@STRING:01c573481f4e8bab822b205ee2cd3d0a3ff3f948ef07a88ec3a01ef33da148d0@@)),
    VARIANT(/* == */  3, (@@STRING:e83213d6da41ad1ec7b1aa14ad1c3fe49f2ea1c8d91f4511969806ddac74a253@@)),
    VARIANT_DEFAULT((@@STRING:03d1fa766059ba5b522500813d7303b3064f15502b669895ab75330d5948be1d@@)),
    VARIANT_DEFAULT((@@STRING:eb14414d98ef4db7cf91534c1533b1ab35f36e96efef123586af00085789f5b2@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(6),
    ALERT_CUE(4),
    WAIT(15),
    WALK_GRID(153, 4),
    ALERT_CUE(3),
    HALT,
};



static const struct ScriptCommand s_gs167_g2_s0_lives1_dlg0[] = { /* 0x821b5d4 */
    DEBUGINFO_O(265),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0001,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(6),
    { 0x53, 0x00,  0x0000,  0x0000001f,  0x00000000, NULL },
    WAIT(10),
    WALK_GRID(153, 2),
    AWAIT_CUE(6),
    { 0x54, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WAIT(30),
    SELECT_ANIMATION(2),
    { 0x89, 0x10,  0x0099,  0x00000004,  0x00000000, NULL },
    ALERT_CUE(5),
    AWAIT_CUE(6),
    CALL_SCRIPT(NOTICE_FUNC),
    WAIT(15),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTH),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_SOUTHWEST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 1, /* to label */ 0),
    CALL_SCRIPT(JUMP_SURPRISE_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    JUMPIF(JUDGE_EQ, EVENT_LOCAL, 0, /* to label */ 1),
  LABEL(0), /* = 0x00 */
    CALL_SCRIPT(SMILE_START_FUNC),
    WAIT(30),
    CALL_SCRIPT(SMILE_END_FUNC),
    AWAIT_CUE(6),
  LABEL(1), /* = 0x01 */
    { 0x54, 0x00,  0x002d,  0x00000000,  0x00000000, NULL },
    WAIT(160),
    SELECT_ANIMATION(2),
    WAIT(30),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(153, 3),
    WAIT(30),
    ROTATE_TO(4, DIR_TRANS_11, DIRECTION_NORTHEAST),
    ALERT_CUE(5),
    AWAIT_CUE(6),
    WALK_GRID(153, 4),
    HALT,
};

static const struct GroundLivesData s_gs167_g2_s0_lives[] = { /* 0x821b904 */
    /*  0 */ {   0,   6,   0,   0, {  29,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs167_g2_s0_lives0_dlg0,
    } },
    /*  1 */ {  34,   6,   0,   0, {  31,  38, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs167_g2_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs167_g1_s0_effs[] = { /* 0x821b934 */
    /*  0 */ {   0,   0,   1,   1, {  16,   8, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs167_g2_s0_effs[] = { /* 0x821b940 */
    /*  0 */ {   0,   0,   1,   1, {  16,   8, CPOS_HALFTILE, CPOS_HALFTILE }, s_gs167_g2_s0_eff0_script },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x821b94c */
    &s_gs167_g0_s0_station_sref,
    &s_gs167_g1_s0_station_sref,
    &s_gs167_g2_s0_station_sref,
};

static const struct GroundScriptSector s_gs167_g0_sectors[] = { /* 0x821b958 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs167_g1_sectors[] = { /* 0x821b980 */
    { 0,NULL, 0,NULL, LPARRAY(s_gs167_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs167_g2_sectors[] = { /* 0x821b9a8 */
    { LPARRAY(s_gs167_g2_s0_lives), 0,NULL, LPARRAY(s_gs167_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptGroup s_gs167_groups[] = { /* 0x821b9d0 */
    { LPARRAY(s_gs167_g0_sectors) },
    { LPARRAY(s_gs167_g1_sectors) },
    { LPARRAY(s_gs167_g2_sectors) },
};

static const struct GroundLink s_gs167_links[] = { /* 0x821b9e8 */
    /* link   0 */ { { /*x*/  16, /*y*/  37, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   1 */ { { /*x*/  14, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   2 */ { { /*x*/  18, /*y*/  38, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   3 */ { { /*x*/  12, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
    /* link   4 */ { { /*x*/   1, /*y*/  40, /*flags*/ CPOS_HALFTILE, CPOS_HALFTILE }, /*w*/  1, /*h*/  1, /*ret*/ 1, /*?*/ 0 },
};

const GroundScriptHeader gGroundScript_gs167 = { LPARRAY(s_gs167_groups), s_gs167_links }; /* 0x821ba10 */
