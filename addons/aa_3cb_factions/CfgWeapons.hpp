class CfgWeapons {
	class Launcher_Base_F;
	
	class UK3CB_Blowpipe: Launcher_Base_F {
		magazines[] += {QGVAR(blowpipe_round)};
	};

	class rhs_weap_azp23;
	class UK3CB_30mm_Cannon: rhs_weap_azp23 {
		magazines[] += {QGVAR(mag_AZP23_2000_green),QGVAR(mag_AZP23_2000_red),QGVAR(mag_AZP23_2000_yellow)};
	};
};
