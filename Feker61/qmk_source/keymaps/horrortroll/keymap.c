/*
Copyright 2021 HorrorTroll

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
#include QMK_KEYBOARD_H

#include "3061_rgb.h"
#include "keymap_stuff.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
       ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
       │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Bakspc│
       ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
       │ Tab │ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │ [ │ ] │  \  │
       ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
       │ Caps │ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ ' │  Enter │
       ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
       │ LShift │ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │   RShift │
       ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
       │LCrl│GUI │LAlt│         Space          │RAlt│GUI │ Fn │RCrl│
       └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
       ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
       │ ~ │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ _ │ + │       │
       ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
       │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ { │ } │  |  │
       ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
       │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ : │ " │        │
       ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
       │ LShift │ Z │ X │ C │ V │ B │ N │ M │ < │ > │ ? │   RShift │
       ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
       │    │    │    │                        │    │    │    │    │
       └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
    /*  Row:    0        1        2        3     4     5     6       7     8     9        10       11       12       13     */
    [_BASE] = LAYOUT_60_ansi(
                KC_ESC,  KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6,   KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
                KC_TAB,  KC_Q,    KC_W,    KC_E, KC_R, KC_T, KC_Y,   KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
                KC_CAPS, KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H,   KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
                KC_LSFT,          KC_Z,    KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,
                KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                      KC_RALT, KC_RGUI, MO(_FN), KC_RCTL
            ),

/*
       ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
       │ ` │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│ Delete│
       ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
       │     │   │ ↑ │   │   │   │   │   │   │   │   │Ins│Hom│ PgUp│
       ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
       │      │ ← │ ↓ │ → │   │   │   │   │   │   │   │End│  PgDn  │
       ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
       │        │   │   │   │   │   │   │   │   │   │Prt│   Pause  │
       ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
       │    │    │    │                        │    │ Rn │ Fn │    │
       └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
    /*  Row:    0        1        2        3         4        5        6        7        8        9        10       11       12       13      */
    [_FN]   = LAYOUT_60_ansi(
                KC_GRV,  KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
                _______, _______, KC_UP,   _______,  _______, _______, _______, _______, _______, _______, _______, KC_INS,  KC_HOME, KC_PGUP,
                _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, _______, _______, _______, _______, KC_END,           KC_PGDN,
                _______,          _______, _______,  _______, _______, _______, _______, _______, _______, _______, KC_PSCR,          KC_PAUSE,
                _______, _______, _______,                             _______,                            _______, MO(_RN), _______, _______
            ),

/*
       ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
       │Rst│MeP│VoD│VoU│Mut│Stp│Prv│Ply│Nxt│Mai│Hom│Cal│Sch│RGB_Tog│
       ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
       │NKRO │1Hd│1Hi│1Sd│1Si│1Vd│1Vi│   │Hud│Hui│   │Rod│Mod│Cycle│
       ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
       │      │2Hd│2Hi│2Sd│2Si│2Vd│2Vi│   │Vad│Vai│   │   │        │
       ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
       │        │Pre│Ref│Flp│   │   │   │Spd│Spi│   │   │          │
       ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
       │    │    │    │                        │    │ Rn │    │    │
       └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
    /*  Row:    0        1        2        3        4        5        6        7        8        9        10       11        12       13      */
    [_RN]   = LAYOUT_60_ansi(
                RESET,   KC_MSEL, KC_VOLD, KC_VOLU, KC_MUTE, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT, KC_MAIL, KC_WHOM, KC_CALC,  KC_WSCH, RGB_TOG,
                NK_TOGG, G1_HUD,  G1_HUI,  G1_SAD,  G1_SAI,  G1_VAD,  G1_VAI,  _______, RGB_HUD, RGB_HUI, _______, RGB_RMOD, RGB_MOD, RGB_C_E,
                _______, G2_HUD,  G2_HUI,  G2_SAD,  G2_SAI,  G2_VAD,  G2_VAI,  _______, RGB_VAD, RGB_VAI, _______, _______,           _______,
                _______,          G_PRE,   REF_G,   G_FLIP,  _______, _______, _______, RGB_SPD, RGB_SPI, _______, _______,           _______,
                _______, _______, _______,                            _______,                            _______, _______,  _______, _______
            ),
};
