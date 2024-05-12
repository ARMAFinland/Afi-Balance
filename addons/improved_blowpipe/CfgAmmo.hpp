class CfgAmmo {
    class UK3CB_Blowpipe_missile;
    class GVAR(missile): UK3CB_Blowpipe_missile {
        ace_frag_skip = 1;
        effectsMissile = QGVAR(effect_fired);
        indirectHitRange = 5;
    };
};