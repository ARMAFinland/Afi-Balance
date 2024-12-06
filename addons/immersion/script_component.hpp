#define COMPONENT immersion
#define COMPONENT_BEAUTIFIED immersion
#include "\x\AfiBalance\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_MAIN
	#define DEBUG_MODE_FULL
#endif

#include "\x\AfiBalance\addons\main\script_macros.hpp"

#define BASE_EXPLOSION_SUPPRESS_POWER 4
#define BASE_EXPLOSION_SUPPRESS_FORCE 2
#define RECOIL_SWAY_UPDATE_INTERVAL 0.2

#define SUPPRESSION_REDUCE_FACTOR (1/GVAR(suppressReduce))
#define SUPPRESSION_RANGE GVAR(suppressRange)
#define SUPPRESSION_POWER_FACTOR (1/(10-GVAR(suppressPower)))
#define OWN_BULLET_FACTOR GVAR(selfSuppressFactor)
