#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ace_explosives","ace_frag","A3_Weapons_F_Explosives","cba_xeh", "afibalance_main"};
		authors[] = {"Johnson", "Anatooli", "Tuntematon"};
		VERSION_CONFIG;
		//skipWhenMissingDependencies = 1;
	};
};

// configs go here
#include "CfgAmmo.hpp"

class CfgMineTriggers {
	class RangeTrigger;
	class RangeTriggerBounding: RangeTrigger {
		mineDelay = 2; // Default: 1
		mineTriggerActivationRange = 3; // Default: 5
		mineTriggerRange = 1; // Default: 3
	};
};
