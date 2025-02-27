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
 * [FUNC(dialingPhone), 0.25, [_unit,4,_arr,_code, _explosive, _ringtonePath, _ringtoneDuration]] call CALLSTACK(CBA_fnc_addPerFrameHandler);
 *
 * Public: No
 */
#include "script_component.hpp"
params ["_args", "_pfID"];
_args params ["_unit", "_dialStep", "_arr", "_code", "_explosive", "_ringtonePath", "_ringtoneDuration"];

if ((_dialStep mod 4) == 0) then {
    private _pos = _unit modelToWorldVisualWorld (_unit selectionPosition "RightHand");
    playSound3D ["z\ace\addons\explosives\Data\Audio\DialTone.wss", objNull, false, _pos, 5, 1, 5];//afi puukotus
};
ctrlSetText [1400,format["Calling%1",_arr select (_dialStep - 4)]];

if (_dialStep >= (count _arr + 2)) then {
    [_pfID] call CALLSTACK(CBA_fnc_removePerFrameHandler);
    if ((count _explosive) > 0) then {
        [_unit, -1, [_explosive select 0, _explosive select 2], "ACE_Cellphone"] call ACE_explosives_fnc_detonateExplosive;
    };
    _unit setVariable ["ACE_explosives_Dialing", false, true];
    if (_unit == ace_player) then {
        ctrlSetText [1400,"Call Ended!"];
    };
};

if (_dialStep == _ringtoneDuration) then {
    if (
        ((count _explosive) > 0) &&
        {[_unit, -1, (_explosive # 0), (_explosive # 2), "ACE_Cellphone"] call ACE_explosives_fnc_checkDetonateHandlers}
    ) then {
        playSound3D [_ringtonePath, objNull, false, (getPosASL (_explosive # 0)), 3.16228, 1, 75];
    };
};

_args set [1, _dialStep + 1];