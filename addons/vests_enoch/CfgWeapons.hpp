// Redefines armor values for 6 vest class(es). This is auto exported config. Base mod: A3_Characters_F_Enoch_Vests
class CfgWeapons {
   class ItemCore;

   class Vest_Camo_Base: ItemCore {
       class ItemInfo;
   };

   class Vest_NoCamo_Base: ItemCore {
       class ItemInfo;
   };

   class V_PlateCarrier1_rgr;

   class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
       class ItemInfo;
   };

   class V_PlateCarrier1_blk: Vest_Camo_Base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Body;
           };
       };
   };

   class V_PlateCarrier2_blk: V_PlateCarrier2_rgr {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Body;
           };
       };
   };

   class V_PlateCarrierGL_rgr: Vest_NoCamo_Base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Neck;
               class Arms;
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Pelvis;
               class Body;
           };
       };
   };

   class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Neck;
               class Arms;
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Body;
           };
       };
   };

    class V_CarrierRigKBT_01_base_F: Vest_Camo_Base {
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

    class V_CarrierRigKBT_01_heavy_base_F: V_CarrierRigKBT_01_base_F {
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

    class V_PlateCarrier1_wdl: V_PlateCarrier1_blk {
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

    class V_PlateCarrier2_wdl: V_PlateCarrier2_blk {
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

    class V_PlateCarrierGL_wdl: V_PlateCarrierGL_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Neck: Neck {
                    armor = ARMOR_VALUE_NECK;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Arms: Arms {
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
                class Pelvis: Pelvis {
                    armor = ARMOR_VALUE;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };

    class V_PlateCarrierSpec_wdl: V_PlateCarrierSpec_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Neck: Neck {
                    armor = ARMOR_VALUE_NECK;
                    PassThrough = PASS_THROUGH_VALUE;
                };
                class Arms: Arms {
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
                class Body: Body {
                    PassThrough = PASS_THROUGH_VALUE;
                };
            };
        };
    };
};
