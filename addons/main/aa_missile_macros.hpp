#define _missile_base_ \
		ace_frag_skip = 1; \
		cmImmunity = 0.8; \
		effectsMissile = QGVAR(effect_fired); \
		effectsMissileInit = "RocketBackEffectsRPG"; \
		hit = 40; \
		indirecthit = 60; \
		indirecthitrange = 8; \
		maxSpeed = 750; \
		missileKeepLockedCone = 75; \
		missileLockCone = 4; \
		missileLockMaxDistance = 4800; \
		missileLockMaxSpeed = 333; \
		missileLockMinDistance = 100; \
		thrust = 300; \
		thrustTime = 5.1; \
		tracklead = 0.9; \
		trackoversteer = 0.95; \
		class Components { \
			class SensorsManagerComponent { \
				class Components { \
					class IRSensorComponent { \
						class AirTarget { \
							maxRange = 4800; \
							minRange = 500; \
							objectDistanceLimitCoef = -1; \
							viewDistanceLimitCoef = 1; \
						}; \
						class GroundTarget { \
							maxRange = 1000; \
							minRange = 500; \
							objectDistanceLimitCoef = -1; \
							viewDistanceLimitCoef = 1; \
						}; \
						groundNoiseDistanceCoef = 0.2; \
						maxGroundNoiseDistance = 50; \
						maxSpeedThreshold = -1; \
						maxTrackableATL = 1e+10; \
						maxTrackableSpeed = 250; \
						minSpeedThreshold = 0; \
						minTrackableATL = -1e+10; \
						minTrackableSpeed = -1e+10;  \
						typeRecognitionDistance = -1; \
					}; \
				}; \
			}; \
		};
