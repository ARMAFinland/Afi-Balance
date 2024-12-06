
#include "script_component.hpp"
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"AfiBalance_main","afibalance_recoils","UK3CB_BAF_Weapons_L7","UK3CB_BAF_Weapons_L1A1"};
		author[] = {};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};
// configs go here
#include "CfgWeapons.hpp"