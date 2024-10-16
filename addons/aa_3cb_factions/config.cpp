#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"uk3cb_factions_weapons","AfiBalance_main","A3_Data_F_ParticleEffects","A3_Weapons_F","afibalance_common"};
        authors[] = {"Tuntematon", "Enzio"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"