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
	class IEDUrbanBig_Pressure_Mag: IEDUrbanBig_Remote_Mag { //AFI edit
		displayName = "Big urban IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a 122mm artillery shell. Has pressure plate.";
		ammo = "IEDUrbanBig_Pressure_Ammo";
		class ACE_Triggers : ACE_Triggers {
			SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone", "PressurePlate"};
		};
	};

	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag {
		displayName = "Big dug-in IED";
		descriptionShort="Explosive device improvised from a 122mm artillery shell.";
	};

	class IEDLandBig_Pressure_Mag: IEDUrbanBig_Pressure_Mag {
		displayName = "Big dug-in IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a 122mm artillery shell. Has pressure plate.";
		ammo = "IEDLandBig_Pressure_Ammo";
	};

	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag {
		displayName = "Small urban IED";
		descriptionShort="Explosive device improvised from a hand grenade.";
		class ACE_Triggers: ACE_Triggers {
			SupportedTriggers[] = {"Command", "DeadmanSwitch", "Cellphone"};
		};
	};

	class IEDUrbanSmall_Pressure_Mag: IEDUrbanSmall_Remote_Mag {
		displayName = "Small urban IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a hand grenade. Has pressure plate.";
		ammo = "IEDUrbanSmall_Pressure_Ammo";
		class ACE_Triggers : ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone", "PressurePlate"};
		};
	};

	class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag {
		displayName = "Medium dug-in IED";
		descriptionShort="Explosive device improvised from a 81mm mortar shell.";
	};

	class IEDLandSmall_Pressure_Mag: IEDLandSmall_Remote_Mag {
		displayName = "Medium dug-in IED (Pressure plate)";
		descriptionShort="Explosive device improvised from a 81mm mortar shell. Has pressure plate.";
		ammo = "IEDLandSmall_Pressure_Ammo";
		class ACE_Triggers: ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone", "PressurePlate"};
		};
	};
};
