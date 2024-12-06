
#include "script_component.hpp"
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main","A3_Data_F_ParticleEffects","A3_Weapons_F_Exp","A3_Weapons_F","A3_Weapons_F_Enoch","A3_Data_F", "ace_hearing", "ace_advanced_fatigue"};
		author[] = {};
		VERSION_CONFIG;
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"

class CfgCloudlets {
    class Default;
	class ImpactSuppressEffectBullet: Default {
		beforeDestroyScript = QPATHTOF(suppression\impactBullet.sqf); 
		color[] = {{1,1,1,0},{1,1,1,0}};
		colorVar[] = {0,0,0,0};
		interval = 1;
		lifeTime = 0.05;
		particleFSIndex = 1;
		particleFSLoop = 0;
		particleFSNtieth = 16;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		rubbing = 0.1;
		size[] = {0,0};
		timerPeriod = 1;
		volume = 7.9;
		weight = 10;
	};
	
	class ImpactSuppressEffectBullet50cal: ImpactSuppressEffectBullet {
		beforeDestroyScript = QPATHTOF(suppression\impactBullet50cal.sqf); 
	};
	
	class ImpactSuppressEffectKinetic30mm: ImpactSuppressEffectBullet {
		beforeDestroyScript = QPATHTOF(suppression\impactBullet30mm.sqf);
	};
	
	class ImpactSuppressEffectKinetic120mm: ImpactSuppressEffectBullet {
		beforeDestroyScript = QPATHTOF(suppression\impactBullet120mm.sqf);
	};
	
	class ExploAmmoExplosionSuppressEffect: Default {
		beforeDestroyScript = QPATHTOF(suppression\ExploAmmoExplosion.sqf);
		color[] = {{1,1,1,0},{1,1,1,0}};
		interval = 1;
		lifeTime = 0.01;
		particleFSIndex = 1;
		particleFSLoop = 0;
		particleFSNtieth = 16;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		rubbing = 0.1;
		timerPeriod = 0.05;
		volume = 7.9;
		weight = 10;
	};

	class GrenadeExplosionSuppressEffect: ExploAmmoExplosionSuppressEffect {
		beforeDestroyScript = QPATHTOF(suppression\GrenadeExplosion.sqf);
	};

	class M136_ExplodeSuppressEffect: ExploAmmoExplosionSuppressEffect {
		beforeDestroyScript = QPATHTOF(suppression\M136_Explode.sqf);
	};

	class ATMissileExplosionSuppressEffect: ExploAmmoExplosionSuppressEffect {
		beforeDestroyScript = QPATHTOF(suppression\ATMissileExplosion.sqf);
	};

	class ATRocketExplosionSuppressEffect: ExploAmmoExplosionSuppressEffect {
		beforeDestroyScript = QPATHTOF(suppression\ATRocketExplosion.sqf);
	};

	class 80mm_ExplodeSuppressEffect: ExploAmmoExplosionSuppressEffect {
		beforeDestroyScript = QPATHTOF(suppression\80mm_Explode.sqf);
	};

	class HEShellExplosionSuppressEffect: ExploAmmoExplosionSuppressEffect {
		beforeDestroyScript = QPATHTOF(suppression\HEShellExplosion.sqf);
	};

	class 155mm_ExplodeSuppressEffect: ExploAmmoExplosionSuppressEffect {
		beforeDestroyScript = QPATHTOF(suppression\155mm_Explode.sqf);
	};
};

// bc

class SuppressEffectBase {
	simulation = "particles";
	position[] = {0,0,0};
	intensity = 1;
	interval = 1;
	lifeTime = 1;
};

class effect {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(pe);
	};
};

class ImpactMetal_HJ { //["afi_impact","afi_immersion"]
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class BCImpactConcrete { //["afi_impact","afi_immersion"]
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class BCImpactEffectsSmall { //["afi_impact","afi_immersion"]
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class BCImpactEffectsHardGround { // ["afi_impact","afi_immersion"]
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class BlastcoreImpactEffectsBlood {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactMetalSabotBig {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectKinetic30mm);
	};
};

class BCImpactConcrete_50cal {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet50cal);
	};
};

class BCImpactDirt_50cal {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet50cal);
	};
};

class BCImpactConcrete_20mm {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectKinetic30mm);
	};
};

class BCImpactDirt_20mm {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectKinetic30mm);
	};
};

class BCImpactConcrete_30mm {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectKinetic30mm);
	};
};

class BCImpactDirt_30mm {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectKinetic30mm);
	};
};

class BCImpactConcrete_120mm {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectKinetic120mm);
	};
};

class BCImpactDirt_120mm {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectKinetic120mm);
	};
};

//TODO: Find if these are usefull???????
// class BCImpactConcrete_30mmHE {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

// class BCImpactDirt_30mmHE {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

// class BCImpactConcrete_120mmHE {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

// class BCImpactDirt_120mmHE {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };


class ImpactMetal {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactConcrete {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};


//TODO: Find if these are usefull???????
// class ImpactLeavesGreen {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

// class ImpactLeavesDead {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

// class ImpactLeavesGreenBig {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

// class ImpactLeavesPalm {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

// class ImpactLeavesPine {
// 	class SuppressEffect : SuppressEffectBase {
// 		type = QUOTE(ImpactSuppressEffectBullet);
// 	};
// };

class ImpactGlass {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactGlassThin {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactWood {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactPlaster {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactPlastic {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactRubber {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactTyre {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactEffectsBlood {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactEffectsSmall {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactEffectsHardGround {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactBanana {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactMetalSabotSmall {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactConcreteSabotSmall {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactEffectsGroundSabot {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ImpactEffectsWater {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ImpactSuppressEffectBullet);
	};
};

class ExploAmmoExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ExploAmmoExplosionSuppressEffect);
	};
};

class 30mmExplode {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ExploAmmoExplosionSuppressEffect);
	};
};

class GrenadeExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(GrenadeExplosionSuppressEffect);
	};
};

class M136_Explode {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(M136_ExplodeSuppressEffect);
	};
};

class ATMissileExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ATMissileExplosionSuppressEffect);
	};
};

class ATRocketExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ATRocketExplosionSuppressEffect);
	};
};

class 80mm_Explode {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(80mm_ExplodeSuppressEffect);
	};
};

class MortarExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(80mm_ExplodeSuppressEffect);
	};
};

class HEShellExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(HEShellExplosionSuppressEffect);
	};
};

class 155mm_Explode {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(155mm_ExplodeSuppressEffect);
	};
};

class BombExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(155mm_ExplodeSuppressEffect);
	};
};

class RHS_HeavyBombExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(155mm_ExplodeSuppressEffect);
	};
};

class HERocketExplosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ATRocketExplosionSuppressEffect);
	};
};

class RHS_FAE_Explosion {
	class SuppressEffect : SuppressEffectBase {
		type = QUOTE(ATRocketExplosionSuppressEffect);
	};
};