#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
	class ADDON {
		name = COMPONENT_NAME;
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"afibalance_main","A3_Data_F", "A3_Weapons_F", "A3_Data_F_ParticleEffects", "A3_Soft_F", "A3_Soft_F_Quadbike_01", "A3_Soft_F_Gamma", "A3_Soft_F_Gamma_Truck_01", "A3_Soft_F_Gamma_Truck_02"};
		authors[] = {"Tuntematon"};
		VERSION_CONFIG;
		//skipWhenMissingDependencies = 1;
	};
};

// configs go here
#include "CfgEventHandlers.hpp"
#include "CfgAmmo.hpp"
#include "CfgCloudlets.hpp"
#include "CfgLights.hpp"


class bullet_Concrete {
	class Trail1 {
		simulation = "particles";
		type = "ConcreteBulletImpact1";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2 {
		simulation = "particles";
		type = "ConcreteBulletImpact2";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class SmokeTrail_BlastcoreBulletRound_Ground {
	class Trail2 {
		simulation = "particles";
		type = "Blastcore_smoke_BulletRound2_Ground";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class SmokeTrail_BlastcoreBulletRound_Ground2 {
	class Trail2 {
		simulation = "particles";
		type = "Blastcore_smoke_BulletRound2_Ground2";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class SmokeTrail_BlastcoreHeavyBulletRound_Ground {
	class Trail2 {
		simulation = "particles";
		type = "Blastcore_smoke_BulletRound2_Ground";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class SmokeTrail_BlastcoreHeavyBulletRound_Ground2 {
	class Trail2 {
		simulation = "particles";
		type = "Blastcore_smoke_HeavyBulletRound2_Ground2";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class Smoke_Trail_TankRound_EmitterLink {
	class Link {
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class Smoke_Trail_TankRound_EmitterLink_02 {
	class Link {
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_TankRound_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class Smoke_Trail_TankRound_EmitterLink_Small {
	class Link {
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class Smoke_Trail_TankRound_EmitterLink_BaseSmoke {
	class Link {
		simulation = "particles";
		type = "Blastcore_BaseSmoke_TankRound";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2 {
		simulation = "particles";
		type = "Blastcore_BaseSmoke_TankRound2";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class HERound_Emitter {
	class Trail2 {
		simulation = "particles";
		type = "Heround_smoke_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3 {
		simulation = "particles";
		type = "Heround_smoke_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

//
	
class ImpactMetal_HJ {
	class SparksLight {
		simulation = "light";
		type = "sparksLight_HJ";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks0_HJ {
		simulation = "particles";
		type = "ImpactSparks0_HJ";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1.5;
	};
	class ImpactSmoke2 {
		simulation = "particles";
		type = "ImpactSmoke2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2Med {
		simulation = "particles";
		type = "ImpactSmokeMed2";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2Low {
		simulation = "particles";
		type = "ImpactSmokeLow2";
		position[] = {0,0,0};
		qualityLevel = 0;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class ImpactMetal {
	class SparksLight {
		simulation = "light";
		type = "SparksLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks0 {
		simulation = "particles";
		type = "ImpactSparks0";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks2 {
		simulation = "particles";
		type = "ImpactSparks2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks2Med {
		simulation = "particles";
		type = "ImpactSparksMed2";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2 {
		simulation = "particles";
		type = "ImpactSmoke2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2Med {
		simulation = "particles";
		type = "ImpactSmokeMed2";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2Low {
		simulation = "particles";
		type = "ImpactSmokeLow2";
		position[] = {0,0,0};
		qualityLevel = 0;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class BCImpactConcrete {
	class Impact1 {
		simulation = "particles";
		type = "ConcreteBulletImpact";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "ConcreteBulletImpact2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "ConcreteBulletImpact3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactEffectsSmall {
	class Stones {
		simulation = "particles";
		type = "DirtBulletImpact3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_BulletRound_Ground {
		simulation = "particles";
		type = "Smoke_Trail_BulletRound_Ground";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke_Trail_BulletRound_Ground2 {
		simulation = "particles";
		type = "Smoke_Trail_BulletRound_Ground2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class BCImpactEffectsHardGround {
	class Impact1 {
		simulation = "particles";
		type = "DirtBulletImpact1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "DirtBulletImpact2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "DirtBulletImpact3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class ImpactLeaves {
	class LeavesFall {
		simulation = "particles";
		type = "LeavesFall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class LeavesFall2 {
		simulation = "particles";
		type = "LeavesFall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class LeavesFall3 {
		simulation = "particles";
		type = "LeavesFallMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};

class ImpactWood {
	class WoodChippings1 {
		simulation = "particles";
		type = "WoodChippings1";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings1Med {
		simulation = "particles";
		type = "WoodChippingsMed1";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings2 {
		simulation = "particles";
		type = "WoodChippings2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings2Med {
		simulation = "particles";
		type = "WoodChippingsMed2";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings3 {
		simulation = "particles";
		type = "WoodChippings3";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings3Med {
		simulation = "particles";
		type = "WoodChippingsMed3";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings4 {
		simulation = "particles";
		type = "WoodChippings4";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class WoodChippings4Med {
		simulation = "particles";
		type = "WoodChippingsMed4";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactDust {
		simulation = "particles";
		type = "ImpactDustWood";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactDustMed {
		simulation = "particles";
		type = "ImpactDustWoodMed";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactDustLow {
		simulation = "particles";
		type = "ImpactDustWoodLow";
		position[] = {0,0,0};
		qualityLevel = 0;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class BlastcoreImpactEffectsBlood {
	class BlastcoreBlood {
		simulation = "particles";
		type = "BlastcoreBlood";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class ImpactLeavesGreen {
	class LeavesFall {
		simulation = "particles";
		type = "LeavesFallGreen";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class LeavesFall2 {
		simulation = "particles";
		type = "LeavesFallGreen";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class LeavesFall3 {
		simulation = "particles";
		type = "LeavesFallGreenMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};

class ImpactLeavesDead {
	class LeavesFall {
		simulation = "particles";
		type = "LeavesFallDead";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class LeavesFall2 {
		simulation = "particles";
		type = "LeavesFallDead";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class LeavesFall3 {
		simulation = "particles";
		type = "LeavesFallDeadMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};

class ImpactLeavesGreenBig {
	class LeavesFall {
		simulation = "particles";
		type = "LeavesFallGreenBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class LeavesFall2 {
		simulation = "particles";
		type = "LeavesFallGreenBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class LeavesFall3 {
		simulation = "particles";
		type = "LeavesFallGreenBigMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};

class ImpactLeavesPalm {
	class LeavesFall {
		simulation = "particles";
		type = "LeavesFallPalm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class LeavesFall2 {
		simulation = "particles";
		type = "LeavesFallPalm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class LeavesFall3 {
		simulation = "particles";
		type = "LeavesFallPalmMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};

class ImpactLeavesPine {
	class LeavesFall {
		simulation = "particles";
		type = "LeavesFallPine";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class LeavesFall2 {
		simulation = "particles";
		type = "LeavesFallPine";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
	class LeavesFall3 {
		simulation = "particles";
		type = "LeavesFallPineMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 0;
	};
};

class ImpactMetalSabotBig {
	class Light1 {
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class SparksLight {
		simulation = "light";
		type = "SparksLightSabot";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Impact {
		simulation = "particles";
		type = "25mm_Explode_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSparks1 {
		simulation = "particles";
		type = "ImpactSparksSabot1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSparks2 {
		simulation = "particles";
		type = "ImpactSparksSabot2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSmoke2 {
		simulation = "particles";
		type = "ImpactSmokeSabot2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactConcrete_50cal {
	class Impact1 {
		simulation = "particles";
		type = "ConcreteBulletImpact1_50cal";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "ConcreteBulletImpact2_50cal";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "ConcreteBulletImpact3_50cal";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactDirt_50cal {
	class Smoke_Trail_HeavyBulletRound_Ground {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2 {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class ImpactMetalSabotSmall {
	class Light1 {
		simulation = "light";
		type = "SparksLightSabot";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ImpactSparks1 {
		simulation = "particles";
		type = "ImpactSparksSabot1Small";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSparks2 {
		simulation = "particles";
		type = "ImpactSparksSabot2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSmoke2 {
		simulation = "particles";
		type = "ImpactSmokeSabot2Small";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactConcrete_20mm {
	class LightExp {
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact {
		simulation = "particles";
		type = "25mm_Explode_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact1 {
		simulation = "particles";
		type = "ConcreteBulletImpact1_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "ConcreteBulletImpact2_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "ConcreteBulletImpact3_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact4 {
		simulation = "particles";
		type = "ConcreteBulletImpact4_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactDirt_20mm {
	class LightExp {
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mm_Explode {
		simulation = "particles";
		type = "25mm_Explode";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact1 {
		simulation = "particles";
		type = "DirtBulletImpact1_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "DirtBulletImpact2_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "DirtBulletImpact3_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact4 {
		simulation = "particles";
		type = "DirtBulletImpact4_20mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_HeavyBulletRound_Ground {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2 {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class BCImpactConcrete_30mm {
	class Impact {
		simulation = "particles";
		type = "25mm_Explode_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact1 {
		simulation = "particles";
		type = "ConcreteBulletImpact1_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "ConcreteBulletImpact2_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "ConcreteBulletImpact3_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact4 {
		simulation = "particles";
		type = "ConcreteBulletImpact4_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactDirt_30mm {
	class Impact1 {
		simulation = "particles";
		type = "DirtBulletImpact1_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "DirtBulletImpact2_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "DirtBulletImpact3_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact4 {
		simulation = "particles";
		type = "DirtBulletImpact4_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_HeavyBulletRound_Ground {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2 {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class BCImpactConcrete_120mm {
	class ConcreteBulletImpact1_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact1_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact2_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact2_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact3_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact3_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact4_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact4_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact5_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact5_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactDirt_120mm {
	class Smoke_Trail_TankRound_Emitter {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter2 {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter3 {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter4 {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class DirtBulletImpact5_120mm {
		simulation = "particles";
		type = "DirtBulletImpact5_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class dirtbig {
		simulation = "particles";
		type = "dirtbig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		smokeGenMinDist = 1;
		smokeGenMaxDist = 1200;
		smokeSizeCoef = 0;
		smokeIntervalCoef = 0;
	};
};

class BCImpactConcrete_30mmHE {
	class LightExp {
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mm_Explode {
		simulation = "particles";
		type = "25mm_Explode";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 30mm_Sparks {
		simulation = "particles";
		type = "30mmSparks";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact1 {
		simulation = "particles";
		type = "ConcreteBulletImpact1_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "ConcreteBulletImpact2_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "ConcreteBulletImpact3_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact4 {
		simulation = "particles";
		type = "ConcreteBulletImpact4_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mmSmoke3 {
		simulation = "particles";
		type = "25mm_Smoke_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactDirt_30mmHE {
	class LightExp {
		simulation = "light";
		type = "ExploLightFastSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mm_Explode {
		simulation = "particles";
		type = "25mm_Explode";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 30mm_Sparks {
		simulation = "particles";
		type = "30mmSparks";
		position[] = {0,0,0};
		intensity = 100;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mmSmoke1 {
		simulation = "particles";
		type = "25mm_Smoke_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mmSmoke2 {
		simulation = "particles";
		type = "25mm_Smoke_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mmSmoke3 {
		simulation = "particles";
		type = "25mm_Smoke_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact1 {
		simulation = "particles";
		type = "DirtBulletImpact1_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact2 {
		simulation = "particles";
		type = "DirtBulletImpact2_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact3 {
		simulation = "particles";
		type = "DirtBulletImpact3_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Impact4 {
		simulation = "particles";
		type = "DirtBulletImpact4_30mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_HeavyBulletRound_Ground {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke_Trail_HeavyBulletRound_Ground2 {
		simulation = "particles";
		type = "Smoke_Trail_HeavyBulletRound_Ground2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class BCImpactConcrete_120mmHE {
	class LightExp {
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.15;
	};
	class LightExp2 {
		simulation = "light";
		type = "ExploLightFast_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class HERound_Explosion_01 {
		simulation = "particles";
		type = "HERound_Explosion_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class HERound_Explosion_02 {
		simulation = "particles";
		type = "HERound_Explosion_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class ConcreteBulletImpact1_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact1_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact2_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact2_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact3_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact3_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact4_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact4_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ConcreteBulletImpact5_120mm {
		simulation = "particles";
		type = "ConcreteBulletImpact5_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class BCImpactDirt_120mmHE {
	class LightExp {
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.15;
	};
	class LightExp2 {
		simulation = "light";
		type = "ExploLightFast_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter2 {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter3 {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter4 {
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class DirtBulletImpact5_120mm {
		simulation = "particles";
		type = "DirtBulletImpact5_120mm";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class HERound_Explosion_01 {
		simulation = "particles";
		type = "HERound_Explosion_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class HERound_Explosion_02 {
		simulation = "particles";
		type = "HERound_Explosion_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Sparks_med {
		simulation = "particles";
		type = "sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class dirtbig {
		simulation = "particles";
		type = "dirtbig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		smokeGenMinDist = 1;
		smokeGenMaxDist = 1200;
		smokeSizeCoef = 0;
		smokeIntervalCoef = 0;
	};
};

class 30mmExplode {
	class LightExp {
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mm_Explode {
		simulation = "particles";
		type = "25mm_Explode";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 30mm_Sparks {
		simulation = "particles";
		type = "30mmSparks";
		position[] = {0,0,0};
		intensity = 100;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mmSmoke1 {
		simulation = "particles";
		type = "25mm_Smoke_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mmSmoke2 {
		simulation = "particles";
		type = "25mm_Smoke_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 25mmSmoke3 {
		simulation = "particles";
		type = "25mm_Smoke_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

class Blastcore_Smoke_TankRound_01_Link {
	class Link {
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2 {
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class Blastcore_TankRound_SmokeTrail {
	class Link {
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_TankRound_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2 {
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_TankRound_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

class 30mmSmoke {};

class Blastcore_Blood_01 {
	class Link {
		simulation = "particles";
		type = "BlastcoreBlood_Impact_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
