class CfgWeapons {

	class rhs_weap_m21a;
	class rhs_weap_m21s;
	class rhs_weap_savz58_rail_base;
	class rhs_weap_savz58_ris_base;
	class rhs_weap_savz61;
	class rhs_weap_vhsd2;
	class Rifle_Base_F;
//AKM
	class rhs_weap_m70_base : Rifle_Base_F { // ["rhsgref_c_weapons","rhsgref_sounds","rhssaf_c_weapons","ace_compat_rhs_saf3"]
		recoil = "afi_recoil_akm";
	};
	
	class rhs_weap_m70ab2 : rhs_weap_m70_base { // ["rhsgref_c_weapons","rhssaf_c_weapons","ace_compat_rhs_gref3"]
		recoil = "afi_recoil_akm";
	};
	
	class rhs_weap_m70b1 : rhs_weap_m70ab2 { // ["rhsgref_c_weapons","rhssaf_c_weapons"]
		recoil = "afi_recoil_akm";
	};

	class rhs_weap_savz58_base : Rifle_Base_F { // ["rhsgref_c_weapons","rhsgref_sounds","ace_compat_rhs_gref3"]
		recoil = "afi_recoil_akm";
	};	

	class rhs_weap_m76 : rhs_weap_m70_base { // ["rhsgref_c_weapons","rhsgref_sounds","rhssaf_c_weapons","ace_compat_rhs_saf3","ace_compat_rhs_gref3"]
		recoil = "afi_recoil_akm";
	};	

	class rhs_weap_m92 : rhs_weap_m70_base { // ["rhsgref_c_weapons","rhssaf_c_weapons","ace_compat_rhs_saf3","ace_compat_rhs_gref3"]
		recoil = "afi_recoil_akm";
	};		
	
	class rhs_weap_savz58v : rhs_weap_savz58_base { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_akm";
	};		

	class rhs_weap_savz58v_rail : rhs_weap_savz58_rail_base { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_akm";
	};

	class rhs_weap_savz58v_ris : rhs_weap_savz58_ris_base { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_akm";
	};


//M4

	class rhs_weap_vhs2_base : Rifle_Base_F { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_m4";
	};
	
	class rhs_weap_vhsk2 : rhs_weap_vhsd2 { // ["rhsgref_c_weapons","ace_compat_rhs_gref3"]
		recoil = "afi_recoil_m4";
	};


//MG

	class rhs_weap_mg42_base : Rifle_Base_F { // ["rhsgref_c_weapons","RHSGREF_weapon_sounds","ace_compat_rhs_gref3"]
		recoil = "afi_recoil_mg";
	};

//FNFAL

	class rhs_weap_stgw57_base : Rifle_Base_F { // ["rhsgref_c_weapons","rhsgref_sounds"]
		recoil = "afi_recoil_fnfal";
	};

	class rhs_weap_fnfal_base : Rifle_Base_F { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_fnfal";
	};

//folded

	class rhs_weap_m70ab2_fold : rhs_weap_m70ab2 { // ["rhsgref_c_weapons","rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};
	class rhs_weap_m21a_fold : rhs_weap_m21a { // ["rhsgref_c_weapons","rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_m21s_fold : rhs_weap_m21s { // ["rhsgref_c_weapons","rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_savz58v_fold : rhs_weap_savz58v { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_savz58v_rail_fold : rhs_weap_savz58v_rail { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_savz61_folded : rhs_weap_savz61 { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_savz58v_ris_fold : rhs_weap_savz58v_ris { // ["rhsgref_c_weapons"]
		recoil = "afi_recoil_folded";
	};
};
