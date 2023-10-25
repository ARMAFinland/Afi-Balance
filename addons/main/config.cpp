#include "script_component.hpp"

// information on this addon specifically
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {  };
        author = "Tuntematon"; // primary author name, either yours or your team's, considered for the whole mod
        authors[] = {"Tuntematon", "Enzio"};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

// information on the whole mod (only needed once)
class CfgMods {
    class PREFIX {
        dir = "@TunBalance";
        name = "Tun Balance";
        
        author = "Tuntematon";                    // probably shown somewhere in the mods menu, but probably ignored by CBA/HEMTT

        picture         = "data\afilogo.paa";       // Picture displayed from the expansions menu. Optimal size is 2048x1024
        hideName        = "false";              // Hide the extension name in main menu and extension menu
        hidePicture     = "false";              // Hide the extension picture in the extension menu

        action          = "https://github.com/tuntematonjr/Tun-Balance"; // Website URL, that can accessed from the expansions menu 
        actionName      = "Github";              // label of button/tooltip in extension menu
        description     = "It's unclear where this will show"; // Probably in context with action

        // Color used for DLC stripes and backgrounds (RGBA)
        dlcColor[] =
        {
            1,
            0.0,
            0.86,
            1
        };
    };
};