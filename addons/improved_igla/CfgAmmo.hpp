class CfgAmmo {
	class M_Titan_AA;	
	class GVAR(9k32_missile_old): M_Titan_AA {
		cmImmunity = 0.80;
		effectsMissile = QGVAR(effect_fired);
		effectsMissileInit = "RocketBackEffectsRPG";
		hit = 40;
		indirectHit = 60;
		indirectHitRange = 8;
		maxSpeed = 750;
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		thrust = 325;
		thrustTime = 4.9;
		timeToLive = 15;
		tracklead = 1;
		trackoversteer = 1;
	};

	class rhs_ammo_9k32;
	calss EGVAR(common,missile_base);

	class GVAR(missile_base): EGVAR(common,missile_base) {
		effectsMissile = QGVAR(effect_fired);
	};

	class GVAR(missile_base): rhs_ammo_9k32 {

	};

	class GVAR(9k32_missile): GVAR(missile_base) {

	};

	// class AfiBalance_9k32_missile_igla: GVAR(missile_base) {
	// 	cmimmunity = 0.9;
	// 	hit = 40;
	// 	indirecthit = 31;
	// 	indirecthitrange = 5;
	// 	maxspeed = 800;
	// 	missileKeepLockedCone = 70;
	// 	missileLockCone = 12;
	// 	missileLockMaxDistance = 4800;
	// 	missileLockMaxSpeed = 333;
	// 	missileLockMinDistance = 300;
	// 	thrust = 220;
	// 	thrusttime = 5.5;
	// 	tracklead = 0.56;
	// 	trackoversteer = 0.95;
	// 	class Components {
	// 		class SensorsManagerComponent {
	// 			class Components {
	// 				class IRSensorComponent {
	// 					class AirTarget {
	// 						maxRange = 4800;
	// 						minRange = 500;
	// 						objectDistanceLimitCoef = -1;
	// 						viewDistanceLimitCoef = 1;
	// 					};
	// 					class GroundTarget {
	// 						maxRange = 1000;
	// 						minRange = 500;
	// 						objectDistanceLimitCoef = -1;
	// 						viewDistanceLimitCoef = 1;
	// 					};
	// 					groundNoiseDistanceCoef = 0.02;
	// 					maxGroundNoiseDistance = 40;
	// 					maxSpeedThreshold = -1;
	// 					maxTrackableATL = 3900;
	// 					maxTrackableSpeed = 333;
	// 					minSpeedThreshold = 0;
	// 					minTrackableATL = 20;
	// 					minTrackableSpeed = 0;
	// 					typeRecognitionDistance = -1;
	// 				};
	// 			};
	// 		};
	// 	};
	// };

	// class AfiBalance_9k32_missile_FIM92: GVAR(missile_base) {
	// 	cmImmunity = 0.95;
	// 	hit = 60;
	// 	indirecthit = 55;
	// 	indirecthitrange = 8;
	// 	maxSpeed = 750;
	// 	missileKeepLockedCone = 70;
	// 	missileLockCone = 12;
	// 	missileLockMaxDistance = 6500;
	// 	missileLockMaxSpeed = 333;
	// 	missileLockMinDistance = 300;
	// 	thrust = 325;
	// 	thrustTime = 4.9;
	// 	tracklead = 0.6;
	// 	trackoversteer = 0.95;
	// 	class Components {
	// 		class SensorsManagerComponent {
	// 			class Components {
	// 				class IRSensorComponent {
	// 					class AirTarget {
	// 						maxRange = 6500;
	// 						minRange = 500;
	// 						objectDistanceLimitCoef = -1;
	// 						viewDistanceLimitCoef = 1;
	// 					};
	// 					class GroundTarget {
	// 						maxRange = 1000;
	// 						minRange = 500;
	// 						objectDistanceLimitCoef = -1;
	// 						viewDistanceLimitCoef = 1;
	// 					};
	// 					groundNoiseDistanceCoef = 0.02;
	// 					maxGroundNoiseDistance = 40;
	// 					maxSpeedThreshold = -1;
	// 					maxTrackableATL = 4000;
	// 					maxTrackableSpeed = 330;
	// 					minSpeedThreshold = 0;
	// 					minTrackableATL = 20;
	// 					minTrackableSpeed = 0;
	// 					typeRecognitionDistance = -1;
	// 				};
	// 			};
	// 		};
	// 	};
	// };
};
