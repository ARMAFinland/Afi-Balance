class CfgMagazines {
	class APERSTripMine_Wire_Mag;
	class GVAR(Mag_White): APERSTripMine_Wire_Mag {
		scope = 2;
		displayName = "Tripflare (white)";
		ammo = QGVAR(Ammo_White);
		descriptionShort="Tripflare that launches a white flare high above its position.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_white.paa);
	};
	class GVAR(Mag_Red): GVAR(Mag_White) {
		displayName = "Tripflare (red)";
		ammo = QGVAR(Ammo_Red);
		descriptionShort="Tripflare that launches a red flare high above its position.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_red.paa);
	};
	class GVAR(Mag_Yellow): GVAR(Mag_White) {
		displayName = "Tripflare (yellow)";
		ammo = QGVAR(Ammo_Yellow);
		descriptionShort="Tripflare that launches a yellow flare high above its position.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_yellow.paa);
	};
	class GVAR(Mag_Green): GVAR(Mag_White) {
		displayName = "Tripflare (green)";
		ammo = QGVAR(Ammo_Green);
		descriptionShort="Tripflare that launches a green flare high above its position.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_green.paa);
	};

	//Ground Flare variants
	class GVAR(Mag_Ground_White): GVAR(Mag_White) {
		displayName = "Ground tripflare (white)";
		ammo = QGVAR(Ammo_Ground_White);
		descriptionShort="Tripflare that activates a white flare on the ground.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_white.paa);
	};
	class GVAR(Mag_Ground_Red): GVAR(Mag_White) {
		displayName = "Ground tripflare (red)";
		ammo = QGVAR(Ammo_Ground_Red);
		descriptionShort="Tripflare that activates a red flare on the ground.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_red.paa);
	};
	class GVAR(Mag_Ground_Yellow): GVAR(Mag_White) {
		displayName = "Ground tripflare (yellow)";
		ammo = QGVAR(Ammo_Ground_Yellow);
		descriptionShort="Tripflare that activates a yellow flare on the ground.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_yellow.paa);
	};
	class GVAR(Mag_Ground_Green): GVAR(Mag_White) {
		displayName = "Ground tripflare (green)";
		ammo = QGVAR(Ammo_Ground_Green);
		descriptionShort="Tripflare that activates a green flare on the ground.";
		picture = QPATHTOF(Data\UI\gear_mine_tripflare_green.paa);
	};
};
