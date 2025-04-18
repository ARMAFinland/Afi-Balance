#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_Ui_F", "afibalance_main"};
		authors[] = {"Tuntematon"};
		VERSION_CONFIG;
	};
};

// configs go here
#include "CfgCloudlets.hpp"
#include "CfgInGameUI.hpp"
