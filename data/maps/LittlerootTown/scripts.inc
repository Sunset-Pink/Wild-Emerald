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
LittlerootTown_EventScript_HideMapNamePopup::
# 31 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 32 "data/maps/LittlerootTown/scripts.pory"
	return
# 33 "data/maps/LittlerootTown/scripts.pory"

# 34 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 35 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 36 "data/maps/LittlerootTown/scripts.pory"
	return
# 37 "data/maps/LittlerootTown/scripts.pory"

# 38 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 39 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 41 "data/maps/LittlerootTown/scripts.pory"
	return
# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 44 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 45 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 46 "data/maps/LittlerootTown/scripts.pory"
	return
# 47 "data/maps/LittlerootTown/scripts.pory"

# 48 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 49 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 8
# 50 "data/maps/LittlerootTown/scripts.pory"
	return
# 51 "data/maps/LittlerootTown/scripts.pory"

# 52 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 53 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 54 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 10, 1
# 55 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/LittlerootTown/scripts.pory"
	return
# 57 "data/maps/LittlerootTown/scripts.pory"

# 58 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 59 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_TWIN, 7, 2
# 60 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 61 "data/maps/LittlerootTown/scripts.pory"
	return
# 62 "data/maps/LittlerootTown/scripts.pory"

# 63 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 64 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 65 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_LITTLEROOT_MOM, MOVEMENT_TYPE_FACE_DOWN
# 66 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 67 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 68 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 69 "data/maps/LittlerootTown/scripts.pory"
	return
# 70 "data/maps/LittlerootTown/scripts.pory"

# 71 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 72 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 5, 9
# 73 "data/maps/LittlerootTown/scripts.pory"
	return
# 74 "data/maps/LittlerootTown/scripts.pory"

# 75 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 76 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_LITTLEROOT_MOM, 14, 9
# 77 "data/maps/LittlerootTown/scripts.pory"
	return
# 78 "data/maps/LittlerootTown/scripts.pory"

# 79 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 80 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 81 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 82 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 83 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 84 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 85 "data/maps/LittlerootTown/scripts.pory"

# 86 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 87 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 88 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 89 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_BIRCH, Common_Movement_ExclamationMark
# 90 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 92 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 93 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 94 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 95 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 96 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 97 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 98 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 99 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 100 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 101 "data/maps/LittlerootTown/scripts.pory"
	end
# 102 "data/maps/LittlerootTown/scripts.pory"

# 103 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 104 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_BIRCH
# 105 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_RIVAL
# 106 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 107 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 108 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 109 "data/maps/LittlerootTown/scripts.pory"
	end
# 110 "data/maps/LittlerootTown/scripts.pory"

# 111 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 112 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 6, 10
# 113 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 5, 10
# 114 "data/maps/LittlerootTown/scripts.pory"
	end
# 115 "data/maps/LittlerootTown/scripts.pory"

# 116 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 117 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_RIVAL, 13, 10
# 118 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_BIRCH, 14, 10
# 119 "data/maps/LittlerootTown/scripts.pory"
	end
# 120 "data/maps/LittlerootTown/scripts.pory"

# 121 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 122 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 123 "data/maps/LittlerootTown/scripts.pory"
	end
# 124 "data/maps/LittlerootTown/scripts.pory"

# 125 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 126 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 127 "data/maps/LittlerootTown/scripts.pory"
	end
# 128 "data/maps/LittlerootTown/scripts.pory"

# 129 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 130 "data/maps/LittlerootTown/scripts.pory"
	lock
# 131 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 132 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 133 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 134 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 135 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 136 "data/maps/LittlerootTown/scripts.pory"
	release
# 137 "data/maps/LittlerootTown/scripts.pory"
	end
# 138 "data/maps/LittlerootTown/scripts.pory"

# 139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 140 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 141 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 142 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 143 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 144 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 146 "data/maps/LittlerootTown/scripts.pory"
	release
# 147 "data/maps/LittlerootTown/scripts.pory"
	end
# 148 "data/maps/LittlerootTown/scripts.pory"

# 149 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 150 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 151 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 152 "data/maps/LittlerootTown/scripts.pory"
	release
# 153 "data/maps/LittlerootTown/scripts.pory"
	end
# 154 "data/maps/LittlerootTown/scripts.pory"

# 155 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 156 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown/scripts.pory"
	release
# 158 "data/maps/LittlerootTown/scripts.pory"
	end
# 159 "data/maps/LittlerootTown/scripts.pory"

# 160 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 161 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 162 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 166 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 168 "data/maps/LittlerootTown/scripts.pory"
	end
# 169 "data/maps/LittlerootTown/scripts.pory"

# 170 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 171 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 172 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 173 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 174 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 175 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 176 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 177 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 178 "data/maps/LittlerootTown/scripts.pory"
	return
# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 181 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 182 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 183 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 184 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 185 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 186 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 187 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 188 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 189 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 190 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 192 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 193 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 194 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown/scripts.pory"

# 196 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 197 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 198 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown/scripts.pory"

# 200 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 201 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 203 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 204 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 205 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 208 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 209 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 210 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown/scripts.pory"

# 212 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 213 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 214 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 215 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 216 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown/scripts.pory"

# 218 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 219 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 220 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 221 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 223 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, LittlerootTown_Movement_TwinReturnRight
# 224 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 226 "data/maps/LittlerootTown/scripts.pory"
	end
# 227 "data/maps/LittlerootTown/scripts.pory"

# 228 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 229 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 230 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 231 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 232 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 233 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 234 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 235 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 236 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 237 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 238 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 239 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 240 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 241 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 242 "data/maps/LittlerootTown/scripts.pory"

# 243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 244 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 245 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 246 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 247 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 248 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 249 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 250 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 251 "data/maps/LittlerootTown/scripts.pory"

# 252 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 253 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 254 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_WalkInPlaceFasterRight
# 255 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 256 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 257 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 259 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 260 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 261 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_TWIN, Common_Movement_FaceOriginalDirection
# 262 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 263 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 264 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 265 "data/maps/LittlerootTown/scripts.pory"
	end
# 266 "data/maps/LittlerootTown/scripts.pory"

# 267 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 268 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 269 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 270 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 10, 9
# 271 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 272 "data/maps/LittlerootTown/scripts.pory"
	end
# 273 "data/maps/LittlerootTown/scripts.pory"

# 274 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 275 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 276 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 277 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_LITTLEROOT_MOM, 11, 9
# 278 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 279 "data/maps/LittlerootTown/scripts.pory"
	end
# 280 "data/maps/LittlerootTown/scripts.pory"

# 281 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 282 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 283 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 284 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 285 "data/maps/LittlerootTown/scripts.pory"
	end
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 288 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 289 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 290 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 291 "data/maps/LittlerootTown/scripts.pory"
	end
# 292 "data/maps/LittlerootTown/scripts.pory"

# 293 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 294 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 295 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 296 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 297 "data/maps/LittlerootTown/scripts.pory"
	end
# 298 "data/maps/LittlerootTown/scripts.pory"

# 299 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 300 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 301 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 302 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 303 "data/maps/LittlerootTown/scripts.pory"
	end
# 304 "data/maps/LittlerootTown/scripts.pory"

# 305 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 306 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 307 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 308 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 309 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 310 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 311 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 312 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 313 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 314 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 315 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 316 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 317 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 318 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 319 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 320 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 321 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 322 "data/maps/LittlerootTown/scripts.pory"
	end
# 323 "data/maps/LittlerootTown/scripts.pory"

# 324 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 325 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 326 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 327 "data/maps/LittlerootTown/scripts.pory"
	return
# 328 "data/maps/LittlerootTown/scripts.pory"

# 329 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 330 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 331 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 332 "data/maps/LittlerootTown/scripts.pory"
	return
# 333 "data/maps/LittlerootTown/scripts.pory"

# 334 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 335 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterRight
# 336 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 337 "data/maps/LittlerootTown/scripts.pory"
	return
# 338 "data/maps/LittlerootTown/scripts.pory"

# 339 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 340 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterLeft
# 341 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/LittlerootTown/scripts.pory"
	return
# 343 "data/maps/LittlerootTown/scripts.pory"

# 344 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 345 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 346 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 347 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 348 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 349 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 350 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 351 "data/maps/LittlerootTown/scripts.pory"
	return
# 352 "data/maps/LittlerootTown/scripts.pory"

# 353 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 354 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 355 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 356 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 357 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 358 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 359 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 360 "data/maps/LittlerootTown/scripts.pory"
	return
# 361 "data/maps/LittlerootTown/scripts.pory"

# 362 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 363 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 364 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 365 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 366 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/LittlerootTown/scripts.pory"
	return
# 368 "data/maps/LittlerootTown/scripts.pory"

# 369 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 370 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 371 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 372 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 373 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/LittlerootTown/scripts.pory"
	return
# 375 "data/maps/LittlerootTown/scripts.pory"

# 376 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 377 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 378 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 379 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 380 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 381 "data/maps/LittlerootTown/scripts.pory"
	return
# 382 "data/maps/LittlerootTown/scripts.pory"

# 383 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 384 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 385 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 386 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 387 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 388 "data/maps/LittlerootTown/scripts.pory"
	return
# 389 "data/maps/LittlerootTown/scripts.pory"

# 390 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 391 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 392 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 393 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 394 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 395 "data/maps/LittlerootTown/scripts.pory"
	return
# 396 "data/maps/LittlerootTown/scripts.pory"

# 397 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 398 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 399 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 401 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 402 "data/maps/LittlerootTown/scripts.pory"
	return
# 403 "data/maps/LittlerootTown/scripts.pory"

# 404 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 405 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 406 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 407 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 408 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/LittlerootTown/scripts.pory"
	return
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 412 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 413 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 414 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 415 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 416 "data/maps/LittlerootTown/scripts.pory"
	return
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 419 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 420 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 422 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 423 "data/maps/LittlerootTown/scripts.pory"
	return
# 424 "data/maps/LittlerootTown/scripts.pory"

# 425 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 426 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 427 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 428 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 429 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 430 "data/maps/LittlerootTown/scripts.pory"
	return
# 431 "data/maps/LittlerootTown/scripts.pory"

# 432 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 433 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 434 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 435 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 436 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 437 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 438 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 439 "data/maps/LittlerootTown/scripts.pory"
	return
# 440 "data/maps/LittlerootTown/scripts.pory"

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 442 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 443 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 444 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 445 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 446 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 447 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 448 "data/maps/LittlerootTown/scripts.pory"
	return
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 451 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome0
# 452 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 453 "data/maps/LittlerootTown/scripts.pory"
	return
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 456 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHome1
# 457 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 458 "data/maps/LittlerootTown/scripts.pory"
	return
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 461 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 462 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 463 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 464 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 465 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 466 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 467 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 468 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 469 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 470 "data/maps/LittlerootTown/scripts.pory"
	return
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 473 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 474 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 475 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 476 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 477 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 478 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 479 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 480 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 481 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 482 "data/maps/LittlerootTown/scripts.pory"
	return
# 483 "data/maps/LittlerootTown/scripts.pory"

# 484 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 485 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 486 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 487 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 488 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 489 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 490 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 491 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 492 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 493 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 494 "data/maps/LittlerootTown/scripts.pory"
	return
# 495 "data/maps/LittlerootTown/scripts.pory"

# 496 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 497 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 498 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 499 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 500 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 501 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 502 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 504 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 505 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 506 "data/maps/LittlerootTown/scripts.pory"
	return
# 507 "data/maps/LittlerootTown/scripts.pory"

# 508 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 509 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 510 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 511 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 512 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 513 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 514 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 516 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 517 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 518 "data/maps/LittlerootTown/scripts.pory"
	return
# 519 "data/maps/LittlerootTown/scripts.pory"

# 520 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 521 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 522 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 523 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 524 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 525 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 526 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 527 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 528 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 529 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 530 "data/maps/LittlerootTown/scripts.pory"
	return
# 531 "data/maps/LittlerootTown/scripts.pory"

# 532 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 533 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 534 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 535 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 536 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 540 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 541 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 542 "data/maps/LittlerootTown/scripts.pory"
	return
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 548 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 549 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 550 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 551 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 552 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 554 "data/maps/LittlerootTown/scripts.pory"
	return
# 555 "data/maps/LittlerootTown/scripts.pory"

# 556 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 557 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 558 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 559 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 560 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 561 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 562 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 563 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 566 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 567 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 568 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 569 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 570 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 571 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 572 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 573 "data/maps/LittlerootTown/scripts.pory"

# 574 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 575 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 576 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 577 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 578 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 579 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 580 "data/maps/LittlerootTown/scripts.pory"

# 581 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 582 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 583 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 584 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 585 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 586 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 587 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 588 "data/maps/LittlerootTown/scripts.pory"

# 589 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 590 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 591 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 592 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 593 "data/maps/LittlerootTown/scripts.pory"

# 594 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 595 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 596 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 597 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 598 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 599 "data/maps/LittlerootTown/scripts.pory"

# 600 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 601 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 602 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 603 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 604 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 605 "data/maps/LittlerootTown/scripts.pory"

# 606 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 607 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 608 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 609 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 610 "data/maps/LittlerootTown/scripts.pory"

# 611 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 612 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 613 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 614 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 615 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 616 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 617 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 618 "data/maps/LittlerootTown/scripts.pory"

# 619 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 620 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 621 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 622 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 623 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 624 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 625 "data/maps/LittlerootTown/scripts.pory"

# 626 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 627 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 628 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 629 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 630 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 631 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 632 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 633 "data/maps/LittlerootTown/scripts.pory"

# 634 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 635 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 636 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 637 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 638 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 639 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 640 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 641 "data/maps/LittlerootTown/scripts.pory"

# 642 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 643 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 644 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 645 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 646 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 647 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 648 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 649 "data/maps/LittlerootTown/scripts.pory"

# 650 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 651 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 652 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 653 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 654 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 655 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 656 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 657 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 658 "data/maps/LittlerootTown/scripts.pory"

# 659 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 660 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 661 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 662 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 663 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 664 "data/maps/LittlerootTown/scripts.pory"

# 665 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 666 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 667 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 668 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 669 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 670 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 671 "data/maps/LittlerootTown/scripts.pory"

# 672 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 673 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 674 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 675 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 676 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 677 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 678 "data/maps/LittlerootTown/scripts.pory"

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 680 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 681 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 682 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 683 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 684 "data/maps/LittlerootTown/scripts.pory"

# 685 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 686 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 687 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 688 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 689 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 690 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 691 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 692 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 693 "data/maps/LittlerootTown/scripts.pory"

# 694 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 695 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 696 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 697 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 698 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 699 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 700 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 701 "data/maps/LittlerootTown/scripts.pory"

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 703 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 704 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 705 "data/maps/LittlerootTown/scripts.pory"

# 706 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 707 "data/maps/LittlerootTown/scripts.pory"
	lock
# 708 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 709 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 710 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 711 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 712 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 713 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Common_Movement_WalkInPlaceFasterUp
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_LITTLEROOT_MOM, MAP_LITTLEROOT_TOWN
# 720 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 722 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 723 "data/maps/LittlerootTown/scripts.pory"
	end
# 724 "data/maps/LittlerootTown/scripts.pory"

# 725 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 726 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_LITTLEROOT_MOM
# 727 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 728 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 729 "data/maps/LittlerootTown/scripts.pory"
	release
# 730 "data/maps/LittlerootTown/scripts.pory"
	end
# 731 "data/maps/LittlerootTown/scripts.pory"

# 732 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 733 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 734 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 735 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 736 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 737 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 738 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 739 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 740 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 741 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 742 "data/maps/LittlerootTown/scripts.pory"
	return
# 743 "data/maps/LittlerootTown/scripts.pory"

# 744 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 745 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Wait, {PLAYER}!$"
# 746 "data/maps/LittlerootTown/scripts.pory"

# 747 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 748 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}! {PLAYER}! Did you\n"
# 749 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 750 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 751 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 752 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 753 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!\p"
# 754 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 755 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these Running Shoes.\p"
# 756 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 757 "data/maps/LittlerootTown/scripts.pory"

# 758 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 759 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 760 "data/maps/LittlerootTown/scripts.pory"
	.string "Running Shoes.$"
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 763 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, those shoes came with\n"
# 764 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 765 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 766 "data/maps/LittlerootTown/scripts.pory"
	.string "Running Shoes to run extra-fast!\p"
# 767 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these Running Shoes and race\n"
# 768 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 769 "data/maps/LittlerootTown/scripts.pory"

# 770 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 771 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 772 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 773 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 774 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 775 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 776 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 777 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 778 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 779 "data/maps/LittlerootTown/scripts.pory"

# 780 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 781 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 782 "data/maps/LittlerootTown/scripts.pory"
	.string "and Pokémon.\p"
# 783 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 784 "data/maps/LittlerootTown/scripts.pory"

# 785 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 786 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 787 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 788 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 789 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 790 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 791 "data/maps/LittlerootTown/scripts.pory"

# 792 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 793 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 794 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 795 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 796 "data/maps/LittlerootTown/scripts.pory"

# 797 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 798 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 799 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 800 "data/maps/LittlerootTown/scripts.pory"

# 801 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 802 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 803 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 804 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 805 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 806 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 807 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 808 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 809 "data/maps/LittlerootTown/scripts.pory"

# 810 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 811 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 812 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 813 "data/maps/LittlerootTown/scripts.pory"

# 814 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 815 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 816 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 819 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch: Well, well, {PLAYER}{KUN}!\n"
# 820 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 821 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 822 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 823 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 824 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 825 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 826 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 827 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"

LittlerootTown_MapScripts::
# 830 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MapScript_LittlerootTown_OnTransition
# 831 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MapScript_LittlerootTown_OnFrame
	.byte 0


MapScript_LittlerootTown_OnTransition:
# 835 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 836 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 837 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
	goto_if_eq MapScript_LittlerootTown_OnTransition_2
MapScript_LittlerootTown_OnTransition_1:
# 840 "data/maps/LittlerootTown/scripts.pory"
	goto_if_unset FLAG_RESCUED_BIRCH, MapScript_LittlerootTown_OnTransition_5
MapScript_LittlerootTown_OnTransition_4:
# 844 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq MapScript_LittlerootTown_OnTransition_8
MapScript_LittlerootTown_OnTransition_7:
# 849 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
	goto_if_eq MapScript_LittlerootTown_OnTransition_11
# 850 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
	goto_if_eq MapScript_LittlerootTown_OnTransition_11
MapScript_LittlerootTown_OnTransition_10:
# 855 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
	goto_if_eq MapScript_LittlerootTown_OnTransition_16
MapScript_LittlerootTown_OnTransition_15:
# 859 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
	goto_if_eq MapScript_LittlerootTown_OnTransition_19
MapScript_LittlerootTown_OnTransition_18:
	end

MapScript_LittlerootTown_OnTransition_2:
# 838 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MoveMomToMaysDoor
	goto MapScript_LittlerootTown_OnTransition_1

MapScript_LittlerootTown_OnTransition_5:
# 841 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetTwinPos
	goto MapScript_LittlerootTown_OnTransition_4

MapScript_LittlerootTown_OnTransition_8:
# 845 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
	goto MapScript_LittlerootTown_OnTransition_7

MapScript_LittlerootTown_OnTransition_11:
# 852 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
	goto MapScript_LittlerootTown_OnTransition_10

MapScript_LittlerootTown_OnTransition_16:
# 856 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_MoveRivalFromOldale
	goto MapScript_LittlerootTown_OnTransition_15

MapScript_LittlerootTown_OnTransition_19:
# 860 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_SetRivalLeftForRoute103
	goto MapScript_LittlerootTown_OnTransition_18


MapScript_LittlerootTown_OnFrame:
# 866 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruck
	return


LittlerootTown_EventScript_StepOffTruck::
# 870 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_StepOffTruck_2
# 877 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 878 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
LittlerootTown_EventScript_StepOffTruck_1:
# 880 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_GoInsideWithMom
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_EventScript_StepOffTruck_6
# 885 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 886 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
LittlerootTown_EventScript_StepOffTruck_5:
# 888 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 889 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

LittlerootTown_EventScript_StepOffTruck_2:
# 873 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 874 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
	goto LittlerootTown_EventScript_StepOffTruck_1

LittlerootTown_EventScript_StepOffTruck_6:
# 882 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 883 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
	goto LittlerootTown_EventScript_StepOffTruck_5


Script_LittlerootTown_Event_GoInsideWithMom::
# 894 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 895 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 896 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Event_GoInsideWithMom_Movement_0
# 903 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 904 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_OpenDoor
# 905 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_LITTLEROOT_MOM
# 906 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_1
# 910 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 911 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_CloseDoor
# 912 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 913 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_2
# 920 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 921 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_Intro_Mom_LetsGoInside
# 922 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 923 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_3
# 931 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Event_GoInsideWithMom_Movement_4
# 940 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 941 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_OpenDoor
# 942 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_LITTLEROOT_MOM, Script_LittlerootTown_Event_GoInsideWithMom_Movement_5
# 950 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Script_LittlerootTown_Event_GoInsideWithMom_Movement_6
# 956 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 957 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 958 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 959 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 960 "data/maps/LittlerootTown/scripts.pory"
	call Script_LittlerootTown_Event_CloseDoor
# 961 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 962 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	return


Script_LittlerootTown_Event_OpenDoor:
# 980 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 981 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Event_CloseDoor:
# 986 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 987 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
	return


Script_LittlerootTown_Event_ExamineTownSign::
# 992 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_TownSign, MSGBOX_SIGN
	end


Script_LittlerootTown_Event_ExamineSign_MaysHouse::
# 1002 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Event_ExamineSign_MaysHouse_2
# 1006 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersHouse, MSGBOX_SIGN
Script_LittlerootTown_Event_ExamineSign_MaysHouse_1:
# 1008 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Event_ExamineSign_MaysHouse_2:
# 1004 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsHouse, MSGBOX_SIGN
	goto Script_LittlerootTown_Event_ExamineSign_MaysHouse_1


Script_LittlerootTown_Event_ExamineSign_BrandensHouse::
# 1013 "data/maps/LittlerootTown/scripts.pory"
	lockall
	checkplayergender
# 0 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Script_LittlerootTown_Event_ExamineSign_BrandensHouse_2
# 1017 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_BirchsHouse, MSGBOX_SIGN
Script_LittlerootTown_Event_ExamineSign_BrandensHouse_1:
# 1019 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end

Script_LittlerootTown_Event_ExamineSign_BrandensHouse_2:
# 1015 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_PlayersHouse, MSGBOX_SIGN
	goto Script_LittlerootTown_Event_ExamineSign_BrandensHouse_1


Script_littlerootTown_Event_ExamineLabSign::
# 1032 "data/maps/LittlerootTown/scripts.pory"
	msgbox Text_LittlerootTown_LabSign, MSGBOX_SIGN
	end


# 896 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_0:
# 899 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 900 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 900 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 900 "data/maps/LittlerootTown/scripts.pory"
	delay_16
	step_end

# 906 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_1:
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 913 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_2:
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
	step_end

# 923 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_3:
# 926 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 927 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 928 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

# 931 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_4:
# 934 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 935 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 936 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 937 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
	step_end

# 942 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_5:
# 945 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 946 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 947 "data/maps/LittlerootTown/scripts.pory"
	step_end

# 950 "data/maps/LittlerootTown/scripts.pory"
Script_LittlerootTown_Event_GoInsideWithMom_Movement_6:
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 953 "data/maps/LittlerootTown/scripts.pory"
	walk_up
	step_end

Text_LittlerootTown_Intro_Mom_LetsGoInside::
# 966 "data/maps/LittlerootTown/scripts.pory"
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
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
	.string "“A town that can't be shaded any hue.”$"

Text_LittlerootTown_BirchsHouse:
# 1023 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"

Text_LittlerootTown_PlayersHouse:
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"

Text_LittlerootTown_LabSign:
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
