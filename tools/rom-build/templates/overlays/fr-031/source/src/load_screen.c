#include "global.h"
#include "globaldata.h"
#include "constants/main_menu.h"
#include "constants/wonder_mail.h"
#include "structs/menu.h"
#include "bg_palette_buffer.h"
#include "code_800D090.h"
#include "code_8094F88.h"
#include "adventure_info.h"
#include "def_filearchives.h"
#include "dungeon_info.h"
#include "event_flag.h"
#include "file_system.h"
#include "ground_main.h"
#include "input.h"
#include "main_menu1.h"
#include "memory.h"
#include "menu_input.h"
#include "play_time.h"
#include "pokemon.h"
#include "rescue_team_info.h"
#include "save.h"
#include "string_format.h"
#include "text_1.h"
#include "text_2.h"
#include "text_3.h"
#include "text_util.h"

#define LEGEND_ICON_W 16
#define LEGEND_ICON_H 16
#define LEGEND_ICON_4BPP_LEN (LEGEND_ICON_W * LEGEND_ICON_H / 8)

// Size: 0x8
typedef struct ClmkFileData
{
    /* 0x0 */ /*const */u32 (*packedGFX)[LEGEND_ICON_4BPP_LEN];
    /* 0x4 */ /*const */RGB_Struct (*palette)[16 * 4]; // Contains 4 palettes
} ClmkFileData;

enum
{
    LEGEND_ICON_ZAPDOS,
    LEGEND_ICON_MOLTRES,
    LEGEND_ICON_ARTICUNO,
    LEGEND_ICON_GROUDON,
    LEGEND_ICON_RAYQUAZA,
    LEGEND_ICON_KYOGRE,
    LEGEND_ICON_MEW,
    LEGEND_ICON_HO_OH,
    LEGEND_ICON_CELEBI,
    LEGEND_ICON_LUGIA,
    LEGEND_ICON_MEWTWO,
    LEGEND_ICON_DEOXYS,
    NUM_LEGEND_ICONS
};

// Size: 0x27C
struct LoadScreen
{
    /* 0x000 */ u32 currMenu;
    /* 0x004 */ MenuStruct unk4[4];
    /* 0x144 */ WindowTemplates unk144;
    /* 0x1A4 */ u8 formattedTeamName[36];
    /* 0x1C8 */ u8 formattedPlayerName[36];
    /* 0x1EC */ u8 formattedLocation[36];
    /* 0x210 */ u8 formattedPlayTime[36];
    /* 0x234 */ u8 formattedAdventures[36];
    /* 0x258 */ u8 formattedHelperInfo[36];
};

EWRAM_INIT struct LoadScreen *gLoadScreen = { NULL };

extern unkStruct_203B484 *gUnknown_203B484;

const WindowTemplate gUnknown_80E75F8 = WIN_TEMPLATE_DUMMY;

const WindowTemplate gUnknown_80E7610 = {
    .flags = WINTEMPLATE_FLAG_NONE,
    .type = WINDOW_TYPE_NORMAL,
    .pos = { 2, 2 },
    .width = 26,
    .height = 11,
    .totalHeight = 11,
    .unk12 = 0,
    .header = NULL
};

static EWRAM_INIT MenuItem gUnknown_203B378[] = {
    { (@@STRING:36a9e7f1c95b82ffb99743e0c5c4ce95d83c9a430aac59f84ef3cbfab6145068@@), 5 },
    { NULL, 3 },
};

static EWRAM_INIT u32 sLegendaryQuestIconPalNums[NUM_LEGEND_ICONS] = {
    [LEGEND_ICON_ZAPDOS] =   12,
    [LEGEND_ICON_MOLTRES] =  12,
    [LEGEND_ICON_ARTICUNO] = 14,
    [LEGEND_ICON_GROUDON] =  14,
    [LEGEND_ICON_RAYQUAZA] = 13,
    [LEGEND_ICON_KYOGRE] =   14,
    [LEGEND_ICON_MEW] =      12,
    [LEGEND_ICON_HO_OH] =    13,
    [LEGEND_ICON_CELEBI] =   13,
    [LEGEND_ICON_LUGIA] =    11,
    [LEGEND_ICON_MEWTWO] =   11,
    [LEGEND_ICON_DEOXYS] =   11,
};

static EWRAM_INIT u32 sLegendaryQuestIDs[NUM_LEGEND_ICONS] = {
    [LEGEND_ICON_ZAPDOS] =   QUEST_LEGEND_ZAPDOS,
    [LEGEND_ICON_MOLTRES] =  QUEST_LEGEND_MOLTRES,
    [LEGEND_ICON_ARTICUNO] = QUEST_LEGEND_ARTICUNO,
    [LEGEND_ICON_GROUDON] =  QUEST_LEGEND_GROUDON,
    [LEGEND_ICON_RAYQUAZA] = QUEST_LEGEND_RAYQUAZA,
    [LEGEND_ICON_KYOGRE] =   QUEST_LEGEND_KYOGRE,
    [LEGEND_ICON_MEW] =      QUEST_LEGEND_MEW,
    [LEGEND_ICON_HO_OH] =    QUEST_LEGEND_HO_OH,
    [LEGEND_ICON_CELEBI] =   QUEST_LEGEND_CELEBI,
    [LEGEND_ICON_LUGIA] =    QUEST_LEGEND_LUGIA,
    [LEGEND_ICON_MEWTWO] =   QUEST_LEGEND_MEWTWO,
    [LEGEND_ICON_DEOXYS] =   QUEST_LEGEND_DEOXYS,
};

const WindowTemplate gUnknown_80E762C = {
    .flags = WINTEMPLATE_FLAG_NONE,
    .type = WINDOW_TYPE_NORMAL,
    .pos = { 2, 15 },
    .width = 19,
    .height = 3,
    .totalHeight = 3,
    .unk12 = 0,
    .header = NULL
};

const MenuItem gResumeQuicksaveMenuItems[] = {
    { (@@STRING:1c2f593882c0832d1caca5a501582ef506889cfc91699a3b4d09411a81ac8336@@), 5 },
    { (@@STRING:6002c00e31fa0c315e66d9b6c6cf3e325359e833692ece879c90a552911b55e3@@), 5 },
    { NULL, 3 },
};

const MenuItem gResumeAdventureMenuItems[] = {
    { (@@STRING:787de6750a05e6fa9c6a0b4e20575456d840aeda23c4fa1ca16b154039e4eabb@@), 5 },
    { (@@STRING:6002c00e31fa0c315e66d9b6c6cf3e325359e833692ece879c90a552911b55e3@@), 5 },
    { NULL, 3 },
};

const MenuItem gQuitWaitingRescueMenuItems[] = {
    { (@@STRING:3dee4b225b2170791b5d8d22129fa47d8cc3dfe167bc50de41847d6c7bae0387@@), 5 },
    { (@@STRING:6002c00e31fa0c315e66d9b6c6cf3e325359e833692ece879c90a552911b55e3@@), 5 },
    { NULL, 3 },
};

const MenuItem gDeleteSavePromptMenuItems[] = {
    { (@@STRING:b4dbf6ff40380139d21bacf0c87990b13fc98e131ed22a18ec26e94f58e91c8e@@), 5 },
    { (@@STRING:34168879376b7442566723b144836fe3cf9861814bb0a4d49de671ecc5c9b66e@@), 5 },
    { NULL, 3 },
};

const MenuItem gDeleteSaveConfirmMenuItems[] = {
    { (@@STRING:b0e0be2ca0579b84a4bd41b1d6af53c3618c17b40395082893e28bec88ec51f5@@), 5 },
    { (@@STRING:ffcb36c43fd3d5a916b241e4408103e3c33161fec7c34e33bc7d943c7515c2cd@@), 5 },
    { NULL, 3 },
};

const WindowTemplate gUnknown_80E7784 = {
    .flags = WINTEMPLATE_FLAG_NONE,
    .type = WINDOW_TYPE_NORMAL,
    .pos = { 23, 15 },
    .width = 5,
    .height = 3,
    .totalHeight = 3,
    .unk12 = 0,
    .header = NULL
};

const MenuItem gLoadScreenYesNoMenu[] = {
    { (@@STRING:0a90407639c4155a2fa08ac4c97bfd08fa4856b31f167978918ffe0f1fa8defa@@), 1 },
    { (@@STRING:7f62496b0cb865f7b99f9ff14f7de540a57119ec57b8ac99b4f45064318645ea@@), 2 },
    { NULL, 3 },
};

static void DrawLoadScreenText(void);
static void DrawQuestIcons(void);
static u8 IsQuickSave(void);

void CreateLoadScreen(u32 currMenu)
{
    s32 i;

    if (gLoadScreen == NULL) {
        gLoadScreen = MemoryAlloc(sizeof(struct LoadScreen), MEMALLOC_GROUP_8);
        MemoryFill8(gLoadScreen, 0, sizeof(struct LoadScreen));
    }

    gLoadScreen->currMenu = currMenu;
    for (i = 0; i < MAX_WINDOWS; i++)
        gLoadScreen->unk144.id[i] = gUnknown_80E75F8;

    ResetUnusedInputStruct();
    ShowWindows(&gLoadScreen->unk144, TRUE, TRUE);
    SetMenuItems(gLoadScreen->unk4, &gLoadScreen->unk144, 0, &gUnknown_80E7610, gUnknown_203B378, FALSE, 6, FALSE);

    switch (gLoadScreen->currMenu) {
        case MENU_CONTINUE: {
            if (IsQuickSave())
                SetMenuItems(gLoadScreen->unk4, &gLoadScreen->unk144, 1, &gUnknown_80E762C, gResumeQuicksaveMenuItems, FALSE, 6, FALSE);
            else
                SetMenuItems(gLoadScreen->unk4, &gLoadScreen->unk144, 1, &gUnknown_80E762C, gResumeAdventureMenuItems, FALSE, 6, FALSE);
            break;
        }
        case MENU_AWAITING_RESCUE: {
            SetMenuItems(gLoadScreen->unk4, &gLoadScreen->unk144, 1, &gUnknown_80E762C, gQuitWaitingRescueMenuItems, FALSE, 6, FALSE);
            break;
        }
        case MENU_DELETE_SAVE_PROMPT: {
            SetMenuItems(gLoadScreen->unk4, &gLoadScreen->unk144, 1, &gUnknown_80E762C, gDeleteSavePromptMenuItems, FALSE, 6, FALSE);
            break;
        }
        case MENU_DELETE_SAVE_CONFIRM: {
            SetMenuItems(gLoadScreen->unk4, &gLoadScreen->unk144, 1, &gUnknown_80E762C, gDeleteSaveConfirmMenuItems, FALSE, 6, FALSE);
            break;
        }
    }

    SetMenuItems(gLoadScreen->unk4, &gLoadScreen->unk144, 2, &gUnknown_80E7784, gLoadScreenYesNoMenu, TRUE, 2, FALSE);
    sub_8035CF4(gLoadScreen->unk4, 0, FALSE);
    sub_8035CF4(gLoadScreen->unk4, 1, FALSE);
    sub_8035CF4(gLoadScreen->unk4, 2, TRUE);
    DrawLoadScreenText();
}

void CleanLoadScreen(void)
{
    ResetUnusedInputStruct();
    ShowWindows(NULL, TRUE, TRUE);

    if (gLoadScreen != NULL) {
        MemoryFree(gLoadScreen);
        gLoadScreen = NULL;
    }
}

u32 UpdateLoadScreenMenu(void)
{
    u32 nextMenu;
    u32 menuAction;

    nextMenu = MENU_NO_SCREEN_CHANGE;
    menuAction = 4;
    sub_8012FD8(&gLoadScreen->unk4[1]);

    if (!sub_8012FD8(&gLoadScreen->unk4[2]))
        sub_8013114(&gLoadScreen->unk4[2], &menuAction);

    switch (menuAction) {
        case 3:
        case 2: {
            nextMenu =  MENU_MAIN_SCREEN;
            break;
        }
        case 1: {
            switch (gLoadScreen->currMenu) {
                case MENU_CONTINUE: {
                    nextMenu = 2; // MENU_???
                    break;
                }
                case MENU_AWAITING_RESCUE: {
                    DeleteMailAtIndex(0);
                    nextMenu = 4; // MENU_???
                    break;
                }
                case MENU_DELETE_SAVE_PROMPT: {
                    nextMenu = MENU_DELETE_SAVE_CONFIRM;
                    break;
                }
                case MENU_DELETE_SAVE_CONFIRM: {
                    sub_80122A8();
                    nextMenu = MENU_DELETE_SAVE;
                    break;
                }
            }
            break;
        }
        case 5:
        default: {
            break;
        }
    }

    return nextMenu;
}

static void DrawLoadScreenText(void)
{
    s32 iVar2;
    u32 numAdventures;
    u8 auStack356[100];
    u8 teamNameBuffer[40];
    u8 playerName[80];
    u8 nameHelper[80];
    u8 speciesHelper[20];
    u32 hours;
    u32 minutes;
    u32 seconds;
    Pokemon *playerInfo;
    unkStruct_203B484 *temp2;

    iVar2 = sub_8011FA8();
    CallPrepareTextbox_8008C54(0);
    sub_80073B8(0);
    PrintStringOnWindow(8, 0, (@@STRING:b1638161bd1212d1b447d26ec4288c9d71bd0e1df7e96870c92590c52115d302@@), 0, 0);
    PrintStringOnWindow(8, 12, (@@STRING:ec4a51c15a54033c5b4097e4610a299d3968eb9b49ed77b6611e7c1169957091@@), 0, 0);
    PrintStringOnWindow(8, 24, (@@STRING:f52cc4771d7b7c2e15b5769b50b6af3bc0927c3405afbdc33507d103ff4c9e74@@), 0, 0);
    PrintStringOnWindow(8, 36, (@@STRING:140d9811f40469ca0557170ad9a5ee8c5c8a5a6635710cb4eb0bac97f0aeca34@@), 0, 0);
    PrintStringOnWindow(8, 48, (@@STRING:eb6d8f066a09597d27560d0dcedf9100f62939148aae935d269e964bdfa5b809@@), 0, 0);
    PrintStringOnWindow(8, 60, (@@STRING:47ab997d0758f8e771aefae7848c88ec5fed4e652acd59c0918f94db25ea8620@@), 0, 0);

    // Draw Team Name
    if (CheckQuest(QUEST_SET_TEAM_NAME))
        StrncpyTeamName(teamNameBuffer);
    else
        InlineStrcpy(teamNameBuffer, _("？？？？"));

    sprintfStatic(gLoadScreen->formattedTeamName, "%s ", teamNameBuffer);
    PrintStringOnWindow(64, 0, gLoadScreen->formattedTeamName, 0, 0);

    // Draw Player Name
    playerInfo = GetLeaderMon1();
    if (playerInfo == NULL)
        StrncpyCustom(playerName, (@@STRING:a03b221c6c6eae7122ca51695d456d5222e524889136394944b2f9763b483615@@), POKEMON_NAME_LENGTH);
    else
        StrncpyCustom(playerName, playerInfo->name, POKEMON_NAME_LENGTH);

    sprintfStatic(gLoadScreen->formattedPlayerName, "%s ", playerName);
    PrintStringOnWindow(64, 12, gLoadScreen->formattedPlayerName, 0, 0);

    // Draw Location Info
    if (CountMailType(WONDER_MAIL_TYPE_SOS) != 0 || CountMailType(WONDER_MAIL_TYPE_OKD) != 0) {
        if (iVar2 == 0xF1207)
            PrintDungeonLocationtoBuffer(gLoadScreen->formattedLocation,GetDungeonLocationInfo());
        else
            sprintfStatic(gLoadScreen->formattedLocation, (@@STRING:d946142bef57b486d235882a4959c70860027314600e8339361e0b048530dab4@@));
    }
    else {
        switch (sub_8011C1C()) {
            case 1: {
                switch (GetScriptVarValue(NULL, START_MODE)) {
                    default: {
                        sprintfStatic(auStack356, "%s ", GetCurrentGroundPlaceName());
                        FormatString(auStack356, gLoadScreen->formattedLocation, gLoadScreen->formattedPlayTime, 0);
                        break;
                    }
                    case STARTMODE_CONTINUE_QUICKSAVE:
                    case STARTMODE_11: {
                        sprintfStatic(gLoadScreen->formattedLocation, (@@STRING:d946142bef57b486d235882a4959c70860027314600e8339361e0b048530dab4@@));
                        break;
                    }
                }
                break;
            }
            case 2: {
                if (iVar2 == 0xF1207)
                    PrintDungeonLocationtoBuffer(gLoadScreen->formattedLocation, GetDungeonLocationInfo());
                else
                    sprintfStatic(gLoadScreen->formattedLocation, (@@STRING:d946142bef57b486d235882a4959c70860027314600e8339361e0b048530dab4@@));
                break;
            }
            default: {
                sprintfStatic(gLoadScreen->formattedLocation, (@@STRING:dcfa9646d5879401450c7004bfec940ad3eeacba3ec7f8647a52735d57e345d1@@));
                break;
            }
        }
    }

    PrintStringOnWindow(64, 24, gLoadScreen->formattedLocation, 0, 0);

    // Draw Play Time
    DeconstructPlayTime(gPlayTimeRef, &hours, &minutes, &seconds);
    sprintfStatic(gLoadScreen->formattedPlayTime, "%d:%02d:%02d ", hours, minutes, seconds);
    PrintStringOnWindow(80, 36, gLoadScreen->formattedPlayTime, 0, 0);

    // Draw Adventures Info
    numAdventures = GetNumAdventures();
    sprintfStatic(gLoadScreen->formattedAdventures, "%d", numAdventures);
    PrintStringOnWindow(64, 48, gLoadScreen->formattedAdventures, 0, 0);

    // Draw Helper Info
    if (iVar2 == 0xF1207) {
        // NOTE: very hacky match here but needed var here to match
        temp2 = gUnknown_203B484;
        if (temp2->unk4.speciesNum != MONSTER_NONE) {
            sub_808D930(speciesHelper, temp2->unk4.speciesNum);
            StrncpyCustom(nameHelper, temp2->unk4.name, POKEMON_NAME_LENGTH);
            sprintfStatic(gLoadScreen->formattedHelperInfo, "%s (%s)", nameHelper, speciesHelper);
        }
        else
            goto print_helper_placeholder; // TODO: Fix
    }
    else {
print_helper_placeholder:
        sprintfStatic(gLoadScreen->formattedHelperInfo, "-----");
    }

    PrintStringOnWindow(64, 60, gLoadScreen->formattedHelperInfo, 0, 0);

    DrawQuestIcons();
    sub_80073E0(0);
}

static void DrawQuestIcons(void)
{
    OpenedFile *clmkFile;
    s32 i;
    s32 x;
    s32 y;

    clmkFile = OpenFileAndGetFileDataPtr("clmkpat", &gTitleMenuFileArchive);
#define CLMKPAT_DATA ((ClmkFileData *)clmkFile->data)

    // Load all 4 palettes
    for (i = 0; i < 16 * 4; i++)
        SetBGPaletteBufferColorArray(i + 0xB0, &(*CLMKPAT_DATA->palette)[i]);

    x = 8;
    y = 73; // Shouldn't this be 72?

    // Draw the legendary icons
    for (i = 0; i < NUM_LEGEND_ICONS; i++) {
        if (CheckQuest(sLegendaryQuestIDs[i])) {
            WriteGFXToBG0Window(0, x, y, LEGEND_ICON_W, LEGEND_ICON_H, CLMKPAT_DATA->packedGFX[i], sLegendaryQuestIconPalNums[i]);
            x += 16;
        }
    }

#undef CLMKPAT_DATA
    CloseFile(clmkFile);
}

static bool8 IsQuickSave(void)
{
    s32 iVar1;
    bool8 isQuicksave;

    iVar1 = sub_8011FA8();
    isQuicksave = FALSE;

    if (CountMailType(WONDER_MAIL_TYPE_SOS) != 0 || CountMailType(WONDER_MAIL_TYPE_OKD) != 0) {
        if (iVar1 == 0xF1207)
            isQuicksave  = TRUE;
    }
    else if (sub_8011C1C() == 2 && iVar1 == 0xF1207)
        isQuicksave = TRUE;

    return isQuicksave;
}

bool8 sub_8039880(void)
{
    return (CountMailType(WONDER_MAIL_TYPE_SOS) != 0 || CountMailType(WONDER_MAIL_TYPE_OKD) != 0 || sub_8011C1C() == 2);
}
