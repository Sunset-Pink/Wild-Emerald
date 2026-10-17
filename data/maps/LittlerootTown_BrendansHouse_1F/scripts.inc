# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox Text_PlayersHouse_1F_Mom_GoSetTheClock, MSGBOX_DEFAULT
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_ExclamationMark
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, Common_Movement_Delay48
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_ExclamationMark
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, Common_Movement_Delay48
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVALS_HOUSE_1F_RIVAL
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVALS_HOUSE_1F_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return

# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end

LittlerootTown_BrendansHouse_1F_MapScripts::
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MapScript_LittlerootTown_BrendansHouse_1F_OnLoad
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MapScript_LittlerootTown_BrendansHouse_1F_OnTransition
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_BrendansHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, Script_LittlerootTown_BrendansHouse_1F_Event_EnterHouseWhenMovingIn
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 4, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
	.2byte 0


MapScript_LittlerootTown_BrendansHouse_1F_OnLoad:
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
	goto_if_lt MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_2
MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_1:
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_5
MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_4:
	end

MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_2:
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
	goto MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_1

MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_5:
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
	goto MapScript_LittlerootTown_BrendansHouse_1F_OnLoad_4


MapScript_LittlerootTown_BrendansHouse_1F_OnTransition:
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 2, MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_3
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 4, MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_4
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	case 5, MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_5
MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_1:
	end

MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_3:
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
	goto MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_1

MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_4:
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
	goto MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_1

MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_5:
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
	goto MapScript_LittlerootTown_BrendansHouse_1F_OnTransition_1


Script_LittlerootTown_BrendansHouse_1F_Event_EnterHouseWhenMovingIn::
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end


Text_PlayersHouse_1F_Mom_ItsNice:
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: See, {PLAYER}?\n"
	.string "Isn't it nice in here, too?$"

Text_PlayersHouse_1F_Mom_MoversMonAndSetClock:
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's Pokémon do all the work\n"
	.string "of moving us in and cleaning up after.\l"
	.string "This is so convenient!\p"
	.string "{PLAYER}, your room is upstairs.\n"
	.string "Go check it out, dear!\p"
	.string "Dad bought you a new clock to mark\n"
	.string "our move here.\l"
	.string "Don't forget to set it!$"

Text_PlayersHouse_1F_Mom_InterestedInSeeingYourRoom:
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, {PLAYER}?\p"
	.string "Aren't you interested in seeing your\n"
	.string "very own room?$"

Text_PlayersHouse_1F_Mom_GoSetTheClock:
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}.\p"
	.string "Go set the clock in your room, honey.$"

Text_PlayersHouse_1F_Mom_ComeQuickly:
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh! {PLAYER}, {PLAYER}!\n"
	.string "Quick! Come quickly!$"

Text_PlayersHouse_1F_Mom_MaybeDadWillBeOn:
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's Petalburg Gym!\n"
	.string "Maybe Dad will be on!$"

Text_PlayersHouse_1F_Mom_ItsOver:
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
	.string "I think Dad was on, but we missed him.\n"
	.string "Too bad.$"

Text_PlayersHouse_1F_Mom_GoIntroduceYourself:
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
	.string "One of Dad's friends lives in town.\p"
	.string "Prof. Birch is his name.\p"
	.string "He lives right next door, so you should\n"
	.string "go over and introduce yourself.$"

Text_PlayersHouse_1F_Mom_SeeYou:
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: See you, honey!$"

Text_PlayersHouse_1F_Mom_DidYouMeetProfBirch:
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Did you introduce yourself to\n"
	.string "Prof. Birch?$"

Text_PlayersHouse_1F_Mom_YouShouldRest:
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: How are you doing, {PLAYER}?\n"
	.string "You look a little tired.\p"
	.string "I think you should rest a bit.$"

Text_PlayersHouse_1F_Mom_TakeCareHoney:
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Take care, honey!$"

Text_PlayersHouse_1F_Mom_GotDadsBadge:
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh? Did Dad give you that Badge?\p"
	.string "Then here's something from your Mom!$"

Text_PlayersHouse_1F_Mom_DontPushYourself:
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
	.string "You can always come home.\p"
	.string "Go for it, honey!$"

Text_PlayersHouse_1F_Mom_IsThatPokenav:
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: What is that, honey? A PokéNav?\n"
	.string "Someone from DEVON gave it to you?\p"
	.string "Well, honey, how about registering\n"
	.string "your mom?\p"
	.string "… … …$"

Text_PlayersHouse_1F_DexNav_RegisterMom:
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered Mom\n"
	.string "in the PokéNav$"

Text_PlayersHouse_1F_Vigoroth_Fugi:
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"

Text_PlayersHouse_1F_Vigoroth_Huggoh:
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"

Text_PlayersHouse_1F_RunningShoesManual:
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
	.string "Running Shoes.\p"
	.string "“Press the B Button to run while\n"
	.string "wearing your Rrunning Shoes.\p"
	.string "“Lace up your Running Shoes and hit\n"
	.string "the road running!”$"

Text_PlayersHouse_1F_Dad_BrineyTicket_TicketFrom:
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm?\p"
	.string "Hey, it's {PLAYER}!\p"
	.string "It's been a while since I saw you,\n"
	.string "but you look…stronger, somehow.\p"
	.string "That's the impression I get.\n"
	.string "But your old man hasn't given up yet!\p"
	.string "Oh, yes, I have something for you.\n"
	.string "This came to you from someone named\l"
	.string "Mr. Briney.$"

Text_PlayersHouse_1F_Dad_BrineyTicket_Ports:
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm, a Ticket for a ferry?\p"
	.string "If I recall, there are ferry ports in\n"
	.string "Slateport and Lilycove.$"

Text_PlayersHouse_1F_Dad_BetterGetBackToGym:
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to Petalburg Gym.\p"
	.string "Mom, thanks for looking after the house\n"
	.string "while I'm away.$"

Text_PlayersHouse_1F_Mom_DadShouldStayLonger:
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: That Dad of yours…\p"
	.string "He comes home for the first time in a\n"
	.string "while, but all he talks about is Pokémon.\p"
	.string "He should relax and stay a little longer.$"

Text_PlayersHouse_1F_Mom_LatiEvent_BreakingStory:
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Is that a breaking news story?$"

Text_PlayersHouse_1F_TV_LatiEvent_News:
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
	.string "news flash!\p"
	.string "In various Hoenn locales, there have\n"
	.string "been reports of a BZZT…colored\l"
	.string "Pokémon in flight.\p"
	.string "The identity of this Pokémon is\n"
	.string "currently unknown.\p"
	.string "We now return you to the regular\n"
	.string "movie program.$"

Text_PlayersHouse_1F_TV_ReportFromPetalburg:
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Interviewer: …We brought you this\n"
	.string "report from in front of Petalburg Gym.$"

Text_PlayersHouse_1F_TV_TwoMenDancingMovie:
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
	.string "Two men are dancing on a big piano\n"
	.string "keyboard.\p"
	.string "Better get going!$"

Text_PlayersHouse_1F_Mom_LatiEvent_WhatColor:
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}, did you catch that?\p"
	.string "What color did the announcer say\n"
	.string "that Pokémon was?$"

Text_PlayersHouse_1F_Mon_LatiEvent_UnknownPokemon:
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, isn't that something!\n"
	.string "There are still unknown Pokémon.$"
