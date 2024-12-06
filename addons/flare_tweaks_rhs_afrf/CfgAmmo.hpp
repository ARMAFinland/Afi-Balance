class CfgAmmo {
	class F_40mm_Green;
	class F_40mm_Red;
	class F_40mm_White;

	class rhs_40mm_white: F_40mm_White {
		//brightness = 25;
		timeToLive = 30;
		intensity = 400000;
	};

	class rhs_40mm_red: F_40mm_Red {
		//brightness = 25;
		timeToLive = 40;
		intensity = 300000;
	};

	class rhs_40mm_green: F_40mm_Green {
		//brightness = 25;
		timeToLive = 40;
		intensity = 300000;
	};
};