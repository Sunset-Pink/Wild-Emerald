const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No Ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    // Summons weather

    [ABILITY_DRIZZLE] =
    {
        .name = _("Drizzle"),
        .description = COMPOUND_STRING("Summons Rain for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Drought"),
        .description = COMPOUND_STRING("Summons Sun for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Snow Warning"),
        .description = COMPOUND_STRING("Summons Snow for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sand Stream"),
        .description = COMPOUND_STRING("Summons Sand for 5 turns."),
        .aiRating = 9,
    },

    [ABILITY_SUMMON_WIND] = 
    {
        .name = _("Summon Wind"),
        .description = COMPOUND_STRING("Summon Wind for 5 turns."),
        .aiRating = 9,
    },


    // Summons weather+

    [ABILITY_DELUGE] = 
    {
        .name = _("Deluge"),
        .description = COMPOUND_STRING("Sets Rain for 5 turns.\nUps Sp. Atk by 33% while in it."),
        .aiRating = 8,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Orichalcum Pulse"),
        .description = COMPOUND_STRING("Sets Sun for 5 turns.\nUps Atk by 33% while in it."),
        .aiRating = 8,
    },

    [ABILITY_WHITEOUT] = 
    {
        .name = _("Whiteout"),
        .description = COMPOUND_STRING("Sets Snow for 5 turns.\nUps Sp. Atk by 33% while in it."),
        .aiRating = 8,
    },

    [ABILITY_DUST_DEVIL] = 
    {
        .name = _("Dust Devil"),
        .description = COMPOUND_STRING("Sets sand for 5 turns.\nUps Atk by 30% while in it."),
        .aiRating = 8,
    },

    [ABILITY_WIND_PLUS] = 
    {
        .name = _("Temp wind+"),
        .description = COMPOUND_STRING("Sets Wind for 5 turns.\nUps Sp. Atk by 30% while in it."),
        .aiRating = 8,
    },

    // Summons weather when hit.

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sand Spit"),
        .description = COMPOUND_STRING("Summons Sand for 5 turns\nif hit."),
        .aiRating = 5,
    },

    // Summons Heavy Weather

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Primordial Sea"),
        .description = COMPOUND_STRING("Summons Heavy Rain that\nnullifies Fire moves."),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Desolate Land"),
        .description = COMPOUND_STRING("Summons Harsh Sun that\nnullifies Water moves."),
        .aiRating = 10,
    },

    // Partially implemented
    [ABILITY_FIMBULWINTER] = 
    {
        .name = _("Fimbulwinter"),
        .description = COMPOUND_STRING("Summons Chilling Snow.\nIce-types have no weakness."),
        .aiRating = 10,
    },

    // Partially implemented
    [ABILITY_PREHISTORIC_DUST] = 
    {
        .name = _("Prehistoric Dust"),
        .description = COMPOUND_STRING("Summons Harsh Sand that\nnullifies Flying moves."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta Stream"),
        .description = COMPOUND_STRING("Summons Strong Winds that\nremove Flying weaknesses."),
        .aiRating = 10,
    },

    // Boosts evasion in weather

    [ABILITY_HEAT_MIRAGE] = 
    {
        .name = _("Heat Mirage"),
        .description = COMPOUND_STRING("Boosts evasiveness by 25% in Sun."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Snow Cloak"),
        .description = COMPOUND_STRING("Boosts evasiveness by 25% in Snow."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sand Veil"),
        .description = COMPOUND_STRING("Boosts evasiveness by 25% in Sand."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    // Boosts speed in weather

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Swift Swim"),
        .description = COMPOUND_STRING("Doubles Speed in Rain."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("Doubles Speed in Sun."),
        .aiRating = 6,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Slush Rush"),
        .description = COMPOUND_STRING("Doubles Speed in snow."),
        .aiRating = 5,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sand Rush"),
        .description = COMPOUND_STRING("Doubles Speed in Sand."),
        .aiRating = 6,
    },

    [ABILITY_JET_STREAM] = 
    {
        .name = _("Jet Stream"),
        .description = COMPOUND_STRING("Doubles Speed in Wind."),
        .aiRating = 6,
    },

    // Boosts power in weather.

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solar Power"),
        .description = COMPOUND_STRING("Boosts Sp. Atk by 50% in Sun\nbut HP decreases every turn."),
        .updatedDescription = COMPOUND_STRING("Boosts Sp. Atk by 50% in Sun\nbut HP decreases every turn."),
        .aiRating = 3,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Flower Gift"),
        .description = COMPOUND_STRING("Boosts Atk and Speed by\n50% in Sun."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sand Force"),
        .description = COMPOUND_STRING("Boosts Rock, Ground, and\nSteel moves in Sand."),
        .aiRating = 4,
    },

    // Boosts highest stat in weather.
    
    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Protosynthesis"),
        .description = COMPOUND_STRING("Boosts highest stat in\nSun."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    // Always act as in weather.

    [ABILITY_DAMP] =
    {
        .name = _("Damp"),
        .description = COMPOUND_STRING("Prevents self-destruction."),
        .updatedDescription = COMPOUND_STRING("Acts like under Rain. Prevents self-destruction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MEGA_SOL] =
    {
        .name = _("Mega Sol"),
        .description = COMPOUND_STRING("Acts like under Sun."),
    },

    [ABILITY_MEGA_AURORUS] = {
        .name = _("Mega Aurorus"),
        .description = COMPOUND_STRING("Acts like under Snow.")
    },

    // Heal in weather

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Rain Dish"),
        .description = COMPOUND_STRING("Recover 1/16 HP at end of turn\n in Rain."),
        .updatedDescription = COMPOUND_STRING("Recover 1/8 HP at end of turn\n in Rain."),
        .aiRating = 3,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Ice Body"),
        .description = COMPOUND_STRING("Recover 1/16 HP at end of turn\n in Snow, can leave frostbite on hit."),
        .updatedDescription = COMPOUND_STRING("Recover 1/8 HP at end of turn\n in Snow, can leave frostbite on hit."),
        .aiRating = 3,
    },

    // Prevent Status in weather

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Leaf Guard"),
        .description = COMPOUND_STRING("Protects from status\nin sunshine."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    // Summons Terrain
    
    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Electric Surge"),
        .description = COMPOUND_STRING("Sets Electric Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psychic Surge"),
        .description = COMPOUND_STRING("Sets Psychic Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Misty Surge"),
        .description = COMPOUND_STRING("Sets Misty Terrain for\n5 turns."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Grassy Surge"),
        .description = COMPOUND_STRING("Sets Grassy Terrain for\n5 turns."),
        .aiRating = 8,
    },

    // Summon Terrain+

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Hadron Engine"),
        .description = COMPOUND_STRING("Sets E. Terrain for 5 turns.\nUps SpAtk by 30% while in it."),
        .aiRating = 8,
    },

    // Summon Terrain if hit

    [ABILITY_VOLTAGE_DROP] = 
    {
        .name = _("Voltage Drop"),
        .description = COMPOUND_STRING("Summons Electric Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    [ABILITY_MEMORY_LAPSE] = 
    {
        .name = _("Memory Lapse"),
        .description = COMPOUND_STRING("Summons Psychic Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    [ABILITY_SPRINKLED_DUST] = 
    {
        .name = _("Sprinkled Dust"),
        .description = COMPOUND_STRING("Summons Misty Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Seed Sower"),
        .description = COMPOUND_STRING("Summons Grassy Terrain for\n5 turns when hit."),
        .aiRating = 5,
    },

    // Boosts Defenses in Terrain

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Grass Pelt"),
        .description = COMPOUND_STRING("Ups Defense by 50% in\nGrassy Terrain."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    // Boosts Speed in Terrain.

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surge Surfer"),
        .description = COMPOUND_STRING("Doubles Speed in Electric\nTerrain."),
        .aiRating = 4,
    },

    // Not Implmented
    [ABILITY_MIST_WALKER] =
    {
        .name = _("Mist Walker"),
        .description = COMPOUND_STRING("Doubles Speed in Misty\nTerrain."),
        .aiRating = 4,
    },

    // Boosts highest in terrain

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quark Drive"),
        .description = COMPOUND_STRING("Boosts highest stat in\nElectric Terrain."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    // Absorb type to heal

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Volt Absorb"),
        .description = COMPOUND_STRING("Absorbs Electric moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Water Absorb"),
        .description = COMPOUND_STRING("Absorbs Water moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_EATER] =
    {
        .name = _("Ice Eater"),
        .description = COMPOUND_STRING("Absorbs Ice moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Earth Eater"),
        .description = COMPOUND_STRING("Absorbs Ground moves\nto heal HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Draws in to boost.

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Storm Drain"),
        .description = COMPOUND_STRING("Immune to & draws in Water moves\nto boost SpAtk."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Lightning Rod"),
        .description = COMPOUND_STRING("Draws Electr. to up Sp. Atk."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Sap Sipper"),
        .description = COMPOUND_STRING("Boosts attack if hit by\na Grass-type move."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    // Hit by type to boost.


    

    // Immune to Type
    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Motor Drive"),
        .description = COMPOUND_STRING("Raises Speed if hit by\nan Electric-type move."),
        .aiRating = 6,
        .breakable = TRUE,
    },


    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Flash Fire"),
        .description = COMPOUND_STRING("Powers up if hit by Fire."),
        .aiRating = 6,
        .breakable = TRUE,
    },


    // Aura

    // Not Implmented
    [ABILITY_NORMAL_AURA] =
    {
        .name = _("Normal Aura"),
        .description = COMPOUND_STRING("Powers up all Normal-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_GHOST_AURA] =
    {
        .name = _("Ghost Aura"),
        .description = COMPOUND_STRING("Powers up all Ghost-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_FIGHTING_AURA] =
    {
        .name = _("Fighting Aura"),
        .description = COMPOUND_STRING("Powers up all Fighting-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_FIRE_AURA] =
    {
        .name = _("Fire Aura"),
        .description = COMPOUND_STRING("Powers up all Fire-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_ELECTRIC_AURA] =
    {
        .name = _("Electric Aura"),
        .description = COMPOUND_STRING("Powers up all Electric-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_WATER_AURA] =
    {
        .name = _("Water Aura"),
        .description = COMPOUND_STRING("Powers up all Water-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_GRASS_AURA] =
    {
        .name = _("Grass Aura"),
        .description = COMPOUND_STRING("Powers up all grass-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_PSYCHIC_AURA] =
    {
        .name = _("Psychic Aura"),
        .description = COMPOUND_STRING("Powers up all Psychic-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_DRAGON_AURA] =
    {
        .name = _("Dragon Aura"),
        .description = COMPOUND_STRING("Powers up all Dragon-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_STEEL_AURA] =
    {
        .name = _("Steel Aura"),
        .description = COMPOUND_STRING("Powers up all Steel-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_POISON_AURA] =
    {
        .name = _("Normal Aura"),
        .description = COMPOUND_STRING("Powers up all Poison-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_BUG_AURA] =
    {
        .name = _("Bug Aura"),
        .description = COMPOUND_STRING("Powers up all Bug-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_GROUND_AURA] =
    {
        .name = _("Ground Aura"),
        .description = COMPOUND_STRING("Powers up all ground-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    // Not Implmented
    [ABILITY_ROCK_AURA] =
    {
        .name = _("Rock Aura"),
        .description = COMPOUND_STRING("Powers up all Rock-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dark Aura"),
        .description = COMPOUND_STRING("Powers up all Dark-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Fairy Aura"),
        .description = COMPOUND_STRING("Powers up all Fairy-type\nmoves by 33%."),
        .aiRating = 6,
        .breakable = FALSE,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura Break"),
        .description = COMPOUND_STRING("Reverses Aura Abilities."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_AURA_GUARD] =
    {
        .name = _("Aura Guard"),
        .description = COMPOUND_STRING("Unimplemented."),
    },

    // In a pinch, 1/3 health boost abilities

    [ABILITY_OVERGROW] =
    {
        .name = _("Overgrow"),
        .description = COMPOUND_STRING("Boosts Grass moves by 50%\nat 1/3 or less HP."),
        //.updatedDescription = COMPOUND_STRING("Boosts Grass moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Blaze"),
        .description = COMPOUND_STRING("Boosts Fire moves by 50% at 1/3 or less HP."),
        .updatedDescription = COMPOUND_STRING("Boosts Fire moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrent"),
        .description = COMPOUND_STRING("Ups Water moves at low HP."),
        .updatedDescription = COMPOUND_STRING("Boosts Water moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Swarm"),
        .description = COMPOUND_STRING("Ups Bug moves at low HP."),
        .updatedDescription = COMPOUND_STRING("Boosts Bug moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ADRENALINE] =
    {
        .name = _("Adrenaline"),
        .description = COMPOUND_STRING("Boosts Normal moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_OVERCHARGE] =
    {
        .name = _("Overcharge"),
        .description = COMPOUND_STRING("Boosts Electric moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_TREMOR] =
    {
        .name = _("Tremor"),
        .description = COMPOUND_STRING("Boosts Ground moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_HAUNT] =
    {
        .name = _("Haunt"),
        .description = COMPOUND_STRING("Boosts Ghost moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_FLOCK] =
    {
        .name = _("Flock"),
        .description = COMPOUND_STRING("Boosts Flying moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ECLIPSE] =
    {
        .name = _("Eclipse"),
        .description = COMPOUND_STRING("Boosts Dark moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_TEMPER] =
    {
        .name = _("Temper"),
        .description = COMPOUND_STRING("Boosts Steel moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_SUB_ZERO] =
    {
        .name = _("Sub-Zero"),
        .description = COMPOUND_STRING("Boosts Ice moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_UNDERDOG] =
    {
        .name = _("Underdog"),
        .description = COMPOUND_STRING("Boosts Fighting moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ENLIGHTEN] =
    {
        .name = _("Enlighten"),
        .description = COMPOUND_STRING("Boosts Psychic moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_ENCHANT] =
    {
        .name = _("Adrenaline"),
        .description = COMPOUND_STRING("Boosts Fairy moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_SEDIMENTARY] =
    {
        .name = _("Sedimentary"),
        .description = COMPOUND_STRING("Boosts Rock moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_INFECTION] =
    {
        .name = _("Infection"),
        .description = COMPOUND_STRING("Boosts Poison moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },

    [ABILITY_MYTHOLOGICAL] =
    {
        .name = _("Mythological"),
        .description = COMPOUND_STRING("Boosts Dragon moves by 30%.\nBoosts by 50% when at 1/3 or less HP."),
        .aiRating = 5,
    },
    
    // Transform type abilties. Ex. -ize, -ate

    [ABILITY_NORMALIZE] =
    {
        .name = _("Normalize"),
        .description = COMPOUND_STRING("Moves become Normal-type\n&boosted by 20%."),
        .aiRating = -1,
    },

    [ABILITY_DRAGONIZE] =
    {
        .name = _("Dragonize"),
        .description = COMPOUND_STRING("Normal moves turn Dragon."),
        .updatedDescription = COMPOUND_STRING("Normal moves turn Dragon\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Galvanize"),
        .description = COMPOUND_STRING("Normal moves become Electric\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Aerilate"),
        .description = COMPOUND_STRING("Normal moves become Flying\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Pixilate"),
        .description = COMPOUND_STRING("Normal moves become Fairy\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Refrigerate"),
        .description = COMPOUND_STRING("Normal moves become Ice\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PULVERIZE] = 
    {
        .name = _("Pulverize"),
        .description = COMPOUND_STRING("Normal moves become Fighting\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_CONTAMINATE] = 
    {
        .name = _("Contaminate"),
        .description = COMPOUND_STRING("Normal moves become Poison\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_ESCAVATE] = 
    {
        .name = _("Escavate"),
        .description = COMPOUND_STRING("Normal moves become Ground\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_MINERALIZE] = 
    {
        .name = _("Mineralize"),
        .description = COMPOUND_STRING("Normal moves become Rock\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PUPATE] = 
    {
        .name = _("Pupate"),
        .description = COMPOUND_STRING("Normal moves become Bug\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_ENERVATE] = 
    {
        .name = _("Enervate"),
        .description = COMPOUND_STRING("Normal moves become Ghost\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_METALLICIZE] = 
    {
        .name = _("Metallicize"),
        .description = COMPOUND_STRING("Normal moves become Steel\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_EMOLATE] = 
    {
        .name = _("Emolate"),
        .description = COMPOUND_STRING("Normal moves become Fire\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_IRRIGATE] = 
    {
        .name = _("Irrigate"),
        .description = COMPOUND_STRING("Normal moves become Water\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_POLLINATE] = 
    {
        .name = _("Pollinate"),
        .description = COMPOUND_STRING("Normal moves become Grass\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_PROPHESIZE] = 
    {
        .name = _("Prophesize"),
        .description = COMPOUND_STRING("Normal moves become Psychic\n& boosted by 20%."),
        .aiRating = 8,
    },

    [ABILITY_TERRORIZE] = 
    {
        .name = _("Terrorize"),
        .description = COMPOUND_STRING("Normal moves become Dark\n& boosted by 20%."),
        .aiRating = 8,
    },

    // Prevents specific status

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Vital Spirit"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunity"),
        .description = COMPOUND_STRING("Prevents poisoning."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magma Armor"),
        .description = COMPOUND_STRING("Prevents frostbite."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Water Veil"),
        .description = COMPOUND_STRING("Prevents burns."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Limber"),
        .description = COMPOUND_STRING("Prevents paralysis."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    // Causes status on contact

    [ABILITY_STATIC] =
    {
        .name = _("Static"),
        .description = COMPOUND_STRING("30% chance to paralyze foe\n on contact."),
        .aiRating = 4,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Poison Touch"),
        .description = COMPOUND_STRING("30% chance to poison foe\non contact."),
        .aiRating = 4,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Poison Point"),
        .description = COMPOUND_STRING("Has a 30% chance to\npoison on contact."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flame Body"),
        .description = COMPOUND_STRING("Has a 20% chance to\nburn on contact."),
        .aiRating = 4,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Cute Charm"),
        .description = COMPOUND_STRING("Has a 30% chance to\ninfatuate on contact."),
        .aiRating = 2,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Effect Spore"),
        .description = COMPOUND_STRING("Has a 30% chance to\npoison, paralyze, or sleep on contact."),
        .aiRating = 4,
    },

    // Boost offense if statused.

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Toxic Boost"),
        .description = COMPOUND_STRING("Boosts Attack by 50%\n if poisoned."),\
        .updatedDescription = COMPOUND_STRING("Boosts Attack by 50%\n if poisoned. Immune to poison damage."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Flare Boost"),
        .description = COMPOUND_STRING("Boosts Sp. Atk by 50%\n if burned."),
            .updatedDescription = COMPOUND_STRING("Boosts Sp. Atk by 50%\n if burned. Immune to burn damage."),
        .aiRating = 5,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Guts"),
        .description = COMPOUND_STRING("Boosts Attack by 50%\nif statused."),
        .aiRating = 6,
    },

    // Heal on specific status.

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Poison Heal"),
        .description = COMPOUND_STRING("Restores 1/8 max HP\nif poisoned."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_DREAMS] = {
        .name = _("Sweet Dreams"),
        .description = COMPOUND_STRING("Increases sleep duration.\nSleeping heals 1/4 HP at end of turn."),
        .aiRating = 4,
    },


    // Boosts defenses if statused

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Marvel Scale"),
        .description = COMPOUND_STRING("Boosts Defense by 50%\nif statused."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    // Choice-like
    
    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Gorilla Tactics"),
        .description = COMPOUND_STRING("Ups Atk by 50% but\nlocks move."),
        .aiRating = 4,
    },

    [ABILITY_SAGE_POWER] =
    {
        .name = _("Sage Power"),
        .description = COMPOUND_STRING("Ups Sp. Atk by 50% but\nlocks move."),
        .aiRating = 4,
    },

    // Doubles a stat

    [ABILITY_PURE_POWER] =
    {
        .name = _("Pure Power"),
        .description = COMPOUND_STRING("Doubles Attack."),
        .aiRating = 10,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Huge Power"),
        .description = COMPOUND_STRING("Doubles Attack."),
        .aiRating = 10,
    },

    [ABILITY_FELINE_PROWESS] =
    {
        .name = _("Feline Prowess"),
        .description = COMPOUND_STRING("Doubles Sp. Atk."),
        .aiRating = 10,
    },

    // Boosts own X-type moves.

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Powers up Electric-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_SNAP_FREEZE] =
    {
        .name = _("Snap Freeze"),
        .description = COMPOUND_STRING("Powers up Ice-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Dragon's Maw"),
        .description = COMPOUND_STRING("Powers up Dragon-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Rocky Payload"),
        .description = COMPOUND_STRING("Powers up Rock-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Steelworker"),
        .description = COMPOUND_STRING("Powers up Steel-type\nmoves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_FIRE_MANE] =
    {
        .name = _("Fire Mane"),
        .description = COMPOUND_STRING("Powers up Fire-type\nmoves by 50%."),
    },

    // Boost own and ally X-type 

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Steely Spirit"),
        .description = COMPOUND_STRING("Boosts own and ally's\nSteel-type moves by 50%."),
        .aiRating = 2,
    },

    [ABILITY_EMPERORS_PRESENCE] =
    {
        .name = _("Emperor"),
        .description = COMPOUND_STRING("Boosts own and ally's\nWater & Steel-type moves by 30%."),
        .aiRating = 2,
    },

    // Boost specific type of moves

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Strong Jaw"),
        .description = COMPOUND_STRING("Boosts biting moves by 50%."),
        .aiRating = 6,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Iron Fist"),
        .description = COMPOUND_STRING("Boosts punching moves\nby 30%."),
        .aiRating = 6,
    },

    [ABILITY_STRIKER] =
    {
        .name = _("Striker"),
        .description = COMPOUND_STRING("Boosts kicking moves\nby 30%."),
        .aiRating = 6,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Sharpness"),
        .description = COMPOUND_STRING("Boosts slashing moves\nby 50%."),
        .aiRating = 7,
    },

    [ABILITY_BONE_ZONE] =
    {
        .name = _("Bone Zone"),
        .description = COMPOUND_STRING("Bone moves have Tinted Lens\nand ignore immunities."),
        .aiRating = 7,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Liquid Voice"),
        .description = COMPOUND_STRING("Sound moves become Water-\ntype & boosted by 20%."),
        .aiRating = 5,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Boosts sound moves by 30%\n& resists them by 50%."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Mega Launcher"),
        .description = COMPOUND_STRING("Boosts aura and pulse moves\nby 50%."),
        .aiRating = 7,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Tough Claws"),
        .description = COMPOUND_STRING("Boosts moves that make\ncontact by 30%."),
        .aiRating = 7,
    },

    // Break/ignore/bypass abilities

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Mold Breaker"),
        .description = COMPOUND_STRING("Moves ignore most\nabilities."),
        .aiRating = 7,
    },

    // Gain Priority when at full HP

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Gale Wings"),
        .description = COMPOUND_STRING("Gives +1 priority to\nFlying moves at full HP."),
        .aiRating = 6,
    },

    [ABILITY_BLAZING_SOUL] =
    {
        .name = _("Blazing Soul"),
        .description = COMPOUND_STRING("Gives +1 priority to\nFire moves at full HP."),
        .aiRating = 6,
    },

    // Gain Priority
    [ABILITY_TRIAGE] =
    {
        .name = _("Triage"),
        .description = COMPOUND_STRING("Gives +3 priority to\nhealing moves."),
        .aiRating = 7,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Prankster"),
        .description = COMPOUND_STRING("Gives +1 priority to\nstatus moves."),
        .aiRating = 8,
    },

    // Loose Priority

    [ABILITY_STALL] =
    {
        .name = _("Stall"),
        .description = COMPOUND_STRING("Always last to use moves."),
        .aiRating = -1,
    },


    // Block Priority

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Armor Tail"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Dazzling"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("Queenly Majesty"),
        .description = COMPOUND_STRING("Protects from priority moves."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    // Reduce damage at full

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multiscale"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Shadow Shield"),
        .description = COMPOUND_STRING("Halves damage at full HP."),
        .aiRating = 8,
    },

    // Halves damage

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fur Coat"),
        .description = COMPOUND_STRING("Halves physical damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Fluffy"),
        .description = COMPOUND_STRING("Halves contact hits.\nTakes 2x to Fire moves."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Ice Scales"),
        .description = COMPOUND_STRING("Halves special damage."),
        .aiRating = 7,
        .breakable = TRUE,
    },


    // Reduce Super Effective

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Solid Rock"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 25%."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 25%."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prism Armor"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 25%."),
        .aiRating = 6,
    },

    [ABILITY_PRIMAL_ARMOR] =
    {
        .name = _("Primal Armor"),
        .description = COMPOUND_STRING("Weakens super effective moves\nby 50%."),
        .aiRating = 6,
    },

    // Transfer ability on contact

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Wandering Spirit"),
        .description = COMPOUND_STRING("Swaps Abilities on contact."),
        .aiRating = 2,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mummy"),
        .description = COMPOUND_STRING("Contact with this Pokémon\nspreads this Ability."),
        .aiRating = 5,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Lingering Aroma"),
        .description = COMPOUND_STRING("Contact with this Pokémon\nspreads this Ability."),
        .aiRating = 5,
    },

    //Boost on KO

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Beast Boost"),
        .description = COMPOUND_STRING("KOing a foe boosts\nits highest stat."),
        .aiRating = 7,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Soul-Heart"),
        .description = COMPOUND_STRING("+1 Sp. Atk every time a\nPokémon faints."),
        .aiRating = 7,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Chilling Neigh"),
        .description = COMPOUND_STRING("Boosts Attack after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Grim Neigh"),
        .description = COMPOUND_STRING("Boosts SpAtk after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Moxie"),
        .description = COMPOUND_STRING("Boosts Attack after knocking\nout a Pokémon."),
        .aiRating = 7,
    },

    // Compound Abilities

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Mind's Eye"),
        .description = COMPOUND_STRING("Keen Eye and Scrappy."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turboblaze"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .updatedDescription = COMPOUND_STRING("Mold Breaker and Blaze."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Moves hit through abilities."),
        .updatedDescription = COMPOUND_STRING("Mold Breaker and Volt."),
        .aiRating = 7,
    },

    [ABILITY_EELEVATE] =
    {
        .name = _("Eelevate"),
        .description = COMPOUND_STRING("Levitate and Beast Boost."),
    },

        [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("As One"),
        .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    // Form change abilities

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Shields Down"),
        .description = COMPOUND_STRING("Shell breaks at half HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Battle Bond"),
        .description = COMPOUND_STRING("Changes form after a KO."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Schooling"),
        .description = COMPOUND_STRING("Forms a school when above\n25% HP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Stance Change"),
        .description = COMPOUND_STRING("Swaps Forme as it battles."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Zen Mode"),
        .description = COMPOUND_STRING("Transforms into Zen Mode."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Imposter"),
        .description = COMPOUND_STRING("Transforms into the foe\nupon entering battle."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera Shift"),
        .description = COMPOUND_STRING("Changes form on entry."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Zero to Hero"),
        .description = COMPOUND_STRING("Changes form upon switch."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Hunger Switch"),
        .description = COMPOUND_STRING("Changes form every turn."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Commander"),
        .description = COMPOUND_STRING("Commands from ally Dondozo."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Forecast"),
        .description = COMPOUND_STRING("Changes form based on weather."),
        .updatedDescription = COMPOUND_STRING("Sets weather based on held item.\nChanges form based on weather."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Power Construct"),
        .description = COMPOUND_STRING("Transforms to Complete form\nwhen below half HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    // On Entry

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Intrepid Sword"),
        .description = COMPOUND_STRING("Raises Attack on entry once."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Dauntless Shield"),
        .description = COMPOUND_STRING("Ups Defense on entry once."),
        .aiRating = 3,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Hospitality"),
        .description = COMPOUND_STRING("Restores ally's HP on entry."),
        .aiRating = 5,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Screen Cleaner"),
        .description = COMPOUND_STRING("Screens are removed\non entry."),
        .aiRating = 3,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidate"),
        .description = COMPOUND_STRING("Lowers foes' Atk on entry."),
        .aiRating = 7,
    },

    // Type Change Abilities

    [ABILITY_MULTITYPE] =
    {
        .name = _("Multitype"),
        .description = COMPOUND_STRING("Matches Plate or Z-Crystal."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Color Change"),
        .description = COMPOUND_STRING("Changes type to foe's move."),
        .aiRating = 2,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("RKS System"),
        .description = COMPOUND_STRING("Memories change its type."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Protean"),
        .description = COMPOUND_STRING("Changes type to match move."),
        .aiRating = 8,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("Changes type to used move."),
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimicry"),
        .description = COMPOUND_STRING("Changes type on terrain."),
        .aiRating = 2,
    },

    // Echo/double hit abilities

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Parental Bond"),
        .description = COMPOUND_STRING("Moves hit a second time\nfor 25% damage."),
        .aiRating = 10,
    },

    [ABILITY_RAGING_BOXER] =
    {
        .name = _("Raging Boxer"),
        .description = COMPOUND_STRING("Punch moves hit a second\ntime for 50% damage"),
        .aiRating = 10,
    },

    [ABILITY_WISTFUL_ECHO] =
    {
        .name = _("Wistful Echo"),
        .description = COMPOUND_STRING("Sound moves hit a second\ntime for 50% damage."),
        .aiRating = 10,
    },

    // Protect redirection

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Propeller Tail"),
        .description = COMPOUND_STRING("Moves ignore redirection."),
        .aiRating = 2,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Stalwart"),
        .description = COMPOUND_STRING("Moves ignore redirection."),
        .aiRating = 2,
    },

    // Trapping abilities

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Arena Trap"),
        .description = COMPOUND_STRING("Prevents foes from fleeing."),
        .aiRating = 9,
    },
    
    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnet Pull"),
        .description = COMPOUND_STRING("Traps Steel-type foes."),
        .aiRating = 9,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Shadow Tag"),
        .description = COMPOUND_STRING("Prevents the foes' escape."),
        .aiRating = 10,
    },

    [ABILITY_THE_GRIPPER] =
    {
        .name = _("THE GRIPPER"),
        .description = COMPOUND_STRING("Contact moves prevent the\nfoe from escaping."),
        .aiRating = 7,
    },

    // Increase accuracy

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Compound Eyes"),
        .description = COMPOUND_STRING("Raises accuracy by 30%."),
        .aiRating = 7,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Victory Star"),
        .description = COMPOUND_STRING("Raises own and ally's\naccuracy by 10%."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Illuminate"),
        .description = COMPOUND_STRING("Raises accuracy by 20%."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    // Modifies weight

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Heavy Metal"),
        .description = COMPOUND_STRING("Doubles weight."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Light Metal"),
        .description = COMPOUND_STRING("Halves weight."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Shell Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Battle Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    // Deal damage on hit

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Iron Barbs"),
        .description = COMPOUND_STRING("Inflicts damage (1/8 HP)\nto a foe on contact."),
        .aiRating = 6,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rough Skin"),
        .description = COMPOUND_STRING("Deals 1/8 foe's max HP on contact contact."),
        .aiRating = 6,
    },

    // Berry abilities

    [ABILITY_RIPEN] =
    {
        .name = _("Ripen"),
        .description = COMPOUND_STRING("Doubles effect of Berries."),
        .aiRating = 4,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Cheek Pouch"),
        .description = COMPOUND_STRING("Eating Berries restores HP\nby 1/3."),
        .aiRating = 4,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Cud Chew"),
        .description = COMPOUND_STRING("Eats Berry again next turn."),
        .aiRating = 4,
    },
    
    [ABILITY_HARVEST] =
    {
        .name = _("Harvest"),
        .description = COMPOUND_STRING("50% chance to restore\na used Berry."),
        .aiRating = 5,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Gluttony"),
        .description = COMPOUND_STRING("Eats Berries at half HP."),
        .aiRating = 3,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Unnerve"),
        .description = COMPOUND_STRING("Stops foes from eating\nBerries."),
        .aiRating = 3,
    },

    // Effect on Contact

    [ABILITY_GOOEY] =
    {
        .name = _("Gooey"),
        .description = COMPOUND_STRING("Lowers the foe's Speed if\nhit by a contact move."),
        .aiRating = 5,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Cursed Body"),
        .description = COMPOUND_STRING("Disables moves on contact."),
        .aiRating = 4,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Perish Body"),
        .description = COMPOUND_STRING("Gives a perish count on\ncontact."),
        .aiRating = -1,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Tangling Hair"),
        .description = COMPOUND_STRING("Lowers the foe's Speed\nif hit by a contact move."),
        .aiRating = 5,
    },

    // Doubles abilities

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastel Veil"),
        .description = COMPOUND_STRING("Allies can't be poisoned."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Healer"),
        .description = COMPOUND_STRING("May cure ally's status."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Friend Guard"),
        .description = COMPOUND_STRING("Reduces damage to allies."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Costar"),
        .description = COMPOUND_STRING("Copies ally's stat changes."),
        .aiRating = 5,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Curious Medicine"),
        .description = COMPOUND_STRING("Removes ally stat changes."),
        .aiRating = 3,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Power Spot"),
        .description = COMPOUND_STRING("Powers up ally's moves."),
        .aiRating = 2,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Battery"),
        .description = COMPOUND_STRING("Boosts ally's Sp. Atk."),
        .aiRating = 0,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiosis"),
        .description = COMPOUND_STRING("Passes held item to ally."),
        .aiRating = 0,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathy"),
        .description = COMPOUND_STRING("Protects from allies' moves."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("Takes over a KOed\nally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Power Of Alchemy"),
        .description = COMPOUND_STRING("Takes over a KOed\nally's ability."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },
    
    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Sweet Veil"),
        .description = COMPOUND_STRING("Protects allies from sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    // End of turn effects

    [ABILITY_SELF_SUFFICIENT] =
    {
        .name = _("Self Sufficient"),
        .description = COMPOUND_STRING("Recover 1/16 HP at\nend of turn."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Speed Boost"),
        .description = COMPOUND_STRING("Speed raises every turn."),
        .aiRating = 9,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Moody"),
        .description = COMPOUND_STRING("Stats change every turn."),
        .aiRating = 10,
    },

    // Stat reduction

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Vessel of Ruin"),
        .description = COMPOUND_STRING("Lowers the SpAtk of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Sword of Ruin"),
        .description = COMPOUND_STRING("Lowers the Defense of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Tablets of Ruin"),
        .description = COMPOUND_STRING("Lowers the Attack of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Beads of Ruin"),
        .description = COMPOUND_STRING("Lowers the SpDef of all\nother Pokémon by 25%."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    // Flinching based abilities

    [ABILITY_STEADFAST] =
    {
        .name = _("Steadfast"),
        .description = COMPOUND_STRING("Flinching raises Speed."),
        .aiRating = 2,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Stench"),
        .description = COMPOUND_STRING("Moves may cause flinching."),
        .aiRating = 1,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Inner Focus"),
        .description = COMPOUND_STRING("Prevents flinching and\nIntimidate."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    // End organized.

    






    [ABILITY_STURDY] =
    {
        .name = _("Sturdy"),
        .description = COMPOUND_STRING("Cannot be knocked out with\none hit."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Oblivious"),
        .description = COMPOUND_STRING("Prevents attraction and\nIntimidate."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Cloud Nine"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Shield Dust"),
        .description = COMPOUND_STRING("Prevents added effects and\nentry hazard damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Own Tempo"),
        .description = COMPOUND_STRING("Prevents confusion and\nIntimidate."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Suction Cups"),
        .description = COMPOUND_STRING("Firmly anchors the body."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wonder Guard"),
        .description = COMPOUND_STRING("Only “supereffective” hits."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitate"),
        .description = COMPOUND_STRING("Not hit by Ground attacks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MOUNTAINEER] =
    {
        .name = _("Mountaineer"),
        .description = COMPOUND_STRING("Not hit by Rock attacks\nand avoids Stealth Rocks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchronize"),
        .description = COMPOUND_STRING("Passes on brn/par/psn."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Clear Body"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Natural Cure"),
        .description = COMPOUND_STRING("Heals status upon switching\nout."),
        .aiRating = 7,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Serene Grace"),
        .description = COMPOUND_STRING("Doubles the users likelihood\n of additional effects occuring."),
        .aiRating = 8,
    },



    [ABILITY_TRACE] =
    {
        .name = _("Trace"),
        .description = COMPOUND_STRING("Copies a foe's Ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },



    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Soundproof"),
        .description = COMPOUND_STRING("Avoids sound-based moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Pressure"),
        .description = COMPOUND_STRING("Raises foe's PP usage."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Thick Fat"),
        .description = COMPOUND_STRING("Ups resistance to Fire and\nIce moves by 50%."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Early Bird"),
        .description = COMPOUND_STRING("Awakens twice as fast."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Run Away"),
        .description = COMPOUND_STRING("Makes escaping easier."),
        .updatedDescription = COMPOUND_STRING("Can’t be trapped"),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Keen Eye"),
        .description = COMPOUND_STRING("Prevents loss of accuracy."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Hyper Cutter"),
        .description = COMPOUND_STRING("Prevents Attack reduction."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Pickup"),
        .description = COMPOUND_STRING("Recovers consumed items.\n10% chance to find item after battle."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Truant"),
        .description = COMPOUND_STRING("Moves only every two turns."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Hustle"),
        .description = COMPOUND_STRING("Reduces accuracy by 20% but\nboosts Atk by 50%."),
        .aiRating = 7,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("Ups Sp. Atk with Minus."),
        .updatedDescription = COMPOUND_STRING("Ups Sp. Atk with Minus, Electric Terrain\nand in charged particles."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING("Ups Sp. Atk with Plus."),
        .updatedDescription = COMPOUND_STRING("Ups Sp. Atk with Plus, Electric Terrain\nand in charged particles."),
        .aiRating = 0,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Sticky Hold"),
        .description = COMPOUND_STRING("Held item can't be removed."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Shed Skin"),
        .description = COMPOUND_STRING("Has a 30% chance to heal\nits own status problem."),
        .aiRating = 7,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Liquid Ooze"),
        .description = COMPOUND_STRING("Draining causes injury."),
        .aiRating = 3,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Rock Head"),
        .description = COMPOUND_STRING("Prevents recoil damage."),
        .aiRating = 5,
    },



    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("White Smoke"),
        .description = COMPOUND_STRING("Stats can't be lowered."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Air Lock"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Tangled Feet"),
        .description = COMPOUND_STRING("Boosts evasion if confused."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalry"),
        .description = COMPOUND_STRING("Boosts moves by 25% if\nfoe is of same gender."),
        .aiRating = 1,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Anger Point"),
        .description = COMPOUND_STRING("Maxes Attack after a\ncritical hit"),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Unburden"),
        .description = COMPOUND_STRING("Doubles Speed if item\nis lost."),
        .aiRating = 7,
    },
    
    [ABILITY_BULL_RUSH] =
    {
        .name = _("Bull Rush"),
        .description = COMPOUND_STRING("Boosts power by 20%&\nSpeed by 50% on first turn."),
        .aiRating = 6,
    },



    [ABILITY_QUILL_RUSH] =
    {
        .name = _("Quill Rush"),
        .description = COMPOUND_STRING("Boosts power by 20%&\nSpeed by 50% on first turn."),
        .aiRating = 6,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Heatproof"),
        .description = COMPOUND_STRING("Halves Fire-type damage."),
        .aiRating = 5,
        .breakable = TRUE,
    },
    
    [ABILITY_SIMPLE] =
    {
        .name = _("Simple"),
        .description = COMPOUND_STRING("Doubles stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Dry Skin"),
        .description = COMPOUND_STRING("Heat reduces HP.\nWater restores HP."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("Adjusts power based on\nthe foe's stats."),
        .aiRating = 7,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Adaptability"),
        .description = COMPOUND_STRING("Boosts same type attacks\nby 2x instead of 1.5x."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Skill Link"),
        .description = COMPOUND_STRING("Multi-hit moves hit 5 times."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING("Cures status in rain."),
        .aiRating = 4,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Quick Feet"),
        .description = COMPOUND_STRING("Doubles Speed if it has\na status condition."),
        .aiRating = 5,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Sniper"),
        .description = COMPOUND_STRING("Critical hits deal 2.25x\ninstead of 1.5x."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magic Guard"),
        .description = COMPOUND_STRING("Only damaged by attacks."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("No Guard"),
        .description = COMPOUND_STRING("Ensures that all moves hit."),
        .aiRating = 8,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Technician"),
        .description = COMPOUND_STRING("Boosts moves with less\nthan 60 BP by 50%."),
        .aiRating = 8,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Klutz"),
        .description = COMPOUND_STRING("Can't use held items."),
        .aiRating = -1,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Super Luck"),
        .description = COMPOUND_STRING("Raises critical-hit ratio."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Aftermath"),
        .description = COMPOUND_STRING("Fainting damages the foe by\n1/4 its max HP."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Anticipation"),
        .description = COMPOUND_STRING("Senses dangerous moves."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Forewarn"),
        .description = COMPOUND_STRING("Warns of the foe's\nstrongest move."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unaware"),
        .description = COMPOUND_STRING("Ignores foes' stat changes."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Tinted Lens"),
        .description = COMPOUND_STRING("Doubles the damage of\nnot very effective moves."),
        .aiRating = 7,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Slow Start"),
        .description = COMPOUND_STRING("Takes 5 turns to get going."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Scrappy"),
        .description = COMPOUND_STRING("Can hit Ghost-types\nand prevents Intimidate."),
        .aiRating = 6,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honey Gather"),
        .description = COMPOUND_STRING("May gather Honey."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Frisk"),
        .description = COMPOUND_STRING("Reveals the foe's held\n item."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Reckless"),
        .description = COMPOUND_STRING("Boosts moves with recoil\nby 20%."),
        .aiRating = 6,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Bad Dreams"),
        .description = COMPOUND_STRING("Reduces sleeping foe's HP\nby 1/8 at end of turn."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Pickpocket"),
        .description = COMPOUND_STRING("Steals foe's item if hit."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Sheer Force"),
        .description = COMPOUND_STRING("Removes added effects to\nboost damage by 30%."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Contrary"),
        .description = COMPOUND_STRING("Reverses stat changes."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_BAD_COMPANY] =
    {
        .name = _("Bad Company"),
        .description = COMPOUND_STRING("Stops self-lowering stats\nand prevents recoil."),
        .aiRating = 8,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Defiant"),
        .description = COMPOUND_STRING("Gets +2 Attack when its\nstats are lowered."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Defeatist"),
        .description = COMPOUND_STRING("Halves Atk/SpAtk when its\nHP is at 1/3 or less."),
        .aiRating = -1,
    },




    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Weak Armor"),
        .description = COMPOUND_STRING("Being hit by phyiscal moves\ndrops Def but Raises Speed."),
        .aiRating = 2,
    },



    [ABILITY_OVERCOAT] =
    {
        .name = _("Overcoat"),
        .description = COMPOUND_STRING("Blocks weather and powder."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Regenerator"),
        .description = COMPOUND_STRING("Heals 1/3 HP when\nswitching out."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Big Pecks"),
        .description = COMPOUND_STRING("Prevents Defense loss."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wonder Skin"),
        .description = COMPOUND_STRING("May avoid status moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analytic"),
        .description = COMPOUND_STRING("Moving last boosts power\nby 30%."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Illusion"),
        .description = COMPOUND_STRING("Enters disguised and deals\n30% more damage."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Infiltrator"),
        .description = COMPOUND_STRING("Passes through barriers."),
        .aiRating = 6,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Justified"),
        .description = COMPOUND_STRING("Dark-type hits raise\nAttack."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Rattled"),
        .description = COMPOUND_STRING("Raises Speed when scared."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magic Bounce"),
        .description = COMPOUND_STRING("Reflects status moves."),
        .aiRating = 9,
        .breakable = TRUE,
    },













    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Aroma Veil"),
        .description = COMPOUND_STRING("Protects against mental\nproblems."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Flower Veil"),
        .description = COMPOUND_STRING("Protects Grass-types."),
        .aiRating = 0,
        .breakable = TRUE,
    },
    [ABILITY_MAGICIAN] =
    {
        .name = _("Magician"),
        .description = COMPOUND_STRING("Can steal foe's held\nitem after an attack."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Bulletproof"),
        .description = COMPOUND_STRING("Immune to some ball and\nbomb moves."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Competitive"),
        .description = COMPOUND_STRING("Gets +2 SpAtk when its\nstats are lowered."),
        .aiRating = 5,
    },


    













    [ABILITY_STAMINA] =
    {
        .name = _("Stamina"),
        .description = COMPOUND_STRING("Gain +1 Defense when hit."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Wimp Out"),
        .description = COMPOUND_STRING("Switches out below half HP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Emergency Exit"),
        .description = COMPOUND_STRING("Switches out below half HP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Water Compaction"),
        .description = COMPOUND_STRING("Halves Water damage and\nraises Defense."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Merciless"),
        .description = COMPOUND_STRING("Guarantees critical-hits\non poisoned foes."),
        .aiRating = 4,
    },

    [ABILITY_FATAL_PRECISION] =
    {
        .name = _("Fatal Precision"),
        .description = COMPOUND_STRING("Super effective moves can't\nmiss & boosted by 20%."),
        .aiRating = 6,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Stakeout"),
        .description = COMPOUND_STRING("Doubles damage if foe\nswitches out."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Water Bubble"),
        .description = COMPOUND_STRING("Doubles Water moves &\ntakes half from Fire moves."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Berserk"),
        .description = COMPOUND_STRING("Raises SpAtk if hit lowers\nit below half HP."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Long Reach"),
        .description = COMPOUND_STRING("Moves don't make contact."),
        .aiRating = 3,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Disguise"),
        .description = COMPOUND_STRING("Takes one hit with no\ndamage."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Corrosion"),
        .description = COMPOUND_STRING("Poison can hit\nSteel types."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Comatose"),
        .description = COMPOUND_STRING("This Pokémon cannot be statused,\nand is considered to be asleep."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Innards Out"),
        .description = COMPOUND_STRING("Fainting damages the foe\nequal to its last HP."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Dancer"),
        .description = COMPOUND_STRING("Copies dance moves."),
        .aiRating = 5,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Full Metal Body"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Neuroforce"),
        .description = COMPOUND_STRING("Powers up super effective\nhits by 25%."),
        .aiRating = 6,
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Ball Fetch"),
        .description = COMPOUND_STRING("Fetches first failed Ball."),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Cotton Down"),
        .description = COMPOUND_STRING("Lower Speed of all when hit."),
        .aiRating = 3,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Mirror Armor"),
        .description = COMPOUND_STRING("Reflect stat decreases."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Gulp Missile"),
        .description = COMPOUND_STRING("If hit, spits prey from sea."),
        .aiRating = 3,
        .cantBeSwapped = FALSE,
        .cantBeCopied = FALSE,
        .cantBeTraced = FALSE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Steam Engine"),
        .description = COMPOUND_STRING("Being hit by Fire/Water\nmoves maxes Speed."),
        .aiRating = 3,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Ice Face"),
        .description = COMPOUND_STRING("Hail renews one free hit."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Neutralizing Gas"),
        .description = COMPOUND_STRING("All Abilities are nullified."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Quick Draw"),
        .description = COMPOUND_STRING("Has a 30% chance to\nmove first."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Unseen Fist"),
        .description = COMPOUND_STRING("Contact moves bypass\nprotection."),
        .aiRating = 6,
    },





    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermal Exchange"),
        .description = COMPOUND_STRING("Fire-type hits raise Attack\nImmune to burn."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Anger Shell"),
        .description = COMPOUND_STRING("+Atk/SpA/Spe, -Def/SpD if\nhit lowers HP below 50%."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Purifying Salt"),
        .description = COMPOUND_STRING("Resists Ghost and immune\nto status."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Well-Baked Body"),
        .description = COMPOUND_STRING("Immune to Fire moves &\ngets +2 Defense instead."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Wind Rider"),
        .description = COMPOUND_STRING("Ups Attack if hit by wind."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Guard Dog"),
        .description = COMPOUND_STRING("Raises Atk if intimidated."),
        .aiRating = 5,
        .breakable = TRUE,
    },



    [ABILITY_WIND_POWER] =
    {
        .name = _("Wind Power"),
        .description = COMPOUND_STRING("Gets charged by wind."),
        .aiRating = 4,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Electromorphosis"),
        .description = COMPOUND_STRING("Gains Charge when hit\nby an attack."),
        .aiRating = 5,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Good as Gold"),
        .description = COMPOUND_STRING("Full immunity to status moves."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Opportunist"),
        .description = COMPOUND_STRING("Copies foe's stat change."),
        .aiRating = 5,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Supreme Overlord"),
        .description = COMPOUND_STRING("Boosts power depending on\nfainted allies."),
        .aiRating = 6,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Toxic Debris"),
        .description = COMPOUND_STRING("Sets Toxic Spikes when\nhit by a physical move."),
        .aiRating = 4,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Mycelium Might"),
        .description = COMPOUND_STRING("Status moves never fail."),
        .aiRating = 2,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Speed."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Sp. Def."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Embody Aspect"),
        .description = COMPOUND_STRING("Raises Defense."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Toxic Chain"),
        .description = COMPOUND_STRING("Attacks may badly poison."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Supersweet Syrup"),
        .description = COMPOUND_STRING("Lowers foes' evasion once."),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera Shell"),
        .description = COMPOUND_STRING("Resists all types at full HP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Teraform Zero"),
        .description = COMPOUND_STRING("Zeroes weather and terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Poison Puppeteer"),
        .description = COMPOUND_STRING("Poisoning also confuses."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_PIERCING_DRILL] =
    {
        .name = _("Piercing Drill"),
        .description = COMPOUND_STRING("Contact evades protection."),
    },


    [ABILITY_314] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
    },

    [ABILITY_317] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
    },

    [ABILITY_SPICY_SPRAY] =
    {
        .name = _("Spicy Spray"),
        .description = COMPOUND_STRING("Burns the foe when damaged."),
    },

};
