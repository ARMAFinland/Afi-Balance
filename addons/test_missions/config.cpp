#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main"};
		authors[] = {"Tuntematon"};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};

// class CfgMissions {
// 	class MPMissions {
// 		class damage_medical_testing {
// 			briefingName = "HALOOOOOO";
// 			directory = "x\afibalance\addons\test_missions\damage_medical_testing.VR";
// 		};
// 	};
// };

