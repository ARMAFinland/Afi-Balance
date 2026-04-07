// Redefines armor values for 24 vest class(es). This is auto exported config. Base mod: UK3CB_Factions_APD_B
class CfgWeapons {
   class ItemCore;

   class Vest_Camo_Base: ItemCore {
       class ItemInfo;
   };

   class rhsusf_iotv_ocp_base: Vest_Camo_Base {
       class ItemInfo;
   };

   class V_TacVest_khk: Vest_Camo_Base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Body;
           };
       };
   };

   class rhsusf_mbav: rhsusf_iotv_ocp_base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Chest;
               class Diaphragm;
               class Body;
           };
       };
   };

   class rhsusf_mbav_light: rhsusf_mbav {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo: HitpointsProtectionInfo {
               class Chest: Chest {};
               class Diaphragm: Diaphragm {};
               class Body: Body {};
           };
       };
   };

   class rhsusf_mbav_rifleman: rhsusf_mbav_light {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo: HitpointsProtectionInfo {
               class Chest: Chest {};
               class Diaphragm: Diaphragm {};
               class Body: Body {};
           };
       };
   };

   class rhsusf_mbav_mg: rhsusf_mbav_light {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo: HitpointsProtectionInfo {
               class Chest: Chest {};
               class Diaphragm: Diaphragm {};
               class Body: Body {};
           };
       };
   };

   class rhsusf_mbav_grenadier: rhsusf_mbav_light {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo: HitpointsProtectionInfo {
               class Chest: Chest {};
               class Diaphragm: Diaphragm {};
               class Body: Body {};
           };
       };
   };

   class rhsusf_mbav_medic: rhsusf_mbav_light {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo: HitpointsProtectionInfo {
               class Chest: Chest {};
               class Diaphragm: Diaphragm {};
               class Body: Body {};
           };
       };
   };

    class UK3CB_APD_B_V_TacVest_01: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_02: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_03: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_BLK_01: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_BLK_02: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_BLK_03: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_MED_01: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_MED_02: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_MED_03: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_MED_BLK_01: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_MED_BLK_02: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_V_TacVest_BLK_MED_03: V_TacVest_khk {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen: Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_BLK: rhsusf_mbav {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_BLU: rhsusf_mbav {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_LIGHT_BLK: rhsusf_mbav_light {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_LIGHT_BLU: rhsusf_mbav_light {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_RIFLEMAN_BLK: rhsusf_mbav_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_RIFLEMAN_BLU: rhsusf_mbav_rifleman {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_MG_BLK: rhsusf_mbav_mg {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_MG_BLU: rhsusf_mbav_mg {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_GRENADIER_BLK: rhsusf_mbav_grenadier {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_GRENADIER_BLU: rhsusf_mbav_grenadier {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_MEDIC_BLK: rhsusf_mbav_medic {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class UK3CB_APD_B_MBAV_MEDIC_BLU: rhsusf_mbav_medic {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Chest: Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm: Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };
};
