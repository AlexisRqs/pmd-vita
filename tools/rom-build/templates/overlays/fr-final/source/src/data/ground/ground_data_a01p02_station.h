







static const struct ScriptCommand s_gs163_g0_s0_station_sref_script[] = { /* 0x82163d4 */
    DEBUGINFO_O(10),
    SELECT_MAP(MAP_PERSONALITY_TEST_PURPLE),
    BGM_STOP,
    JUMP_SCRIPT(COMMON_ENTER),
};

static const ScriptRef s_gs163_g0_s0_station_sref = { ENTER_CONTROL, SCRIPT_TYPE_01, NULL, s_gs163_g0_s0_station_sref_script }; /* 0x8216440 */

static const struct ScriptCommand s_gs163_g1_s0_station_sref_script[] = { /* 0x821644c */
    DEBUGINFO_O(19),
    BGM_STOP,
    SELECT_MAP(MAP_PERSONALITY_TEST_PURPLE),
    { 0x2d, 0x09,  0x0000,  0x00000000,  0x00000000, NULL },
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000002),
    MSG_QUIET(0, (@@STRING:c727263cbbf3e2bc5179928bbaa33098be2d3a6fb3d4fae6b23c901332c9c762@@)),
    MSG_QUIET(0, (@@STRING:cc71399372d6f2677e0a9bc67448537f8fcdfc6f7f7db752966ee67161e95f5a@@)),
    MSG_QUIET(0, (@@STRING:de5e0b07e55e63959d0ea4df0ace7c53d2d2f00f6a71acddd0321e12b7d87b04@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    SELECT_ENTITIES(-1, -1),
    BGM_FADEIN(120, 29),
    { 0x22, 0x01,  0x005a,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    { 0x23, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    RET,
};

static const ScriptRef s_gs163_g1_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs163_g1_s0_station_sref_script }; /* 0x8216588 */


static const struct ScriptCommand s_gs163_g1_s0_lives0_dlg0[] = { /* 0x8216594 */
    DEBUGINFO_O(41),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(6),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000002),
    MSG_QUIET(0, (@@STRING:36ab6d13e3fea422b2011b90403d40b43b1c57627511873c469caf08046b0c04@@)),
    MSG_QUIET(0, (@@STRING:974f8dbaba39c5ffdaa8f3ea1043c02bb24d5b7a99b61eff6b6411922ff9c446@@)),
    MSG_QUIET(0, (@@STRING:85e42bb854c23caf0ee96565543cf09603ec53c2ed3f2251fc40dc406df68c3c@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs163_g2_s0_station_sref_script[] = { /* 0x82166dc */
    DEBUGINFO_O(58),
    SELECT_MAP(MAP_PERSONALITY_TEST_PURPLE),
    SELECT_ENTITIES(-1, -1),
    { 0x22, 0x01,  0x003c,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 60, RGB_U32(0xFF, 0xFF, 0xFF)),
    RET,
};

static const ScriptRef s_gs163_g2_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs163_g2_s0_station_sref_script }; /* 0x821674c */

static const struct ScriptCommand s_gs163_g2_s0_lives0_dlg0[] = { /* 0x8216758 */
    DEBUGINFO_O(70),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(6),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0001,  0x00000022,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(60),
    BGM_FADEOUT(120),
    PORTRAIT(PLACEMENT_LEFT_BOTTOM_2, 0x0000, 0x00000000),
    MSG_QUIET(0, (@@STRING:ed3adfbbb2cfd173449309732340e1908f880aef019222c73d84a697ef7d95f8@@)),
    MSG_QUIET(0, (@@STRING:b7ad850728956ccabc4f2e22076173ab5fcb74c680b38d672947cc5f982f1460@@)),
    MSG_QUIET(0, (@@STRING:805b7f54dac3ade2bf749f853e6605bea19dac6ebb38f4a36ce517d6a50dad20@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};


static const struct ScriptCommand s_gs163_g3_s0_station_sref_script[] = { /* 0x8216898 */
    DEBUGINFO_O(89),
    SELECT_MAP(MAP_PERSONALITY_TEST_PURPLE),
    SELECT_ENTITIES(-1, -1),
    BGM_FADEIN(60, 37),
    { 0x22, 0x01,  0x005a,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(3),
    FANFARE_PLAY2(506),
    BGM_FADEOUT(90),
    FLASH_TO(TRUE, PALUTIL_KIND_05, 30, RGB_U32(0xFF, 0xFF, 0xFF)),
    WAIT(60),
    RET,
};

static const ScriptRef s_gs163_g3_s0_station_sref = { EVENT_CONTROL, SCRIPT_TYPE_07, NULL, s_gs163_g3_s0_station_sref_script }; /* 0x8216948 */

static const struct ScriptCommand s_gs163_g3_s0_lives0_dlg0[] = { /* 0x8216954 */
    DEBUGINFO_O(105),
    { 0x53, 0x00,  0x0000,  0x01000000,  0x00000000, NULL },
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0000,  0x00000000,  0x00000000, NULL },
    { 0x2d, 0x09,  0x0003,  0x00000052,  0x00000000, NULL },
    { 0xdf, 0x00,  0x0000,  0x00000000,  0x00000000, NULL },
    WAIT(30),
    MSG_QUIET(-1, (@@STRING:90759c7a904b30846e848e2a6f0eb1507e3f4934280cf9eb95f088edb77ae931@@)),
    MSG_QUIET(-1, (@@STRING:221b77cb62f21b4051061cf37c340514201f61474eef8fd5fba986b31ef06ee5@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    FANFARE_PLAY2(465),
    ALERT_CUE(7),
    AWAIT_CUE(5),
    PORTRAIT(PLACEMENT_RIGHT_BOTTOM_FLIP, 0x0002, 0x00000046),
    MSG_NPC(2, (@@STRING:3a65c710a241635be4b103ac6c46a8d7ac44979c385255d683e07dc9a46c0410@@)),
    MSG_NPC(2, (@@STRING:c278bd903ea0d6d8a2e319245ddab1d65478341419df6244f252ffe1f1a62fd3@@)),
    TEXTBOX_CLEAR,
    WAIT(10),
    MSG_QUIET(-1, (@@STRING:302912f17d2f8dc2c5274dbf0ac54deab0d53acf7253a11a5f87ac26d5011f17@@)),
    MSG_QUIET(-1, (@@STRING:c013e32a543c57e322ab749a6d25d32c5307bc76a337cc26bd16ba20cf69f021@@)),
    MSG_QUIET(-1, (@@STRING:51dcc69ded61f32777ead47e0930db2fb996337c8882b16aac88f090dc68e0fd@@)),
  LABEL(2), /* = 0x02 */
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:226e2c7d0caf9690837977314a775d0b379539bff2bc1ec0b17a945928e86cd5@@)),
    CHOICE(/* label */  4, (@@STRING:dfa182489616136a55a62cfcc5a17f2f182feb532037f51279b82af1fddc115f@@)),
    CHOICE(/* label */  5, (@@STRING:5ab41ad3322e195a8c5c8d7319028e044c7df9f3383479251b2b66bfb9ed4313@@)),
  LABEL(5), /* = 0x05 */
    MSG_QUIET(-1, (@@STRING:620bc4e99f5a741688804b4f36062abe90d8999428b3b0d7006e11bf7c5af0f3@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:00963957e6293ad14803a3371d201343304cc09ababfca17aac8f0dbe3fa6cf9@@)),
    CHOICE(/* label */  7, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */  8, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(7), /* = 0x07 */
    MSG_QUIET(-1, (@@STRING:e23041df8f79d62e1fbe508090071b65b66a814926339a44b83bce68656a58bd@@)),
    MSG_QUIET(-1, (@@STRING:ceabf17774704da9c7bd1d37176ee597fbfefed944a6357d275cdc4addcbde6e@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:b63cf968eb5d10634f0908fd689bb263eff53f178234031935e537fbbbab03fc@@)),
    CHOICE(/* label */ 10, (@@STRING:cb7a02d73813d5b230e046a89d87c6aff546eab958220727cb7dfdd4a28a0144@@)),
    CHOICE(/* label */  8, (@@STRING:edf67f763c081b6305dc44f9fdfe91c4b146b9b01df1c85c8cbbe43b42b6fd80@@)),
  LABEL(8), /* = 0x08 */
    MSG_QUIET(-1, (@@STRING:7f270b1b06e7465cc448cd0534779a6ce19df1b5cf760d249825fe1285ac6581@@)),
    MSG_QUIET(-1, (@@STRING:4db6fe9a26591f12ff428e5ec54b3a964ab29f45bb264cf81c100db8edcdf2b8@@)),
    JUMP_LABEL(2),
  LABEL(4), /* = 0x04 */
    MSG_QUIET(-1, (@@STRING:46678f68d942618a31acd58f524d3de1b846333a8bfcec90938e1f654d714b01@@)),
    MSG_QUIET(-1, (@@STRING:e442d408f3bd346693cf708fc93c5d07d6d6371f9fe59b33d1a4e5b560988632@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:36d2490b5c3b85e35dabeca7820f33a47e76c917bf6e115431ef5394e5d4e6c0@@)),
    CHOICE(/* label */ 12, (@@STRING:4e84b26ac4abebc43cde57b894562a3265ff5946887e3c37f12b5ccd500dc44b@@)),
    CHOICE(/* label */ 13, (@@STRING:9e7e0fbc9b74b484238573956c39d0b5a9248bae68cb0725f0d024f2e515c3cc@@)),
  LABEL(12), /* = 0x0c */
    MSG_QUIET(-1, (@@STRING:63b040169ce90be83459e29603cf56e91e451a6ed22df3c726cf09004c752ea8@@)),
    MSG_QUIET(-1, (@@STRING:230f0f4b4abb7775a38d1e6fff20a4e8b75e6d109f04c7bdea44b4a91670772c@@)),
  LABEL(14), /* = 0x0e */
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:fc8a9868da07709b73da07158ced5bf0dfd72886ab16113291f13e5106526894@@)),
    CHOICE(/* label */  5, (@@STRING:74a23d4b6183e8c399073f039ff51b831c61e9b4e2a600ad8a217b3303e646d2@@)),
    CHOICE(/* label */ 15, (@@STRING:984ae8cb11ca85eb41270568cb882cf6aa78cdef7375ab88f27967eedfdd51f2@@)),
  LABEL(15), /* = 0x0f */
    MSG_QUIET(-1, (@@STRING:f8cce287d5ee88020b0bd02a8c1402d6432ed5e45e0e1f3cc159de27245bc6d0@@)),
  LABEL(16), /* = 0x10 */
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:978a863035fbf830b68bf0bc3481fcdff3785a120dad05926f10e8171c6bb55e@@)),
    CHOICE(/* label */ 17, (@@STRING:135f79488bd3533064a08c7ebdd67f5d6691c7cfb29f9d05f1c5e690cc533eda@@)),
    CHOICE(/* label */  5, (@@STRING:686dc8a59c709fd8d02f567ae08efbb11dfcda6370afe155f66ab3078039bb43@@)),
  LABEL(17), /* = 0x11 */
    MSG_QUIET(-1, (@@STRING:e0536f6348d2a8cdd91eb8c9017c26cf4f6eed4f45bcf343de425d9bda40e876@@)),
    MSG_QUIET(-1, (@@STRING:c7ba4ccfb3e0905c64c7b8d5bb9a13c21fee8d42daf61701ffc39777e94b3a6f@@)),
    MSG_QUIET(-1, (@@STRING:4381314e147465106cb1850694a0a9979bc52e8f48ed10100ace8af5d0861b80@@)),
    MSG_QUIET(-1, (@@STRING:60e2b2d22766c3f44e0dac1ee9bab1244ce7053ccbe99f45a32adf72728ebc6d@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:d6c54d4186c33a823c91c060df51d2f6db5e11320d8351c3e070d69c211e4bd7@@)),
    CHOICE(/* label */ 19, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */ 20, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(20), /* = 0x14 */
    MSG_QUIET(-1, (@@STRING:edc6aeafac02113c0215f443026a71555fe1d3d7a6b8481e591ec1b3c8e81402@@)),
    MSG_QUIET(-1, (@@STRING:b492e11d546dd76908d0e00fa9054426a85b63fe80f306af457b706af5fd235a@@)),
    MSG_QUIET(-1, (@@STRING:ed2da6075641a4cf2da4afb74c8394b36f6c6842c5c8bb477ca96ef8aaf6267e@@)),
    MSG_QUIET(-1, (@@STRING:743ca94b1cbf65d0b511d9f366dbec77202d81206d9c8307ee82c2fa73ad5397@@)),
    JUMP_LABEL(14),
  LABEL(19), /* = 0x13 */
    MSG_QUIET(-1, (@@STRING:cc5faa05508031d0442c2281d61b1b08f0d409f17dc1ca3d686da8c33459f2fd@@)),
    MSG_QUIET(-1, (@@STRING:8b2ca841c51011137dc6791eaa0bdccbea5d93aacad93c89272a531dbb110cc9@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:b63cf968eb5d10634f0908fd689bb263eff53f178234031935e537fbbbab03fc@@)),
    CHOICE(/* label */ 10, (@@STRING:cb7a02d73813d5b230e046a89d87c6aff546eab958220727cb7dfdd4a28a0144@@)),
    CHOICE(/* label */ 22, (@@STRING:edf67f763c081b6305dc44f9fdfe91c4b146b9b01df1c85c8cbbe43b42b6fd80@@)),
  LABEL(22), /* = 0x16 */
    MSG_QUIET(-1, (@@STRING:0b155a56afa8a701c8b1382fb3c0952688ead9638d2e9409efdabb2400e7dfcc@@)),
    MSG_QUIET(-1, (@@STRING:d18927474f60eac377ae9c09fbb19b07ee038d06a2134d4d0d1a8d3785c39a9f@@)),
    JUMP_LABEL(16),
  LABEL(13), /* = 0x0d */
    MSG_QUIET(-1, (@@STRING:d5dbf71ab3438f235e5359903d2c68ddafab79044b051d6c3acd3efbe418a04a@@)),
    MSG_QUIET(-1, (@@STRING:187a5803f305c08833ca83ff4e276fca3b0ce8ae117fd89727d90bb7e1e0b0a9@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:8b0cad2b99dd52186876d62231451132698f163350b9edb9930c730e8e7104e0@@)),
    CHOICE(/* label */ 24, (@@STRING:9dede4621363b61900bb4cc6faf4fd09ea665e99c19ce798c0e0329feb7f0663@@)),
    CHOICE(/* label */ 25, (@@STRING:23264f410e61e35d8873a05435eb703df044cf309da033214e3e08ede5302eeb@@)),
  LABEL(24), /* = 0x18 */
    MSG_QUIET(-1, (@@STRING:c77e4fc0ef8f42e00ba12549af910537359ec254c5efbd47030649a139f4ce78@@)),
    MSG_QUIET(-1, (@@STRING:83c502e733705bfc4ae8944021d166e5f63bf19fab24fad7bec5ec678a7b57aa@@)),
    MSG_QUIET(-1, (@@STRING:57bd15c99b1ae2ba25e26ac9688de90a448f2def34ee851c0b1802568fc8dc16@@)),
    MSG_QUIET(-1, (@@STRING:b6340e8a0292c76313c900263dc2da9516578aaffe0b29a191092811091f1adb@@)),
    MSG_QUIET(-1, (@@STRING:482d90326db4a55dd31e922b19925dc957a334a72e1430d6052323df110e2764@@)),
    MSG_QUIET(-1, (@@STRING:73c15d1675e10271f84f4ae77afeaa02bf0810d2f1e33e7125809df701bbc809@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:8b323cb2932001c5e43518018dc96fa88ecaf633f2f8a777d90bdc9fedd75b46@@)),
    CHOICE(/* label */ 27, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */ 28, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(27), /* = 0x1b */
    MSG_QUIET(-1, (@@STRING:3855bd11ea5e7d4c2c4d19be75357cca9afa0069f979889ed4c49cbe0f7cfa42@@)),
    MSG_QUIET(-1, (@@STRING:12fbaef0b2f477e5867abd991371208efc9c2fa0c764d3e7a6c70c44b0cc6e8f@@)),
    JUMP_LABEL(10),
  LABEL(28), /* = 0x1c */
    MSG_QUIET(-1, (@@STRING:9e21fdf0a814bb97d970d8fde6679100721e08422d217c09d747e9ff0c198ea8@@)),
    MSG_QUIET(-1, (@@STRING:415c7785c379a6cee1dfa5beaff7229ab6f4dac4ae79b51494fb9b2072676bc1@@)),
    JUMP_LABEL(10),
  LABEL(25), /* = 0x19 */
    MSG_QUIET(-1, (@@STRING:6e5d8aba70d50eee9e08a110b6cfec93afcd0e175a1b370b286195611e33eba2@@)),
    MSG_QUIET(-1, (@@STRING:1a7471d7c8b8110feeced064786cfd949658e3cd11bed7ab40b6475a7bc71d36@@)),
  LABEL(29), /* = 0x1d */
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:2b2e2b2706e74fde306389724c4fcde206e876818e711573c4e5d8e691785a63@@)),
    CHOICE(/* label */ 30, (@@STRING:8c7eee5478e0644487afd2ecd535aed6ca93cadc1663425466b9a3c416fea6db@@)),
    CHOICE(/* label */ 31, (@@STRING:d86ed8ee033ce3baec4d9f948808af2e0549a3f3ad49eadba71e2493a629e613@@)),
  LABEL(30), /* = 0x1e */
    MSG_QUIET(-1, (@@STRING:75cfe2b262b0cc6766c85af49b8ec77eb7431e129038d4a0e2298f2b68341f75@@)),
    MSG_QUIET(-1, (@@STRING:005900a099038bbd4e4bf78b2970a2941c84bd111c0d0d0992dffb1cf5766ccb@@)),
    JUMP_LABEL(10),
  LABEL(31), /* = 0x1f */
    MSG_QUIET(-1, (@@STRING:0686db64c7772233f351303c29caca4e059152221a0b8aeeefa5f78b19d97c7a@@)),
    MSG_QUIET(-1, (@@STRING:2964ddc31ca3555ebd38bd115631aadefe2f51bb9b0c2e0164a6237a1d47aaf0@@)),
    MSG_QUIET(-1, (@@STRING:9c300604bbc13a2906cebe4a80a606bf8429669721811dc30ab885b8982ce034@@)),
    MSG_QUIET(-1, (@@STRING:8b2ca841c51011137dc6791eaa0bdccbea5d93aacad93c89272a531dbb110cc9@@)),
    ASK2(FALSE, /*default*/ -1, /* speaker */ -1, (@@STRING:523e8d9573ffc0d239a58b35ab516baf51d922043091f79c8a446a582eb3d4a7@@)),
    CHOICE(/* label */ 10, (@@STRING:3ef8014022279d9eab210c2a7e6540e35e0592f15ee9491d1f58489152125160@@)),
    CHOICE(/* label */ 33, (@@STRING:bfd0b2bc7f155b17b1aea7aad8053aa09db23339527041996d6dee69aba415d4@@)),
  LABEL(33), /* = 0x21 */
    MSG_QUIET(-1, (@@STRING:bb230d2453e60254bce6053a84d36cac93922b448c2bad6b3ec72b9929ad743b@@)),
    MSG_QUIET(-1, (@@STRING:e91586fc80ea1aca1a3eb1919fde69f87fad199e9da5bc9319f9bc221a36b483@@)),
    MSG_QUIET(-1, (@@STRING:db4040c9e95d4fe1bcf4c025173f75ec7b1037e2844d9b5779311d8edf3d4679@@)),
    MSG_QUIET(-1, (@@STRING:616923f870bac6571865d4c3bc782e56207055162e6c9ac8dee38ffa7c505b65@@)),
    MSG_QUIET(-1, (@@STRING:d2c08f5fa4014ffbc19648e83581951f9dc946ab5a006c3b3ae6c6989c1bc99d@@)),
    MSG_QUIET(-1, (@@STRING:98aaf85269da181bbf1a6639ee367a8c6c1f4661b4499707a44b8310408f9ea0@@)),
    JUMP_LABEL(29),
  LABEL(10), /* = 0x0a */
    MSG_QUIET(-1, (@@STRING:9fe5a70d152b95bfd7bc58ec39b9c68ec99b5a6bbd8e165b1ec8898b873e1626@@)),
    TEXTBOX_CLEAR,
    ALERT_CUE(3),
    HALT,
};












static const struct ScriptCommand s_gs163_g3_s0_lives1_dlg0[] = { /* 0x8217f50 */
    DEBUGINFO_O(259),
    SELECT_ANIMATION(2),
    { 0x2d, 0x07,  0x0002,  0x00000000,  0x00000000, NULL },
    AWAIT_CUE(7),
    CALL_SCRIPT(SHOCK_FUNC),
    ALERT_CUE(5),
    AWAIT_CUE(7),
    HALT,
};

static const struct GroundLivesData s_gs163_g1_s0_lives[] = { /* 0x8217fd0 */
    /*  0 */ {   0,   0,   0,   0, {  30,  19, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs163_g1_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs163_g2_s0_lives[] = { /* 0x8217fe8 */
    /*  0 */ {   0,   0,   0,   0, {  30,  19, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs163_g2_s0_lives0_dlg0,
    } },
};

static const struct GroundLivesData s_gs163_g3_s0_lives[] = { /* 0x8218000 */
    /*  0 */ {   0,   4,   0,   0, {  30,  17, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs163_g3_s0_lives0_dlg0,
    } },
    /*  1 */ {  91,   4,   0,   0, {  30,  21, CPOS_HALFTILE, CPOS_HALFTILE }, {
        [0] = s_gs163_g3_s0_lives1_dlg0,
    } },
};

static const struct GroundEffectData s_gs163_g1_s0_effs[] = { /* 0x8218030 */
    /*  0 */ {   0,   0,   1,   1, {  30,  19, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs163_g2_s0_effs[] = { /* 0x821803c */
    /*  0 */ {   0,   0,   1,   1, {  30,  19, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const struct GroundEffectData s_gs163_g3_s0_effs[] = { /* 0x8218048 */
    /*  0 */ {   0,   0,   1,   1, {  30,  19, CPOS_HALFTILE, CPOS_HALFTILE }, NULL },
};

static const ScriptRef * const (sStationScripts[]) = { /* 0x8218054 */
    &s_gs163_g0_s0_station_sref,
    &s_gs163_g1_s0_station_sref,
    &s_gs163_g2_s0_station_sref,
    &s_gs163_g3_s0_station_sref,
};

static const struct GroundScriptSector s_gs163_g0_sectors[] = { /* 0x8218064 */
    { 0,NULL, 0,NULL, 0,NULL, 0,NULL, 1,&sStationScripts[0], },
};

static const struct GroundScriptSector s_gs163_g1_sectors[] = { /* 0x821808c */
    { LPARRAY(s_gs163_g1_s0_lives), 0,NULL, LPARRAY(s_gs163_g1_s0_effs), 0,NULL, 1,&sStationScripts[1], },
};

static const struct GroundScriptSector s_gs163_g2_sectors[] = { /* 0x82180b4 */
    { LPARRAY(s_gs163_g2_s0_lives), 0,NULL, LPARRAY(s_gs163_g2_s0_effs), 0,NULL, 1,&sStationScripts[2], },
};

static const struct GroundScriptSector s_gs163_g3_sectors[] = { /* 0x82180dc */
    { LPARRAY(s_gs163_g3_s0_lives), 0,NULL, LPARRAY(s_gs163_g3_s0_effs), 0,NULL, 1,&sStationScripts[3], },
};

static const struct GroundScriptGroup s_gs163_groups[] = { /* 0x8218104 */
    { LPARRAY(s_gs163_g0_sectors) },
    { LPARRAY(s_gs163_g1_sectors) },
    { LPARRAY(s_gs163_g2_sectors) },
    { LPARRAY(s_gs163_g3_sectors) },
};

static const struct GroundLink s_gs163_links[] = { /* 0x8218124 */
    {},
};

const GroundScriptHeader gGroundScript_gs163 = { LPARRAY(s_gs163_groups), s_gs163_links }; /* 0x821812c */
