class CfgAmmo {
	class PipeBombCore;
	class PipeBombBase : PipeBombCore {
		//GVAR(ringtones)[] = {{"z\ace\addons\explosives\Data\Audio\Cellphone_Ring.wss",0.75}};
		GVAR(ringtones)[] = {{"\x\afibalance\addons\ied_alternative\sound\ringtone_1.wss", 3.5}, {"\x\afibalance\addons\ied_alternative\sound\ringtone_2.wss", 3.7}, {"\x\afibalance\addons\ied_alternative\sound\ringtone_3.wss", 1.7},{"\x\afibalance\addons\ied_alternative\sound\ringtone_4.wss", 2.1}, {"\x\afibalance\addons\ied_alternative\sound\ringtone_5.wss", 3.8}, {"\x\afibalance\addons\ied_alternative\sound\ringtone_6.wss", 3.0}};
	};
	class IEDUrbanBig_Remote_Ammo: PipeBombBase {
		hit = 500; // default 2000
		indirectHit = 500; // default 2000
		indirectHitRange = 5; // default 2000
		//triggerWhenDestroyed = 1; // default 1
		ACE_explodeOnDefuse = 0.025; // default 0
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
		ACE_explodeOnDefuse = 0.025; // default 0
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
		ACE_explodeOnDefuse = 0.025; // default 0
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
		ACE_explodeOnDefuse = 0.025; // default 0
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
