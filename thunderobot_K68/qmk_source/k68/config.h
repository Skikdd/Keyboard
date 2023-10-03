/* Copyright 2023 Skirl <skikdd@protonmail.com>
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

#define MATRIX_UNSELECT_DRIVE_HIGH
#define MATRIX_IO_DELAY 1
#define GPIO_INPUT_PIN_DELAY 0

#define RGB_MATRIX_ROW_PINS {C6,C5,C4,  C9,C8,C7,  C12,C11,C10,  B13,C14,C13,  B14,B15,B12}
#define RGB_MATRIX_LED_COUNT 68

/* RGB Matrix Effects */
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define Clean_eeprom QK_USER_0

#define PWM_OUTPUT_ACTIVE_LEVEL PWM_OUTPUT_ACTIVE_HIGH

// #define WEAR_LEVELING_LOGICAL_SIZE 1300
// #define WEAR_LEVELING_BACKING_SIZE WEAR_LEVELING_LOGICAL_SIZE*2
