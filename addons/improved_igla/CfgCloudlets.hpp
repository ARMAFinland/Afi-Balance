class CfgCloudlets {
	class Default;
	class afi_stinger_effect: Default {
		interval = "0.00025";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		angleVar = 1;
		particleFSLoop = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 2.225;
		volume = 1.75;
		rubbing = 0.05;
		size[] = {1,3};
		color[] = {{ 0.5,0.5,0.5,0.75},{ 0.75,0.75,0.75,0.5 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.005;
		randomDirectionIntensity = 0.005;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 5;
		positionVar[] = {0.25,0.25,0.25};
		MoveVelocityVar[] = {0.005,0.005,0.005};
		MoveVelocityVarConst[] = {0.05,0.05,0.05};
		rotationVelocityVar = 5;
		sizeVar = 1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		onSurface = 1;
		surfaceOffset = 0.1;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
	};
};

class afi_stinger_effect {
	class Light1 {
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.1;
		interval = 1;
		lifeTime = 1;
	};
	
	class afi_stinger_effect {
		simulation = "particles";
		type = "afi_stinger_effect";
	};
};