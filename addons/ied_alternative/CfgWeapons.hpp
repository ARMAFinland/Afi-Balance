class CfgWeapons {
	class Default;
	class Put: Default {
		class PutMuzzle: Default { };
		class DemoChargeMuzzle: PutMuzzle {
			magazines[] += {"AFI_IEDUrbanSmall_Pressure_Mag", "AFI_IEDLandSmall_Pressure_Mag"};
		};
		class PipeBombMuzzle: PutMuzzle {
			magazines[] += {"AFI_IEDUrbanBig_Pressure_Mag", "AFI_IEDLandBig_Pressure_Mag"};
		};
	};
};