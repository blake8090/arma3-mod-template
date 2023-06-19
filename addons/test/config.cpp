#include "script_component.hpp"

// TODO: add script_mod.hpp and script_macros.hpp

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main"};
        author = "My Team";
        url = "http://google.com";
        VERSION_CONFIG;
    };
};

#include "cfg/CfgEventhandlers.hpp"
