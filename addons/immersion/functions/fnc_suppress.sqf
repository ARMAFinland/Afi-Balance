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
 * [] call afi_immersion_fnc_suppress
 */
#include "script_component.hpp"
params ["_suppression", "_force", "_offset"];

private _painFactor = ((ace_player getVariable ["ace_medical_pain", 0]) * GVAR(painFactorMultiplier)) + 1;

_suppression = _suppression * _painFactor;
_force = _force * _painFactor;
_offset = _offset * _painFactor;

GVAR(suppressionLevel) = GVAR(suppressionLevel) + _suppression;
private _suppressionPower = (ln (1+GVAR(suppressionLevel))) / (ln 2) * SUPPRESSION_POWER_FACTOR;

if(!isNil QGVAR(prevSuppressTime)) then {
	private _remainigSuppressOffset = (GVAR(prevSuppressOffset) - (time - GVAR(prevSuppressTime))) max 0;
	_force = _force max (GVAR(prevSuppressForce) * _remainigSuppressOffset/GVAR(prevSuppressOffset));
	_offset = _offset max _remainigSuppressOffset;
};

GVAR(prevSuppressTime) = time;
GVAR(prevSuppressForce) = _force;
GVAR(prevSuppressOffset) = _offset;			


GVAR(dynamicblur) ppEffectEnable true;
GVAR(dynamicblur) ppEffectForceInNVG true;
GVAR(dynamicblur) ppEffectAdjust [_force + _suppressionPower];
GVAR(dynamicblur) ppEffectCommit 0;

GVAR(dynamicblur) ppEffectAdjust [0.0001];
GVAR(dynamicblur) ppEffectCommit (_offset + _suppressionPower);

if(isNil QGVAR(dynamicblurHandler)) then {
	GVAR(dynamicblurHandler) = [{
		if(GVAR(suppressionLevel) == 0 && (ppEffectCommitted GVAR(dynamicblur))) then {
			GVAR(dynamicblur) ppEffectEnable false;
			GVAR(prevSuppressTime) = nil;
			GVAR(prevSuppressForce) = 0;
			GVAR(prevSuppressOffset) = 0;		

			[GVAR(dynamicblurHandler)] call CBA_fnc_removePerFrameHandler;
			GVAR(dynamicblurHandler) = nil;
		};
		GVAR(suppressionLevel) = (GVAR(suppressionLevel) - ((GVAR(suppressionLevel) * SUPPRESSION_REDUCE_FACTOR) max (SUPPRESSION_REDUCE_FACTOR))) max 0;
	},1] call CBA_fnc_addPerFrameHandler;
};
