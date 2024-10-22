class ACE_Triggers;
class CfgMagazines {
	class DemoCharge_Remote_Mag;

	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag {
		displayName = "Big urban IED";
		descriptionShort="Explosive device improvised from a 122mm artillery shell.";
		class ACE_Triggers: ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone"}; // {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
		};
	};
	
	class GVAR(UrbanBig_Pressure_Mag): IEDUrbanBig_Remote_Mag { //AFI edit
		displayName = "Big urban IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a 122mm artillery shell. Has pressure plate.";
		ammo = QGVAR(UrbanBig_Pressure_Ammo);
		class ACE_Triggers : ACE_Triggers {
			SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
		};
	};

	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag {
		displayName = "Big dug-in IED";
		descriptionShort="Explosive device improvised from a 122mm artillery shell.";
	};

	class GVAR(LandBig_Pressure_Mag): IEDLandBig_Remote_Mag {
		displayName = "Big dug-in IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a 122mm artillery shell. Has pressure plate.";
		ammo = QGVAR(LandBig_Pressure_Ammo);
		class ACE_Triggers : ACE_Triggers {
			SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
		};
	};

	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag {
		displayName = "Small urban IED";
		descriptionShort="Explosive device improvised from a hand grenade.";
		class ACE_Triggers: ACE_Triggers {
			SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone"};
		};
	};

	class GVAR(UrbanSmall_Pressure_Mag): IEDUrbanSmall_Remote_Mag {
		displayName = "Small urban IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a hand grenade. Has pressure plate.";
		ammo = QGVAR(UrbanSmall_Pressure_Ammo);
		class ACE_Triggers : ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone", "PressurePlate"};
		};
	};

	class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag {
		displayName = "Medium dug-in IED";
		descriptionShort="Explosive device improvised from a 81mm mortar shell.";
	};

	class GVAR(LandSmall_Pressure_Mag): IEDLandSmall_Remote_Mag {
		displayName = "Medium dug-in IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a 81mm mortar shell. Has pressure plate.";
		ammo = QGVAR(LandSmall_Pressure_Ammo);
		class ACE_Triggers: ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone", "PressurePlate"};
		};
	};
};
