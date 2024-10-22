class CfgVehicles {
	class APERSTripMine;
	class GVAR(Mine_Red): APERSTripMine {
		author="AFI";
		_generalMacro="APERSTripMine";
		scope = 2;
		scopeArsenal = 2;
		ammo = QGVAR(Ammo_Red);
		displayName="Trip flare (Red)";
		icon="iconExplosiveAP";
	};

	class GVAR(Mine_Yellow): GVAR(Mine_Red) {
		displayName = "Trip flare (Yellow)";
		ammo = QGVAR(Ammo_Yellow);
	};

	class GVAR(Mine_Green): GVAR(Mine_Red) {
		displayName = "Trip flare (Green)";
		ammo = QGVAR(Ammo_Green);
	};
	class GVAR(Mine_White): GVAR(Mine_Red) {
		displayName = "Trip flare (White)";
		ammo = QGVAR(Ammo_White);
	};

	// Ground tripflares
	class GVAR(Mine_Ground_Red): GVAR(Mine_Red) {
		displayName = "Ground tripflare (Red)";
		ammo = QGVAR(Ammo_Ground_Red);
	};
	class GVAR(Mine_Ground_Yellow): GVAR(Mine_Red) {
		displayName = "Ground tripflare (Yellow)";
		ammo = QGVAR(Ammo_Ground_Yellow);
	};
	class GVAR(Mine_Ground_Green): GVAR(Mine_Red) {
		displayName = "Ground tripflare (Green)";
		ammo =  QGVAR(Ammo_Ground_Green);
	};
	class GVAR(Mine_Ground_White): GVAR(Mine_Red) {
		displayName = "Ground tripflare (White)";
		ammo =  QGVAR(Ammo_Ground_White);
	};
};
