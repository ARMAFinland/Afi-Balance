// Redefines armor values for 7 vest class(es). This is auto exported config. Base mod: A3_Characters_F_Exp_Vests
class CfgWeapons {
   class ItemCore;

   class Vest_Camo_Base: ItemCore {
       class ItemInfo;
   };

   class Vest_NoCamo_Base: ItemCore {
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

   class V_TacVest_blk_POLICE: Vest_Camo_Base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Body;
           };
       };
   };

   class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Body;
           };
       };
   };

   class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo: HitpointsProtectionInfo {
               class Chest: Chest {};
               class Diaphragm: Diaphragm {};
               class Abdomen: Abdomen {};
               class Body: Body {};
           };
       };
   };

   class V_PlateCarrier2_blk: V_PlateCarrier2_rgr {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo: HitpointsProtectionInfo {
               class Chest: Chest {};
               class Diaphragm: Diaphragm {};
               class Abdomen: Abdomen {};
               class Body: Body {};
           };
       };
   };

    class V_PlateCarrier1_tna_F: V_PlateCarrier1_blk {
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

    class V_PlateCarrier2_tna_F: V_PlateCarrier2_blk {
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

    class V_PlateCarrierSpec_tna_F: V_PlateCarrierSpec_rgr {
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

    class V_PlateCarrierGL_tna_F: V_PlateCarrierGL_rgr {
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

    class V_TacVest_gen_F: V_TacVest_blk_POLICE {
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

    class V_PlateCarrier1_rgr_noflag_F: V_PlateCarrier1_rgr {
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

    class V_PlateCarrier2_rgr_noflag_F: V_PlateCarrier2_rgr {
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
};
