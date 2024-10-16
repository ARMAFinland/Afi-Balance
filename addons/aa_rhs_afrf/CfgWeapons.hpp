class CfgWeapons {
	class rhs_weap_strela;
	class rhs_weap_igla: rhs_weap_strela {
		//Ace backblast
		_aa_launcher_backblast_
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\igla_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\igla_seek.ogg), 1, 1};
		magazines[] += {QGVAR(9k32_rocket_old),QGVAR(9k32_rocket)};
		weaponInfoType = "RscWeaponEmpty";
		weaponLockDelay = 4;
	};
	
	class missiles_titan_static;
	class rhs_weap_Igla_twice: missiles_titan_static {
		cursor = "";
		lockedTargetSound[] = {QPATHTOF(sound\igla_lock.ogg), 1, 1};
		lockingTargetSound[] = {QPATHTOF(sound\igla_seek.ogg), 1, 1};
		magazines[] += {QGVAR(mag_2Rnd_Igla)};
		weaponInfoType = "RscWeaponEmpty";
		weaponLockDelay = 4;
	};
};