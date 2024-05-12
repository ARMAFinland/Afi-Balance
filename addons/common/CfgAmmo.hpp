class CfgAmmo {
	class GVAR(missile_base) {
		ace_frag_skip = 1;
		cmImmunity = 0.8;
		effectsMissileInit = "RocketBackEffectsRPG";
		hit = 40;
		indirecthit = 60;
		indirecthitrange = 8;
		maxSpeed = 750;
		missileKeepLockedCone = 75;
		missileLockCone = 4;
		missileLockMaxDistance = 4800;
		missileLockMaxSpeed = 333;
		missileLockMinDistance = 100;
		thrust = 300;
		thrustTime = 5.1;
		tracklead = 0.9;
		trackoversteer = 0.95;
		class Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent {
						class AirTarget {
							maxRange = 4800;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget {
							maxRange = 1000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						groundNoiseDistanceCoef = 0.2; // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 50; // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						maxSpeedThreshold = -1; // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						maxTrackableATL = 1e+10; //Maximum altitude above terrain level that can be detected.  1e+10 == no maximum altitude
						maxTrackableSpeed = 250; //Maximum speed (in m/s) of the target that can be detected. 1e+10 == no maximum speed
						minSpeedThreshold = 0; // target speed in m/s above which the target will start to become visible
						minTrackableATL = -1e+10; //Minimum altitude above terrain level that can be detected. 1e+10 == no minium altitude
						minTrackableSpeed = -1e+10; //Minimum speed (in m/s) of the target that can be detected.  1e+10 == no minium speed
						typeRecognitionDistance = -1;
					};
				};
			};
		};
	};
};
