class CfgAmmo {
	class Sh_155mm_AMOS;
	class rhs_ammo_m1_he: Sh_155mm_AMOS {
		hit = 100; // 110
		indirectHit = 100; //75
		indirectHitRange = 15; //21
		//ACE3 frags
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_large_HD","ACE_frag_large","ACE_frag_medium_HD","ACE_frag_medium"};
		ace_frag_metal = 12790;
		ace_frag_charge = 2180;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "1/2";
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
};