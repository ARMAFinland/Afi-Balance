/*
 * Author: [Tuntematon]
 * [Description]
 *
 * Arguments:
 * 0: 
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call afi_immersion_fnc_handleSway
 */
#include "script_component.hpp"

#define AE1_MAXRESERVE 4000000
#define AE2_MAXRESERVE   84000
#define AN_MAXRESERVE     2300

params ["_unit"];

private _aeReservePercentage = (ace_advanced_fatigue_ae1Reserve / AE1_MAXRESERVE + ace_advanced_fatigue_ae2Reserve / AE2_MAXRESERVE) / 2;
private _anReservePercentage = ace_advanced_fatigue_anReserve / AN_MAXRESERVE;
private _fatigueSway = 1 - (_anReservePercentage min _aeReservePercentage);

switch (stance _unit) do {
    case ("CROUCH"): {
		_fatigueSway = (1.0 + _fatigueSway ^ 2 * 0.1) * ace_advanced_fatigue_swayFactor;
    };
    case ("PRONE"): {
		_fatigueSway = (1.0 + _fatigueSway ^ 2 * 2.0) * ace_advanced_fatigue_swayFactor;
    };
    default {
		_fatigueSway = (1.5 + _fatigueSway ^ 2 * 3.0) * ace_advanced_fatigue_swayFactor;
    };
};

_fatigueSway = _fatigueSway max 1;

private _recoilSway = 1;

if(isWeaponDeployed _unit) then {
	_recoilSway = 1 + (GVAR(recoilSway) * 0.1);
} else {
	_recoilSway = 1 + (GVAR(recoilSway) * ([1, 0.5] select (isWeaponRested _unit)));
};

private _aimingCoef = getAimingCoef _unit;

private _painFactor = ((player getVariable ["ace_medical_pain", 0]) * GVAR(painFactorMultiplier)) + 1;

_unit setCustomAimCoef (_aimingCoef + (_fatigueSway * _recoilSway * ((GVAR(suppressionLevel) / 3) + 1) * _painFactor)) / _aimingCoef;
