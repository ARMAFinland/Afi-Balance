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

	class rhs_mag_AZP23_2000;
	class GVAR(mag_AZP23_2000): rhs_mag_AZP23_2000 {
		initSpeed = 1220;
	};

	class rhs_mag_AZP23_2000_mixed;
	class GVAR(mag_AZP23_2000_mixed): rhs_mag_AZP23_2000_mixed {
		initSpeed = 1220;
	};
};