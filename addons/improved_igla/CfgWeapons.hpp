class CfgWeapons {
	class rhs_weap_strela;
	class rhs_weap_igla: rhs_weap_strela {
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the back end of the launcher)
		ace_overpressure_range = 2;  // Range in meters in which the damage is applied
		ace_overpressure_damage = 0.5;  // Damage multiplier
		lockedTargetSound[] = {QPATHTOF(sound\igla_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\igla_seek.ogg), 1, 1};
		//cursor = "";
		weaponLockDelay = 3.9;
		//weaponInfoType = "RscWeaponEmpty";
		magazines[] += {"AfiBalance_mag_9k38_rocket_old","AfiBalance_mag_9k38_rocket_afi","AfiBalance_mag_9k38_rocket_igla","AfiBalance_mag_9k38_rocket_FIM92"};
	};
	
	class missiles_titan_static;
	class rhs_weap_Igla_twice: missiles_titan_static {
		lockedTargetSound[] = {QPATHTOF(sound\igla_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\igla_seek.ogg), 1, 1};
		//cursor = "";
		weaponLockDelay = 3.9;
		//weaponInfoType = "RscWeaponEmpty";
	};
};




