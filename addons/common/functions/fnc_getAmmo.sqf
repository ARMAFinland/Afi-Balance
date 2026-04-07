/*
 * Author: [Tuntematon]
 * [Description]
 * Generate a ready-to-paste CfgAmmo block from magazine or ammo classnames.
 *
 * Arguments:
 * 0: Magazine or ammo classnames <ARRAY or STRING>
 * 1: Copy result to clipboard <BOOL>
 *
 * Return Value:
 * Generated config text <STRING>
 *
 * Example:
 * [["rhs_mag_30Rnd_556x45_M855A1_PMAG"]] call afibalance_common_fnc_getAmmo;
 * [["rhs_mag_30Rnd_556x45_M855A1_PMAG"]] call afibalance_common_fnc_getAmmo;
 */
#include "script_component.hpp"
params [
    ["_classNames", [], [[], ""]],
    ["_copyToClipboard", true, [true]]
];

if (_classNames isEqualType "") then {
    _classNames = [_classNames];
};

private _ammoClassNames = [];
private _ammoToMagazines = createHashMap;
private _requiredAddons = [];
private _modFamilyCounts = createHashMap;
private _modFamilyOrder = [];
private _primaryModFamilyPrefix = "";
private _directAmmoInputs = [];
private _inputMappings = [];

private _fnc_registerFamilyPrefix = {
    params ["_value"];

    private _normalizedValue = toLower _value;
    if (_normalizedValue isEqualTo "") exitWith {};

    private _prefix = (_normalizedValue splitString "_") param [0, ""];
    if (_prefix isEqualTo "") exitWith {};

    private _currentCount = _modFamilyCounts getOrDefault [_prefix, 0];
    if (_currentCount isEqualTo 0) then {
        _modFamilyOrder pushBack _prefix;
    };
    _modFamilyCounts set [_prefix, _currentCount + 1];
};

{
    [_x] call _fnc_registerFamilyPrefix;
    private _baseAddon = [_x, ["CfgMagazines", "CfgAmmo"]] call FUNC(getBaseMod);
    [_baseAddon] call _fnc_registerFamilyPrefix;

    private _ammoClassName = "";

    if (isClass (configFile >> "CfgMagazines" >> _x)) then {
        _ammoClassName = getText (configFile >> "CfgMagazines" >> _x >> "ammo");
    } else {
        if (isClass (configFile >> "CfgAmmo" >> _x)) then {
            _ammoClassName = _x;
            _directAmmoInputs pushBackUnique _x;
        };
    };

    if ((_ammoClassName isNotEqualTo "") && {isClass (configFile >> "CfgAmmo" >> _ammoClassName)}) then {
        _ammoClassNames pushBackUnique _ammoClassName;
        _inputMappings pushBack [_x, _ammoClassName];
    } else {
        _inputMappings pushBack [_x, ""];
    };
} forEach _classNames;

{
    private _familyPrefix = _x;
    private _familyCount = _modFamilyCounts getOrDefault [_familyPrefix, 0];

    if (_familyCount > (_modFamilyCounts getOrDefault [_primaryModFamilyPrefix, -1])) then {
        _primaryModFamilyPrefix = _familyPrefix;
    };
} forEach _modFamilyOrder;

private _fnc_isSameModFamily = {
    params ["_ammoClassName"];

    if (_ammoClassName in _directAmmoInputs) exitWith {true};
    if (_primaryModFamilyPrefix isEqualTo "") exitWith {true};

    private _ammoCfg = configFile >> "CfgAmmo" >> _ammoClassName;
    if (!isClass _ammoCfg) exitWith {false};

    private _normalizedClassName = toLower _ammoClassName;
    private _classPrefix = (_normalizedClassName splitString "_") param [0, ""];
    if (_classPrefix isEqualTo _primaryModFamilyPrefix) exitWith {true};

    ((configSourceAddonList _ammoCfg) findIf {
        private _addonPrefix = ((toLower _x) splitString "_") param [0, ""];
        _addonPrefix isEqualTo _primaryModFamilyPrefix
    }) isNotEqualTo -1
};

private _selectedAmmoClassNames = _ammoClassNames select {[_x] call _fnc_isSameModFamily};

{
    private _magazineName = configName _x;
    private _ammoClassName = getText (_x >> "ammo");

    if (_ammoClassName in _selectedAmmoClassNames) then {
        private _magazinesForAmmo = _ammoToMagazines getOrDefault [_ammoClassName, []];
        _magazinesForAmmo pushBackUnique _magazineName;
        _ammoToMagazines set [_ammoClassName, _magazinesForAmmo];
    };
} forEach ("true" configClasses (configFile >> "CfgMagazines"));

private _cfgArray = (_selectedAmmoClassNames apply {configFile >> "CfgAmmo" >> _x}) select {isClass _x};
private _exportedClassNames = _cfgArray apply {configName _x};

{
    {
        if ((_x isNotEqualTo "") && {(_x select [0, 11]) != "afibalance_"}) then {
            _requiredAddons pushBackUnique _x;
        };
    } forEach (configSourceAddonList _x);
} forEach _cfgArray;

private _nl = toString [13, 10];
private _externalParents = [];
private _classBlocks = [];

private _fnc_sortClassConfigsByParent = {
    params ["_cfgs"];

    private _pending = +_cfgs;
    private _sorted = [];
    private _pendingNames = _pending apply {configName _x};

    while {_pending isNotEqualTo []} do {
        private _progress = false;

        {
            private _cfg = _x;
            private _className = configName _cfg;
            private _parentName = configName (inheritsFrom _cfg);

            if (!(_parentName in _pendingNames) || {_parentName isEqualTo _className}) then {
                _sorted pushBack _cfg;
                _pending = _pending - [_cfg];
                _pendingNames = _pendingNames - [_className];
                _progress = true;
            };
        } forEach +_pending;

        if (!_progress) exitWith {
            _sorted append _pending;
            _pending = [];
        };
    };

    _sorted
};

{
    private _className = configName _x;
    private _parentName = configName (inheritsFrom _x);

    if (
        (_parentName isNotEqualTo "") &&
        {!(_parentName in _exportedClassNames)} &&
        {!(_parentName in _externalParents)}
    ) then {
        _externalParents pushBack _parentName;
    };

    private _classHeader = if (_parentName isEqualTo "") then {
        format ["    class %1 {", _className]
    } else {
        format ["    class %1: %2 {", _className, _parentName]
    };
    private _magazinesForAmmo = _ammoToMagazines getOrDefault [_className, []];
    private _magazineComment = if (_magazinesForAmmo isEqualTo []) then {
        format ["    // Used by ammo classname input: %1", _className]
    } else {
        format ["    // Used by magazines: %1", _magazinesForAmmo joinString ", "]
    };

    _classBlocks pushBack format [
        "%1%2%3%4        _UNIVERSAL_AMMO_DAMAGES_%4    };",
        _magazineComment,
        _nl,
        _classHeader,
        _nl
    ];
} forEach ([_cfgArray] call _fnc_sortClassConfigsByParent);

private _externalDeclarations = (_externalParents apply {
    format ["    class %1;", _x]
}) joinString _nl;

private _usedParametersComment = format [
    "// %1 call afibalance_common_fnc_getAmmo;",
    str [_classNames]
];
private _requiredAddonsComment = format [
    "// requiredAddons[] = {%1};",
    (_requiredAddons apply {format ['"%1"', _x]}) joinString ", "
];
private _excludedInputs = _inputMappings select {
    private _resolvedAmmo = _x select 1;
    (_resolvedAmmo isEqualTo "") || {!(_resolvedAmmo in _exportedClassNames)}
};
private _excludedInputsComment = if (_excludedInputs isEqualTo []) then {
    "// Excluded inputs: none"
} else {
    format [
        "// Excluded inputs: %1",
        (_excludedInputs apply {
            private _inputName = _x select 0;
            private _resolvedAmmo = _x select 1;
            if (_resolvedAmmo isEqualTo "") then {
                format ["%1 -> <no ammo resolved>", _inputName]
            } else {
                private _resolvedAddon = [_resolvedAmmo, ["CfgAmmo"]] call FUNC(getBaseMod);
                if (_resolvedAddon isEqualTo "") then {
                    format ["%1 -> %2", _inputName, _resolvedAmmo]
                } else {
                    format ["%1 -> %2 (%3)", _inputName, _resolvedAmmo, _resolvedAddon]
                }
            }
        }) joinString "; "
    ]
};
private _ammoCountComment = format ["// Redefines values for %1 ammo class(es). This is auto exported config", count _classBlocks];

private _result = if (_classBlocks isEqualTo []) then {
    format ["%1%2%2%3%2%4%2%5%2class CfgAmmo {};" + _nl, _ammoCountComment, _nl, _usedParametersComment, _requiredAddonsComment, _excludedInputsComment]
} else {
    if (_externalDeclarations isEqualTo "") then {
        format [
            "%1%2%2%3%2%4%2%5%2class CfgAmmo {%2%6%2};%2",
            _ammoCountComment,
            _nl,
            _usedParametersComment,
            _requiredAddonsComment,
            _excludedInputsComment,
            _classBlocks joinString (_nl + _nl)
        ]
    } else {
        format [
            "%1%2%2%3%2%4%2%5%2class CfgAmmo {%2%6%2%2%7%2};%2",
            _ammoCountComment,
            _nl,
            _usedParametersComment,
            _requiredAddonsComment,
            _excludedInputsComment,
            _externalDeclarations,
            _classBlocks joinString (_nl + _nl)
        ]
    };
};

if (_copyToClipboard) then {
    copyToClipboard _result;
};

_result
