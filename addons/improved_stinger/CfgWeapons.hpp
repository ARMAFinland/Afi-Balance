class CfgWeapons {

	class launch_O_Titan_F;
	class rhs_weap_fim92: launch_O_Titan_F {
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
		ace_overpressure_damage = 0.5;  // Damage multiplier
		ace_overpressure_range = 2;  // Range in meters in which the damage is applied
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\stinger_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\stinger_seek.ogg), 1, 1};
		magazines[] += {QGVAR(fim92_mag)};
		weaponLockDelay = 4;
	};

	class rhs_weap_TOW_Launcher;
	class rhs_weap_stinger_Launcher : rhs_weap_TOW_Launcher {
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\stinger_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\stinger_seek.ogg), 1, 1};
		magazines[] += {GVAR(mag_4Rnd_stinger),GVAR(mag_2Rnd_stinger)};
		weaponInfoType = "RscWeaponEmpty";
		weaponLockDelay = 4;
	};
};