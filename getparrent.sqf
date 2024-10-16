getparrent
pushBackUnique

ok = [];

{
    {   
	    ok pushBackUnique _x;
    } forEach (configSourceAddonList (configFile >> "CfgAmmo" >> _x));
} forEach ["rhs_ammo_53OF546", "rhs_ammo_3WOF27", "rhs_ammo_3of56", "rhs_ammo_of462", "rhs_ammo_3vo18"];

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

(configFile >> "CfgWeapons" >> "rhs_6b23_digi_rifleman") call fnc_printParents;


["All","AllVehicles","Land","LandVehicle","Tank","Tank_F","APC_Tracked_02_base_F","rhs_zsutank_base"]

["All","AllVehicles","Land","LandVehicle","Tank","Tank_F","APC_Tracked_02_base_F","rhs_zsutank_base"]

configName

ok = nil;
_br = toString [13,10];
textFinaleBase = "--Base classes--"+_br +_br +_br;
textFinaleInherit = "--Just inheritign from base--"+_br +_br +_br;
ok = createHashMap;

{   
   
    private _testItem = _x;
    private _item = configName _x;
    private _parents = [];

    while { !isNull _testItem } do { 
        _parents pushBack configName _testItem; 
        _testItem = inheritsFrom _testItem; 
    }; 
    if ("Vest_Camo_Base" in _parents &&
        {isClass(configFile >> "CfgWeapons" >> _item >> "itemInfo" >> "HitpointsProtectionInfo")} &&
        {count(configProperties [(configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo"),"true",true]) > 0}
    ) then {
        
        private _entries = configProperties [(configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo"),"true",true];
        if (inheritsFrom (configFile >> "CfgWeapons" >> _item >> "itemInfo" )  isEqualTo (configFile >> "CfgWeapons" >> _item  >> "itemInfo") ||
        configName((configHierarchy (inheritsFrom (configFile >> "CfgWeapons" >> _item >> "itemInfo" ))) select -2) isEqualTo "Vest_Camo_Base"
        ) then {
            private _modName = configSourceMod (configFile >> "CfgWeapons" >>_item);
            textFinaleBase = textFinaleBase + "Item: "+_item+ "   ( "+_modName+" )" ;
            {   
                
                private _finalArray = [];
                private _part = configName _x;
                _entries2 = (configProperties [(configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo" >> _part),"true",true]);
                {
                    private _part2 = configName _x;
                    ok3 = [_item, _part, _part2];
                    private _part2Value = (configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo" >> _part >> _part2) call BIS_fnc_getCfgData;
                    _finalArray pushBack [_part2,_part2Value];
                } forEach _entries2;

                textFinaleBase = textFinaleBase + _br +"    "+_part ;
                {
                    private _text = format["        %1 = %2", _x select 0, _x select 1];
                    textFinaleBase = textFinaleBase + _br + _text;
                } forEach _finalArray;
            } forEach _entries;
            textFinaleBase = textFinaleBase + _br + _br + _br;
        } else {
            private _inheritoi = configName((configHierarchy (inheritsFrom (configFile >> "CfgWeapons" >> _item >> "itemInfo" ))) select -2);
            private _array = ok getOrdefault [_inheritoi,[]];
            _array pushBack _item;
            ok set [_inheritoi,_array];
        };
    };
} forEach ('true' configClasses (configFile >> "CfgWeapons"));

{
    private _og = _x;
    private _inheritoijat = _y;
    private _text = format["Base class %1:",_og];
    
    {
        private _modName = configSourceMod (configFile >> "CfgWeapons" >> _x);
        _text = _text + _br + "    " + _x + "   ( "+_modName+" )";
        
    } forEach _inheritoijat;
    textFinaleInherit = textFinaleInherit + _br + _br + _text;
} forEach  ok;

copyToClipboard (textFinaleBase + _br + _br + _br + textFinaleInherit)


//configSourceMod (configFile >> "CfgWeapons" >> configName _x) == "843577117"


ok = nil;
_br = toString [13,10];
textFinaleBase = "--Base classes--"+_br +_br +_br;
textFinaleInherit = "--Just inheritign from base--"+_br +_br +_br;
ok = createHashMap;

{   
   
    private _testItem = _x;
    private _item = configName _x;
    private _parents = [];

    while { !isNull _testItem } do { 
        _parents pushBack configName _testItem; 
        _testItem = inheritsFrom _testItem; 
    }; 
    if ("Vest_Camo_Base" in _parents &&
        {isClass(configFile >> "CfgWeapons" >> _item >> "itemInfo" >> "HitpointsProtectionInfo")} &&
        {count(configProperties [(configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo"),"true",true]) > 0}
    ) then {
        
        private _entries = configProperties [(configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo"),"true",true];
        if (inheritsFrom (configFile >> "CfgWeapons" >> _item >> "itemInfo" )  isEqualTo (configFile >> "CfgWeapons" >> _item  >> "itemInfo") ||
        configName((configHierarchy (inheritsFrom (configFile >> "CfgWeapons" >> _item >> "itemInfo" ))) select -2) isEqualTo "Vest_Camo_Base"
        ) then {
            private _modName = configSourceMod (configFile >> "CfgWeapons" >>_item);
            textFinaleBase = textFinaleBase + "Item: "+_item+ "   ( "+_modName+" )" ;
            {   
                
                private _finalArray = [];
                private _part = configName _x;
                _entries2 = (configProperties [(configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo" >> _part),"true",true]);
                {
                    private _part2 = configName _x;
                    ok3 = [_item, _part, _part2];
                    private _part2Value = (configFile >> "CfgWeapons" >> _item  >> "itemInfo" >> "HitpointsProtectionInfo" >> _part >> _part2) call BIS_fnc_getCfgData;
                    _finalArray pushBack [_part2,_part2Value];
                } forEach _entries2;

                textFinaleBase = textFinaleBase + _br +"    "+_part ;
                {
                    private _text = format["        %1 = %2", _x select 0, _x select 1];
                    textFinaleBase = textFinaleBase + _br + _text;
                } forEach _finalArray;
            } forEach _entries;
            textFinaleBase = textFinaleBase + _br + _br + _br;
        } else {
            private _inheritoi = configName((configHierarchy (inheritsFrom (configFile >> "CfgWeapons" >> _item >> "itemInfo" ))) select -2);
            private _array = ok getOrdefault [_inheritoi,[]];
            _array pushBack _item;
            ok set [_inheritoi,_array];
        };
    };
} forEach ('true' configClasses (configFile >> "CfgWeapons"));

{
    private _og = _x;
    private _inheritoijat = _y;
    private _text = format["Base class %1:",_og];
    
    {
        private _modName = configSourceMod (configFile >> "CfgWeapons" >> _x);
        _text = _text + _br + "    " + _x + "   ( "+_modName+" )";
        
    } forEach _inheritoijat;
    textFinaleInherit = textFinaleInherit + _br + _br + _text;
} forEach  ok;

copyToClipboard (textFinaleBase + _br + _br + _br + textFinaleInherit)