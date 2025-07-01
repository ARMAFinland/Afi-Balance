class InventoryFlashLightItem_Base_F;

class cfgWeapons {
	class ItemCore;
	class acc_flashlight: ItemCore {
		class ItemInfo: InventoryFlashLightItem_Base_F {
			class FlashLight
			{

				intensity = 2;
				coneFadeCoef = 8;
				flareMaxDistance = 250;
				flareSize = 1.4;
				innerAngle = 3;
				outerAngle = 60;
				class Attenuation
				{
					constant = 1;
					start = 125;
					quadratic = 0;
					linear = 1;
					hardLimitStart = 10;
					hardLimitEnd = 125;
				};
			};
		};
	};
};
