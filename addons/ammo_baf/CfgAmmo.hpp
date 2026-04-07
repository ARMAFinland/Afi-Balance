// Redefines values for 4 ammo class(es). This is auto exported config

// [["UK3CB_BAF_556_30Rnd","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_762_20Rnd","UK3CB_BAF_762_20Rnd_T","UK3CB_BAF_762_100Rnd","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_556_200Rnd","UK3CB_BAF_556_200Rnd_T"]] call afibalance_common_fnc_getAmmo;
// requiredAddons[] = {"UK3CB_BAF_Weapons_Ammo", "UK3CB_BAF_Vehicles_Weapons"};
// Excluded inputs: none
class CfgAmmo {
    class B_556x45_Ball;
    class B_556x45_Ball_Tracer_Red;
    class B_762x51_Ball;
    class B_762x51_Tracer_Red;

    // Used by magazines: UK3CB_BAF_556_30Rnd, UK3CB_BAF_556_100Rnd, UK3CB_BAF_556_200Rnd
    class UK3CB_BAF_556_Ball: B_556x45_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: UK3CB_BAF_556_30Rnd_T, UK3CB_BAF_556_100Rnd_T, UK3CB_BAF_556_200Rnd_T
    class UK3CB_BAF_556_Ball_Tracer_Red: B_556x45_Ball_Tracer_Red {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: UK3CB_BAF_762_100Rnd, UK3CB_BAF_762_200Rnd, UK3CB_BAF_762_800Rnd, UK3CB_BAF_762_20Rnd
    class UK3CB_BAF_762_Ball: B_762x51_Ball {
        _UNIVERSAL_AMMO_DAMAGES_
    };

    // Used by magazines: UK3CB_BAF_762_100Rnd_T, UK3CB_BAF_762_200Rnd_T, UK3CB_BAF_762_800Rnd_T, UK3CB_BAF_762_20Rnd_T
    class UK3CB_BAF_762_Ball_Tracer_Red: B_762x51_Tracer_Red {
        _UNIVERSAL_AMMO_DAMAGES_
    };
};
