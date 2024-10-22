class cfgAmmo {
	class MineCore;
	class BoundingMineCore;
	class DirectionalBombCore;
	class MineBase: MineCore {
		// soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",3,1,50};
		// soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,30};
		// soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,30};
	};

	class BoundingMineBase: BoundingMineCore {
		soundTrigger[] = {QPATHTOF(Data\audio\Bounding_trigger.wss),3,1,100};
		// soundActivation[] = {"A3\Sounds_F\weapons\Mines\electron_activate_mine_1",0.56234133,1,50};
		// soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,50};
	};

	class DirectionalBombBase: DirectionalBombCore {
		// soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",3,1,50};
		// soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
		// soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,50};
	};

	class APERSMine_Range_Ammo: MineBase {
		ace_frag_charge = 100; // Default: 50
		ace_frag_metal = 150; // Default: 100
		hit = 5; // Default: 10
		indirectHit = 4; // Default: 10
		indirectHitRange = 4; // Default: 5
	};

	class APERSMineDispenser_Mine_Ammo: MineBase {
		ace_frag_charge = 100; // Default: 50
		ace_frag_metal = 150; // Default: 100
		hit = 5; // Default: 7
		indirectHit = 4; // Default: 7
		indirectHitRange = 4; // Default: 3
	};

	class APERSBoundingMine_Range_Ammo: BoundingMineBase {
		ace_frag_charge = 200; // Default: 170
		ace_frag_metal = 130; // Default: 80
		hit = 8; // Default: 20
		indirectHit = 4; // Default: 20
		indirectHitRange = 10; // Default: 20
		//mineBoundingTime = 0.25; // Default: 0.3
		mineBoundingDist = 1.2; // Default: 2
	};

	class APERSTripMine_Wire_Ammo: DirectionalBombBase {
		ace_frag_charge = 200; // Default: 185
		ace_frag_metal = 260; // Default: 210
		hit = 8; // Default: 15
		indirectHit = 5; // Default: 15
		indirectHitRange = 7; // Default: 10
	};

	// class ATMine_Range_Ammo: MineBase {
	// 	hit = 2000; // Default: 2000
	// 	indirectHit = 2000; // Default: 2000
	// 	indirectHitRange = 1; // Default: 1
	// };
};


