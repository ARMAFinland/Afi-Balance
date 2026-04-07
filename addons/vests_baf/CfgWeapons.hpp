// Redefines armor values for 5 vest class(es). This is auto exported config. Base mod: UK3CB_BAF_Equipment_Vests
class CfgWeapons {
   class Vest_NoCamo_Base;

   class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
       class ItemInfo;
   };

   class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
       class ItemInfo;
   };

   class V_RebreatherB;

   class UK3CB_BAF_V_RebreatherB: V_RebreatherB {
       class ItemInfo;
   };

    class UK3CB_BAF_V_Osprey_Base: V_PlateCarrier2_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    armor = ARMOR_VALUE_NECK;
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

    class UK3CB_BAF_V_Osprey_Light_Base: V_PlateCarrier1_rgr {
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

    class UK3CB_BAF_V_Osprey_Mk2_Base: V_PlateCarrier1_rgr {
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

    class UK3CB_BAF_Webbing_Plate_Base: V_PlateCarrier1_rgr {
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

    class UK3CB_BAF_V_Rebreather_PlateB: UK3CB_BAF_V_RebreatherB {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Neck {
                    armor = ARMOR_VALUE_NECK;
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
};
