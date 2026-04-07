/////////////////////////////////
//Basic ace frags for Artillery//
/////////////////////////////////

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


#define _big_mortar_hit_				30
#define _big_mortar_indirectHit_		30
#define _big_mortar_indirectRange_		10


#define _arty_155_hit_				300 //default 340
#define _arty_155_indirectHit_		120 //default 125
#define _arty_155_indirectRange_	20 //default 30


#define _arty_105_hit_				100 //default 110
#define _arty_105_indirectHit_		100 //default 75
#define _arty_105_indirectRange_	15 //default 21
