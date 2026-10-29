static const WindowTemplate sUnknown_80DD148 = {
    0,
    0x03,
    0x00, 0x00,
    0x00, 0x00,
    0x00, 0x00,
    NULL
};

static const WindowTemplate sUnknown_80DD160 = {
    0,
    0x03,
    0x13, 0x04,
    0x08, 0x03,
    0x03, 0x00,
    NULL
};

static const WindowTemplate sUnknown_80DD178 = {
    0,
    0x03,
    0x14, 0x04,
    0x06, 0x03,
    0x03, 0x00,
    NULL
};

static const WindowTemplate sUnknown_80DD190 = {
    0,
    0x03,
    0x02, 0x11,
    0x1A, 0x02,
    0x02, 0x00,
    NULL
};

ALIGNED(4) static const u8 sVisitWhoPrompt[] = @@STRING:c34001d78f5f24e5d0992b8bd10d37a26388cb3cd082af99fb222e44347d908a@@;

ALIGNED(4) static const u8 sItemHandedOver[] = _(
	"{CENTER_ALIGN}The {COLOR GREEN}{MOVE_ITEM_1}{RESET} was\n"
	"{CENTER_ALIGN}handed over. ");

ALIGNED(4) static const u8 sItemExchanged[] = _(
	"{CENTER_ALIGN}The {COLOR GREEN}{MOVE_ITEM_1}{RESET} was\n"
	"{CENTER_ALIGN}handed over.{EXTRA_MSG}"
	"{CENTER_ALIGN}The {COLOR GREEN}{MOVE_ITEM_0}{RESET} was\n"
	"{CENTER_ALIGN}returned to the Toolbox.");

ALIGNED(4) static const u8 sReturnedToToolbox[] = _(
	"{CENTER_ALIGN}The {COLOR GREEN}{MOVE_ITEM_0}{RESET} was\n"
	"{CENTER_ALIGN}returned to the Toolbox.");

ALIGNED(4) static const u8 sLeftOnStandby[] = _(
    "{CENTER_ALIGN}{POKEMON_1} left the team to remain\n"
    "{CENTER_ALIGN}on standby in the Friend Area.");

ALIGNED(4) static const u8 sGive[] = @@STRING:a343c8926d4f411238acee6a39fb0389f16679a331bde58f4dd3f17c245ce3fe@@;
ALIGNED(4) static const u8 sTake[] = @@STRING:2ebce05e7943a0e96f34667554cae4c3b2fbd4c0237ee1607951a4774fdf317a@@;
ALIGNED(4) static const u8 sStandBy[] = @@STRING:4bcc38c211076a40d64b52a7ad7df3197196ba6d64c6e1624856697f55c3bcbc@@;
ALIGNED(4) static const u8 sVisit[] = @@STRING:285297a7698046c0e14ed1fb1ae7f637252e4ee48229aa1d503c170dbe432d7d@@;
ALIGNED(4) static const u8 sName[] = @@STRING:b2c124536d218059c091750c0a8e7d30b55563164f478147fa4cafdf549545d8@@;
ALIGNED(4) static const u8 sSummary[] = @@STRING:f8bfa5284842804af9c665eab154ad5f0e21f97f8233c169af3e3b9ba37e1435@@;
ALIGNED(4) static const u8 sMoves[] = @@STRING:5099d51aa9e2a068a5280bc633fd996ce14e55ca98b4fd987502ba530bd77d60@@;
ALIGNED(4) static const u8 sCheckIQ[] = @@STRING:16272047a1b971793fbb46488f3b170e1356091ed3888bdd19c9304f9d7c89e3@@;
ALIGNED(4) static const u8 sItemBuffered[] = _("Item: {COLOR GREEN}{MOVE_ITEM_0}{RESET} ");
