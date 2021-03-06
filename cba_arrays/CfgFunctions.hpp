// -----------------------------------------------------------------------------
// Automatically generated by 'functions_config.rb'
// DO NOT MANUALLY EDIT THIS FILE!
// -----------------------------------------------------------------------------

class CfgFunctions
{
	class CBA
	{
		class Arrays
		{
			// CBA_fnc_filter
			class filter
			{
				description = "Filter each element of an array via a function.";
				file = "\x\cba\addons\arrays\fnc_filter.sqf";
			};
			// CBA_fnc_getArrayDiff
			class getArrayDiff
			{
				description = "A function used to return the differences between two arrays. Parameters: Two Arrays of strings (must not contain scalars) Example: _distance = [[0,0,1], [0,0,0]] call CBA_fnc_getArrayDiff Returns: Array Differences (for above example, return is [[1],[0]]) Author: Rommel";
				file = "\x\cba\addons\arrays\fnc_getArrayDiff.sqf";
			};
			// CBA_fnc_getArrayElements
			class getArrayElements
			{
				description = "A function used to return the element counts in an array. Parameters: Array Example: _types = [0,0,1,1,1,1] call CBA_fnc_getArrayElements Returns: Array element counts (for above example, return would be [0,2,1,4]) Author: Rommel && sbsmac";
				file = "\x\cba\addons\arrays\fnc_getArrayElements.sqf";
			};
			// CBA_fnc_inject
			class inject
			{
				description = "Accumulates a value by passing elements of an array ""through"" a function.";
				file = "\x\cba\addons\arrays\fnc_inject.sqf";
			};
			// CBA_fnc_join
			class join
			{
				description = "Joins an array of values into a single string, joining each fragment around a separator string. Inverse of <CBA_fnc_split>.";
				file = "\x\cba\addons\arrays\fnc_join.sqf";
			};
			// CBA_fnc_reject
			class reject
			{
				description = "Reject array elements for which the block returns true";
				file = "\x\cba\addons\arrays\fnc_reject.sqf";
			};
			// CBA_fnc_select
			class select
			{
				description = "Select array elements for which the block returns true";
				file = "\x\cba\addons\arrays\fnc_select.sqf";
			};
			// CBA_fnc_shuffle
			class shuffle
			{
				description = "Shuffles an array's contents into random order, returning a new array.";
				file = "\x\cba\addons\arrays\fnc_shuffle.sqf";
			};
			// CBA_fnc_sortNestedArray
			class sortNestedArray
			{
				description = "Used to sort a nested array from lowest to highest using quick sort based on the specified column, which must have numerical data. Parameters: _array: array - Nested array to be sorted _index: integer - sub array item index to be sorted on Example: _array = [_array,1] call CBA_fnc_sortNestedArray Returns: Passed in array Author: Standard algorithm";
				file = "\x\cba\addons\arrays\fnc_sortNestedArray.sqf";
			};
			// CBA_fnc_testArrays
			class testArrays
			{
				description = "Internal Self Check. Check the RPT file for results.";
				file = "\x\cba\addons\arrays\test.sqf";
			};
		};
	};
};
