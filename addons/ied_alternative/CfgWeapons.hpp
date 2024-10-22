class CfgWeapons {
	class Default;
	class Put: Default {
		class PutMuzzle: Default { };
		class DemoChargeMuzzle: PutMuzzle {
			magazines[] += {QGVAR(UrbanSmall_Pressure_Mag), QGVAR(LandSmall_Pressure_Mag)};
		};
		class PipeBombMuzzle: PutMuzzle {
			magazines[] += {QGVAR(UrbanBig_Pressure_Mag), QGVAR(LandBig_Pressure_Mag)};
		};
	};
};