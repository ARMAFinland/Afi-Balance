class CfgAmmo {
	class BulletCore;
	class ShellCore;
	class ShellBase: ShellCore{};
	class BulletBase: BulletCore {
		class HitEffects {
			hitVirtual = "ImpactMetal_HJ";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal_HJ";
			hitBuilding = "BCImpactConcrete";
			hitConcrete = "BCImpactConcrete";
			hitGroundSoft = "BCImpactEffectsSmall";
			hitGroundHard = "BCImpactEffectsHardGround";
			default_mat = "BCImpactEffectsSmall";
			hitFoliage = "ImpactLeaves";
			hitWood = "ImpactWood";
			hitMan = "BlastcoreImpactEffectsBlood";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
		};
	};
	class B_127x33_Ball: BulletBase {
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "BCImpactConcrete_50cal";
			hitConcrete = "BCImpactConcrete_50cal";
			hitGroundSoft = "BCImpactDirt_50cal";
			hitGroundHard = "BCImpactDirt_50cal";
			default_mat = "BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_127x99_Ball: BulletBase {
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_50cal";
			hitConcrete = "BCImpactConcrete_50cal";
			hitGroundSoft = "BCImpactDirt_50cal";
			hitGroundHard = "BCImpactDirt_50cal";
			default_mat = "BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_127x108_Ball: BulletBase {
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_50cal";
			hitConcrete = "BCImpactConcrete_50cal";
			hitGroundSoft = "BCImpactDirt_50cal";
			hitGroundHard = "BCImpactDirt_50cal";
			default_mat = "BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_127x108_APDS: B_127x108_Ball {
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_50cal";
			hitConcrete = "BCImpactConcrete_50cal";
			hitGroundSoft = "BCImpactDirt_50cal";
			hitGroundHard = "BCImpactDirt_50cal";
			default_mat = "BCImpactDirt_50cal";
			Hit_Foliage_green = "BCImpactDirt_50cal";
			Hit_Foliage_Dead = "BCImpactDirt_50cal";
			Hit_Foliage_Green_big = "BCImpactDirt_50cal";
			Hit_Foliage_Palm = "BCImpactDirt_50cal";
			Hit_Foliage_Pine = "BCImpactDirt_50cal";
		};
	};
	class B_20mm: BulletBase {
		explosive = 0;
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_20mm";
			hitConcrete = "BCImpactConcrete_20mm";
			hitGroundSoft = "BCImpactDirt_20mm";
			hitGroundHard = "BCImpactDirt_20mm";
			default_mat = "BCImpactDirt_20mm";
			Hit_Foliage_green = "BCImpactDirt_20mm";
			Hit_Foliage_Dead = "BCImpactDirt_20mm";
			Hit_Foliage_Green_big = "BCImpactDirt_20mm";
			Hit_Foliage_Palm = "BCImpactDirt_20mm";
			Hit_Foliage_Pine = "BCImpactDirt_20mm";
		};
	};
	class B_30mm_AP: BulletBase {
		explosive = 0;
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_30mm";
			hitConcrete = "BCImpactConcrete_30mm";
			hitGroundSoft = "BCImpactDirt_30mm";
			hitGroundHard = "BCImpactDirt_30mm";
			default_mat = "BCImpactDirt_30mm";
			Hit_Foliage_green = "BCImpactDirt_30mm";
			Hit_Foliage_Dead = "BCImpactDirt_30mm";
			Hit_Foliage_Green_big = "BCImpactDirt_30mm";
			Hit_Foliage_Palm = "BCImpactDirt_30mm";
			Hit_Foliage_Pine = "BCImpactDirt_30mm";
		};
	};
	class B_30mm_APFSDS: B_30mm_AP {
		explosive = 0;
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_30mm";
			hitConcrete = "BCImpactConcrete_30mm";
			hitGroundSoft = "BCImpactDirt_30mm";
			hitGroundHard = "BCImpactDirt_30mm";
			default_mat = "BCImpactDirt_30mm";
			Hit_Foliage_green = "BCImpactDirt_30mm";
			Hit_Foliage_Dead = "BCImpactDirt_30mm";
			Hit_Foliage_Green_big = "BCImpactDirt_30mm";
			Hit_Foliage_Palm = "BCImpactDirt_30mm";
			Hit_Foliage_Pine = "BCImpactDirt_30mm";
		};
	};
	class Sh_120mm_APFSDS: ShellBase {
		explosive = 0;
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_120mm";
			hitConcrete = "BCImpactConcrete_120mm";
			hitGroundSoft = "BCImpactDirt_120mm";
			hitGroundHard = "BCImpactDirt_120mm";
			default_mat = "BCImpactDirt_120mm";
			Hit_Foliage_green = "BCImpactDirt_120mm";
			Hit_Foliage_Dead = "BCImpactDirt_120mm";
			Hit_Foliage_Green_big = "BCImpactDirt_120mm";
			Hit_Foliage_Palm = "BCImpactDirt_120mm";
			Hit_Foliage_Pine = "BCImpactDirt_120mm";
		};
	};
	class B_19mm_HE: BulletBase {
		explosive = 0.1;
		CraterEffects = "30mmSmoke";
		explosionEffects = "30mmExplode";
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "BCImpactConcrete_30mmHE";
			hitConcrete = "BCImpactConcrete_30mmHE";
			hitGroundSoft = "BCImpactDirt_30mmHE";
			hitGroundHard = "BCImpactDirt_30mmHE";
			default_mat = "BCImpactDirt_30mmHE";
		};
	};
	class B_30mm_HE: B_19mm_HE {
		explosive = 0.1;
		CraterEffects = "30mmSmoke";
		explosionEffects = "30mmExplode";
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_30mmHE";
			hitConcrete = "BCImpactConcrete_30mmHE";
			hitGroundSoft = "BCImpactDirt_30mmHE";
			hitGroundHard = "BCImpactDirt_30mmHE";
			default_mat = "BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase {
		explosive = 0.4;
		CraterEffects = "30mmSmoke";
		explosionEffects = "30mmExplode";
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_30mmHE";
			hitConcrete = "BCImpactConcrete_30mmHE";
			hitGroundSoft = "BCImpactDirt_30mmHE";
			hitGroundHard = "BCImpactDirt_30mmHE";
			default_mat = "BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class B_25mm: BulletBase {
		explosive = 0.1;
		CraterEffects = "30mmSmoke";
		explosionEffects = "30mmExplode";
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_30mmHE";
			hitConcrete = "BCImpactConcrete_30mmHE";
			hitGroundSoft = "BCImpactDirt_30mmHE";
			hitGroundHard = "BCImpactDirt_30mmHE";
			default_mat = "BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class B_35mm_AA: BulletBase {
		explosive = 0.4;
		CraterEffects = "30mmSmoke";
		explosionEffects = "30mmExplode";
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_30mmHE";
			hitConcrete = "BCImpactConcrete_30mmHE";
			hitGroundSoft = "BCImpactDirt_30mmHE";
			hitGroundHard = "BCImpactDirt_30mmHE";
			default_mat = "BCImpactDirt_30mmHE";
			Hit_Foliage_green = "BCImpactDirt_30mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_30mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_30mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_30mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_30mmHE";
		};
	};
	class Sh_120mm_HE: ShellBase {
		explosive = 0.1;
		class HitEffects {
			hitVirtual = "ImpactMetalSabotBig";
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "BCImpactConcrete_120mmHE";
			hitConcrete = "BCImpactConcrete_120mmHE";
			hitGroundSoft = "BCImpactDirt_120mmHE";
			hitGroundHard = "BCImpactDirt_120mmHE";
			default_mat = "BCImpactDirt_120mmHE";
			Hit_Foliage_green = "BCImpactDirt_120mmHE";
			Hit_Foliage_Dead = "BCImpactDirt_120mmHE";
			Hit_Foliage_Green_big = "BCImpactDirt_120mmHE";
			Hit_Foliage_Palm = "BCImpactDirt_120mmHE";
			Hit_Foliage_Pine = "BCImpactDirt_120mmHE";
		};
	};
};
