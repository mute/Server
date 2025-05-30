#ifndef EVENT_CODES_H
#define EVENT_CODES_H

typedef enum {
	EVENT_SAY = 0,
	EVENT_TRADE,		//being given an item or money
	EVENT_DEATH,		//being killed
	EVENT_SPAWN,		//triggered when we first spawn
	EVENT_ATTACK,		//being attacked (resets after an interval of not being attacked)
	EVENT_COMBAT,		//being attacked or attacking (resets after an interval of not being attacked)
	EVENT_AGGRO,		//entering combat mode due to a PC attack
	EVENT_SLAY,			//killing a PC
	EVENT_NPC_SLAY,		//killing an NPC
	EVENT_WAYPOINT_ARRIVE,	// reaching a waypoint on a grid
	EVENT_WAYPOINT_DEPART,	// departing a waypoint on a grid
	EVENT_TIMER,
	EVENT_SIGNAL,
	EVENT_HP,
	EVENT_ENTER,		//PC entering your set proximity
	EVENT_EXIT,			//PC leaving your set proximity
	EVENT_ENTER_ZONE,		//PC only, you enter zone
	EVENT_CLICK_DOOR,		//pc only, you click a door
	EVENT_LOOT,			//pc only
	EVENT_ZONE,			//pc only
	EVENT_LEVEL_UP,		//pc only
	EVENT_KILLED_MERIT, //killed by a PC or group, gave experience; will repeat several times for groups
	EVENT_CAST_ON,		//pc casted a spell on npc
	EVENT_TASK_ACCEPTED,	//pc accepted a task
	EVENT_TASK_STAGE_COMPLETE,
	EVENT_TASK_UPDATE,
	EVENT_TASK_COMPLETE,
	EVENT_TASK_FAIL,
	EVENT_AGGRO_SAY,
	EVENT_PLAYER_PICKUP,
	EVENT_POPUP_RESPONSE,
	EVENT_ENVIRONMENTAL_DAMAGE,
	EVENT_PROXIMITY_SAY,
	EVENT_CAST,
	EVENT_CAST_BEGIN,
	EVENT_SCALE_CALC,
	EVENT_ITEM_ENTER_ZONE,
	EVENT_TARGET_CHANGE,	//target selected, target changed, or target removed
	EVENT_HATE_LIST,
	EVENT_SPELL_EFFECT_CLIENT,
	EVENT_SPELL_EFFECT_NPC,
	EVENT_SPELL_EFFECT_BUFF_TIC_CLIENT,
	EVENT_SPELL_EFFECT_BUFF_TIC_NPC,
	EVENT_SPELL_FADE,
	EVENT_SPELL_EFFECT_TRANSLOCATE_COMPLETE,
	EVENT_COMBINE_SUCCESS, //PC successfully combined a recipe
	EVENT_COMBINE_FAILURE, //PC failed to combine a recipe
	EVENT_ITEM_CLICK,	//SoF+ Item Right Clicked from worn or main/top inventory slot
	EVENT_ITEM_CLICK_CAST,
	EVENT_GROUP_CHANGE,
	EVENT_FORAGE_SUCCESS,
	EVENT_FORAGE_FAILURE,
	EVENT_FISH_START,
	EVENT_FISH_SUCCESS,
	EVENT_FISH_FAILURE,
	EVENT_CLICK_OBJECT,
	EVENT_DISCOVER_ITEM,
	EVENT_DISCONNECT,
	EVENT_CONNECT,
	EVENT_ITEM_TICK, // Unused, keeping so event IDs don't get out of wack
	EVENT_DUEL_WIN,
	EVENT_DUEL_LOSE,
	EVENT_ENCOUNTER_LOAD,
	EVENT_ENCOUNTER_UNLOAD,
	EVENT_COMMAND,
	EVENT_DROP_ITEM,
	EVENT_DESTROY_ITEM,
	EVENT_FEIGN_DEATH,
	EVENT_WEAPON_PROC,
	EVENT_EQUIP_ITEM,
	EVENT_UNEQUIP_ITEM,
	EVENT_AUGMENT_ITEM,
	EVENT_UNAUGMENT_ITEM,
	EVENT_AUGMENT_INSERT,
	EVENT_AUGMENT_REMOVE,
	EVENT_ENTER_AREA,
	EVENT_LEAVE_AREA,
	EVENT_RESPAWN,
	EVENT_DEATH_COMPLETE,
	EVENT_UNHANDLED_OPCODE,
	EVENT_TICK,
	EVENT_SPAWN_ZONE,
	EVENT_DEATH_ZONE,
	EVENT_USE_SKILL,
	EVENT_COMBINE_VALIDATE,
	EVENT_BOT_COMMAND,
	EVENT_WARP,
	EVENT_TEST_BUFF,
	EVENT_COMBINE,
	EVENT_CONSIDER,
	EVENT_CONSIDER_CORPSE,
	EVENT_LOOT_ZONE,
	EVENT_EQUIP_ITEM_CLIENT,
	EVENT_UNEQUIP_ITEM_CLIENT,
	EVENT_SKILL_UP,
	EVENT_LANGUAGE_SKILL_UP,
	EVENT_ALT_CURRENCY_MERCHANT_BUY,
	EVENT_ALT_CURRENCY_MERCHANT_SELL,
	EVENT_MERCHANT_BUY,
	EVENT_MERCHANT_SELL,
	EVENT_INSPECT,
	EVENT_TASK_BEFORE_UPDATE,
	EVENT_AA_BUY,
	EVENT_AA_GAIN,
	EVENT_AA_EXP_GAIN,
	EVENT_EXP_GAIN,
	EVENT_PAYLOAD,
	EVENT_LEVEL_DOWN,
	EVENT_GM_COMMAND,
	EVENT_DESPAWN,
	EVENT_DESPAWN_ZONE,
	EVENT_BOT_CREATE,
	EVENT_AUGMENT_INSERT_CLIENT,
	EVENT_AUGMENT_REMOVE_CLIENT,
	EVENT_EQUIP_ITEM_BOT,
	EVENT_UNEQUIP_ITEM_BOT,
	EVENT_DAMAGE_GIVEN,
	EVENT_DAMAGE_TAKEN,
	EVENT_ITEM_CLICK_CLIENT,
	EVENT_ITEM_CLICK_CAST_CLIENT,
	EVENT_DESTROY_ITEM_CLIENT,
	EVENT_DROP_ITEM_CLIENT,
	EVENT_MEMORIZE_SPELL,
	EVENT_UNMEMORIZE_SPELL,
	EVENT_SCRIBE_SPELL,
	EVENT_UNSCRIBE_SPELL,
	EVENT_LOOT_ADDED,
	EVENT_LDON_POINTS_GAIN,
	EVENT_LDON_POINTS_LOSS,
	EVENT_ALT_CURRENCY_GAIN,
	EVENT_ALT_CURRENCY_LOSS,
	EVENT_CRYSTAL_GAIN,
	EVENT_CRYSTAL_LOSS,
	EVENT_TIMER_PAUSE,
	EVENT_TIMER_RESUME,
	EVENT_TIMER_START,
	EVENT_TIMER_STOP,
	EVENT_ENTITY_VARIABLE_DELETE,
	EVENT_ENTITY_VARIABLE_SET,
	EVENT_ENTITY_VARIABLE_UPDATE,
	EVENT_AA_LOSS,
	EVENT_SPELL_BLOCKED,
	EVENT_READ_ITEM,

	// Add new events before these or Lua crashes
	EVENT_SPELL_EFFECT_BOT,
	EVENT_SPELL_EFFECT_BUFF_TIC_BOT,
	_LargestEventID
} QuestEventID;

extern const char *QuestEventSubroutines[_LargestEventID];

#endif

