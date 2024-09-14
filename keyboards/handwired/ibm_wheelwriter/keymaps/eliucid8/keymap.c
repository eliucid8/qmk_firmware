/* Copyright 2021 andresteare
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



#define LAYOUT_TEST( \
                                                                                                \
    K51,  K53, K43, K44, K45, K46, K56, K57, K47, K49, K48, K4A, K5A, K59,    K5B,     K5C,     \
    K30,  K31,    K33, K34, K35, K36, K26, K27, K37, K39, K38, K3A, K2A, K29,          K3C,     \
    K21,  K11,     K63, K64, K65, K66, K76, K77, K67, K69, K68, K6A, K7A,     K7B,     K6C,     \
    K61,  K02,        K13, K14, K15, K16, K06, K07, K17, K19, K18, K1A,       K12,     K1B,     \
    K70,                  K0D,            K00,             K01,                   K0B, K7C, K0C \
    ) { \
    { K00,      K01,    K02,    KC_NO,  KC_NO,  KC_NO,  K06,    K07,   KC_NO,   KC_NO,  KC_NO,  K0B,    K0C,    K0D }, \
    { KC_NO,    K11,    K12,    K13,    K14,    K15,    K16,    K17,   K18,     K19,    K1A,    K1B,    KC_NO,  KC_NO   }, \
    { KC_NO,    K21,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  K26,    K27,   KC_NO,   K29,    K2A,    KC_NO,  KC_NO,  KC_NO   }, \
    { K_30,     K_31,   KC_NO,  K33,    K34,    K35,    K36,    K37,   K38,     K39,    K3A,    KC_NO,  K3C,    KC_NO   }, \
    { KC_NO,    KC_NO,  KC_NO,  K43,    K44,    K45,    K46,    K47,   K48,     K49,    K4A,    KC_NO,  KC_NO,  KC_NO   }, \
    { KC_NO,    K51,    KC_NO,  K_53,   KC_NO,  KC_NO,  K56,    K57,   KC_NO,   K59,    K5A,    K5B,    K5C,    KC_NO }, \
    { KC_NO,    K61,    KC_NO,  K63,    K64,    K65,    K66,    K67,   K68,     K69,    K6A,    KC_NO,  K6C,    KC_NO   }, \
    { K70,      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  K76,    K77,   KC_NO,   KC_NO,  K7A,    K7B,    K7C,    KC_NO   }, \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_TEST(
        KC_ESC,     KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,     KC_BSPC,        KC_BACKSLASH,
        KC_MPLY,    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,                    KC_VOLU,
        KC_CAPS,    KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,             KC_ENT,         KC_VOLD,
        KC_LALT,    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                      KC_LSFT,        KC_UP,
        KC_LGUI,                            KC_LCTL,                                   KC_SPC,                                               KC_RALT,         KC_LEFT,  KC_DOWN, KC_RIGHT
    ),
    
    // [1] = LAYOUT(        
    //     QK_BOOT,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,             KC_TRNS,
    //     KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,      KC_TRNS,
    //     KC_TRNS,       KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS,
    //     KC_TRNS,       KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,
    //     KC_TRNS,                                KC_TRNS,                            KC_TRNS,                                                       KC_TRNS,      KC_TRNS
    // ),
};
