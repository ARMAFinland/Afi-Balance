class CfgAmmo {
	class rhs_ammo_atgmBase_base;
	
	class rhs_ammo_9m113 : rhs_ammo_atgmBase_base {
		maneuvrability = 14;
		rhs_ballisticMode = 0;
		rhs_guideMode = "WIRE";
		rhs_saclos = 1;
		class ace_missileguidance {
			enabled = 0;
		};
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
 	class rhs_ammo_9m17: rhs_ammo_atgmBase_base {
 	 	maneuvrability = 4;
		class ace_missileguidance {
			enabled = 0;
		};
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_mclosGuide";
			};
		};
 	};
 	class rhs_ammo_9m17p: rhs_ammo_9m17 {
		class ace_missileguidance {
			enabled = 0;
		};
		rhs_ballisticMode = 1;
		rhs_guideMode = "WIRE";
		rhs_saclos = 1;
		class EventHandlers: EventHandlers
		{
			class RHS_Guidance
			{
				fired = "_this call RHS_fnc_saclosGuide";
			};
		};
	};
};
