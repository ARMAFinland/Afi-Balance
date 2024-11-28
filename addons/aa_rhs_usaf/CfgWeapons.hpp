class CfgWeapons {

	class launch_O_Titan_F;
	class rhs_weap_fim92: launch_O_Titan_F {
		//Ace backblast
		_aa_launcher_backblast_
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\stinger_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\stinger_seek.ogg), 1, 1};
		magazines[] += {QGVAR(fim92_mag),QGVAR(fim92_mag_old)};
		weaponLockDelay = 4;
	};

	class rhs_weap_TOW_Launcher;
	class rhs_weap_stinger_Launcher : rhs_weap_TOW_Launcher {
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\stinger_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\stinger_seek.ogg), 1, 1};
		magazines[] += {QGVAR(mag_4Rnd_stinger),QGVAR(mag_2Rnd_stinger)};
		weaponInfoType = "RscWeaponEmpty";
		weaponLockDelay = 4;
	};
};