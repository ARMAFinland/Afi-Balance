class CfgLights {
	class SparksLight {
		diffuse[] = {1,0.8,0.8};
		color[] = {1,0.8,0.8};
		ambient[] = {0,0,0,0};
		brightness = 0.3;
		size = 1;
		intensity = 30;
		drawLight = 0;
		blinking = 0;
		flareSize = 2;
		flareMaxDistance = 5000;
		useFlare = 1;
		class Attenuation {
			start = 0.05;
			constant = 0;
			linear = 0;
			quadratic = 40;
			hardLimitStart = 2;
			hardLimitEnd = 4;
		};
		position[] = {0,0,0};
	};

	class SparksLight_HJ {
		diffuse[] = {1,0.8,0.8};
		color[] = {170,100,50};
		ambient[] = {0,0,0,0};
		brightness = 0.15;
		size = 0.25;
		intensity = 15;
		drawLight = 1;
		blinking = 0;
		flareSize = 0.5;
		flareMaxDistance = 5000;
		useFlare = 1;
		class Attenuation {
			start = 0.05;
			constant = 0;
			linear = 75;
			quadratic = 40;
			hardLimitStart = 2;
			hardLimitEnd = 4;
		};
		position[] = {0,0,0};
	};

	class SparksLightSabot {
		diffuse[] = {0.255,0.255,0.255};
		color[] = {0.3,0.2,0.1};
		ambient[] = {0,0,0,0};
		size = 1;
		intensity = 350;
		drawLight = 0;
		blinking = 0;
		flareSize = 2.5;
		flareMaxDistance = 6000;
		useFlare = 1;
		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};

	class GrenadeExploLight {
		diffuse[] = {0.255,0.255,0.255};
		color[] = {0.3,0.22,0.12};
		ambient[] = {0,0,0,0};
		intensity = 1000;
		size = 1;
		drawLight = 0;
		blinking = 0;
		flareSize = 5;
		flareMaxDistance = 6000;
		useFlare = 1;
		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};

	class ExploLightFastSmall {
		diffuse[] = {0.05,0.05,0.05};
		color[] = {0.6,0.4,0.3};
		ambient[] = {0.06,0.04,0.03,0};
		Brightness = 3;
		size = 1;
		drawLight = 0;
		blinking = 0;
		flareSize = 10;
		flareMaxDistance = 4000;
		useFlare = 1;
		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};

	class ExploLightFast {
		diffuse[] = {0.05,0.05,0.05};
		color[] = {0.6,0.6,0.5};
		ambient[] = {0.06,0.06,0.04,0};
		Brightness = 6;
		size = 1;
		drawLight = 0;
		blinking = 0;
		flareSize = 10;
		flareMaxDistance = 4000;
		useFlare = 1;
		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};

	class ExploLightFast_02 {
		diffuse[] = {0.05,0.05,0.05};
		color[] = {0.6,0.5,0.3};
		ambient[] = {0.06,0.05,0.03,0};
		Brightness = 3;
		size = 1;
		drawLight = 0;
		blinking = 0;
		flareSize = 5;
		flareMaxDistance = 4000;
		useFlare = 1;
		class Attenuation {
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};
};
