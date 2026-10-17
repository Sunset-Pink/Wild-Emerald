# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 3 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 4 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 5 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 6 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 7 "data/maps/LittlerootTown/scripts.pory"

# 8 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 9 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck 
# 10 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered house
# 11 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Told to go set clock
# 12 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Entered 2F to set clock
# 13 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Set clock
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Told to go meet rival
# 15 "data/maps/LittlerootTown/scripts.pory"

# 16 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 17 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 18 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 23 "data/maps/LittlerootTown/scripts.pory"

# 24 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 27 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 28 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 29 "data/maps/LittlerootTown/scripts.pory"

# 30 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 31 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 32 "data/maps/LittlerootTown/scripts.pory"
	return
# 33 "data/maps/LittlerootTown/scripts.pory"

# 34 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 35 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 36 "data/maps/LittlerootTown/scripts.pory"
	return
# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 39 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 40 "data/maps/LittlerootTown/scripts.pory"
	return
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 43 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 45 "data/maps/LittlerootTown/scripts.pory"
	return
# 46 "data/maps/LittlerootTown/scripts.pory"

# 47 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 48 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 49 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 50 "data/maps/LittlerootTown/scripts.pory"
	return
# 51 "data/maps/LittlerootTown/scripts.pory"

# 52 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 53 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 54 "data/maps/LittlerootTown/scripts.pory"
	return
# 55 "data/maps/LittlerootTown/scripts.pory"

# 56 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 57 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 58 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 59 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 60 "data/maps/LittlerootTown/scripts.pory"
	return
# 61 "data/maps/LittlerootTown/scripts.pory"

# 62 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 63 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 64 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 65 "data/maps/LittlerootTown/scripts.pory"
	return
# 66 "data/maps/LittlerootTown/scripts.pory"

# 67 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 68 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 69 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 70 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 71 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 72 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 80 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 81 "data/maps/LittlerootTown/scripts.pory"
	return
# 82 "data/maps/LittlerootTown/scripts.pory"

# 83 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 84 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 85 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 86 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 87 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 88 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 89 "data/maps/LittlerootTown/scripts.pory"

# 90 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 91 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 92 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 93 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 94 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 96 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 97 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 98 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 99 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 100 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 101 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 102 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 103 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 104 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 105 "data/maps/LittlerootTown/scripts.pory"
	end
# 106 "data/maps/LittlerootTown/scripts.pory"

# 107 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 108 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 109 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 110 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 111 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 112 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 113 "data/maps/LittlerootTown/scripts.pory"
	end
# 114 "data/maps/LittlerootTown/scripts.pory"

# 115 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 116 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 117 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 118 "data/maps/LittlerootTown/scripts.pory"
	end
# 119 "data/maps/LittlerootTown/scripts.pory"

# 120 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 121 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 122 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 123 "data/maps/LittlerootTown/scripts.pory"
	end
# 124 "data/maps/LittlerootTown/scripts.pory"

# 125 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 126 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 127 "data/maps/LittlerootTown/scripts.pory"
	end
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 130 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 131 "data/maps/LittlerootTown/scripts.pory"
	end
# 132 "data/maps/LittlerootTown/scripts.pory"

# 133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 134 "data/maps/LittlerootTown/scripts.pory"
	lock
# 135 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 136 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 137 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 138 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 139 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 140 "data/maps/LittlerootTown/scripts.pory"
	release
# 141 "data/maps/LittlerootTown/scripts.pory"
	end
# 142 "data/maps/LittlerootTown/scripts.pory"

# 143 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 144 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 145 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 146 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 147 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 148 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 150 "data/maps/LittlerootTown/scripts.pory"
	release
# 151 "data/maps/LittlerootTown/scripts.pory"
	end
# 152 "data/maps/LittlerootTown/scripts.pory"

# 153 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 154 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 155 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 156 "data/maps/LittlerootTown/scripts.pory"
	release
# 157 "data/maps/LittlerootTown/scripts.pory"
	end
# 158 "data/maps/LittlerootTown/scripts.pory"

# 159 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 160 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 161 "data/maps/LittlerootTown/scripts.pory"
	release
# 162 "data/maps/LittlerootTown/scripts.pory"
	end
# 163 "data/maps/LittlerootTown/scripts.pory"

# 164 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 165 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 167 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 169 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 170 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 172 "data/maps/LittlerootTown/scripts.pory"
	end
# 173 "data/maps/LittlerootTown/scripts.pory"

# 174 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 175 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 176 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 177 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 178 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 179 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 180 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 181 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 182 "data/maps/LittlerootTown/scripts.pory"
	return
# 183 "data/maps/LittlerootTown/scripts.pory"

# 184 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 185 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 186 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 187 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 188 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 189 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 192 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 193 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 197 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 198 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 202 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 203 "data/maps/LittlerootTown/scripts.pory"

# 204 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 205 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 209 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 210 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 211 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 213 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 214 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 215 "data/maps/LittlerootTown/scripts.pory"

# 216 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 217 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 218 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 219 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 220 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 221 "data/maps/LittlerootTown/scripts.pory"

# 222 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 223 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 224 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 225 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 226 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 227 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 228 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 230 "data/maps/LittlerootTown/scripts.pory"
	end
# 231 "data/maps/LittlerootTown/scripts.pory"

# 232 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 233 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 234 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 235 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 236 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 237 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 238 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 239 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 240 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 241 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 242 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 243 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 244 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 245 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 246 "data/maps/LittlerootTown/scripts.pory"

# 247 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 248 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 250 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 251 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 252 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 253 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 254 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 255 "data/maps/LittlerootTown/scripts.pory"

# 256 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 257 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 258 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 259 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 260 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 261 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 262 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 263 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 264 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 265 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 266 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 267 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 268 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 269 "data/maps/LittlerootTown/scripts.pory"
	end
# 270 "data/maps/LittlerootTown/scripts.pory"

# 271 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 272 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 273 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 274 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 275 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 276 "data/maps/LittlerootTown/scripts.pory"
	end
# 277 "data/maps/LittlerootTown/scripts.pory"

# 278 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 279 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 280 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 281 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 282 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 283 "data/maps/LittlerootTown/scripts.pory"
	end
# 284 "data/maps/LittlerootTown/scripts.pory"

# 285 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 286 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 287 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 288 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 289 "data/maps/LittlerootTown/scripts.pory"
	end
# 290 "data/maps/LittlerootTown/scripts.pory"

# 291 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 292 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 293 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 294 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 295 "data/maps/LittlerootTown/scripts.pory"
	end
# 296 "data/maps/LittlerootTown/scripts.pory"

# 297 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 298 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 299 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 300 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 301 "data/maps/LittlerootTown/scripts.pory"
	end
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 304 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 305 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 306 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 307 "data/maps/LittlerootTown/scripts.pory"
	end
# 308 "data/maps/LittlerootTown/scripts.pory"

# 309 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 310 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 311 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 312 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 313 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 314 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 315 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 316 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 317 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 318 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 319 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 320 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 321 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 322 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 323 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 324 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 325 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 326 "data/maps/LittlerootTown/scripts.pory"
	end
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 329 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 330 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 331 "data/maps/LittlerootTown/scripts.pory"
	return
# 332 "data/maps/LittlerootTown/scripts.pory"

# 333 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 334 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 335 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 336 "data/maps/LittlerootTown/scripts.pory"
	return
# 337 "data/maps/LittlerootTown/scripts.pory"

# 338 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 339 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 340 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 341 "data/maps/LittlerootTown/scripts.pory"
	return
# 342 "data/maps/LittlerootTown/scripts.pory"

# 343 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 344 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 345 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/LittlerootTown/scripts.pory"
	return
# 347 "data/maps/LittlerootTown/scripts.pory"

# 348 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 349 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 350 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 351 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 352 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 353 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 354 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 355 "data/maps/LittlerootTown/scripts.pory"
	return
# 356 "data/maps/LittlerootTown/scripts.pory"

# 357 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 358 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 359 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 360 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 361 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 362 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 363 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 364 "data/maps/LittlerootTown/scripts.pory"
	return
# 365 "data/maps/LittlerootTown/scripts.pory"

# 366 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 367 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 368 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 370 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 371 "data/maps/LittlerootTown/scripts.pory"
	return
# 372 "data/maps/LittlerootTown/scripts.pory"

# 373 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 374 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 375 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 376 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 377 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 378 "data/maps/LittlerootTown/scripts.pory"
	return
# 379 "data/maps/LittlerootTown/scripts.pory"

# 380 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 381 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 382 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 383 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 384 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 385 "data/maps/LittlerootTown/scripts.pory"
	return
# 386 "data/maps/LittlerootTown/scripts.pory"

# 387 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 388 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 389 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 390 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 391 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/LittlerootTown/scripts.pory"
	return
# 393 "data/maps/LittlerootTown/scripts.pory"

# 394 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 395 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 396 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 397 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 398 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 399 "data/maps/LittlerootTown/scripts.pory"
	return
# 400 "data/maps/LittlerootTown/scripts.pory"

# 401 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 402 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 403 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 404 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 405 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 406 "data/maps/LittlerootTown/scripts.pory"
	return
# 407 "data/maps/LittlerootTown/scripts.pory"

# 408 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 409 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 410 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 411 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 412 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 413 "data/maps/LittlerootTown/scripts.pory"
	return
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 416 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 417 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 418 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 419 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 420 "data/maps/LittlerootTown/scripts.pory"
	return
# 421 "data/maps/LittlerootTown/scripts.pory"

# 422 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 423 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 424 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 425 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 426 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 427 "data/maps/LittlerootTown/scripts.pory"
	return
# 428 "data/maps/LittlerootTown/scripts.pory"

# 429 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 430 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 431 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 432 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 433 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 434 "data/maps/LittlerootTown/scripts.pory"
	return
# 435 "data/maps/LittlerootTown/scripts.pory"

# 436 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 437 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 438 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 439 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 440 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 441 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 442 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 443 "data/maps/LittlerootTown/scripts.pory"
	return
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 446 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 447 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 448 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 449 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 450 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 451 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 452 "data/maps/LittlerootTown/scripts.pory"
	return
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 455 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 456 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 457 "data/maps/LittlerootTown/scripts.pory"
	return
# 458 "data/maps/LittlerootTown/scripts.pory"

# 459 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 460 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 461 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 462 "data/maps/LittlerootTown/scripts.pory"
	return
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 465 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 466 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 467 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 468 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 469 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 470 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 471 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 472 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 473 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 474 "data/maps/LittlerootTown/scripts.pory"
	return
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 477 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 480 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 481 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 482 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 483 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 484 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 485 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 486 "data/maps/LittlerootTown/scripts.pory"
	return
# 487 "data/maps/LittlerootTown/scripts.pory"

# 488 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 489 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 490 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 491 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 492 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 493 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 494 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 495 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 496 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 497 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 498 "data/maps/LittlerootTown/scripts.pory"
	return
# 499 "data/maps/LittlerootTown/scripts.pory"

# 500 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 501 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 502 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 505 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 506 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 507 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 508 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 509 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 510 "data/maps/LittlerootTown/scripts.pory"
	return
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 513 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 514 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 516 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 517 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 518 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 519 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 520 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 521 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 522 "data/maps/LittlerootTown/scripts.pory"
	return
# 523 "data/maps/LittlerootTown/scripts.pory"

# 524 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 525 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 526 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 527 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 528 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 529 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 530 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 531 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 532 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 533 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 540 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 541 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 542 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 543 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 544 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 546 "data/maps/LittlerootTown/scripts.pory"
	return
# 547 "data/maps/LittlerootTown/scripts.pory"

# 548 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 549 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 550 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 556 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 557 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 558 "data/maps/LittlerootTown/scripts.pory"
	return
# 559 "data/maps/LittlerootTown/scripts.pory"

# 560 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 561 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 562 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 563 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 564 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 565 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 566 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 567 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 568 "data/maps/LittlerootTown/scripts.pory"

# 569 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 570 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 571 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 572 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 573 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 574 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 575 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 576 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 579 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 580 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 581 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 582 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 583 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 584 "data/maps/LittlerootTown/scripts.pory"

# 585 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 586 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 587 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 588 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 589 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 590 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 591 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 594 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 595 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 596 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 597 "data/maps/LittlerootTown/scripts.pory"

# 598 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 599 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 600 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 601 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 602 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 603 "data/maps/LittlerootTown/scripts.pory"

# 604 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 605 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 606 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 607 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 608 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 611 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 612 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 613 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 616 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 617 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 618 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 619 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 620 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 621 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 622 "data/maps/LittlerootTown/scripts.pory"

# 623 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 624 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 625 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 626 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 627 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 628 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 629 "data/maps/LittlerootTown/scripts.pory"

# 630 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 631 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 632 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 633 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 634 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 635 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 636 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 639 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 640 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 641 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 642 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 643 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 644 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 645 "data/maps/LittlerootTown/scripts.pory"

# 646 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 647 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 648 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 649 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 650 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 651 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 652 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 653 "data/maps/LittlerootTown/scripts.pory"

# 654 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 656 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 657 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 658 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 659 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 661 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 662 "data/maps/LittlerootTown/scripts.pory"

# 663 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 664 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 665 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 666 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 667 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 668 "data/maps/LittlerootTown/scripts.pory"

# 669 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 670 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 671 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 672 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 674 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 677 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 678 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 679 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 681 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 682 "data/maps/LittlerootTown/scripts.pory"

# 683 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 684 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 685 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 686 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 687 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 688 "data/maps/LittlerootTown/scripts.pory"

# 689 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 691 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 692 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 693 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 694 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 696 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 697 "data/maps/LittlerootTown/scripts.pory"

# 698 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 700 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 701 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 702 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 704 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 707 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 708 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 709 "data/maps/LittlerootTown/scripts.pory"

# 710 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 711 "data/maps/LittlerootTown/scripts.pory"
	lock
# 712 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 713 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 714 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 715 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 716 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 721 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 722 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 723 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 724 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 725 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 726 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 727 "data/maps/LittlerootTown/scripts.pory"
	end
# 728 "data/maps/LittlerootTown/scripts.pory"

# 729 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 730 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 731 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 732 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 733 "data/maps/LittlerootTown/scripts.pory"
	release
# 734 "data/maps/LittlerootTown/scripts.pory"
	end
# 735 "data/maps/LittlerootTown/scripts.pory"

# 736 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 737 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 738 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 739 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 740 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 741 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 742 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 743 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 744 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 745 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 746 "data/maps/LittlerootTown/scripts.pory"
	return
# 747 "data/maps/LittlerootTown/scripts.pory"

# 748 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 749 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Wait, {PLAYER}!$"
# 750 "data/maps/LittlerootTown/scripts.pory"

# 751 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 752 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}! {PLAYER}! Did you\n"
# 753 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 754 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 755 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 756 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 757 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 758 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 759 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these Running Shoes.\p"
# 760 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 763 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 764 "data/maps/LittlerootTown/scripts.pory"
	.string "Running Shoes.$"
# 765 "data/maps/LittlerootTown/scripts.pory"

# 766 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 767 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, those shoes came with\n"
# 768 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 769 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 770 "data/maps/LittlerootTown/scripts.pory"
	.string "Running Shoes to run extra-fast!\p"
# 771 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these Running Shoes and race\n"
# 772 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 773 "data/maps/LittlerootTown/scripts.pory"

# 774 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 775 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 776 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 777 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 778 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 779 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 780 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 781 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 782 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 783 "data/maps/LittlerootTown/scripts.pory"

# 784 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 785 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 786 "data/maps/LittlerootTown/scripts.pory"
	.string "and Pokémon.\p"
# 787 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 788 "data/maps/LittlerootTown/scripts.pory"

# 789 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 790 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 791 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 792 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 793 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 794 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 795 "data/maps/LittlerootTown/scripts.pory"

# 796 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 797 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 798 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 799 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 800 "data/maps/LittlerootTown/scripts.pory"

# 801 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 802 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 803 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 804 "data/maps/LittlerootTown/scripts.pory"

# 805 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 806 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 807 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 808 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 809 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 810 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 811 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 812 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 813 "data/maps/LittlerootTown/scripts.pory"

# 814 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 815 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 816 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 819 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 820 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 821 "data/maps/LittlerootTown/scripts.pory"

# 822 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 823 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch: Well, well, {PLAYER}{KUN}!\n"
# 824 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 825 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 826 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 827 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 828 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 829 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 830 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 831 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"

LittlerootTown_MapScripts::
# 834 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MapScript_LittlerootTown_OnTransition
# 835 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MapScript_LittlerootTown_OnFrame
# 836 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

LittlerootTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 837 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
	.2byte 0


MapScript_LittlerootTown_OnTransition:
# 842 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 843 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 844 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq MapScript_LittlerootTown_OnTransition_2
MapScript_LittlerootTown_OnTransition_1:
# 847 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_RESCUED_BIRCH, MapScript_LittlerootTown_OnTransition_5
MapScript_LittlerootTown_OnTransition_4:
# 851 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq MapScript_LittlerootTown_OnTransition_8
MapScript_LittlerootTown_OnTransition_7:
# 856 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	goto_if_eq MapScript_LittlerootTown_OnTransition_11
# 857 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq MapScript_LittlerootTown_OnTransition_11
MapScript_LittlerootTown_OnTransition_10:
# 862 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq MapScript_LittlerootTown_OnTransition_16
MapScript_LittlerootTown_OnTransition_15:
# 866 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq MapScript_LittlerootTown_OnTransition_19
MapScript_LittlerootTown_OnTransition_18:
# 870 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
	goto_if_eq MapScript_LittlerootTown_OnTransition_22
# 872 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
	goto_if_eq MapScript_LittlerootTown_OnTransition_23
MapScript_LittlerootTown_OnTransition_21:
	end

MapScript_LittlerootTown_OnTransition_2:
# 845 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MoveMomToMaysDoor
	goto MapScript_LittlerootTown_OnTransition_1

MapScript_LittlerootTown_OnTransition_5:
# 848 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetTwinPos
	goto MapScript_LittlerootTown_OnTransition_4

MapScript_LittlerootTown_OnTransition_8:
# 852 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
	goto MapScript_LittlerootTown_OnTransition_7

MapScript_LittlerootTown_OnTransition_11:
# 859 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	goto MapScript_LittlerootTown_OnTransition_10

MapScript_LittlerootTown_OnTransition_16:
# 863 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MoveRivalFromOldale
	goto MapScript_LittlerootTown_OnTransition_15

MapScript_LittlerootTown_OnTransition_19:
# 867 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetRivalLeftForRoute103
	goto MapScript_LittlerootTown_OnTransition_18

MapScript_LittlerootTown_OnTransition_22:
# 871 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_HideMapNamePopup
	goto MapScript_LittlerootTown_OnTransition_21

MapScript_LittlerootTown_OnTransition_23:
# 873 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_LeftLabAfterDexUpgrade
	goto MapScript_LittlerootTown_OnTransition_21


MapScript_LittlerootTown_OnFrame:
# 879 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruck
# 880 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
	return


LittlerootTown_EventScript_StepOffTruck::
# 884 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_StepOffTruck_2
# 891 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 892 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
LittlerootTown_EventScript_StepOffTruck_1:
# 894 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_GoInsideWithMom
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_StepOffTruck_6
# 899 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 900 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
LittlerootTown_EventScript_StepOffTruck_5:
# 902 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 903 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_StepOffTruck_2:
# 887 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 888 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
	goto LittlerootTown_EventScript_StepOffTruck_1

LittlerootTown_EventScript_StepOffTruck_6:
# 896 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 897 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	goto LittlerootTown_EventScript_StepOffTruck_5


Script_LittlerootTown_Event_GoInsideWithMom::
# 908 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 909 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 910 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Event_GoInsideWithMom_Movement_0
# 917 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 918 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_OpenDoor
# 919 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 920 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_1
# 924 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 925 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_CloseDoor
# 926 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 927 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_2
# 934 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 935 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Intro_Mom_LetsGoInside
# 936 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 937 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_3
# 945 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Event_GoInsideWithMom_Movement_4
# 954 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 955 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_OpenDoor
# 956 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_5
# 964 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Event_GoInsideWithMom_Movement_6
# 970 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 971 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 972 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 973 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 974 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_CloseDoor
# 975 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 976 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


Script_LittlerootTown_Event_OpenDoor:
# 994 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 995 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Event_CloseDoor:
# 1000 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 1001 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Event_ExamineTownSign::
# 1006 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_TownSign, MSGBOX_SIGN
	end


Script_LittlerootTown_Event_ExamineSign_MaysHouse::
# 1016 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Event_ExamineSign_MaysHouse_2
# 1020 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersHouse, MSGBOX_SIGN
Script_LittlerootTown_Event_ExamineSign_MaysHouse_1:
# 1022 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Event_ExamineSign_MaysHouse_2:
# 1018 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsHouse, MSGBOX_SIGN
	goto Script_LittlerootTown_Event_ExamineSign_MaysHouse_1


Script_LittlerootTown_Event_ExamineSign_BrandensHouse::
# 1027 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Event_ExamineSign_BrandensHouse_2
# 1031 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsHouse, MSGBOX_SIGN
Script_LittlerootTown_Event_ExamineSign_BrandensHouse_1:
# 1033 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Event_ExamineSign_BrandensHouse_2:
# 1029 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersHouse, MSGBOX_SIGN
	goto Script_LittlerootTown_Event_ExamineSign_BrandensHouse_1


Script_littlerootTown_Event_ExamineLabSign::
# 1046 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_LabSign, MSGBOX_SIGN
	end


# 910 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_0:
# 913 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 914 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 914 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 914 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 920 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_1:
# 922 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 927 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_2:
# 930 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 931 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 937 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_3:
# 940 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 941 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 942 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 945 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_4:
# 948 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 949 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 950 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 951 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 956 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_5:
# 959 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 960 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 961 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 964 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_6:
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 967 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

Text_LittlerootTown_Intro_Mom_LetsGoInside::
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, we're here, honey!\p"
	.string "It must be tiring riding with our things\n"
	.string "in the moving truck.\p"
	.string "Well, this is Littleroot Town.\p"
	.string "How do you like it?\n"
	.string "This is our new home!\p"
	.string "It has a quaint feel, but it seems to be\n"
	.string "an easy place to live, don't you think?\p"
	.string "And, you get your own room, {PLAYER}!\n"
	.string "Let's go inside.$"

Text_LittlerootTown_TownSign:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

Text_LittlerootTown_BirchsHouse:
# 1037 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"

Text_LittlerootTown_PlayersHouse:
# 1041 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"

Text_LittlerootTown_LabSign:
# 1050 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
