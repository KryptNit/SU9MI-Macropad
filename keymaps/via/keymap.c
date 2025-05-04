// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_name {
    _A,
    _B,
    _C,
    _D
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        TO(_B),   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3
    ),
    [1] = LAYOUT(
        TO(_C),   KC_P1,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [2] = LAYOUT(
        TO(_D),   KC_P2,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [3] = LAYOUT(
        TO(_A),   KC_P3,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS,
        KC_TRNS,   KC_TRNS,   KC_TRNS
    )
};
