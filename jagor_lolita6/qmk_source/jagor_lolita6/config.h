/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Eduardo Fernandes
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
#define PRODUCT_ID 0xFE22
#define DEVICE_VER 0x0001

#define MANUFACTURER Jagor_Lolita6
#define PRODUCT      Jagor_Lolita6
#define DESCRIPTION  Jagor_Lolita6


#define WAIT_FOR_USB
#define USB_MAX_POWER_CONSUMPTION 100
#define BOOTMAGIC_KEY_EEPROM_CLEAR KC_SPC

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 22

#define DIODE_DIRECTION ROW2COL
#define MATRIX_COL_PINS {  A8,  A9, A10, A11, A12,   A13, A14, A15, D0,   D1, D2, D3, D4, D5,  A2, A1, A3, A0, A4, A5, A6,A7 }
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4, B5 }

/* LED matrix */
#define LED_MATRIX_ROWS         MATRIX_ROWS
#define LED_MATRIX_ROW_CHANNELS 1
#define LED_MATRIX_ROWS_HW      (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
#define LED_MATRIX_ROW_PINS     { C9,C8,C7,C6,C5,C4 }
#define LED_MATRIX_COLS         MATRIX_COLS
#define LED_MATRIX_COL_PINS     MATRIX_COL_PINS
#define DRIVER_LED_TOTAL        132

/* Dexter's PWM hack */
#define ACTIVATE_PWM_CHAN_8 //A8
#define ACTIVATE_PWM_CHAN_9 //A9
#define ACTIVATE_PWM_CHAN_10 //A10
#define ACTIVATE_PWM_CHAN_11 //A11
#define ACTIVATE_PWM_CHAN_12 //A12
#define ACTIVATE_PWM_CHAN_13 //A13
#define ACTIVATE_PWM_CHAN_14 //A14
#define ACTIVATE_PWM_CHAN_15 //A15
#define ACTIVATE_PWM_CHAN_16 //D0
#define ACTIVATE_PWM_CHAN_17 //D1
#define ACTIVATE_PWM_CHAN_18 //D2
#define ACTIVATE_PWM_CHAN_19 //D3
#define ACTIVATE_PWM_CHAN_22 //D4
#define ACTIVATE_PWM_CHAN_21 //D5
#define ACTIVATE_PWM_CHAN_2 //A2
#define ACTIVATE_PWM_CHAN_1 //A1
#define ACTIVATE_PWM_CHAN_3 //A3
#define ACTIVATE_PWM_CHAN_0 //A0
#define ACTIVATE_PWM_CHAN_4 //A4
#define ACTIVATE_PWM_CHAN_5 //A5
#define ACTIVATE_PWM_CHAN_6 //A6
#define ACTIVATE_PWM_CHAN_7 //A7


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

/* LED Status indicators */
#define LED_NUM_LOCK_PIN    C0
#define LED_CAPS_LOCK_PIN   C1
#define LED_SCROLL_LOCK_PIN C2
#define LED_PIN_ON_STATE    0

/* Enable led matrix effects */
#define ENABLE_LED_MATRIX_ALPHAS_MODS
#define ENABLE_LED_MATRIX_BREATHING
#define ENABLE_LED_MATRIX_BAND
#define ENABLE_LED_MATRIX_BAND_PINWHEEL
#define ENABLE_LED_MATRIX_BAND_SPIRAL
#define ENABLE_LED_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_LED_MATRIX_CYCLE_UP_DOWN
#define ENABLE_LED_MATRIX_CYCLE_OUT_IN
#define ENABLE_LED_MATRIX_DUAL_BEACON
#define ENABLE_LED_MATRIX_WAVE_LEFT_RIGHT
#define ENABLE_LED_MATRIX_WAVE_UP_DOWN

// /* Make VIA build options */
// #define LAYER_STATE_8BIT
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 1200

/* Enable NKRO by default */
#define FORCE_NKRO
