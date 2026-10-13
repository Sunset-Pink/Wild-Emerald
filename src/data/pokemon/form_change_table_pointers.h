const struct Fusion *const gFusionTablePointers[NUM_SPECIES] =
{
    [SPECIES_KYUREM] = sKyuremFusionTable,
    [SPECIES_KYUREM_WHITE] = sKyuremFusionTable,
    [SPECIES_RESHIRAM] = sKyuremFusionTable,
    [SPECIES_KYUREM_BLACK] = sKyuremFusionTable,
    [SPECIES_ZEKROM] = sKyuremFusionTable,
    [SPECIES_NECROZMA] = sNecrozmaFusionTable,
    [SPECIES_NECROZMA_DAWN_WINGS] = sNecrozmaFusionTable,
    [SPECIES_SOLGALEO] = sNecrozmaFusionTable,
    [SPECIES_NECROZMA_DUSK_MANE] = sNecrozmaFusionTable,
    [SPECIES_LUNALA] = sNecrozmaFusionTable,
    [SPECIES_CALYREX] = sCalyrexFusionTable,
    [SPECIES_CALYREX_SHADOW] = sCalyrexFusionTable,
    [SPECIES_SPECTRIER] = sCalyrexFusionTable,
    [SPECIES_CALYREX_ICE] = sCalyrexFusionTable,
    [SPECIES_GLASTRIER] = sCalyrexFusionTable,
};

const u16 gKyuremWhiteSwapMoveTable[][2] =
{
    {MOVE_SCARY_FACE, MOVE_FUSION_FLARE},
    {MOVE_GLACIATE, MOVE_ICE_BURN},
};

const u16 gKyuremBlackSwapMoveTable[][2] =
{
    {MOVE_SCARY_FACE, MOVE_FUSION_BOLT},
    {MOVE_GLACIATE, MOVE_FREEZE_SHOCK},
};
