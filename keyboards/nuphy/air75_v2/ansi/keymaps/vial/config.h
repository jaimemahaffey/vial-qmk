/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Unique ID for this Vial build (randomly generated). */
#define VIAL_KEYBOARD_UID {0x58, 0xD9, 0xD2, 0x6D, 0xBB, 0x60, 0x97, 0x9D}

/* Vial security unlock: hold Esc (matrix 0,0) + Space (matrix 5,6).
   Both positions verified against the vendor keyboard.json layout. */
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 6 }

/* Kept deliberately modest. The STM32F072 emulates EEPROM in flash, so these
   allocations are not free. kbsteven's 100 macros + 75 tap dances is the likely
   cause of the "macros not working" bug in that repo. */
#define DYNAMIC_KEYMAP_MACRO_COUNT 16
#define VIAL_TAP_DANCE_ENTRIES 8
#define VIAL_COMBO_ENTRIES 8
#define VIAL_KEY_OVERRIDE_ENTRIES 8
