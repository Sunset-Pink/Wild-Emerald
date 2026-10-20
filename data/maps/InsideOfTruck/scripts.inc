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
	clearflag FLAG_SYS_POKEMON_GET
# 19 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 20 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 21 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 22 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Trigger_InsideOfTruck_GameInitialization_2
# 25 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_SetIntroFlags_Female
Trigger_InsideOfTruck_GameInitialization_1:
# 27 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_SetGameSettings
# 28 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	return

Trigger_InsideOfTruck_GameInitialization_2:
# 23 "data/maps/InsideOfTruck/scripts.pory"
	call Script_InsideOfTruck_SetIntroFlags_Male
	goto Trigger_InsideOfTruck_GameInitialization_1


Script_InsideOfTruck_SetIntroFlags_Male::
# 32 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 33 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 34 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 36 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 37 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 38 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 39 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 3, 10
	return


Script_InsideOfTruck_SetIntroFlags_Female::
# 44 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 45 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 46 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 47 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 48 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 49 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 1
# 51 "data/maps/InsideOfTruck/scripts.pory"
	setdynamicwarp MAP_LITTLEROOT_TOWN, 12, 10
	return


Script_InsideOfTruck_SetGameSettings::
# 56 "data/maps/InsideOfTruck/scripts.pory"
	message Text_SetGameSettings_ReadCarefully
# 57 "data/maps/InsideOfTruck/scripts.pory"
	call Script_SetGameSettings_InitializeDefaultSettings
# 58 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 59 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 60 "data/maps/InsideOfTruck/scripts.pory"
	delay 100
# 61 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WantToChangeDefaults, MSGBOX_YESNO
# 62 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Script_InsideOfTruck_SetGameSettings_2
# 66 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_DefaultSettingsSaved
Script_InsideOfTruck_SetGameSettings_1:
# 68 "data/maps/InsideOfTruck/scripts.pory"
	releaseall
	return

Script_InsideOfTruck_SetGameSettings_2:
# 63 "data/maps/InsideOfTruck/scripts.pory"
	call Script_SetGameSettings_Menu
# 64 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_CustomSettingsSaved
	goto Script_InsideOfTruck_SetGameSettings_1


Script_SetGameSettings_InitializeDefaultSettings::
# 72 "data/maps/InsideOfTruck/scripts.pory"
	setdifficulty DIFFICULTY_NORMAL
# 73 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MINIMAL_GRINDING_MODE
# 74 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 75 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ABILITIES_ENABLED
# 76 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_LEARNSETS_ENABLED
# 77 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSet
# 78 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
	return


Script_SetGameSettings_SaveCustomSettings::
# 83 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY > 1, 0
	goto_if_ne Script_SetGameSettings_SaveCustomSettings_1
	return

Script_SetGameSettings_SaveCustomSettings_1:
# 84 "data/maps/InsideOfTruck/scripts.pory"
	special ForceBattleStyleSet
# 85 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_CustomSettingsSaved
	return


Script_SetGameSettings_Menu::
# 90 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichOption
# 91 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_0, 0
# 92 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MINIMAL_GRINDING_MODE, Script_SetGameSettings_Menu_2
# 95 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_2, 1
Script_SetGameSettings_Menu_1:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_3, 2
# 98 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, 3
# 100 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 102 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Script_SetGameSettings_Menu_6
# 107 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Script_SetGameSettings_Menu_9
# 109 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Script_SetGameSettings_Menu_10
# 111 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Script_SetGameSettings_Menu_11
Script_SetGameSettings_Menu_8:
	return

Script_SetGameSettings_Menu_2:
# 93 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_1, 1
	goto Script_SetGameSettings_Menu_1

Script_SetGameSettings_Menu_6:
# 103 "data/maps/InsideOfTruck/scripts.pory"
	call Script_SetGameSettings_SaveCustomSettings
	return

Script_SetGameSettings_Menu_9:
# 108 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Menu_8

Script_SetGameSettings_Menu_10:
# 110 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_MinGridingMode_Menu
	goto Script_SetGameSettings_Menu_8

Script_SetGameSettings_Menu_11:
# 112 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Menu
	goto Script_SetGameSettings_Menu_8


Script_SetGameSettings_Difficulty_Menu::
# 118 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichDifficulty
# 119 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_2
# 122 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_1, DIFFICULTY_VANILLA
Script_SetGameSettings_Difficulty_Menu_1:
# 124 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_6
# 127 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_3, DIFFICULTY_EASY
Script_SetGameSettings_Difficulty_Menu_5:
# 129 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_10
# 132 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_5, DIFFICULTY_NORMAL
Script_SetGameSettings_Difficulty_Menu_9:
# 134 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, MULTI_B_PRESSED
# 136 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 139 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_14
Script_SetGameSettings_Difficulty_Menu_13:
# 144 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_VANILLA
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_17
Script_SetGameSettings_Difficulty_Menu_16:
# 160 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_EASY
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_20
Script_SetGameSettings_Difficulty_Menu_19:
# 176 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, DIFFICULTY_NORMAL
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_25
	return

Script_SetGameSettings_Difficulty_Menu_2:
# 120 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_0, DIFFICULTY_VANILLA
	goto Script_SetGameSettings_Difficulty_Menu_1

Script_SetGameSettings_Difficulty_Menu_6:
# 125 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_2, DIFFICULTY_EASY
	goto Script_SetGameSettings_Difficulty_Menu_5

Script_SetGameSettings_Difficulty_Menu_10:
# 130 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Difficulty_Menu_Text_4, DIFFICULTY_NORMAL
	goto Script_SetGameSettings_Difficulty_Menu_9

Script_SetGameSettings_Difficulty_Menu_14:
# 140 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Menu
	goto Script_SetGameSettings_Difficulty_Menu_13

Script_SetGameSettings_Difficulty_Menu_17:
# 145 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_Description
# 147 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_23
Script_SetGameSettings_Difficulty_Menu_22:
# 151 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_TurnOn, MSGBOX_YESNO
# 152 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_31
Script_SetGameSettings_Difficulty_Menu_30:
# 156 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_16

Script_SetGameSettings_Difficulty_Menu_20:
# 161 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_Description
# 163 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_EASY
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_28
Script_SetGameSettings_Difficulty_Menu_27:
# 167 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_TurnOn, MSGBOX_YESNO
# 168 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_37
Script_SetGameSettings_Difficulty_Menu_36:
# 172 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_19

Script_SetGameSettings_Difficulty_Menu_23:
# 148 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_AlreadySelected
# 149 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_22

Script_SetGameSettings_Difficulty_Menu_25:
# 177 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_Description
# 179 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_NORMAL
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_34
Script_SetGameSettings_Difficulty_Menu_33:
# 183 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_TurnOn, MSGBOX_YESNO
# 184 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Difficulty_Menu_40
Script_SetGameSettings_Difficulty_Menu_39:
# 188 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	return

Script_SetGameSettings_Difficulty_Menu_28:
# 164 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_AlreadySelected
# 165 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_27

Script_SetGameSettings_Difficulty_Menu_31:
# 153 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_VANILLA
# 154 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Vanilla_Enabled
	goto Script_SetGameSettings_Difficulty_Menu_30

Script_SetGameSettings_Difficulty_Menu_34:
# 180 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_AlreadySelected
# 181 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Difficulty_Menu
	goto Script_SetGameSettings_Difficulty_Menu_33

Script_SetGameSettings_Difficulty_Menu_37:
# 169 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_EASY
# 170 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Easy_Enabled
	goto Script_SetGameSettings_Difficulty_Menu_36

Script_SetGameSettings_Difficulty_Menu_40:
# 185 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 186 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Difficulty_Normal_Enabled
	goto Script_SetGameSettings_Difficulty_Menu_39


Script_SetGameSettings_MinGridingMode_Menu::
# 193 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGrinding_Description
# 196 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MINIMAL_GRINDING_MODE, Script_SetGameSettings_MinGridingMode_Menu_2
# 199 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGrinding_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_MinGridingMode_Menu_1:
# 202 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_MinGridingMode_Menu_6
Script_SetGameSettings_MinGridingMode_Menu_5:
# 211 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Menu
	return

Script_SetGameSettings_MinGridingMode_Menu_2:
# 197 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGrinding_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_MinGridingMode_Menu_1

Script_SetGameSettings_MinGridingMode_Menu_6:
# 203 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_MINIMAL_GRINDING_MODE, Script_SetGameSettings_MinGridingMode_Menu_8
# 207 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MINIMAL_GRINDING_MODE
# 208 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGriding_Enabled
	goto Script_SetGameSettings_MinGridingMode_Menu_5

Script_SetGameSettings_MinGridingMode_Menu_8:
# 204 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_MINIMAL_GRINDING_MODE
# 205 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_MinimalGriding_Disabled
	goto Script_SetGameSettings_MinGridingMode_Menu_5


Script_SetGameSettings_Randomizer_Menu::
# 215 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichRandomizerOption
# 216 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ENABLED, Script_SetGameSettings_Randomizer_Menu_2
# 220 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_1, 0
Script_SetGameSettings_Randomizer_Menu_1:
# 223 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ABILITIES_ENABLED, Script_SetGameSettings_Randomizer_Menu_6
# 226 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_3, 1
Script_SetGameSettings_Randomizer_Menu_5:
# 231 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, MULTI_B_PRESSED
# 233 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 236 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_10
Script_SetGameSettings_Randomizer_Menu_9:
# 240 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_13
Script_SetGameSettings_Randomizer_Menu_12:
# 244 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_15
	return

Script_SetGameSettings_Randomizer_Menu_2:
# 218 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_0, 0
	goto Script_SetGameSettings_Randomizer_Menu_1

Script_SetGameSettings_Randomizer_Menu_6:
# 224 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Menu_Text_2, 0
	goto Script_SetGameSettings_Randomizer_Menu_5

Script_SetGameSettings_Randomizer_Menu_10:
# 237 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Menu
	goto Script_SetGameSettings_Randomizer_Menu_9

Script_SetGameSettings_Randomizer_Menu_13:
# 241 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	goto Script_SetGameSettings_Randomizer_Menu_12

Script_SetGameSettings_Randomizer_Menu_15:
# 245 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_Description
# 246 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZER_ABILITIES_ENABLED, Script_SetGameSettings_Randomizer_Menu_18
# 253 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_TurnOn, MSGBOX_YESNO
# 254 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_23
Script_SetGameSettings_Randomizer_Menu_17:
# 259 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Menu
	return

Script_SetGameSettings_Randomizer_Menu_18:
# 247 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_TurnOff, MSGBOX_YESNO
# 248 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Menu_21
	goto Script_SetGameSettings_Randomizer_Menu_17

Script_SetGameSettings_Randomizer_Menu_21:
# 249 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ABILITIES_ENABLED
# 250 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_Disabled
	goto Script_SetGameSettings_Randomizer_Menu_17

Script_SetGameSettings_Randomizer_Menu_23:
# 255 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ABILITIES_ENABLED
# 256 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Ability_TurnOn
	goto Script_SetGameSettings_Randomizer_Menu_17


Script_SetGameSettings_Randomizer_Species_Menu::
# 264 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_WhichSpeciesRandomizerOption
# 265 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_2
# 268 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_1, SPECIES_RANDOMIZER
Script_SetGameSettings_Randomizer_Species_Menu_1:
# 271 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_6
# 274 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_3, SCALED_RANDOMIZER
Script_SetGameSettings_Randomizer_Species_Menu_5:
# 277 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_10
# 280 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_5, LEGENDARY_AWARE_RANDOMIZER
Script_SetGameSettings_Randomizer_Species_Menu_9:
# 282 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Menu_Text_4, MULTI_B_PRESSED
# 284 "data/maps/InsideOfTruck/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 287 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_14
Script_SetGameSettings_Randomizer_Species_Menu_13:
# 291 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_17
Script_SetGameSettings_Randomizer_Species_Menu_16:
# 312 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_20
Script_SetGameSettings_Randomizer_Species_Menu_19:
# 333 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_26
	return

Script_SetGameSettings_Randomizer_Species_Menu_2:
# 266 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_0, SPECIES_RANDOMIZER
	goto Script_SetGameSettings_Randomizer_Species_Menu_1

Script_SetGameSettings_Randomizer_Species_Menu_6:
# 272 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_2, SCALED_RANDOMIZER
	goto Script_SetGameSettings_Randomizer_Species_Menu_5

Script_SetGameSettings_Randomizer_Species_Menu_10:
# 278 "data/maps/InsideOfTruck/scripts.pory"
	dynmultipush Script_SetGameSettings_Randomizer_Species_Menu_Text_4, LEGENDARY_AWARE_RANDOMIZER
	goto Script_SetGameSettings_Randomizer_Species_Menu_9

Script_SetGameSettings_Randomizer_Species_Menu_14:
# 288 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Menu
	goto Script_SetGameSettings_Randomizer_Species_Menu_13

Script_SetGameSettings_Randomizer_Species_Menu_17:
# 292 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_Description
# 293 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_23
# 296 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_Randomizer_Species_Menu_22:
# 298 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_33
Script_SetGameSettings_Randomizer_Species_Menu_32:
# 309 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	goto Script_SetGameSettings_Randomizer_Species_Menu_16

Script_SetGameSettings_Randomizer_Species_Menu_20:
# 313 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_Description
# 314 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_29
# 317 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_Randomizer_Species_Menu_28:
# 319 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_40
Script_SetGameSettings_Randomizer_Species_Menu_39:
# 330 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	goto Script_SetGameSettings_Randomizer_Species_Menu_19

Script_SetGameSettings_Randomizer_Species_Menu_23:
# 294 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_Randomizer_Species_Menu_22

Script_SetGameSettings_Randomizer_Species_Menu_26:
# 334 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_Description
# 335 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_36
# 338 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_TurnOn, MSGBOX_YESNO
Script_SetGameSettings_Randomizer_Species_Menu_35:
# 340 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_46
Script_SetGameSettings_Randomizer_Species_Menu_45:
# 351 "data/maps/InsideOfTruck/scripts.pory"
	goto Script_SetGameSettings_Randomizer_Species_Menu
	return

Script_SetGameSettings_Randomizer_Species_Menu_29:
# 315 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_Randomizer_Species_Menu_28

Script_SetGameSettings_Randomizer_Species_Menu_33:
# 299 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_42
# 304 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 305 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, SPECIES_RANDOMIZER
# 306 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_Enabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_32

Script_SetGameSettings_Randomizer_Species_Menu_36:
# 336 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_TurnOff, MSGBOX_YESNO
	goto Script_SetGameSettings_Randomizer_Species_Menu_35

Script_SetGameSettings_Randomizer_Species_Menu_40:
# 320 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_48
# 325 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 326 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, SCALED_RANDOMIZER
# 327 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_Enabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_39

Script_SetGameSettings_Randomizer_Species_Menu_42:
# 300 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 301 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
# 302 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Species_Disabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_32

Script_SetGameSettings_Randomizer_Species_Menu_46:
# 341 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
	goto_if_eq Script_SetGameSettings_Randomizer_Species_Menu_51
# 346 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZER_ENABLED
# 347 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, LEGENDARY_AWARE_RANDOMIZER
# 348 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_Enabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_45

Script_SetGameSettings_Randomizer_Species_Menu_48:
# 321 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 322 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
# 323 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_Scaled_Disabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_39

Script_SetGameSettings_Randomizer_Species_Menu_51:
# 342 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZER_ENABLED
# 343 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_RANDOMIZER_MODE, NO_RANDOMIZER
# 344 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetGameSettings_Randomizer_LegendsAware_Disabled
	goto Script_SetGameSettings_Randomizer_Species_Menu_45


Script_InsideOfTruck_MovingBox::
# 357 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_InsideOfTruck_BoxPrintedWithMonLogo, MSGBOX_SIGN
	return


Script_SetGameSettings_Menu_Text_0:
# 91 "data/maps/InsideOfTruck/scripts.pory"
	.string "Difficulty Options$"

Script_SetGameSettings_Menu_Text_1:
# 93 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode$"

Script_SetGameSettings_Menu_Text_2:
# 95 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode$"

Script_SetGameSettings_Menu_Text_3:
# 97 "data/maps/InsideOfTruck/scripts.pory"
	.string "Randomizer Options$"

Script_SetGameSettings_Menu_Text_4:
# 98 "data/maps/InsideOfTruck/scripts.pory"
	.string "Done$"

Script_SetGameSettings_Difficulty_Menu_Text_0:
# 120 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla$"

Script_SetGameSettings_Difficulty_Menu_Text_1:
# 122 "data/maps/InsideOfTruck/scripts.pory"
	.string "Vanilla$"

Script_SetGameSettings_Difficulty_Menu_Text_2:
# 125 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy$"

Script_SetGameSettings_Difficulty_Menu_Text_3:
# 127 "data/maps/InsideOfTruck/scripts.pory"
	.string "Easy$"

Script_SetGameSettings_Difficulty_Menu_Text_4:
# 130 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal$"

Script_SetGameSettings_Difficulty_Menu_Text_5:
# 132 "data/maps/InsideOfTruck/scripts.pory"
	.string "Normal$"

Script_SetGameSettings_Randomizer_Menu_Text_0:
# 218 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species$"

Script_SetGameSettings_Randomizer_Menu_Text_1:
# 220 "data/maps/InsideOfTruck/scripts.pory"
	.string "Species$"

Script_SetGameSettings_Randomizer_Menu_Text_2:
# 224 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ability$"

Script_SetGameSettings_Randomizer_Menu_Text_3:
# 226 "data/maps/InsideOfTruck/scripts.pory"
	.string "Ability$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_0:
# 266 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_1:
# 268 "data/maps/InsideOfTruck/scripts.pory"
	.string "Normal Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_2:
# 272 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_3:
# 274 "data/maps/InsideOfTruck/scripts.pory"
	.string "Scaled Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_4:
# 278 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary Aware Species$"

Script_SetGameSettings_Randomizer_Species_Menu_Text_5:
# 280 "data/maps/InsideOfTruck/scripts.pory"
	.string "Legendary Aware Species$"

Text_SetGameSettings_ReadCarefully::
# 360 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Please take a moment to read the\n"
	.string "following carefully.$"

Text_SetGameSettings_WantToChangeDefaults::
# 364 "data/maps/InsideOfTruck/scripts.pory"
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
# 382 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which option would you like\n"
	.string "to customize?$"

Text_SetGameSettings_WhichDifficulty::
# 387 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which difficulty mode would you\n"
	.string "like to play on?$"

Text_SetGameSettings_WhichRandomizerOption::
# 392 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which Species Randomizer option would\n"
	.string "you like to customize?$"

Text_SetGameSettings_WhichSpeciesRandomizerOption::
# 397 "data/maps/InsideOfTruck/scripts.pory"
	.string "Which Species Randomizer option would\n"
	.string "you like to customize?$"

Text_SetGameSettings_Difficulty_Easy_Description::
# 403 "data/maps/InsideOfTruck/scripts.pory"
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
# 416 "data/maps/InsideOfTruck/scripts.pory"
	.string "You current have {COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW DARK_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_SetGameSettings_Difficulty_Easy_TurnOn::
# 422 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode?$"

Text_SetGameSettings_Difficulty_Easy_Enabled::
# 427 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Easy Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_SetGameSettings_Difficulty_Normal_Description::
# 433 "data/maps/InsideOfTruck/scripts.pory"
	.string "This is the recommended difficulty\n"
	.string "mode and is what the game is priamrily\l"
	.string "balanced around.\p"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} has challenging Boss\n"
	.string "battles with hard level caps enforced.\p"
	.string "The player cannot access the Bag\n"
	.string "during trainer battles, and the battle\l"
	.string "style is forced to Set.\p$"

Text_SetGameSettings_Difficulty_Normal_AlreadySelected::
# 444 "data/maps/InsideOfTruck/scripts.pory"
	.string "You current have {COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW DARK_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_SetGameSettings_Difficulty_Normal_TurnOn::
# 450 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode?$"

Text_SetGameSettings_Difficulty_Normal_Enabled::
# 455 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Normal Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_SetGameSettings_Difficulty_Vanilla_Description::
# 461 "data/maps/InsideOfTruck/scripts.pory"
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
# 475 "data/maps/InsideOfTruck/scripts.pory"
	.string "You current have {COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW DARK_GRAY} enabled.\n"
	.string "Please select a different difficulty\l"
	.string "mode if you wish to change it.$"

Text_SetGameSettings_Difficulty_Vanilla_TurnOn::
# 481 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Vanilla Mode?$"

Text_SetGameSettings_Difficulty_Vanilla_Enabled::
# 486 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Vanilla Mode{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} enabled.$"

Text_SetGameSettings_MinimalGrinding_Description::
# 493 "data/maps/InsideOfTruck/scripts.pory"
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
# 505 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Grinding Mode off?$"

Text_SetGameSettings_MinimalGrinding_TurnOn::
# 510 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Grinding Mode on?$"

Text_SetGameSettings_MinimalGriding_Enabled::
# 515 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Minimal Griding Mode enabled.$"

Text_SetGameSettings_MinimalGriding_Disabled::
# 519 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Minimal Griding Mode disabled.$"

Text_SetGameSettings_Randomizer_Ability_Description::
# 524 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ability Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} randomizes abilities\n"
	.string "for the player, but doesn't affect\l"
	.string "abilities on Boss Pokémon.\p$"

Text_SetGameSettings_Randomizer_Ability_TurnOff::
# 530 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the \n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Ability Randomizer?$"

Text_SetGameSettings_Randomizer_Ability_TurnOn::
# 535 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on the \n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Ability Randomizer?$"

Text_SetGameSettings_Randomizer_Ability_Enabled::
# 540 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Ability Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Ability_Disabled::
# 544 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Ability Randomizer disabled.$"

Text_SetGameSettings_Randomizer_Learnsets_Description::
# 549 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnset Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} randomizes\n"
	.string "Pokémon learnsets.\p"
	.string "It does not randomize TMs or\n"
	.string "move tutors.\p"
	.string "Boss Pokémon also keep their normal\n"
	.string "movesets.\p$"

Text_SetGameSettings_Randomizer_Learnsets_TurnOff::
# 558 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Learnset Randomizer?$"

Text_SetGameSettings_Randomizer_Learnsets_TurnOn::
# 563 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnset Randomizer?$"

Text_SetGameSettings_Randomizer_Learnsets_Enabled::
# 568 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Learnset Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Learnsets_Disabled::
# 572 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Learnset Randomizer disabled.$"

Text_SetGameSettings_Randomizer_Species_Description::
# 578 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} randomizes\n"
	.string "encounters, trainers, and gifts.\l"
	.string "It does not randomize Boss battles.\p"
	.string "Many legendaries cannot be\n"
	.string "encountered.\p$"

Text_SetGameSettings_Randomizer_Species_TurnOff::
# 586 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Species Randomizer?$"

Text_SetGameSettings_Randomizer_Species_TurnOn::
# 591 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species Randomizer?$"

Text_SetGameSettings_Randomizer_Species_Enabled::
# 596 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Species Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Species_Disabled::
# 600 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Species Randomizer disabled.$"

Text_SetGameSettings_Randomizer_Scaled_Description::
# 606 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} only gives\n"
	.string "reasonable Pokémon for your location\l"
	.string "in the game.\p"
	.string "This randomization is based off the\n"
	.string "base stat total of the original\l"
	.string "encounter.\l"
	.string "It does not randmoize Boss battles.\p$"

Text_SetGameSettings_Randomizer_Scaled_TurnOff::
# 616 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Scaled Randomizer?$"

Text_SetGameSettings_Randomizer_Scaled_TurnOn::
# 621 "data/maps/InsideOfTruck/scripts.pory"
	.string "Dow you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Randomizer?$"

Text_SetGameSettings_Randomizer_Scaled_Enabled::
# 626 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Scaled Randomizer enabled.$"

Text_SetGameSettings_Randomizer_Scaled_Disabled::
# 630 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Scaled Randomizer disabled.$"

Text_SetGameSettings_Randomizer_LegendsAware_Description::
# 636 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species Randomizer{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} is\n"
	.string "the same thing as the Species\l"
	.string "Randomizer, with the only difference\l"
	.string "being that legendary Pokémon will be\l"
	.string "guaranteed to be randomized into\l"
	.string "legendary Pokémon.\p$"

Text_SetGameSettings_Randomizer_LegendsAware_TurnOff::
# 645 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to turn off the\n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Legendary-aware Species Randomizer?$"

Text_SetGameSettings_Randomizer_LegendsAware_TurnOn::
# 650 "data/maps/InsideOfTruck/scripts.pory"
	.string "Dow you want to turn on the\n"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species Randomizer?$"

Text_SetGameSettings_Randomizer_LegendsAware_Enabled::
# 655 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}Legendary-aware Species Randomizer\n"
	.string "enabled.$"

Text_SetGameSettings_Randomizer_LegendsAware_Disabled::
# 660 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Legendary-aware Species Randomizer\n"
	.string "disabled.$"

Text_SetGameSettings_DefaultSettingsSaved::
# 667 "data/maps/InsideOfTruck/scripts.pory"
	.string "Default settings saved.\n"
	.string "Good luck!$"

Text_SetGameSettings_CustomSettingsSaved::
# 672 "data/maps/InsideOfTruck/scripts.pory"
	.string "Custom settings saved.\n"
	.string "Good luck!$"

Text_InsideOfTruck_BoxPrintedWithMonLogo::
# 679 "data/maps/InsideOfTruck/scripts.pory"
	.string "The box is printed with a Pokémon logo.\p"
	.string "It's a Pokémon brand moving and\n"
	.string "delivery services.$"
