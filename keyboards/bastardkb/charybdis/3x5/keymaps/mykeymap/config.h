/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#ifdef VIA_ENABLE
/* VIA configuration. */
#    define DYNAMIC_KEYMAP_LAYER_COUNT 9
#endif // VIA_ENABLE

#ifndef __arm__
/* Disable unused features. */
#    define NO_ACTION_ONESHOT
#endif // __arm__

/* Charybdis-specific features. */

#ifdef POINTING_DEVICE_ENABLE
// Automatically enable the pointer layer when moving the trackball.  See also:
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS`
// - `CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD`
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif // POINTING_DEVICE_ENABLE
       //

#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY

#ifdef AUTO_SHIFT_ENABLE
    #define AUTO_SHIFT_TIMEOUT 175
    #define NO_AUTO_SHIFT_ALPHA
    #define AUTO_SHIFT_REPEAT
#endif // AUTO_SHIFT_ENABLE

#define COMBO_TERM 15

#define MOUSEKEY_DELAY 0 // Delay between pressing a movement key and cursor movement
#define MOUSEKEY_INTERVAL 10 // Time between cursor movements in milliseconds
#define MOUSEKEY_MOVE_DELTA	5 // Step size
#define MOUSEKEY_MAX_SPEED 10 // Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX 255 // Time until maximum cursor speed is reached
#define MOUSEKEY_WHEEL_DELAY 100 // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL 100 // Time between wheel movements
#define MOUSEKEY_WHEEL_DELTA 50 // Wheel movement step size
#define MOUSEKEY_WHEEL_MAX_SPEED 8 // Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100 // Time until maximum scroll speed is reached

#define CHARYBDIS_MINIMUM_DEFAULT_DPI 800
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 400

// Enable OS detection for homerow mods
#define OS_DETECTION_ENABLE
