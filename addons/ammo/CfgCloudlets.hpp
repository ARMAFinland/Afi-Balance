class CfgCloudlets {
	class Missile3;
	class TunBalance_blowpipe_effect: Missile3 {
		interval = "0.00025";
		lifeTime = 15;
		volume = 1.75;
		lifeTimeVar = 5;
		sizeVar = 1;
	};
};

class TunBalance_blowpipe_effect {
	class Light1 {
		simulation = "light";
		type = "RocketLight";
		position[] = {0,0,0};
		intensity = 0.1;
		interval = 1;
		lifeTime = 1;
	};
	
	class TunBalance_blowpipe_effect {
		simulation = "particles";
		type = "TunBalance_blowpipe_effect";
	};
};