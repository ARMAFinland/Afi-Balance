class CfgAmmo {
	class UK3CB_Blowpipe_missile;
	class GVAR(blowpipe_missile): UK3CB_Blowpipe_missile {
		ace_frag_skip = 1;
		effectsMissile = QGVAR(effect_fired);
		indirectHitRange = 5;
	};

	class rhs_ammo_9k38;
	class UK3CB_AMMO_9M311M1: rhs_ammo_9k38 {
		effectsMissile = QGVAR(effect_fired);
	};
};