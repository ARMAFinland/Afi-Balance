class CfgAmmo {
	class M_Titan_AA;	
	class AfiBalance_9k32_missile_old: M_Titan_AA {
		hit = 40;
		indirectHit = 60;
		indirectHitRange = 8;
		cmImmunity = 0.80;
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		tracklead = 1;
		trackoversteer = 1;
		thrust = 325;
		thrustTime = 4.9;
		timeToLive = 15;
		maxSpeed = 750;
		effectsMissile = "afi_stinger_effect";
		effectsMissileInit = "RocketBackEffectsRPG";
	};

	class rhs_ammo_9k32;	
	class AfiBalance_9k32_missile_base: rhs_ammo_9k32 {
		effectsMissile = "afi_stinger_effect";
		effectsMissileInit = "RocketBackEffectsRPG";
	};

	class AfiBalance_9k32_missile_afi: AfiBalance_9k32_missile_base {
		hit = 40;
		indirecthit = 60;
		indirecthitrange = 8;
		tracklead = 1;
		trackoversteer = 1;
		cmImmunity = 0.8;
		maxSpeed = 750;
		thrustTime = 4.9;
		thrust = 325;
		missileKeepLockedCone = 75;
		missileLockCone = 4;
		missileLockMaxDistance = 3500;
		missileLockMaxSpeed = 250;
		missileLockMinDistance = 100;
		class Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent {
						class AirTarget {
							maxRange = 3500;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget {
							maxRange = 2500;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						groundNoiseDistanceCoef = 0.2; // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance = 50; // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						maxSpeedThreshold = 0; // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold
						minSpeedThreshold = 0; // target speed in m/s above which the target will start to become visible
						maxTrackableATL = 1e+10; //Maximum altitude above terrain level that can be detected.  1e+10 == no maximum altitude
						maxTrackableSpeed = 250; //Maximum speed (in m/s) of the target that can be detected. 1e+10 == no maximum speed
						minTrackableATL = -1e+10; //Minimum altitude above terrain level that can be detected. 1e+10 == no minium altitude
						minTrackableSpeed = -1e+10; //Minimum speed (in m/s) of the target that can be detected.  1e+10 == no minium speed
						typeRecognitionDistance = 2000;
					};
				};
			};
		};
	};

	class AfiBalance_9k32_missile_igla: AfiBalance_9k32_missile_base {
		hit = 40;
		indirecthit = 31;
		indirecthitrange = 5;
		tracklead = 0.56;
		trackoversteer = 0.95;
		cmimmunity = 0.9;
		maxspeed = 800;
		thrusttime = 5.5;
		thrust = 220;
		missileKeepLockedCone = 70;
		missileLockCone = 12;
		missileLockMaxDistance = 4800;
		missileLockMaxSpeed = 333;
		missileLockMinDistance = 300;
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
						groundNoiseDistanceCoef = 0.02;
						maxGroundNoiseDistance = 40;
						maxSpeedThreshold = -1;
						minSpeedThreshold = 0;
						maxTrackableATL = 3900;
						maxTrackableSpeed = 333;
						minTrackableATL = 20;
						minTrackableSpeed = 0;
						typeRecognitionDistance = -1;
					};
				};
			};
		};
	};

	class AfiBalance_9k32_missile_FIM92: AfiBalance_9k32_missile_base {
		hit = 60;
		indirecthit = 55;
		indirecthitrange = 8;
		tracklead = 0.6;
		trackoversteer = 0.95;
		cmImmunity = 0.95;
		maxSpeed = 750;
		thrustTime = 4.9;
		thrust = 325;
		missileKeepLockedCone = 70;
		missileLockCone = 12;
		missileLockMaxDistance = 6500;
		missileLockMaxSpeed = 333;
		missileLockMinDistance = 300;
		class Components {
			class SensorsManagerComponent {
				class Components {
					class IRSensorComponent {
						class AirTarget {
							maxRange = 6500;
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
						groundNoiseDistanceCoef = 0.02;
						maxGroundNoiseDistance = 40;
						maxSpeedThreshold = -1;
						minSpeedThreshold = 0;
						maxTrackableATL = 4000;
						maxTrackableSpeed = 330;
						minTrackableATL = 20;
						minTrackableSpeed = 0;
						typeRecognitionDistance = -1;
					};
				};
			};
		};
	};

};
