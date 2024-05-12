class CfgCloudlets {
	class Missile3;
	class GVAR(effect_fired): Missile3 {
		interval = "0.00025";
		lifeTime = 15;
		lifeTimeVar = 5;
		sizeVar = 1;
		volume = 1.75;
	};
};

class GVAR(effect_fired) {
	class Light1 {
		intensity = 0.1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "light";
		type = "RocketLight";
	};
	
	class GVAR(effect_fired) {
		simulation = "particles";
		type = QGVAR(effect_fired);
	};
};