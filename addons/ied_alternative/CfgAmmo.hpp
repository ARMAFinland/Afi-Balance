class CfgAmmo {
	class PipeBombBase;
	class IEDUrbanBig_Remote_Ammo: PipeBombBase {
		hit = 500; // default 2000
		indirectHit = 500; // default 2000
		indirectHitRange = 5; // default 2000
		//triggerWhenDestroyed = 1; // default 1
		ACE_explodeOnDefuse = 0.25; // default 0
	};

	class GVAR(UrbanBig_Pressure_Ammo): IEDUrbanBig_Remote_Ammo {
		ace_explosives_magazine = QGVAR(UrbanBig_Pressure_Mag);
	};
	// class ACE_IEDUrbanBig_Command_Ammo: IEDUrbanBig_Remote_Ammo {
	// 	mineTrigger = "RemoteTrigger";
	// };
	// class ACE_IEDUrbanBig_Range_Ammo: IEDUrbanBig_Remote_Ammo {
	// 	mineTrigger = "RangeTriggerIEDBig";
	// };

	class IEDUrbanSmall_Remote_Ammo: PipeBombBase {
		hit = 3; // default 1000
		indirectHit = 3; // default 1000
		indirectHitRange = 5; // default 3
		//triggerWhenDestroyed = 1; // default 1
		ACE_explodeOnDefuse = 0.25; // default 0
	};

	class GVAR(UrbanSmall_Pressure_Ammo): IEDUrbanSmall_Remote_Ammo {
		ace_explosives_magazine = QGVAR(UrbanSmall_Pressure_Mag);
	};
	// class ACE_ACE_IEDUrbanSmall_Command_Ammo: IEDUrbanSmall_Remote_Ammo {
	// 	mineTrigger = "RemoteTrigger";
	// };
	// class ACE_IEDUrbanSmall_Range_Ammo: IEDUrbanSmall_Remote_Ammo {
	// 	mineTrigger = "RangeTriggerIEDSmall";
	// };

	class IEDLandBig_Remote_Ammo: PipeBombBase {
		hit = 500; // default 2000
		indirectHit = 500; // default 2000
		indirectHitRange = 5; // default 5
		//triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25; // default 0
	};

	class GVAR(LandBig_Pressure_Ammo): IEDLandBig_Remote_Ammo {
		ace_explosives_magazine = QGVAR(LandBig_Pressure_Mag);
	};
	// class ACE_IEDLandBig_Command_Ammo: IEDLandBig_Remote_Ammo {
	// 	mineTrigger = "RemoteTrigger";
	// };
	// class ACE_IEDLandBig_Range_Ammo: IEDLandBig_Remote_Ammo {
	// 	mineTrigger = "RangeTriggerIEDSmall";
	// };

	class IEDLandSmall_Remote_Ammo: PipeBombBase {
		hit = 3; // default 1000
		indirectHit = 3; // default 1000
		indirectHitRange = 5; // default 3
		//triggerWhenDestroyed = 1; // default 1
		ACE_explodeOnDefuse = 0.25; // default 0
	};
	
	class GVAR(LandSmall_Pressure_Ammo): IEDLandSmall_Remote_Ammo {
		ace_explosives_magazine = QGVAR(LandSmall_Pressure_Mag);
	};
	// class ACE_IEDLandSmall_Command_Ammo: IEDLandSmall_Remote_Ammo {
	// 	mineTrigger = "RemoteTrigger";
	// };
	// class ACE_IEDLandSmall_Range_Ammo: IEDLandSmall_Remote_Ammo {
	// 	mineTrigger = "RangeTriggerIEDSmall";
	// };
};
