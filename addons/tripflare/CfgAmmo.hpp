class cfgAmmo {	
	class APERSTripMine_Wire_Ammo;
	class GVAR(Ammo_Base): APERSTripMine_Wire_Ammo {
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		defaultMagazine="Tripflare_Mag";
		soundTrigger[] = {"A3\Sounds_F\weapons\Flare_Gun\flaregun_1_shoot",3.5,1,1000};
		soundHit[] = {"",0,0,0};
		explosionEffects="Tripflare_Explosion_Effect";
		CraterEffects="";
		//mineTrigger="WireTrigger";
		GVAR(flareEffect) = QGVAR(Flare_Ammo_White);
		GVAR(flareAltitude) = 150;
		GVAR(soundDistance) = 1000;
		GVAR(triggerSound) = "Flare_whistle";
		GVAR(flareSound) = "SoundFlareLoop_F";
		SoundSetExplosion[] = {};
		class EventHandlers {
			//ammoHit	= QUOTE(_this call FUNC(activateTripFlare));
			init = QUOTE(_this call FUNC(initTripFlare););
		};
	};
	class GVAR(Ammo_Ground_Base): GVAR(Ammo_Base) {
		GVAR(flareAltitude) = 0.1;
	};

	//Air flares
	class GVAR(Ammo_Red): GVAR(Ammo_Base) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_Red);
		defaultMagazine = QGVAR(Mag_Red);
	};

	class GVAR(Ammo_White): GVAR(Ammo_Red) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_White);
		defaultMagazine = QGVAR(Mag_White);
	};

	class GVAR(Ammo_Green): GVAR(Ammo_Red) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_Green);
		defaultMagazine = QGVAR(Mag_Green);
	};

	class GVAR(Ammo_Yellow): GVAR(Ammo_Red) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_Yellow);
		defaultMagazine = QGVAR(Mag_Yellow);
	};

	//ground
	class GVAR(Ammo_Ground_Red): GVAR(Ammo_Ground_Base) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_Red);
		defaultMagazine = QGVAR(Mag_Ground_Red);
	};

	class GVAR(Ammo_Ground_White): GVAR(Ammo_Ground_Base) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_White);
		defaultMagazine = QGVAR(Mag_Ground_White);
	};

	class GVAR(Ammo_Ground_Green): GVAR(Ammo_Ground_Base) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_Green);
		defaultMagazine = QGVAR(Mag_Ground_Green);
	};

	class GVAR(Ammo_Ground_Yellow): GVAR(Ammo_Ground_Base) {
		GVAR(flareEffect) = QGVAR(Flare_Ammo_Yellow);
		defaultMagazine = QGVAR(Mag_Ground_Yellow);
	};


	//flares
	class F_40mm_White;
	class GVAR(Flare_Ammo_White) : F_40mm_White {
		triggerTime = 0;
		intensity = 20000;
		flareSize = 6;
		timeToLive = 40;
	};
	class GVAR(Flare_Ammo_Red): GVAR(Flare_Ammo_White) {
		lightColor[]={0.5,0.25,0.25,0};
	};
	class GVAR(Flare_Ammo_Green) : GVAR(Flare_Ammo_White) {
		lightColor[]={0.25,0.5,0.25,0.0};
	};
	class GVAR(Flare_Ammo_Yellow) : GVAR(Flare_Ammo_White) {
		lightColor[]={0.5,0.5,0.25,0.0};
	};
};
