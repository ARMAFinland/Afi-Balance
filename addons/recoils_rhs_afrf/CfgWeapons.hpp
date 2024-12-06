class CfgWeapons {

	class rhs_weap_ak103_1;
	class rhs_weap_ak103_2;
	class rhs_weap_ak103_zenitco01;
	class rhs_weap_ak103;
	class rhs_weap_ak104;
	class rhs_weap_ak105;
	class rhs_weap_ak74m;
	class rhs_weap_ak74mr;
	class rhs_weap_aks74;
	class rhs_weap_aks74u;
	class rhs_weap_aks74un;
	class rhs_weap_pkp;
	class rhs_weap_rpk_base;
	class rhs_weap_rpk74m;
	class rhs_weap_savz58v_ris;
	class Rifle_Base_F;
	class Rifle_Long_Base_F;


//AK74
	class rhs_weap_ak74m_Base_F : Rifle_Base_F { //["rhs_c_weapons","rhs_sounds"]
		recoil = "afi_recoil_ak74m";
	};	

	class rhs_weap_rpk74_base : rhs_weap_rpk_base { // ["rhs_c_weapons","ace_compat_rhs_afrf3"]
		recoil = "afi_recoil_ak74m";
	};

//AKM

	class rhs_weap_akm : rhs_weap_ak74m { // ["rhs_c_weapons"]
		recoil = "afi_recoil_akm";
	};

	class rhs_weap_akms : rhs_weap_akm { // ["rhs_c_weapons"]
		recoil = "afi_recoil_akm";
	};

	class rhs_weap_ak103_base : rhs_weap_akm { // ["rhs_c_weapons","rhs_sounds"]
		recoil = "afi_recoil_akm";
	};

//MG

	
	class rhs_weap_pkm : rhs_weap_pkp { // ["rhs_c_weapons","ace_compat_rhs_afrf3"]
		recoil = "afi_recoil_mg";
	};

	class rhs_pkp_base : Rifle_Long_Base_F { // ["rhs_c_weapons","rhs_sounds","rhs_c_weaponsounds"]
		recoil = "afi_recoil_mg";
	};

//folded
	
	class rhs_weap_ak74m_folded : rhs_weap_ak74m { //["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_ak74mr_folded : rhs_weap_ak74mr {// ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_ak105_folded : rhs_weap_ak105 { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_ak103_folded : rhs_weap_ak103 { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_ak103_zenitco01_folded : rhs_weap_ak103_zenitco01 { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_ak103_1_folded : rhs_weap_ak103_1 { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_ak104_folded : rhs_weap_ak104 { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_aks74_folded : rhs_weap_aks74 { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_rpk74m_folded : rhs_weap_rpk74m { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_ak103_2_folded : rhs_weap_ak103_2 { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};
	
	class rhs_weap_aks74u_folded : rhs_weap_aks74u { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_aks74un_folded : rhs_weap_aks74un { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};

	class rhs_weap_akms_folded : rhs_weap_akms { // ["rhs_c_weapons"]
		recoil = "afi_recoil_folded";
	};
};



