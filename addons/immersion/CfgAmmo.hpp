class CfgAmmo {

	class BulletBase;
	class ShotgunBase;
	
	class B_545x39_Ball_F: BulletBase {
		class CamShakePlayerFire {
			power=1;
			duration=0.15;
			frequency=20;
			afi=1;
		};
	};
	class B_556x45_Ball: BulletBase {
		class CamShakePlayerFire {
			power=1.2;
			duration=0.15;
			frequency=20;
			afi=2;
		};
	};
	class B_65x39_Caseless: BulletBase {
		class CamShakePlayerFire {
			power=2;
			duration=0.175;
			frequency=20;
			afi=3;
		};
	};	
	
	class B_762x39_Ball_F: BulletBase {
		class CamShakePlayerFire {
			power=2;
			duration=0.175;
			frequency=20;
			afi=4;
		};
	};

	class rhs_ammo_762x51_M80_Ball: BulletBase {
		class CamShakePlayerFire {
			power=3;
			duration=0.2;
			frequency=20;
			afi=5;
		};
	};

	class rhs_ammo_792x57_Ball: BulletBase {
		class CamShakePlayerFire {
			power=3;
			duration=0.2;
			frequency=20;
			afi=6;
		};
	};

	class B_762x51_Ball: BulletBase {
		class CamShakePlayerFire {
			power=2.5;
			duration=0.2;
			frequency=20;
			afi=7;
		};
	};
	class B_762x54_Ball: BulletBase {
		class CamShakePlayerFire {
			power=2.5;
			duration=0.2;
			frequency=20;
			afi=8;
		};
	};
	
	class B_127x99_Ball: BulletBase {
		class CamShakePlayerFire {
			power=4;
			duration=0.25;
			frequency=20;
			afi=9;
		};
	};

	class B_12Gauge_Slug: BulletBase {
		class CamShakePlayerFire {
			power=3;
			duration=0.3;
			frequency=20;
			afi=10;
		};
	};
	class B_12Gauge_Pellets: ShotgunBase {
		class CamShakePlayerFire {
			power=3;
			duration=0.3;
			frequency=20;
			afi=11;
		};
	};	

	class rhs_B_762x39_Ball: B_762x51_Ball {
		class CamShakePlayerFire {
			power=2;
			duration=0.175;
			frequency=20;
			afi=12;
		};
	};
};