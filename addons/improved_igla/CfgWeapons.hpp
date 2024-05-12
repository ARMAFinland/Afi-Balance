class CfgWeapons {
	class rhs_weap_strela;
	class rhs_weap_igla: rhs_weap_strela {
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
		ace_overpressure_damage = 0.5;  // Damage multiplier
		ace_overpressure_range = 2;  // Range in meters in which the damage is applied
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\igla_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\igla_seek.ogg), 1, 1};
		magazines[] += {GVAR(9k32_rocket_old),GVAR(9k32_rocket)};
		weaponInfoType = "RscWeaponEmpty";
		weaponLockDelay = 4;
	};
	
	class missiles_titan_static;
	class rhs_weap_Igla_twice: missiles_titan_static {
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\igla_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\igla_seek.ogg), 1, 1};
		magazines[] += {GVAR(mag_2Rnd_Igla)};
		weaponInfoType = "RscWeaponEmpty";
		weaponLockDelay = 4;
	};
};