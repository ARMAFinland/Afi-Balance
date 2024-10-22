/*
 * Author: Garth 'L-H' de Wet
 * Modified by Anatooli
 * Dials the number passed and detonates the explosive.
 *
 * Arguments:
 * 0: Unit to do dialing <OBJECT>
 * 1: Code to dial <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ace_player,"2131"] call ACE_explosives_fnc_dialPhone;
 *
 * Public: Yes
 */
#include "script_component.hpp"
params ["_unit", "_code"];
TRACE_2("params",_unit,_code);

if (_unit getVariable ["ACE_explosives_Dialing",false]) exitWith {};
if !(alive _unit) exitWith {};
_unit setVariable ["ACE_explosives_Dialing", true, true];

private _ran = (ceil(random 8)) + 1;
private _arr = [];
for "_i" from 1 to _ran do {
	_arr = _arr + ['.','..','...',''];
};
if (_unit == ace_player) then {
	ctrlSetText [1400,"Calling"];
	[LINKFUNC(fnc_afi_dialingPhone), 0.25, [_unit,4,_arr,_code]] call CALLSTACK(CBA_fnc_addPerFrameHandler); //AFI edit
} else {
	private _explosive = [_code] call ACE_explosives_fnc_getSpeedDialExplosive;
	if ((count _explosive) > 0) then {
		[{
			params ["_unit", "_item"];

			if ([_unit, -1, (_item # 0), (_item # 2), "ACE_Cellphone"] call ACE_explosives_fnc_checkDetonateHandlers) then {
				playSound3D ["z\ace\addons\explosives\Data\Audio\Cellphone_Ring.wss", objNull, false, (getPosASL (_item # 0)), 3.16228, 1, 75];
			};

			_unit setVariable ["ACE_explosives_Dialing", false, true];
		}, [_unit, _explosive], 0.25 * (count _arr - 4)] call CBA_fnc_waitAndExecute;

		[_explosive select 0,(0.25 * (count _arr - 1)) + (_explosive select 2), "ACE_Cellphone", _unit] call ACE_explosives_fnc_startTimer;
	};
};

(configFile >> "CfgMagazines" >> ok >> "ACE_Triggers" >> "SupportedTriggers">> "Command" >> "FuseTime") call BIS_fnc_getCfgData;