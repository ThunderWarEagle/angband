/**
   \file list-effects.h
   \brief List of effects
*/
/* name 							aim?	info	short description */
EFFECT(RANDOM,						FALSE,	NULL,	"at random")
EFFECT(HEAL_HP,						FALSE,	"heal",	"heals some hitpoints")
EFFECT(NOURISH,						FALSE,	NULL,	"feeds you")
EFFECT(CRUNCH,						FALSE,	NULL,	"crunches")
EFFECT(CURE,						FALSE,	NULL,	"cures status")
EFFECT(TIMED_SET,					FALSE,	NULL,	"sets status")
EFFECT(TIMED_INC,					FALSE,	"dur",	"increases status")
EFFECT(TIMED_DEC,					FALSE,	NULL,	"cures some status")
EFFECT(SET_NOURISH,					FALSE,	NULL,	"sets your stomach contents")
EFFECT(CONFUSING,					FALSE,	NULL,	"causes your next attack upon a monster to confuse it")
EFFECT(RUNE,						FALSE,	NULL,	"inscribes a glyph of warding beneath you, which monsters cannot move onto")
EFFECT(RESTORE_STAT,				FALSE,	NULL,	"restores a stat")
EFFECT(DRAIN_STAT,					FALSE,	NULL,	"reduces a stat with damage")
EFFECT(LOSE_RANDOM_STAT,			FALSE,	NULL,	"reduces a stat")
EFFECT(GAIN_STAT,					FALSE,	NULL,	"increases a stat")
EFFECT(RESTORE_EXP,					FALSE,	NULL,	"restores your experience")
EFFECT(GAIN_EXP,					FALSE,	NULL,	"increases your experience")
EFFECT(LOSE_EXP,					FALSE,	NULL,	"loses a quarter of your experience")
EFFECT(RESTORE_MANA,				FALSE,	NULL,	"restores some mana")
EFFECT(REMOVE_CURSE,				FALSE,	NULL,	"removes curses")
EFFECT(REMOVE_ALL_CURSE,			FALSE,	NULL,	"removes all curses")
EFFECT(RECALL,						FALSE,	NULL,	"returns you from the dungeon or takes you to the dungeon after a short delay")
EFFECT(DEEP_DESCENT,				FALSE,	NULL,	"teleports you five levels down")
EFFECT(ALTER_REALITY,				FALSE,	NULL,	"creates a new dungeon level")
EFFECT(MAP_AREA,					FALSE,	NULL,	"maps the area around you")
EFFECT(DETECT_TRAPS,				FALSE,	NULL,	"detects traps nearby")
EFFECT(DETECT_DOORS,				FALSE,	NULL,	"detects doors nearby")
EFFECT(DETECT_STAIRS,				FALSE,	NULL,	"detects stairs nearby")
EFFECT(DETECT_GOLD,					FALSE,	NULL,	"detects gold nearby")
EFFECT(SENSE_OBJECTS,				FALSE,	NULL,	"senses objects nearby")
EFFECT(DETECT_OBJECTS,				FALSE,	NULL,	"detects objects nearby")
EFFECT(DETECT_VISIBLE_MONSTERS,		FALSE,	NULL,	"detects visible creatures nearby")
EFFECT(DETECT_INVISIBLE_MONSTERS,	FALSE,	NULL,	"detects invisible creatures nearby")
EFFECT(DETECT_EVIL,					FALSE,	NULL,	"detects evil creatures nearby")
EFFECT(CREATE_STAIRS,				FALSE,	NULL,	"creates a staircase beneath your feet")
EFFECT(DISENCHANT,					FALSE,	NULL,	"disenchants one of your wielded items")
EFFECT(ENCHANT,						FALSE,	NULL,	"attempts to magically enhance an item")
EFFECT(IDENTIFY,					FALSE,	NULL,	"reveals to you the extent of an item's magical powers")
EFFECT(IDENTIFY_PACK,				FALSE,	NULL,	"identifies all items in your pack")
EFFECT(RECHARGE,					FALSE,	NULL,	"tries to recharge a wand or staff, destroying the wand or staff on failure")
EFFECT(PROJECT_LOS,					FALSE,	"dam",	"affects all monsters in line of sight")
EFFECT(ACQUIRE,						FALSE,	NULL,	"creates good items nearby")
EFFECT(AGGRAVATE,					FALSE,	NULL,	"awakens all nearby sleeping monsters and hastens all monsters within line of sight")
EFFECT(SUMMON,						FALSE,	NULL,	"summons monsters at the current dungeon level")
EFFECT(BANISH,						FALSE,	NULL,	"removes all of a given creature type from the level")
EFFECT(MASS_BANISH,					FALSE,	NULL,	"removes all nearby creatures")
EFFECT(PROBE,						FALSE,	NULL,	"gives you information on the health and abilities of monsters you can see")
EFFECT(TELEPORT,					FALSE,	"range",	"teleports you randomly")
EFFECT(TELEPORT_TO,					FALSE,	NULL,	"teleports you to a monster")
EFFECT(TELEPORT_LEVEL,				FALSE,	NULL,	"teleports you one level up <or down")
EFFECT(DESTRUCTION,					FALSE,	NULL,	"destroys an area around you in the shape of a circle radius 15, and blinds you for 1d10+10 turns")
EFFECT(EARTHQUAKE,					FALSE,	NULL,	"causes an earthquake around you")
EFFECT(ENLIGHTENMENT,				FALSE,	NULL,	"completely lights up and magically maps the level")
EFFECT(LIGHT_AREA,					FALSE,	NULL,	"lights up the surrounding area, hurting light-sensitive creatures")
EFFECT(DARKEN_AREA,					FALSE,	NULL,	"darkens the surrounding area")
EFFECT(BALL,						TRUE,	"dam",	"fires a ball")
EFFECT(BREATH,						TRUE,	NULL,	"fires a ball")
EFFECT(SWARM,						TRUE,	"dam",	"fires a series of balls")
EFFECT(STAR,						FALSE,	"dam",	"fires a line in all directions")
EFFECT(STAR_BALL,					FALSE,	"dam",	"fires balls in all directions")
EFFECT(BOLT,						TRUE,	"dam",	"creates a bolt")
EFFECT(BEAM,						TRUE,	"dam",	"creates a beam")
EFFECT(BOLT_OR_BEAM,				TRUE,	"dam",	"creates a bolt or beam")
EFFECT(LINE,						TRUE,	"dam",	"creates a line")
EFFECT(ALTER,						TRUE,	NULL,	"creates a line which may affect terrain and/or items")
EFFECT(BOLT_AWARE,					TRUE,	"dam",	"creates a bolt")
EFFECT(TOUCH,						FALSE,	NULL,	"affects all adjacent squares")
EFFECT(TOUCH_AWARE,					FALSE,	NULL,	"affects all adjacent squares")
EFFECT(CURSE_ARMOR,					FALSE,	NULL,	"curses your worn armor")
EFFECT(CURSE_WEAPON,				FALSE,	NULL,	"curses your wielded melee weapon")
EFFECT(BRAND_WEAPON,				FALSE,	NULL,	"brands your wielded melee weapon")
EFFECT(BRAND_AMMO,					FALSE,	NULL,	"brands a stack of ammunition")
EFFECT(BRAND_BOLTS,					FALSE,	NULL,	"brands bolts with fire, in an unbalanced fashion")
EFFECT(BIZARRE,						TRUE,	NULL,	"does bizarre things")
EFFECT(WONDER,						TRUE,	NULL,	"creates random and unpredictable effects")

EFFECT(TRAP_DOOR,					FALSE,	NULL,	"a trap door which drops you down a level")
EFFECT(TRAP_PIT,					FALSE,	NULL,	"a pit trap - the fall might hurt")
EFFECT(TRAP_PIT_SPIKES,				FALSE,	NULL,	"a pit trap, with nasty spikes")
EFFECT(TRAP_PIT_POISON,				FALSE,	NULL,	"a pit trap, with poisoned spikes")
EFFECT(TRAP_RUNE_SUMMON,			FALSE,	NULL,	"a rune which summons monsters")
EFFECT(TRAP_RUNE_TELEPORT,			FALSE,	NULL,	"a rune which teleports")
EFFECT(TRAP_SPOT_FIRE,				FALSE,	NULL,	"a magical fire trap")
EFFECT(TRAP_SPOT_ACID,				FALSE,	NULL,	"a magical acid trap")
EFFECT(TRAP_DART_SLOW,				FALSE,	NULL,	"a dart which slows movements")
EFFECT(TRAP_DART_LOSE_STR,			FALSE,	NULL,	"a dart which drains strength")
EFFECT(TRAP_DART_LOSE_DEX,			FALSE,	NULL,	"a dart which drains dexterity")
EFFECT(TRAP_DART_LOSE_CON,			FALSE,	NULL,	"a dart which drains constitution")
EFFECT(TRAP_GAS_BLIND,				FALSE,	NULL,	"blinding gas")
EFFECT(TRAP_GAS_CONFUSE,			FALSE,	NULL,	"confusing gas")
EFFECT(TRAP_GAS_POISON,				FALSE,	NULL,	"poison gas")
EFFECT(TRAP_GAS_SLEEP,				FALSE,	NULL,	"soporific gas")
