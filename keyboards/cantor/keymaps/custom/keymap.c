// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //BASE
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,            KC_Q, KC_W, KC_F,    KC_P,  KC_G,                          KC_J,             KC_L,  KC_U,    KC_Y,   KC_QUOT, KC_BSPC,
        LCTL_T(KC_ESCAPE), KC_A, KC_R, KC_S,    KC_T,  KC_D,                          KC_H,             KC_N,  KC_E,    KC_I,   KC_O,    KC_SCLN,
        SC_LSPO,           KC_Z, KC_X, KC_C,    KC_V,  KC_B,                          KC_K,             KC_M,  KC_COMM, KC_DOT, KC_SLSH, SC_RSPC,
                                       KC_LGUI, LT(1, KC_DEL), LT(2,KC_ENTER),        LALT_T(KC_SPACE), LT(3,KC_BSPC), KC_RALT
    ),
    //FUNCANDKEYPAD
    [1] = LAYOUT_split_3x6_3(
        KC_NO,   KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_NO,                KC_KP_SLASH, KC_7,    KC_8, KC_9, KC_KP_MINUS, KC_NO,
        KC_NO,   KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_KP_ASTERISK,       KC_EQUAL,    KC_4,    KC_5, KC_6, KC_KP_PLUS,  KC_NO,
        KC_LSFT, KC_F9, KC_F10, KC_F11, KC_F12, KC_CAPS,              KC_0,        KC_1,    KC_2, KC_3, KC_DOT,      KC_KP_ASTERISK,
                                KC_NO,  KC_NO,  KC_NO,                KC_LALT,     KC_BSPC, KC_NO
    ),
    //NAV
    [2] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO,                      KC_PSCR, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NONUS_HASH, KC_KP_ASTERISK,             KC_NO,   KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_CAPS,                    KC_NO,   KC_HOME, KC_PGUP, KC_PGDN, KC_END,   KC_NO,
                             KC_NO, KC_NO,         KC_NO,                      KC_NO,   KC_NO,   KC_NO
    ),
    //SYMBOLS
    [3] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO,               KC_NO, KC_NO, KC_NO
    )
};
