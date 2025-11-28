class CfgAmmo {
	class PipeBombBase;
	class IEDUrbanBig_Remote_Ammo: PipeBombBase {
		hit = 500; // default 2000
		indirectHit = 500; // default 2000
		indirectHitRange = 5; // default 2000
		ACE_explodeOnDefuse = 0.025; // default 0
		ACE_explosives_ringtones[] = {{QPATHTOF(sound\ringtone_1.wss), 3.5}, {QPATHTOF(sound\ringtone_2.wss), 3.7}, {QPATHTOF(sound\ringtone_3.wss), 1.7},{QPATHTOF(sound\ringtone_4.wss), 2.1}, {QPATHTOF(sound\ringtone_5.wss), 3.8}, {QPATHTOF(sound\ringtone_6.wss), 3.0}};
	};

	class GVAR(UrbanBig_Pressure_Ammo): IEDUrbanBig_Remote_Ammo {
		ace_explosives_magazine = QGVAR(UrbanBig_Pressure_Mag);
	};

	class IEDUrbanSmall_Remote_Ammo: PipeBombBase {
		hit = 3; // default 1000
		indirectHit = 3; // default 1000
		indirectHitRange = 5; // default 3
		ACE_explodeOnDefuse = 0.025; // default 0
		ACE_explosives_ringtones[] = {{QPATHTOF(sound\ringtone_1.wss), 3.5}, {QPATHTOF(sound\ringtone_2.wss), 3.7}, {QPATHTOF(sound\ringtone_3.wss), 1.7},{QPATHTOF(sound\ringtone_4.wss), 2.1}, {QPATHTOF(sound\ringtone_5.wss), 3.8}, {QPATHTOF(sound\ringtone_6.wss), 3.0}};
	};

	class GVAR(UrbanSmall_Pressure_Ammo): IEDUrbanSmall_Remote_Ammo {
		ace_explosives_magazine = QGVAR(UrbanSmall_Pressure_Mag);
	};

	class IEDLandBig_Remote_Ammo: PipeBombBase {
		hit = 500; // default 2000
		indirectHit = 500; // default 2000
		indirectHitRange = 5; // default 5
		ACE_explodeOnDefuse = 0.025; // default 0
		ACE_explosives_ringtones[] = {{QPATHTOF(sound\ringtone_1.wss), 3.5}, {QPATHTOF(sound\ringtone_2.wss), 3.7}, {QPATHTOF(sound\ringtone_3.wss), 1.7},{QPATHTOF(sound\ringtone_4.wss), 2.1}, {QPATHTOF(sound\ringtone_5.wss), 3.8}, {QPATHTOF(sound\ringtone_6.wss), 3.0}};
	};

	class GVAR(LandBig_Pressure_Ammo): IEDLandBig_Remote_Ammo {
		ace_explosives_magazine = QGVAR(LandBig_Pressure_Mag);
	};

	class IEDLandSmall_Remote_Ammo: PipeBombBase {
		hit = 3; // default 1000
		indirectHit = 3; // default 1000
		indirectHitRange = 5; // default 3
		ACE_explodeOnDefuse = 0.025; // default 0
		ACE_explosives_ringtones[] = {{QPATHTOF(sound\ringtone_1.wss), 3.5}, {QPATHTOF(sound\ringtone_2.wss), 3.7}, {QPATHTOF(sound\ringtone_3.wss), 1.7},{QPATHTOF(sound\ringtone_4.wss), 2.1}, {QPATHTOF(sound\ringtone_5.wss), 3.8}, {QPATHTOF(sound\ringtone_6.wss), 3.0}};
	};
	
	class GVAR(LandSmall_Pressure_Ammo): IEDLandSmall_Remote_Ammo {
		ace_explosives_magazine = QGVAR(LandSmall_Pressure_Mag);
	};
};
