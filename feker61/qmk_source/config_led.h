/*
Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* RGB matrix size */
#define LED_MATRIX_COLS MATRIX_COLS
#define LED_MATRIX_ROWS MATRIX_ROWS
#define LED_MATRIX_ROW_CHANNELS 3
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
/*  B15, B14, B13,  C1,  C0, C15,  C5,  C4, C3, C8, C7, C6, C11, C10, C9*/
/* RGB matrix pin               0    1,   2,   3,   4,   5,   6,   7,  8,  9, 10, 11,  12,  13  14 */
#define LED_MATRIX_COL_PINS MATRIX_COL_PINS
#define LED_MATRIX_ROW_PINS { C6,C4,C5,  C9,C7,C8,  C12,C10,C11,  B13,C13,C14,   B14,D3,B15 }

/* RGB led number */
#define DRIVER_LED_TOTAL (61)
