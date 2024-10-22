/*
 * Author: [Tuntematon]
 * [Description]
 * Create flare
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call AfiBalance_tripflare_fnc_activateTripFlare
 */
#include "script_component.hpp"
params ["_projectile", "_pos"];
private _name = typeOf _projectile;
// private _pos = _this param [3];
// private _args = _this param [6];
// private _name = _args param [3];
// private _explode = _this param [8];
// //private _pos = _this param [3];
// TRACE_4("trip flare",_pos, _args, _name, _explode);
// //make sure that flare is destroyed before triggering flare.
// if (!_explode) exitWith { };

//Get and create right flare
private _altitude = getNumber (configFile >> "CfgAmmo" >> _name >> QGVAR(flareAltitude));
_pos set [2,_altitude];
private _flare = getText (configFile >> "CfgAmmo" >> _name >> QGVAR(flareEffect));
private _velocity = [wind select 0,wind select 1,15];
private _projectile = createVehicle [_flare,_pos];
_projectile setPos _pos;
_projectile setVelocity _velocity;

//Get sounds
private _triggerSound = getText (configFile >> "CfgAmmo" >> _name >> QGVAR(triggerSound));
private _flareSound = getText (configFile >> "CfgAmmo" >> _name >> QGVAR(flareSound));
private _soundDistance = getNumber (configFile >> "CfgAmmo" >> _name >> QGVAR(soundDistance));

[_projectile,[_triggerSound, _soundDistance]] remoteExecCall ["say3D", [0, -2] select isDedicated];
_soundSource = createSoundSource [_flareSound,_pos,[],0];

[{
	params ["_args", "_handle"];
	_args params ["_soundSource", "_projectile"];
	if (isNull _projectile) exitWith {
		deleteVehicle _projectile;
		deleteVehicle _soundSource;
		[_handle] call CBA_fnc_removePerFrameHandler;
	};
	_soundSource setPosATL getPosATL _projectile;
}, 0.1, [_soundSource, _projectile]] call CBA_fnc_addPerFrameHandler;
