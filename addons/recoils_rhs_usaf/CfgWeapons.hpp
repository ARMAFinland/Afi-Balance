class CfgWeapons {

	class arifle_MX_Base_F;
	class LMG_Mk200_F;
	class rhs_weap_m249_pip_L_para;
	class rhs_weap_m249_pip_S_para;
	class rhs_weap_m4a1_blockII;
	class rhs_weap_m4a1;
	class rhs_weap_mk17_CQC;
	class rhs_weap_mk17_LB;
	class rhs_weap_mk17_STD;
	class rhs_weap_SCAR_Base;
	class rhs_weap_SCARH_FDE_CQC;
	class rhs_weap_SCARH_FDE_LB;
	class rhs_weap_SCARH_FDE_STD;
	class rhs_weap_SCARH_LB;
	class rhs_weap_SCARH_STD;
	class rhs_weap_SCARH_USA_CQC;
	class rhs_weap_SCARH_USA_LB;
	class rhs_weap_SCARH_USA_STD;
	class Rifle_Base_F;
	class Rifle_Long_Base_F;

//M4
	class rhs_weap_m4_Base : arifle_MX_Base_F { // ["rhsusf_c_weapons","rhsusf_sounds","ace_compat_rhs_usf3"]
		recoil = "afi_recoil_m4";
	};

	class rhs_weap_m27iar : rhs_weap_m4a1 { // ["rhsusf_c_weapons","ace_compat_rhs_usf3"]
		recoil = "afi_recoil_m4";
	};
	
	class rhs_weap_mk18 : rhs_weap_m4a1_blockII { // ["rhsusf_c_weapons","ace_compat_rhs_usf3"]
		recoil = "afi_recoil_m4";
	};

	class rhs_weap_hk416d10 : rhs_weap_m4a1 { // ["rhsusf_c_weapons","ace_compat_rhs_usf3"]
		recoil = "afi_recoil_m4";
	};

	class rhs_weap_hk416d145 : rhs_weap_hk416d10 { // ["rhsusf_c_weapons","ace_compat_rhs_usf3"]
		recoil = "afi_recoil_m4";
	};

//AKM

	class rhs_weap_SCAR_H_Base : rhs_weap_SCAR_Base { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_akm";
	};

	class rhs_weap_SCAR_L_Base : rhs_weap_SCAR_Base { // ["rhsusf_c_weapons","rhsusf_weapon_sounds"]
		recoil = "afi_recoil_akm";
	};

//MG Light

	class rhs_weap_saw_base : Rifle_Base_F { // ["rhsusf_c_weapons","rhsusf_c_weaponsounds","ace_compat_rhs_usf3"]
		recoil = "afi_recoil_mg_light";
	};
	
	class rhs_weap_lmg_minimipara : rhs_weap_saw_base { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_mg_light";
	};

	class rhs_weap_M249_base : LMG_Mk200_F { // ["rhsusf_c_weapons","rhsusf_weapon_sounds","rhsusf_c_weaponsounds"]
		recoil = "afi_recoil_mg_light";
	};

//MG

	class rhs_weap_m240_base : rhs_weap_M249_base { // ["rhsusf_c_weapons","rhsusf_sounds","rhsusf_weapon_sounds","rhsusf_c_weaponsounds","ace_compat_rhs_usf3"]
		recoil = "afi_recoil_mg";
	};

//folded

	class rhs_weap_mk17_CQC_Folded : rhs_weap_mk17_CQC { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_mk17_STD_Folded : rhs_weap_mk17_STD { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_mk17_LB_Folded : rhs_weap_mk17_LB { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_USA_CQC_Folded : rhs_weap_SCARH_USA_CQC { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_USA_STD_Folded : rhs_weap_SCARH_USA_STD { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_SCARH_USA_LB_Folded : rhs_weap_SCARH_USA_LB { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_m249_pip_S_para_folded : rhs_weap_m249_pip_S_para { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_m249_pip_L_para_folded : rhs_weap_m249_pip_L_para { // ["rhsusf_c_weapons"]
		recoil = "afi_recoil_folded";
	};

};
