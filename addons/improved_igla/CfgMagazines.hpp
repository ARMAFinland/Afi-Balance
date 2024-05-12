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

	// class AfiBalance_mag_9k38_rocket_igla: rhs_mag_9k32_rocket {
	// 	displayName = "afi igla";
	// 	ammo = "AfiBalance_9k32_missile_igla";
	// };

	// class AfiBalance_mag_9k38_rocket_FIM92: rhs_mag_9k32_rocket {
	// 	ammo = "AfiBalance_9k32_missile_FIM92";
	// 	displayName = "afi FIM92";
	// };
	
	class rhs_mag_2Rnd_Igla;
	class GVAR(mag_2Rnd_Igla): rhs_mag_2Rnd_Igla {
		ammo = QGVAR(9k32_missile);
		displayname = "9K32 - AFI";
	};
};
