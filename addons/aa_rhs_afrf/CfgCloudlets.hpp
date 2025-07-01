class CfgCloudlets {
	class EGVAR(common,AA_launcher_effect);
	class GVAR(effect_fired):  EGVAR(common,AA_launcher_effect) {
	};
};

class EGVAR(common,AA_launcher_effect);
class GVAR(effect_fired): EGVAR(common,AA_launcher_effect) {

	class GVAR(effect_fired) {
		simulation = "particles";
		type = QGVAR(effect_fired);
	};
};
