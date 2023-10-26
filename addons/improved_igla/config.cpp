#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rhs_c_weapons","rhs_c_heavyweapons", "rhsusf_c_airweapons","RHS_US_A2Port_Armor","rhsusf_c_weapons","rhsusf_c_statics","A3_Data_F_ParticleEffects","A3_Weapons_F","ace_overpressure"};
        authors[] = {"Tuntematon", "Enzio"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

// configs go here
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgCloudlets.hpp"

class CfgInGameUI
{
	class Cursor
	{
		class Targeting
		{
			// class MarkedTarget
			// {
				// scale = 0;
				// texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			// };
			// class MarkedTargetNoLos: MarkedTarget {
				// scale = 0;
				// texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			// };
			
			// class MarkedTargetNoLosRemote: MarkedTarget {
				// scale = 0;
				// texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			// };
			
			class Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
			
			class SeekerLocked: Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
			
			class SeekerNoLos: Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
		};
	};
};