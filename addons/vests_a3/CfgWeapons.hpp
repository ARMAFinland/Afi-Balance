// Redefines armor values for 15 vest class(es). This is auto exported config. Base mod: A3_Characters_F
class CfgWeapons {
   class ItemCore;

   class Vest_NoCamo_Base: ItemCore {
       class ItemInfo;
   };

   class Vest_Camo_Base: ItemCore {
       class ItemInfo;
   };

    class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrier1_blk: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
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

    class V_PlateCarrier3_rgr: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrierGL_rgr: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    armor = ARMOR_VALUE_NECK;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Arms {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Pelvis {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    armor = ARMOR_VALUE_NECK;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Arms {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_TacVest_khk: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_TacVest_camo: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_TacVest_blk_POLICE: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_TacVestIR_blk: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_TacVestCamo_khk: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl {
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
                class Pelvis {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA1_dgtl {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Neck {
                    armor = ARMOR_VALUE_NECK;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Arms {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
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
                class Pelvis {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_Press_F: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Diaphragm {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Abdomen {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Pelvis {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };
};
