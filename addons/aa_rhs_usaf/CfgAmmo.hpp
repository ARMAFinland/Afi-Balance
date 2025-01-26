class CfgAmmo {
	class M_Titan_AA;	
	class GVAR(fim92_missile_old): M_Titan_AA {
		cmImmunity = 0.80;
		effectsMissile = QGVAR(effect_fired);
		effectsMissileInit = "RocketBackEffectsRPG";
		hit = 40;
		indirectHit = 60;
		indirectHitRange = 8;
		maxSpeed = 750;
		model = "\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket.p3d";
		thrust = 325;
		thrustTime = 4.9;
		timeToLive = 15;
		tracklead = 1;
		trackoversteer = 1;
	};	

	class rhs_ammo_fim92_missile;
	class GVAR(missile_base): rhs_ammo_fim92_missile {
		_missile_base_
	};

	class GVAR(fim92_missile): GVAR(missile_base) {

	};
};
