#include "rescue_team_info.h"

static const u8 * const sUnknown_80E8B94[7] = {
    _("　"),
    _("{ENVELOPE_CLOSED}"),
    _("{ICON_BLANK}"),
    _("{ENVELOPE_OPEN}"),
    _("{THANK_YOU_MAIL}"),
    _("{ICON_GO}"),
    _("{ICON_NEWS}"),
};

static const u8 * const sUnknown_80E8BCC[4] = {
    _("　"),
    _("Suspendre"),
    _("Accepter"),
    (@@STRING:e7fa1c6db8054b5b99c786044f34c5e1afce730ccf54adbece73ba4f17f1d4ab@@),
};

// Used in sub_803C1F0 for some reason
const u8 * const gMissionRankText[MAX_TEAM_RANKS] = {
    _("{COLOR DEFAULT}E{RESET}"),
    _("{COLOR GREEN}D{RESET}"),
    _("{COLOR GREEN}C{RESET}"),
    _("{COLOR CYAN}B{RESET}"),
    _("{COLOR CYAN}A{RESET}"),
    _("{COLOR RED}S{RESET}"),
    _("{STAR_BULLET}"),
};

static const u8 * const gMissionRewardText[6] = {
    (@@STRING:4dd0a6d681e1b8dbcdf2c69e12436f5fa4d84eedb7c8fafca06e168b82cd3f73@@),
    (@@STRING:61cf55813946c4e3970cc47638659ccbb984780d1c995f035c06ecb5c2f87a37@@),
    _("{COLOR GREEN}%s{RESET}"),
    (@@STRING:405f9c73fa1ef9dbe818dc94afa98f4b68d5fcba01e7259e4d2b33b6f82a3237@@),
    (@@STRING:2549f2586804779e25d52eb9c1ae63bd0ffd543cef02ba7ff47fa2098482242f@@),
    (@@STRING:a03b221c6c6eae7122ca51695d456d5222e524889136394944b2f9763b483615@@),
};

static const u8 * const gUnknown_80E8C98[15] = {
    _("Au secours!"),
    (@@STRING:4e29284e5c7979bd1d6a34d8f811bbce88ae3bf767a66c8c02f9919ceee4ba38@@),
    (@@STRING:bbab91e11efb342902b96682d0ab5ed9c83ecc3eef4a7be47456690a72d5ebd7@@),
    (@@STRING:79e98addc1c2cbd3999eb54cb909c00ba807d73ce40ef0641daea08c19826030@@),
    (@@STRING:7de0c57e2cc3f041200105fd105499061a74b4c4af06bf909973e7a95241b602@@),
    (@@STRING:70618b263da50d5afb47c0a48b992642b559f65a67ed675844dc85460c81853a@@),
    (@@STRING:7e9069a7a8096ae7ba81435d0af71c86db1834a736e3deba99b3a09f4e908382@@),
    (@@STRING:e15dc1b51db053ac4557871390219aff196023a78b69811df5dd48b845e2431a@@),
    (@@STRING:8d25050238ba57408feb084edfb3f4cf4804d07dc7036f65b57b7964d754f571@@),
    (@@STRING:ffdceb3e81a61ca586cfb30b9ddbe34eb1ba33a0d3f73d4590606a8e01b982c8@@),
    (@@STRING:da107f965ff1a1a989b561dc2ee339472891a54dd4050ef0839ba684c9f34093@@),
    (@@STRING:e756e6b770b94b690b72c106f4b5f04113325557620d2f328127973bf14d4c89@@),
    (@@STRING:a0a30f40bb6d2aece46a9b0dfaf36ea716351eb6f9f522ad474cb9e9fa923002@@),
    (@@STRING:11f8b9bb7ee7b3a3acfb741eb8444735c17308132d4c6a32e8eed8be97b92f21@@),
    _("Aidez-moi!"),
};

static const u8 * const gUnknown_80E8DE4[13] = {
    (@@STRING:ad76413af7b98601e209346fed641c6ccd62b29fe227782546245cf7147c44b3@@),
    (@@STRING:9d46d17cc9f7edeb70aa3aa7c78cc023d10f419ec2ea1dd6569e79c47afbf6da@@),
    (@@STRING:8dc534b49567648c9243e2142029bb314fd8a636a21a0652a08e79c230eb68c1@@),
    (@@STRING:d05c7bb086ccbb59b2219fc45fc89f2b6d6abac590deab676fcae2b6545740ab@@),
    (@@STRING:a3ba31b5773f1240157f795fdac63f4a5e490ce7a4d433ebc96151b2d7be71bb@@),
    (@@STRING:077cdcaddef15e2495a6ed31bb48b878da03adbef479e3785d9dff5d8aa531be@@),
    (@@STRING:fa70043beed515941d691876132cc15323e9bf6d2668bba4f130bd5705b9edaa@@),
    (@@STRING:3a30410c092b018cc0bcb0ee969ccebbc6ffea673315a7567328a8eb768b47de@@),
    (@@STRING:b417a274aad3855ab6911f3df81ba7c626234665f243cfa88fb76f4f6230fe10@@),
    (@@STRING:27a58cfc9a3018dae4f5bb047203c568372458b42bba082e260c0a81bd8c1593@@),
    (@@STRING:72b1e3ff36c5190a8f74e797cc35dab8415947bb6d5108d21613046203898fe5@@),
    (@@STRING:911160e61535d09c2c0ab55e008d4d467edf878cc19a34fadfa600f707c54432@@),
    (@@STRING:21d7b244edbaa97c2cf8b95bbe05db03a5f3d0e8a4683f38716e65dbfee02775@@),
};

static const u8 * const gUnknown_80E8FB0[13] = {
    (@@STRING:360da96da9a1ac5670060b65f28d54f3b11e19fe9a8c22b9a027dbd347d75e7b@@),
    (@@STRING:442ee8e4f96186fac1c37d980186557b3e7831e0bc73c74dcb98b8a98eaa0114@@),
    _("À l'aide!"),
    (@@STRING:7c0ea8c600d49b0c03c267fb0228ee3676e613683d56175a3e37f203f5ccfdc0@@),
    (@@STRING:76eda2ddd06602a5fca329b4b681b39eb435a45330864b97e758f3b3c59a0f04@@),
    (@@STRING:f15eea2675fcb2424dacf2f2d48f1f0f503db3ecb81770e1994b218792875039@@),
    (@@STRING:2004506a8bf887a4e66146273739e1163ef58f4060ead4116e963331c93a5c32@@),
    (@@STRING:71344bf7c78770a02da8d2cb7b76e856dd7e404c2223cfab43286f4f8c54ffb5@@),
    (@@STRING:df12d836afd473a524ffa70c03c98bef28a0fda9aacb1ed14f1409e8e6c4d17f@@),
    (@@STRING:c95808576489964c139bd3c1609c6cf2f68ce1248422d11bdc85928ff1005f6c@@),
    _("Au secours!"),
    (@@STRING:c5224bdeb058ae97deadea5333b3a623dd5caef923566d589834fb7a5a4f9240@@),
    (@@STRING:f375bce214eaf25e034aac9a055403037d586167e9f2d46943a96cc582bb040a@@),
};

static const u8 * const gUnknown_80E910C[10] = {
    (@@STRING:6d74d0a6c7d557a79dcc5d405e7d1ca51cf4ede5c7d7f5faa0e3faff34d3a842@@),
    (@@STRING:17a953a52d3a50b63f18d936ec664b7ffbc4aeaea69f70e42720be6cb7e6f12d@@),
    (@@STRING:08b16229cab09fe36db4361b37587511658cee99c01aff95534ef6c98eea3682@@),
    (@@STRING:62978d310be27f49fae218caff40df5f711afabdbb388859ec52ee454acea4dc@@),
    _("Au secours!"),
    (@@STRING:d8bb456b1581b36a8ee080fd3b3a1e2f45054d70a4aace95afb13b731bce6a05@@),
    (@@STRING:0d2be8352e16f335e30be2705578abdb920e69373b7495d81b38a21b485a3337@@),
    (@@STRING:14d63f72b2647c9c31ca10c0b7c76fe7d4ca43ab22485c3c2841c51141a05e54@@),
    (@@STRING:966a698b3cd9948e304d84608c1001416402e5648bbd2125d506b85004ca940e@@),
    (@@STRING:57d6099b120b5f5efddb6748d7a1cffe0937a21ab31ac31278691700f019a366@@),
};

static const u8 * const gUnknown_80E91D4[45] = {
    (@@STRING:6d4572c131d662a290899b97c267be079df19eaa0ee4cefeb032ce548401b652@@),
    (@@STRING:d8d514625dc32ca82b1c28c30175c3bfea8ea956906dd837f9b3d56269e83a3e@@),
    (@@STRING:9f3ea3c3a15106f3a4d1caef41c9c9d2cce145575bb8bba429ca5bd130831ae0@@),
    (@@STRING:04d3c009f4cd3ace115192819c13aca57a1e5920e42cd9b18dacf3179eeaee88@@),
    (@@STRING:dc46b8fb6919a8d769530efb9b5b9cb7182a41e1091252adc88b48fb6fec34e6@@),
    (@@STRING:f30a05eee6ff9d18b90c9ba60a31e31f77b698736a19a1452d2ed7f9635cfb19@@),
    (@@STRING:f193d3c3a22d4dcdd6b5223ac853bd4f52bf7d0b59135b8c3ddc9c41ec0fd5c1@@),
    (@@STRING:d8d514625dc32ca82b1c28c30175c3bfea8ea956906dd837f9b3d56269e83a3e@@),
    (@@STRING:daa1b34e44c7433c9fa3a1ae0c56402aeaac626b69202678799d8d84690c0660@@),
    (@@STRING:9b0f098cbd8ce673f8f277854e2e2d21802f161a1bc37d8ce587c75e92567e60@@),
    (@@STRING:0d8387e506e636d52bef5ab8c0b34f2930724e200f52ac32a876d31cfe40e123@@),
    (@@STRING:57908f873f2cfd8876643e7ed5cfd967795c76bc6c07e9330e42fa1734f05706@@),
    (@@STRING:91cd12a466bb56c66add664bfad2bb3010924fb1fa29d922f223a2861fbe4b03@@),
    (@@STRING:30d5d5a7dc01fb5409b3b997eac754dac48c693932a0e87166ab72b5cec50601@@),
    (@@STRING:da06bf7bf1b8cd70fdedd52dc11abb8eb328419bcd228e28a9dae7cc3410827c@@),
    (@@STRING:bacb9561051b210b87067410cd3181ef59247d4f1c98ab4c5e4eeec400f3a9bf@@),
    (@@STRING:b6ba3bf386d453a017a8b61fff1183db90053342760f03d61226fb55e0fa3be6@@),
    (@@STRING:74ec1eecfc1ca16ad68e351c2b08777abac957a2e0dd6f7eaa8278c402e5cdcd@@),
    (@@STRING:4958bca8a19efa2f8f11766f4a150f1b392bd8bf7fb6db9f00c716dc86182d07@@),
    (@@STRING:f4d00ea5ccbcc74d5a69efc8a345d4653118e7cad086720cc32875aeadc4c959@@),
    (@@STRING:3a1f2c865acf07fcd81fc904ef97c51bdb2295fba7b875900af77cc06816b6d1@@),
    (@@STRING:468f8817d019a6985cf897bfa833c1b874fd3a41cc733e9cd4bb28a7ac4bbc66@@),
    (@@STRING:23d3f3ce7571eea395ee95e6ef5af96f3f22852094c7dde4d1ba9df5f3a3f28a@@),
    (@@STRING:359729c9857d5685b7c5ce71e219ec372325e077b94d4ccc64e26194d164e649@@),
    (@@STRING:6bba5758714a22e7bbf7d3f72f8f70594fea798df3860c2938dd20f996801c1b@@),
    (@@STRING:e999eb37406f835600c98db3b811c0c995f9c3d34e164d27ae45d343c074793c@@),
    (@@STRING:1182031dcc07f614c3e042b294644c9170333556c19c6229e395a2bb12ab8293@@),
    (@@STRING:6f73f505841f55f963c8d32784770f82bbe805a345b55716e85961dd93558e73@@),
    (@@STRING:2cd34904991814d3b76751c0d7632c1874243b2fc9b3519c6243c8c8ed881ee2@@),
    (@@STRING:9a9c483791cae884e65ca10eac5abc508c4c53861d221346d4160b4829cd87a7@@),
    (@@STRING:dd4b04c183edfe83c6acce3100aef76106745eb7e00a1f653726be387f92c081@@),
    (@@STRING:fb47270b8874c07bdb67838e63ca1346b458da3003a6766eb0a647d0d2dc312c@@),
    (@@STRING:352ff0a4cdcbebfcc663f54cc5c7aa09f653e3608f18e8ae7eb78997ecac2f08@@),
    (@@STRING:4d4654775783b06dca5f6f74d067f5b5eb8128a6911d5c98f09e7afc1bf732f8@@),
    (@@STRING:b6ba3bf386d453a017a8b61fff1183db90053342760f03d61226fb55e0fa3be6@@),
    (@@STRING:c8ec17ee3fe630356060cfbe5cb46368c4f8887ef49c0c7e8134493db15eeb1b@@),
    (@@STRING:e6485cacd4c8534a1057037eb804d4459c8bf11b97cbd491802d4b2d0770651e@@),
    (@@STRING:e3dd00ee9b3095089e22dd3b24f26e4259c8db786eeaf91738021661370941b0@@),
    (@@STRING:6b904c7429958217ecb58ce4e81d2b953ff5313363e03a2af3eb0d9d854abb50@@),
    (@@STRING:47893733d5ea9eeb7da7ec23edcebcce5fd39b6d5c932a4b933979c1e1cd42bc@@),
    (@@STRING:bf7527a6623bb4c10378e05a2785c91a8a21898935d7dccfab8ad3d4914a602a@@),
    (@@STRING:596cdc513952e5d934100beeb7c6db070beed098735a8091fb1ef412f2ac426f@@),
    (@@STRING:bf5af6068013e9fef4a74de12b2bc8fa45913f4b1c7e7205f07648b34e7124f2@@),
    (@@STRING:330b95e6dc63b77ab59369ae1f6c1628ffb7435957ef75c4956dfed72b6be1f1@@),
    (@@STRING:67a21bc09121e273e08f986a4913251bc830bc165450276ca8e17f5384e9b12d@@),
};

static const u8 * const gUnknown_80E9820[10] = {
    (@@STRING:891778d073ff409479b7c587c74178e2fff7f4a372e410e9b6358ce686e66eb1@@),
    (@@STRING:69ac04dde130f63cfe3836aacfda811c19692e3f7c15908a98aad2aedfe64ab2@@),
    (@@STRING:820cc82fd1dbb5612d2d74f9d3f52034bf5b2becce86e1830b83ad21af0f0966@@),
    (@@STRING:6fe36db17f8360c814a9142d123c5a489ba3f029ba98bb8b3fe1ba27065b65d7@@),
    _("Aidez-moi!"),
    (@@STRING:afafa3d22c943ca7e32d48cad0316fbed845224619e41b79669ae22c1b71b3d9@@),
    _("À l'aide!"),
    (@@STRING:3ed92d77208acc1ccd624fd39030371b0c91ea102d6146bd449d76ff183d2526@@),
    (@@STRING:06dc57a5f62353ed9a114238bdc8fc6c474fa25d3d452bdfc307aaac3f23c921@@),
    (@@STRING:4f31324f4d60f5c87ffaf48a9aa0e0aee0c363f3f422e42cbef3e69b104499e9@@),
};

static const u8 sUnknown_80E99C8[];
static const u8 sUnknown_80E9A0C[];
static const u8 sUnknown_80E9A54[];
static const u8 sUnknown_80E9A94[];
static const u8 sUnknown_80E9ACC[];
static const u8 sUnknown_80E9B18[];
static const u8 sUnknown_80E9B58[];
static const u8 sUnknown_80E9BAC[];
static const u8 sUnknown_80E9BFC[];
static const u8 sUnknown_80E9C38[];
static const u8 sUnknown_80E9C80[];
static const u8 sUnknown_80E9CC4[];
static const u8 sUnknown_80E9D04[];
static const u8 sUnknown_80E9D50[];
static const u8 sUnknown_80E9DA4[];
static const u8 sUnknown_80E9DFC[];
static const u8 sUnknown_80E9E40[];
static const u8 sUnknown_80E9E80[];
static const u8 sUnknown_80E9ED8[];
static const u8 sUnknown_80E9F24[];
static const u8 sUnknown_80E9F5C[];

// Also used in sub_803B600 and sub_803C3E0
const unkStruct_80E9920 gUnknown_80E9920[21] = {
    { MONSTER_BEEDRILL, MONSTER_WEEDLE, sUnknown_80E9F5C },
    { MONSTER_PIDGEOT, MONSTER_PIDGEY, sUnknown_80E9F24 },
    { MONSTER_RATICATE, MONSTER_RATTATA, sUnknown_80E9ED8 },
    { MONSTER_RAICHU, MONSTER_PICHU, sUnknown_80E9E80 },
    { MONSTER_CLEFABLE, MONSTER_CLEFFA, sUnknown_80E9E40 },
    { MONSTER_WIGGLYTUFF, MONSTER_IGGLYBUFF, sUnknown_80E9DFC },
    { MONSTER_CROBAT, MONSTER_ZUBAT, sUnknown_80E9DA4 },
    { MONSTER_VILEPLUME, MONSTER_ODDISH, sUnknown_80E9D50 },
    { MONSTER_POLIWRATH, MONSTER_POLIWAG, sUnknown_80E9D04 },
    { MONSTER_TOGETIC, MONSTER_TOGEPI, sUnknown_80E9CC4 },
    { MONSTER_AZUMARILL, MONSTER_AZURILL, sUnknown_80E9C80 },
    { MONSTER_URSARING, MONSTER_TEDDIURSA, sUnknown_80E9C38 },
    { MONSTER_DONPHAN, MONSTER_PHANPY, sUnknown_80E9BFC },
    { MONSTER_ELECTABUZZ, MONSTER_ELEKID, sUnknown_80E9BAC },
    { MONSTER_MAGMAR, MONSTER_MAGBY, sUnknown_80E9B58 },
    { MONSTER_TYRANITAR, MONSTER_LARVITAR, sUnknown_80E9B18 },
    { MONSTER_BEAUTIFLY, MONSTER_WURMPLE, sUnknown_80E9ACC },
    { MONSTER_AGGRON, MONSTER_ARON, sUnknown_80E9A94 },
    { MONSTER_FLYGON, MONSTER_TRAPINCH, sUnknown_80E9A54 },
    { MONSTER_WALREIN, MONSTER_SPHEAL, sUnknown_80E9A0C },
    { MONSTER_SWELLOW, MONSTER_TAILLOW, sUnknown_80E99C8 }
};

ALIGNED(4) static const u8 sUnknown_80E99C8[] = (@@STRING:84460936c47f75546a67cd90dfd62879cf1734ff014880929785b6420fefdee6@@);

ALIGNED(4) static const u8 sUnknown_80E9A0C[] = (@@STRING:1b7ca9b01d4fd1026cb87a513f53a6a3c09485bd275e3559e78a47f2cbef5b76@@);

ALIGNED(4) static const u8 sUnknown_80E9A54[] = (@@STRING:a4f814b4aca0d25a6e41423a47c1be88c03944be2082acdb05b463e69a59e3b7@@);

ALIGNED(4) static const u8 sUnknown_80E9A94[] = (@@STRING:ac144f072ab31ffadb1cbd6a9e562458847b423fbdc9a3ec8dcafb5943120fd4@@);

ALIGNED(4) static const u8 sUnknown_80E9ACC[] = (@@STRING:e8c95636659e26a0399d011fbe352466f6c77f0fe416a095d1ee0e0ef6546d45@@);

ALIGNED(4) static const u8 sUnknown_80E9B18[] = (@@STRING:1e09236276198f98833d9b95489d6c3ca20c32d6a89fa120c6c972c383fa8e69@@);

ALIGNED(4) static const u8 sUnknown_80E9B58[] = (@@STRING:0c4792b51166cc6076b5fcb88ff5f99e5c1c1b2c5d140ab6a7b4db91eb9f7ae8@@);

ALIGNED(4) static const u8 sUnknown_80E9BAC[] = (@@STRING:7409c852fb57b9455bd9c86dcff7c7c609bda5d6f70d924b6e4c2e8364e53e34@@);

ALIGNED(4) static const u8 sUnknown_80E9BFC[] = (@@STRING:e712cd33bca58134fd7fdd9c749343e65c8aaa8a9105b3b8bf1cc32c0cc11d5e@@);

ALIGNED(4) static const u8 sUnknown_80E9C38[] = (@@STRING:b7a7cf5910a54999ea86ddc8273504e309a2dc792022bba41c7fbc4c935293fd@@);

ALIGNED(4) static const u8 sUnknown_80E9C80[] = (@@STRING:a85606cf72506b2f5cda1a88e4c58b05673cdd91904f2411fd1ba9aef9149ee2@@);

ALIGNED(4) static const u8 sUnknown_80E9CC4[] = (@@STRING:8f965f9a83131628bb5bfaf372a9d3cf3dfd9843c27e26f2668a0123e1558cf2@@);

ALIGNED(4) static const u8 sUnknown_80E9D04[] = (@@STRING:47309b045d88588c5743877f6322dff848f4d89f08d344e98e28c3ea6f744864@@);

ALIGNED(4) static const u8 sUnknown_80E9D50[] = (@@STRING:9fd5f2ecb6a508954dbc1acebb4a9ccb27e516e6f45dd47392baece40c0a102d@@);

ALIGNED(4) static const u8 sUnknown_80E9DA4[] = (@@STRING:b4859e2d38df6d5af7c0539c1d8be303f23949f1300f75c82f667f809821057c@@);

ALIGNED(4) static const u8 sUnknown_80E9DFC[] = (@@STRING:64e0c354a61451c80b85684d4d492e0f17c033c02b347bc4b3ab56d491fc2033@@);

ALIGNED(4) static const u8 sUnknown_80E9E40[] = (@@STRING:652107b56ea2a453952a3a84f455d541e096e49bb5456d2f0fe8b7e97b965d7b@@);

ALIGNED(4) static const u8 sUnknown_80E9E80[] = (@@STRING:449b7cf74f99149a46567180127ea7877f469d2ce351f7a8925172d4a6eba102@@);

ALIGNED(4) static const u8 sUnknown_80E9ED8[] = (@@STRING:f0a95d62564352a0bb1726003c6182666642d27567305abbc5a309c50095e9a1@@);

ALIGNED(4) static const u8 sUnknown_80E9F24[] = (@@STRING:1ac766ffad6ba903317683852852b2710d1462ffe64cfff24e5b4133d8a0fd74@@);

ALIGNED(4) static const u8 sUnknown_80E9F5C[] = (@@STRING:1667eb60a3d1760a257c946cd836c5e9c1002a1bd006f44850ef5ffc6512232a@@);

static const u8 sUnknown_80EA1A8[];
static const u8 sUnknown_80EA1FC[];
static const u8 sUnknown_80EA214[];
static const u8 sUnknown_80EA26C[];
static const u8 sUnknown_80EA2BC[];
static const u8 sUnknown_80EA30C[];
static const u8 sUnknown_80EA33C[];
static const u8 sUnknown_80EA384[];
static const u8 sUnknown_80EA398[];
static const u8 sUnknown_80EA3DC[];
static const u8 sUnknown_80EA41C[];
static const u8 sUnknown_80EA45C[];
static const u8 sUnknown_80EA4A0[];
static const u8 sUnknown_80EA4E4[];
static const u8 sUnknown_80EA51C[];
static const u8 sUnknown_80EA534[];
static const u8 sUnknown_80EA57C[];
static const u8 sUnknown_80EA5C4[];
static const u8 sUnknown_80EA614[];
static const u8 sUnknown_80EA650[];
static const u8 sUnknown_80EA698[];
static const u8 sUnknown_80EA6E4[];
static const u8 sUnknown_80EA730[];
static const u8 sUnknown_80EA784[];
static const u8 sUnknown_80EA7A8[];
static const u8 sUnknown_80EA7FC[];
static const u8 sUnknown_80EA84C[];
static const u8 sUnknown_80EA880[];
static const u8 sUnknown_80EA8D0[];
static const u8 sUnknown_80EA914[];
static const u8 sUnknown_80EA968[];
static const u8 sUnknown_80EA9A4[];
static const u8 sUnknown_80EA9F8[];
static const u8 sUnknown_80EAA34[];
static const u8 sUnknown_80EAA84[];
static const u8 sUnknown_80EAAC8[];
static const u8 sUnknown_80EAB10[];
static const u8 sUnknown_80EAB68[];
static const u8 sUnknown_80EABA8[];
static const u8 sUnknown_80EABE8[];
static const u8 sUnknown_80EAC38[];
static const u8 sUnknown_80EAC88[];
static const u8 sUnknown_80EACD4[];
static const u8 sUnknown_80EAD20[];
static const u8 sUnknown_80EAD50[];
static const u8 sUnknown_80EAD94[];
static const u8 sUnknown_80EADD0[];
static const u8 sUnknown_80EADFC[];
static const u8 sUnknown_80EAE44[];

// Also used in sub_803B628 and sub_803C45C
const unkStruct_80E9F8C gUnknown_80E9F8C[45] = {
    // Save my friend
    { MONSTER_EXEGGUTOR, MONSTER_DODRIO, sUnknown_80EAE44, sUnknown_80EADFC },
    { MONSTER_FEAROW, MONSTER_RHYDON, sUnknown_80EAE44, sUnknown_80EADD0 },
    { MONSTER_SHELLDER, MONSTER_CLAMPERL, sUnknown_80EAE44, sUnknown_80EAD94 },
    { MONSTER_MUK, MONSTER_SWALOT, sUnknown_80EAE44, sUnknown_80EAD50 },
    { MONSTER_MEOWTH, MONSTER_SKITTY, sUnknown_80EAE44, sUnknown_80EAD20 },
    { MONSTER_MAGIKARP, MONSTER_FEEBAS, sUnknown_80EAE44, sUnknown_80EACD4 },
    { MONSTER_WEEDLE, MONSTER_WURMPLE, sUnknown_80EAE44, sUnknown_80EAC88 },
    { MONSTER_CASCOON, MONSTER_SILCOON, sUnknown_80EAE44, sUnknown_80EAC38 },
    { MONSTER_TAILLOW, MONSTER_PIDGEY, sUnknown_80EAE44, sUnknown_80EABE8 },
    { MONSTER_VULPIX, MONSTER_NUMEL, sUnknown_80EAE44, sUnknown_80EABA8 },
    { MONSTER_IGGLYBUFF, MONSTER_CLEFFA, sUnknown_80EAE44, sUnknown_80EAB68 },
    { MONSTER_VENOMOTH, MONSTER_DUSTOX, sUnknown_80EAE44, sUnknown_80EAB10 },
    { MONSTER_VIGOROTH, MONSTER_PRIMEAPE, sUnknown_80EAE44, sUnknown_80EAAC8 },
    { MONSTER_POOCHYENA, MONSTER_GROWLITHE, sUnknown_80EAE44, sUnknown_80EAA84 },
    { MONSTER_BELLSPROUT, MONSTER_SHUCKLE, sUnknown_80EAE44, sUnknown_80EAA34 },
    { MONSTER_SEEL, MONSTER_SEALEO, sUnknown_80EAE44, sUnknown_80EA9F8 },
    { MONSTER_HYPNO, MONSTER_MR_MIME, sUnknown_80EAE44, sUnknown_80EA9A4 },
    { MONSTER_KRABBY, MONSTER_CORPHISH, sUnknown_80EAE44, sUnknown_80EA968 },
    { MONSTER_SNORLAX, MONSTER_SLAKING, sUnknown_80EAE44, sUnknown_80EA914 },
    { MONSTER_PINSIR, MONSTER_HERACROSS, sUnknown_80EAE44, sUnknown_80EA8D0 },
    { MONSTER_SNEASEL, MONSTER_ZANGOOSE, sUnknown_80EAE44, sUnknown_80EA880 },
    { MONSTER_AZURILL, MONSTER_TOGEPI, sUnknown_80EAE44, sUnknown_80EA84C },
    { MONSTER_DITTO, MONSTER_SUDOWOODO, sUnknown_80EAE44, sUnknown_80EA7FC },
    { MONSTER_TEDDIURSA, MONSTER_SPINDA, sUnknown_80EAE44, sUnknown_80EA7A8 },
    { MONSTER_SLOWPOKE, MONSTER_SLAKOTH, sUnknown_80EAE44, sUnknown_80EA784 },
    { MONSTER_NOCTOWL, MONSTER_MURKROW, sUnknown_80EAE44, sUnknown_80EA730 },
    { MONSTER_ROSELIA, MONSTER_BELLOSSOM, sUnknown_80EAE44, sUnknown_80EA6E4 },
    { MONSTER_DELIBIRD, MONSTER_PELIPPER, sUnknown_80EAE44, sUnknown_80EA698 },
    { MONSTER_RELICANTH, MONSTER_NINETALES, sUnknown_80EAE44, sUnknown_80EA650 },
    { MONSTER_HOPPIP, MONSTER_CHIMECHO, sUnknown_80EAE44, sUnknown_80EA614 },
    { MONSTER_MISDREAVUS, MONSTER_SHUPPET, sUnknown_80EAE44, sUnknown_80EA5C4 },
    { MONSTER_CORSOLA, MONSTER_LUVDISC, sUnknown_80EAE44, sUnknown_80EA57C },
    { MONSTER_TOGETIC, MONSTER_BLISSEY, sUnknown_80EAE44, sUnknown_80EA534 },
    // Save my love
    { MONSTER_NIDORAN_M, MONSTER_NIDORAN_F, sUnknown_80EA51C, sUnknown_80EA4E4 },
    { MONSTER_NIDORINO, MONSTER_NIDORINA, sUnknown_80EA51C, sUnknown_80EA4A0 },
    { MONSTER_NIDOKING, MONSTER_NIDOQUEEN, sUnknown_80EA51C, sUnknown_80EA45C },
    { MONSTER_TAUROS, MONSTER_MILTANK, sUnknown_80EA51C, sUnknown_80EA41C },
    { MONSTER_VOLBEAT, MONSTER_ILLUMISE, sUnknown_80EA51C, sUnknown_80EA3DC },
    { MONSTER_MINUN, MONSTER_PLUSLE, sUnknown_80EA51C, sUnknown_80EA398 },
    // Rescue my rival
    { MONSTER_ZANGOOSE, MONSTER_SEVIPER, sUnknown_80EA384, sUnknown_80EA33C },
    { MONSTER_HITMONLEE, MONSTER_HITMONCHAN, sUnknown_80EA384, sUnknown_80EA30C },
    { MONSTER_LUNATONE, MONSTER_SOLROCK, sUnknown_80EA384, sUnknown_80EA2BC },
    { MONSTER_OMANYTE, MONSTER_KABUTO, sUnknown_80EA384, sUnknown_80EA26C },
    { MONSTER_LILEEP, MONSTER_ANORITH, sUnknown_80EA384, sUnknown_80EA214 },
    // Help my brother
    { MONSTER_PICHU, MONSTER_PICHU, sUnknown_80EA1FC, sUnknown_80EA1A8 }
};

ALIGNED(4) static const u8 sUnknown_80EA1A8[] = (@@STRING:2a0b25246c6bf14d8b3c2867fdd802dfb2647140ad9a585e8b3e66d25e21d6aa@@);

ALIGNED(4) static const u8 sUnknown_80EA1FC[] = (@@STRING:003af66e527779ea2062a49d1213b6eba0fcc2d2ca4f4613d4370f7e357d9eb9@@);

ALIGNED(4) static const u8 sUnknown_80EA214[] = (@@STRING:b76d762502e9159782695ba307f00cdee5f64d5f1accb542948e5f1dc0ba4b19@@);

ALIGNED(4) static const u8 sUnknown_80EA26C[] = (@@STRING:f179404cbb2cd895af7e763c586335411b2b8d40aac094237f09287723c1f0c3@@);

ALIGNED(4) static const u8 sUnknown_80EA2BC[] = (@@STRING:6009c04e8f25c5ce0f4e28f8dd48148841ad11dae3fac693c103f4a80557305b@@);

ALIGNED(4) static const u8 sUnknown_80EA30C[] = (@@STRING:c183538f0aac5d0a722c5fa73dc7792634931cbfeeb230ec215a076c15163dc0@@);

ALIGNED(4) static const u8 sUnknown_80EA33C[] = (@@STRING:d87a5c476efb5e6edb60aa8999ea55cd3ae80327a9fb99e3658718c11512c328@@);

ALIGNED(4) static const u8 sUnknown_80EA384[] = _("Sauvez mon rival!");

ALIGNED(4) static const u8 sUnknown_80EA398[] = (@@STRING:8e07e2099f53273886d732a72b05ccbedd1fac2e68c4daa7fcefed187a714cd5@@);

ALIGNED(4) static const u8 sUnknown_80EA3DC[] = (@@STRING:0ff51722169d550a3b77214d2660b4b8bc918ba29d5f4839984d4039c9bd99cd@@);

ALIGNED(4) static const u8 sUnknown_80EA41C[] = (@@STRING:d19bad28bb11718998b8f9b6c3e98b2da23340100e8621e5b054b19ef0e05daf@@);

ALIGNED(4) static const u8 sUnknown_80EA45C[] = (@@STRING:7bc6735f7b39e4909bb104b093486827176ba2eafeaf4ef8d8da2e24265db83c@@);

ALIGNED(4) static const u8 sUnknown_80EA4A0[] = (@@STRING:7eb506a4cd54a5611f25b847a4a847b75dd2867a8dacab681c0f6f3f9b60097e@@);

ALIGNED(4) static const u8 sUnknown_80EA4E4[] = (@@STRING:202058ebe2d62181162e543762f76cac43be35490fa398fc1b1f1168e6704e27@@);

ALIGNED(4) static const u8 sUnknown_80EA51C[] = _("Sauvez mon amour!");

ALIGNED(4) static const u8 sUnknown_80EA534[] = (@@STRING:3ebf964586eb7646e5c651a05333b7f0eeeb6e0ac9bfe281caae5ffda4613f56@@);

ALIGNED(4) static const u8 sUnknown_80EA57C[] = (@@STRING:113a38f6acc4395e5eaa3c56c4822188f475f90fd42cb5d591fd48e889dccaa6@@);

ALIGNED(4) static const u8 sUnknown_80EA5C4[] = (@@STRING:b8d982e20ea9b7928d618e97442b7013874b622d3d5198001700546edd47221b@@);

ALIGNED(4) static const u8 sUnknown_80EA614[] = (@@STRING:4ea6513d51cb1a56b9a2d6b417832721b0061c5413eaf5f2e8f882d2dca6eb41@@);

ALIGNED(4) static const u8 sUnknown_80EA650[] = (@@STRING:81ab547645a3fe87709232679b3f36580100403fa0ecabc3510f2a254fbc1fd0@@);

ALIGNED(4) static const u8 sUnknown_80EA698[] = (@@STRING:8899b43b393138aa57864e0de643d62c1b76c2148c635539a553f25cb7157f78@@);

ALIGNED(4) static const u8 sUnknown_80EA6E4[] = (@@STRING:c9cbe17568d668935289f9ef35bf429fa610443ec808bdebbbe215d3d55cbfcc@@);

ALIGNED(4) static const u8 sUnknown_80EA730[] = (@@STRING:d8601c23ec6361b01d7eb607d006c9622cc3e931410ae97ab474092096b43aa3@@);

ALIGNED(4) static const u8 sUnknown_80EA784[] = (@@STRING:eaf82f140ca365191ca1c6e5228b35d7ec287aa3604fde9713a68d6253358177@@);

ALIGNED(4) static const u8 sUnknown_80EA7A8[] = (@@STRING:058596bb44303526e29f7facb674e356aba7b440927fb7580cd23a2e346aadcf@@);

ALIGNED(4) static const u8 sUnknown_80EA7FC[] = (@@STRING:b5668786df052558490e645b09affa958f34794e72d21e9e6e886f8df88e5096@@);

ALIGNED(4) static const u8 sUnknown_80EA84C[] = (@@STRING:873c0ef00a21e266b0fd42bffb4c92d6ee3c407ade839723c4159d83e7420429@@);

ALIGNED(4) static const u8 sUnknown_80EA880[] = (@@STRING:1e1d4c14d646ac16b93b6a747d566140df10d6aa999ba1d5fefcfc0d97ef0b17@@);

ALIGNED(4) static const u8 sUnknown_80EA8D0[] = (@@STRING:d9190101beef9bf09f977c1481484ceb11aae9743a27d0a5c145d22ea083a8d7@@);

ALIGNED(4) static const u8 sUnknown_80EA914[] = (@@STRING:4a5d42dda0a3b637a4d89e38f08e1f5d596b5cd7d426c51ab567775f326795a8@@);

ALIGNED(4) static const u8 sUnknown_80EA968[] = (@@STRING:a4a68ec09369b472079acc907f1886b127f8daab9285212ef144777a50f53deb@@);

ALIGNED(4) static const u8 sUnknown_80EA9A4[] = (@@STRING:56d18018feb071f00312c336e1d0080131714e29169c6b74e69a55f4b64bb5a8@@);

ALIGNED(4) static const u8 sUnknown_80EA9F8[] = (@@STRING:a7ac097710cd9fa9739dc7b70822200ee3183b547f74df1f374d18e98a7016b1@@);

ALIGNED(4) static const u8 sUnknown_80EAA34[] = (@@STRING:b7bdb2338f95f5e059924c71781c9e9ae7bb1530457d76218654d37edde6da2a@@);

ALIGNED(4) static const u8 sUnknown_80EAA84[] = _("Sans mon ami {COLOR YELLOW}%s{RESET}, je ne peux plus\njouer à mordre! Aidez-moi!");

ALIGNED(4) static const u8 sUnknown_80EAAC8[] = (@@STRING:a9c830bb04b63ceb1dc708bb80936eab7fd4ae41bb2cf95e6f3090fab4fc86e1@@);

ALIGNED(4) static const u8 sUnknown_80EAB10[] = (@@STRING:dbf9bcf9f0f03317788a2c6b86ab51928748f473603d2058114335ad8693dfd4@@);

ALIGNED(4) static const u8 sUnknown_80EAB68[] = (@@STRING:a441e28a7561b270ba581e418c28ade9aee4d7ff937c06b7ec00e692413c6131@@);

ALIGNED(4) static const u8 sUnknown_80EABA8[] = (@@STRING:f963aef235f625ba09d64c76959239420b3de5bc07bfe6df5c498b6a935c4e19@@);

ALIGNED(4) static const u8 sUnknown_80EABE8[] = (@@STRING:55f1e1790e064a75993e640293bc3c49760c2b0630c944757b0f5c08a3190082@@);

ALIGNED(4) static const u8 sUnknown_80EAC38[] = (@@STRING:2aae621a42cef1a95b40e4ac7ab0d193cce7dc243488bbba320f7e3d37178617@@);

ALIGNED(4) static const u8 sUnknown_80EAC88[] = (@@STRING:40a4389e2b663b59313f3cf93c640d0ff46db39165be48c946b10ccb24852022@@);

ALIGNED(4) static const u8 sUnknown_80EACD4[] = (@@STRING:eb8bcd240df2ddf64deac333a2d9ac5d02a2fd5b38facbc12d57b3e264dafa97@@);

ALIGNED(4) static const u8 sUnknown_80EAD20[] = (@@STRING:9d1ea21557e906b006833cbc3181c70b17c303af926f9750fc2e02d46ac84286@@);

ALIGNED(4) static const u8 sUnknown_80EAD50[] = (@@STRING:141dd5546f9e1f341af5db18a0020e66dc3ec5d51d61d3a62d65b723cc8f45c3@@);

ALIGNED(4) static const u8 sUnknown_80EAD94[] = (@@STRING:58a7bccedd282a6f7af3bd28e7e17143d79b240b454d7da837490a9aa0066192@@);

ALIGNED(4) static const u8 sUnknown_80EADD0[] = (@@STRING:e5e6eacd5ff1c544ee39434eaf3910486dc25a80d4205b93b393d83a788e9113@@);

ALIGNED(4) static const u8 sUnknown_80EADFC[] = (@@STRING:9b77e3b6cc3f2003acfdae5f60f5320d76a928d8f256460e748a183a139fc019@@);

ALIGNED(4) static const u8 sUnknown_80EAE44[] = _("Sauvez mon ami!");

// Escort Mission Text
static const u8 * const gUnknown_80EAE5C[4] = {
    (@@STRING:b72cf1bf04049baa8d85849ee8cf15deb3b3d6393cb2684ea728c1a396f01fc1@@),
    (@@STRING:d673af2afbea86518ad9988e801656bdf3764fc308295b9c9c85d04100e4be1c@@),
    (@@STRING:53469d08a4df0be57950344a306a2fa7d26ac4c6620a5de589c6284ae7306ece@@),
    (@@STRING:956e65c38eaf512bea641161727f3aeb436386a39026a5479b0742c599ef56d4@@),
};

static const u8 * const gUnknown_80EAEB8[20] = {
    (@@STRING:10fd35b2701647a30442d409c61ebb2954fe49f5589f7cd97e518cf11532d688@@),
    (@@STRING:90e4728ea5cc20c094fd8cf97f374a5b14eafc3fde47577e108f1d9a48467d98@@),
    (@@STRING:ed7e2e7a9e093168f360eed12832f302a7c31d59f918f410f96522c94f7d9347@@),
    (@@STRING:0b5a5649f27d04258ce1e1c65f8c0a5282ecfd9439f19c65f855907e2c7e4215@@),
    (@@STRING:b8353259f955502fcbfef9c68cfa94ee232ecc586c8073d3e9b806a93e50ce0d@@),
    (@@STRING:b91c949e9a83a97850a9f485b719aa604309f4fcfa11742e9388157d91b2a2ba@@),
    (@@STRING:c767dd9dc359bf23e072d005927735fd2feb652e691adf1e9a06b2301afad74d@@),
    (@@STRING:27c11dbe8c5c7fc7644db0bb1429a0eaa74a3091387df3f0ea4303c85aeeb4e9@@),
    (@@STRING:2424e6b87c42e53b9d5c83fd2460abd5e6a20cc2a16c6cea2d40d586de57e6e6@@),
    (@@STRING:f39a0a66762302e1b6c6e442dbf3be528999e7a87509817db12aeaa5c7be84a1@@),
    (@@STRING:64d52c6a64cc744926f5d0a4a1a751c8bdb6cf9d8167859125069a8d7e5552ab@@),
    (@@STRING:f30a05eee6ff9d18b90c9ba60a31e31f77b698736a19a1452d2ed7f9635cfb19@@),
    (@@STRING:9d8cd46ec71a5595e208bc15a8a7abbbde40e534b11883b0885e962a22c720a3@@),
    (@@STRING:5338075a84c385bd987076a3b6b1067106359c7da0692009461b99b6ac21c0b2@@),
    (@@STRING:8620136b24b175d5582de0915b0e46b6c89a0b8a7e77bd5d86a63512bdbb30d4@@),
    (@@STRING:846bf442d3a85ae6bd03ac7760680705a8cfe5ebfba9b46e1d54b2410029991b@@),
    (@@STRING:0a7ce31a6889084906baf7acdd8e1ecea2e9438ca97e8876c992add8e5a4c564@@),
    (@@STRING:e5429d900519fbea201cffebf3d9eabc2b28a5c064db92a6b09a880a558253dd@@),
    (@@STRING:90f02af44af751128b0da9288acc75184789ec3d3d191221828fdb200d791b3f@@),
    (@@STRING:35f958c3fa229f9cb820c855196525f3ba1265067be5612f260432d4180b6bb7@@),
};

static const u8 * const gUnknown_80EB198[4] = {
    (@@STRING:c9228ef1b74f822f682591a4fe9ad7b82584d22266f59c28165808c8efe18c1e@@),
    (@@STRING:ff57e4837f3193d0a9a69c46a8a08f3b2421b26d1a4e76bbfa1bf6df59506e15@@),
    (@@STRING:850dd3a5bfbf2b4639e26d0912145642beb78cbd0adcdaa0df5c88dd100d4694@@),
    (@@STRING:fef3d821387bc46f23a7395a70237fa5a3f4f9d1787b793bd0fff88d6e41dbad@@),
};


static const u8 * const gUnknown_80EB220[6] = {
    (@@STRING:31502dbbc106072af34cba1dd931218422312491fb4f8d5e50122313f11692c0@@),
    (@@STRING:c65e8e93f740177799f12b6e218eec23988288a43cd09e3f9fb37c570f61a9e8@@),
    (@@STRING:e26d8c18e3c454bc443434a4d3f4aa0059e77a0981c8ce49797ad928aaca33e0@@),
    (@@STRING:a8627accf40845f861178a8a2322cc9e6d1cea48cc73dee673ca8455ac0050bf@@),
    (@@STRING:0b5a5649f27d04258ce1e1c65f8c0a5282ecfd9439f19c65f855907e2c7e4215@@),
    (@@STRING:884f96854b16be3b2be938f4a7dd00f4c4e02e3d889050f5d26920accf651137@@),
};

static const u8 * const gUnknown_80EB2F0[6] = {
    (@@STRING:bb8e35cc9f68f27506c796c6dabbe20028d36006e8cca9d532a09ad421c7f74a@@),
    (@@STRING:eb0f8f1620c42c5d0608ed4fa7bb8d0f960998130622b9ae31b9258db9715470@@),
    (@@STRING:5e931101297115f7cc769565e8ff2380cb5e5c0b9f8bb893604346e60b4eb884@@),
    (@@STRING:c139b9afdff74aaeff70c26e2f7d2661f246ec9ccabdde7c51109fbdaccd4c9e@@),
    (@@STRING:b4e91ea659c5b4814810e29631ad660b659ee941d850c52188954e874d2d03b8@@),
    (@@STRING:d1074d565dffb29cafdc602649d3d4ff5d32114ce3e49aa964e554d2e16776c6@@),
};

// Item Delivery Mission Text
static const u8 * const gUnknown_80EB3F8[22] = {
    (@@STRING:70d0f881c72d6fb110a3a63dd106bd82529497cc175f3182386e184da6fca340@@),
    (@@STRING:06f21da4a360789e889121ea57f2984082b03bc71f2e144600fb4806974c48b8@@),
    (@@STRING:634dbb3f18729b86dce21daa482a544af63708e11544b5fda7cd55490f2837f9@@),
    (@@STRING:de8b92fbccc0b774bab48c154dcdd425ba23bc1956bbc7c0473c678beefed73b@@),
    (@@STRING:118e896ea1cedff15261ff17a8264938c1f49391bc2e57b431955090e421cbc9@@),
    (@@STRING:f5ab2ae4a132aa7c8555f50d2c7444dab7d53b898d8602cc037fdbc153ad9445@@),
    (@@STRING:5fd24f41e72bedaf1136b0ae3088c4a473d5ea4830c6b916fb7c0e53137bf180@@),
    (@@STRING:62cb338d412a60e38f7848234bd2c1fdfec2d20468d8cc4c7b29c6df63587744@@),
    (@@STRING:ee2489af4d331309f3c6ddbe20988a42a027562622141dd469829eab07e6d4c8@@),
    (@@STRING:6a54bf177ee7d2fa9745632b9d4574919fec790dc6724592647581a2d35da15b@@),
    (@@STRING:8860841ec7b3568177363e1bf84af5b72d3a0c751d111b26300ce28cb7eee38c@@),
    (@@STRING:3cf14ba14ec8ea81cacf835760064f48fc0312d49aa2e6308ec272533da18056@@),
    (@@STRING:8bdb74069d9238a4862cd2bf0cf82459c3e6dd6c6afa0a08aa43b66ca6868fec@@),
    (@@STRING:566f495721ac55f8f6b3856e950da5fc23036fc288f5ede83b3cbe8c20ba6e81@@),
    (@@STRING:e119979a25896649b91dfafd65a0fb596e4a6829769e474a1fa6a02feba69766@@),
    (@@STRING:3b3bc0c7a313c20d20dc06e574d7041fe0d28f4f732d284ad26512ab73d2694a@@),
    (@@STRING:5f0fd2e500d4e2c25c91a5b97f821ce19db88a9732c0316777f038a74c7dcff9@@),
    (@@STRING:5023ab006c5bb62f59c4de6a40f0e469bd32ceb5059d74e7dda8f862f65fe594@@),
    (@@STRING:3b2c6e1e98d894b1b0c1083418e29d1b48508a62e4879760319b778d76939dc7@@),
    (@@STRING:24d7a7a067a9184a1516c9a8932b0bcb9b3f6d32ab237b30de5b6588932f3593@@),
    (@@STRING:cbddae7e1eae2d95fa340fd8187435a01daf9883c1e49b196269ce628d7a01cd@@),
    (@@STRING:5a6aeb022afdd70659580deecaa180b0bdca82a3d9319e968c0cbec439d82eb3@@),
};


static const u8 * const gUnknown_80EB72C[22] = {
    (@@STRING:1fdb43827450f374031e4919541c07aa7dfc4064a2c81d50e0f4ca90b2a0e1ba@@),
    (@@STRING:a371d7c79a644f38a74ffbf6142d9ccc7aca4673b9fcb51a9b82612d7871ea30@@),
    (@@STRING:5c6ed255bef71d8929cc797fcf88b85c2eee5fdd8261a4f9448f74ee6545c27d@@),
    (@@STRING:1f8e9927d9b6b4064e0b80f275d841ef2f21bb0f735a586dc5c618f482efa990@@),
    _("Donnez-m'en un!"),
    (@@STRING:db5f2a07f16d3ad128ba2e7d5acab0d7d56c7d380ed94d6490cabd1c0e8f01eb@@),
    (@@STRING:3834664386ba83299ec7617a2019902b858c4ee3cec7ab94aaf1af2f1d30571a@@),
    (@@STRING:f25dad348dbc4de8be73b43de77c608471329c9481a679ce650569765ed16fca@@),
    (@@STRING:0030307b000fc37590f10e8bab8a0d71a58c1bd9b6fa3be3eb0fbc19b8e0345b@@),
    (@@STRING:fce49095e42e75b21effde8c6e4aa288d2344ab5f948621a53e6dbf95c3b9682@@),
    (@@STRING:7d1a2a870d5c1125cd81eafa26242606549f47c4a4d64cbae88b506c8bc3210c@@),
    (@@STRING:38017b736b3c294709bd63680623e55577e90aecbb3ce22474b64a3f5071511a@@),
    (@@STRING:bc10e6a5329a284d86af6ae20ea952918f2cade46efd760bb9b83135febe1104@@),
    (@@STRING:3484acbf5b6f6223678d7ce023374180db784861cf21708a13b7bc01ec6afaa9@@),
    (@@STRING:147643eab979145583f3805b83ce6e77b6ea60a7974c685dbbc1b1c73e302af6@@),
    _("Donnez-m'en un!"),
    (@@STRING:bc10e6a5329a284d86af6ae20ea952918f2cade46efd760bb9b83135febe1104@@),
    (@@STRING:867ef31f700791636e9f63aa199a937cc9bff4cefaad3f4620971286a2828360@@),
    (@@STRING:5a1ae310bdb2994a68bfa114df95477412f329e7e352d7bc857ca8f3a6329b77@@),
    (@@STRING:5bbbf75d60c5978d0c9a101c56756dee1cc0eae47c59cab29987a766842f6046@@),
    (@@STRING:ff3cb001f50e9eae7d7ab46ed0b8a33f6369e3374ba2af4a6b2ef4d910de0f2e@@),
    (@@STRING:d23191a3119e571df6553e326973485edcbe91f3ce9d95320a835e2b3f597a9f@@),
};

static const u8 sNewFriendAreasText[];
static const u8 sNewFriendAreasHeadline[];
static const u8 sLucarioRankText[];
static const u8 sLucarioRankHeadline[];
static const u8 sBuriedRelicText[];
static const u8 sBuriedRelicHeadline[];
static const u8 sNewsText2[];
static const u8 sNewsHeadline2[];
static const u8 sNewsText1[];
static const u8 sNewsHeadline1[];
static const u8 sPelipperText[];
static const u8 sPelipperHeadline[];
static const u8 sLinkedProText2[];
static const u8 sLinkedProHeadline2[];
static const u8 sLinkedProText1[];
static const u8 sLinkedProHeadline1[];
static const u8 sSlakothText[];
static const u8 sSlakothHeadline[];
static const u8 sPitfallText[];
static const u8 sPitfallHeadline[];
static const u8 sSeaRescueText[];
static const u8 sSeaRescueHeadline[];
static const u8 sVileplumeText[];
static const u8 sVileplumeHeadline[];
static const u8 sRawstText[];
static const u8 sRawstHeadline[];
static const u8 sClubText[];
static const u8 sClubHeadline[];
static const u8 sChanseyText[];
static const u8 sChanseyHeadline[];
static const u8 sKabutoText[];
static const u8 sKabutoHeadline[];
static const u8 sSmeargleText[];
static const u8 sSmeargleHeadline[];
static const u8 sCastformText[];
static const u8 sCastformHeadline[];
static const u8 sGasText[];
static const u8 sGasHeadline[];
static const u8 sKeyItemText2[];
static const u8 sKeyItemHeadline2[];
static const u8 sKeyItemText1[];
static const u8 sKeyItemHeadline1[];
static const u8 sSwitchText[];
static const u8 sSwitchHeadline[];
static const u8 sKecleonText[];
static const u8 sKecleonHeadline[];
static const u8 sWeatherText2[];
static const u8 sWeatherHeadline2[];
static const u8 sWobbuffetText[];
static const u8 sWobbuffetHeadline[];
static const u8 sPechaText[];
static const u8 sPechaHeadline[];
static const u8 sWeatherText1[];
static const u8 sWeatherHeadline1[];
static const u8 sAzurillText[];
static const u8 sAzurillHeadline[];
static const u8 sKeyText[];
static const u8 sKeyHeadline[];
static const u8 sSweetText[];
static const u8 sSweetHeadline[];
static const u8 sRangeText[];
static const u8 sRangeHeadline[];
static const u8 sIQText[];
static const u8 sIQHeadline[];
static const u8 sTrapTileText[];
static const u8 sTrapTileHeadline[];
static const u8 sMakuhitaText[];
static const u8 sMakuhitaHeadline[];
static const u8 sMachineText[];
static const u8 sMachineHeadline[];
static const u8 sUltimateText[];
static const u8 sUltimateHeadline[];
static const u8 sGummiText[];
static const u8 sGummiHeadline[];
static const u8 sMoveTipsText[];
static const u8 sMoveTipsHeadline[];
static const u8 sAddMembersText[];
static const u8 sAddMembersHeadline[];
static const u8 sTeamMoveText[];
static const u8 sTeamMoveHeadline[];
static const u8 sWondersText[];
static const u8 sWondersHeadline[];
static const u8 sPollText[];
static const u8 sPollHeadline[];
static const u8 sLinkedEntryText3[];
static const u8 sLinkedEntryHeadline3[];
static const u8 sLinkedEntryText2[];
static const u8 sLinkedEntryHeadline2[];
static const u8 sLinkedEntryText1[];
static const u8 sLinkedEntryHeadline1[];
static const u8 sTypeText[];
static const u8 sTypeHeadline[];
static const u8 sDungeonText[];
static const u8 sDungeonHeadline[];
static const u8 sWonderText[];
static const u8 sWonderHeadline[];
static const u8 sMoveText[];
static const u8 sMoveHeadline[];
static const u8 sOptionsText[];
static const u8 sOptionsHeadline[];
static const u8 sDisasterText[];
static const u8 sDisasterHeadline[];
static const u8 sSeedText[];
static const u8 sSeedHeadline[];
static const u8 sHungerText[];
static const u8 sHungerHeadline[];
static const u8 sJobText[];
static const u8 sJobHeadline[];
static const u8 sBasicsText[];
static const u8 sBasicsHeadline[];
static const u8 sWelcomeText[];
static const u8 sWelcomeHeadline[];

static const PokemonMail sPokemonMail[NUM_POKEMON_MAIL] =
{
    [0] = { sWelcomeHeadline, sWelcomeText },
    [1] = { sBasicsHeadline, sBasicsText },
    [2] = { sJobHeadline, sJobText },
    [3] = { sHungerHeadline, sHungerText },
    [4] = { sSeedHeadline, sSeedText },
    [5] = { sDisasterHeadline, sDisasterText },
    [6] = { sOptionsHeadline, sOptionsText },
    [7] = { sMoveHeadline, sMoveText },
    [8] = { sWonderHeadline, sWonderText },
    [9] = { sDungeonHeadline, sDungeonText },
    [10] = { sTypeHeadline, sTypeText },
    [11] = { sLinkedEntryHeadline1, sLinkedEntryText1 },
    [12] = { sLinkedEntryHeadline2, sLinkedEntryText2 },
    [13] = { sLinkedEntryHeadline3, sLinkedEntryText3 },
    [14] = { sPollHeadline, sPollText },
    [15] = { sWondersHeadline, sWondersText },
    [16] = { sTeamMoveHeadline, sTeamMoveText },
    [17] = { sAddMembersHeadline, sAddMembersText },
    [18] = { sMoveTipsHeadline, sMoveTipsText },
    [19] = { sGummiHeadline, sGummiText },
    [20] = { sUltimateHeadline, sUltimateText },
    [21] = { sMachineHeadline, sMachineText },
    [22] = { sMakuhitaHeadline, sMakuhitaText },
    [23] = { sTrapTileHeadline, sTrapTileText },
    [24] = { sIQHeadline, sIQText },
    [25] = { sRangeHeadline, sRangeText },
    [26] = { sSweetHeadline, sSweetText },
    [27] = { sKeyHeadline, sKeyText },
    [28] = { sAzurillHeadline, sAzurillText },
    [29] = { sWeatherHeadline1, sWeatherText1 },
    [30] = { sPechaHeadline, sPechaText },
    [31] = { sWobbuffetHeadline, sWobbuffetText },
    [32] = { sWeatherHeadline2, sWeatherText2 },
    [33] = { sKecleonHeadline, sKecleonText },
    [34] = { sSwitchHeadline, sSwitchText },
    [35] = { sKeyItemHeadline1, sKeyItemText1 },
    [36] = { sKeyItemHeadline2, sKeyItemText2 },
    [37] = { sGasHeadline, sGasText },
    [38] = { sCastformHeadline, sCastformText },
    [39] = { sSmeargleHeadline, sSmeargleText },
    [40] = { sKabutoHeadline, sKabutoText },
    [41] = { sChanseyHeadline, sChanseyText },
    [42] = { sClubHeadline, sClubText },
    [43] = { sRawstHeadline, sRawstText },
    [44] = { sVileplumeHeadline, sVileplumeText },
    [45] = { sSeaRescueHeadline, sSeaRescueText },
    [46] = { sPitfallHeadline, sPitfallText },
    [47] = { sSlakothHeadline, sSlakothText },
    [48] = { sLinkedProHeadline1, sLinkedProText1 },
    [49] = { sLinkedProHeadline2, sLinkedProText2 },
    [50] = { sPelipperHeadline, sPelipperText },
    [51] = { sNewsHeadline1, sNewsText1 },
    [52] = { sNewsHeadline2, sNewsText2 },
    [53] = { sBuriedRelicHeadline, sBuriedRelicText },
    [54] = { sLucarioRankHeadline, sLucarioRankText },
    [55] = { sNewFriendAreasHeadline, sNewFriendAreasText }
};

ALIGNED(4) static const u8 sNewFriendAreasText[] = (@@STRING:df7db7b3618b475f0f4063424e7e0b4021bcabf2518afc18052272c08cb46f13@@);

ALIGNED(4) static const u8 sNewFriendAreasHeadline[] = (@@STRING:c56f4fc17979101b06b41cee5d73a052c6ebad71d71582003c19e3b35832efbc@@);

ALIGNED(4) static const u8 sLucarioRankText[] = (@@STRING:8f5412a61c392111ab8f43e52f9cc32b531de5cd1fb4585a61e3969243b9ed1b@@);

ALIGNED(4) static const u8 sLucarioRankHeadline[] = (@@STRING:5ff1a0a6fc038990f1dd0f1cafaf89444b3e1afcffe01ddc760435cd0c1b71a7@@);

ALIGNED(4) static const u8 sBuriedRelicText[] = (@@STRING:6db6943aac23e5ffbdbdafaea03f47bd626597a3a6b65c2f37c7f9005b435d0f@@);

ALIGNED(4) static const u8 sBuriedRelicHeadline[] = (@@STRING:47229ec264d5ecec8e67860f44fe5ee19acbbeaefb53e8d157de255d4f5b078a@@);

ALIGNED(4) static const u8 sNewsText2[] = (@@STRING:0982e6f7234ba6b3dfc115c9979215184ec442f3d9c8cc2028f8fdff9a516591@@);

ALIGNED(4) static const u8 sNewsHeadline2[] = (@@STRING:f520a51a338e199d2163fea345bc9ed2955e9e5c3ef169196dfc9ef75c090c7b@@);

ALIGNED(4) static const u8 sNewsText1[] = _("{CENTER_ALIGN}{COLOR CYAN}{POKEMON_0} innocent! (1){RESET}\n{POKEMON_1} a rencontré Feunard au\n{COLOR RED}Mont Glacial{RESET}. Feunard a confirmé que\n{POKEMON_0} n'était pas l'humain de\nla légende. Les accusations d'Ectoplasma\nétaient donc des mensonges.\n{COLOR GREEN}Ectoplasma, désemparé, a déclaré:{RESET}\n«Ougegegegegegegegegeh!»");

ALIGNED(4) static const u8 sNewsHeadline1[] = (@@STRING:c9312f8f88aa1fc2f47b1c7b1a637eb7445c04cf7b3842d24341d3313425ffc9@@);

ALIGNED(4) static const u8 sPelipperText[] = (@@STRING:ecdb16ea77134259293531756228bf484c4fa0b7f82ca56aac5384cebc0e2cdb@@);

ALIGNED(4) static const u8 sPelipperHeadline[] =(@@STRING:9dbb8801e6d3acc6ad5dcad70a82e908f4d2439cc6cb7ce812b004d548997202@@);

ALIGNED(4) static const u8 sLinkedProText2[] = (@@STRING:b5fc77c22b1233dd036351211a4678362a669acd57aff000c1d9702637a6514f@@);

ALIGNED(4) static const u8 sLinkedProHeadline2[] =(@@STRING:7b3824981816c1932926b9523a65d8cc49a966c5a91b9d87897b60939952d192@@);

ALIGNED(4) static const u8 sLinkedProText1[] = (@@STRING:ff09dd898dfa8914f8f74c3baddfdb9c187cb9c086e5236b160ad012b55d814d@@);

ALIGNED(4) static const u8 sLinkedProHeadline1[] = (@@STRING:95e852fc22fe137d3b8b9e124849aa39fe6f4042fc92fbc8fac5c847737b2427@@);

ALIGNED(4) static const u8 sSlakothText[] = (@@STRING:2531a0b9de3d1a90f7c58b17bb50ac899e0e428512d4e8f0b71e9c86d7582a48@@);

ALIGNED(4) static const u8 sSlakothHeadline[] = (@@STRING:de9d09a863ca7154954d5863a5e4ad77475ab3e8734a413e9c14488fe46fff6f@@);

ALIGNED(4) static const u8 sPitfallText[] = (@@STRING:a94db548dc6e42acea12e6261bbef9858c2892a022cf485d8732e5e85647baee@@);

ALIGNED(4) static const u8 sPitfallHeadline[] = (@@STRING:2dbff1ef557255e4eb7726687dc0953b670c693749bdbd80eae568277214dada@@);

ALIGNED(4) static const u8 sSeaRescueText[] = (@@STRING:ad7f411d7a1b2cfe225ea6fa2b819d068bbf2379f5bba8ad2ca102a32717745c@@);

ALIGNED(4) static const u8 sSeaRescueHeadline[] = (@@STRING:c616fed94390ae28e9d546f64590ed8b63b10f64485cb8cff298dc20f35ca55b@@);

ALIGNED(4) static const u8 sVileplumeText[] = (@@STRING:6fd56248fb60ac2f16a36f4a77f4e826da8c795205608f5988ffcbd963ec37dc@@);

ALIGNED(4) static const u8 sVileplumeHeadline[] = (@@STRING:6be99b286388f10a35f2b5bc4b05772a8c14d71114cb7c4d467d98d9a869eced@@);

ALIGNED(4) static const u8 sRawstText[] = (@@STRING:485bcdec08ceb08592df2746d3325dbcd1e1dab47e7a8478e25f9c947ffb9c4e@@);

ALIGNED(4) static const u8 sRawstHeadline[] = (@@STRING:7c2a67093d057c3e30a256930b290d9f0a8f6fb638e18c83e9fadcc29ff0d65e@@);

ALIGNED(4) static const u8 sClubText[] = (@@STRING:aa1173113a04c492bb6331d46c1a7c1cec8ee8b1c35a801ae087743ea7dcdd91@@);

ALIGNED(4) static const u8 sClubHeadline[] = (@@STRING:fec44e938e507a4fbf8acac0a06e1f349720cdd1b24e0e7dda6bec0861056500@@);

ALIGNED(4) static const u8 sChanseyText[] = (@@STRING:7f7fddb9a99a3ad93d011778ff329769d1f07bda82537ddb9bd13eae1e20aa73@@);

ALIGNED(4) static const u8 sChanseyHeadline[] = (@@STRING:3440cded2b5cc221527e23ffaf08df374124b5a1eff938bbc864c8ffca8f1078@@);

ALIGNED(4) static const u8 sKabutoText[] = (@@STRING:9eb393d89a9b0c724ebef1ba11f17e568a80086555140e6e45b30e3546aac1cf@@);

ALIGNED(4) static const u8 sKabutoHeadline[] = (@@STRING:7f9fd5c18fc259ab11aad1fc38ced92aa0e1ddff3fe61cf8a4dd5fcdfc3acce2@@);

ALIGNED(4) static const u8 sSmeargleText[] = (@@STRING:8994f3513f2200bc3e7557e80bcbcb7ce5f3886dca24e2ec0d1c102ef62badc4@@);

ALIGNED(4) static const u8 sSmeargleHeadline[] = (@@STRING:54f57a977ab4c09646fc74db7e03d4e28aada692a336e5ed1aa8355a3cc94288@@);

ALIGNED(4) static const u8 sCastformText[] = (@@STRING:361675de8f190f11f54136a08f4a04e93f74bd54c4c71d8cd9162fcbfc6fae47@@);

ALIGNED(4) static const u8 sCastformHeadline[] = (@@STRING:77c60182b38882499357a7bdda6b57cdabbe25e5ccca90959037f5506e3b925d@@);

ALIGNED(4) static const u8 sGasText[] = (@@STRING:647aaf75d8265b0312d26b19d00754471581faeecad8a95814d896468d4b4dd0@@);

ALIGNED(4) static const u8 sGasHeadline[] = (@@STRING:f53d147275e60b7df6af10de578b0b902ae5af042be762259547cb3c7da09982@@);

ALIGNED(4) static const u8 sKeyItemText2[] = (@@STRING:2c0c5b7b1efa2c9cf2b2ecc58fba64bf58343fa61abf2cadea06af489f42b86d@@);

ALIGNED(4) static const u8 sKeyItemHeadline2[] = (@@STRING:89964fa52dc5514277a309c22facc9108722cbfe4e3d506c5997233057e4d091@@);

ALIGNED(4) static const u8 sKeyItemText1[] = (@@STRING:6856702bcc2f04dc52e241e549c8f469dc3036515536197eafd3eb518e92b0ed@@);

ALIGNED(4) static const u8 sKeyItemHeadline1[] = (@@STRING:24e4bb5bf18b282c7e5d778ed4bb95321152ab149d809af52afbeccea3db4df1@@);

ALIGNED(4) static const u8 sSwitchText[] = (@@STRING:165010d32fd17b1f167c0e38d2582a4df66b35d1bc59d166c425944e3a79b4e8@@);

ALIGNED(4) static const u8 sSwitchHeadline[] = (@@STRING:c8a15e2ccdcca182dcc0c5b73c87221f92726fe4c4b8563f24c892730557be23@@);

ALIGNED(4) static const u8 sKecleonText[] = (@@STRING:75da22890d57ad465dcb6d4aa79d56caf4ce42e8943d0320e1f84eea7123105f@@);

ALIGNED(4) static const u8 sKecleonHeadline[] = (@@STRING:707b2b1950ce55cc33f66b0e18c9a75b8eb4aab9bc7f534d21383db94b57b36e@@);

ALIGNED(4) static const u8 sWeatherText2[] = (@@STRING:0f15b526741e7c7301d3066c976f4d878a51c7238ed1dc0d52fe6bc60bbd7cde@@);

ALIGNED(4) static const u8 sWeatherHeadline2[] = (@@STRING:c6119b358ded9192e632dea59ecf2d376485d7aa0900d88314fc5324e4c3307f@@);

ALIGNED(4) static const u8 sWobbuffetText[] = (@@STRING:fbe248d4844b0547f313a0b597014033142519f36accbef1442ec4acbf3a9734@@);

ALIGNED(4) static const u8 sWobbuffetHeadline[] = (@@STRING:fb053fb5268ff7bde4811edf0c3f6fa300903e1b3bae3b985af3848fa334f04f@@);

ALIGNED(4) static const u8 sPechaText[] = (@@STRING:071eed0ccd636b18ebae288dc8ec90e5177208c614fa13ab8eea7560255d33b2@@);

ALIGNED(4) static const u8 sPechaHeadline[] = (@@STRING:996e357ce1d68eb9b4dbdb9d4e4e91eabd408bb142c3a739c8558a2c397d8bdf@@);

ALIGNED(4) static const u8 sWeatherText1[] = (@@STRING:24dd934496d92a5e3841a54a135ad624c39669803160244f111cfa803803d1aa@@);

ALIGNED(4) static const u8 sWeatherHeadline1[] = (@@STRING:fb2ce1f58a9cc31bfdc8f15395a20238decefdccf2eee2b9791409a288095a92@@);

ALIGNED(4) static const u8 sAzurillText[] = (@@STRING:ac404495457e7da60db7e45e34f5f82432fb8c462e56943989906f3dc2b11094@@);

ALIGNED(4) static const u8 sAzurillHeadline[] = (@@STRING:f4a9189dba66cf02a1e745dada5573e781437a44f8cbd4fe27355ed777f84f05@@);

ALIGNED(4) static const u8 sKeyText[] = (@@STRING:f7de0d0683352452e514376cca6c85c6b2bdaecd4a8cff21cd7721b03cbbee4d@@);

ALIGNED(4) static const u8 sKeyHeadline[] = (@@STRING:8d37989e30a2a08f3570ebc6c146931d673e250e73956e359fd6121546c7561a@@);

ALIGNED(4) static const u8 sSweetText[] = (@@STRING:c9f35072b8934804e0887aa004bca9592b60ae65824916b2c1b5536b97966cba@@);

ALIGNED(4) static const u8 sSweetHeadline[] = (@@STRING:dbe961926f3804f41d1cfaede4082ab4db68961fea7449ca944d748fdf0a0a12@@);

ALIGNED(4) static const u8 sRangeText[] = (@@STRING:24db0121fb877038633332f2f8468185260e71bc90d020136b98c9f38953f62c@@);

ALIGNED(4) static const u8 sRangeHeadline[] = (@@STRING:cd69863a73e40bbcabfa06f08855ce9441bd8023120038620b6d8a9ff95d3135@@);

ALIGNED(4) static const u8 sIQText[] = (@@STRING:00d5fa2fddea831dfc67a45316a6ae30599a33c39ba667194c73a2c8437e3e14@@);

ALIGNED(4) static const u8 sIQHeadline[] = (@@STRING:9c21c3ddaf9006852fc37b22d2e96843f36278b2185f34de5946a321a05de52f@@);

ALIGNED(4) static const u8 sTrapTileText[] = (@@STRING:9f6568b1c6c4b7b50f0ac1e1f92a3e73b6914b6fe5c36d0d0960cac9b420b370@@);

ALIGNED(4) static const u8 sTrapTileHeadline[] = (@@STRING:8ff093dcfa18eaa422706f2ee46df860ae6dd41521b10da29432e19d05f85210@@);

ALIGNED(4) static const u8 sMakuhitaText[] = (@@STRING:1ea8d0f146f1914e695571c7efadadfbdff25eff4ff64fda5936d80cd496a83e@@);

ALIGNED(4) static const u8 sMakuhitaHeadline[] = (@@STRING:f9ce352461e6c58603d3a59bc77186c4ea00f336c496af2a73fe7b090403f842@@);

ALIGNED(4) static const u8 sMachineText[] = (@@STRING:19627fba1b98338ae578754422933013030e0e0db49601a67074f0ad3dc5727b@@);

ALIGNED(4) static const u8 sMachineHeadline[] = (@@STRING:2fcdf901a8b2156734c396a479e99cb81c2e539b5dfceeae22bdefb5572e811b@@);

ALIGNED(4) static const u8 sUltimateText[] = (@@STRING:8ac2e89c2fa604a23e8710b15befbe0938a8a584e73f5860710c4a9f224c4adc@@);

ALIGNED(4) static const u8 sUltimateHeadline[] = (@@STRING:be88e3b6338adbe0825d9ca6d56849be6fabd48a256ddbe767076a34265282ee@@);

ALIGNED(4) static const u8 sGummiText[] = (@@STRING:154cab9829c157620aee67114dfb3824ee9da466a2196a003e408c67df4a7e20@@);

ALIGNED(4) static const u8 sGummiHeadline[] = (@@STRING:59be7abae7d851a2e0ffe63df9b289bb2446e15bc2c2bae02d061d1d8e5464e5@@);

ALIGNED(4) static const u8 sMoveTipsText[] = (@@STRING:f3c2156143199c09c8afe9dd44052ab2fa0a6fc23e392d719daf5a74a42fd293@@);

ALIGNED(4) static const u8 sMoveTipsHeadline[] = (@@STRING:9dddbd4d08a698d7a46edfba53443cc19fd4e8d71ded3072f5e61670f56ecc3d@@);

ALIGNED(4) static const u8 sAddMembersText[] = (@@STRING:988d9efc3e38c56a8e4300f2eb1c7fd8c604f045154f575817d029f90375c33f@@);

ALIGNED(4) static const u8 sAddMembersHeadline[] = (@@STRING:25e1d7d2ee32677c36765351d309edcb2c26af201e7a88ded12523f37fce1ee7@@);

ALIGNED(4) static const u8 sTeamMoveText[] = (@@STRING:8eb5d9e3f1b4c33aa36e9ff7544aa56219039d3715c237ea172fb29746a623e1@@);

ALIGNED(4) static const u8 sTeamMoveHeadline[] = (@@STRING:239fb4021f525642fb9908ed27122236fd3942d2820b405640ebb2e5349ebf1e@@);

ALIGNED(4) static const u8 sWondersText[] = (@@STRING:f7bb3c8fbbda66f1a861e809a8f168432bc0cb654ddee9a4c06e10b5189d14cf@@);

ALIGNED(4) static const u8 sWondersHeadline[] = (@@STRING:18bbc0e813e6f02afadd907f9260322780266dde9ec86586332d5f7bf3044b6f@@);

ALIGNED(4) static const u8 sPollText[] = _("{COLOR YELLOW}1er{MOVE_X_POSITION}{50}Gravalroche{RESET}\n{COLOR YELLOW}2e{MOVE_X_POSITION}{50}Baie Oran{RESET}\nD'après un sondage auprès des équipes\nde secours, les {COLOR GREEN}Gravalroches{RESET} sont\nles objets les plus appréciés. Simularbre\nde l'équipe des Imitateurs explique:\n«Elles permettent d'attaquer à distance.\nC'est indispensable!» Les {COLOR GREEN}Baies Oran{RESET}\narrivent en deuxième position.");

ALIGNED(4) static const u8 sPollHeadline[] = (@@STRING:9b92173b6bf1547b4e353a6f4a979daf6328f5658fc6fe5a1f957d7b7286faea@@);

ALIGNED(4) static const u8 sLinkedEntryText3[] = (@@STRING:c171bd97b1622ba62a26bf2565ea3f6282c5df8747fbfa61c10c24d2dfa7e146@@);

ALIGNED(4) static const u8 sLinkedEntryHeadline3[] = (@@STRING:338ca414a045f271df8a29f91256fb1486a703b4eaeb4c9e66d93b779e76682c@@);

ALIGNED(4) static const u8 sLinkedEntryText2[] = (@@STRING:2fcddd660dc31f76570d9d1cd618adc6409853a2856cd743872b422a9f41e125@@);

ALIGNED(4) static const u8 sLinkedEntryHeadline2[] = (@@STRING:18baf654b23b13f12ff9fa0dc444414a808e244f2fe2bc8bbc3a4354e797d1dd@@);

ALIGNED(4) static const u8 sLinkedEntryText1[] = (@@STRING:b7512b9f6d7bd6b02773723273c6660597ff5f3c0c25e164c49f1a2b7f1e6ff0@@);

ALIGNED(4) static const u8 sLinkedEntryHeadline1[] = (@@STRING:ec7ad2f1640249815736c0a9f59a945d2eea9d23741e77d60a28650007654665@@);

ALIGNED(4) static const u8 sTypeText[] = (@@STRING:0b795521aa4b8f40db1a8178afbd905b325312931a2eacb7ce68391f109571b4@@);

ALIGNED(4) static const u8 sTypeHeadline[] = (@@STRING:55b3d2d374bd2126888c8ed1de66bdecef198bdd684cb490851189c5c92c9138@@);

ALIGNED(4) static const u8 sDungeonText[] = (@@STRING:cee798d6bc047c90b590bbbba7956dff9af8a48924e630db2bfeaeca2105e822@@);

ALIGNED(4) static const u8 sDungeonHeadline[] = (@@STRING:ee82e3b9deafb0a49f1001f0b56ef271c11affb043d6c34acd0dd76f56814d10@@);

ALIGNED(4) static const u8 sWonderText[] = (@@STRING:ad4f3899cb0d6d41a3ff8af6cd0687ce7d1c51ae88b021a52539f1dadf2df057@@);

ALIGNED(4) static const u8 sWonderHeadline[] = (@@STRING:dad7a2d31afb0248e4397dcf19ebad53ab458b092623e49995b3786c6162cba6@@);

ALIGNED(4) static const u8 sMoveText[] = (@@STRING:70b270533d7f14a7cf4877d8550ad33cff5573b0c276677269b9a87ab0652960@@);

ALIGNED(4) static const u8 sMoveHeadline[] = (@@STRING:599efa6414595792e1f551c698e352313756e3a0c96b5d0aff51312c2ff0488e@@);

ALIGNED(4) static const u8 sOptionsText[] = (@@STRING:be2b2a078e54efe5ad90879da8c50467b3581b3dcb234372b6013f5601513663@@);

ALIGNED(4) static const u8 sOptionsHeadline[] = (@@STRING:af9b54ad7835f59895893bdeda5df440e3a4347ac7c5a977071cad086ba391f2@@);

ALIGNED(4) static const u8 sDisasterText[] = (@@STRING:df0545b76b01b0facddd2ca3b525825dbbaa91d64c05ec03c9de9e7ab4e9537d@@);

ALIGNED(4) static const u8 sDisasterHeadline[] = (@@STRING:6a3abae192cc16fd85b9d4c47b192c285f22cec6a31d0fad0aef78ca68841926@@);

ALIGNED(4) static const u8 sSeedText[] = (@@STRING:e156e21a0ffec458dbf588d6be8fe440dd5ccb6c2bdea6fcf23da15e1b8b880c@@);

ALIGNED(4) static const u8 sSeedHeadline[] = (@@STRING:3bfab64c1047e42ca5aa8f24c23014ff8bca76e65487f5ce7dba04ab6f65a04a@@);

ALIGNED(4) static const u8 sHungerText[] = (@@STRING:05201d62e076b0489ed5e2b0b214fb4bc169202e5374d48958429fe7e6c72db1@@);

ALIGNED(4) static const u8 sHungerHeadline[] = (@@STRING:62f05e5db142c9bcb2a76aaf175c4abcfeac677996e801f4ac8fbaf0af52b920@@);

ALIGNED(4) static const u8 sJobText[] = (@@STRING:7ba81dbd47ab56cc4de5ec78d34821d9da93b55f25c8118b361b1bc5b9ea82ba@@);

ALIGNED(4) static const u8 sJobHeadline[] = (@@STRING:c9d11714da1ffc4fc4672c4ef31edaaa8768114336923884bec7dcb9166e5067@@);

ALIGNED(4) static const u8 sBasicsText[] = (@@STRING:22b4114c24c0bf554ea518b4efea09526cf8545dbb3f59674494449f1a0ed840@@);

ALIGNED(4) static const u8 sBasicsHeadline[] = (@@STRING:3b8da05fc019ec4c364e43520348dca49021621d4cfd55bd1c9ac7c0de579fdf@@);

ALIGNED(4) static const u8 sWelcomeText[] = (@@STRING:34ef93092cda760a609501903ac2767ba4de55ceb849de85ce1016709344663c@@);

ALIGNED(4) static const u8 sWelcomeHeadline[] = (@@STRING:cd017f5ce958dbe331d37149488d220db5513612bf5b9abffbe564735262f42e@@);
