class CfgRecoils {
	class recoil_default;

	//   REFERNCE
	// Vanilla mk20 & RHS ak74m
	// class recoil_mk20: recoil_default
	// {
	// 	muzzleOuter[]={0.2,0.6,0.2,0.2};
	// 	kickBack[]={0.01,0.03};
	// 	permanent=0.1;
	// 	temporary=0.01;
	// };

	// Vanilla AKSU 
	// class recoil_aks: recoil_default
	// {
	// 	muzzleOuter[]={0.2,0.6,0.3,0.3};
	// 	kickBack[]={0.02,0.04};
	// 	permanent=0.1;
	// 	temporary=0.015;
	// };	

	// RHS AK103
	// class recoil_sdar: recoil_default
	// {
	// 	muzzleOuter[]={0.2,1,0.3,0.3};
	// 	kickBack[]={0.02,0.04};
	// 	permanent=0.1;
	// 	temporary=0.01;
	// };		

	// RHS, not used
	// class rhs_recoil_ak74: recoil_default
	// {
	// 	muzzleOuter[] = {0.3,1,0.3,0.3};
	// 	kickBack[] = {0.02,0.04};
	// 	permanent=0.1;
	// 	temporary = 0.01;
	// };	
	
	// RHS M16
	// class recoil_mxm: recoil_default
	// {
	// 	muzzleOuter[] = {0.3,0.8,0.3,0.4};
	// 	kickBack[] = {0.02,0.04};
	// 	permanent=0.1;
	// 	temporary = 0.01;
	// };
	// class recoil_zafir: recoil_default
	// {
	// 	muzzleOuter[]={0.5,1,0.7,0.4}; 
	// 	kickBack[]={0.02,0.08};
	// 	permanent=0.1;
	// 	temporary=0.005;
	// };	
	// class recoil_dmr_01: recoil_default
	// {
	// 	muzzleOuter[]={0.5,2,0.5,0.5}; 
	// 	kickBack[]={0.03,0.08};
	// 	permanent=0.1;
	// 	temporary=0.015;
	// };	
	
	// class recoil_default: Default
	// {
	// 	muzzleOuter[] = {0.06, 1, 0.3, 0.2};
	// 	kickBack[] = {0.042, 0.084};
	// 	permanent = 0.04;
	// 	temporary = 0.012;
	// };

	//Vanilla
	// class recoil_akm: recoil_default {
	// 	kickBack[]={0.035,0.07};
	// 	muzzleOuter[] = {0.3,0.7,0.4,0.5}; //{0.3,1,0.3,0.4};
	// 	permanent=0.09;
	// 	temporary=0.009;
	// };	
	
	// class recoil_zafir: recoil_default {
	// 	kickBack[]={0.03,0.06}; //{0.02,0.08};
	// 	muzzleOuter[]={0.2,0.7,0.3,0.3}; //{0.5,1,0.7,0.4}; 
	// 	permanent=0.1;
	// 	temporary=0.005;
	// };

	// class recoil_dmr_01: recoil_default {
	// 	kickBack[]={0.03,0.08};
	// 	muzzleOuter[]={0.5,1.5,0.5,0.5}; 
	// 	permanent=0.15;
	// 	temporary=0.015;
	// };	



	//Custom
	// class recoil_akm_folded: recoil_akm {
	// 	kickBack[]={0.035,0.07};
	// 	muzzleOuter[] = {0.3,0.7,0.4,0.5};
	// 	permanent=0.2;
	// 	temporary=0.02;
	// };

	// class recoil_ak74: recoil_akm {
	// 	kickBack[]={0.02,0.04};
	// 	muzzleOuter[] = {0.3,0.7,0.4,0.5}; //{0.3,1,0.3,0.4};
	// 	permanent=0.06;
	// 	temporary=0.006;
	// };

	// //Folded = more aim shift, less accurate burst
	// class recoil_ak74_folded: recoil_ak74 {
	// 	kickBack[]={0.02,0.04};
	// 	muzzleOuter[] = {0.3,0.7,0.4,0.5};
	// 	permanent=0.15;
	// 	temporary=0.02;
	// };

	// class recoil_M4: recoil_default {
	// 	kickBack[] = {0.03,0.05};
	// 	muzzleOuter[] = {0.3,0.6,0.4,0.4}; 
	// 	permanent=0.07;
	// 	temporary = 0.007;
	// };




	class afi_recoil_ak74m: recoil_default {
		kickBack[] = {0.02, 0.04};
		muzzleOuter[] = {0.3,0.7,0.4,0.5};
		permanent=0.06;
		temporary=0.006;
	};

	class afi_recoil_akm: recoil_default {
		kickBack[] = {0.035,0.07};
		muzzleOuter[] = {0.3,0.7,0.4,0.5}; 
		permanent = 0.09;
		temporary = 0.009;
	};

	class afi_recoil_folded: recoil_default {
		kickBack[]={0.035,0.07};
		muzzleOuter[] = {0.3,1.2,0.4,0.5};
		permanent=0.2;
		temporary=0.02;
	};

	class afi_recoil_m4: recoil_default {
		kickBack[] = {0.03,0.05};
		muzzleOuter[] = {0.3,0.6,0.4,0.4}; 
		permanent = 0.07;
		temporary = 0.007;
	};

	class afi_recoil_mg: recoil_default { //recoil_zafir - pkm etc
		kickBack[]={0.03,0.06};
		muzzleOuter[]={0.2,0.7,0.3,0.3};
		permanent=0.1;
		temporary=0.01;
		
	};

	class afi_recoil_mg_light: recoil_default { //rhs_weap_saw_base   rhs_weap_lmg_minimipara
		kickBack[] = {0.005, 0.02};
		muzzleOuter[] = {0.2, 0.6, 0.25, 0.25};
		permanent = 0.06;
		temporary = 0.01;
	};

	class afi_recoil_fnfal: recoil_default {
		kickBack[] = {0.03, 0.06};
		muzzleOuter[] = {0.3, 1, 0.3, 0.3};
		permanent = 0.04;
		temporary = 0.015;
	};


};

// class CfgRecoils
// {
// 	class recoil_default: Default
// 	{
// 		kickBack[] = {0.042, 0.084};
// 		muzzleInner[] = {0, 0, 0.1, 0.1};
// 		muzzleOuter[] = {0.06, 1, 0.3, 0.2};
// 		permanent = 0.04;
// 		temporary = 0.012;
// 	};
// 	class recoil_mk20: recoil_default // mk20_base_F   rhs_weap_m70b3n_pbg40   rhs_weap_m70b3n   rhs_weap_m70b1n   rhs_weap_MP44_base   rhs_weap_stgw57_base  rhs_weap_m70b1    rhs_weap_m70ab2   rhs_weap_m70_base   uk3cb_ak47_base
// 	{
// 		kickBack[] = {0.014, 0.042};
// 		muzzleOuter[] = {0.04, 0.6, 0.2, 0.2};
// 		temporary = 0.012;
// 	};
// 	class recoil_mk20c: recoil_default // arifle_Mk20_GL_F   arifle_Mk20C_F
// 	{
// 		muzzleOuter[] = {0.04, 0.8, 0.3, 0.2};
// 		kickBack[] = {0.028, 0.056};
// 		temporary = 0.018;
// 	};
// 	class recoil_trg20: recoil_default  // Tavor_base_F    UK3CB_HK33KA2   UK3CB_G36_LSW   UK3CB_G36_base   UK3CB_FAMAS_F1_base   UK3CB_ACR_Crew
// 	{
// 		muzzleOuter[] = {0.04, 1, 0.3, 0.3};
// 		kickBack[] = {0.028, 0.056};
// 		temporary = 0.018;
// 	};
// 	class recoil_trg21: recoil_default //arifle_TRG21_GL_F    arifle_TRG21_F
// 	{
// 		muzzleOuter[] = {0.04, 0.8, 0.3, 0.2};
// 		kickBack[] = {0.014, 0.042};
// 		temporary = 0.012;
// 	};
// 	class recoil_mx: recoil_default //  arifle_MX_Base_F    UK3CB_G36_MLIC   rhs_weap_m3a1_base    uk3cb_ak47    arifle_MX_Base_F
// 	{
// 		muzzleOuter[] = {0.06, 1, 0.4, 0.3};
// 		kickBack[] = {0.028, 0.056};
// 		temporary = 0.012;
// 	};
// 	class recoil_mxc: recoil_default // arifle_MXC_F   rhs_weap_m21a_pbg40_fold    rhs_weap_savz58v_ris     rhs_weap_savz58v_rail    rhs_weap_savz58v    rhs_weap_m21s_fold   rhs_weap_m21a_fold   
// 	{
// 		muzzleOuter[] = {0.06, 1.2, 0.4, 0.3};
// 		kickBack[] = {0.042, 0.084};
// 		temporary = 0.018;
// 	};
// 	class recoil_sw: recoil_default //arifle_MX_SW_F
// 	{
// 		muzzleOuter[] = {0.06, 0.8, 0.5, 0.2};
// 		kickBack[] = {0.028, 0.056};
// 		temporary = 0.012;
// 	};
// 	class recoil_mxm: recoil_default  //arifle_MXM_F
// 	{
// 		muzzleOuter[] = {0.06, 0.8, 0.4, 0.3};
// 		kickBack[] = {0.028, 0.056};
// 		temporary = 0.012;
// 	};
// 	class recoil_ktb: recoil_default //rhs_weap_aks74u   arifle_Katiba_Base_F    rhs_weap_vhs2_base
// 	{
// 		muzzleOuter[] = {0.06, 1, 0.3, 0.3};
// 		kickBack[] = {0.028, 0.056};
// 		temporary = 0.012;
// 	};
// 	class recoil_ktbc: recoil_default // arifle_Katiba_C_F   rhs_weap_vhsk2    rhs_weap_savz58_base
// 	{
// 		muzzleOuter[] = {0.06, 1.2, 0.3, 0.3};
// 		kickBack[] = {0.042, 0.084};
// 		temporary = 0.018;
// 	};
// 	class recoil_sdar: recoil_default // rhs_weap_ak103_base
// 	{
// 		muzzleOuter[] = {0.04, 1, 0.3, 0.3};
// 		kickBack[] = {0.028, 0.056};
// 		temporary = 0.012;
// 	};
// 	class recoil_mk200: recoil_default //LMG_Mk200_F    rhs_weap_M249_base
// 	{
// 		muzzleOuter[] = {0.08, 0.6, 0.6, 0.2};
// 		kickBack[] = {0.042, 0.084};
// 		temporary = 0.012;
// 	};
// 	class recoil_zafir: recoil_default //UK3CB_MG42_base   rhs_weap_m84    rhs_weap_mg42_base    UK3CB_BAF_L1A1 //fnfal?//   rhs_weap_pkm    LMG_Zafir_F
// 	{
// 		muzzleOuter[] = {0.1, 1, 0.7, 0.3};
// 		kickBack[] = {0.028, 0.112};
// 		temporary = 0.012;
// 	};

// 	//3cb FNAL uses this
// 	class recoil_ebr: recoil_default
// 	{
// 		kickBack[] = {0.056, 0.098};
// 		muzzleOuter[] = {0.08, 1.5, 0.6, 0.4};
// 		temporary = 0.012;
// 	};

// 	class recoil_ak12: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 0.8, 0.4, 0.3};
// 		kickBack[] = {0.03, 0.06};
// 		temporary = 0.005;
// 	};

// 	class recoil_akm: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 1, 0.3, 0.4};
// 		kickBack[] = {0.04, 0.08};
// 		temporary = 0.01;
// 	};

// 	class recoil_aks: recoil_default
// 	{
// 		muzzleOuter[] = {0.2, 0.6, 0.3, 0.3};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.015;
// 	};

// 	//m4?
// 	class recoil_arx_primary: recoil_default //arifle_ARX_blk_F
// 	{
// 		muzzleOuter[] = {0.2, 0.8, 0.3, 0.3};
// 		kickBack[] = {0.02, 0.03};
// 		temporary = 0.01;
// 	};

// 	//m4?
// 	class recoil_car: recoil_default //arifle_CTAR_blk_F
// 	{
// 		muzzleOuter[] = {0.2, 0.8, 0.2, 0.2};
// 		kickBack[] = {0.02, 0.03};
// 		temporary = 0.01;
// 	};

// 	//m4?
// 	class recoil_car_lsw: recoil_default //arifle_CTARS_blk_F
// 	{
// 		muzzleOuter[] = {0.2, 0.6, 0.3, 0.2};
// 		kickBack[] = {0.02, 0.03};
// 		temporary = 0.005;
// 	};

// 	//HK416 
// 	class recoil_spar: recoil_default
// 	{
// 		muzzleOuter[] = {0.1, 0.6, 0.2, 0.2};
// 		kickBack[] = {0.01, 0.03};
// 		temporary = 0.01;
// 	};

// 	//HK416 AR?
// 	class recoil_spar_lsw: recoil_default
// 	{
// 		muzzleOuter[] = {0.1, 0.4, 0.3, 0.2};
// 		kickBack[] = {0.01, 0.03};
// 		temporary = 0.005;
// 	};
// 	//762
// 	// class recoil_spar_dmr: recoil_default
// 	// {
// 	// 	muzzleOuter[] = {0.4, 1.5, 0.5, 0.6};
// 	// 	kickBack[] = {0.04, 0.08};
// 	// 	temporary = 0.01;
// 	// };

// 	//vanilla saw
// 	class recoil_lim: recoil_default
// 	{
// 		muzzleOuter[] = {0.1, 0.3, 0.2, 0.2};
// 		kickBack[] = {0.01, 0.03};
// 		temporary = 0.005;
// 	};

// 	class recoil_ak12u: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 0.8, 0.4, 0.3};
// 		kickBack[] = {0.03, 0.06};
// 		temporary = 0.005;
// 	};

// 	class recoil_rpk12: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 0.8, 0.4, 0.3};
// 		kickBack[] = {0.03, 0.06};
// 		temporary = 0.005;
// 	};

// 	class rhs_recoil_ak74m: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 1, 0.3, 0.3};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.01;
// 	};

// 	class rhs_recoil_ak74m_folded: recoil_default
// 	{
// 		muzzleOuter[] = {0.6, 1.5, 0.8, 0.3};
// 		kickBack[] = {0.02, 0.08};
// 		permanent = 0.1;
// 		temporary = 0.05;
// 	};

// 	class rhs_recoil_akm: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 1.2, 0.3, 0.3};
// 		kickBack[] = {0.03, 0.06};
// 		temporary = 0.015;
// 	};

// 	class rhs_recoil_akms: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 1.2, 0.4, 0.3};
// 		kickBack[] = {0.03, 0.06};
// 		temporary = 0.015;
// 	};

// 	class rhs_recoil_akms_folded: recoil_default
// 	{
// 		muzzleOuter[] = {0.6, 1.5, 0.8, 0.3};
// 		kickBack[] = {0.02, 0.08};
// 		permanent = 0.1;
// 		temporary = 0.05;
// 	};

// 	class rhs_recoil_rpk74: recoil_default // rhs_weap_rpk74_base
// 	{
// 		muzzleOuter[] = {0.3, 1, 0.2, 0.2};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.01;
// 	};

// 	class rhs_recoil_rpk74_folded: recoil_default
// 	{
// 		muzzleOuter[] = {0.7, 1.6, 0.8, 0.3};
// 		kickBack[] = {0.02, 0.08};
// 		permanent = 0.1;
// 		temporary = 0.05;
// 	};

// 	class rhs_recoil_pkm: recoil_default //rhs_pkp_base
// 	{
// 		muzzleOuter[] = {0.55, 1, 0.7, 0.35};
// 		kickBack[] = {0.02, 0.09};
// 		temporary = 0.005;
// 	};

// 	class rhs_recoil_m249: recoil_default { //rhs_weap_saw_base   rhs_weap_lmg_minimipara
// 		muzzleOuter[] = {0.2, 0.6, 0.25, 0.1};
// 		muzzleInner[] = {0, 0, 0.1, 0.1};
// 		kickBack[] = {0.005, 0.02};
// 		permanent = 0.06;
// 		temporary = 0.02;
// 	};

// 	class rhs_recoil_m240: recoil_default //rhs_weap_m240_base
// 	{
// 		muzzleOuter[] = {0.5, 1, 0.7, 0.3};
// 		muzzleInner[] = {0, 0, 0.15, 0.15};
// 		kickBack[] = {0.02, 0.08};
// 		permanent = 0.08;
// 		temporary = 0.005;
// 	};

// 	class rhs_recoil_m4: recoil_default //rhs_weap_m4_Base
// 	{
// 		muzzleOuter[] = {0.3, 0.8, 0.4, 0.3};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.01;
// 	};

// 	class rhs_recoil_mk18: recoil_default //rhs_weap_hk416d10    rhs_weap_mk18
// 	{
// 		muzzleOuter[] = {0.3, 1, 0.4, 0.3};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.01;
// 	};

// 	class rhs_recoil_m27: recoil_default //rhs_weap_m27iar
// 	{
// 		kickBack[] = {0.02, 0.04};
// 		muzzleOuter[] = {0.3, 0.8, 0.4, 0.3};
// 		temporary = 0.01;
// 	};

// 	class rhs_recoil_mk18145: recoil_default //rhs_weap_hk416d145
// 	{
// 		muzzleOuter[] = {0.3, 0.8, 0.4, 0.3};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.01;
// 	};

// 	class rhs_weap_scarh_recoil: recoil_default
// 	{
// 		kickBack[] = {0.034, 0.055};
// 		muzzleOuter[] = {0.353, 0.866, 0.4, 0.3};
// 		permanent = 0.155;
// 		temporary = 0.025;
// 	};

// 	class rhs_weap_scarh_folded_recoil: recoil_default
// 	{
// 		muzzleOuter[] = {0.4, 1.1, 0.6, 0.6};
// 		kickBack[] = {0.05, 0.07};
// 		permanent = 0.1;
// 		temporary = 0.05;
// 	};

// 	class rhs_weap_scarl_recoil: recoil_default
// 	{
// 		muzzleOuter[] = {0.4, 0.9, 0.5, 0.3};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.02;
// 	};

// 	class rhs_weap_scarl_folded_recoil: recoil_default
// 	{
// 		muzzleOuter[] = {0.3, 1.1, 0.5, 0.4};
// 		kickBack[] = {0.03, 0.045};
// 		permanent = 0.1;
// 		temporary = 0.05;
// 	};

// 	//SAW M249 but 7.62
// 	class UK3CB_BAF_recoil_saw_762: recoil_default //UK3CB_BAF_L110_762_Base
// 	{
// 		muzzleOuter[] = {0.4, 0.6, 0.6, 0.2};
// 		kickBack[] = {0.03, 0.06};
// 		temporary = 0.008;
// 	};

// 	//SAW M249
// 	class UK3CB_BAF_recoil_saw_556: recoil_default //UK3CB_BAF_L110_556_Base
// 	{
// 		kickBack[] = {0.005, 0.02};
// 		muzzleOuter[] = {0.2, 0.6, 0.2, 0.1};
// 		temporary = 0.008;
// 	};

// 	//M240??
// 	class UK3CB_BAF_Recoil_L7: recoil_default // UK3CB_BAF_L7A2
// 	{
// 		kickBack[] = {0.02, 0.04};
// 		muzzleOuter[] = {0.4, 0.6, 0.4, 0.2};
// 		temporary = 0.005;
// 	};

// 	//investigate
// 	class rhs_recoil_fnfal: recoil_default //rhs_weap_fnfal_base
// 	{
// 		kickBack[] = {0.03, 0.06};
// 		muzzleOuter[] = {0.3, 1.2, 0.3, 0.3};
// 		temporary = 0.015;
// 	};

// 	class rhs_recoil_g36: recoil_default // rhs_weap_g36_base
// 	{
// 		muzzleOuter[] = {0.3, 0.9, 0.4, 0.3};
// 		kickBack[] = {0.02, 0.04};
// 		temporary = 0.02;
// 	};

// 	class rhs_recoil_g36_folded: recoil_default //rhs_weap_g36c_Folded   rhs_weap_g36kv_Folded   rhs_weap_g36kv_ag36_Folded
// 	{
// 		muzzleOuter[] = {0.37, 1, 0.5, 0.5};
// 		kickBack[] = {0.04, 0.06};
// 		temporary = 0.04;
// 	};

// 	class uk3cb_recoil_5104: recoil_ebr //uk3cb_stgw57_5104
// 	{
// 		muzzleOuter[] = {0.4, 1.5, 0.65, 0.45};
// 		kickBack[] = {0.07, 0.1};
// 		temporary = 0.017;
// 		permanent = 0.11;
// 	};
// };