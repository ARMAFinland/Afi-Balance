#include "script_component.hpp"
ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_prep.hpp"
PREP_RECOMPILE_END;


GVAR(iedRingtonesHash) = createHashMap;

ADDON = true;