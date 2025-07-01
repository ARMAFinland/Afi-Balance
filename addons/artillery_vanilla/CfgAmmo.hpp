class CfgAmmo {
	class ShellBase;
	class SubmunitionBase;

	class Sh_155mm_AMOS: ShellBase { // ["Default","ShellCore","ShellBase","Sh_155mm_AMOS"]
		hit = _arty_155_hit_;
		indirectHit = _arty_155_indirectHit_;
		indirectHitRange = _arty_155_indirectRange_;
		//ACE3 frags
		_ace_frags_artillery_155_
	};

	class Sh_82mm_AMOS: Sh_155mm_AMOS { // ["Default","ShellCore","ShellBase","Sh_155mm_AMOS","Sh_82mm_AMOS"]
		hit = _mortar_hit_;
		indirectHit = _mortar_indirectHit_;
		indirectHitRange = _mortar_indirectRange_;
		//ACE3 frags
		_ace_frags_mortar_
	};

	class Sh_82mm_AMOS_guided: SubmunitionBase { // ["Default","SubmunitionCore","SubmunitionBase","Sh_82mm_AMOS_guided"]
		hit = _mortar_hit_;
		indirectHit = _mortar_indirectHit_;
		indirectHitRange = _mortar_indirectRange_;
		//ACE3 frags
		//_ace_frags_mortar_
	};

	class Sh_82mm_AMOS_LG: Sh_82mm_AMOS_guided { // ["Default","SubmunitionCore","SubmunitionBase","Sh_82mm_AMOS_guided","Sh_82mm_AMOS_LG"]
		hit = _mortar_hit_;
		indirectHit = _mortar_indirectHit_;
		indirectHitRange = _mortar_indirectRange_;
		//ACE3 frags
		//_ace_frags_mortar_
	};
};

//getNumber(configFile >> "CfgAmmo" >> "Sh_155mm_AMOS" >> "hit");
//getNumber(configFile >> "CfgAmmo" >> "shellbase" >> "hit");


	// 	hit = 25;
	// 	indirectHit = 25;
	// 	indirectHitRange = 7;
	// 	//ACE3 frags
	// 		ace_frag_enabled = 1;
	// 		ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_medium","ACE_frag_small"};
	// 		ace_frag_metal = 2700;
	// 		ace_frag_charge = 400;
	// 		ace_frag_gurney_c = 2440;
	// 		ace_frag_gurney_k = "1/2";
	// 		ace_frag_skip = 0;
	// 		ace_frag_force = 1;
	// };
