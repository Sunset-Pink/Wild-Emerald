InsideOfTruck_MapScripts::
# 2 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Script_InsideOfTruck_OnLoad
# 3 "data/maps/InsideOfTruck/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Script_InsideOfTruck_OnResume
	.byte 0


Script_InsideOfTruck_OnLoad::
# 7 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 1, METATILE_InsideOfTruck_ExitLight_Top, FALSE
# 8 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 2, METATILE_InsideOfTruck_ExitLight_Mid, FALSE
# 9 "data/maps/InsideOfTruck/scripts.pory"
	setmetatile 4, 3, METATILE_InsideOfTruck_ExitLight_Bottom, FALSE
	return


Script_InsideOfTruck_OnResume::
# 13 "data/maps/InsideOfTruck/scripts.pory"
	setstepcallback STEP_CB_TRUCK
	return


Trigger_InsideOfTruck_GameInitialization::
# 17 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 18 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 19 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 20 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 21 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Trigger_InsideOfTruck_GameInitialization_2
# 24 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_SetIntroFlags_Female
Trigger_InsideOfTruck_GameInitialization_1:
# 26 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_SetGameSettings
# 27 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	return

Trigger_InsideOfTruck_GameInitialization_2:
# 22 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_SetIntroFlags_Male
	goto Trigger_InsideOfTruck_GameInitialization_1


Script_InsideOfTruck_SetIntroFlags_Male::
# 31 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 36 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 37 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 38 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	return


Script_InsideOfTruck_SetIntroFlags_Female::
# 43 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 49 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	return


Script_InsideOfTruck_SetGameSettings::
# 55 "data/maps/InsideOfTruck/scripts.pory"
	message Text_SetGameSettings_ReadCarefully
# 56 "data/maps/InsideOfTruck/scripts.pory"
	call Script_SetGameSettings_InitializeDefaultSettings
# 57 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 58 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 59 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 60 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WantToChangeDefaults, MSGBOX_YESNO
# 61 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Script_InsideOfTruck_SetGameSettings_2
# 65 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_DefaultSettingsSaved
Script_InsideOfTruck_SetGameSettings_1:
# 67 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	return

Script_InsideOfTruck_SetGameSettings_2:
# 62 "data/maps/InsideOfTruck/scripts.pory"
	call Script_SetGameSettings_Menu
# 63 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_CustomSettingsSaved
	goto Script_InsideOfTruck_SetGameSettings_1


Script_SetGameSettings_InitializeDefaultSettings::
# 71 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 72 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MINIMAL_GRINDING_MODE
# 73 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 74 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ABILITIES_ENABLED
# 75 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_LEARNSETS_ENABLED
# 76 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSet
# 77 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
	return


Script_SetGameSettings_SaveCustomSettings::
# 82 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY > 1, 0
	goto_if_ne Script_SetGameSettings_SaveCustomSettings_1
	return

Script_SetGameSettings_SaveCustomSettings_1:
# 83 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSet
# 84 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_CustomSettingsSaved
	return


Script_SetGameSettings_Menu::
# 89 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichOption
# 90 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_0, 0
# 91 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MINIMAL_GRINDING_MODE, Script_SetGameSettings_Menu_2
# 94 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_2, 1
Script_SetGameSettings_Menu_1:
# 96 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_3, 2
# 97 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, 3
# 99 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 101 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Script_SetGameSettings_Menu_6
# 106 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Script_SetGameSettings_Menu_9
# 108 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Script_SetGameSettings_Menu_10
# 110 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Script_SetGameSettings_Menu_11
Script_SetGameSettings_Menu_8:
	return

Script_SetGameSettings_Menu_2:
# 92 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_1, 1
	goto Script_SetGameSettings_Menu_1

Script_SetGameSettings_Menu_6:
# 102 "data/maps/InsideOfTruck/scripts.pory"
	call Script_SetGameSettings_SaveCustomSettings
	return

Script_SetGameSettings_Menu_9:
# 107 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Menu_8

Script_SetGameSettings_Menu_10:
# 109 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_MinGridingMode_Menu
	goto Script_SetGameSettings_Menu_8

Script_SetGameSettings_Menu_11:
# 111 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Menu
	goto Script_SetGameSettings_Menu_8


Script_SetGameSettings_Difficulty_Menu::
# 117 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichDifficulty
# 118 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_2
# 121 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_1, DIFFICULTY_VANILLA
Script_SetGameSettings_Difficulty_Menu_1:
# 123 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_6
# 126 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_3, DIFFICULTY_EASY
Script_SetGameSettings_Difficulty_Menu_5:
# 128 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_10
# 131 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_5, DIFFICULTY_NORMAL
Script_SetGameSettings_Difficulty_Menu_9:
# 133 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, MULTI_B_PRESSED
# 135 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 138 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_14
Script_SetGameSettings_Difficulty_Menu_13:
# 143 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_VANILLA
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_17
Script_SetGameSettings_Difficulty_Menu_16:
# 159 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_EASY
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_20
Script_SetGameSettings_Difficulty_Menu_19:
# 175 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_NORMAL
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_25
	return

Script_SetGameSettings_Difficulty_Menu_2:
# 119 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_0, DIFFICULTY_VANILLA
	goto Script_SetGameSettings_Difficulty_Menu_1

Script_SetGameSettings_Difficulty_Menu_6:
# 124 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_2, DIFFICULTY_EASY
	goto Script_SetGameSettings_Difficulty_Menu_5

Script_SetGameSettings_Difficulty_Menu_10:
# 129 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_4, DIFFICULTY_NORMAL
	goto Script_SetGameSettings_Difficulty_Menu_9

Script_SetGameSettings_Difficulty_Menu_14:
# 139 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Menu
	goto Script_SetGameSettings_Difficulty_Menu_13

Script_SetGameSettings_Difficulty_Menu_17:
# 144 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_Description
# 146 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_23
Script_SetGameSettings_Difficulty_Menu_22:
# 150 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_TurnOn, MSGBOX_YESNO
# 151 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_31
Script_SetGameSettings_Difficulty_Menu_30:
# 155 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_16

Script_SetGameSettings_Difficulty_Menu_20:
# 160 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_Description
# 162 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_28
Script_SetGameSettings_Difficulty_Menu_27:
# 166 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_TurnOn, MSGBOX_YESNO
# 167 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_37
Script_SetGameSettings_Difficulty_Menu_36:
# 171 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_19

Script_SetGameSettings_Difficulty_Menu_23:
# 147 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_AlreadySelected
# 148 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_22

Script_SetGameSettings_Difficulty_Menu_25:
# 176 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_Description
# 178 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_34
Script_SetGameSettings_Difficulty_Menu_33:
# 182 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_TurnOn, MSGBOX_YESNO
# 183 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_40
Script_SetGameSettings_Difficulty_Menu_39:
# 187 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	return

Script_SetGameSettings_Difficulty_Menu_28:
# 163 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_AlreadySelected
# 164 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_27

Script_SetGameSettings_Difficulty_Menu_31:
# 152 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_VANILLA
# 153 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_Enabled
	goto Script_SetGameSettings_Difficulty_Menu_30

Script_SetGameSettings_Difficulty_Menu_34:
# 179 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_AlreadySelected
# 180 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_33

Script_SetGameSettings_Difficulty_Menu_37:
# 168 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_EASY
# 169 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_Enabled
	goto Script_SetGameSettings_Difficulty_Menu_36

Script_SetGameSettings_Difficulty_Menu_40:
# 184 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 185 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_Enabled
	goto Script_SetGameSettings_Difficulty_Menu_39


Script_SetGameSettings_MinGridingMode_Menu::
# 192 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGrinding_Description
# 195 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MINIMAL_GRINDING_MODE, Script_SetGameSettings_MinGridingMode_Menu_2
# 198 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGrinding_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_MinGridingMode_Menu_1:
# 201 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_MinGridingMode_Menu_6
Script_SetGameSettings_MinGridingMode_Menu_5:
# 210 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Menu
	return

Script_SetGameSettings_MinGridingMode_Menu_2:
# 196 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGrinding_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_MinGridingMode_Menu_1

Script_SetGameSettings_MinGridingMode_Menu_6:
# 202 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MINIMAL_GRINDING_MODE, Script_SetGameSettings_MinGridingMode_Menu_8
# 206 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MINIMAL_GRINDING_MODE
# 207 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGriding_Enabled
	goto Script_SetGameSettings_MinGridingMode_Menu_5

Script_SetGameSettings_MinGridingMode_Menu_8:
# 203 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_MINIMAL_GRINDING_MODE
# 204 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGriding_Disabled
	goto Script_SetGameSettings_MinGridingMode_Menu_5


Script_SetGameSettings_Randomizer_Menu::
# 214 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichRandomizerOption
# 215 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ENABLED, Script_SetGameSettings_Randomizer_Menu_2
# 219 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_1, 0
Script_SetGameSettings_Randomizer_Menu_1:
# 222 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ABILITIES_ENABLED, Script_SetGameSettings_Randomizer_Menu_6
# 225 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_3, 1
Script_SetGameSettings_Randomizer_Menu_5:
# 230 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, MULTI_B_PRESSED
# 232 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 235 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_10
Script_SetGameSettings_Randomizer_Menu_9:
# 239 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_13
Script_SetGameSettings_Randomizer_Menu_12:
# 243 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_15
	return

Script_SetGameSettings_Randomizer_Menu_2:
# 217 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_0, 0
	goto Script_SetGameSettings_Randomizer_Menu_1

Script_SetGameSettings_Randomizer_Menu_6:
# 223 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_2, 0
	goto Script_SetGameSettings_Randomizer_Menu_5

Script_SetGameSettings_Randomizer_Menu_10:
# 236 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Menu
	goto Script_SetGameSettings_Randomizer_Menu_9

Script_SetGameSettings_Randomizer_Menu_13:
# 240 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	goto Script_SetGameSettings_Randomizer_Menu_12

Script_SetGameSettings_Randomizer_Menu_15:
# 244 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_Description
# 245 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ABILITIES_ENABLED, Script_SetGameSettings_Randomizer_Menu_18
# 252 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_TurnOn, MSGBOX_YESNO
# 253 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_23
Script_SetGameSettings_Randomizer_Menu_17:
# 258 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Menu
	return

Script_SetGameSettings_Randomizer_Menu_18:
# 246 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_TurnOff, MSGBOX_YESNO
# 247 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_21
	goto Script_SetGameSettings_Randomizer_Menu_17

Script_SetGameSettings_Randomizer_Menu_21:
# 248 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ABILITIES_ENABLED
# 249 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_Disabled
	goto Script_SetGameSettings_Randomizer_Menu_17

Script_SetGameSettings_Randomizer_Menu_23:
# 254 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ABILITIES_ENABLED
# 255 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_TurnOn
	goto Script_SetGameSettings_Randomizer_Menu_17


Script_SetGameSettings_Randomizer_Species_Menu::
# 263 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichSpeciesRandomizerOption
# 264 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_2
# 267 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_1, SPECIES_RANDOMIZER
Script_SetGameSettings_Randomizer_Species_Menu_1:
# 270 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_6
# 273 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_3, SCALED_RANDOMIZER
Script_SetGameSettings_Randomizer_Species_Menu_5:
# 276 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_10
# 279 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_5, LEGENDARY_AWARE_RANDOMIZER
Script_SetGameSettings_Randomizer_Species_Menu_9:
# 281 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, MULTI_B_PRESSED
# 283 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 286 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_14
Script_SetGameSettings_Randomizer_Species_Menu_13:
# 290 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_17
Script_SetGameSettings_Randomizer_Species_Menu_16:
# 311 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_20
Script_SetGameSettings_Randomizer_Species_Menu_19:
# 332 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_26
	return

Script_SetGameSettings_Randomizer_Species_Menu_2:
# 265 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_0, SPECIES_RANDOMIZER
	goto Script_SetGameSettings_Randomizer_Species_Menu_1

Script_SetGameSettings_Randomizer_Species_Menu_6:
# 271 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_2, SCALED_RANDOMIZER
	goto Script_SetGameSettings_Randomizer_Species_Menu_5

Script_SetGameSettings_Randomizer_Species_Menu_10:
# 277 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_4, LEGENDARY_AWARE_RANDOMIZER
	goto Script_SetGameSettings_Randomizer_Species_Menu_9

Script_SetGameSettings_Randomizer_Species_Menu_14:
# 287 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Menu
	goto Script_SetGameSettings_Randomizer_Species_Menu_13

Script_SetGameSettings_Randomizer_Species_Menu_17:
# 291 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_Description
# 292 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_23
# 295 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_Randomizer_Species_Menu_22:
# 297 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_33
Script_SetGameSettings_Randomizer_Species_Menu_32:
# 308 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	goto Script_SetGameSettings_Randomizer_Species_Menu_16

Script_SetGameSettings_Randomizer_Species_Menu_20:
# 312 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_Description
# 313 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_29
# 316 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_Randomizer_Species_Menu_28:
# 318 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_40
Script_SetGameSettings_Randomizer_Species_Menu_39:
# 329 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	goto Script_SetGameSettings_Randomizer_Species_Menu_19

Script_SetGameSettings_Randomizer_Species_Menu_23:
# 293 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_Randomizer_Species_Menu_22

Script_SetGameSettings_Randomizer_Species_Menu_26:
# 333 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_Description
# 334 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_36
# 337 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_Randomizer_Species_Menu_35:
# 339 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_46
Script_SetGameSettings_Randomizer_Species_Menu_45:
# 350 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	return

Script_SetGameSettings_Randomizer_Species_Menu_29:
# 314 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_Randomizer_Species_Menu_28

Script_SetGameSettings_Randomizer_Species_Menu_33:
# 298 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_42
# 303 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 304 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
# 305 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_Enabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_32

Script_SetGameSettings_Randomizer_Species_Menu_36:
# 335 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_Randomizer_Species_Menu_35

Script_SetGameSettings_Randomizer_Species_Menu_40:
# 319 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_48
# 324 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 325 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
# 326 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_Enabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_39

Script_SetGameSettings_Randomizer_Species_Menu_42:
# 299 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 300 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
# 301 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_Disabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_32

Script_SetGameSettings_Randomizer_Species_Menu_46:
# 340 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_51
# 345 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 346 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
# 347 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_Enabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_45

Script_SetGameSettings_Randomizer_Species_Menu_48:
# 320 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 321 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
# 322 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_Disabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_39

Script_SetGameSettings_Randomizer_Species_Menu_51:
# 341 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 342 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
# 343 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_Disabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_45


Script_InsideOfTruck_MovingBox::
# 356 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_BoxPrintedWithMonLogo, MSGBOX_SIGN
	return


Script_SetGameSettings_Menu_Text_0:
# 90 "data/maps/InsideOfTruck/scripts.pory"
	.string "Difficulty Options$"

Script_SetGameSettings_Menu_Text_1:
# 92 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode$"

Script_SetGameSettings_Menu_Text_2:
# 94 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode$"

Script_SetGameSettings_Menu_Text_3:
# 96 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomizer Options$"

Script_SetGameSettings_Menu_Text_4:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	.string "Done$"

Script_SetGameSettings_Difficulty_Menu_Text_0:
# 119 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla$"

Script_SetGameSettings_Difficulty_Menu_Text_1:
# 121 "data/maps/InsideOfTruck/scripts.pory"
	.string "Vanilla$"

Script_SetGameSettings_Difficulty_Menu_Text_2:
# 124 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy$"

Script_SetGameSettings_Difficulty_Menu_Text_3:
# 126 "data/maps/InsideOfTruck/scripts.pory"
	.string "Easy$"

Script_SetGameSettings_Difficulty_Menu_Text_4:
# 129 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal$"

Script_SetGameSettings_Difficulty_Menu_Text_5:
# 131 "data/maps/InsideOfTruck/scripts.pory"
	.string "Normal$"

Script_SetGameSettings_Randomizer_Menu_Text_0:
# 217 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species$"

Script_SetGameSettings_Randomizer_Menu_Text_1:
# 219 "data/maps/InsideOfTruck/scripts.pory"
	.string "Species$"

Script_SetGameSettings_Randomizer_Menu_Text_2:
# 223 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ability$"

Script_SetGameSettings_Randomizer_Menu_Text_3:
# 225 "data/maps/InsideOfTruck/scripts.pory"
	.string "Ability$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_0:
# 265 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_1:
# 267 "data/maps/InsideOfTruck/scripts.pory"
	.string "Normal Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_2:
# 271 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_3:
# 273 "data/maps/InsideOfTruck/scripts.pory"
	.string "Scaled Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_4:
# 277 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary Aware Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_5:
# 279 "data/maps/InsideOfTruck/scripts.pory"
	.string "Legendary Aware Species$"

Text_SetGameSettings_ReadCarefully::
# 359 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Please take a moment to read the\n"
	.string "following carefully.$"

Text_SetGameSettings_WantToChangeDefaults::
# 363 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Would you like to change the settings?\n"
	.string "The default settings are as follows:\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Difficulty{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - challenging Boss\n"
	.string "battles with hard level caps enforced.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode is ON{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - this\n"
	.string "guarentees all Pokémon will have\l"
	.string "perfect IVs, and EVs cannot be \l"
	.string "obtained. Boss Pokémon will not have\l"
	.string "EVs either.\p"
	.string "Randomizer {COLOR RED}{SHADOW LIGHT_RED}OFF{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} - no additional\n"
	.string "randomization will be enabled.\p"
	.string "With this information in mind:\n"
	.string "Would you like to change the settings?$"

Text_SetGameSettings_WhichOption::
# 381 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which option would you like\n"
	.string "to customize?$"

Text_SetGameSettings_WhichDifficulty::
# 386 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which difficulty mode would you\n"
	.string "like to play on?$"

Text_SetGameSettings_WhichRandomizerOption::
# 391 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which Species Randomizer option would\n"
	.string "you like to customize?$"

Text_SetGameSettings_WhichSpeciesRandomizerOption::
# 396 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which Species Randomizer option would\n"
	.string "you like to customize?$"

Text_SetGameSettings_Difficulty_Easy_Description::
# 402 "data/maps/InsideOfTruck/scripts.pory"
	.string "There are still level caps in {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode,{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}\n"
	.string "however, the Boss Pokémon will be 2\l"
	.string "levels lower than in Normal.\l"
	.string "Boss teams are otherwise unchanged.\p"
	.string "The player is allowed to access the\n"
	.string "Bag during any battle.\p"
	.string "Additionally, the player can change the\n"
	.string "battle style from Set to Shift.\p"
	.string "This will still be more difficult than a\n"
	.string "vanilla Pokémon game.\p$"

Text_SetGameSettings_Difficulty_Easy_AlreadySelected::
# 415 "data/maps/InsideOfTruck/scripts.pory"
	.string "You current have {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW DARK_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_SetGameSettings_Difficulty_Easy_TurnOn::
# 421 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode?$"

Text_SetGameSettings_Difficulty_Easy_Enabled::
# 426 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_SetGameSettings_Difficulty_Normal_Description::
# 432 "data/maps/InsideOfTruck/scripts.pory"
	.string "This is the recommended difficulty\n"
	.string "mode and is what the game is priamrily\l"
	.string "balanced around.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has challenging Boss\n"
	.string "battles with hard level caps enforced.\p"
	.string "The player cannot access the Bag\n"
	.string "during trainer battles, and the battle\l"
	.string "style is forced to Set.\p$"

Text_SetGameSettings_Difficulty_Normal_AlreadySelected::
# 443 "data/maps/InsideOfTruck/scripts.pory"
	.string "You current have {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW DARK_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_SetGameSettings_Difficulty_Normal_TurnOn::
# 449 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode?$"

Text_SetGameSettings_Difficulty_Normal_Enabled::
# 454 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_SetGameSettings_Difficulty_Vanilla_Description::
# 460 "data/maps/InsideOfTruck/scripts.pory"
	.string "This mode is meant to feel as close to a \n"
	.string "regular Pokémon game as possible, and\l"
	.string "is considered to be the easiest.\p"
	.string "The Boss teams will be rough the same\n"
	.string "as in Normal Mode, but there will be no\l"
	.string "level caps enforced, and no Boss teams\l"
	.string "will have their levels scale with the\l"
	.string "Player's team.\p"
	.string "Additionaly, Pokémon stats, types, and\l"
	.string "abilities have not been updated.\l"
	.string "Once selected, you can not change diffculty.\p$"

Text_SetGameSettings_Difficulty_Vanilla_AlreadySelected::
# 474 "data/maps/InsideOfTruck/scripts.pory"
	.string "You current have {COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW DARK_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_SetGameSettings_Difficulty_Vanilla_TurnOn::
# 480 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Vanilla Mode?$"

Text_SetGameSettings_Difficulty_Vanilla_Enabled::
# 485 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_SetGameSettings_MinimalGrinding_Description::
# 492 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} guarantees all\n"
	.string "Pokémon to have perfect IVs,\l"
	.string "and EVs cannot be obtained.\l"
	.string "Boss Pokémon will not have EVs either.\p"
	.string "If this mod is disabled, obtainable\n"
	.string "Pokémon will have random IVs and can be \l"
	.string "EV trained.\p"
	.string "Boss Pokémon will still have perfect\n"
	.string "IVs and will be EV trained.\p$"

Text_SetGameSettings_MinimalGrinding_TurnOff::
# 504 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode off?$"

Text_SetGameSettings_MinimalGrinding_TurnOn::
# 509 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode on?$"

Text_SetGameSettings_MinimalGriding_Enabled::
# 514 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Griding Mode enabled.$"

Text_SetGameSettings_MinimalGriding_Disabled::
# 518 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Griding Mode disabled.$"

Text_SetGameSettings_Randomizer_Ability_Description::
# 523 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ability Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} randomizes abilities\n"
	.string "for the player, but doesn't affect\l"
	.string "abilities on Boss Pokémon.\p$"

Text_SetGameSettings_Randomizer_Ability_TurnOff::
# 529 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the \n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Ability Randomizer?$"

Text_SetGameSettings_Randomizer_Ability_TurnOn::
# 534 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on the \n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Ability Randomizer?$"

Text_SetGameSettings_Randomizer_Ability_Enabled::
# 539 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ability Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Ability_Disabled::
# 543 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Ability Randomizer disabled.$"

Text_SetGameSettings_Randomizer_Learnsets_Description::
# 548 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnset Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} randomizes\n"
	.string "Pokémon learnsets.\p"
	.string "It does not randomize TMs or\n"
	.string "move tutors.\p"
	.string "Boss Pokémon also keep their normal\n"
	.string "movesets.\p$"

Text_SetGameSettings_Randomizer_Learnsets_TurnOff::
# 557 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Learnset Randomizer?$"

Text_SetGameSettings_Randomizer_Learnsets_TurnOn::
# 562 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnset Randomizer?$"

Text_SetGameSettings_Randomizer_Learnsets_Enabled::
# 567 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnset Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Learnsets_Disabled::
# 571 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Learnset Randomizer disabled.$"

Text_SetGameSettings_Randomizer_Species_Description::
# 577 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} randomizes\n"
	.string "encounters, trainers, and gifts.\l"
	.string "It does not randomize Boss battles.\p"
	.string "Many legendaries cannot be\n"
	.string "encountered.\p$"

Text_SetGameSettings_Randomizer_Species_TurnOff::
# 585 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Species Randomizer?$"

Text_SetGameSettings_Randomizer_Species_TurnOn::
# 590 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species Randomizer?$"

Text_SetGameSettings_Randomizer_Species_Enabled::
# 595 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Species_Disabled::
# 599 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Species Randomizer disabled.$"

Text_SetGameSettings_Randomizer_Scaled_Description::
# 605 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} only gives\n"
	.string "reasonable Pokémon for your location\l"
	.string "in the game.\p"
	.string "This randomization is based off the\n"
	.string "base stat total of the original\l"
	.string "encounter.\l"
	.string "It does not randmoize Boss battles.\p$"

Text_SetGameSettings_Randomizer_Scaled_TurnOff::
# 615 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Scaled Randomizer?$"

Text_SetGameSettings_Randomizer_Scaled_TurnOn::
# 620 "data/maps/InsideOfTruck/scripts.pory"
	.string "Dow you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Randomizer?$"

Text_SetGameSettings_Randomizer_Scaled_Enabled::
# 625 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Scaled_Disabled::
# 629 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Scaled Randomizer disabled.$"

Text_SetGameSettings_Randomizer_LegendsAware_Description::
# 635 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "the same thing as the Species\l"
	.string "Randomizer, with the only difference\l"
	.string "being that legendary Pokémon will be\l"
	.string "guaranteed to be randomized into\l"
	.string "legendary Pokémon.\p$"

Text_SetGameSettings_Randomizer_LegendsAware_TurnOff::
# 644 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Legendary-aware Species Randomizer?$"

Text_SetGameSettings_Randomizer_LegendsAware_TurnOn::
# 649 "data/maps/InsideOfTruck/scripts.pory"
	.string "Dow you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species Randomizer?$"

Text_SetGameSettings_Randomizer_LegendsAware_Enabled::
# 654 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species Randomizer\n"
	.string "enabled.$"

Text_SetGameSettings_Randomizer_LegendsAware_Disabled::
# 659 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Legendary-aware Species Randomizer\n"
	.string "disabled.$"

Text_SetGameSettings_DefaultSettingsSaved::
# 666 "data/maps/InsideOfTruck/scripts.pory"
	.string "Default settings saved.\n"
	.string "Good luck!$"

Text_SetGameSettings_CustomSettingsSaved::
# 671 "data/maps/InsideOfTruck/scripts.pory"
	.string "Custom settings saved.\n"
	.string "Good luck!$"

Text_InsideOfTruck_BoxPrintedWithMonLogo::
# 678 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a Pokémon logo.\p"
	.string "It's a Pokémon brand moving and\n"
	.string "delivery services.$"
