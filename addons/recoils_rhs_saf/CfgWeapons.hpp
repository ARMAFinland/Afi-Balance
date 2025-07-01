class CfgWeapons {

	class rhs_weap_g36c;
	class rhs_weap_g36kv_ag36;
	class rhs_weap_g36kv;
	class rhs_weap_m21a_pbg40;
	class rhs_weap_minimi_para_railed;
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class rhs_weap_m70ab2;
	class rhs_weap_SCARH_STD;
	class rhs_weap_SCARH_LB;
	class rhs_weap_SCARH_FDE_CQC;
	class rhs_weap_SCARH_FDE_STD;
	class rhs_weap_SCARH_FDE_LB;

//AKM
	
	class rhs_weap_m70b1n : rhs_weap_m70ab2 { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_akm";
	};
	
	class rhs_weap_m70b3n : rhs_weap_m70ab2 { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_akm";
	};
	
	class rhs_weap_m70b3n_pbg40 : rhs_weap_m70ab2 { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_akm";
	};	

//M4

	class rhs_weap_g36_base : Rifle_Base_F { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_m4";
	};

//MG

	class rhs_weap_m84 : Rifle_Long_Base_F { // ["rhssaf_c_weapons","ace_compat_rhs_saf3"]
		recoil = "afi_recoil_mg";
	};

//folded

	class rhs_weap_minimi_para_railed_folded : rhs_weap_minimi_para_railed { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_m21a_pbg40_fold : rhs_weap_m21a_pbg40 { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_g36c_Folded : rhs_weap_g36c { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_g36kv_Folded : rhs_weap_g36kv { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_g36kv_ag36_Folded : rhs_weap_g36kv_ag36 { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_STD_Folded : rhs_weap_SCARH_STD { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_LB_Folded : rhs_weap_SCARH_LB { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_FDE_CQC_Folded : rhs_weap_SCARH_FDE_CQC { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_FDE_STD_Folded : rhs_weap_SCARH_FDE_STD { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_FDE_LB_Folded : rhs_weap_SCARH_FDE_LB { // ["rhssaf_c_weapons"]
		recoil = "afi_recoil_folded";
	};
};
