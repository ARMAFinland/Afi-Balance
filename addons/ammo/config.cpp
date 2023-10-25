#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"uk3cb_factions_weapons","TunBalance_main","A3_Data_F_ParticleEffects","A3_Weapons_F"};
        author = "Tuntematon";
        VERSION_CONFIG;
    };
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgCloudlets.hpp"