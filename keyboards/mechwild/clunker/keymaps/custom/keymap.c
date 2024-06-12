// Copyright 2022 Kyle McCreery (@kylemccreery)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    /*
    k00, k01, k02, k03, k04, k05, k06, k07,                     \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A,      \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B, \
    k50, k51, k52,      k54,      k56,           k59, k5A, k5B  \
    */
    [0] = LAYOUT(
    KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_F15,
    KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
    MO(1),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,              KC_ENT,
    KC_LSFT,  KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_RSFT,
    KC_LCTL,  KC_LGUI, KC_LALT,          KC_SPC,           KC_SPC,                    KC_RALT, MO(2),    KC_RCTL
    ),
    [1] = LAYOUT(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MUTE,
    KC_NO, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
    KC_NO, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_NO, KC_NO, KC_BSLS, KC_LBRC, KC_RBRC, KC_SCLN,          KC_QUOT,
    KC_TRNS, KC_NO, KC_F16, KC_F17, KC_F18, KC_F14, KC_NO, KC_NO, KC_MINS, KC_EQL,  KC_UP,   KC_SLSH,
    KC_NO, KC_NO, MO(3),          MO(2),          KC_NO,                   KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [2] = LAYOUT(
    KC_F10, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_NO, KC_NO,
    KC_NO, KC_INSERT, KC_HOME, KC_PAGE_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_END, KC_PAGE_DOWN, HF_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          QK_BOOT,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO,
    KC_NO, KC_NO, KC_NO,          KC_NO,          KC_NO,                   KC_NO, KC_NO, KC_NO
    ),
    [3] = LAYOUT(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,          KC_NO,          KC_NO,                   KC_NO, KC_NO, KC_NO
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] =  { ENCODER_CCW_CW(KC_F23, KC_F24)  },
    [1] =  { ENCODER_CCW_CW(KC_F21, KC_F22)  },
    [2] =  { ENCODER_CCW_CW(KC_F19, KC_F20) },
    [3] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
