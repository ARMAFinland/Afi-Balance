

tun_all = true;
_cfgArray = '(isClass(_x >> "CamShakePlayerFire") && inheritsFrom (_x >> "CamShakePlayerFire">>"power") isEqualTo (_x >> "CamShakePlayerFire"))' configClasses (configFile >> "CfgAmmo");

ok = createHashMap;


{
	private _class = _x;
	private _isClass = isClass(_x >> "CamShakePlayerFire");
	private _number = 0 < getNumber(_x >> "CamShakePlayerFire">>"afi");
	private _power = getNumber(_x >> "CamShakePlayerFire">>"power");
	private _duration = getNumber(_x >> "CamShakePlayerFire">>"duration");
	private _frequency = getNumber(_x >> "CamShakePlayerFire">>"frequency");
	private _configName = configName _class;
	private _array = ok getOrDefault [_isClass,[]];
	_array pushBack [_configName,_number,[_power,_duration,_frequency]];
	ok set [_isClass,_array];
} forEach _cfgArray;

inheritsFrom(configFile >> "CfgAmmo" >> "ACE_12Gauge_Pellets_Submunition_No3_Buck" >> "CamShakePlayerFire">>"power") isEqualTo (configFile >> "CfgAmmo" >> "ACE_12Gauge_Pellets_Submunition_No3_Buck" >> "CamShakePlayerFire">>"power")

power
duration
frequency


isClass(configFile >> "CfgAmmo" >> "AfiBalance_aa_rhs_afrf_9k32_missile" >> "CamShakePlayerFire")



getNumber(configFile >> "CfgAmmo" >> "AfiBalance_aa_rhs_afrf_9k32_missile" >> "CamShakePlayerFire">>"power")

inheritsFrom(configFile >> "CfgAmmo" >> "ACE_12Gauge_Pellets_Submunition_No3_Buck" >> "CamShakePlayerFire">>"power")





tun_all = true;
_cfgArray = '(!(getText (_x >> "recoil") in ["empty",""]) && (inheritsFrom (_x >> "recoil") isEqualTo _x || tun_all) )' configClasses (configFile >> "CfgWeapons");

ok = createHashMap;


{
	private _class = _x;
	private _recoil = getText (_class >> "recoil");
	private _configName = configName _class;
	private _array = ok getOrDefault [_recoil,[]];
	_array pushBack _configName;
	ok set [_recoil,_array];
	private _inherit = inheritsFrom (_class >> "recoil");
} forEach _cfgArray;




[
- ["recoil_mk20",["mk20_base_F","uk3cb_ak47_base","rhs_weap_m70_base","rhs_weap_m70ab2","rhs_weap_m70b1","rhs_weap_stgw57_base","rhs_weap_MP44_base","rhs_weap_m70b1n","rhs_weap_m70b3n","rhs_weap_m70b3n_pbg40"]],// M70 = akm done, rhs_weap_stgw57 to fal, mk20 M4?

- ["recoil_sdar",["SDAR_base_F","rhs_weap_ak103_base"]],  //Done rhs_weap_ak103_base

- ["recoil_aks",["arifle_AKS_base_F","arifle_AK12U_base_F"]],  //Done

- ["rhs_recoil_pkm",["rhs_pkp_base"]], //Done 

- ["rhs_recoil_g36_folded",["rhs_weap_g36c_Folded","rhs_weap_g36kv_Folded","rhs_weap_g36kv_ag36_Folded"]], //Done

- ["rhs_recoil_m4",["rhs_weap_m4_Base","rhs_weap_SCAR_L_Base"]],  //Done

- ["rhs_recoil_mk18145",["rhs_weap_hk416d145"]], //Done

- ["recoil_ak12",["arifle_AK12_base_F"]], //Done

- ["recoil_MSBS65",["arifle_MSBS65_base_F"]], //Done

- ["rhs_recoil_akms",["rhs_weap_akms"]], //Done

- ["recoil_ebr",["EBR_base_F","rhs_weap_sr25","rhs_weap_savz61_folded","UK3CB_AR10","UK3CB_FNFAL_Base","UK3CB_M14_base","UK3CB_STGW57_base"]],//Done

- ["recoil_mk200",["LMG_Mk200_F","rhs_weap_M249_base"]], //Done

- ["recoil_car",["arifle_CTAR_base_F"]], //Done

- ["recoil_rpk12",["arifle_RPK12_base_F"]], //Done

- ["rhs_weap_scarh_recoil",["rhs_weap_SCAR_H_Base"]], //Done

- ["uk3cb_recoil_stgw57k",["uk3cb_stgw57_RIS_commando"]], //Done

- ["recoil_mxc",["arifle_MXC_F","rhs_weap_m21a_fold","rhs_weap_m21s_fold","rhs_weap_savz58v","rhs_weap_savz58v_rail","rhs_weap_savz58v_ris","rhs_weap_m21a_pbg40_fold"]], //Done

- ["recoil_trg20",["Tavor_base_F","UK3CB_ACR_Crew","UK3CB_FAMAS_F1_base","UK3CB_G36_base","UK3CB_G36_LSW","UK3CB_HK33KA2"]], //Done

- ["recoil_car_dmr",["DMR_07_base_F"]],

- ["rhs_recoil_ak74m",["rhs_weap_ak74m_Base_F"]], //Done

- ["rhs_recoil_rpk74",["rhs_weap_rpk74_base"]], //Done

- ["recoil_trg21",["arifle_TRG21_F","arifle_TRG21_GL_F"]], //Done

- ["recoil_ARX_primary",["arifle_ARX_base_F"]], //Done

- ["rhs_recoil_ak74m_folded",["rhs_weap_ak74m_folded","rhs_weap_ak74mr_folded","rhs_weap_ak105_folded","rhs_weap_ak103_folded","rhs_weap_ak103_zenitco01_folded","rhs_weap_ak103_1_folded","rhs_weap_ak104_folded","rhs_weap_aks74_folded"]], //Done

- ["rhs_recoil_akms_folded",["rhs_weap_akms_folded"]], //Done

- ["rhs_recoil_m240",["rhs_weap_m249_pip_S_para_folded","rhs_weap_m249_pip_L_para_folded","rhs_weap_m240_base","rhs_weap_minimi_para_railed_folded"]], //Done

- ["rhs_recoil_m14",["rhs_weap_m14_base"]],

- ["recoil_dmr_01",["DMR_01_base_F","rhs_weap_kar98k_Base_F","rhs_weap_m38_Base_F","rhs_weap_M1garand_Base_F"]],

- ["recoil_akm",["arifle_AKM_base_F","rhs_weap_m76","rhs_weap_m92"]], //Done

- ["recoil_spar",["arifle_SPAR_01_base_F"]], //Done

- ["recoil_spar_dmr",["arifle_SPAR_03_base_F"]],

- ["rhs_recoil_fnfal",["rhs_weap_fnfal_base"]], //Done

- ["recoil_sw",["arifle_MX_SW_F"]], //Done

- ["recoil_car_lsw",["arifle_CTARS_base_F"]], //Done

- ["UK3CB_BAF_Recoil_L7",["UK3CB_BAF_L7A2"]],

- ["recoil_dmr_03",["DMR_03_base_F","UK3CB_G3_Base"]], //Done

- ["recoil_mmg_01",["MMG_01_base_F","MMG_02_base_F","rhs_weap_ak103_2_folded","rhs_weap_aks74u_folded","rhs_weap_aks74un_folded","rhs_weap_m70ab2_fold","rhs_weap_savz58v_fold","rhs_weap_savz58v_rail_fold","rhs_weap_savz58v_ris_fold"]], //Done

- ["rhs_recoil_rpk74_folded",["rhs_weap_rpk74m_folded"]], //Done

- ["recoil_mk20c",["arifle_Mk20C_F","arifle_Mk20_GL_F"]], //Done

- ["recoil_mxm",["arifle_MXM_F"]], //Done

- ["recoil_dmr_02",["DMR_02_base_F"]],

- ["recoil_lim",["LMG_03_base_F"]], //Done

- ["rhs_recoil_akm",["rhs_weap_akm"]], //Done

- ["rhs_recoil_asval_folded",["rhs_weap_asval_folded","rhs_weap_asval_grip_folded"]],

- ["rhs_recoil_svd",["rhs_weap_svd"]],

- ["rhs_weap_scarh_folded_recoil",["rhs_weap_mk17_CQC_Folded","rhs_weap_mk17_STD_Folded","rhs_weap_mk17_LB_Folded","rhs_weap_SCARH_USA_CQC_Folded","rhs_weap_SCARH_USA_STD_Folded","rhs_weap_SCARH_USA_LB_Folded","rhs_weap_SCARH_CQC_Folded","rhs_weap_SCARH_STD_Folded","rhs_weap_SCARH_LB_Folded","rhs_weap_SCARH_FDE_CQC_Folded","rhs_weap_SCARH_FDE_STD_Folded","rhs_weap_SCARH_FDE_LB_Folded"]], //Done


- ["recoil_ktb",["arifle_Katiba_Base_F","rhs_weap_aks74u","rhs_weap_vhs2_base"]], //Done

- ["recoil_ktbc",["arifle_Katiba_C_F","rhs_weap_savz58_base","rhs_weap_vhsk2","UK3CB_KH2002_Carbine"]], //Done

- ["recoil_dmr_04",["DMR_04_base_F"]],

- ["rhs_recoil_mk18",["rhs_weap_mk18","rhs_weap_hk416d10"]], //Done

- ["uk3cb_recoil_5104",["uk3cb_stgw57_5104"]], //Done

- ["rhs_recoil_asval",["rhs_weap_asval"]],

- ["rhs_recoil_m27",["rhs_weap_m27iar"]], //Done

- ["uk3cb_recoil_stgw57",["UK3CB_STGW57","uk3cb_stgw57_RIS"]], //Done

- ["recoil_dmr_06",["DMR_06_base_F","UK3CB_M14","UK3CB_M21"]],

- ["recoil_spar_lsw",["arifle_SPAR_02_base_F"]], //Done

- ["rhs_recoil_m249",["rhs_weap_saw_base","rhs_weap_lmg_minimipara"]], //Done

- ["UK3CB_BAF_recoil_saw_556",["UK3CB_BAF_L110_556_Base"]], //Done

- ["recoil_zafir",["LMG_Zafir_F","rhs_weap_pkm","UK3CB_BAF_L1A1","rhs_weap_mg42_base","rhs_weap_m84","UK3CB_MG42_base"]], // Done

- ["recoil_mx",["arifle_MX_Base_F","rhs_weap_M320_Base_F","uk3cb_ak47","rhs_weap_m3a1_base","UK3CB_G36_MLIC"]],// Done

- ["rhs_recoil_g36",["rhs_weap_g36_base"]]] //Done


///ASDsadasdasdsadasdsadas


- ["recoil_mk20",["mk20_base_F","arifle_Mk20_F","arifle_Mk20_plain_F","arifle_Mk20_pointer_F","arifle_Mk20_Holo_F","arifle_Mk20_ACO_F","arifle_Mk20_ACO_pointer_F","arifle_Mk20_MRCO_F","arifle_Mk20_MRCO_plain_F","arifle_Mk20_MRCO_pointer_F","uk3cb_ak47_base","rhs_weap_m70_base","rhs_weap_m70ab2","rhs_weap_m70b1","rhs_weap_m21_base","rhs_weap_m21a","rhs_weap_m21a_pr","rhs_weap_m21s","rhs_weap_m21s_pr","rhs_weap_stgw57_base","rhs_weap_stgw57","rhs_weap_MP44_base","rhs_weap_MP44","rhs_weap_m21s_eo","rhs_weap_m70b1n","rhs_weap_m70b3n","rhs_weap_m70b3n_pbg40","rhs_weap_m21a_pr_pbg40","rhs_weap_m21a_pbg40","rhs_weap_m21a_pr_aco","rhs_weap_m21a_pkas","rhs_weap_m21s_pkas","rhs_weap_m21a_pr_mrco","rhs_weap_m21a_pr_hamr","rhs_weap_m21a_pr_sos","rhs_weap_m21s_pr_aco","rhs_weap_m21s_pr_mrco","rhs_weap_m21s_pr_hamr","rhs_weap_m21s_pr_sos","UK3CB_BAF_L119_Base","UK3CB_BAF_L119A1","UK3CB_BAF_L119A1_CQB","UK3CB_BAF_L119A1_RIS","UK3CB_BAF_L119A1_RIS_Grippod","UK3CB_BAF_L119A1_RIS_Grippod_D","UK3CB_BAF_L119A1_RIS_Grippod_G","UK3CB_BAF_L119A1_RIS_Grippod_T","UK3CB_BAF_L119A1_RIS_Grippod_W","UK3CB_BAF_L119A1_RIS_AFG","UK3CB_BAF_L119A1_RIS_AFG_D","UK3CB_BAF_L119A1_RIS_AFG_G","UK3CB_BAF_L119A1_RIS_AFG_T","UK3CB_BAF_L119A1_RIS_AFG_W","UK3CB_BAF_L119A1_UKUGL","UK3CB_BAF_L119A1_FG","UK3CB_BAF_L85A2","UK3CB_BAF_L85A2_UGL","UK3CB_BAF_L85A2_UGL_HWS","UK3CB_BAF_L85A2_RIS","UK3CB_BAF_L85A2_RIS_G","UK3CB_BAF_L85A2_RIS_D","UK3CB_BAF_L85A2_RIS_W","UK3CB_BAF_L85A2_EMAG","UK3CB_BAF_L85A2_RIS_AFG","UK3CB_BAF_L85A2_RIS_AFG_D","UK3CB_BAF_L85A2_RIS_AFG_G","UK3CB_BAF_L85A2_RIS_AFG_T","UK3CB_BAF_L85A2_RIS_AFG_W","UK3CB_BAF_L85A2_RIS_G_AFG","UK3CB_BAF_L85A2_RIS_G_AFG_D","UK3CB_BAF_L85A2_RIS_G_AFG_G","UK3CB_BAF_L85A2_RIS_G_AFG_T","UK3CB_BAF_L85A2_RIS_G_AFG_W","UK3CB_BAF_L85A2_RIS_D_AFG","UK3CB_BAF_L85A2_RIS_D_AFG_D","UK3CB_BAF_L85A2_RIS_D_AFG_G","UK3CB_BAF_L85A2_RIS_D_AFG_T","UK3CB_BAF_L85A2_RIS_D_AFG_W","UK3CB_BAF_L85A2_RIS_W_AFG","UK3CB_BAF_L85A2_RIS_W_AFG_D","UK3CB_BAF_L85A2_RIS_W_AFG_G","UK3CB_BAF_L85A2_RIS_W_AFG_T","UK3CB_BAF_L85A2_RIS_W_AFG_W","UK3CB_BAF_L85A2_RIS_Grippod","UK3CB_BAF_L85A2_RIS_Grippod_D","UK3CB_BAF_L85A2_RIS_Grippod_G","UK3CB_BAF_L85A2_RIS_Grippod_T","UK3CB_BAF_L85A2_RIS_Grippod_W","UK3CB_BAF_L85A2_RIS_G_Grippod","UK3CB_BAF_L85A2_RIS_G_Grippod_D","UK3CB_BAF_L85A2_RIS_G_Grippod_G","UK3CB_BAF_L85A2_RIS_G_Grippod_T","UK3CB_BAF_L85A2_RIS_G_Grippod_W","UK3CB_BAF_L85A2_RIS_D_Grippod","UK3CB_BAF_L85A2_RIS_D_Grippod_D","UK3CB_BAF_L85A2_RIS_D_Grippod_G","UK3CB_BAF_L85A2_RIS_D_Grippod_T","UK3CB_BAF_L85A2_RIS_D_Grippod_W","UK3CB_BAF_L85A2_RIS_W_Grippod","UK3CB_BAF_L85A2_RIS_W_Grippod_D","UK3CB_BAF_L85A2_RIS_W_Grippod_G","UK3CB_BAF_L85A2_RIS_W_Grippod_T","UK3CB_BAF_L85A2_RIS_W_Grippod_W","UK3CB_BAF_L22","UK3CB_BAF_L22A2","UK3CB_BAF_L86A2","UK3CB_BAF_L86A3","UK3CB_BAF_L98A2","UK3CB_BAF_L103A2","UK3CB_BAF_L85A2_RIS_Tan","UK3CB_BAF_L85A2_RIS_Green","UK3CB_BAF_L85A2_RIS_AFG_Green","UK3CB_BAF_L85A2_RIS_AFG_Tan","UK3CB_BAF_L85A2_RIS_Grippod_Tan","UK3CB_BAF_L85A3","UK3CB_BAF_L85A3_AFG","UK3CB_BAF_L85A3_AFG_D","UK3CB_BAF_L85A3_AFG_G","UK3CB_BAF_L85A3_AFG_T","UK3CB_BAF_L85A3_AFG_W","UK3CB_BAF_L85A3_Grippod","UK3CB_BAF_L85A3_Grippod_D","UK3CB_BAF_L85A3_Grippod_G","UK3CB_BAF_L85A3_Grippod_T","UK3CB_BAF_L85A3_Grippod_W","UK3CB_BAF_L85A3_UGL","UK3CB_BAF_L22_SUSAT","UK3CB_BAF_L22A2_SUSAT","UK3CB_BAF_L85A2_LDSR2D_BFA","UK3CB_BAF_L85A2_RIS_AFG_TA31F_IR","UK3CB_BAF_L85A2_RIS_LDSR2D_IR","UK3CB_BAF_L85A2_UGLLAD_LDSR2D_IR","UK3CB_BAF_L85A2_UGLHWS_LDSR2D_IR","UK3CB_BAF_L86A2_LDSR2D","UK3CB_BAF_L86A2_TA648","UK3CB_BAF_L119A1_SpecterLDS_FG","UK3CB_BAF_L119A1_SpecterLDS_UKUGL","UK3CB_BAF_L85A2_SUSAT_BFA","UK3CB_BAF_L85A2_SUSAT","UK3CB_BAF_L85A2_UGLLAD_SUSAT","UK3CB_BAF_L86A2_SUSAT"]],

- ["recoil_sdar",["SDAR_base_F","arifle_SDAR_F","rhs_weap_ak103_base","rhs_weap_ak103","rhs_weap_ak103_npz","rhs_weap_ak103_zenitco01","rhs_weap_ak103_zenitco01_grip1","rhs_weap_ak103_zenitco01_afg","rhs_weap_ak103_zenitco01_npz","rhs_weap_ak103_zenitco01_npz_grip1","rhs_weap_ak103_zenitco01_npz_afg","rhs_weap_ak103_zenitco01_b33","rhs_weap_ak103_zenitco01_b33_grip1","rhs_weap_ak103_zenitco01_b33_afg","rhs_weap_ak103_1","rhs_weap_ak103_1_npz","rhs_weap_ak103_2","rhs_weap_ak103_2_npz","rhs_weap_ak103_gp25","rhs_weap_ak103_gp25_npz","rhs_weap_ak104","rhs_weap_ak104_npz","rhs_weap_ak104_zenitco01","rhs_weap_ak104_zenitco01_grip1","rhs_weap_ak104_zenitco01_afg","rhs_weap_ak104_zenitco01_npz","rhs_weap_ak104_zenitco01_npz_grip1","rhs_weap_ak104_zenitco01_npz_afg","rhs_weap_ak104_zenitco01_b33","rhs_weap_ak104_zenitco01_b33_grip1","rhs_weap_ak104_zenitco01_b33_afg","rhs_weap_ak103_dtk","rhs_weap_ak103_npz_dtk","rhs_weap_ak103_1_dtk","rhs_weap_ak103_2_dtk","rhs_weap_ak104_pgs64","rhs_weap_ak104_npz_pgs64","rhs_weap_45th_ak103","rhs_weap_45th_ak103_zenit","rhs_weap_45th_ak103_zenit_sup","rhsgref_weap_ak103_pso1m21","rhsgref_weap_ak103_pso1m2"]],

- ["recoil_aks",["arifle_AKS_base_F","arifle_AKS_F","arifle_AK12U_base_F","arifle_AK12U_F","arifle_AK12U_lush_F","arifle_AK12U_arid_F","arifle_AK12U_lush_holo_snds_pointer_F","arifle_AK12U_lush_snds_pointer_F","arifle_AK12U_lush_holo_F","arifle_AK12U_lush_holo_pointer_F","arifle_AK12U_lush_holo_fl_F"]],

- ["rhs_recoil_pkm",["rhs_pkp_base","rhs_weap_pkp","rhs_weap_pkp_pkas","rhs_weap_pkp_1p63","rhs_weap_pkp_1p29","rhs_weap_pkp_1p78"]],

- ["rhs_recoil_g36_folded",["rhs_weap_g36c_Folded","rhs_weap_g36c_Folded_grip1","rhs_weap_g36c_Folded_grip2","rhs_weap_g36c_Folded_grip3","rhs_weap_g36kv_Folded","rhs_weap_g36kv_Folded_grip1","rhs_weap_g36kv_Folded_grip2","rhs_weap_g36kv_Folded_grip3","rhs_weap_g36kv_ag36_Folded"]],

- ["rhs_recoil_m4",["rhs_weap_m4_Base","rhs_weap_m4","rhs_weap_m4_pmag","rhs_weap_m4_mstock","rhs_weap_m4_carryhandle","rhs_weap_m4_carryhandle_pmag","rhs_weap_m4_carryhandle_mstock","rhs_weap_m4_grip","rhs_weap_m4_grip2","rhs_weap_m4_grip3","rhs_weap_m4_pmag_grip","rhs_weap_m4_pmag_grip2","rhs_weap_m4_pmag_grip3","rhs_weap_m4_mstock_grip","rhs_weap_m4_mstock_grip2","rhs_weap_m4_mstock_grip3","rhs_weap_m4_carryhandle_grip","rhs_weap_m4_carryhandle_grip2","rhs_weap_m4_carryhandle_grip3","rhs_weap_m4_carryhandle_pmag_grip","rhs_weap_m4_carryhandle_pmag_grip2","rhs_weap_m4_carryhandle_pmag_grip3","rhs_weap_m4_carryhandle_mstock_grip","rhs_weap_m4_carryhandle_mstock_grip2","rhs_weap_m4_carryhandle_mstock_grip3","rhs_weap_m4_m320","rhs_weap_m4_m203","rhs_weap_m4_m203S","rhs_weap_m4_carryhandle_m203","rhs_weap_m4_carryhandle_m203S","rhs_weap_m4_m203_grip","rhs_weap_m4_m203S_grip","rhs_weap_m4_carryhandle_m203_grip","rhs_weap_m4_carryhandle_m203S_grip","rhs_weap_m4a1","rhs_weap_m4a1_d","rhs_weap_m4a1_wd","rhs_weap_m4a1_mstock","rhs_weap_m4a1_d_mstock","rhs_weap_m4a1_wd_mstock","rhs_weap_m4a1_pmag","rhs_weap_m4a1_carryhandle","rhs_weap_m4a1_carryhandle_mstock","rhs_weap_m4a1_carryhandle_pmag","rhs_weap_m4a1_grip","rhs_weap_m4a1_grip2","rhs_weap_m4a1_grip3","rhs_weap_m4a1_d_grip","rhs_weap_m4a1_d_grip2","rhs_weap_m4a1_d_grip3","rhs_weap_m4a1_wd_grip","rhs_weap_m4a1_wd_grip2","rhs_weap_m4a1_wd_grip3","rhs_weap_m4a1_pmag_grip","rhs_weap_m4a1_pmag_grip2","rhs_weap_m4a1_pmag_grip3","rhs_weap_m4a1_mstock_grip","rhs_weap_m4a1_mstock_grip2","rhs_weap_m4a1_mstock_grip3","rhs_weap_m4a1_d_mstock_grip","rhs_weap_m4a1_d_mstock_grip2","rhs_weap_m4a1_d_mstock_grip3","rhs_weap_m4a1_wd_mstock_grip","rhs_weap_m4a1_wd_mstock_grip2","rhs_weap_m4a1_wd_mstock_grip3","rhs_weap_m4a1_carryhandle_grip","rhs_weap_m4a1_carryhandle_grip2","rhs_weap_m4a1_carryhandle_grip3","rhs_weap_m4a1_carryhandle_pmag_grip","rhs_weap_m4a1_carryhandle_pmag_grip2","rhs_weap_m4a1_carryhandle_pmag_grip3","rhs_weap_m4a1_carryhandle_mstock_grip","rhs_weap_m4a1_carryhandle_mstock_grip2","rhs_weap_m4a1_carryhandle_mstock_grip3","rhs_weap_m4a1_m203","rhs_weap_m4a1_m203s","rhs_weap_m4a1_m203s_wd","rhs_weap_m4a1_m203s_d","rhs_weap_m4a1_m203s_sa","rhs_weap_m4a1_carryhandle_m203","rhs_weap_m4a1_carryhandle_m203S","rhs_weap_m4a1_m320","rhs_weap_m4a1_m203_grip","rhs_weap_m4a1_m203S_grip","rhs_weap_m4a1_m203S_wd_grip","rhs_weap_m4a1_m203S_d_grip","rhs_weap_m4a1_m203S_sa_grip","rhs_weap_m4a1_carryhandle_m203_grip","rhs_weap_m4a1_carryhandle_m203S_grip","rhs_weap_m4a1_blockII","rhs_weap_m4a1_blockII_bk","rhs_weap_m4a1_blockII_wd","rhs_weap_m4a1_blockII_d","rhs_weap_m4a1_blockII_KAC","rhs_weap_m4a1_blockII_KAC_bk","rhs_weap_m4a1_blockII_KAC_wd","rhs_weap_m4a1_blockII_KAC_d","rhs_weap_m4a1_blockII_grip","rhs_weap_m4a1_blockII_grip2","rhs_weap_m4a1_blockII_grip_bk","rhs_weap_m4a1_blockII_grip2_bk","rhs_weap_m4a1_blockII_grip_wd","rhs_weap_m4a1_blockII_grip2_wd","rhs_weap_m4a1_blockII_grip_d","rhs_weap_m4a1_blockII_grip2_d","rhs_weap_m4a1_blockII_grip_KAC","rhs_weap_m4a1_blockII_grip2_KAC","rhs_weap_m4a1_blockII_grip_KAC_bk","rhs_weap_m4a1_blockII_grip2_KAC_bk","rhs_weap_m4a1_blockII_grip_KAC_wd","rhs_weap_m4a1_blockII_grip2_KAC_wd","rhs_weap_m4a1_blockII_grip_KAC_d","rhs_weap_m4a1_blockII_grip2_KAC_d","rhs_weap_m4a1_blockII_M203","rhs_weap_m4a1_blockII_M203_bk","rhs_weap_m4a1_blockII_M203_d","rhs_weap_m4a1_blockII_M203_wd","rhs_weap_m4a1_blockII_M203_grip","rhs_weap_m4a1_blockII_M203_bk_grip","rhs_weap_m4a1_blockII_M203_d_grip","rhs_weap_m4a1_blockII_M203_wd_grip","rhs_weap_m16a4","rhs_weap_m16a4_pmag","rhs_weap_m16a4_imod","rhs_weap_m16a4_carryhandle","rhs_weap_m16a4_carryhandle_pmag","rhs_weap_m16a4_grip","rhs_weap_m16a4_grip2","rhs_weap_m16a4_grip3","rhs_weap_m16a4_pmag_grip","rhs_weap_m16a4_pmag_grip2","rhs_weap_m16a4_pmag_grip3","rhs_weap_m16a4_imod_grip","rhs_weap_m16a4_imod_grip2","rhs_weap_m16a4_imod_grip3","rhs_weap_m16a4_carryhandle_grip","rhs_weap_m16a4_carryhandle_grip2","rhs_weap_m16a4_carryhandle_grip3","rhs_weap_m16a4_carryhandle_grip_pmag","rhs_weap_m16a4_carryhandle_grip2_pmag","rhs_weap_m16a4_carryhandle_grip3_pmag","rhs_weap_m16a4_carryhandle_M203","rhs_weap_m16a4_imod_M203","rhs_weap_m16a4_carryhandle_M203_grip","rhs_weap_m16a4_imod_M203_grip","rhsusf_weap_rifle_empty","rhs_weap_SCAR_L_Base","rhs_weap_m4_bipod","rhs_weap_m4a1_bipod","rhs_weap_m4a1_carryhandle_bipod","rhs_weap_m16a4_bipod","rhs_weap_m16a4_carryhandle_bipod","rhs_m4a1_m320","rhs_m4_m320","rhs_m4_compm4","rhs_m4_acog","rhs_m4_grip_compm4","rhs_m4_m203_compm4","rhs_m4a1_compm4","rhs_m4a1_grip_compm4","rhs_m4a1_acog","rhs_m4a1_acog2","rhs_m4a1_acog3","rhs_m4a1_grip_acog","rhs_m4a1_grip_acog2","rhs_m4a1_m203s_ACOG","rhs_m4a1_m320_acog","rhs_weap_m16a4_grip_acog","rhs_weap_m16a4_acog_usmc","rhs_weap_m16a4_m203_acog_usmc","rhs_weap_m16a4_grip_acog_usmc","rhs_weap_m16a4_grip_acog2_usmc","rhs_m4_acog_usmc","rhs_m4_acog2_usmc","rhs_m4_grip_acog_usmc","rhs_m4_grip_acog3_usmc","rhs_m4_m203_acog_usmc","rhs_m4_m203s_acog_usmc","rhs_m4a1_eotech","rhs_m4a1_acog_usmc","rhs_m4a1_acog2_usmc","rhs_m4a1_acog3_usmc","rhs_m4a1_acog2_usmc_sup","rhs_m4a1_grip_eotech","rhs_m4a1_grip_acog_usmc","rhs_m4a1_grip_acog2_usmc_sup","rhs_m4a1_grip_acog2_usmc_sup_tan","rhs_m4a1_grip_acog3_usmc_sup","rhs_m4a1_m203_acog3_usmc_sup","rhs_m4a1_grip_eotech_soc","rhs_weap_m4a1_blockII_KAC_SU230","rhs_weap_m4a1_blockII_M203_SU230","rhs_weap_m4a1_blockII_KAC_SU230_sup","uk3cb_weap_m16a4_eotech_552_anpeq15_bk","uk3cb_weap_m16a4_eotech_552_anpeq15_bk_sup","uk3cb_weap_m4a1_eot552","uk3cb_weap_m4a1_acog_anpeq15_sup","uk3cb_weap_m4a1_eot552_anpeq15_bk","uk3cb_weap_m4a1_eot552_anpeq15","uk3cb_weap_m4a1_m203s_eot552_anpeq15","uk3cb_weap_m4a1_eot552_anpeq15_sup","uk3cb_weap_m4a1_m203s_eot552_anpeq15_sup","uk3cb_weap_m4a1_d_eotech_552_d_anpeq15","uk3cb_weap_m4a1_m203s_d_eotech_552_d_anpeq15","uk3cb_weap_m4a1_d_eotech_552_d_anpeq15_sup","uk3cb_weap_m4a1_m203s_d_eotech_552_d_anpeq15_sup","uk3cb_weap_m4a1_w_eotech_552_wd_anpeq15_sup","uk3cb_weap_m4a1_m203s_wd_eotech_552_wd_anpeq15_sup","uk3cb_weap_m16a4_eotech_552_anpeq15_sup","uk3cb_weap_m16a4_m203s_eotech_552_anpeq15_sup","UK3CB_M16A2_Base","UK3CB_M16A1_Base","UK3CB_M16A1","UK3CB_M16A1_LSW","UK3CB_M16_Carbine","UK3CB_M16A2","UK3CB_M16A3","UK3CB_M16A2_UGL","UK3CB_M16A3_UGL","UK3CB_M16A3_eotech_552","UK3CB_M16A3_sup","UK3CB_M16A3_eotech_552_sup","UK3CB_M16A2_UGL_eotech_552","UK3CB_M16A2_UGL_sup","UK3CB_M16A2_sup","UK3CB_M16_Carbine_sup","UK3CB_M16_Carbine_eotech_552"]],

- ["rhs_recoil_mk18145",["rhs_weap_hk416d145","rhs_weap_hk416d145_grip","rhs_weap_hk416d145_grip2","rhs_weap_hk416d145_grip3","rhs_weap_hk416d145_m320","rhs_weap_hk416d145_d","rhs_weap_hk416d145_d_grip","rhs_weap_hk416d145_d_grip2","rhs_weap_hk416d145_d_grip3","rhs_weap_hk416d145_d_2","rhs_weap_hk416d145_d_2_grip","rhs_weap_hk416d145_d_2_grip2","rhs_weap_hk416d145_d_2_grip3","rhs_weap_hk416d145_wd","rhs_weap_hk416d145_wd_grip","rhs_weap_hk416d145_wd_grip2","rhs_weap_hk416d145_wd_grip3","rhs_weap_hk416d145_wd_2","rhs_weap_hk416d145_wd_2_grip","rhs_weap_hk416d145_wd_2_grip2","rhs_weap_hk416d145_wd_2_grip3","UK3CB_HK416_eotech_552","UK3CB_HK416_eotech_552_anpeq15_sup","UK3CB_HK416_M320_eotech_552"]],

- ["recoil_ak12",["arifle_AK12_base_F","arifle_AK12_F","arifle_AK12_GL_base_F","arifle_AK12_GL_F","arifle_AK12_lush_F","arifle_AK12_arid_F","arifle_AK12_GL_lush_F","arifle_AK12_GL_arid_F","arifle_AK12_lush_arco_snds_pointer_F","arifle_AK12_lush_snds_pointer_F","arifle_AK12_lush_arco_snds_pointer_bipod_F","arifle_AK12_GL_lush_arco_snds_pointer_F","arifle_AK12_GL_lush_holo_snds_pointer_F","arifle_AK12_lush_arco_pointer_F","arifle_AK12_GL_lush_arco_pointer_F","arifle_AK12_GL_lush_holo_pointer_F"]],

- ["recoil_MSBS65",["arifle_MSBS65_base_F","arifle_MSBS65_UBS_base_F","arifle_MSBS65_GL_base_F","arifle_MSBS65_Mark_base_F","arifle_MSBS65_base_black_F","arifle_MSBS65_Mark_base_black_F","arifle_MSBS65_GL_base_black_F","arifle_MSBS65_UBS_base_black_F","arifle_MSBS65_base_sand_F","arifle_MSBS65_Mark_base_sand_F","arifle_MSBS65_GL_base_sand_F","arifle_MSBS65_UBS_base_sand_F","arifle_MSBS65_base_camo_F","arifle_MSBS65_Mark_base_camo_F","arifle_MSBS65_GL_base_camo_F","arifle_MSBS65_UBS_base_camo_F","arifle_MSBS65_F","arifle_MSBS65_Mark_F","arifle_MSBS65_GL_F","arifle_MSBS65_UBS_F","arifle_MSBS65_black_F","arifle_MSBS65_Mark_black_F","arifle_MSBS65_GL_black_F","arifle_MSBS65_UBS_black_F","arifle_MSBS65_sand_F","arifle_MSBS65_Mark_sand_F","arifle_MSBS65_GL_sand_F","arifle_MSBS65_UBS_sand_F","arifle_MSBS65_camo_F","arifle_MSBS65_Mark_camo_F","arifle_MSBS65_GL_camo_F","arifle_MSBS65_UBS_camo_F","arifle_MSBS65_ico_F","arifle_MSBS65_aco_F","arifle_MSBS65_GL_ico_F","arifle_MSBS65_UBS_ico_F","arifle_MSBS65_black_ico_F","arifle_MSBS65_GL_black_ico_F","arifle_MSBS65_UBS_black_ico_F","arifle_MSBS65_black_aco_F","arifle_MSBS65_black_aco_FL_F","arifle_MSBS65_ico_pointer_f","arifle_MSBS65_GL_ico_pointer_f","arifle_MSBS65_UBS_ico_pointer_f","arifle_MSBS65_UBS_snds_ico_pointer_F","arifle_MSBS65_black_ico_pointer_f","arifle_MSBS65_GL_black_ico_pointer_f","arifle_MSBS65_UBS_black_ico_pointer_f","arifle_MSBS65_Mark_SOS_LP_BI_F"]],

- ["rhs_recoil_akms",["rhs_weap_akms","rhs_weap_45th_akms","uk3cb_weap_akms_sup"]],

- ["recoil_ebr",["EBR_base_F","srifle_EBR_F","srifle_EBR_ACO_F","srifle_EBR_MRCO_pointer_F","srifle_EBR_ARCO_pointer_F","srifle_EBR_SOS_F","srifle_EBR_ARCO_pointer_snds_F","srifle_EBR_DMS_F","srifle_EBR_Hamr_pointer_F","srifle_EBR_DMS_pointer_snds_F","srifle_EBR_MRCO_LP_BI_F","B_Patrol_Soldier_Marksman_weapon_F","rhs_weap_sr25","rhs_weap_sr25_ec","rhs_weap_sr25_wd","rhs_weap_sr25_ec_wd","rhs_weap_sr25_d","rhs_weap_sr25_ec_d","rhs_weap_m110","rhs_weap_sr25_usmc","rhs_weap_sr25_sup_usmc","rhs_weap_sr25_sup_marsoc","uk3cb_weap_sr25_usmc_acog_bip","uk3cb_weap_sr25_usmc_acog_bip_sup","rhs_weap_savz61_folded","UK3CB_Micro_Uzi","UK3CB_BAF_L129A1","UK3CB_BAF_L129A1_FGrip","UK3CB_BAF_L129A1_AFG","UK3CB_BAF_L129A1_AFG_D","UK3CB_BAF_L129A1_AFG_G","UK3CB_BAF_L129A1_AFG_T","UK3CB_BAF_L129A1_AFG_W","UK3CB_BAF_L129A1_Grippod","UK3CB_BAF_L129A1_Grippod_D","UK3CB_BAF_L129A1_Grippod_G","UK3CB_BAF_L129A1_Grippod_T","UK3CB_BAF_L129A1_Grippod_W","UK3CB_BAF_L129A1_Bipod","UK3CB_BAF_L129A1_FGrip_Bipod","UK3CB_BAF_L128A1","UK3CB_AR10","UK3CB_AR10_OD","UK3CB_AR10_Porto","UK3CB_AR10_Porto_OD","UK3CB_AR10_Porto_ALU","UK3CB_AR10_Porto_Sup","UK3CB_AR10_Porto_Sup_OD","UK3CB_AR10_Porto_Sup_ALU","UK3CB_AR10_Porto_Carbine","UK3CB_AR10_Porto_Carbine_OD","UK3CB_AR10_Porto_Carbine_ALU","UK3CB_AR10_Porto_Carbine_Sup","UK3CB_AR10_Porto_Carbine_Sup_OD","UK3CB_AR10_Porto_Carbine_Sup_ALU","UK3CB_AR10_Porto_Marksman","UK3CB_AR10_Porto_Marksman_OD","UK3CB_AR10_Porto_Marksman_ALU","UK3CB_AR10_Porto_Marksman_Sup","UK3CB_AR10_Porto_Marksman_Sup_OD","UK3CB_AR10_Porto_Marksman_Sup_ALU","UK3CB_FNFAL_Base","UK3CB_FNFAL_PARA","UK3CB_FNFAL_PARA_RAILS","UK3CB_FNFAL_FULL","UK3CB_FNFAL_FULL_RAILS","UK3CB_FNFAL_FOREGRIP","UK3CB_C1A1","UK3CB_FNLAR","UK3CB_FNFAL_STG58","UK3CB_FNFAL_OSW","UK3CB_FNFAL_OSW_GL","UK3CB_FNFAL_FULL_SUIT","UK3CB_FNFAL_FULL_SUIT_SUP","UK3CB_FNFAL_STG58_erco","UK3CB_FNFAL_OSW_erco","UK3CB_FNFAL_OSW_GL_erco","UK3CB_FNLAR_SUIT","UK3CB_M14_base","UK3CB_STGW57_base","UK3CB_BAF_L129A1_TA648308","UK3CB_BAF_L129A1_TA648308_IR","UK3CB_BAF_L129A1_RKSL_PMII_312_sunshade_IR","UK3CB_BAF_L129A1_RKSL_PMII_312_sunshade","UK3CB_BAF_L129A1_SAND_PMII_312_sunshade_IR","UK3CB_BAF_L129A1_SAND_PMII_312_sunshade"]],

- ["recoil_mk200",["LMG_Mk200_F","LMG_Mk200_MRCO_F","LMG_Mk200_pointer_F","FakeWeapon_moduleTracers_F","LMG_Mk200_LP_BI_F","LMG_Mk200_BI_F","B_Patrol_Soldier_MachineGunner_weapon_F","LMG_Mk200_black_F","LMG_Mk200_black_ACO_pointer_F","LMG_Mk200_black_LP_BI_F","LMG_Mk200_black_BI_F","rhs_weap_M249_base"]],

- ["recoil_car",["arifle_CTAR_base_F","arifle_CTAR_blk_F","arifle_CTAR_hex_F","arifle_CTAR_ghex_F","arifle_CTAR_GL_base_F","arifle_CTAR_GL_blk_F","arifle_CTAR_GL_hex_F","arifle_CTAR_GL_ghex_F","arifle_CTAR_blk_ACO_Pointer_F","arifle_CTAR_blk_Pointer_F","arifle_CTAR_blk_ACO_F","arifle_CTAR_GL_blk_ACO_F","arifle_CTAR_GL_blk_ARCO_Pointer_F","arifle_CTAR_blk_ARCO_Pointer_F","arifle_CTAR_blk_ACO_Pointer_Snds_F","arifle_CTAR_GL_blk_ACO_Pointer_Snds_F","arifle_CTAR_blk_ARCO_Pointer_Snds_F","arifle_CTAR_blk_ARCO_F","arifle_CTAR_blk_flash_F","arifle_CTAR_blk_aco_flash_F","arifle_CTAR_blk_arco_flash_F","arifle_CTAR_GL_blk_aco_flash_F","arifle_CTAR_GL_blk_arco_flash_F","UK3CB_QBZ95_BASE","UK3CB_QBZ95","UK3CB_QBZ95_UGL_BASE","UK3CB_QBZ95_UGL","UK3CB_QBZ95_hamr","UK3CB_QBZ95_UGL_hamr","UK3CB_QBZ95_hamr_las_sup","UK3CB_UK3CB_QBZ95_UGL_hamr_las_sup"]],

- ["recoil_rpk12",["arifle_RPK12_base_F","arifle_RPK12_F","arifle_RPK12_lush_F","arifle_RPK12_arid_F","arifle_RPK12_lush_arco_snds_pointer_F","arifle_RPK12_lush_holo_snds_pointer_F","arifle_RPK12_lush_arco_pointer_F"]],

- ["rhs_weap_scarh_recoil",["rhs_weap_SCAR_H_Base","rhs_weap_SCAR_H_CQC_Base","rhs_weap_SCAR_H_STD_Base","rhs_weap_SCAR_H_LB_Base","rhs_weap_mk17_CQC","rhs_weap_mk17_CQC_grip","rhs_weap_mk17_CQC_grip2","rhs_weap_mk17_CQC_grip3","rhs_weap_mk17_STD","rhs_weap_mk17_STD_grip","rhs_weap_mk17_STD_grip2","rhs_weap_mk17_STD_grip3","rhs_weap_mk17_LB","rhs_weap_mk17_LB_grip","rhs_weap_mk17_LB_grip2","rhs_weap_mk17_LB_grip3","rhs_weap_SCARH_USA_CQC","rhs_weap_SCARH_USA_CQC_grip","rhs_weap_SCARH_USA_CQC_grip2","rhs_weap_SCARH_USA_CQC_grip3","rhs_weap_SCARH_USA_STD","rhs_weap_SCARH_USA_STD_grip","rhs_weap_SCARH_USA_STD_grip2","rhs_weap_SCARH_USA_STD_grip3","rhs_weap_SCARH_USA_LB","rhs_weap_SCARH_USA_LB_grip","rhs_weap_SCARH_USA_LB_grip2","rhs_weap_SCARH_USA_LB_grip3","rhs_weap_mk17_CQC_SU230A_marsoc","rhs_weap_mk17_CQC_SU230A_sup_marsoc","rhs_weap_mk17_CQC_G33_sup_marsoc","rhs_weap_mk17_LB_DMR_marsoc","uk3cb_weap_mk17_std_eotech_552_d_anpeq15_sup","uk3cb_weap_mk17_cqc_eotech_552_d_anpeq15_sup","uk3cb_weap_mk17_lb_coyote_d_anpeq15_sup","rhs_weap_SCARH_CQC","rhs_weap_SCARH_CQC_grip","rhs_weap_SCARH_CQC_grip2","rhs_weap_SCARH_CQC_grip3","rhs_weap_SCARH_STD","rhs_weap_SCARH_STD_grip","rhs_weap_SCARH_STD_grip2","rhs_weap_SCARH_STD_grip3","rhs_weap_SCARH_LB","rhs_weap_SCARH_LB_grip","rhs_weap_SCARH_LB_grip2","rhs_weap_SCARH_LB_grip3","rhs_weap_SCARH_FDE_CQC","rhs_weap_SCARH_FDE_CQC_grip","rhs_weap_SCARH_FDE_CQC_grip2","rhs_weap_SCARH_FDE_CQC_grip3","rhs_weap_SCARH_FDE_STD","rhs_weap_SCARH_FDE_STD_grip","rhs_weap_SCARH_FDE_STD_grip2","rhs_weap_SCARH_FDE_STD_grip3","rhs_weap_SCARH_FDE_LB","rhs_weap_SCARH_FDE_LB_grip","rhs_weap_SCARH_FDE_LB_grip2","rhs_weap_SCARH_FDE_LB_grip3","rhs_weap_SCARH_STD_grip2_su230a","rhs_weap_SCARH_LB_bipod_m8541"]],

- ["uk3cb_recoil_stgw57k",["uk3cb_stgw57_RIS_commando"]],

- ["recoil_mxc",["arifle_MXC_F","arifle_MXC_Holo_F","arifle_MXC_Holo_pointer_F","arifle_MXC_ACO_F","arifle_MXC_Holo_pointer_snds_F","arifle_MXC_SOS_point_snds_F","arifle_MXC_ACO_pointer_snds_F","arifle_MXC_ACO_pointer_F","arifle_MXC_Black_F","arifle_MXC_khk_F","arifle_MXC_khk_Holo_Pointer_F","arifle_MXC_khk_ACO_F","arifle_MXC_khk_ACO_Pointer_Snds_F","B_Patrol_Soldier_Operator_weapon_F","arifle_MXC_Black_Holo_Pointer_F","arifle_MXC_Black_Holo_FL_F","arifle_MXC_Black_ACO_F","arifle_MXC_Black_ACO_Pointer_Snds_F","rhs_weap_m21a_fold","rhs_weap_m21s_fold","rhs_weap_savz58v","rhs_weap_savz58v_rail","rhs_weap_savz58v_ris","rhs_weap_savz58v_ris_grip1","rhs_weap_savz58v_ris_grip2","rhs_weap_savz58v_ris_grip3","rhs_weap_savz58v_black","rhs_weap_savz58v_rail_black","rhs_weap_m21a_pbg40_fold","rhsgref_weap_savz58v_black_rxo1","rhsgref_weap_savz58v_saboteur"]],

- ["recoil_trg20",["Tavor_base_F","arifle_TRG20_F","arifle_TRG20_Holo_F","arifle_TRG20_ACO_pointer_F","arifle_TRG20_ACO_Flash_F","arifle_TRG20_ACO_F","UK3CB_ACR_Crew","UK3CB_ACR_Carbine","UK3CB_ACR_Rifle","UK3CB_ACR_Rifle_Long","UK3CB_ACR_Carbine_UGL","uk3cb_weap_acr_crew_eot552","uk3cb_weap_acr_carbine_eot552","uk3cb_weap_acr_carbine_ugl_eot552","uk3cb_weap_acr_rifle_eot552","uk3cb_weap_acr_rifle_long_eot552","uk3cb_weap_acr_rifle_long_acog","uk3cb_weap_acr_crew_eot552_anpeq15_sup","uk3cb_weap_acr_carbine_eot552_anpeq15_sup","uk3cb_weap_acr_rifle_eot552_anpeq15_sup","uk3cb_weap_acr_rifle_long_eot552_anpeq15_sup","uk3cb_weap_acr_rifle_long_acog_anpeq15_sup","uk3cb_weap_acr_carbine_ugl_eot552_anpeq15_sup","UK3CB_FAMAS_F1_base","UK3CB_FAMAS_F1_GLM203_base","UK3CB_FAMAS_F1","UK3CB_FAMAS_F1_GLM203","UK3CB_FAMAS_F1_aco_grn","UK3CB_FAMAS_F1_GLM203_aco_grn","UK3CB_G36_base","UK3CB_G36A1","UK3CB_AG36A1","UK3CB_G36_LSW","UK3CB_G36A1_K","UK3CB_G36A1_C","UK3CB_G36E1","UK3CB_AG36E1","UK3CB_G36E1_K","UK3CB_G36E1_C","UK3CB_G36V","UK3CB_G36V_K","UK3CB_G36V_C","UK3CB_AG36V","UK3CB_G36A1_KSK_K","UK3CB_AG36_KSK","UK3CB_G36_TAC","UK3CB_G36_TAC_K","UK3CB_G36_TAC_C","UK3CB_AG36V_eotech_552","UK3CB_G36V_K_eotech_552","UK3CB_G36V_eotech_552","UK3CB_G36V_C_eotech_552","UK3CB_G36_TAC_eotech_552","UK3CB_G36_TAC_eotech_552_anpeq15_sup","UK3CB_HK33KA2","UK3CB_HK33KA1","UK3CB_HK33KA3","UK3CB_HK33KA2_RIS","UK3CB_HK33KA2_RIS_GL","UK3CB_HK33KA1_eot552","UK3CB_HK33KA2_RIS_eot552_anpeq15_bk","UK3CB_HK33KA3_sup","UK3CB_HK33KA2_RIS_aco_grn_sup","UK3CB_HK33KA2_RIS_GL_aco_grn_sup"]],

- ["recoil_car_dmr",["DMR_07_base_F","srifle_DMR_07_blk_F","srifle_DMR_07_hex_F","srifle_DMR_07_ghex_F","srifle_DMR_07_blk_DMS_F","srifle_DMR_07_blk_DMS_Snds_F","srifle_DMR_07_blk_F_arco_flash_F","UK3CB_QBU88_BASE","UK3CB_QBU88","UK3CB_QBU88_mrco","UK3CB_QBU88_mrco_sup"]],

- ["rhs_recoil_ak74m",["rhs_weap_ak74m_Base_F","rhs_weap_ak74m","rhs_weap_ak74m_camo","rhs_weap_ak74m_npz","rhs_weap_ak74m_desert_npz","rhs_weap_ak74m_camo_npz","rhs_weap_ak74m_2mag","rhs_weap_ak74m_2mag_npz","rhs_weap_ak74m_2mag_camo_npz","rhs_weap_ak74m_2mag_camo","rhs_weap_ak74m_desert","rhs_weap_ak74m_plummag","rhs_weap_ak74m_plummag_npz","rhs_weap_ak74m_gp25","rhs_weap_ak74m_gp25_npz","rhs_weap_ak74m_fullplum","rhs_weap_ak74m_fullplum_npz","rhs_weap_ak74m_fullplum_gp25","rhs_weap_ak74m_fullplum_gp25_npz","rhs_weap_ak74m_zenitco01","rhs_weap_ak74m_zenitco01_grip1","rhs_weap_ak74m_zenitco01_afg","rhs_weap_ak74m_zenitco01_npz","rhs_weap_ak74m_zenitco01_npz_grip1","rhs_weap_ak74m_zenitco01_npz_afg","rhs_weap_ak74m_zenitco01_b33","rhs_weap_ak74m_zenitco01_b33_grip1","rhs_weap_ak74m_zenitco01_b33_afg","rhs_weap_ak74mr","rhs_weap_ak74mr_grip1","rhs_weap_ak74mr_afg","rhs_weap_ak74mr_gp25","rhs_weap_ak105","rhs_weap_ak105_zenitco01","rhs_weap_ak105_zenitco01_grip1","rhs_weap_ak105_zenitco01_afg","rhs_weap_ak105_zenitco01_npz","rhs_weap_ak105_zenitco01_npz_grip1","rhs_weap_ak105_zenitco01_npz_afg","rhs_weap_ak105_npz","rhs_weap_ak105_zenitco01_b33","rhs_weap_ak105_zenitco01_b33_grip1","rhs_weap_ak105_zenitco01_b33_afg","rhs_weap_ak74","rhs_weap_ak74_gp25","rhs_weap_ak74n","rhs_weap_ak74n_gp25","rhs_weap_ak74n_npz","rhs_weap_ak74n_gp25_npz","rhs_weap_ak74_2","rhs_weap_ak74n_2","rhs_weap_ak74n_2_npz","rhs_weap_ak74n_2_gp25","rhs_weap_ak74n_2_gp25_npz","rhs_weap_ak74_3","rhs_weap_aks74","rhs_weap_aks74_2","rhs_weap_aks74_gp25","rhs_weap_aks74n","rhs_weap_aks74n_npz","rhs_weap_aks74n_2","rhs_weap_aks74n_2_npz","rhs_weap_aks74n_folded","rhs_weap_aks74n_2_folded","rhs_weap_aks74n_gp25","rhs_weap_aks74n_gp25_npz","rhs_weap_rifle_empty","rhs_weap_rifle_empty_front","rhs_weap_rifle_empty_m249","rhs_weap_ak74m_dtk","rhs_weap_ak74m_pkas","rhs_weap_ak74m_1p63","rhs_weap_ak74m_pso1m2","rhs_weap_ak74m_1p29","rhs_weap_ak74m_npz_dtk","rhs_weap_ak74m_camo_dtk","rhs_weap_ak74m_2mag_dtk","rhs_weap_ak74m_2mag_npz_dtk","rhs_weap_ak74m_2mag_camo_dtk","rhs_weap_ak74m_camo_pkas","rhs_weap_ak74m_camo_1p63","rhs_weap_ak74m_camo_pso1m2","rhs_weap_ak74m_camo_1p29","rhs_weap_ak74m_desert_dtk","rhs_weap_ak74m_fullplum_dtk","rhs_weap_ak74m_fullplum_npz_dtk","rhs_weap_ak74m_fullplum_gp25_dtk","rhs_weap_ak74m_fullplum_gp25_npz_dtk","rhs_weap_ak74m_plummag_dtk","rhs_weap_ak74m_gp25_dtk","rhs_weap_ak74m_gp25_npz_dtk","rhs_weap_ak74m_gp25_pkas","rhs_weap_ak74m_gp25_1p63","rhs_weap_ak74m_gp25_pso1m2","rhs_weap_ak74m_gp25_1p29","rhs_weap_ak74mr_rakursPM","rhs_weap_ak74mr_gp25_rakursPM","rhs_weap_ak74mr_rakursPM_sup","rhs_weap_ak74mr_1p87","rhs_weap_ak74mr_gp25_1p87","rhs_weap_ak74mr_1p87_sup","rhs_weap_ak105_pgs64","rhs_weap_ak105_npz_pgs64","rhs_weap_45th_ak74m","rhs_weap_45th_ak74m_camo","rhs_weap_45th_ak74m_gp25","rhs_weap_45th_ak74_ekp1","rhs_weap_45th_ak74m_pkas","rhs_weap_45th_ak74m_sup","uk3cb_weap_ak74m_npz_acog","uk3cb_weap_ak74n_npz_ekp8","uk3cb_weap_aks74n_npz_ekp8","uk3cb_weap_aks74n_npz_ekp8_sup","uk3cb_weap_aks74n_gp25_npz_ekp8","uk3cb_weap_aks74n_gp25_npz_ekp8_sup","uk3cb_weap_ak74mr_ekp8","uk3cb_weap_ak74mr_ekp8_sup","uk3cb_weap_ak74mr_gp25_ekp8","uk3cb_weap_ak74mr_gp25_ekp8_sup","uk3cb_weap_ak74n_2_npz_1p87","uk3cb_weap_ak74n_2_gp25_npz_1p87","uk3cb_weap_ak74n_2_1p29","uk3cb_weap_ak74n_2_gp25_1p29","uk3cb_weap_ak74n_2_1p29_sup","uk3cb_weap_ak74n_npz_aco_grn","uk3cb_weap_ak74n_gp25_npz_aco_grn","uk3cb_weap_aks74n_npz_aco_grn","uk3cb_weap_aks74n_gp25_npz_aco_grn","uk3cb_weap_ak74n_npz_aco_grn_sup","uk3cb_weap_aks74n_npz_aco_grn_sup","uk3cb_weap_aks74n_gp25_npz_aco_grn_sup"]],

- ["rhs_recoil_rpk74",["rhs_weap_rpk74_base","rhs_weap_rpk74","rhs_weap_rpk74n","rhs_weap_rpk74n_npz","rhs_weap_rpk74m","rhs_weap_rpk74m_npz","rhs_weap_rpk74m_uuk","rhs_weap_rpk74m_sup"]],

- ["recoil_trg21",["arifle_TRG21_F","arifle_TRG21_GL_F","arifle_TRG21_ACO_pointer_F","arifle_TRG21_ARCO_pointer_F","arifle_TRG21_MRCO_F","arifle_TRG21_GL_MRCO_F","arifle_TRG21_GL_ACO_pointer_F"]],

- ["recoil_ARX_primary",["arifle_ARX_base_F","arifle_ARX_blk_F","arifle_ARX_ghex_F","arifle_ARX_hex_F","arifle_ARX_hex_ARCO_Pointer_Snds_F","arifle_ARX_ghex_ARCO_Pointer_Snds_F","arifle_ARX_hex_ACO_Pointer_Snds_F","arifle_ARX_ghex_ACO_Pointer_Snds_F","arifle_ARX_hex_DMS_Pointer_Snds_Bipod_F","arifle_ARX_ghex_DMS_Pointer_Snds_Bipod_F","arifle_ARX_Viper_F","arifle_ARX_Viper_hex_F"]],

- ["rhs_recoil_ak74m_folded",["rhs_weap_ak74m_folded","rhs_weap_ak74m_camo_folded","rhs_weap_ak74m_desert_folded","rhs_weap_ak74m_plummag_folded","rhs_weap_ak74m_gp25_folded","rhs_weap_ak74m_fullplum_folded","rhs_weap_ak74m_fullplum_gp25_folded","rhs_weap_ak74mr_folded","rhs_weap_ak74mr_folded_grip1","rhs_weap_ak74mr_folded_afg","rhs_weap_ak105_folded","rhs_weap_ak103_folded","rhs_weap_ak103_zenitco01_folded","rhs_weap_ak103_zenitco01_folded_grip1","rhs_weap_ak103_zenitco01_folded_afg","rhs_weap_ak103_1_folded","rhs_weap_ak104_folded","rhs_weap_aks74_folded","rhs_weap_aks74_2_folded","rhs_weap_ak74m_folded_dtk","rhs_weap_ak74m_fullplum_folded_dtk","rhs_weap_ak74m_fullplum_gp25_folded_dtk"]],

- ["rhs_recoil_akms_folded",["rhs_weap_akms_folded","uk3cb_weap_akms_folded_sup"]],

- ["rhs_recoil_m240",["rhs_weap_m249_pip_S_para_folded","rhs_weap_m249_pip_S_para_folded_vfg1","rhs_weap_m249_pip_S_para_folded_vfg2","rhs_weap_m249_pip_S_para_folded_vfg3","rhs_weap_m249_pip_L_para_folded","rhs_weap_m249_pip_L_para_folded_vfg1","rhs_weap_m249_pip_L_para_folded_vfg2","rhs_weap_m249_pip_L_para_folded_vfg3","rhs_weap_m240_base","rhs_weap_m240B","rhs_weap_m240G","rhs_weap_m240B_CAP","rhs_weap_m240b_elcan","rhs_weap_m240b_usmc","rhs_weap_fnmag_base","rhs_weap_fnmag","rhs_weap_minimi_para_railed_folded","rhs_weap_minimi_para_railed_folded_vfg1","rhs_weap_minimi_para_railed_folded_vfg2","rhs_weap_minimi_para_railed_folded_vfg3"]],

- ["rhs_recoil_m14",["rhs_weap_m14_base","rhs_weap_m14_rail_base","rhs_weap_m14_ris_base","rhs_weap_m14_socom_base","rhs_weap_m14_socom_rail_base","rhs_weap_m14","rhs_weap_m14_wd","rhs_weap_m14_d","rhs_weap_m14_fiberglass","rhs_weap_m14_rail","rhs_weap_m14_rail_wd","rhs_weap_m14_rail_d","rhs_weap_m14_rail_fiberglass","rhs_weap_m14_ris","rhs_weap_m14_ris_wd","rhs_weap_m14_ris_d","rhs_weap_m14_ris_fiberglass","rhs_weap_m14_socom","rhs_weap_m14_socom_rail","rhs_weap_m14ebrri_base","rhs_weap_m14ebrri","rhs_weap_m14ebrri_leu","rhs_weap_m14_bipod_M8541","rhs_weap_m39"]],

- ["recoil_dmr_01",["DMR_01_base_F","srifle_DMR_01_F","srifle_DMR_01_ACO_F","srifle_DMR_01_MRCO_F","srifle_DMR_01_SOS_F","srifle_DMR_01_DMS_F","srifle_DMR_01_DMS_snds_F","srifle_DMR_01_ARCO_F","srifle_DMR_01_DMS_BI_F","srifle_DMR_01_DMS_snds_BI_F","rhs_weap_m38_rail","UK3CB_M38_Railed_SOS","rhs_weap_kar98k_Base_F","rhs_weap_kar98k","rhs_weap_m38_Base_F","rhs_weap_m38","rhs_weap_M1garand_Base_F","rhs_weap_m1garand_sa43"]],

- ["recoil_akm",["arifle_AKM_base_F","arifle_AKM_F","arifle_AKM_FL_F","rhs_weap_m76","uk3cb_weap_m76_1p291","uk3cb_weap_m76_pso1m21_sup","uk3cb_weap_m76_pso1m21","uk3cb_sks_01","uk3cb_sks_01_sling","uk3cb_sks_02","rhs_weap_m92","rhs_weap_m76_pso"]],

- ["recoil_spar",["arifle_SPAR_01_base_F","arifle_SPAR_01_blk_F","arifle_SPAR_01_khk_F","arifle_SPAR_01_snd_F","arifle_SPAR_01_GL_base_F","arifle_SPAR_01_GL_blk_F","arifle_SPAR_01_GL_khk_F","arifle_SPAR_01_GL_snd_F","arifle_SPAR_01_blk_ERCO_Pointer_F","arifle_SPAR_01_blk_ACO_Pointer_F","arifle_SPAR_01_GL_blk_ACO_Pointer_F","arifle_SPAR_01_GL_blk_ERCO_Pointer_F"]],

- ["recoil_spar_dmr",["arifle_SPAR_03_base_F","arifle_SPAR_03_blk_F","arifle_SPAR_03_khk_F","arifle_SPAR_03_snd_F","arifle_SPAR_03_blk_MOS_Pointer_Bipod_F"]],

- ["rhs_recoil_fnfal",["rhs_weap_fnfal_base","rhs_weap_fnfal50_61_base","rhs_weap_fnfal50_62_base","rhs_weap_fnfal50_63_base","rhs_weap_fnfal50_64_base","rhs_weap_l1a1_base","rhs_weap_l1a1_wood_base","rhs_weap_l1a1","rhs_weap_l1a1_wood","rhs_weap_l1a1_suit","rhs_weap_l1a1_pvs2"]],

- ["recoil_sw",["arifle_MX_SW_F","arifle_MX_SW_pointer_F","arifle_MX_SW_Hamr_pointer_F","arifle_MX_SW_Black_F","arifle_MX_SW_Black_Hamr_pointer_F","arifle_MX_SW_khk_F","arifle_MX_SW_khk_Pointer_F","B_Patrol_Soldier_Autorifleman_weapon_F","arifle_MX_SW_Black_Pointer_F"]],

- ["recoil_car_lsw",["arifle_CTARS_base_F","arifle_CTARS_blk_F","arifle_CTARS_hex_F","arifle_CTARS_ghex_F","arifle_CTARS_blk_Pointer_F","arifle_CTARS_blk_flash_F","UK3CB_QBZ95_LSW_BASE","UK3CB_QBZ95_LSW","UK3CB_QBZ95_LSW_hamr","UK3CB_QBZ95_LSW_hamr_las_sup"]],

- ["UK3CB_BAF_Recoil_L7",["UK3CB_BAF_L7A2","UK3CB_BAF_L7A2_FIST"]],

- ["recoil_dmr_03",["DMR_03_base_F","srifle_DMR_03_F","srifle_DMR_03_khaki_F","srifle_DMR_03_tan_F","srifle_DMR_03_multicam_F","srifle_DMR_03_woodland_F","srifle_DMR_03_ACO_F","srifle_DMR_03_MRCO_F","srifle_DMR_03_SOS_F","srifle_DMR_03_DMS_F","srifle_DMR_03_tan_AMS_LP_F","srifle_DMR_03_DMS_snds_F","srifle_DMR_03_ARCO_F","srifle_DMR_03_AMS_F","UK3CB_G3_Base","UK3CB_G3SG1","UK3CB_G3SG1_RIS","UK3CB_G3A3","UK3CB_G3A3_RIS","UK3CB_G3A3V","UK3CB_G3A3V_RIS","UK3CB_G3KA4","UK3CB_G3KA4_GL","UK3CB_PSG1A1","UK3CB_PSG1A1_RIS","UK3CB_G3KA4_aco_grn","UK3CB_G3A3_RIS_aco_grn","UK3CB_G3A3V_RIS_aco_grn","UK3CB_G3KA4_GL_aco_grn","UK3CB_G3SG1_RIS_erco","UK3CB_G3SG1_RIS_aco_grn","UK3CB_G3A3V_RIS_aco_grn_sup","UK3CB_PSG1A1_RIS_SOS","UK3CB_PSG1A1_RIS_erco_sup","UK3CB_PSG1A1_RIS_SOS_sup","UK3CB_G3SG1_RIS_aco_grn_sup","UK3CB_G3KA4_1p87","UK3CB_G3A3_RIS_1p87","UK3CB_G3KA4_GL_1p87","UK3CB_G3KA4_erco","UK3CB_G3A3_RIS_erco","UK3CB_G3A3V_RIS_erco","UK3CB_G3KA4_GL_erco","UK3CB_G3SG1_RIS_mrco","UK3CB_G3SG1_RIS_mrco_sup","UK3CB_PSG1A1_RIS_mrco_sup"]],

- ["recoil_mmg_01",["MMG_01_base_F","MMG_02_base_F","MMG_01_hex_F","MMG_01_tan_F","MMG_01_hex_ARCO_LP_F","MMG_02_camo_F","MMG_02_black_F","MMG_02_sand_F","MMG_02_sand_RCO_LP_F","MMG_02_black_RCO_BI_F","rhs_weap_ak103_2_folded","rhs_weap_aks74u_folded","rhs_weap_aks74un_folded","rhs_weap_m70ab2_fold","rhs_weap_savz58v_fold","rhs_weap_savz58v_rail_fold","rhs_weap_savz58v_ris_fold","rhs_weap_savz58v_ris_fold_grip1","rhs_weap_savz58v_ris_fold_grip2","rhs_weap_savz58v_ris_fold_grip3","rhs_weap_savz58v_fold_black","rhs_weap_savz58v_rail_fold_black"]],

- ["rhs_recoil_rpk74_folded",["rhs_weap_rpk74m_folded"]],

- ["recoil_mk20c",["arifle_Mk20C_F","arifle_Mk20C_plain_F","arifle_Mk20_GL_F","arifle_Mk20_GL_plain_F","arifle_Mk20C_ACO_F","arifle_Mk20C_ACO_pointer_F","arifle_Mk20_GL_MRCO_pointer_F","arifle_Mk20_GL_ACO_F"]],

- ["recoil_mxm",["arifle_MXM_F","arifle_MXM_Hamr_pointer_F","arifle_MXM_SOS_pointer_F","arifle_MXM_RCO_pointer_snds_F","arifle_MXM_DMS_F","arifle_MXM_Black_F","arifle_MXM_DMS_LP_BI_snds_F","arifle_MXM_Hamr_LP_BI_F","arifle_MXM_khk_F","arifle_MXM_khk_MOS_Pointer_Bipod_F","arifle_MXM_khk_MOS_Pointer_Bipod_Snds_F","arifle_MXM_Black_MOS_Pointer_Bipod_F","arifle_MXM_Black_MOS_Pointer_Bipod_Snds_F"]],

- ["recoil_dmr_02",["DMR_02_base_F","srifle_DMR_02_F","srifle_DMR_02_camo_F","srifle_DMR_02_sniper_F","srifle_DMR_02_ACO_F","srifle_DMR_02_MRCO_F","srifle_DMR_02_SOS_F","srifle_DMR_02_DMS_F","srifle_DMR_02_sniper_AMS_LP_S_F","srifle_DMR_02_camo_AMS_LP_F","srifle_DMR_02_ARCO_F"]],

- ["recoil_lim",["LMG_03_base_F","LMG_03_F","LMG_03_Vehicle_F","UK3CB_M249_veh"]],

- ["rhs_recoil_akm",["rhs_weap_akm","rhs_weap_akm_gp25","rhs_weap_akmn","rhs_weap_akmn_gp25","rhs_weap_akmn_npz","rhs_weap_akmn_gp25_npz","rhs_weap_akm_zenitco01_b33","rhs_weap_akm_zenitco01_b33_grip1","rhs_weap_akm_zenitco01_b33_afg","rhs_weap_akms_gp25","rhs_weap_pm63","rhs_weap_45th_akm","rhs_weap_45th_akm_gp25","uk3cb_weap_pm63_sup","uk3cb_weap_akm_sup","uk3cb_weap_akmn_npz_1p87_sup","uk3cb_weap_akmn_gp25_npz_1p87_sup","uk3cb_weap_akm_gp25_sup","uk3cb_weap_akmn_sup","uk3cb_weap_akmn_gp25_sup","uk3cb_weap_akmn_npz_1p87","uk3cb_weap_akmn_gp25_npz_1p87","uk3cb_weap_akmn_gp25_1p29","uk3cb_weap_akms_gp25_sup","uk3cb_weap_akmn_1p29","uk3cb_weap_akmn_1p29_sup","rhsgref_weap_akm_zenitco","rhsgref_weap_akm_zenitco_sd"]],

- ["rhs_recoil_asval_folded",["rhs_weap_asval_folded","rhs_weap_asval_grip_folded","rhs_weap_asval_folded_grip1","rhs_weap_asval_folded_afg"]],

- ["rhs_recoil_svd",["rhs_weap_svd","rhs_weap_svdp","rhs_weap_svdp_npz","rhs_weap_svdp_wd","rhs_weap_svdp_wd_npz","rhs_weap_svds","rhs_weap_svds_npz","rhs_weap_svd_pso1","rhs_weap_svdp_pso1","rhs_weap_svds_pso1","rhs_weap_45th_svds","uk3cb_weap_svdp_wd_npz_dh5","uk3cb_weap_svdp_wd_npz_dh5_sup","UK3CB_SVD_OLD","UK3CB_SVD_OLD_NPZ","uk3cb_weap_svd_old_pso1m2","uk3cb_weap_svd_old_pso1m2_sup","rhsgref_weap_svds"]],

- ["rhs_weap_scarh_folded_recoil",["rhs_weap_mk17_CQC_Folded","rhs_weap_mk17_CQC_Folded_grip","rhs_weap_mk17_CQC_Folded_grip2","rhs_weap_mk17_CQC_Folded_grip3","rhs_weap_mk17_STD_Folded","rhs_weap_mk17_STD_Folded_grip","rhs_weap_mk17_STD_Folded_grip2","rhs_weap_mk17_STD_Folded_grip3","rhs_weap_mk17_LB_Folded","rhs_weap_mk17_LB_Folded_grip","rhs_weap_mk17_LB_Folded_grip2","rhs_weap_mk17_LB_Folded_grip3","rhs_weap_SCARH_USA_CQC_Folded","rhs_weap_SCARH_USA_CQC_Folded_grip","rhs_weap_SCARH_USA_CQC_Folded_grip2","rhs_weap_SCARH_USA_CQC_Folded_grip3","rhs_weap_SCARH_USA_STD_Folded","rhs_weap_SCARH_USA_STD_Folded_grip","rhs_weap_SCARH_USA_STD_Folded_grip2","rhs_weap_SCARH_USA_STD_Folded_grip3","rhs_weap_SCARH_USA_LB_Folded","rhs_weap_SCARH_USA_LB_Folded_grip","rhs_weap_SCARH_USA_LB_Folded_grip2","rhs_weap_SCARH_USA_LB_Folded_grip3","rhs_weap_SCARH_CQC_Folded","rhs_weap_SCARH_CQC_Folded_grip","rhs_weap_SCARH_CQC_Folded_grip2","rhs_weap_SCARH_CQC_Folded_grip3","rhs_weap_SCARH_STD_Folded","rhs_weap_SCARH_STD_Folded_grip","rhs_weap_SCARH_STD_Folded_grip2","rhs_weap_SCARH_STD_Folded_grip3","rhs_weap_SCARH_LB_Folded","rhs_weap_SCARH_LB_Folded_grip","rhs_weap_SCARH_LB_Folded_grip2","rhs_weap_SCARH_LB_Folded_grip3","rhs_weap_SCARH_FDE_CQC_Folded","rhs_weap_SCARH_FDE_CQC_Folded_grip","rhs_weap_SCARH_FDE_CQC_Folded_grip2","rhs_weap_SCARH_FDE_CQC_Folded_grip3","rhs_weap_SCARH_FDE_STD_Folded","rhs_weap_SCARH_FDE_STD_Folded_grip","rhs_weap_SCARH_FDE_STD_Folded_grip2","rhs_weap_SCARH_FDE_STD_Folded_grip3","rhs_weap_SCARH_FDE_LB_Folded","rhs_weap_SCARH_FDE_LB_Folded_grip","rhs_weap_SCARH_FDE_LB_Folded_grip2","rhs_weap_SCARH_FDE_LB_Folded_grip3"]],

- ["recoil_ktb",["arifle_Katiba_Base_F","arifle_Katiba_F","arifle_Katiba_GL_F","arifle_Katiba_ACO_F","arifle_Katiba_pointer_F","arifle_Katiba_ACO_pointer_F","arifle_Katiba_ARCO_F","arifle_Katiba_ARCO_pointer_F","arifle_Katiba_GL_ACO_F","arifle_Katiba_GL_ARCO_pointer_F","arifle_Katiba_GL_ACO_pointer_F","arifle_Katiba_GL_Nstalker_pointer_F","arifle_Katiba_GL_ACO_pointer_snds_F","arifle_Katiba_ACO_pointer_snds_F","arifle_Katiba_ARCO_pointer_snds_F","rhs_weap_aks74u","rhs_weap_aks74un","rhs_weap_aks74u_sup","rhs_weap_aks74un_sup","uk3cb_weap_aks74un_ekp8","uk3cb_weap_aks74un_ekp8_sup","rhs_weap_vhs2_base","rhs_weap_vhsd2","rhs_weap_vhsd2_grip1","rhs_weap_vhsd2_grip2","rhs_weap_vhsd2_grip3","rhs_weap_vhsd2_bg","rhs_weap_vhsd2_ct15x","rhs_weap_vhsd2_ct15x_grip1","rhs_weap_vhsd2_ct15x_grip2","rhs_weap_vhsd2_ct15x_grip3","rhs_weap_vhsd2_bg_ct15x","rhs_weap_vhsd2_eo","UK3CB_KH2002_BASE","UK3CB_KH2002","UK3CB_KH2002_UGL","UK3CB_KH2002_erco","UK3CB_KH2002_UGL_erco","UK3CB_KH2002_erco_las_sup","UK3CB_KH2002_UGL_erco_las_sup","UK3CB_KH2002_ekp8_18","UK3CB_KH2002_UGL_ekp8_18","UK3CB_KH2002_ekp8_18_las_sup","UK3CB_KH2002_UGL_ekp8_18_las_sup","UK3CB_KH2002_mrco","UK3CB_KH2002_UGL_mrco","UK3CB_KH2002_mrco_las_sup","UK3CB_KH2002_UGL_mrco_las_sup","UK3CB_KH2002_arco","UK3CB_KH2002_UGL_arco","UK3CB_KH2002_arco_las_sup","UK3CB_KH2002_UGL_arco_las_sup"]],

- ["recoil_ktbc",["arifle_Katiba_C_F","arifle_Katiba_C_ACO_pointer_F","arifle_Katiba_C_ACO_F","arifle_Katiba_C_ACO_pointer_snds_F","rhs_weap_savz58_base","rhs_weap_savz58_rail_base","rhs_weap_savz58_ris_base","rhs_weap_savz58p","rhs_weap_savz58p_rail","rhs_weap_savz58p_black","rhs_weap_savz58p_rail_black","rhs_weap_vhsk2","rhs_weap_vhsk2_grip1","rhs_weap_vhsk2_grip2","rhs_weap_vhsk2_grip3","UK3CB_KH2002_Carbine","UK3CB_KH2002_Carbine_erco","UK3CB_KH2002_Carbine_erco_las_sup","UK3CB_KH2002_Carbine_ekp8_18","UK3CB_KH2002_Carbine_ekp8_18_las_sup","UK3CB_KH2002_Carbine_mrco","UK3CB_KH2002_Carbine_mrco_las_sup","UK3CB_KH2002_Carbine_arco","UK3CB_KH2002_Carbine_arco_las_sup"]],

- ["recoil_dmr_04",["DMR_04_base_F","srifle_DMR_04_F","srifle_DMR_04_Tan_F","srifle_DMR_04_ACO_F","srifle_DMR_04_MRCO_F","srifle_DMR_04_SOS_F","srifle_DMR_04_DMS_F","srifle_DMR_04_ARCO_F","srifle_DMR_04_NS_LP_F","srifle_DMR_04_DMS_weathered_Kir_F_F"]],

- ["rhs_recoil_mk18",["rhs_weap_mk18","rhs_weap_mk18_bk","rhs_weap_mk18_wd","rhs_weap_mk18_d","rhs_weap_mk18_KAC","rhs_weap_mk18_KAC_bk","rhs_weap_mk18_KAC_wd","rhs_weap_mk18_KAC_d","rhs_weap_mk18_grip","rhs_weap_mk18_grip2","rhs_weap_mk18_grip_bk","rhs_weap_mk18_grip2_bk","rhs_weap_mk18_grip_wd","rhs_weap_mk18_grip2_wd","rhs_weap_mk18_grip_d","rhs_weap_mk18_grip2_d","rhs_weap_mk18_grip_KAC","rhs_weap_mk18_grip2_KAC","rhs_weap_mk18_grip_KAC_bk","rhs_weap_mk18_grip2_KAC_bk","rhs_weap_mk18_grip_KAC_wd","rhs_weap_mk18_grip2_KAC_wd","rhs_weap_mk18_grip_KAC_d","rhs_weap_mk18_grip2_KAC_d","rhs_weap_mk18_m320","rhs_weap_hk416d10","rhs_weap_hk416d10_grip","rhs_weap_hk416d10_grip2","rhs_weap_hk416d10_grip3","rhs_weap_hk416d10_LMT","rhs_weap_hk416d10_LMT_grip","rhs_weap_hk416d10_LMT_grip2","rhs_weap_hk416d10_LMT_grip3","rhs_weap_hk416d10_m320","rhs_weap_hk416d10_LMT_d","rhs_weap_hk416d10_LMT_d_grip","rhs_weap_hk416d10_LMT_d_grip2","rhs_weap_hk416d10_LMT_d_grip3","rhs_weap_hk416d10_LMT_wd","rhs_weap_hk416d10_LMT_wd_grip","rhs_weap_hk416d10_LMT_wd_grip2","rhs_weap_hk416d10_LMT_wd_grip3","rhs_weap_mk18_eotech","rhs_weap_mk18_eotech_sup","rhs_weap_mk18_SU230","UK3CB_HK416_LMT_eotech_552","rhs_weap_hk416d10_compm4"]],

- ["UK3CB_BAF_recoil_saw_762",["UK3CB_BAF_L110_762_Base","UK3CB_BAF_L110_762"]],

- ["uk3cb_recoil_5104",["uk3cb_stgw57_5104","uk3cb_stgw57_amt"]],

- ["rhs_recoil_asval",["rhs_weap_asval","rhs_weap_asval_grip","rhs_weap_asval_grip1","rhs_weap_asval_afg","rhs_weap_asval_npz","rhs_weap_asval_grip_npz","rhs_weap_asval_npz_grip1","rhs_weap_asval_npz_afg","rhs_weap_vss","rhs_weap_vss_grip","rhs_weap_vss_grip1","rhs_weap_vss_afg","rhs_weap_vss_npz","rhs_weap_vss_grip_npz","rhs_weap_vss_npz_grip1","rhs_weap_vss_npz_afg","rhs_asval_pso1","rhs_weap_45th_asval","rhs_weap_45th_vss","rhs_weap_vmf_asval","rhs_weap_vmf_vss"]],

- ["rhs_recoil_m27",["rhs_weap_m27iar","rhs_weap_m27iar_grip","rhs_weap_m27iar_grip1","rhs_weap_m27iar_grip2","rhs_weap_m27iar_grip3","rhs_weap_m27iar_bipod_acog_usmc","rhs_weap_m27iar_bipod_acog_usmc_sup","rhs_weap_m27iar_bipod_acog_usmc_sup_tan"]],

- ["uk3cb_recoil_stgw57",["UK3CB_STGW57","uk3cb_stgw57_RIS"]],

- ["recoil_dmr_06",["DMR_06_base_F","srifle_DMR_06_camo_F","srifle_DMR_06_olive_F","srifle_DMR_06_camo_khs_F","DMR_06_hunter_base_F","srifle_DMR_06_hunter_F","srifle_DMR_06_hunter_khs_F","UK3CB_M14","UK3CB_M14_Railed","UK3CB_M21","UK3CB_M21_Bipod_Railed","UK3CB_M14DMR","UK3CB_M14DMR_BLK","UK3CB_M14DMR_Railed","UK3CB_M14DMR_Railed_BLK","UK3CB_M14_artel","UK3CB_M14_artel_sup","UK3CB_M14DMR_Railed_Acog","UK3CB_M14DMR_Railed_BLK_Acog","UK3CB_M14DMR_Railed_Acog_sup","UK3CB_M14DMR_Railed_SOS","UK3CB_M14DMR_Railed_SOS_sup","UK3CB_M21_artel","UK3CB_M21_artel_sup","UK3CB_M14DMR_artel_sup","UK3CB_M14DMR_Railed_BLK_mrco_sup"]],

- ["recoil_spar_lsw",["arifle_SPAR_02_base_F","arifle_SPAR_02_blk_F","arifle_SPAR_02_khk_F","arifle_SPAR_02_snd_F","arifle_SPAR_02_blk_Pointer_F","arifle_SPAR_02_blk_ERCO_Pointer_F"]],

- ["rhs_recoil_m249",["rhs_weap_saw_base","rhs_weap_lmg_minimipara","rhs_weap_lmg_minimi_railed","rhs_weap_m249","rhs_weap_m249_pip_S","rhs_weap_m249_pip_S_vfg","rhs_weap_m249_pip_S_vfg1","rhs_weap_m249_pip_S_vfg2","rhs_weap_m249_pip_S_vfg3","rhs_weap_m249_pip_S_para","rhs_weap_m249_pip_S_para_vfg1","rhs_weap_m249_pip_S_para_vfg2","rhs_weap_m249_pip_S_para_vfg3","rhs_weap_m249_light_S","rhs_weap_m249_light_S_vfg1","rhs_weap_m249_light_S_vfg2","rhs_weap_m249_light_S_vfg3","rhs_weap_m249_pip","rhs_weap_m249_pip_ris","rhs_weap_m249_pip_vfg1","rhs_weap_m249_pip_vfg2","rhs_weap_m249_pip_vfg3","rhs_weap_m249_pip_L","rhs_weap_m249_pip_L_vfg","rhs_weap_m249_pip_L_vfg1","rhs_weap_m249_pip_L_vfg2","rhs_weap_m249_pip_L_vfg3","rhs_weap_m249_pip_L_para","rhs_weap_m249_pip_L_para_vfg1","rhs_weap_m249_pip_L_para_vfg2","rhs_weap_m249_pip_L_para_vfg3","rhs_weap_m249_light_L","rhs_weap_m249_light_L_vfg1","rhs_weap_m249_light_L_vfg2","rhs_weap_m249_light_L_vfg3","rhs_weap_m249_pip_elcan","rhs_weap_m249_light_S_elcan","rhs_weap_m249_light_L_elcan","rhs_weap_m249_pip_usmc","rhs_weap_m249_para_usmc","uk3cb_weap_m249_pip_L_sup","uk3cb_weap_m249_pip_L_eot552_anpeq15_sup","uk3cb_weap_m249_pip_L_vfg3_acog_bip_sup","rhs_weap_minimi_para_railed","rhs_weap_minimi_para_railed_vfg1","rhs_weap_minimi_para_railed_vfg2","rhs_weap_minimi_para_railed_vfg3","rhs_weap_minimi_para_railed_eot552_m952v_sfmb"]],

- ["UK3CB_BAF_recoil_saw_556",["UK3CB_BAF_L110_556_Base","UK3CB_BAF_L110A1","UK3CB_BAF_L110A2","UK3CB_BAF_L110A2RIS","UK3CB_BAF_L110A3","UK3CB_BAF_L110A2_FIST","UK3CB_BAF_L110A2_RIS_LDSR2D_IR","UK3CB_BAF_L110A2_RIS_LDSR2D_IR_S","UK3CB_BAF_L110A2_RIS_TA31F_IR","UK3CB_BAF_L110A2_SUSAT"]],

- ["recoil_zafir",["LMG_Zafir_F","LMG_Zafir_pointer_F","LMG_Zafir_ARCO_F","B_Patrol_Soldier_HeavyGunner_weapon_F","rhs_weap_pkm","UK3CB_Bren_L4_LMG","UK3CB_Bren_303","UK3CB_Bren","UK3CB_RPD","uk3cb_rpd_sup","UK3CB_RPK","UK3CB_RPK_BLK","UK3CB_RPKN","UK3CB_RPKN_BLK","UK3CB_RPKN_PLUM","UK3CB_RPK_74","UK3CB_RPK_74_BLK","UK3CB_RPK_74_PLUM","UK3CB_RPK_74N","UK3CB_RPK_74N_BLK","UK3CB_RPK_74N_PLUM","uk3cb_rpk_blk_sup","uk3cb_rpkn_blk_ekp802_sup","uk3cb_rpkn_ekp802","uk3cb_rpkn_blk_ekp802","uk3cb_rpk_74n_plum_ekp802","UK3CB_UKM2000P","UK3CB_BAF_L1A1","UK3CB_BAF_L1A1_Wood","rhs_weap_mg42_base","rhs_weap_mg42","rhs_weap_mg42_aa","rhs_weap_m84","UK3CB_MG42_base","UK3CB_MG3","UK3CB_MG3_Railed","UK3CB_MG3_KWS_T","UK3CB_MG3_KWS_B","UK3CB_MG3_KWS_G","UK3CB_BAF_L1A1_SUIT"]],

- ["recoil_mx",["arifle_MX_Base_F","arifle_MX_F","arifle_MX_GL_F","arifle_MX_pointer_F","arifle_MX_Holo_pointer_F","arifle_MX_Hamr_pointer_F","arifle_MX_ACO_pointer_F","arifle_MX_ACO_F","arifle_MX_GL_ACO_F","arifle_MX_GL_ACO_pointer_F","arifle_MX_GL_Hamr_pointer_F","arifle_MX_ACO_pointer_snds_F","arifle_MX_RCO_pointer_snds_F","arifle_MX_GL_Holo_pointer_snds_F","arifle_MX_Black_F","arifle_MX_GL_Black_F","arifle_MX_GL_Black_Hamr_pointer_F","arifle_MX_Black_Hamr_pointer_F","arifle_MX_khk_F","arifle_MX_khk_ACO_Pointer_F","arifle_MX_khk_Holo_Pointer_F","arifle_MX_khk_Hamr_Pointer_F","arifle_MX_khk_Hamr_Pointer_Snds_F","arifle_MX_khk_Pointer_F","arifle_MX_khk_ACO_Pointer_Snds_F","arifle_MX_GL_khk_F","arifle_MX_GL_khk_ACO_F","arifle_MX_GL_khk_Hamr_Pointer_F","arifle_MX_GL_khk_Holo_Pointer_Snds_F","B_Patrol_Soldier_Leader_weapon_F","B_Patrol_Soldier_Medic_weapon_F","B_Patrol_Soldier_Carrier_weapon_F","B_Patrol_Soldier_Specialist_weapon_F","arifle_MX_Black_ACO_Pointer_F","arifle_MX_Black_ACO_FL_F","arifle_MX_Black_Holo_Pointer_F","arifle_MX_Black_Hamr_Pointer_Snds_F","arifle_MX_Black_Pointer_F","arifle_MX_Black_ACO_Pointer_Snds_F","arifle_MX_GL_Black_ACO_F","arifle_MX_GL_Black_Holo_Pointer_Snds_F","rhs_weap_M320_Base_F","rhs_weap_M320","rhs_weap_SCAR_Base","uk3cb_ak47","uk3cb_ak47n","rhs_weap_m3a1_base","rhs_weap_m3a1","rhs_weap_m3a1_specops","UK3CB_G36_MLIC","UK3CB_G36_MLIC_K","UK3CB_G36_MLIC_C","UK3CB_AG36_MLIC"]],

- ["rhs_recoil_g36",["rhs_weap_g36_base","rhs_weap_g36c","rhs_weap_g36c_grip1","rhs_weap_g36c_grip2","rhs_weap_g36c_grip3","rhs_weap_g36kv","rhs_weap_g36kv_grip1","rhs_weap_g36kv_grip2","rhs_weap_g36kv_grip3","rhs_weap_g36kv_ag36","rhs_weap_g36c_compm4","rhs_weap_g36c_grip3_eo","rhs_weap_g36kv_compm4","rhs_weap_g36kv_ag36_eo","rhs_weap_g36kv_grip3_eo"]]]
