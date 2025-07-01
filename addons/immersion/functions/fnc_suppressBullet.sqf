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
 * [] call afi_immersion_fnc_suppressBullet
 */
#include "script_component.hpp"
params ["_bulletPos", "_forceMultiplier"];

// hint format ["suppressBullet: %1 - %2", _bulletPos, _forceMultiplier];

if(hasInterface) then {
	private _player = ace_player;

	private _idx = (ATLToASL _bulletPos) call FUNC(getOwnBulletIndex);
	private _ownBullet = !isNil { _idx };

	if (GVAR(enableSuppression)
		and local _player 
		and alive _player
		and { (isNull objectParent _player) or (isTurnedOut _player) or ((vehicle _player) isKindOf "StaticWeapon") }
		and { !(_player getVariable ["ACE_isUnconscious", false]) } ) then {
		private _hitPos = ATLToASL _bulletPos;
		private _eyePos = eyePos _player;
		private _distance = _eyePos distance _hitPos;
		if ( _distance <= SUPPRESSION_RANGE ) then {
			private _add = 1.0;
			if(_ownBullet) then { 
				_add = OWN_BULLET_FACTOR;
				_distance = _distance / OWN_BULLET_FACTOR; 
			} else {
				if( lineIntersects [_eyePos, _hitPos] ) then {
					_distance = _distance * 2;
					_add = _add / 2;
				}
			};

			if ( _distance <= SUPPRESSION_RANGE ) then {			
				private _force = (1-_distance/SUPPRESSION_RANGE) / (100 - SUPPRESSION_RANGE + _distance) * 100;
				private _offset = (1-_distance/SUPPRESSION_RANGE) * SUPPRESSION_REDUCE_FACTOR*10;
				
				if(_ownBullet) then { 
					_force = _force * OWN_BULLET_FACTOR;
					_offset = _offset * OWN_BULLET_FACTOR;
				} else {
					_offset = 0.5 + _offset;			
				};

				[_add / (_distance max 1), _force * _forceMultiplier, _offset * _forceMultiplier] call FUNC(suppress);
			};
		};
	};

	if(_ownBullet) then {
		GVAR(ownedProjectiles) deleteAt _idx;
		GVAR(ownedProjectilePos) deleteAt _idx;
	};	
};
