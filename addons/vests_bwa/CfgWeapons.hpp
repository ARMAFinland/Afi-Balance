#define _ARMOR_Vest_Fleck_		class ItemInfo: ItemInfo { \
			class HitpointsProtectionInfo: HitpointsProtectionInfo { \
				class Abdomen: Abdomen { \
					armor = 13; /*armor = 20*/ \
					PassThrough = 0.3; /*PassThrough = 0.2*/ \
				}; \
				class Body: Body { \
					PassThrough = 0.3; /*PassThrough = 0.2*/ \
				}; \
				class Chest: Chest { \
					armor = 13; /*armor = 20*/ \
					PassThrough = 0.3; /*PassThrough = 0.2*/ \
				}; \
				class Diaphragm: Diaphragm { \
					armor = 13; /*armor = 20*/ \
					PassThrough = 0.3; /*PassThrough = 0.2*/ \
				}; \
			};	 \
		};



class CfgWeapons {
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base {
		class ItemInfo;
	};

    class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Abdomen;
				class Body;
				class Chest;
				class Diaphragm;
            };
        };
    };

	class BWA3_Vest_Fleck : V_PlateCarrier2_rgr {
		_ARMOR_Vest_Fleck_
	};
};
