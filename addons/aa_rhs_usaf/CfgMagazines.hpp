class CfgMagazines {
	class Titan_AA;
	class rhs_fim92_mag;

	class GVAR(fim92_mag_old): Titan_AA {
		ammo = QGVAR(fim92_missile_old);
		displayname = "FIM-92F - AFI Old";
	};

	class GVAR(fim92_mag): rhs_fim92_mag {
		ammo = QGVAR(fim92_missile);
		displayname = "FIM-92F - AFI";
	};

	class rhs_mag_2Rnd_stinger;
	class rhs_mag_4Rnd_stinger;
	class GVAR(mag_4Rnd_stinger): rhs_mag_4Rnd_stinger {
		ammo = QGVAR(fim92_missile);
		displayname = "FIM-92F - AFI";
	};
	
	class GVAR(mag_2Rnd_stinger): rhs_mag_2Rnd_stinger {
		ammo = QGVAR(fim92_missile);
		displayname = "FIM-92F - AFI";
	};
};