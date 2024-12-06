class CfgAmmo {

	class BulletBase;
	class ShotgunBase;
	
	class B_545x39_Ball_F: BulletBase {
		class CamShakePlayerFire {
			power=1;
			duration=0.15;
			frequency=20;
		};
	};
	class B_556x45_Ball: BulletBase {
		class CamShakePlayerFire {
			power=1.2;
			duration=0.15;
			frequency=20;
		};
	};
	class B_65x39_Caseless: BulletBase {
		class CamShakePlayerFire {
			power=2;
			duration=0.175;
			frequency=20;
		};
	};	
	
	class B_762x39_Ball_F: BulletBase {
		class CamShakePlayerFire {
			power=2;
			duration=0.175;
			frequency=20;
		};
	};

	class B_762x51_Ball: BulletBase {
		class CamShakePlayerFire {
			power=2.5;
			duration=0.2;
			frequency=20;
		};
	};
	class B_762x54_Ball: BulletBase {
		class CamShakePlayerFire {
			power=2.5;
			duration=0.2;
			frequency=20;
		};
	};
	
	class B_127x99_Ball: BulletBase {
		class CamShakePlayerFire {
			power=4;
			duration=0.25;
			frequency=20;
		};
	};

	class B_12Gauge_Slug: BulletBase {
		class CamShakePlayerFire {
			power=3;
			duration=0.3;
			frequency=20;
		};
	};
	class B_12Gauge_Pellets: ShotgunBase {
		class CamShakePlayerFire {
			power=3;
			duration=0.3;
			frequency=20;
		};
	};
};