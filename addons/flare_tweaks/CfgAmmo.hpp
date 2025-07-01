class CfgAmmo {
	class FlareCore;
	class FlareBase: FlareCore {
		intensity = 300000;
	};

	class F_40mm_White: FlareBase {
		timeToLive = 30; //how long until the projectile/flare will vanish
		useFlare = 1; //Show bright circle when looking at the projectile
		flareSize = 6; //How large the flare appears in the sky
		//brightness = 1; //Does nothing
		intensity = 400000; //How intense the light is and how far it carries
		triggerTime = 2.8; //How long after the launch the grenade turns into a flare
	};

	class Flare_82mm_AMOS_White : FlareCore {
		timeToLive = 80;
		flareSize = 9;
		intensity = 1300000;
	};
};
