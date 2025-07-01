class CfgWeapons {

	class rhs_weap_fnfal_base;
	class Rifle_Base_F;
	class UK3CB_ACR_base;
	class UK3CB_KH2002_BASE;

//AKM

	class uk3cb_ak47_base : Rifle_Base_F { // ["UK3CB_Factions_Weapons_AK47"]
		recoil = "afi_recoil_akm";
	};

	class uk3cb_ak47 : uk3cb_ak47_base { // ["UK3CB_Factions_Weapons_AK47"]
		recoil = "afi_recoil_akm";
	};

	class UK3CB_G3_Base : Rifle_Base_F { // ["UK3CB_Factions_Weapons_G3"]
		recoil = "afi_recoil_akm";
	};	

//M4
	
	class UK3CB_KH2002_Carbine : UK3CB_KH2002_BASE { // ["UK3CB_Factions_Weapons_Khaybar"]
		recoil = "afi_recoil_m4";
	};
	
	class UK3CB_ACR_Crew : UK3CB_ACR_base { // ["UK3CB_Factions_Weapons_ACR"]
		recoil = "afi_recoil_m4";
	};

	class UK3CB_FAMAS_F1_base : Rifle_Base_F { // ["UK3CB_Factions_Weapons_FAMAS"]
		recoil = "afi_recoil_m4";
	};

	class UK3CB_G36_base : Rifle_Base_F { // ["UK3CB_Factions_Weapons_G36"]
		recoil = "afi_recoil_m4";
	};

	class UK3CB_G36_MLIC : UK3CB_G36_base { // ["UK3CB_Factions_Weapons_G36"]
		recoil = "afi_recoil_m4";
	};

	class UK3CB_G36_LSW : UK3CB_G36_base { // ["UK3CB_Factions_Weapons_G36"]
		recoil = "afi_recoil_m4";
	};

	class UK3CB_HK33KA2 : UK3CB_G3_Base { // ["UK3CB_Factions_Weapons_G3"]
		recoil = "afi_recoil_m4";
	};

	class uk3cb_aug_base : Rifle_Base_F { // ["UK3CB_Factions_Weapons_AUG"]
		recoil = "afi_recoil_m4";
	};



//MG
	class UK3CB_MG42_base : Rifle_Base_F { // ["UK3CB_Factions_Weapons_MG3"]
		recoil = "afi_recoil_mg";
	};

//FNFAL

	class UK3CB_STGW57_base : Rifle_Base_F { // ["UK3CB_Factions_Weapons_STGW"]
		recoil = "afi_recoil_fnfal";
	};

	class UK3CB_STGW57 : UK3CB_STGW57_base { // ["UK3CB_Factions_Weapons_STGW"]
		recoil = "afi_recoil_fnfal";
	};
	
	class uk3cb_stgw57_RIS : UK3CB_STGW57_base { // ["UK3CB_Factions_Weapons_STGW"]
		recoil = "afi_recoil_fnfal";
	};
	
	
	class uk3cb_stgw57_RIS_commando : uk3cb_stgw57_RIS { // ["UK3CB_Factions_Weapons_STGW"]
		recoil = "afi_recoil_fnfal";
	};
	
	class UK3CB_FNFAL_Base : rhs_weap_fnfal_base { // ["UK3CB_Factions_Weapons_STGW"]
		recoil = "afi_recoil_fnfal";
	};
	
	class uk3cb_stgw57_5104 : UK3CB_STGW57_base { // ["UK3CB_Factions_Weapons_STGW"]
		recoil = "afi_recoil_fnfal";
	};	

};
