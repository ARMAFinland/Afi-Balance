getparrent
pushBackUnique

ok = [];

{
    {   
	    ok pushBackUnique _x;
    } forEach (configSourceAddonList (configFile >> "CfgVehicles" >> _x));
} forEach ["LandVehicle","Car","Car_F","Truck_F","MRAP_01_base_F","MRAP_02_base_F","MRAP_03_base_F","Quadbike_01_base_F","Kart_01_Base_F","Wheeled_APC_F","Tractor_01_base_F","Motorcycle","Tank","Tank_F","MBT_01_base_F","MBT_02_base_F","MBT_03_base_F","APC_Tracked_01_base_F","APC_Tracked_02_base_F","APC_Tracked_03_base_F","MBT_04_base_F"];

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
    private _item = configName _x;
    private _parents = [configFile >> "CfgVehicles" >> _item, true] call BIS_fnc_returnParents;

    private _inherits = _parents select 0;
    private _parrentCount = count _parents;
    
    private _array = ok getOrdefault [_inherits,[]];
    _array pushBack [_item,_parrentCount];
    ok set [_inherits,_array];


} forEach ('configName _x isKindOf "car" && !(configName _x isKindOf "StaticWeapon") && !isNumber (_x >> "ace_vehicles_engineStartDelay")' configClasses (configFile >> "CfgVehicles"));


alreadyAdded = [];

private _configFNC = {
    params["_entry", "_valit"];
    asd = _entry;
    private _text = "";
    for "_i" from 0 to _valit step STEP do {
        _text = _text + "-";
    };
    textFinaleInherit = textFinaleInherit + _text + " " + str _entry + _br ;
    private _array = ok getOrdefault [_entry,[]];
    alreadyAdded pushBack _entry;
    if (_array isNotEqualTo []) then {
        {
            _x call _configFNC
        } forEach _array;
    };

};

{
    private _og = _x;
    private _inheritoijat = _y;
    //private _text = format["Base class %1:",_og];
    

    if !(_og in alreadyAdded) then {
        [_og] call _configFNC
    };

} forEach ok;

copyToClipboard (textFinaleBase + _br + _br + _br + textFinaleInherit)


asd = [];
{
    asd pushBack configName _x;
    
} forEach configHierarchy (inheritsFrom (configFile >> "CfgVehicles" >> typeOf vehicle player >> "ace_vehicles_engineStartDelay"));

ok = [];
{
    private _testItem = _x;
    private _item = configName _x;
    private _parents = [];

    while { !isNull _testItem } do { 
        _parents pushBack configName _testItem; 
        _testItem = inheritsFrom _testItem; 
    }; 
    ok pushBack _parents;

} forEach ('configName _x isKindOf "landvehicle" && !(configName _x isKindOf "StaticWeapon") && !isNumber (_x >> "ace_vehicles_engineStartDelay")' configClasses (configFile >> "CfgVehicles"));

//////////////////////////////////////



_hiarachy = [];

_classes = ( 'isClass _x' configClasses( configFile >> "CfgVehicles" ));

{
	_parents = [ _x, true ] call BIS_fnc_returnParents;
	reverse _parents;
	_tree = _hiarachy;

	{
		_x params[ "_className" ];
        private _parrents = [( configFile >> "CfgVehicles" >> _className), true ] call BIS_fnc_returnParents;
		if ((_parrents findIf { _x == "LandVehicle"; } != -1 || ["All", "AllVehicles", "Land", "LandVehicle"] findIf { toLower _x == toLower _className; } != -1)  && {!(_className isKindOf "StaticWeapon")} ) then {
            
            _index = { if ( _x select 0 == _classname )exitWith{ _forEachIndex } }forEach _tree;
            
            if ( isNil "_index" ) exitWith {
                _index = _tree pushBack [ _classname, [] ];
                _tree = _tree select _index select 1;

                {
                    _index = _tree pushBack _x;
                    _tree = _tree select _index select 1;

                }forEach ( _parents select[ _forEachIndex +1, count _parents ] );
            };
            _tree = _tree select _index select 1;
        };
	}forEach _parents;
}forEach _classes;

_RETURN = [ 13, 10 ];
_TAB = [ 09 ];

_output = "";
_tabIndent = 0;

_fnc_addTabs = {
	params[ "_numTabs" ];
	
	_tabs = "";
	for "_i" from 1 to _numTabs do {
		_tabs = formatText[ "%1%2", _tabs, toString _TAB ];
	};
	
	_tabs
};

_fnc_output = {
	params[ "_array" ];
	
	{
		_x params[ "_class", "_derived" ];
        private _parrents = [( configFile >> "CfgVehicles" >> _class), true ] call BIS_fnc_returnParents;
    
        _tabs = [ _tabIndent ] call _fnc_addTabs;
        private _engine = getNumber(configFile >> "CfgVehicles" >> _class >> "ace_vehicles_engineStartDelay");
        private _name = getText(configFile >> "CfgVehicles" >> _class >> "displayname");
        private _modName = configSourceMod (configFile >> "CfgVehicles" >> _class);

        switch (_modName) do {
            case "843425103": { _modName = "RHS AFRF"; };
            case "843577117": { _modName = "RHS USAF"; };
            case "843593391": { _modName = "RHS GREF"; };
            case "843632231": { _modName = "RHS SAF"; };
            case "1673456286": { _modName = "3CB FACTIONS"; };
            case "893349825": { _modName = "3CB Vehicles"; };
            default { };
        };
        _output = formatText[ "%1%2%3 - Name: %6 (Engine time: %5) - %7,%4", _output, _tabs, str _class, toString _RETURN, _engine, str _name, _modName ];
        
        if ( count _derived > 0 ) then {
            _tabIndent = _tabIndent + 1;
            [ _derived ] call _fnc_output;
            _tabIndent = _tabIndent - 1;
        };
	}forEach _array;
};

[ _hiarachy ] call _fnc_output;

copyToClipboard str _output;
