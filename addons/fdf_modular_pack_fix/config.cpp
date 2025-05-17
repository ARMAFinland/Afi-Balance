#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main","KAR_FDF_Faction", "KAR_FDF_SCARL"};
		authors[] = {"Tuntematon"};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};

// configs go here

class CfgGroups {
	class WEST {
		class KAR_FIN_FACTION {

			class KAR_FDF_TANK_GROUPS {
				delete KAR_FDF_TANK_PLT;
				delete KAR_FDF_TANK_SEC;
			};

			class KAR_FDF_ART_GROUPS {
				delete KAR_FDF_K9_P;
				delete KAR_FDF_K9_S;
				delete KAR_FDF_PSH74_P;
				delete KAR_FDF_PSH74_S;
				delete KAR_FDF_RKH76_P;
				delete KAR_FDF_RKH76_S;
			};

			class KAR_FDF_MECH_GROUPS {
				delete KAR_FDF_BMP2_PLT;
				delete KAR_FDF_BMP2_S_PLT;
				delete KAR_FDF_BTR60_PLT;

				// class KAR_FDF_FFP_BMP2_S_PLT {
				// 	class Unit7 {
				// 		vehicle = "KAR_FDF_RIF_S";
				// 	};
				// };
				// class KAR_FDF_FFP_BMP2_AT_S_PLT {
				// 	class Unit7 {
				// 		vehicle = "KAR_FDF_RIF_S"; 
				// 	};
				// };
			};

			class KAR_FDF_MOT_GROUPS {
				delete KAR_FDF_MOT_C_AT_TEAM;
				delete KAR_FDF_MOT_C_TEAM;
				delete KAR_FDF_MOT_S_AT_TEAM;
				delete KAR_FDF_MOT_S_AA_TEAM;
				delete KAR_FDF_MOT_S_TEAM;
				delete KAR_FDF_RGM2_SOF_TEAM;
				delete KAR_FDF_RGKRKK_SOF_TEAM;

				// class KAR_FDF_XA360_PLT {
				// 	class Unit7 {
				// 		vehicle = "KAR_FDF_RIF_S_AT";
				// 	};
				// };
			};
		};
	};
};

class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	
	class KAR_FDF_SCAR_L: Rifle_Base_F {
		class FullAuto;
		class Single;
		class fullauto_medium: FullAuto {
			showToPlayer = 0;
		};

		class single_medium_optics1: Single {
			requiredOpticType = 1;
		};

		class single_medium_optics2: single_medium_optics1 {
			requiredOpticType = 2;
		};
	};

	class KAR_FDF_SCAR_L_S: KAR_FDF_SCAR_L {
		scope = 2;
	};

	class KAR_FDF_SCAR_L_G: KAR_FDF_SCAR_L {
		scope = 2;
	};
};