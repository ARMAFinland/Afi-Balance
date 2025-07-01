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

///////////////////
//Basic ace frags//
///////////////////

// Defaults
// ace_frag_classes ["ace_frag_medium","ace_frag_medium_HD"]
// ace_frag_metal 2680
// ace_frag_charge 420
// ace_frag_gurney_c 2440
// ace_frag_gurney_k "1/2"
// ace_frag_skip 0
// ace_frag_force 0
#define _ace_frags_mortar_ \
		ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_medium","ACE_frag_small","ACE_frag_small_HD"}; \
		ace_frag_metal = 2680; \
		ace_frag_charge = 420; \
		ace_frag_gurney_c = 2440; \
		ace_frag_gurney_k = 0.5; \
		ace_frag_skip = 0; \
		ace_frag_force = 0;

// Defaults
// ace_frag_classes ["ace_frag_large","ace_frag_large","ace_frag_large_HD","ace_frag_large","ace_frag_huge","ace_frag_huge_HD","ace_frag_huge"]
// ace_frag_metal 36000
// ace_frag_charge 9979
// ace_frag_gurney_c 2440
// ace_frag_gurney_k "1/2"
// ace_frag_skip 0
// ace_frag_force 0
#define _ace_frags_artillery_155_ \
		ace_frag_classes[] = {"ace_frag_large","ace_frag_large","ace_frag_large_HD","ace_frag_large","ace_frag_huge","ace_frag_huge_HD","ace_frag_huge"}; \
		ace_frag_metal = 36000; \
		ace_frag_charge = 9979; \
		ace_frag_gurney_c = 2440; \
		ace_frag_gurney_k = 0.5; \
		ace_frag_skip = 0; \
		ace_frag_force = 0;

// OLD AFI
// ace_frag_classes ["ACE_frag_large_HD","ACE_frag_large","ACE_frag_medium_HD","ACE_frag_medium"]
// ace_frag_metal 12790
// ace_frag_charge 2180
// ace_frag_gurney_c 2440
// ace_frag_gurney_k "1/2"
// ace_frag_skip 0
// ace_frag_force 0
#define _ace_frags_artillery_105_ \
		ace_frag_classes[] = {"ACE_frag_large_HD","ACE_frag_large","ACE_frag_medium_HD","ACE_frag_medium"}; \
		ace_frag_metal = 12790; \
		ace_frag_charge = 2180; \
		ace_frag_gurney_c = 2440; \
		ace_frag_gurney_k = 0.5; \
		ace_frag_skip = 0; \
		ace_frag_force = 0;


//////////////
//Basic HITS//
//////////////

#define _mortar_hit_				25 //default 165
#define _mortar_indirectHit_		25 //default 52
#define _mortar_indirectRange_		7 //default 18


#define _arty_155_hit_				300 //default 340
#define _arty_155_indirectHit_		120 //default 125
#define _arty_155_indirectRange_	20 //default 30


#define _arty_105_hit_				100 //default 110
#define _arty_105_indirectHit_		100 //default 75
#define _arty_105_indirectRange_	15 //default 21
