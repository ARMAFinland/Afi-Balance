// Redefines values for 8 ammo class(es). This is auto exported config

// [["rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhsusf_200Rnd_556x45_box","rhsusf_200rnd_556x45_mixed_box","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag","rhs_mag_20Rnd_SCAR_762x51_m80_ball","rhs_mag_20Rnd_SCAR_762x51_m62_tracer"]] call afibalance_common_fnc_getAmmo;
// requiredAddons[] = {"rhsusf_c_weapons", "ace_compat_rhs_usf3"};
// Excluded inputs: none
class CfgAmmo {
    class B_556x45_Ball;
    class BulletBase;

    // Used by magazines: rhs_mag_30Rnd_556x45_M855_Stanag, rhs_mag_30Rnd_556x45_M855_Stanag_Pull, rhs_mag_30Rnd_556x45_M855_Stanag_Ranger, rhs_mag_30Rnd_556x45_M855_PMAG, rhs_mag_30Rnd_556x45_M855_PMAG_Tan, rhs_mag_20Rnd_556x45_M855_Stanag, rhs_mag_100Rnd_556x45_M855_cmag, rhsusf_100Rnd_556x45_M855_soft_pouch, rhsusf_100Rnd_556x45_M855_soft_pouch_ucp, rhsusf_100Rnd_556x45_M855_soft_pouch_coyote, rhsusf_200Rnd_556x45_M855_soft_pouch, rhsusf_200Rnd_556x45_M855_soft_pouch_ucp, rhsusf_200Rnd_556x45_M855_soft_pouch_coyote, rhsusf_200rnd_556x45_M855_box, rhsgref_30rnd_556x45_m21, rhsgref_30rnd_556x45_m21_t
    class rhs_ammo_556x45_M855_Ball: B_556x45_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_mag_30Rnd_556x45_M855A1_Stanag, rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer, rhs_mag_30Rnd_556x45_M855A1_EPM, rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull, rhs_mag_30Rnd_556x45_M855A1_EPM_Pull, rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger, rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger, rhs_mag_30Rnd_556x45_M855A1_PMAG, rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan, rhs_mag_20Rnd_556x45_M855A1_Stanag, rhs_mag_100Rnd_556x45_M855A1_cmag, rhsusf_100Rnd_556x45_soft_pouch, rhsusf_100Rnd_556x45_soft_pouch_ucp, rhsusf_100Rnd_556x45_soft_pouch_coyote, rhsusf_200Rnd_556x45_soft_pouch, rhsusf_200Rnd_556x45_soft_pouch_ucp, rhsusf_200Rnd_556x45_soft_pouch_coyote, rhs_200rnd_556x45_B_SAW, rhsusf_200Rnd_556x45_box, rhsgref_30rnd_556x45_vhs2, rhsgref_30rnd_556x45_vhs2_t, rhssaf_30rnd_556x45_EPR_G36, rhssaf_100rnd_556x45_EPR_G36
    class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red, rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red, rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red, rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red, rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red, rhs_mag_100Rnd_556x45_M855_cmag_mixed, rhsusf_100Rnd_556x45_M855_mixed_soft_pouch, rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp, rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote, rhsusf_200Rnd_556x45_M855_mixed_soft_pouch, rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp, rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote, rhssaf_30rnd_556x45_Tracers_G36
    class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red, rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red, rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red, rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red, rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red, rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red, rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red, rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red, rhs_mag_100Rnd_556x45_M855A1_cmag_mixed, rhsusf_100Rnd_556x45_mixed_soft_pouch, rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp, rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote, rhsusf_200Rnd_556x45_mixed_soft_pouch, rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp, rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote, rhs_200rnd_556x45_M_SAW, rhs_200rnd_556x45_T_SAW, rhsusf_200rnd_556x45_mixed_box, rhsusf_200rnd_556x45_M855_mixed_box
    class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_mag_762x51_M240_200_M80, rhsusf_50Rnd_762x51, rhsusf_100Rnd_762x51, rhsusf_20Rnd_762x51_m80_Mag, rhs_mag_20Rnd_SCAR_762x51_m80_ball, rhs_mag_20Rnd_762x51_m80_fnfal, rhs_mag_30Rnd_762x51_m80_fnfal, rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk
    class rhs_ammo_762x51_M80_Ball: BulletBase {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhsusf_50Rnd_762x51_m62_tracer, rhsusf_100Rnd_762x51_m62_tracer, rhsusf_20Rnd_762x51_m62_Mag, rhsusf_20Rnd_762x51_SR25_m62_Mag, rhsusf_5Rnd_762x51_m62_Mag, rhsusf_10Rnd_762x51_m62_Mag, rhsusf_5Rnd_762x51_AICS_m62_Mag, rhs_mag_20Rnd_SCAR_762x51_m62_tracer, rhs_mag_20Rnd_762x51_m62_fnfal, rhs_mag_30Rnd_762x51_m62_fnfal, rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk
    class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_mag_1100Rnd_762x51_M240, rhs_mag_762x51_M240_1200, rhs_mag_762x51_M240, rhs_mag_762x51_M240_200, rhs_mag_762x51_m80a1_4000, rhsusf_50Rnd_762x51_m80a1epr, rhsusf_100Rnd_762x51_m80a1epr, rhs_mag_20Rnd_SCAR_762x51_m80a1_epr, rhs_mag_20Rnd_762x51_m80a1_fnfal, rhs_mag_30Rnd_762x51_m80a1_fnfal, rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk
    class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhsusf_20Rnd_762x51_m118_special_Mag, rhsusf_20Rnd_762x51_SR25_m118_special_Mag, rhsusf_5Rnd_762x51_m118_special_Mag, rhsusf_10Rnd_762x51_m118_special_Mag, rhsusf_5Rnd_762x51_AICS_m118_special_Mag, rhs_mag_20Rnd_SCAR_762x51_m118_special, rhs_mag_20Rnd_SCAR_762x51_m118_special_bk
    class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };
};
