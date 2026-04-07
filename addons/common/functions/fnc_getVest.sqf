/*
 * Author: [Tuntematon]
 * [Description]
 * 
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * ["rhsusf_c_troops"] call afibalance_common_fnc_getVest;
 * ["rhsusf_iotv_ocp_base"] call afibalance_common_fnc_getVest;
 */
#include "script_component.hpp"
params [
    ["_baseModOrClassName", "", [""]],
    ["_minArmorValue", 6, [0]],
    ["_copyToClipboard", true, [true]]
];

private _baseMod = [_baseModOrClassName, ["CfgWeapons", "CfgVehicles"]] call FUNC(getBaseMod);
private _cfgWeaponsRoot = configFile >> "CfgWeapons";
private _nl = toString [13, 10];

private _fnc_getClassHeader = {
    params ["_className", ["_inherits", false, [true]]];

    if (_inherits) exitWith {
        format ["class %1: %1", _className]
    };

    format ["class %1", _className]
};

private _fnc_hasConfigValue = {
    params ["_valueCfg"];

    isNumber _valueCfg || {isText _valueCfg}
};

private _fnc_getResolvedConfigValue = {
    params ["_valueCfg", ["_default", -1, [0]]];

    if (isNumber _valueCfg) exitWith {getNumber _valueCfg};

    if (isText _valueCfg) then {
        private _rawValue = getText _valueCfg;
        if (_rawValue isNotEqualTo "") then {
            private _compiledValue = nil;
            private _compileFailed = isNil {
                _compiledValue = call compile _rawValue;
            };

            if (!_compileFailed && {_compiledValue isEqualType 0}) exitWith {
                _compiledValue
            };
        };
    };

    _default
};

private _fnc_valueDefinedOnClass = {
    params ["_valueCfg", "_className"];

    ([_valueCfg] call _fnc_hasConfigValue) && {(configName ((configHierarchy (inheritsFrom _valueCfg)) select 2)) isEqualTo _className}
};

private _fnc_classDefinesProtectionOnSelf = {
    params ["_cfg"];

    private _className = configName _cfg;
    private _hitpointsCfg = _cfg >> "ItemInfo" >> "HitpointsProtectionInfo";
    private _definesProtectionOnSelf = false;

    {
        if (
            ([(_x >> "armor"), _className] call _fnc_valueDefinedOnClass) ||
            {[(_x >> "passThrough"), _className] call _fnc_valueDefinedOnClass}
        ) exitWith {
            _definesProtectionOnSelf = true;
        };
    } forEach ("isClass _x" configClasses _hitpointsCfg);

    _definesProtectionOnSelf
};

private _fnc_getParentNameForClass = {
    params ["_className"];

    if (_className isEqualTo "") exitWith {""};

    configName (inheritsFrom (_cfgWeaponsRoot >> _className))
};

// configSourceAddonList (configFile >> "CfgWeapons" >> "rhs_6b5_medic")
// "rhs_c_troops" in ((configSourceAddonList (configFile >> "CfgWeapons" >> "rhs_6b5_medic")) pushBack "")
private _condition = toString {
    if (
        !isClass (_x >> "ItemInfo" >> "HitpointsProtectionInfo" >> "Chest") ||
        {(_baseMod isNotEqualTo "") && {!(_baseMod in (configSourceAddonList _x))}}
    ) exitWith {
        false
    };

    private _parentVest = inheritsFrom _x;
    private _parentMatchesBaseMod = (_baseMod isNotEqualTo "") && {_baseMod in (configSourceAddonList _parentVest)};
    private _chestCfg = _x >> "ItemInfo" >> "HitpointsProtectionInfo" >> "Chest";
    private _armorCfg = _chestCfg >> "armor";
    private _passThroughCfg = _chestCfg >> "passThrough";

    if (!([_armorCfg] call _fnc_hasConfigValue) || {!([_passThroughCfg] call _fnc_hasConfigValue)}) exitWith {
        false
    };

    private _armorValue = [_armorCfg] call _fnc_getResolvedConfigValue;
    private _definesProtectionOnSelf = [_x] call _fnc_classDefinesProtectionOnSelf;
    private _firstClassFromBaseMod = (_baseMod isNotEqualTo "") && {!_parentMatchesBaseMod};
    private _meetsArmorThreshold = if (_armorValue isEqualTo -1) then {
        isText _armorCfg
    } else {
        _armorValue >= _minArmorValue
    };

    (_definesProtectionOnSelf || {_firstClassFromBaseMod}) &&
    _meetsArmorThreshold
};
private _cfgArray = _condition configClasses _cfgWeaponsRoot;
private _exportedClassNames = _cfgArray apply {configName _x};

private _externalForwardNames = [];
private _externalForwardWithItemInfoNames = [];
private _externalDetailedNames = [];
private _classEntries = [];
private _generatedClassNames = [];

private _fnc_registerExternalParent = {
    params ["_cfg", ["_needsDetails", false, [true]]];

    if (isNull _cfg) exitWith {};

    private _className = configName _cfg;
    private _parentName = configName (inheritsFrom _cfg);
    if (
        (_className isEqualTo "") ||
        {(_className isEqualTo "ItemCore")} ||
        {(_className in _exportedClassNames)}
    ) exitWith {};

    if (
        (_parentName isNotEqualTo "") &&
        {_parentName isNotEqualTo _className} &&
        {_parentName isNotEqualTo "ItemCore"} &&
        {!(_parentName in _exportedClassNames)} &&
        {!(_parentName in _externalDetailedNames)} &&
        {!(_parentName in _externalForwardNames)}
    ) then {
        _externalForwardNames pushBack _parentName;
    };

    if (_needsDetails) then {
        if !(_className in _externalDetailedNames) then {
            _externalDetailedNames pushBack _className;
        };

        _externalForwardNames = _externalForwardNames - [_className];
    } else {
        if (
            !(_className in _externalDetailedNames) &&
            {!(_className in _externalForwardNames)}
        ) then {
            _externalForwardNames pushBack _className;
        };
    };
};

private _fnc_externalParentHasDetailedHitpoints = {
    params ["_cfg"];

    isClass (_cfg >> "ItemInfo" >> "HitpointsProtectionInfo")
};

private _fnc_getGeneratedParentCapabilities = {
    params ["_className"];

    if (_className isEqualTo "") exitWith {[false, false]};

    private _cfg = _cfgWeaponsRoot >> _className;

    if (_className in _generatedClassNames) exitWith {
        [
            isClass (_cfg >> "ItemInfo"),
            isClass (_cfg >> "ItemInfo" >> "HitpointsProtectionInfo")
        ]
    };

    if (_className in _externalDetailedNames) exitWith {
        [
            isClass (_cfg >> "ItemInfo"),
            [_cfg] call _fnc_externalParentHasDetailedHitpoints
        ]
    };

    if (_className in _externalForwardNames) exitWith {
        [(_className in _externalForwardWithItemInfoNames), false]
    };

    [false, false]
};

private _fnc_getExternalParentDeclaration = {
    params ["_className", ["_needsDetails", false, [true]]];

    if (!_needsDetails) exitWith {
        if !(_className in _externalForwardWithItemInfoNames) exitWith {
            format ["   class %1;", _className]
        };

        private _cfg = _cfgWeaponsRoot >> _className;
        private _parentName = configName (inheritsFrom _cfg);
        private _classHeader = if (_parentName isEqualTo "") then {
            format ["   class %1", _className]
        } else {
            format ["   class %1: %2", _className, _parentName]
        };

        format [
            "%1 {%2       class ItemInfo;%2   };",
            _classHeader,
            _nl
        ]
    };

    private _cfg = _cfgWeaponsRoot >> _className;
    if (!isClass _cfg) exitWith {
        format ["   class %1;", _className]
    };

    private _parentCfg = inheritsFrom _cfg;
    private _parentName = configName _parentCfg;
    private _classHeader = if (_parentName isEqualTo "") then {
        format ["   class %1", _className]
    } else {
        format ["   class %1: %2", _className, _parentName]
    };

    private _itemInfoCfg = _cfg >> "ItemInfo";
    if (!isClass _itemInfoCfg) exitWith {
        format ["%1;", _classHeader]
    };

    private _parentCapabilities = [_parentName] call _fnc_getGeneratedParentCapabilities;
    private _parentProvidesItemInfo = _parentCapabilities select 0;
    private _itemInfoHeader = ["ItemInfo", _parentProvidesItemInfo] call _fnc_getClassHeader;

    if !([_cfg] call _fnc_externalParentHasDetailedHitpoints) exitWith {
        format [
            "%1 {%2       class ItemInfo;%2   };",
            _classHeader,
            _nl
        ]
    };

    private _hitpointsCfg = _itemInfoCfg >> "HitpointsProtectionInfo";
    if (!isClass _hitpointsCfg) exitWith {
        format [
            "%1 {%2       %3;%2   };",
            _classHeader,
            _nl,
            _itemInfoHeader
        ]
    };

    private _parentProvidesHitpoints = _parentCapabilities select 1;
    private _hitpointsHeader = [
        "HitpointsProtectionInfo",
        _parentProvidesHitpoints
    ] call _fnc_getClassHeader;

    private _hitpointDeclarations = [];
    {
        private _hitPointName = configName _x;
        private _hitPointInherits = _parentProvidesHitpoints && {isClass (_parentCfg >> "ItemInfo" >> "HitpointsProtectionInfo" >> _hitPointName)};
        private _hitPointHeader = [
            _hitPointName,
            _hitPointInherits
        ] call _fnc_getClassHeader;

        _hitpointDeclarations pushBack format [
            "               %1%2",
            _hitPointHeader,
            [";", " {};"] select _hitPointInherits
        ];
    } forEach ("isClass _x" configClasses _hitpointsCfg);

    format [
        "%1 {%2       %3 {%2           %4 {%2%5%2           };%2       };%2   };",
        _classHeader,
        _nl,
        _itemInfoHeader,
        _hitpointsHeader,
        _hitpointDeclarations joinString _nl
    ]
};

{
    private _className = configName _x;
    private _parentVest = inheritsFrom _x;
    private _parentName = configName _parentVest;
    private _parentIsExported = _parentName in _exportedClassNames;
    private _definesProtectionOnSelf = [_x] call _fnc_classDefinesProtectionOnSelf;

    if ((_parentName isNotEqualTo "") && {!_parentIsExported}) then {
        [_parentVest, !_definesProtectionOnSelf] call _fnc_registerExternalParent;

        if (
            isClass (_parentVest >> "ItemInfo") &&
            {_definesProtectionOnSelf || {[_parentVest] call _fnc_externalParentHasDetailedHitpoints}}
        ) then {
            _externalForwardWithItemInfoNames pushBackUnique _parentName;
        };
    };

    private _itemInfoCfg = _x >> "ItemInfo";
    private _hitpointsCfg = _itemInfoCfg >> "HitpointsProtectionInfo";
    private _parentCapabilities = [_parentName] call _fnc_getGeneratedParentCapabilities;
    private _parentProvidesItemInfo = _parentCapabilities select 0;
    private _parentGeneratesHitpoints = _parentCapabilities select 1;
    private _inheritsHitpoints = _parentGeneratesHitpoints && {isClass (_parentVest >> "ItemInfo" >> "HitpointsProtectionInfo")};
    private _inheritsItemInfo = _parentProvidesItemInfo;

    private _hitPointBlocks = [];
    {
        private _hitPointName = configName _x;
        private _hitPointHeader = [
            _hitPointName,
            _parentGeneratesHitpoints && {isClass (_parentVest >> "ItemInfo" >> "HitpointsProtectionInfo" >> _hitPointName)}
        ] call _fnc_getClassHeader;
        private _propertyLines = [];

        if ([(_x >> "armor")] call _fnc_hasConfigValue) then {
            private _armorMacro = ["ARMOR_VALUE", "ARMOR_VALUE_NECK"] select (_hitPointName isEqualTo "Neck");
            _propertyLines pushBack format ["                    armor = %1;", _armorMacro];
        };

        if ([(_x >> "passThrough")] call _fnc_hasConfigValue) then {
            _propertyLines pushBack "                    PassThrough = PASS_THROUGH_VALUE;";
        };

        if (_propertyLines isNotEqualTo []) then {
            _hitPointBlocks pushBack format [
                "                %1 {%2%3%2                };",
                _hitPointHeader,
                _nl,
                _propertyLines joinString _nl
            ];
        };
    } forEach ("isClass _x" configClasses _hitpointsCfg);

    if (_hitPointBlocks isNotEqualTo []) then {
        private _itemInfoHeader = ["ItemInfo", _inheritsItemInfo] call _fnc_getClassHeader;
        private _hitpointsHeader = ["HitpointsProtectionInfo", _inheritsHitpoints] call _fnc_getClassHeader;

        _classEntries pushBack [
            _className,
            _parentName,
            format [
                "    class %1: %2 {%3        %4 {%3            %5 {%3%6%3            };%3        };%3    };",
                _className,
                _parentName,
                _nl,
                _itemInfoHeader,
                _hitpointsHeader,
                _hitPointBlocks joinString _nl
            ]
        ];
        _generatedClassNames pushBack _className;
    };
} forEach _cfgArray;

{
    private _currentName = _x;
    private _parentName = [_currentName] call _fnc_getParentNameForClass;

    while {
        (_parentName isNotEqualTo "") &&
        {_parentName isNotEqualTo _currentName} &&
        {_parentName isNotEqualTo "ItemCore"} &&
        {!(_parentName in _exportedClassNames)}
    } do {
        if (
            !(_parentName in _externalDetailedNames) &&
            {!(_parentName in _externalForwardNames)}
        ) then {
            _externalForwardNames pushBack _parentName;
        };

        private _nextParentName = [_parentName] call _fnc_getParentNameForClass;
        if (_nextParentName isEqualTo _parentName) exitWith {};
        _parentName = _nextParentName;
    };
} forEach (_externalForwardNames + _externalDetailedNames);

private _externalForwardHeaderNames = _externalForwardNames select {
    !(([_x] call _fnc_getParentNameForClass) in _exportedClassNames)
};
private _externalForwardAfterNames = _externalForwardNames select {
    ([_x] call _fnc_getParentNameForClass) in _exportedClassNames
};
private _externalDetailedHeaderNames = _externalDetailedNames select {
    !(([_x] call _fnc_getParentNameForClass) in _exportedClassNames)
};
private _externalDetailedAfterNames = _externalDetailedNames select {
    ([_x] call _fnc_getParentNameForClass) in _exportedClassNames
};

private _fnc_sortClassNamesByParent = {
    params ["_classNames"];

    private _pending = +_classNames;
    private _sorted = [];

    while {_pending isNotEqualTo []} do {
        private _progress = false;

        {
            private _className = _x;
            private _parentName = [_className] call _fnc_getParentNameForClass;

            if (
                !(_parentName in _pending) ||
                {_parentName isEqualTo _className}
            ) then {
                _sorted pushBack _className;
                _pending = _pending - [_className];
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

private _sortedExternalForwardHeaderNames = [_externalForwardHeaderNames] call _fnc_sortClassNamesByParent;
private _sortedExternalForwardAfterNames = [_externalForwardAfterNames] call _fnc_sortClassNamesByParent;
private _sortedExternalDetailedHeaderNames = [_externalDetailedHeaderNames] call _fnc_sortClassNamesByParent;

{
    private _parentName = [_x] call _fnc_getParentNameForClass;
    if (
        (_parentName in _externalForwardNames) &&
        {isClass (_cfgWeaponsRoot >> _parentName >> "ItemInfo")} &&
        {[_cfgWeaponsRoot >> _x] call _fnc_externalParentHasDetailedHitpoints}
    ) then {
        _externalForwardWithItemInfoNames pushBackUnique _parentName;
    };
} forEach _sortedExternalDetailedHeaderNames;

private _needsItemCoreDeclaration = false;
{
    if (([_x] call _fnc_getParentNameForClass) isEqualTo "ItemCore") exitWith {
        _needsItemCoreDeclaration = true;
    };
} forEach (_externalForwardWithItemInfoNames + _externalDetailedNames);

private _externalParentDeclarations = ((
    (_sortedExternalForwardHeaderNames apply {[_x, false] call _fnc_getExternalParentDeclaration}) +
    (_sortedExternalDetailedHeaderNames apply {[_x, true] call _fnc_getExternalParentDeclaration})
) joinString (_nl + _nl));

if (_needsItemCoreDeclaration) then {
    _externalParentDeclarations = (["   class ItemCore;", _externalParentDeclarations] joinString (_nl + _nl));
};

private _orderedClassBlocks = [];
{
    private _entryClassName = _x select 0;
    _orderedClassBlocks pushBack (_x select 2);

    {
        if (([_x] call _fnc_getParentNameForClass) isEqualTo _entryClassName) then {
            _orderedClassBlocks pushBack ([_x, false] call _fnc_getExternalParentDeclaration);
        };
    } forEach _sortedExternalForwardAfterNames;

    {
        if (([_x] call _fnc_getParentNameForClass) isEqualTo _entryClassName) then {
            _orderedClassBlocks pushBack ([_x, true] call _fnc_getExternalParentDeclaration);
        };
    } forEach _externalDetailedAfterNames;
} forEach _classEntries;

private _vestCountComment = format ["// Redefines armor values for %1 vest class(es). This is auto exported config. Base mod: %2", count _classEntries, _baseMod];

private _result = if (_externalParentDeclarations isEqualTo "") then {
    format [
        "%1%2class CfgWeapons {%2%3%2};%2",
        _vestCountComment,
        _nl,
        _orderedClassBlocks joinString (_nl + _nl)
    ]
} else {
    format [
        "%1%2class CfgWeapons {%2%3%2%2%4%2};%2",
        _vestCountComment,
        _nl,
        _externalParentDeclarations,
        _orderedClassBlocks joinString (_nl + _nl)
    ]
};

if (_copyToClipboard) then {
    copyToClipboard _result;
};

_result

