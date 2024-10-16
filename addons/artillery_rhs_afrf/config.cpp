#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rhs_c_heavyweapons","rhs_main_loadorder","AfiBalance_artillery_vanilla"};
        authors[] = {"Johnson", "Tuntematon"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

// configs go here
#include "CfgAmmo.hpp"