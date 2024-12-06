/*
 * Author:
 * [Description]
 *
 * Arguments:
 * 0: 
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call afi_immersion_fnc_suppressExplosion
 */
#include "script_component.hpp"


params ["_pos", "_range", "_power", "_forceMul","_offsetAdd"];
if (hasInterface) then {
	private _player = ace_player;
		
	if (GVAR(enableSuppression)
		and local _player 
		and alive _player
		and { (isNull objectParent _player) or (isTurnedOut _player) or ((vehicle _player) isKindOf "StaticWeapon") }
		and { !(_player getVariable ["ACE_isUnconscious", false]) } ) then 
	{
		private _distance = (ASLToATL eyePos _player) distance _pos;
		if ( _distance <= _range ) then
		{
			private _force = (1-_distance/_range) / (100 - _range + _distance) * 100;
			private _offset = (1-_distance/_range) * SUPPRESSION_REDUCE_FACTOR*10;

			[_power / (_distance max 1), _force * _forceMul, _offset + _offsetAdd] call FUNC(suppress);
			[_force * _forceMul] call ace_hearing_fnc_earRinging;
		};
	};
};