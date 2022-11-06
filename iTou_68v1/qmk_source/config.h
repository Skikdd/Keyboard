/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
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

/* USB Device descriptor parameter */
#define VENDOR_ID  0x3434
#define PRODUCT_ID 0x1145
#define DEVICE_VER 0x0001

#define MANUFACTURER itou
#define PRODUCT      itou 68v1
#define DESCRIPTION  itou 68v1

#define WAIT_FOR_USB
#define USB_MAX_POWER_CONSUMPTION 100

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 20

#define DIODE_DIRECTION  ROW2COL
#define MATRIX_COL_PINS { D2,D3,D4,D5,D1,D0,A15,A14,A13,A12,A11,A10,A8,A9,A4,A6,A3,A2,A1,A5 }
#define MATRIX_ROW_PINS { B1,B2,B3,B4,B5}





/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5



#define DYNAMIC_KEYMAP_LAYER_COUNT     4
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 1150




/* Enable NKRO by default */
#define FORCE_NKRO
