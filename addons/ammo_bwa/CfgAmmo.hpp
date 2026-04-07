// Redefines values for 2 ammo class(es). This is auto exported config

// [["BWA3_30Rnd_556x45_G36","BWA3_30Rnd_556x45_G36_Tracer","BWA3_120Rnd_762x51_soft","BWA3_120Rnd_762x51_Tracer_soft","BWA3_120Rnd_762x51","BWA3_120Rnd_762x51_Tracer","BWA3_200Rnd_556x45","BWA3_200Rnd_556x45_Tracer","BWA3_20Rnd_762x51_G28","BWA3_20Rnd_762x51_G28_Tracer"]] call afibalance_common_fnc_getAmmo;
// requiredAddons[] = {"bwa3_comp_ace"};
// Excluded inputs: BWA3_120Rnd_762x51_soft -> B_762x51_Tracer_Red (A3_Weapons_F); BWA3_120Rnd_762x51_Tracer_soft -> B_762x51_Tracer_Red (A3_Weapons_F); BWA3_120Rnd_762x51 -> B_762x51_Tracer_Red (A3_Weapons_F); BWA3_120Rnd_762x51_Tracer -> B_762x51_Tracer_Red (A3_Weapons_F)
class CfgAmmo {
    class B_556x45_Ball_Tracer_Red;
    class B_762x51_Tracer_Red;

    // Used by magazines: BWA3_2000Rnd_556x45, BWA3_30Rnd_556x45_G36, BWA3_30Rnd_556x45_G36_Tracer, BWA3_200Rnd_556x45, BWA3_200Rnd_556x45_Tracer
    class BWA3_B_556x45_Ball: B_556x45_Ball_Tracer_Red {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: BWA3_20Rnd_762x51_G28, BWA3_20Rnd_762x51_G28_Tracer, BWA3_10Rnd_762x51_G28, BWA3_10Rnd_762x51_G28_Tracer
    class BWA3_B_762x51_Ball: B_762x51_Tracer_Red {
        _UNIVERSAL_AMMO_DAMAGES_
    };
};
