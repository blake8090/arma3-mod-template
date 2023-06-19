#define MAINPREFIX z
#define PREFIX exm
#define COMPONENT test
#define COMPONENT_NAME QUOTE(PREFIX - COMPONENT)
#define REQUIRED_VERSION 2.14

#include "script_version.hpp"
#define VERSION MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH

// Disables CBA precaching, which interferes with file patching
//#define DISABLE_COMPILE_CACHE

// TODO: move all this to script_macros
#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compileScript [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)]
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define PATHTO_CFG(var1,var2,var3) \MAINPREFIX\var1\SUBPREFIX\var2\cfg\var3.sqf
#define COMPILE_CFG_FILE(var1) COMPILE_FILE2_SYS('PATHTO_CFG(PREFIX,COMPONENT_F,var1)')
