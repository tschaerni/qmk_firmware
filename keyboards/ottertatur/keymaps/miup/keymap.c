/* Copyright 2019 Robin Cerny
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_ESC,           KC_1,          KC_2,     KC_3,      KC_4,     KC_5,               KC_6,             KC_7,
        KC_TAB,           KC_Q,          KC_W,     KC_E,      KC_R,     KC_T,               KC_Y,             KC_U,
        LT(_FN, KC_CAPS), KC_A,          KC_S,     KC_D,      KC_F,     KC_G,               KC_H,             KC_J,
        KC_LSHIFT,        KC_Z,          KC_X,     KC_C,      KC_V,     KC_B,               KC_N,             KC_M,
        KC_LCTRL,         KC_LGUI,       KC_LALT,  KC_SPACE,  KC_RALT,  LT(_FN, KC_LEFT),   LT(_FN, KC_DOWN), RCTL_T(KC_RIGHT),
        KC_8,             KC_9,          KC_0,     KC_MINUS,  KC_EQUAL, KC_BSPACE,          KC_BSLASH,        KC_RBRACKET,
        KC_LBRACKET,      KC_P,          KC_O,     KC_I,      KC_K,     KC_L,               KC_SCOLON,        KC_QUOTE,
        KC_ENTER,         RSFT_T(KC_UP), KC_SLASH, KC_DOT,    KC_COMMA, KC_NO,              KC_NO,            KC_NO
    ),
    /* FN Layer */
    [_FN] = LAYOUT(
        KC_GRV,           KC_F1,         KC_F2,    KC_F3,     KC_F4,    KC_F5,              KC_F6,            KC_F7,
        KC_TRNS,          KC_TRNS,       KC_UP,    KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,          KC_TRNS,
        KC_TRNS,          KC_LEFT,       KC_DOWN,  KC_RIGHT,  RESET,    KC_TRNS,            KC_TRNS,          KC_LEFT,
        KC_TRNS,          KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,          KC_TRNS,
        KC_TRNS,          KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,          KC_TRNS,
        KC_F8,            KC_F9,         KC_F10,   KC_F11,    KC_F12,   KC_TRNS,            KC_TRNS,          KC_END,
        KC_HOME,          KC_PSCREEN,    KC_TRNS,  KC_UP,     KC_DOWN,  KC_RIGHT,           KC_PGUP,          KC_PGDOWN,
        KC_TRNS,          KC_TRNS,       KC_DEL,   KC_INSERT, KC_TRNS,  KC_TRNS,            KC_TRNS,          KC_TRNS
    )
};

