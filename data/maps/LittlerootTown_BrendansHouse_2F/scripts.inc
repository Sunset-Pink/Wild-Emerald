# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts::
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVALS_HOUSE_2F_RIVAL, 0, 2
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVALS_HOUSE_2F_RIVAL, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast(ITEM_GRIMMITE)
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_2F_RIVAL
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_ExclamationMark
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, Common_Movement_Delay48
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_2F_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mom: {PLAYER}, how do you like your\n"
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Pokémon movers are so convenient!\p"
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{REGION} region map.$"
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"

Script_PlayerHouse_2F_Interact_Notebook::
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_Notebook_Codes
# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


Script_PlayerHouse_2F_Interact_GameCube::
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_EnterCode, MSGBOX_YESNO
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Script_PlayerHouse_2F_Interact_GameCube_2
Script_PlayerHouse_2F_Interact_GameCube_1:
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special EnterCode
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special GetCodeFeedback
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	switch VAR_RESULT
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 0, Script_PlayerHouse_2F_Interact_GameCube_6
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 1, Script_PlayerHouse_2F_Interact_GameCube_7
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 2, Script_PlayerHouse_2F_Interact_GameCube_8
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 3, Script_PlayerHouse_2F_Interact_GameCube_9
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 4, Script_PlayerHouse_2F_Interact_GameCube_10
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 5, Script_PlayerHouse_2F_Interact_GameCube_11
# 348 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 6, Script_PlayerHouse_2F_Interact_GameCube_12
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 7, Script_PlayerHouse_2F_Interact_GameCube_13
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	case 8, Script_PlayerHouse_2F_Interact_GameCube_14
Script_PlayerHouse_2F_Interact_GameCube_4:
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

Script_PlayerHouse_2F_Interact_GameCube_2:
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto Script_PlayerHouse_2F_Interact_GameCube_Exit
	goto Script_PlayerHouse_2F_Interact_GameCube_1

Script_PlayerHouse_2F_Interact_GameCube_6:
# 337 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_FailedCode
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_7:
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_DexAll
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_8:
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_CaughtAll
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_9:
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_EzCatch
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_10:
# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_MegaStone
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_11:
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_ShinyStarters
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_12:
# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_MaxMoney
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_13:
# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_ShinyRoamer
	goto Script_PlayerHouse_2F_Interact_GameCube_4

Script_PlayerHouse_2F_Interact_GameCube_14:
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Script_PlayerHouse_2F_Interact_GameCube_MonoStarters
	goto Script_PlayerHouse_2F_Interact_GameCube_4


Script_PlayerHouse_2F_Interact_GameCube_FailedCode::
# 360 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_FailedCode, MSGBOX_DEFAULT
	end


Script_PlayerHouse_2F_Interact_GameCube_DexAll::
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_DEXALL, Script_PlayerHouse_2F_Interact_GameCube_DexAll_2
# 369 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_DexAll_Disabled
Script_PlayerHouse_2F_Interact_GameCube_DexAll_1:
	return

Script_PlayerHouse_2F_Interact_GameCube_DexAll_2:
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_DexAll_Enabled
	goto Script_PlayerHouse_2F_Interact_GameCube_DexAll_1


Script_PlayerHouse_2F_Interact_GameCube_CaughtAll::
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_CatchAll_Enabled
	return


Script_PlayerHouse_2F_Interact_GameCube_EzCatch::
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_EZ_CATCH, Script_PlayerHouse_2F_Interact_GameCube_EzCatch_2
# 385 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_EzCatch_Disabled
Script_PlayerHouse_2F_Interact_GameCube_EzCatch_1:
	return

Script_PlayerHouse_2F_Interact_GameCube_EzCatch_2:
# 383 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_EzCatch_Enabled
	goto Script_PlayerHouse_2F_Interact_GameCube_EzCatch_1


Script_PlayerHouse_2F_Interact_GameCube_MegaStone::
# 391 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 392 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_VENUSAURITE
# 393 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CHARIZARDITE_X
# 394 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CHARIZARDITE_Y
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BLASTOISINITE
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BEEDRILLITE
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_PIDGEOTITE
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ALAKAZITE
# 399 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SLOWBRONITE
# 400 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GENGARITE
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_KANGASKHANITE
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_PINSIRITE
# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GYARADOSITE
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AERODACTYLITE
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEWTWONITE_X
# 406 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEWTWONITE_Y
# 407 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AMPHAROSITE
# 408 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_STEELIXITE
# 409 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SCIZORITE
# 410 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_HERACRONITE
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_HOUNDOOMINITE
# 412 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_TYRANITARITE
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SCEPTILITE
# 414 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BLAZIKENITE
# 415 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SWAMPERTITE
# 416 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GARDEVOIRITE
# 417 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SABLENITE
# 418 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MAWILITE
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AGGRONITE
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEDICHAMITE
# 421 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MANECTITE
# 422 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SHARPEDONITE
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CAMERUPTITE
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ALTARIANITE
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BANETTITE
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ABSOLITE
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GLALITITE
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SALAMENCITE
# 429 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_METAGROSSITE
# 430 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LATIASITE
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LATIOSITE
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LOPUNNITE
# 433 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GARCHOMPITE
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LUCARIONITE
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ABOMASITE
# 436 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GALLADITE
# 437 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_AUDINITE
# 438 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DIANCITE
# 439 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LUXRITE
# 440 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_TORTERRITE
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_EMPOLEONITE_O
# 442 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_EMPOLEONITE_D
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_INFERNAPITE
# 444 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_KINGLERITE
# 445 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BUTTERFRITE
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MACHAMPITE
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LAPRASITE
# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SNORLAXITE
# 449 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GARBODORITE
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ORBEETLITE
# 451 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DREDNAWITE
# 452 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_COALOSSITE
# 453 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_APPLITE
# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SANDACONDITE
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_TOXTRICITITE
# 456 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CENTISKITE
# 457 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GRIMMITE
# 458 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_COPPERAJITE
# 459 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SLAKITE
# 460 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ROSERADITE
# 461 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DUSKNOIRITE
# 462 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CLEFABLITE
# 463 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_VICTREEBELITE
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_STARMINITE
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DRAGONINITE
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEGANIUMITE
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_FERALIGITE
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SKARMORITE
# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_FROSLASSITE
# 470 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_EMBOARITE
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_EXCADRITE
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SCOLIPITE
# 473 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SCRAFTINITE
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_EELEKTROSSITE
# 475 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CHANDELURITE
# 476 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CHESNAUGHTITE
# 477 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DELPHOXITE
# 478 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GRENINJITE
# 479 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_PYROARITE
# 480 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_FLOETTITE
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MALAMARITE
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BARBARACITE
# 483 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DRAGALGITE
# 484 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_HAWLUCHANITE
# 485 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ZYGARDITE
# 486 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DRAMPANITE
# 487 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_FALINKSITE
# 488 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_HEATRANITE
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_DARKRANITE
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ZERAORITE
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_RAICHUNITE_X
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_RAICHUNITE_Y
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CHIMECHITE
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_ABSOLITE_Z
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_STARAPTITE
# 496 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GARCHOMPITE_Z
# 497 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_LUCARIONITE_Z
# 498 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GOLURKITE
# 499 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MEOWSTICITE
# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_CRABOMINITE
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GOLISOPITE
# 502 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_MAGEARNITE
# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_SCOVILLAINITE
# 504 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_BAXCALIBRITE
# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_TATSUGIRINITE
# 506 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	giveitemfast ITEM_GLIMMORANITE
# 507 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_MegaStones
	return


Script_PlayerHouse_2F_Interact_GameCube_ShinyStarters::
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, Script_PlayerHouse_2F_Interact_GameCube_ShinyStarters_2
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_ShinyStarter_Disabled
Script_PlayerHouse_2F_Interact_GameCube_ShinyStarters_1:
	return

Script_PlayerHouse_2F_Interact_GameCube_ShinyStarters_2:
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_ShinyStarter_Enabled
	goto Script_PlayerHouse_2F_Interact_GameCube_ShinyStarters_1


Script_PlayerHouse_2F_Interact_GameCube_MaxMoney::
# 522 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_MaxMoney
	return


Script_PlayerHouse_2F_Interact_GameCube_ShinyRoamer::
# 528 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 529 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_SHINY_ROAMERS, Script_PlayerHouse_2F_Interact_GameCube_ShinyRoamer_2
# 532 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_ShinyRoamer_Disabled
Script_PlayerHouse_2F_Interact_GameCube_ShinyRoamer_1:
	return

Script_PlayerHouse_2F_Interact_GameCube_ShinyRoamer_2:
# 530 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_ShinyRoamer_Enabled
	goto Script_PlayerHouse_2F_Interact_GameCube_ShinyRoamer_1


Script_PlayerHouse_2F_Interact_GameCube_MonoStarters::
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_SuccessCode
# 539 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, Script_PlayerHouse_2F_Interact_GameCube_MonoStarters_2
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_MonoStarter_Disabled
Script_PlayerHouse_2F_Interact_GameCube_MonoStarters_1:
	return

Script_PlayerHouse_2F_Interact_GameCube_MonoStarters_2:
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox Text_PlayerHouse_2F_GameCube_MonoStarter_Enabled
	goto Script_PlayerHouse_2F_Interact_GameCube_MonoStarters_1


Script_PlayerHouse_2F_Interact_GameCube_Exit::
# 548 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end


Text_PlayerHouse_2F_Notebook_Unwrapped:
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} unwraped a new Quest book.\n"
	.string "At least its better then a new clock…\l"
	.string "Access your Quests with the L Menu.\l$"

Text_PlayerHouse_2F_Notebook_Codes:
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
	.string "Cheat Name - Code 1/Code 2\l"
	.string "All DexNav - DexAll/Dxa\l"
	.string "Catch All - CaughtAll/Cal\l"
	.string "Ez Catch - EzCatch/Ezc\l"
	.string "Shiny Starter - ShinyS/Shs\l"
	.string "Max Money - MaxMoney/Mmy\l"
	.string "Shiny Roamers - ShinyR/Shr\l"
	.string "Monotype Starters - Mono\l$"

Text_PlayerHouse_2F_GameCube_EnterCode:
# 552 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "Enter a cheat code?$"

Text_PlayerHouse_2F_GameCube_FailedCode:
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheat code failed.$"

Text_PlayerHouse_2F_GameCube_SuccessCode:
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Cheat code succeeded.$"

Text_PlayerHouse_2F_GameCube_DexAll_Enabled:
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "DexAll cheat enabled.$"

Text_PlayerHouse_2F_GameCube_DexAll_Disabled:
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "DexAll cheat disabled.$"

Text_PlayerHouse_2F_GameCube_CatchAll_Enabled:
# 573 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "CaughtAll cheat enabled.$"

Text_PlayerHouse_2F_GameCube_MaxMoney:
# 577 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Money set to max amount.$"

Text_PlayerHouse_2F_GameCube_EzCatch_Enabled:
# 581 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "EZCatch cheat enabled.$"

Text_PlayerHouse_2F_GameCube_EzCatch_Disabled:
# 585 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "EZCatch cheat disabled.$"

Text_PlayerHouse_2F_GameCube_MegaStones:
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "All Mega Stones given.$"

Text_PlayerHouse_2F_GameCube_ShinyStarter_Enabled:
# 593 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyStarter cheat enabled.$"

Text_PlayerHouse_2F_GameCube_ShinyStarter_Disabled:
# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyStarter cheat disabled.$"

Text_PlayerHouse_2F_GameCube_ShinyRoamer_Enabled:
# 601 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyRoamer cheat enabled.$"

Text_PlayerHouse_2F_GameCube_ShinyRoamer_Disabled:
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "ShinyRoamer cheat disabled.$"

Text_PlayerHouse_2F_GameCube_MonoStarter_Enabled:
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Monotype starter cheat enabled.$"

Text_PlayerHouse_2F_GameCube_MonoStarter_Disabled:
# 613 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Monotype starter cheat disabled.$"
