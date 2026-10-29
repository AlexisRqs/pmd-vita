static const WindowTemplate gUnknown_80DC11C = {
    0,
    3,
    0, 0,
    0, 0,
    0, 0,
    NULL
};

static const WindowTemplate gUnknown_80DC134 = {
    0,
    3,
    22, 4,
    6, 3,
    3, 0,
    NULL
};

UNUSED static const WindowTemplate gUnknown_80DC14C = {
    0,
    3,
    22, 14,
    6, 3,
    3, 0,
    NULL
};

ALIGNED(4) static const u8 sWillAMoveBeForgotten[] = _(
    @@STRING:19e2417b593613021d460c57bda755a013f74914d53d4a768120bdd57e7335f3@@
    @@STRING:31265f71945477c1c4d5e4c1e225ffbdd08dd9a76026ce721aa2c61685e33a52@@);

ALIGNED(4) static const u8 sForgetMoveAndLinkedOnes[] = _(
    "{CENTER_ALIGN}Forget the move {COLOR GREEN}{POKEMON_1}{RESET} and\n"
    "{CENTER_ALIGN}any moves linked to it, and learn the move\n"
    "{CENTER_ALIGN}{COLOR CYAN}{POKEMON_0}{RESET}?");

ALIGNED(4) static const u8 sForgetMoveOnly[] = _(
    "{CENTER_ALIGN}Forget the move {COLOR GREEN}{POKEMON_1}{RESET}\n"
    "{CENTER_ALIGN}and learn {COLOR CYAN}{POKEMON_0}{RESET}?");

ALIGNED(4) static const u8 sForget[] = (@@STRING:a7ff2f53cc04afecac6653a66e7a3451617aa517b965a617b9af353bc1bc9f76@@);
