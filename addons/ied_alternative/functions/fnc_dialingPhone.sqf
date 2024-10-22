/*
 * Author: Garth 'L-H' de Wet
 * Modified by Anatooli
 * Performs the dial tones and detonation of explosive.
 *
 * Arguments:
 * 0: Unit to do dialing <OBJECT>
 * 1: Index <NUMBER>
 * 2: Dialing points <ARRAY>
 * 3: IED code <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [FUNC(dialingPhone), 0.25, [_unit,4,_arr,_code]] call CALLSTACK(CBA_fnc_addPerFrameHandler);
 *
 * Public: No
 */
#include "script_component.hpp"
params ["_args", "_pfID"];
_args params ["_unit", "_i", "_arr", "_code"];

//afi edit
private _ringtones = [
  ["ringtone_1.wss", 3.5], ["ringtone_2.wss", 3.7], ["ringtone_3.wss", 1.7],
  ["ringtone_4.wss", 2.1], ["ringtone_5.wss", 3.8], ["ringtone_6.wss", 3.0]
];

(selectRandom _ringtones) params ["_ringtone_filename", "_ringtone_duration"];
private _ringtone_file = QPATHTOF(sound\_ringtone_filename); //format ["afi_ied_alternative\Data\Audio\%1", _ringtone_filename];
//afi edit
TRACE_1("IED SOUND",_ringtone_file);

if ((_i mod 4) == 0) then {
	private _pos = _unit modelToWorldVisualWorld (_unit selectionPosition "RightHand");
	playSound3D ["z\ace\addons\explosives\Data\Audio\DialTone.wss", objNull, false, _pos, 5, 1, 5];//afi puukotus
};
ctrlSetText [1400,format["Calling%1",_arr select (_i - 4)]];

private _explosive = [_code] call ACE_explosives_fnc_getSpeedDialExplosive;

if (_i >= (count _arr + 2)) then {
	[_pfID] call CALLSTACK(CBA_fnc_removePerFrameHandler);
	if ((count _explosive) > 0) then {
		[_unit, -1, [_explosive select 0, _explosive select 2], "ACE_Cellphone"] call ACE_explosives_fnc_detonateExplosive;
	};
	_unit setVariable ["ACE_explosives_Dialing", false, true];
	if (_unit == ace_player) then {
		ctrlSetText [1400,"Call Ended!"];
	};
};

if (_i == (count _arr - round (_ringtone_duration / 0.25) + 3)) then { //afi puukotus
	if (
		((count _explosive) > 0) &&
		{[_unit, -1, (_explosive # 0), (_explosive # 2), "ACE_Cellphone"] call ACE_explosives_fnc_checkDetonateHandlers}
	) then {
		playSound3D [_ringtone_file, objNull, false, (getPosASL (_explosive # 0)), 3.16228, 1, 75]; //afi puukotus
	};
};

_args set [1, _i + 1];