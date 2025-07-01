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
 * [] call afi_immersion_fnc_fired
 */
#include "script_component.hpp"
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if(GVAR(RecoilSwayPenalty) > 0 && isNull objectParent _unit && _weapon != "Put" && _weapon != "Throw") then {
	if(GVAR(currentWeapon) != _weapon) then {
		GVAR(currentWeapon) = _weapon;
		private _cfg = configFile >> "CfgWeapons" >> _weapon;
		private _recoil = getText (_cfg >> "recoil");
		private _recoilCfg = configFile >> "CfgRecoils" >> _recoil;
		if(isClass _recoilCfg) then {
			GVAR(currentWeaponRecoilKickBack) = (getArray ( _recoilCfg >> "kickBack")) apply {
				if(_x isEqualType "") then {
					[] call compile _x;
				} else {
					_x
				}
			}; 

		} else {
			GVAR(currentWeaponRecoilKickBack) = [0.01,0.03];
		};
		GVAR(currentWeaponSwayDecay) = getNumber ( _cfg >> "swayDecaySpeed");
	};	
	GVAR(currentWeaponRecoilKickBack) params ["_min", "_max"];

	GVAR(recoilSway) = ln (1 + GVAR(recoilSway)) + (_min + random (_max - _min)) * GVAR(RecoilSwayPenalty);

	if( time - GVAR(lastRecoilSwayUpdate) > RECOIL_SWAY_UPDATE_INTERVAL) then {
		GVAR(lastRecoilSwayUpdate) = time;
		
		[_unit] call FUNC(handleSway);
	};
};


if (!(_projectile isKindOf "BulletBase")) exitWith {};
GVAR(ownedProjectiles) pushBack _projectile;
