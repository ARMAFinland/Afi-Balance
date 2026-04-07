// Redefines values for 8 ammo class(es). This is auto exported config

// [["rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite_tracer","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm_tracer","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR_green"]] call afibalance_common_fnc_getAmmo;
// requiredAddons[] = {"rhs_c_weapons", "ace_compat_rhs_afrf3"};
// Excluded inputs: none
class CfgAmmo {
    class B_556x45_Ball;
    class B_762x51_Ball;

    // Used by magazines: rhs_30Rnd_545x39_AK, rhs_30Rnd_545x39_7N6_AK, rhs_30Rnd_545x39_7N6_green_AK, rhs_45Rnd_545X39_7N6_AK, rhs_45Rnd_545X39_AK
    class rhs_B_545x39_Ball: B_556x45_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_30Rnd_545x39_7N6M_AK, rhs_30Rnd_545x39_7N6M_green_AK, rhs_30Rnd_545x39_7N6M_plum_AK, rhs_45Rnd_545X39_7N6M_AK
    class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_30Rnd_545x39_AK_no_tracers, rhs_30Rnd_545x39_AK_green, rhs_30Rnd_545x39_AK_plum_green, rhs_45Rnd_545X39_AK_Green, rhs_60Rnd_545X39_AK_Green
    class rhs_B_545x39_Ball_Tracer_Green: rhs_B_545x39_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_30Rnd_545x39_7N10_AK, rhs_30Rnd_545x39_7N10_plum_AK, rhs_30Rnd_545x39_7N10_desert_AK, rhs_30Rnd_545x39_7N10_camo_AK, rhs_30Rnd_545x39_7N10_2mag_AK, rhs_30Rnd_545x39_7N10_2mag_plum_AK, rhs_30Rnd_545x39_7N10_2mag_desert_AK, rhs_30Rnd_545x39_7N10_2mag_camo_AK, rhs_45Rnd_545X39_7N10_AK, rhs_60Rnd_545X39_7N10_AK
    class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_30Rnd_762x39mm, rhs_30Rnd_762x39mm_bakelite, rhs_30Rnd_762x39mm_polymer, rhs_10Rnd_762x39mm, rhs_75Rnd_762x39mm, rhs_30Rnd_762x39mm_Savz58, rhssaf_30Rnd_762x39mm_M67
    class rhs_B_762x39_Ball: B_762x51_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_30Rnd_762x39mm_tracer, rhs_30Rnd_762x39mm_bakelite_tracer, rhs_30Rnd_762x39mm_polymer_tracer, rhs_10Rnd_762x39mm_tracer, rhs_75Rnd_762x39mm_tracer, rhs_30Rnd_762x39mm_Savz58_tracer, rhssaf_30Rnd_762x39mm_M78_tracer
    class rhs_B_762x39_Tracer: rhs_B_762x39_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_mag_762x54mm_100, rhs_mag_762x54mm_250, rhs_mag_762x54mm_500, rhs_mag_762x54mm_1000, rhs_mag_762x54mm_2000, rhs_100Rnd_762x54mmR, rhsgref_5Rnd_762x54_m38, rhssaf_250Rnd_762x54R
    class rhs_B_762x54_Ball: B_762x51_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: rhs_100Rnd_762x54mmR_green
    class rhs_B_762x54_Ball_Tracer_Green: rhs_B_762x54_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };
};
