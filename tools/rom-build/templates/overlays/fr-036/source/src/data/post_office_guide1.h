enum PostOfficeMenuActions
{
    POST_OFFICE,
    BULLETIN_BOARD,
    DELIVERY,
    FRIEND_RESCUE,
    CANCEL,
    EXIT,
    FRIEND_RESCUE_INFO,
    GO_RESCUE,
    GET_HELP_MENU,
    DELETING_MAIL,
    RESCUE_PROCEDURES,
    RECEIVE_SOS_MAIL,
    LEAVE_FOR_RESCUE,
    SEND_AOK_MAIL,
    GET_THANK_YOU_MAIL,
    GETTING_HELP,
    SEND_SOS_MAIL,
    RECEIVE_AOK_MAIL,
    SEND_THANK_YOU_MAIL
};

static const MenuItem sPostOfficeHelpStartMenu[] = {
    {(@@STRING:94effc0153ff5bf537a107396711c48b13518c6b2857329481bce267a4f9b56c@@), POST_OFFICE},
    {_("Panneau Missions"), BULLETIN_BOARD},
    {(@@STRING:16cf2224b0501830466d7de94849c7dd1c9edff63f782208f420961d116ea156@@), DELIVERY},
    {(@@STRING:3c072b8e40ef92caeaec3888076d3895d2785a0c28c00ced210446c99fd104d3@@), FRIEND_RESCUE},
    {(@@STRING:46ad3916f6a0979841df9c4ba6f5310d34434d95024912df97b2eba644d0a60d@@), CANCEL},
    {NULL, EXIT}
};

static const MenuItem gPostOfficeHelpFriendRescueMenu[] =
{
    {_("Sauvetage ami"), FRIEND_RESCUE_INFO},
    {(@@STRING:de70c025880df5f6f21b1ac8f3025e61e04c3d3e30d9a4b465447c4bafbdeb79@@), GO_RESCUE},
    {(@@STRING:42ed6e9828f9fc83e0f4bf4ba4f5e251b1ebeda34d1a20fbacd7491fc0bc0dd0@@), GET_HELP_MENU},
    {(@@STRING:77ea407f4a1fabcce55642106d8ea20f63c96c06cc4db67b795282bfd9cf0b19@@), DELETING_MAIL},
    {(@@STRING:ef23a5940244e0f5b4c5a5f5b53259165e40a7ab9fc639551d2819dec83d72f0@@), EXIT},
    {NULL, EXIT}
};

static const MenuItem sPostOfficeHelpGoRescueMenu[] =
{
    {(@@STRING:af45a9fcdc05b9d003b5e1d5824e14157c50d97e4c33ff506d4590cfbb211c0a@@), RESCUE_PROCEDURES},
    {(@@STRING:bced7d097b646eccac03a02b77eb0b496e2310472cdfd567246230c37f9d25ee@@), RECEIVE_SOS_MAIL},
    {(@@STRING:70ea90ba64a06d7600897772143b18c6ec3f42f9444b9256aeff5a8b0c6f143e@@), LEAVE_FOR_RESCUE},
    {(@@STRING:494e87cbba13f7fe3d4e2937921f2104a108f6815965f2f7488af170f7dbc833@@), SEND_AOK_MAIL},
    {(@@STRING:1ceb04472a19707f7faf4666361343b4f7c0012ad032850007a8dc07952c6ccf@@), GET_THANK_YOU_MAIL},
    {(@@STRING:ef23a5940244e0f5b4c5a5f5b53259165e40a7ab9fc639551d2819dec83d72f0@@), EXIT},
    {NULL, EXIT}
};

static const MenuItem sPostOfficeHelpGetHelpMenu[] =
{
    {(@@STRING:2204a56199e201c79ffa59349e54c3ac6cba443c0187fda740ddf7c75f41f786@@), GETTING_HELP},
    {(@@STRING:13536a79248c0441bb6d83f105d50eaadb1cbd7e2689e40c06d89c1b6c56b951@@), SEND_SOS_MAIL},
    {(@@STRING:fbe2f1167096cc3edf0c615efc228e6ea4808d2a7b1082628135a8a4eed57efc@@), RECEIVE_AOK_MAIL},
    {(@@STRING:06c3349489409ab34406130f8f2f590e816c7d8ea79f6b55c076747258e88fe6@@), SEND_THANK_YOU_MAIL},
    {(@@STRING:ef23a5940244e0f5b4c5a5f5b53259165e40a7ab9fc639551d2819dec83d72f0@@), EXIT},
    {NULL, EXIT}
};

ALIGNED(4) static const u8 sWhatdYouWantToKnow[] =
    (@@STRING:1e79a311da6bed3f7e6fe0a757e376e2120bd6e24348bb639b18a5ab64647cf0@@);

ALIGNED(4) static const u8 sGettingHelpExplanation[] =
    (@@STRING:2df6ef45944c24f4718cafa268aad31bcc73274608e4c523fb1d9be61363d977@@);

ALIGNED(4) static const u8 sSendSOSMailExplanation[] =
    (@@STRING:4c138d1d938cce496979b12dba2084d6d89033f03262f8a7e73d0477cd5b9a63@@);

ALIGNED(4) static const u8 sReceiveAOKMailExplanation[] =
    (@@STRING:dbdfe891b4ce4330a35661a2c8b1d92b62089b72c13d2aadfc3e881e99d9035a@@);

ALIGNED(4) static const u8 sSendThankYouMailExplanation[] =
    (@@STRING:357a54e7ca1e7f49d7385651deb409466360f5050f773a3bcca84a5cfdb67743@@);

ALIGNED(4) static const u8 sRescueProceduresExplanation[] =
    (@@STRING:48c5fe9782dc9d8456e86a2a7b7689c48215563086de0ace81623524b8d5e82f@@);

ALIGNED(4) static const u8 sReceiveSOSMailExplanation[] =
    (@@STRING:7092177c5e313496671b15b7a9a40015502bd6ce33b49ebd6cf8940b6b02dde6@@);

ALIGNED(4) static const u8 sSendAOKMailExplanation[] =
    (@@STRING:aed4c2d2235f8ef501b8564216b331e1d62447c022dd9db52b3401a0a0ed979b@@);

ALIGNED(4) static const u8 sLeaveForRescueExplanation[] =
    (@@STRING:d0e5aad9423fde32b6a182cd18e1d195b250098a438c04143fdc8baef7b19696@@);

ALIGNED(4) static const u8 sGetThankYouMailExplanation[] =
    (@@STRING:a48d8a3e61e80ae26f99799456c3c9a94660193e709a2889199541ffbca64c48@@);

ALIGNED(4) static const u8 sImYourGuide[] =
    (@@STRING:19a29d79fc83dbee50b5138f74066939496bbc1dc78e6931e9993bba10467b4a@@);

ALIGNED(4) static const u8 sAnythingElse[] =
    (@@STRING:e7cd9f3db24f4d475508c5279f204f6f36ae6eb1a116a61e0bedc98ef938e9a6@@);

ALIGNED(4) static const u8 sPostOfficeExplanation[] =
    (@@STRING:be7ad8cf429622d8ba400e1312794825cb7f9e412bb05f4af6473c448c8c8933@@);

ALIGNED(4) static const u8 sBulletinBoardExplanation[] =
    (@@STRING:2ce4a3b74aeb8c5f99b95c19824831d8983250ed38ea67fa60f15c80d0143a8e@@);

ALIGNED(4) static const u8 sDeliveryExplanation[] =
    (@@STRING:bbb5845a0ae7c0d4d16855e49c8ac22556e8c4cfb4ec4a0a3f0a4e5354858597@@);

ALIGNED(4) static const u8 sFriendRescueExplanation[] =
    (@@STRING:ebaebf47afb62ef4de263b42b960c2ae5e3a7171adcf0fbf9b47dc8d87a01999@@);

ALIGNED(4) static const u8 sDeletingMailExplanation[] =
    (@@STRING:572814c1286bc700a63f7572a6a73fd85c0f0ffdf52917148f914350be4c100c@@);