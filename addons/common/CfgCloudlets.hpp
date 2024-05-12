class CfgCloudlets {
	class Default;
	
	class GVAR(AA_launcher_effect): Default {
		angleVar = 1;
		blockAIVisibility = 0;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
		color[] = {{0.2,0.2,0.2,0.5},{0.1,0.1,0.1,0.25},{0.5,0.5,0.5,0}};
		colorVar[] = {{ 0.5,0.5,0.5,0.75},{ 0.75,0.75,0.75,0.5 },{ 1,1,1,0 }};
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		interval = "0.0005";
		lifeTime = 15;
		lifeTimeVar = 5;
		moveVelocity[] = {0,0,0};
		MoveVelocityVar[] = {0.005,0.005,0.005};
		MoveVelocityVarConst[] = {0.05,0.05,0.05};
		onSurface = 1;
		particleFSFrameCount = 8;
		particleFSIndex = 12;
		particleFSLoop = 0;
		particleFSNtieth = 16;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		positionVar[] = {0.25,0.25,0.25};
		randomDirectionIntensity = 0.005;
		randomDirectionPeriod = 0.005;
		rotationVelocity = 1;
		rotationVelocityVar = 5;
		rubbing = 0.05;
		size[] = {1,4};
		sizeVar = 1;
		surfaceOffset = 0.1;
		volume = 1.75;
		weight = 2.225;
	};
};

class GVAR(AA_launcher_effect) {
	class Light1 {
		intensity = 0.1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "light";
		type = "RocketLight";
	};
};