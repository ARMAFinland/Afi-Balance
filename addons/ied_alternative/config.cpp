#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ace_explosives","A3_Weapons_F","Extended_EventHandlers", "afibalance_main"};
		authors[] = {"Johnson", "Anatooli", "Tuntematon"};
		VERSION_CONFIG;
		//skipWhenMissingDependencies = 1;
	};
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"

class CfgMineTriggers {
	class RangeTrigger;
	class RangeTriggerIEDSmall: RangeTrigger {
		mineTriggerRange = 1;
		mineTriggerActivation = 3;
		mineDelay = 0.5;
	};
	class RangeTriggerIEDBig: RangeTrigger {
		mineTriggerRange = 1;
		mineTriggerActivation = 3;
		mineDelay = 0.5;
	};
};