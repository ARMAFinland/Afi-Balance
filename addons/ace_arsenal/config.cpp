#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main", "ace_arsenal"};
		authors[] = {"Tuntematon"};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};

class ace_arsenal_stats {
    class statBase;

    class GVAR(isAFIARMOR): statBase {
        scope = 2; // Only scope 2 show up in arsenal, scope 1 is used for base classes.
        displayName = "Afi armor tweaked"; // Title of the stat.
        priority = 100; // A higher value means the stat will be displayed higher on the page.
        stats[] = {"ItemInfo", "HitpointsProtectionInfo", "Chest", "armor", "PassThrough"}; // Array of strings to pass to the statements, typically
        showBar = 0; // 0 disabled; 1 enabled;
        showText = 1; // 0 disabled; 1 enabled;
        textStatement = "True"; // statement evaluated to set the text entry, can return anything. Arrays will have a linebreak added after each element.
		condition = QUOTE(params[ARR_2('_stat','_config')];
            (getNumber(_config >> _stat select 0 >> _stat select 1 >> _stat select 2 >> _stat select 3)) isEqualTo ARMOR_VALUE &&
            (getNumber(_config >> _stat select 0 >> _stat select 1 >> _stat select 2 >> _stat select 4)) isEqualTo PASS_THROUGH_VALUE);
        tabs[] = { {4}, { } }; // Arrays of tabs, left array is left tabs, right array is right tabs.
    };
    
    class GVAR(isAFI_MAG): statBase {
        scope = 2; // Only scope 2 show up in arsenal, scope 1 is used for base classes.
        displayName = "Afi ammo tweaked"; // Title of the stat.
        priority = 100; // A higher value means the stat will be displayed higher on the page.
        stats[] = {"ammo", "CfgAmmo", "hit", "caliber"}; // Array of strings to pass to the statements, typically
        showBar = 0; // 0 disabled; 1 enabled;
        showText = 1; // 0 disabled; 1 enabled;
        textStatement = "True"; // statement evaluated to set the text entry, can return anything. Arrays will have a linebreak added after each element.
		condition = QUOTE(params[ARR_2('_stat','_config')]; private _ammo = getText(_config >> _stat select 0);
        (getNumber(configFile >> _stat select 1 >> _ammo >> _stat select 2)) isEqualTo BASE_HIT &&
        (getNumber(configFile >> _stat select 1 >> _ammo >> _stat select 3)) isEqualTo BASE_CALIBER);
        tabs[] = { {}, {4} }; // Arrays of tabs, left array is left tabs, right array is right tabs.
    };
};
