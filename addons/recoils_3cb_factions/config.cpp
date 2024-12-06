
#include "script_component.hpp"
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main","afibalance_recoils","UK3CB_Factions_Weapons_AK47","UK3CB_Factions_Weapons_G3","UK3CB_Factions_Weapons_Khaybar","UK3CB_Factions_Weapons_ACR","UK3CB_Factions_Weapons_FAMAS","UK3CB_Factions_Weapons_G36","UK3CB_Factions_Weapons_MG3","UK3CB_Factions_Weapons_STGW","UK3CB_Factions_Weapons_FNFAL","UK3CB_Factions_Weapons_AUG"};
		author[] = {};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};
// configs go here
#include "CfgWeapons.hpp"
