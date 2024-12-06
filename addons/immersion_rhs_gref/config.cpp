
#include "script_component.hpp"
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"AfiBalance_main","AfiBalance_immersion","rhsgref_c_weapons"};
		author[] = {};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};
// configs go here
#include "CfgAmmo.hpp"
