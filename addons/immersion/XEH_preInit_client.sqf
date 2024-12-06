#include "script_component.hpp"

GVAR(suppressionLevel) = 0;
GVAR(prevSuppressTime) = nil;
GVAR(prevSuppressForce) = 0;
GVAR(prevSuppressOffset) = 0;
GVAR(dynamicblur) = ppEffectCreate ["DynamicBlur", 410];
GVAR(ownedProjectiles) = [];
GVAR(ownedProjectilePos) = [];
GVAR(recoilSway) = 0;
GVAR(currentWeapon) = "";
GVAR(currentWeaponRecoilKickBack) = nil;
GVAR(currentWeaponSwayDecay) = nil;
GVAR(lastRecoilSwayUpdate) = 0;	