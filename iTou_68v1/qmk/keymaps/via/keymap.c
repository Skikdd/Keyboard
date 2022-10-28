/*
Copyright 2020 Dimitris Mantzouranis

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

enum layer_names {
  _BASE,
  _FN1,
  _FN2,
  _FN3
};
#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] =
    {
        {   KC_GESC,   KC_1,      KC_2,      KC_3,    KC_4,     KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_NO,     RGB_MOD   },
        {   KC_TAB,    KC_Q,      KC_W,      KC_E,    KC_R,     KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLASH, KC_NO,     KC_HOME   },
        {   KC_CAPS,   KC_A,      KC_S,      KC_D,    KC_F,     KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_NO,     KC_PGUP   },
        {   KC_LSFT,   KC_NO,     KC_Z,      KC_X,    KC_C,     KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_UP,     KC_PGDOWN },
        {   KC_LCTL,   KC_LGUI,   KC_LALT,   KC_SPC,  KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     KC_RALT,   MO(_FN1),  KC_RCTRL,  KC_LEFT,   KC_DOWN,   KC_RGHT   }
    },
    [_FN1] =
    {
        {   KC_GESC,   KC_SLCK,   KC_PAUS,   KC_APP,  KC_NO,    RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_NO,     KC_NO,     KC_PGUP    },
        {   KC_NO,     RGB_M_P,   RGB_M_B,   RGB_M_R, RGB_M_SW, RGB_M_T, RGB_SPD,  RGB_SPI, KC_NO,   KC_NO,     KC_INS,    KC_DEL,    KC_END,    KC_NO,     KC_NO,     KC_PGDOWN  },
        {   KC_NO,     KC_VOLD,   KC_VOLU,   KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     RGB_SAD,   RGB_SAI,   KC_NO,     KC_NO,     KC_NO,     KC_PGUP    },
        {   KC_NO,     KC_NO,     KC_NO,     RGB_TOG, KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   RGB_RMOD,  RGB_MOD,   KC_NO,     KC_NO,     KC_NO,     RGB_VAI,   KC_PGDOWN  },
        {   KC_GRV,    KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   RESET,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     RGB_HUD,   RGB_VAD,   RGB_HUI    }
    },
    [_FN2] =
    {
        {   KC_GESC,   KC_SLCK,   KC_PAUS,   KC_APP,  KC_NO,    RGB_VAD, RGB_VAI,  KC_MPRV, KC_MPLY, KC_MNXT,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_NO,     KC_NO,     KC_PGUP    },
        {   KC_NO,     RGB_M_P,   RGB_M_B,   RGB_M_R, RGB_M_SW, RGB_M_T, RGB_SPD,  RGB_SPI, KC_NO,   KC_NO,     KC_INS,    KC_DEL,    KC_END,    KC_NO,     KC_NO,     KC_PGDOWN  },
        {   KC_NO,     KC_VOLD,   KC_VOLU,   KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     RGB_SAD,   RGB_SAI,   KC_NO,     KC_NO,     KC_NO,     KC_PGUP    },
        {   KC_NO,     KC_NO,     KC_NO,     RGB_TOG, KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   RGB_RMOD,  RGB_MOD,   KC_NO,     KC_NO,     KC_NO,     RGB_VAI,   KC_PGDOWN  },
        {   KC_GRV,    KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   RESET,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     RGB_HUD,   RGB_VAD,   RGB_HUI    }
    },
    [_FN3] = {
        {   KC_GESC,   KC_F1,     KC_F2,     KC_F3,   KC_F4,    KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_NO,     KC_NO,     KC_PGUP    },
        {   KC_NO,     RGB_M_P,   RGB_M_B,   RGB_M_R, RGB_M_SW, RGB_M_T, RGB_SPD,  RGB_SPI, KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_NO,     KC_PGDOWN  },
        {   KC_NO,     KC_VOLD,   KC_VOLU,   KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,     RGB_SAD,   RGB_SAI,   KC_NO,     KC_NO,     KC_NO,     KC_PGUP    },
        {   KC_NO,     KC_NO,     KC_NO,     RGB_TOG, KC_NO,    KC_NO,   KC_NO,    KC_NO,   KC_NO,   RGB_RMOD,  RGB_MOD,   KC_NO,     KC_NO,     KC_NO,     RGB_VAI,   KC_PGDOWN  },
        {   KC_GRV,    KC_NO,     KC_NO,     KC_NO,   KC_NO,    KC_NO,   RESET,    KC_NO,   KC_NO,   KC_NO,     KC_NO,     KC_NO,     KC_NO,     RGB_HUD,   RGB_VAD,   RGB_HUI    }
    }
};