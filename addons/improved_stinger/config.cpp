#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rhsusf_c_airweapons","rhsusf_c_weapons","ace_compat_rhs_usf3","A3_Weapons_F","A3_Weapons_F_Launchers_Titan","rhsusf_c_heavyweapons","A3_Sounds_F","ace_frag", AFIBALANCE_COMMON};
        authors[] = {"Johnson","Tuntematon"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"