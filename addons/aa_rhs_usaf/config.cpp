#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rhsusf_main_loadorder", "ace_compat_rhs_usf3", "afibalance_common"};
        authors[] = {"Johnson", "Tuntematon"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
