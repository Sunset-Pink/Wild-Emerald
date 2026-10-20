# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 8, 2
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou:
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who… Who are you?\p"
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\n"
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\p"
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So your move was today.\p"
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Um… I'm May.\n"
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Glad to meet you!\p"
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I…\n"
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "with Pokémon all over the world.\p"
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "my dad, Prof. Birch.\p"
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Eheheh…\p"
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild Pokémon!\p"
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokémon fully restored!\n"
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items ready, and…$"
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "You…\p"
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who are you?\p"
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Moved in next door, right?\p"
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Dad, Prof. Birch, said that our new\n"
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "next-door neighbor is a Gym Leader's\l"
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "My name's Brenda.\n"
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a Pokémon?\p"
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild Pokémon.\p"
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Some other time, okay?$"
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokémon fully restored…\n"
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items all packed, and…$"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s Poké Ball!\p"
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my Pokédex.\p"
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of Pokémon that\n"
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?$"
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: I wonder where I should go catch\n"
# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?\p"
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brenda: Hey, it's {PLAYER}.\p"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my Pokédex.\p"
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many Pokémon that\n"
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this Pokédex out gives me\n"
# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brenda: I'm having a hard time deciding\n"
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch Pokémon next.\p"
# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 395 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching Pokémon, I can pitch you a\l"
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"
