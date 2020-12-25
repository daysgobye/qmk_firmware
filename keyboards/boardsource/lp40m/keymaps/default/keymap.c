/* Copyright 2020 Boardsource
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

enum layers {
    _MAIN,
    _RAISE,
    _LOWER,
};

// Readability keycodes
#define LOWER   MO(_LOWER)
#define RAISE   MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
     RGB_VAI,  RGB_VAD,  KC_P9,
     RGB_SAI,  RGB_SAD,  KC_P6,
     RGB_HUI,  RGB_HUD,  KC_P3,
     RGB_MOD,  RGB_TOG,RGB_M_P
  ),

  [_RAISE] = LAYOUT(
     KC_P7,  KC_P8,  RGB_TOG,
     KC_P4,  KC_P5,  RGB_MOD,
     KC_P1,  KC_P2,  KC_P3,
     KC_P0,  KC_PENT,KC_TRNS

  )

};

