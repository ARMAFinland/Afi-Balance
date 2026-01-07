#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {QGVAR(Mine_Red), QGVAR(Mine_Yellow), QGVAR(Mine_Green), QGVAR(Mine_White), QGVAR(Mine_Ground_Red), QGVAR(Mine_Ground_Yellow), QGVAR(Mine_Ground_Green), QGVAR(Mine_Ground_White)};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ace_explosives","A3_Weapons_F","cba_xeh", "afibalance_main"};
		authors[] = {"Johnson", "Anatooli", "Tuntematon"};
		VERSION_CONFIG;
		//skipWhenMissingDependencies = 1;
	};
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"


class Tripflare_Explosion_Effect {
	class Light_Effect {
		intensity = 0.005;
		interval = 1;
		lifetime = 0.8;
		position[] = {0, 1, 0};
		simulation = "light";
		type = "ExploLight";
	};
	class Fire_Effect  {
		intensity = 1;
		interval = 1;
		lifetime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "FireSparksSmall1";
	};
	class Smoke_Effect  {
		intensity = 1;
		interval = 1;
		lifetime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CloudSmallLight1";
	};
};

class CfgSounds {
	sounds[] = {};
	class Flare_whistle {
		name = "Flare_whistle";
		sound[] = {QPATHTOF(data\audio\Flare_whistle.wss),5,1};
		titles[] = {};
	};
};
