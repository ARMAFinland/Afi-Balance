#include "script_component.hpp"

GVAR(hide_effect) = false;

_handle = [{
	if (particlesQuality < 2) then {
		"particleWarning" cutText ["High particles quality is required. Mods do not work properly otherwise.\nYou can change particles quality from Video options", "BLACK FADED", 0];
	} else {
		GVAR(hide_effect) = true;
	};
	
	if (GVAR(hide_effect)) then {
		"particleWarning" cutFadeOut 0;
		GVAR(hide_effect) = false;
	};
}, 1, []] call CBA_fnc_addPerFrameHandler;