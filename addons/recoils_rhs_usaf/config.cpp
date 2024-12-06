
#include "script_component.hpp"
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main","afibalance_recoils","rhsusf_c_weapons","rhsusf_sounds","ace_compat_rhs_usf3","rhsusf_weapon_sounds","rhsusf_c_weaponsounds"};
		author[] = {};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};
// configs go here
#include "CfgWeapons.hpp"