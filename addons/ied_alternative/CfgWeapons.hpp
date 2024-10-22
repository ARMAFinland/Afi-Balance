class CfgWeapons {
	class Default;
	class Put: Default {
		class PutMuzzle: Default { };
		class DemoChargeMuzzle: PutMuzzle {
			magazines[] += {"IEDUrbanSmall_Pressure_Mag", "IEDLandSmall_Pressure_Mag"};
		};
		class PipeBombMuzzle: PutMuzzle {
			magazines[] += {"IEDUrbanBig_Pressure_Mag", "IEDLandBig_Pressure_Mag"};
		};
	};
};