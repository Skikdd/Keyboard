/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
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

#include "config_common.h"
#include "config_led.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x320F
#define PRODUCT_ID      0x5025
#define DEVICE_VER      0x0001

#define MANUFACTURER    Feker
#define PRODUCT         Feker 61 Power For 随机复读的复读姬
#define DESCRIPTION     Feker 61 Power For 随机复读的复读姬

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/* Key matrix pin           0   1,   2,   3,   4,   5,   6,   7,  8,  9, 10, 11, 12, 13 */
#define MATRIX_ROW_PINS { D11, D10, D9,  D8,  D7 }
#define MATRIX_COL_PINS {  A8, A9, A10, A11, A12, A13, A14, A15, B0, B1, B2, B3, B4, B5 }

/* Direction of diode (COL2ROW or ROW2COL) */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Forcing to use NKRO instead 6KRO */
#define FORCE_NKRO

/* Change USB Polling Rate to 1000hz and a larger keys per scan for elite gaming */
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

/* RGB Matrix config */
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
