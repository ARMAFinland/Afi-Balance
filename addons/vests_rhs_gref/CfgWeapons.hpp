// Redefines armor values for 2 vest class(es). This is auto exported config. Base mod: rhsgref_c_troops
class CfgWeapons {
   class ItemCore;

   class Vest_Camo_Base: ItemCore {
       class ItemInfo;
   };

   class rhs_6b23: Vest_Camo_Base {
       class ItemInfo: ItemInfo {
           class HitpointsProtectionInfo {
               class Neck;
               class Chest;
               class Diaphragm;
               class Abdomen;
               class Body;
           };
       };
   };

    class rhsgref_6b23_khaki: rhs_6b23 {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Neck: Neck {
                    armor = ARMOR_VALUE_NECK;
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

   class rhsgref_6b23_khaki_rifleman: rhsgref_6b23_khaki {
       class ItemInfo;
   };

    class rhsgref_otv_khaki: rhsgref_6b23_khaki_rifleman {
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
