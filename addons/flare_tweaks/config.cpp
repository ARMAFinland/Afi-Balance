#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"AfiBalance_main","A3_Weapons_F","ace_grenades","ace_rearm"};
		authors[] = {"Tikka", "Tuntematon"};
		VERSION_CONFIG;
	};
};

// configs go here
#include "CfgAmmo.hpp"