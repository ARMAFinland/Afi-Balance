#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_Weapons_F","A3_Sounds_F","ace_frag", "AfiBalance_main"};
		authors[] = {"Johnson", "Tuntematon"};
		VERSION_CONFIG;
		//skipWhenMissingDependencies = 1;
	};
};

// configs go here
#include "CfgAmmo.hpp"