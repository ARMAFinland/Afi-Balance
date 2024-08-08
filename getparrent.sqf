getparrent
pushBackUnique


{
	ok pushBackUnique _x;
} forEach configSourceAddonList (configFile >> "CfgWeapons" >> "rhs_weap_stinger_Launcher");

configSourceAddonList (configFile >> "CfgInGameUI" >> "Cursor");

fnc_printParents = 
{ 
 disableSerialization; 
 if (!isClass _this) exitWith { hint "Argument is not a config Class" }; 
 
 private _parents = []; 
 
 while { !isNull _this } do 
 { 
  _parents pushBack configName _this; 
  _this = inheritsFrom _this; 
 }; 
 
 reverse _parents; 
 
 private _tv = findDisplay 46 createDisplay "RscDisplayEmpty" ctrlCreate ["RscTree", -1]; 
 _tv ctrlSetPosition [0,0,1,1]; 
 _tv ctrlSetBackgroundColor [0,0,0,0.5]; 
 _tv ctrlCommit 0; 
 
 private _path = []; 
 { 
  _tv tvAdd [_path, _x]; 
  _path pushBack 0; 
 } 
 forEach _parents; 
 copyToClipboard str _parents;
 tvExpandAll _tv; 
};

(configFile >> "CfgCloudlets" >> "RHS_9k32_Fired") call fnc_printParents;

(configFile >> "CfgAmmo" >> "Sh_155mm_AMOS") call fnc_printParents;


["All","AllVehicles","Land","LandVehicle","Tank","Tank_F","APC_Tracked_02_base_F","rhs_zsutank_base"]

["All","AllVehicles","Land","LandVehicle","Tank","Tank_F","APC_Tracked_02_base_F","rhs_zsutank_base"]