class CfgWeapons {
	class Default;
	class Put: Default {
		class PutMuzzle: Default { };
		class ace_explosives_muzzle : PutMuzzle {
			magazines[] += {QGVAR(Mag_White), QGVAR(Mag_Red), QGVAR(Mag_Yellow), QGVAR(Mag_Green), QGVAR(Mag_Ground_White), QGVAR(Mag_Ground_Red), QGVAR(Mag_Ground_Yellow), QGVAR(Mag_Ground_Green)};
		};
	};
};