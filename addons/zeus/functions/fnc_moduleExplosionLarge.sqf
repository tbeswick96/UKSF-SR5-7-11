/*
    Author:
        Tim Beswick

    Description:
        Spawns a large explosion on module position

    Parameter(s):
        0: The module logic <OBJECT>
        1: Synchronized units <ARRAY>
        2: Activated <BOOL>

    Return Value:
        None
*/
#include "script_component.hpp"

params ["_logic", "_units", "_activated"];

if !(_activated && local _logic) exitWith {
    deleteVehicle _logic;
};
deleteVehicle _logic;

private _pos = getPos _logic;
private _ied = "Bo_Mk82" createVehicle [_pos select 0, _pos select 1, (_pos select 2) + 0.1];
_ied setDamage 1;
