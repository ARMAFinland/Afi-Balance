class CfgInGameUI {
	class Cursor {
		class Targeting { // This hides target lock icons from manpads 
			class Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
			
			class SeekerLocked: Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
			
			class SeekerNoLos: Seeker {
				scale = 0;
				texture = "\A3\ui_f\data\igui\cfg\targeting\Empty_ca.paa";
			};
		};
	};
};