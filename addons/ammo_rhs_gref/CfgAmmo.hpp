// Redefines values for 1 ammo class(es). This is auto exported config

// [["rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21_t","rhsgref_10Rnd_792x57_m76","rhsgref_50Rnd_792x57_SmE_drum","rhs_30Rnd_762x39mm_Savz58","rhs_30Rnd_762x39mm_Savz58_tracer","rhsgref_30rnd_556x45_vhs2","rhsgref_30rnd_556x45_vhs2_t"]] call afibalance_common_fnc_getAmmo;
// requiredAddons[] = {"rhsgref_c_weapons", "rhssaf_c_weapons", "ace_compat_rhs_saf3", "ace_compat_rhs_gref3"};
// Excluded inputs: rhsgref_30rnd_556x45_m21 -> rhs_ammo_556x45_M855_Ball (rhsusf_c_weapons); rhsgref_30rnd_556x45_m21_t -> rhs_ammo_556x45_M855_Ball (rhsusf_c_weapons); rhs_30Rnd_762x39mm_Savz58 -> rhs_B_762x39_Ball (rhs_c_weapons); rhs_30Rnd_762x39mm_Savz58_tracer -> rhs_B_762x39_Tracer (rhs_c_weapons); rhsgref_30rnd_556x45_vhs2 -> rhs_ammo_556x45_M855A1_Ball (rhsusf_c_weapons); rhsgref_30rnd_556x45_vhs2_t -> rhs_ammo_556x45_M855A1_Ball (rhsusf_c_weapons)
class CfgAmmo {
    class BulletBase;

    // Used by magazines: rhsgref_5Rnd_792x57_kar98k, rhsgref_10Rnd_792x57_m76, rhsgref_50Rnd_792x57_SmE_drum, rhsgref_50Rnd_792x57_SmE_notracers_drum, rhsgref_50Rnd_792x57_SmK_drum, rhsgref_50Rnd_792x57_SmK_alltracers_drum, rhsgref_296Rnd_792x57_SmE_belt, rhsgref_296Rnd_792x57_SmE_notracers_belt, rhsgref_296Rnd_792x57_SmK_belt, rhsgref_296Rnd_792x57_SmK_alltracers_belt, rhssaf_10Rnd_792x57_m76_tracer
    class rhs_ammo_792x57_Ball: BulletBase {
        _UNIVERSAL_AMMO_DAMAGES_
    };
};
