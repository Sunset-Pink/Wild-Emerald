LittlerootTown_ProfessorBirchsLab_MapScripts::
# 10 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Script_LittlerootTown_ProfessorBirchsLab_OnTransition
# 11 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 14 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 12 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter
	.2byte 0

LittlerootTown_ProfessorBirchsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 15 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent
# 16 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	map_script_2 VAR_BIRCH_LAB_STATE, 4, LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent
	.2byte 0


Script_LittlerootTown_ProfessorBirchsLab_OnTransition:
# 21 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 22 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
	end


# 27 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 28 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 29 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 30 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 31 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 32 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 33 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 34 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	addobject LOCALID_BIRCHS_LAB_RIVAL
# 35 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 36 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 37 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 38 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 39 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 40 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 41 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 42 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 43 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 44 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
# 45 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 46 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 48 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon, MSGBOX_YESNO
# 49 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter
# 50 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 51 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 52 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 53 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 54 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 55 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 56 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival
# 57 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 59 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 60 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival, MSGBOX_YESNO
# 61 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 62 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 63 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 64 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 65 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 66 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou, MSGBOX_DEFAULT
# 67 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_101_BOY
# 68 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 3
# 69 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 70 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 71 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 72 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 73 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay, MSGBOX_YESNO
# 74 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival
# 75 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival
# 76 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 77 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 78 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 79 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 80 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex
# 81 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 82 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex
# 83 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 84 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 85 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 86 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 87 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 88 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 89 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 90 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 91 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 92 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 93 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 94 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 95 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 96 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 97 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 98 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 99 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 100 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 102 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 103 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay_16
# 104 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 105 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 106 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 107 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 108 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 109 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 110 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 111 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_up
# 113 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 114 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 115 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 116 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 117 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 118 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 119 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 120 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 121 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 122 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_up
# 123 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_left
# 124 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_down
# 125 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 126 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 127 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 128 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 129 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 130 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 3, LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter
# 131 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_BIRCH_AIDE_MET, LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet
# 132 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork, MSGBOX_DEFAULT
# 133 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_BIRCH_AIDE_MET
# 134 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 135 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 136 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 137 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 138 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork, MSGBOX_DEFAULT
# 139 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 140 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 141 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 142 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 143 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo, MSGBOX_DEFAULT
# 144 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 145 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 146 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 147 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 148 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 149 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 150 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 151 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HAS_MATCH_CALL, LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 152 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_ENABLE_PROF_BIRCH_MATCH_CALL, EventScript_RegisterProfBirch
# 153 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister
# 154 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 155 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 156 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 157 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2, MSGBOX_DEFAULT
# 158 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 159 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 160 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 161 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 162 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380, ProfBirch_EventScript_RatePokedexOrRegister
# 163 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_eq VAR_BIRCH_LAB_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait
# 164 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome, MSGBOX_DEFAULT
# 165 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 166 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 167 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 168 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
EventScript_RegisterProfBirch::
# 169 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 170 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 171 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 172 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 173 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 174 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 175 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 176 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	delay 30
# 177 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 178 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 179 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 180 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 181 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 182 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 183 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 184 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 185 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 186 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	closemessage
# 187 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_BIRCHS_LAB_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 188 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 189 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 190 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmovement 0
# 191 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 192 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 193 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 194 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 195 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 196 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 197 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 198 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 199 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
# 200 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 201 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 202 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 203 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 204 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 205 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 206 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 207 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 0
# 208 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 209 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 210 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 211 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 212 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 213 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 214 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 215 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_RESULT, 1
# 216 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 217 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 218 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 219 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 220 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 221 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
# 222 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 223 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 224 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 225 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 226 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 227 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 228 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 229 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 230 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 231 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 232 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 233 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 234 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 235 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 236 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 237 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 238 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 239 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 240 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 241 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 242 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_down
# 243 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	walk_in_place_faster_left
# 244 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	step_end
# 245 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 246 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 247 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lock
# 248 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	faceplayer
# 249 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 250 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 251 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 252 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 253 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 254 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 255 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 256 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 257 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 258 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 259 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 260 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 261 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 262 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 263 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 264 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 265 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 266 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 267 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 268 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 269 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 270 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 271 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 272 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 273 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 274 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 275 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 276 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 277 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 278 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 279 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 280 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 281 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 282 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 283 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 284 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 285 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 286 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 288 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 289 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 290 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 291 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 292 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 293 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 294 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	checkplayergender
# 295 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 296 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 297 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	release
# 298 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	end
# 299 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 300 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 301 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 302 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 303 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 304 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 305 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 306 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	return
# 307 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 308 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 309 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hunh? Prof. Birch?\p"
# 310 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof's away on fieldwork.\n"
# 311 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 312 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 313 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It is to study things in the natural\n"
# 314 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 315 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "instead of a laboratory.\p"
# 316 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 317 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 318 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 319 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 320 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 321 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 322 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof isn't one for doing desk work.\n"
# 323 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "He's the type of person who would\l"
# 324 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "rather go outside and experience\l"
# 325 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "things than read about them here.$"
# 326 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 327 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 328 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch is studying the habitats\n"
# 329 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and distribution of Pokémon.\p"
# 330 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "The Prof enjoys {RIVAL}'s help, too.\n"
# 331 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There's a lot of love there.$"
# 332 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 333 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 334 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: So, {PLAYER}{KUN}.\p"
# 335 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard so much about you from\n"
# 336 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your father.\p"
# 337 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 338 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "own Pokémon yet.\p"
# 339 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 340 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 341 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 342 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in your veins after all!\p"
# 343 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 344 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'd like you to have the Pokémon you\l"
# 345 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "used earlier.\p"
# 346 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 347 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 348 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 349 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: While you're at it, why not\n"
# 350 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 351 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 352 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 353 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: If you work at Pokémon\n"
# 354 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 355 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "an extremely good Trainer.\p"
# 356 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 357 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon while helping me out.\p"
# 358 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 359 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 360 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 361 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 362 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Great!\n"
# 363 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 364 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 365 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "means to be a Trainer.$"
# 366 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 367 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 368 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, don't be that way.\n"
# 369 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You should go meet my kid.$"
# 370 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 371 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 372 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: {RIVAL}?\n"
# 373 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gone home, I think.\p"
# 374 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 375 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 376 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If you or your Pokémon get tired,\n"
# 377 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "you should get some rest at home.$"
# 378 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 379 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 380 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Oh, hi, {PLAYER}{KUN}!\p"
# 381 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 382 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 383 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 384 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a long time.\p"
# 385 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 386 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a Trainer already.\p"
# 387 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 388 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "research, but I think you should have\l"
# 389 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "this PokéDex.$"
# 390 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 391 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 392 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} received the PokéDex!$"
# 393 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 394 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 395 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: The PokéDex is a high-tech\n"
# 396 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 397 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "of any Pokémon you meet or catch.\p"
# 398 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 399 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "with it.\p"
# 400 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Whenever my kid catches a rare Pokémon\n"
# 401 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and records its data in the PokéDex,\l"
# 402 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 403 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 404 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 405 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 406 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Countless Pokémon\n"
# 407 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "await you!\p"
# 408 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 409 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and do fieldwork again!$"
# 410 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 411 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 412 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, wow, {PLAYER}{KUN}!\n"
# 413 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You got a PokéDex, too!\p"
# 414 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "That's great! Just like me!\n"
# 415 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I've got something for you, too!$"
# 416 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 417 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 418 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: It's fun if you can get a lot of\n"
# 419 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon!\p"
# 420 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 421 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "because I want different Pokémon.\p"
# 422 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cute Pokémon, I'll catch\n"
# 423 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "them with POKé BALLS!$"
# 424 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 425 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 426 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Oh? Your Bag's full.$"
# 427 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 428 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 429 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: I wonder where I should go look\n"
# 430 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for Pokémon next?$"
# 431 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 432 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 433 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Huh…\n"
# 434 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "So you got a PokéDex, too.\p"
# 435 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Well then, here.\n"
# 436 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll give you these.$"
# 437 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 438 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 439 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: You know it's more fun to\n"
# 440 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "have a whole bunch of Pokémon.\p"
# 441 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 442 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "to find different Pokémon.\p"
# 443 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "If I find any cool Pokémon, you bet\n"
# 444 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 445 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 446 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 447 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Hey, your Bag's full.$"
# 448 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 449 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 450 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Where should I look for\n"
# 451 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon next…$"
# 452 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 453 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 454 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: But listen.\n"
# 455 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've become the Champion,\l"
# 456 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 457 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 458 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 459 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 460 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 461 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 462 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 463 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: I think I'll take a short break\n"
# 464 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "from fieldwork.\p"
# 465 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I think I'll help the Prof here for\n"
# 466 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "a while.$"
# 467 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 468 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 469 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: For the time being,\n"
# 470 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 471 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'll be helping out the Prof here\n"
# 472 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "for a while.$"
# 473 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 474 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 475 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Prof. Birch: Listen, {PLAYER}{KUN}.\n"
# 476 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You've completed the Hoenn PokéDex,\l"
# 477 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "but your Pokémon journey isn't over.\p"
# 478 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "There is no end to the road\n"
# 479 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that is Pokémon.\p"
# 480 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 481 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "that's waiting for you!$"
# 482 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 483 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 484 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You received the promised Pokémon.\n"
# 485 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Better leave the others alone.$"
# 486 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 487 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 488 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: {PLAYER}{KUN}, after this…\n"
# 489 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "What are you going to do?\p"
# 490 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Are you going to keep battling\n"
# 491 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "and sharpening your skills?\p"
# 492 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Or are you going to try filling\n"
# 493 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the National PokéDex?\p"
# 494 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "I'm staying here to help the Prof.$"
# 495 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 496 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 497 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Rather than collecting\n"
# 498 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Pokémon, I prefer slowly and \l"
# 499 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 500 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 501 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 502 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\n"
# 503 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone to that place,\l"
# 504 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"
# 505 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"

# 506 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 507 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Brendan: Hey, {PLAYER}!\n"
# 508 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 509 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "the Battle Frontier?$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch::
# 515 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 518 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOOK_LEFT_GRASS_STARTER, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_4
Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_1:
# 525 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_2:
# 522 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_3:
# 520 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOOK_RIGHT_WATER_STARTER, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_2
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_4:
# 519 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_TOOK_MIDDLE_FIRE_STARTER, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_3
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter::
# 530 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_2
# 556 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_ChangeGeneration
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_16, 0
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_17, 1
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_18, 2
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_19, 3
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_20, 4
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_21, 5
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_22, 6
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_23, 7
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_24, 8
# 567 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_15, MULTI_B_PRESSED
# 569 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 571 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_9
Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_8:
# 574 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing
Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_1:
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_2:
# 531 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Birch_ChangeType
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_0, 0
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_1, 1
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_2, 2
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_3, 3
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_4, 4
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_5, 5
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_6, 6
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_7, 7
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_8, 8
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_9, 9
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_10, 10
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_11, 11
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_12, 12
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_13, 13
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_14, 14
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultipush Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_15, MULTI_B_PRESSED
# 549 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, NULL
# 551 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_6
Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_5:
# 554 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_6:
# 552 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_MONOTYPE_STARTER, VAR_RESULT
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_5

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_9:
# 572 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	copyvar VAR_STARTER_GEN, VAR_RESULT
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_8


Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing::
# 580 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_GEN
# 582 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_3
# 584 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_4
# 586 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_5
# 588 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_6
# 590 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_7
# 592 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_8
# 594 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_9
# 596 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_10
# 598 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_11
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_9
Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1:
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_3:
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_0
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_4:
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_1
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_5:
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_2
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_6:
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_3
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_7:
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_4
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_8:
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_5
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_9:
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_6
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_10:
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_7
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_11:
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_8
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing::
# 607 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_MONOTYPE_STARTER
# 608 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_3
# 610 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_4
# 612 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_5
# 614 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_6
# 616 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_7
# 618 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_8
# 620 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_9
# 622 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_10
# 624 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_11
# 626 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_12
# 628 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_13
# 630 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 11, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_14
# 632 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 12, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_15
# 634 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 13, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_16
# 636 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 14, Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_17
# 639 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_13
Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1:
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_3:
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_0
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_4:
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_1
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_5:
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_2
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_6:
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_3
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_7:
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_4
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_8:
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_5
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_9:
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_6
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_10:
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_7
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_11:
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_8
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_12:
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_9
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_13:
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_10
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_14:
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_11
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_15:
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_12
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_16:
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_13
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_17:
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_14
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_1


Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide::
# 661 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_USE_MONOTYPE_STARTERS, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1
# 726 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_STARTER_GEN
# 728 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_22
# 730 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_23
# 736 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_24
# 742 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_25
# 748 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_26
# 754 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_27
# 756 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_28
# 758 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_29
# 760 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_30
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_1:
# 662 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	switch VAR_MONOTYPE_STARTER
# 664 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 0, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_5
# 670 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 1, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_6
# 672 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 2, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_7
# 678 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 3, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_8
# 680 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 4, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_9
# 686 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 5, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_10
# 692 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 6, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_11
# 698 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 7, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_12
# 700 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 8, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_13
# 706 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 9, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_14
# 708 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 10, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_15
# 710 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 11, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_16
# 712 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 12, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_17
# 714 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 13, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_18
# 716 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	case 14, Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_19
# 723 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoNormal
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_5:
# 665 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_31
# 668 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFighting_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_6:
# 671 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFlying
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_7:
# 673 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_34
# 676 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoPoison_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_8:
# 679 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoGround
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_9:
# 681 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_37
# 684 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoRock_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_10:
# 687 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_40
# 690 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoBug_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_11:
# 693 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_43
# 696 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoGhost_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_12:
# 699 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoSteel
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_13:
# 701 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_46
# 704 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoElectric_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_14:
# 707 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoPsychic
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_15:
# 709 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoIce
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_16:
# 711 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoDragon
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_17:
# 713 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoDark
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_18:
# 715 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoNormal
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_19:
# 717 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_49
# 720 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFairy_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_22:
# 729 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen1
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_23:
# 731 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_52
# 734 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen2_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_24:
# 737 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_55
# 740 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen3_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_25:
# 743 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_58
# 746 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen4_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_26:
# 749 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_DIFFICULTY, DIFFICULTY_VANILLA
	goto_if_eq Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_61
# 752 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen5_Updated
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_27:
# 755 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen6
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_28:
# 757 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen7
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_29:
# 759 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen8
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_30:
# 761 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen9
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_31:
# 666 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFighting
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_34:
# 674 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoPoison
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_37:
# 682 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoRock
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_40:
# 688 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoBug
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_43:
# 694 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoGhost
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_46:
# 702 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoElectric
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_49:
# 718 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFairy
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_52:
# 732 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen2
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_55:
# 738 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen3
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_58:
# 744 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen4
	return

Text_LittlerootTown_ProfessorBirchsLab_Interact_Aide_61:
# 750 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen5
	return


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start::
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_Text_0, MSGBOX_YESNO
# 911 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_2
# 919 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_GiveStarter
# 921 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_Text_2
# 923 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitfanfare
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_2:
# 912 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_Text_1, MSGBOX_DEFAULT
# 914 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End::
# 929 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_2
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_Text_1, MSGBOX_YESNO
# 938 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 939 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_8
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_7:
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_Text_2
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_1:
# 944 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_2:
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_Text_0, MSGBOX_YESNO
# 931 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	hidemonpic
# 932 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_5
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_5:
# 933 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 934 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_1

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_8:
# 940 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_7


Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_GiveStarter::
# 948 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_set FLAG_SHINY_STARTERS, Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_GiveStarter_2
# 951 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5
Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_GiveStarter_1:
	return

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_GiveStarter_2:
# 949 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	givemon VAR_0x8006, 5, shinyMode = TRUE
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_GiveStarter_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_LeftBall::
# 964 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 965 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_LeftBall_2
# 973 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Examine_PokeBalls, MSGBOX_DEFAULT
Script_LittlerootTown_ProfessorBirchsLab_Interact_LeftBall_1:
# 975 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_LeftBall_2:
# 966 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 0
# 967 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 968 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start
# 969 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_LEFT_STARTER
# 970 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_TOOK_LEFT_GRASS_STARTER
# 971 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_LeftBall_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_MiddleBall::
# 981 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 982 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_MiddleBall_2
# 990 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Examine_PokeBalls
Script_LittlerootTown_ProfessorBirchsLab_Interact_MiddleBall_1:
# 992 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_MiddleBall_2:
# 983 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 1
# 984 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 985 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start
# 986 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_MIDDLE_STARTER
# 987 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_TOOK_MIDDLE_FIRE_STARTER
# 988 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_MiddleBall_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_RightBall::
# 998 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 999 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Script_LittlerootTown_ProfessorBirchsLab_Interact_RightBall_2
# 1007 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Examine_PokeBalls
Script_LittlerootTown_ProfessorBirchsLab_Interact_RightBall_1:
# 1009 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end

Script_LittlerootTown_ProfessorBirchsLab_Interact_RightBall_2:
# 1000 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	bufferstarterinfo STR_VAR_1, 2
# 1001 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	showmonpic VAR_0x8006, 10, 3
# 1002 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start
# 1003 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	removeobject LOCALID_BIRCHS_LAB_RIGHT_STARTER
# 1004 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	setflag FLAG_TOOK_RIGHT_WATER_STARTER
# 1005 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	call Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End
	goto Script_LittlerootTown_ProfessorBirchsLab_Interact_RightBall_1


Script_LittlerootTown_ProfessorBirchsLab_Interact_ProfessorsPC::
# 1016 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittleRootTown_ProfessorBirchsLab_Examine_ProfessorsPC, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_SeriousLookingMachine::
# 1028 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Examine_SeriousLookingMachine, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Bookcase::
# 1040 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfressorBirchsLab_Examine_Bookcase, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Books::
# 1051 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	msgbox Text_LittlerootTown_ProfessorBirchsLab_Examine_Books, MSGBOX_SIGN
	end


Script_LittlerootTown_ProfessorBirchsLab_NavCall_Scott_AboardSSTidal::
# 1062 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	lockall
# 1063 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	pokenavcall Text_LittlerootTown_ProfessorBirchsLab_Scott_AboardSSTidal
# 1064 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	waitmessage
# 1065 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 1066 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	releaseall
	end


Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_0:
# 532 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Fighting$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_1:
# 533 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Flying$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_2:
# 534 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Poison$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_3:
# 535 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ground$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_4:
# 536 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Rock$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_5:
# 537 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Bug$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_6:
# 538 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ghost$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_7:
# 539 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Steel$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_8:
# 540 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Electric$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_9:
# 541 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Psychic$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_10:
# 542 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Ice$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_11:
# 543 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Dragon$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_12:
# 544 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Dark$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_13:
# 545 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Normal$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_14:
# 546 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Fairy$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_15:
# 547 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Cancel$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_16:
# 558 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 1$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_17:
# 559 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 2$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_18:
# 560 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 3$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_19:
# 561 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 4$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_20:
# 562 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 5$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_21:
# 563 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 6$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_22:
# 564 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 7$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_23:
# 565 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 8$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_Starter_Text_24:
# 566 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Gen 9$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_0:
# 583 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 1.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_1:
# 585 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 2.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_2:
# 587 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 3.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_3:
# 589 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 4.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_4:
# 591 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 5.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_5:
# 593 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 6.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_6:
# 595 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 7.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_7:
# 597 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 8.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_8:
# 599 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing starters for Gen 9.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayGenShowing_Text_9:
# 601 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Now showing starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_0:
# 609 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Fighting-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_1:
# 611 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Flying-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_2:
# 613 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Poison-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_3:
# 615 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Ground-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_4:
# 617 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Rock-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_5:
# 619 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Bug-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_6:
# 621 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Ghost-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_7:
# 623 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Steel-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_8:
# 625 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Electric-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_9:
# 627 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Psychic-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_10:
# 629 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Ice-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_11:
# 631 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Dragon-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_12:
# 633 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Dark-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_13:
# 635 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Normal-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Birch_SayTypeShowing_Text_14:
# 637 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Showing Fairy-type starters.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_Text_0:
# 910 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_Text_1:
# 913 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "You did not choose this Pokémon.$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_Start_Text_2:
# 922 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "{PLAYER} recieved the {STR_VAR_1}!$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_Text_0:
# 930 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give a nickname?$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_Text_1:
# 937 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Give a nicname?$"

Script_LittlerootTown_ProfessorBirchsLab_Interact_Pokeballs_StarterChoice_End_Text_2:
# 942 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Transferred to PC.$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_ChangeGeneration:
# 644 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Which Generation of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Generations as many times as you want.$"

Text_LittlerootTown_ProfessorBirchsLab_Birch_ChangeType:
# 650 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Which Type of Starters would you\n"
	.string "like to see? You can change\l"
	.string "Types as many times as you want.$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen1:
# 767 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Bulbasaur can evolve into a\l"
	.string "Grass/Poison type, and has a Mega\l"
	.string "Evolution. Charmander can evolve into a\l"
	.string "Fire/Flying type, and has 2 Mega\l"
	.string "Evolutions. Squirtle can evolve into a\l"
	.string "Water type, and has a Mega Evolution. I\l"
	.string "wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen2:
# 771 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Chikorita can evolve into a\l"
	.string "Grass type, and has a Mega Evolution.\l"
	.string "Cyndaquil can evolve into Fire type or\l"
	.string "Fire/Ghost type. Totodile can evolve\l"
	.string "into a Water type, and has a Mega\l"
	.string "Evolution. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen2_Updated:
# 775 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Chikorita can evolve into a\l"
	.string "Grass/Fairy type, and has a Mega\l"
	.string "Evolution. Cyndaquil can evolve into\l"
	.string "Fire/Ground type or Fire/Ghost type.\l"
	.string "Totodile can evolve into a Water type,\l"
	.string "and has a Mega Evolution. I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen3:
# 779 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Treecko can evolve into a\l"
	.string "Grass type, and has a Mega Evolution.\l"
	.string "Torchic can evolve into a Fire/Fighting\l"
	.string "type, and has a Mega Evolution. Mudkip\l"
	.string "can evolve into a Water/Ground type,\l"
	.string "and has a Mega Evolution. I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen3_Updated:
# 783 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Treecko can evolve into a\l"
	.string "Grass/Dragon type, and has a Mega\l"
	.string "Evolution. Torchic can evolve into a\l"
	.string "Fire/Fighting type, and has a Mega\l"
	.string "Evolution. Mudkip can evolve into a\l"
	.string "Water/Ground type, and has a Mega\l"
	.string "Evolution. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen4:
# 787 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Turtwig can evolve into a\l"
	.string "Grass/Ground type. Chimchar can evolve\l"
	.string "into a Fire/Fighting type. Piplup can\l"
	.string "evolve into a Water/Steel type. I\l"
	.string "wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen4_Updated:
# 791 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Turtwig can evolve into a\l"
	.string "Grass/Ground type, and has a Mega\l"
	.string "Evolution. Chimchar can evolve into a\l"
	.string "Fire/Fighting type, and has a Mega\l"
	.string "Evolution. Piplup can evolve into a\l"
	.string "Water/Steel type, and has 2 Mega\l"
	.string "Evolutions. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen5:
# 795 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Snivy can evolve into a Grass\l"
	.string "type. Tepig can evolve into a\l"
	.string "Fire/Fighting type, and has a Mega\l"
	.string "Evolution. Oshawott can evolve into a\l"
	.string "Water or a Water/Dark type.I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen5_Updated:
# 799 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Snivy can evolve into a Grass\l"
	.string "type. Tepig can evolve into a\l"
	.string "Fire/Fighting type, and has a Mega\l"
	.string "Evolution. Oshawott can evolve into a\l"
	.string "Water/Steel or a Water/Dark type.I\l"
	.string "wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen6:
# 803 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Chespin can evolve into a\l"
	.string "Grass/Fighting type, and has a Mega\l"
	.string "Evolution. Frennekin can evolve into a\l"
	.string "Fire/Psychic type and has a Mega\l"
	.string "Evolution. Froakie can evolve into a\l"
	.string "Water/Dark type, and has a Mega\l"
	.string "Evolution. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen7:
# 807 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Rowlet can evolve into a\l"
	.string "Grass/Ghost or A Grass/Fighting type.\l"
	.string "Litten can evolve into a Fire/Dark\l"
	.string "type. Popplio can evolve into a\l"
	.string "Water/Fairy type. I wonder which you\l"
	.string "will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen8:
# 811 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Grooky can evolve into a\l"
	.string "Grass type. Scorbunny can evolve into a\l"
	.string "Fire type. Sobble can evolve into a\l"
	.string "Water type. I wonder which you will\l"
	.string "chooce?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_Gen9:
# 815 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Sprigatito can evovle into a\l"
	.string "Grass/Dark type. Fuecoco can evolve\l"
	.string "into a Fire/Ghost type. Quaxly can\l"
	.string "evolve into a Water/Fighting type. I\l"
	.string "wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFighting:
# 819 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Mankey can evolve into a\l"
	.string "Fighting/Ghost type. Machop can evolve\l"
	.string "into a Fighting type. Timburr can evolve\l"
	.string "into a Fighting type. I wonder which you\l"
	.string "will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFighting_Updated:
# 823 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Mankey can evolve into a\l"
	.string "Fighting/Ghost type. Machop can evolve\l"
	.string "into a Fighting type, and has a Mega\l"
	.string "Evolution. Timburr can evolve into a\l"
	.string "Fighting type. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFlying:
# 827 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Hoppip can evolve into a\l"
	.string "Grass/Flying type. Fletchling can\l"
	.string "evolve into a Fire/Flying type.\l"
	.string "Rookidee can evolve into a Flying/Steel\l"
	.string "type. I wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoPoison:
# 831 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Budew can evolve into a\l"
	.string "Grass/Poison type, and has a Mega\l"
	.string "Evolution. Venipede can evolve into a\l"
	.string "Bug/Poison type, and has a Mega\l"
	.string "Evolution. Koffing can evolve into a\l"
	.string "Poison or a Poison/Fairy type. I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoPoison_Updated:
# 835 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Budew can evolve into a\l"
	.string "Grass/Poison type, and has a Mega\l"
	.string "Evolution. Venipede can evolve into a\l"
	.string "Bug/Poison type, and has a Mega\l"
	.string "Evolution. Koffing can evolve into a\l"
	.string "Poison or a Poison/Fairy type. I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoGround:
# 839 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Traphinch can evolve into a\l"
	.string "Ground/Dragon type. Geodue can evovle\l"
	.string "into a Rock/Ground type. Tympole can\l"
	.string "evolve into a Water/Ground type. I\l"
	.string "wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoRock:
# 842 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Rolycoly can evolve into a\l"
	.string "Rock/Fire type. Alolan Geodue can\l"
	.string "evolve into a Rock/Electric type. Nacli\l"
	.string "can evolve into a Rock type. I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoRock_Updated:
# 846 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Rolycoly can evolve into a\l"
	.string "Rock/Fire type, and has a Mega\l"
	.string "evolution. Alolan Geodue can evolve\l"
	.string "into a Rock/Electric type. Nacli can\l"
	.string "evolve into a Rock type. I wonder which\l"
	.string "you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoBug:
# 850 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Grubbin can evolve into a\l"
	.string "Bug/Electric type. Blipbug can evolve\l"
	.string "into a Bug/Psychic type. Scatterbug\l"
	.string "evolves into a Bug/Flying type. I\l"
	.string "wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoBug_Updated:
# 854 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Grubbin can evolve into a\l"
	.string "Bug/Electric type. Blipbug can evolve\l"
	.string "into a Bug/Psychic type, and has a Mega\l"
	.string "Evolution. Scatterbug evolves into a\l"
	.string "Bug/Flying type. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoGhost:
# 858 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Ghastly can evolve into a\l"
	.string "Poison/Ghost type. Litwick can evolve\l"
	.string "into a Ghost/Fire type, and has a Mega\l"
	.string "Evolution. Duskull can evolve into a\l"
	.string "Ghost type. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoGhost_Updated:
# 862 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Ghastly can evolve into a\l"
	.string "Poison/Ghost type. Litwick can evolve\l"
	.string "into a Ghost/Fire type, and has a Mega\l"
	.string "Evolution. Duskull can evolve into a\l"
	.string "Ghost type, and has a Mega Evolution. I\l"
	.string "wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoSteel:
# 866 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Tinkatink can evolve into a\l"
	.string "Fairy/Steel type. Honedge can evolve\l"
	.string "into a Steel/Ghost type. Klink can\l"
	.string "evolve into a Steel type. I wonder which\l"
	.string "you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoElectric:
# 870 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Pichu can evolve into a\l"
	.string "Electric or Electric/Psychic type.\l"
	.string "Shinx can evolve into a Electric type.\l"
	.string "Mareep can evolve into an Electric\l"
	.string "type, and has a Mega Evolution I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoElectric_Updated:
# 874 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Pichu can evolve into a\l"
	.string "Electric/Normal or Electric/Psychic\l"
	.string "type. Shinx can evolve into a\l"
	.string "Electric/Dark type, and has a Mega\l"
	.string "Evolution. Mareep can evolve into an\l"
	.string "Electric/Dragon type, and has a Mega\l"
	.string "Evolution. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoPsychic:
# 878 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Hatenna can evolve into a\l"
	.string "Psychic/Fairy type. Solosis can evolve\l"
	.string "into a Psychic type. Gothita can evolve\l"
	.string "into a Psychic type. I wonder which you\l"
	.string "will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoIce:
# 882 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Snover can evolve into a\l"
	.string "Grass/Type type, and has a Mega\l"
	.string "Evolution. Swinum can evolve into a\l"
	.string "Ice/Ground type. Spheal can evolve\l"
	.string "into a Ice/Water type. I wonder which\l"
	.string "you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoDragon:
# 886 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Bagon can evolve into a\l"
	.string "Dragon/Flying type, and has a Mega\l"
	.string "Evolution. Gible can evolve into a\l"
	.string "Dragon/Ground type, and has a Mega\l"
	.string "Evolution. Dratini can evovle into a\l"
	.string "Dragon/Flying type, and has a Mega\l"
	.string "Evolution. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoDark:
# 890 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Pawniard can evolve into a\l"
	.string "Dark/Steel type. Galarian Zigzagoon\l"
	.string "can evolve into a Dark/Normal type.\l"
	.string "Sandile can evolve into a Ground/Dark\l"
	.string "type. I wonder which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoNormal:
# 894 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Whismur can evolve into a\l"
	.string "Normal Type. Lillipup can evolve into a\l"
	.string "Normal type. Smoliv can evolve into a\l"
	.string "Grass/Normal type. I wonder which you\l"
	.string "will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFairy:
# 898 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Cottonee can evolve into a\l"
	.string "Grass/Fairy type. Igglybugg can evolve\l"
	.string "into a Normal/Fairy type. Impidimp can\l"
	.string "evolve into a Dark/Fairy type. I wonder\l"
	.string "which you will choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Aide_StarterHint_MonoFairy_Updated:
# 902 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Aide: These starters have great\n"
	.string "potential. Cottonee can evolve into a\l"
	.string "Grass/Fairy type. Igglybugg can evolve\l"
	.string "into a Normal/Fairy type. Impidimp can\l"
	.string "evolve into a Dark/Fairy type, and has a\l"
	.string "Mega Evolution. I wonder which you will\l"
	.string "choose?$"

Text_LittlerootTown_ProfessorBirchsLab_Examine_PokeBalls:
# 956 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "Those are Poké Balls\n"
	.string "They contain Pokémon!$"

Text_LittleRootTown_ProfessorBirchsLab_Examine_ProfessorsPC:
# 1020 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a PC used for research.\n"
	.string "Better not mess around with it.$"

Text_LittlerootTown_ProfessorBirchsLab_Examine_SeriousLookingMachine:
# 1032 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a serious-looking machine.\n"
	.string "The Prof must use this for research.$"

Text_LittlerootTown_ProfressorBirchsLab_Examine_Bookcase:
# 1044 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's crammed with books on Pokémon.$"

Text_LittlerootTown_ProfessorBirchsLab_Examine_Books:
# 1055 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "It's a book that's too hard to read.$"

Text_LittlerootTown_ProfessorBirchsLab_Scott_AboardSSTidal:
# 1070 "data/maps/LittlerootTown_ProfessorBirchsLab/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Scott: Hi, hi, {PLAYER}!\n"
	.string "It's me, Scott.\p"
	.string "I'm aboard the S.S. Tidal now.\n"
	.string "It feels great to be on the sea!\p"
	.string "By the way…\p"
	.string "There's this place that I'd like to\n"
	.string "If you're interested, board a ferry\n"
	.string "at either Slateport or Lilycove.\p"
	.string "I'll fill you in on the details when\n"
	.string "we meet. I'll be waiting!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"
