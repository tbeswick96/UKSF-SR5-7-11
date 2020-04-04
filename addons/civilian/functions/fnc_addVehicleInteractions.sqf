#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Adds interactions to vehicle

    Parameters:
        0: Vehicle <OBJECT>

    Return value:
        Nothing
*/
params ["_vehicle"];

private _action = [QGVAR(ignoreCommands), "Please wait there", "", {
    _target setVariable [QGVAR(ignoreCommands), true, true];
}, {
    !(_target getVariable [QGVAR(ignoreCommands), false])
}, {}, [], [0,0,0], 7, [false, true, false, false, false]] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = [QGVAR(followCommands), "Ok pay attention", "", {
    _target setVariable [QGVAR(ignoreCommands), false, true];
}, {
    _target getVariable [QGVAR(ignoreCommands), false]
}, {}, [], [0,0,0], 7, [false, true, false, false, false]] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

private _action = [QGVAR(getOut), "Please get out of the vehicle", "", {
    [QGVAR(getOutCommand), [_target], _target] call CBA_fnc_targetEvent;
}, {
    !(isNull (driver _target))
}, {}, [], [0,0,0], 7, [false, true, false, false, false]] call ace_interact_menu_fnc_createAction;
[_vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = [QGVAR(getIn), "You may get back in your vehicle", "", {
    private _vehicle = _target getVariable [QGVAR(vehicle_statemachine_vehicle), objNull];
    [QGVAR(getInCommand), [_vehicle], _vehicle] call CBA_fnc_targetEvent;
}, {
    _target == (vehicle  _target)
}, {}, [], [0,0,0], 7, [false, true, false, false, false]] call ace_interact_menu_fnc_createAction;
[driver _vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
