// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------
#define DEBUG_MODE_FULL
#include "script_component.hpp"

#define TESTS ["strings"]

SCRIPT(test-strings);

// ----------------------------------------------------------------------------

LOG("=== Testing Strings ===");

{
	call compile preprocessFileLineNumbers format ["\x\cba\addons\strings\test_%1.sqf", _x];
} forEach TESTS;

nil;
