class CfgAmmo {
	class Sh_82mm_AMOS;
	class Sh_155mm_AMOS;
	
	class rhs_ammo_3vo18: Sh_82mm_AMOS {
		hit = 25;
		indirectHit = 25;
		indirectHitRange = 5;
		//ACE3 frags
		ace_frag_enabled = 1;
	};

	class rhs_ammo_of462: Sh_155mm_AMOS {
		hit = 100;
		indirectHit = 100;
		indirectHitRange = 15;
		//ACE3 frags
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_large_HD","ACE_frag_large","ACE_frag_medium_HD","ACE_frag_medium"};
		ace_frag_metal = 14050;
		ace_frag_charge = 3528;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
};