#include "script_component.hpp"
ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_prep.hpp"
PREP_RECOMPILE_END;

[
	QGVAR(enableSuppression),
	"CHECKBOX",
	"Enable supression",
	["AFI - Immersion", "Suppression"],
	true,
	1
] call CBA_fnc_addSetting;

[QGVAR(suppressRange),
	"SLIDER",
	"Suppression range",
	["AFI - Immersion", "Suppression"],
	[1, 9, 5, 1],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(suppressPower),
	"SLIDER",
	"Suppression power",
	["AFI - Immersion", "Suppression"],
	[1, 9, 7, 1],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(suppressReduce),
	"SLIDER",
	"Suppression effect length factor",
	["AFI - Immersion", "Suppression"],
	[1, 9, 3, 1],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(selfSuppressFactor),
	"SLIDER",
	"Self suppression factor",
	["AFI - Immersion", "Suppression"],
	[0, 1, 0.1, 1],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(RecoilSwayPenalty),
	"SLIDER",
	"Recoil sway penalty",
	["AFI - Immersion", "Recoil"],
	[0, 100, 50, 0],
	1
] call CBA_fnc_addSetting;

[
	QGVAR(painFactorMultiplier),
	"SLIDER",
	"Pain factor multiplier, 0 to disable pain factor",
	["AFI - Immersion", "Recoil"],
	[0, 10, 2, 1],
	1
] call CBA_fnc_addSetting;


ADDON = true;