#include "script_component.hpp"

["unit", {
	params ["_player", "_oldPlayer"];

	if (!isNull _oldPlayer) then {
		private _firedEH = _oldPlayer getVariable [QGVAR(firedEH), -1];
		_oldPlayer removeEventHandler ["Fired", _firedEH];
		_oldPlayer setVariable [QGVAR(firedEH), nil];
		private _killedEH = _oldPlayer getVariable [QGVAR(killedEH), -1];
		_oldPlayer removeEventHandler ["Killed", _killedEH];
		_oldPlayer setVariable [QGVAR(killedEH), nil];
	};
	// Don't add a new EH if the unit respawned
	if ((_player getVariable [QGVAR(firedEH), -1]) == -1) then {
		if ((getNumber (configOf _player >> "isPlayableLogic")) == 1) exitWith {
		};
		private _firedEH = _player addEventHandler ["Fired", FUNC(fired)];
		_player setVariable [QGVAR(firedEH), _firedEH];
		private _killedEH = _player addEventHandler ["Killed", {GVAR(dynamicblur) ppEffectEnable false;}];
		_player setVariable [QGVAR(killedEH), _killedEH];
	};

	GVAR(suppressionLevel) = 0;
	GVAR(prevSuppressTime) = nil;
	GVAR(prevSuppressForce) = 0;
	GVAR(prevSuppressOffset) = 0;
	GVAR(dynamicblur) ppEffectEnable false;
	GVAR(ownedProjectiles) = [];
	GVAR(ownedProjectilePos) = [];

	GVAR(recoilSway) = 0;
	GVAR(currentWeapon) = "";
	GVAR(currentWeaponRecoilKickBack) = nil;
	GVAR(currentWeaponSwayDecay) = nil;
	GVAR(lastRecoilSwayUpdate) = 0;	
}, true] call CBA_fnc_addPlayerEventHandler;

[{
	private _eyePos = eyePos ACE_player;
	private _indiciesToDelete = [];
	 {
		private _bullet = _x;
		if(isNull _bullet) then {
			if( isNil {GVAR(ownedProjectilePos) select _forEachIndex } || { (GVAR(ownedProjectilePos) select _forEachIndex) distance _eyePos > GVAR(suppressRange) } ) then { 
				_indiciesToDelete pushBack _forEachIndex; 
			}; 
		} else {
			private _pos = getPosASL _bullet;
			if(_pos distance _eyePos > GVAR(suppressRange) ) then { 
				_indiciesToDelete pushBack _forEachIndex; 
			} else {
				GVAR(ownedProjectilePos) set [_forEachIndex, _pos];
			};
		};
	} forEach GVAR(ownedProjectiles);
	 {
		GVAR(ownedProjectiles) deleteAt _x;
		GVAR(ownedProjectilePos) deleteAt _x;
	} forEach _indiciesToDelete;

	if(time - GVAR(lastRecoilSwayUpdate) > RECOIL_SWAY_UPDATE_INTERVAL) then {
		if (GVAR(recoilSway) > 0) then {
			GVAR(recoilSway) = (GVAR(recoilSway) - GVAR(currentWeaponSwayDecay) * RECOIL_SWAY_UPDATE_INTERVAL) max 0;
		};
		GVAR(lastRecoilSwayUpdate) = time;
		[ACE_player] call FUNC(handleSway);
	};
	
}] call CBA_fnc_addPerFrameHandler;
