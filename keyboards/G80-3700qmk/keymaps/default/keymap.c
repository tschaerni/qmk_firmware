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
        KC_ESC,      KC_LCTRL,     KC_LALT,         KC_BSPACE,
        KC_NUMLOCK,  KC_KP_SLASH,  KC_KP_ASTERISK,  KC_KP_MINUS,
        KC_KP_7,     KC_KP_8,      KC_KP_9,         KC_NO,
        KC_KP_4,     KC_KP_5,      KC_KP_6,         KC_KP_PLUS,
        KC_KP_1,     KC_KP_2,      KC_KP_3,         KC_NO,
        KC_KP_0,     KC_NO,        KC_KP_COMMA,     KC_KP_ENTER
    ),
    [_FN] = LAYOUT(
        KC_NO,       KC_NO,        KC_NO,           KC_NO,
        KC_NO,       KC_NO,        KC_NO,           KC_NO,
        KC_NO,       KC_NO,        KC_NO,           KC_NO,
        KC_NO,       KC_NO,        KC_NO,           KC_NO,
        KC_NO,       KC_NO,        KC_NO,           KC_NO,
        KC_NO,       KC_NO,        KC_NO,           KC_NO
    )
};

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}
*/

bool led_update_user(led_t led_state) {
    if (led_state.num_lock) {
        writePinLow(D0);
    } else {
        writePinHigh(D0);
    }
    return true;
}
