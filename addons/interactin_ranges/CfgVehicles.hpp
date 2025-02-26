class CfgVehicles {
	class ThingX;	
	class ReammoBox_F: ThingX {
		class ACE_Actions {
			class ACE_MainActions;
		};
	};

	class Land_RepairDepot_01_base_F: ReammoBox_F {
		class ACE_Actions : ACE_Actions {
			class ACE_MainActions : ACE_MainActions {
				distance = 3;
			};
		};
	};
};
