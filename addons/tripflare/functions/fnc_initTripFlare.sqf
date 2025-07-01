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
 * [] call afibalance_tripflare_fnc_activateTripFlare
 */
#include "script_component.hpp"
params ["_projectile"];
TRACE_1("flare inti",_projectile);

_projectile addEventHandler ["Explode", {
	params ["_projectile", "_pos", "_velocity"];
	[_projectile, _pos] call FUNC(activateTripFlare);
}];
