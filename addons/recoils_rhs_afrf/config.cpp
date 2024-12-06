
#include "script_component.hpp"
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main","afibalance_recoils","rhs_c_weapons","rhs_sounds","ace_compat_rhs_afrf3","rhs_c_weaponsounds"};
		author[] = {};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};
// configs go here
#include "CfgWeapons.hpp"
