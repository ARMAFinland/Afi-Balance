#define _ARMOR_6b23_		class ItemInfo: ItemInfo { \
			class HitpointsProtectionInfo: HitpointsProtectionInfo { \
				class Abdomen: Abdomen { \
					armor = 17; /*armor = 22*/ \
					PassThrough = 0.3; /*PassThrough = 0.4*/ \
				}; \
				class Body: Body { \
					PassThrough = 0.3; /*PassThrough = 0.3*/ \
				}; \
				class Chest: Chest { \
					armor = 17; /*armor = 22*/ \
					PassThrough = 0.3; /*PassThrough = 0.3*/ \
				}; \
				class Diaphragm: Diaphragm { \
					armor = 17; /*armor = 22*/ \
					PassThrough = 0.3; /*PassThrough = 0.3*/ \
				}; \
				class Neck: Neck { \
					armor = 8; /*armor = 8*/ \
					PassThrough = 0.4; /*PassThrough = 0.4*/ \
				}; \
			};	 \
		};



class CfgWeapons {
	class ItemCore;
	class Vest_Camo_Base: ItemCore {
		class ItemInfo;
	};

    class rhs_6b23: Vest_Camo_Base {
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Abdomen;
				class Body;
				class Chest;
				class Diaphragm;
				class Neck;
            };
        };
    };

	class rhs_6b23_6sh92 : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_medic : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_crewofficer : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_crew : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_engineer : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_rifleman : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_sniper : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_digi_crew : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_digi_engineer : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_digi_medic : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_digi_rifleman : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_digi_crewofficer : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_digi_sniper : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_digi_6sh92 : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_ML_crew : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_ML_engineer : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_ML_medic : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_ML_rifleman : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_ML_crewofficer : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_ML_sniper : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_ML_6sh92 : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_6sh116 : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_6sh116_flora : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_6sh116_od : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b23_6sh116_mixed : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b13 : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b13_EMR : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b13_Flora : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b43 : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b5 : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b5_khaki : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b5_vsr : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b5_ttsko : rhs_6b23 {
		_ARMOR_6b23_
	};
	
	class rhs_6b5_spetsodezhda : rhs_6b23 {
		_ARMOR_6b23_
	};
};
