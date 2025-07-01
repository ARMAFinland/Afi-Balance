class CfgAmmo {
	class Sh_82mm_AMOS;
	class Sh_155mm_AMOS;
	
	class rhs_ammo_3vo18: Sh_82mm_AMOS {
		hit = _mortar_hit_;
		indirectHit = _mortar_indirectHit_;
		indirectHitRange = _mortar_indirectRange_;
		//ACE3 frags
		_ace_frags_mortar_
	};

	class rhs_ammo_of462: Sh_155mm_AMOS {
		hit = _arty_105_hit_; // Original 150
		indirectHit = _arty_105_indirectHit_; // Original 105
		indirectHitRange = _arty_105_indirectRange_; // Original 28
		//ACE3 frags
		_ace_frags_artillery_105_
	};

	class rhs_ammo_3of56: rhs_ammo_of462 {
		hit = 120; // Original 160
		indirectHit = 105; // Original 50
		indirectHitRange = 28; // Original 30
	};

	class rhs_ammo_3WOF27: Sh_155mm_AMOS {
		hit = _arty_155_hit_;
		indirectHit = _arty_155_indirectHit_;
		indirectHitRange = _arty_155_indirectRange_;
		//ACE3 frags
		_ace_frags_artillery_155_
	};

	//same as rhs_ammo_3WOF27
	// class rhs_ammo_53OF546: rhs_ammo_3WOF27 {
	// };
};
