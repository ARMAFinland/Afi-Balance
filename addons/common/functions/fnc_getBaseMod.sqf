/*
 * Author: [Tuntematon]
 * [Description]
 * Resolve a base mod/addon name from either a direct addon string or a config classname.
 *
 * Arguments:
 * 0: Base mod or classname <STRING>
 * 1: Config roots to search <ARRAY> (optional)
 *
 * Return Value:
 * Base mod/addon name <STRING>
 *
 * Example:
 * ["rhsusf_iotv_ocp_base"] call afibalance_common_fnc_getBaseMod;
 */
#include "script_component.hpp"
params [
    ["_baseModOrClassName", "", [""]],
    ["_configRoots", ["CfgWeapons", "CfgMagazines", "CfgAmmo", "CfgVehicles", "CfgGlasses"], [[]]]
];

if (_baseModOrClassName isEqualTo "") exitWith {""};

private _cfg = configNull;
{
    private _candidate = configFile >> _x >> _baseModOrClassName;
    if (isClass _candidate) exitWith {
        _cfg = _candidate;
    };
} forEach _configRoots;

if (isNull _cfg) exitWith {_baseModOrClassName};

private _addons = configSourceAddonList _cfg;
if (_addons isEqualTo []) exitWith {""};

private _preferredAddons = _addons select {
    (_x isNotEqualTo "") &&
    {(_x select [0, 11]) != "afibalance_"}
};

_preferredAddons param [0, _addons param [0, ""]]
