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
 * [] call afi_immersion_fnc_getOwnBulletIndex
 */
#include "script_component.hpp"

for "_i" from 0 to (count GVAR(ownedProjectilePos) - 1) do {
	private _bullet = GVAR(ownedProjectiles) select _i;
	if(isNull _bullet) then {
	 	private _bulletPos = GVAR(ownedProjectilePos) select _i;
		if ( !isNil { _bulletPos } && {_bulletPos distance _this  < 0.3} ) exitWith { _i };
	};
};
