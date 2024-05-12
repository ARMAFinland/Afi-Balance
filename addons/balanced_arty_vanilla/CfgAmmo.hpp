class CfgAmmo {
	class ShellBase;

	class Sh_155mm_AMOS: ShellBase {
		hit = 300;
		indirectHit = 120;
		indirectHitRange = 20;
		// //ACE3 frags
		// ace_frag_enabled = 1;
		// ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_medium","ACE_frag_small"};
		// ace_frag_metal = 2700;
		// ace_frag_charge = 400;
		// ace_frag_gurney_c = 2440;
		// ace_frag_gurney_k = "1/2";
		// ace_frag_skip = 0;
		// ace_frag_force = 1;
	};

	class Sh_82mm_AMOS: Sh_155mm_AMOS {
		hit = 25;
		indirectHit = 25;
		indirectHitRange = 7;
		//ACE3 frags
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_medium","ACE_frag_small"};
		ace_frag_metal = 2700;
		ace_frag_charge = 400;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
};

//getNumber(configFile >> "CfgAmmo" >> "Sh_155mm_AMOS" >> "hit");
//getNumber(configFile >> "CfgAmmo" >> "shellbase" >> "hit");