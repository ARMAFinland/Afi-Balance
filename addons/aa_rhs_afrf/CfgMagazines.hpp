class CfgMagazines {
	class Titan_AA;
	class rhs_mag_9k32_rocket;

	class GVAR(9k32_rocket_old): rhs_mag_9k32_rocket {
		ammo = QGVAR(9k32_missile_old);
		displayname = "9K32 - AFI Old";
	};

	class GVAR(9k32_rocket): rhs_mag_9k32_rocket {
		ammo = QGVAR(9k32_missile);
		displayname = "9K32 - AFI";
	};
	
	class rhs_mag_2Rnd_Igla;
	class GVAR(mag_2Rnd_Igla): rhs_mag_2Rnd_Igla {
		ammo = QGVAR(9k32_missile);
		displayname = "9K32 - AFI";
	};
};