/*
Copyright 2022 aki27

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
#include <stdio.h>
#include "quantum.h"

enum combo_events {
  COMBO_RGBMOD,
  //COMBO_ESC,
  //COMBO_LENGTH
};
//uint16_t COMBO_LEN = COMBO_LENGTH;
#ifdef COMBO_ENABLE

const uint16_t PROGMEM combo_rgbmod[] = {KC_MS_BTN1, KC_MS_BTN2, COMBO_END};
//const uint16_t PROGMEM combo_esc[] = {KC_T, KC_G, COMBO_END};

combo_t key_combos[] = {
  [COMBO_RGBMOD] = COMBO(combo_rgbmod, RGB_MOD)
  //[COMBO_ESC] = COMBO(combo_esc, KC_ESC),
};
#endif

enum layer_names {
  _BASE,
  //_FN1,
  //_FN2,
  //_FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
    [_BASE] = LAYOUT(

        CPI_SW,             RGB_TOG, 
        KC_MS_BTN1, SCRL_MO, KC_MS_BTN2
    ) 
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =  { ENCODER_CCW_CW(KC_MS_WH_LEFT, KC_MS_WH_RIGHT)  }
    //[1] =  { ENCODER_CCW_CW(KC_MS_WH_LEFT, KC_MS_WH_RIGHT)  },
    //[2] =  { ENCODER_CCW_CW(KC_PGUP, KC_PGDN)  },
    //[3] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  } 
    //[1] =  { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) }
};
#endif

//keyevent_t encoder1_ccw = {
    //.key = (keypos_t){.row = 3, .col = 0},
    //.pressed = false
//};

//keyevent_t encoder1_cw = {
    //.key = (keypos_t){.row = 3, .col = 9},
    //.pressed = false
//};

//bool encoder_update_user(uint8_t index, bool clockwise) {
    //if (index == 0) { /* First encoder */
        //if (clockwise) {
            //encoder1_cw.pressed = true;
            //encoder1_cw.time = (timer_read() | 1);
            //action_exec(encoder1_cw);
        //} else {
            //encoder1_ccw.pressed = true;
            //encoder1_ccw.time = (timer_read() | 1);
            //action_exec(encoder1_ccw);
        //}
    //}

    //return true;
//}

//void matrix_scan_user(void) {

    //if (IS_PRESSED(encoder1_ccw)) {
        //encoder1_ccw.pressed = false;
        //encoder1_ccw.time = (timer_read() | 1);
        //action_exec(encoder1_ccw);
    //}

    //if (IS_PRESSED(encoder1_cw)) {
        //encoder1_cw.pressed = false;
        //encoder1_cw.time = (timer_read() | 1);
        //action_exec(encoder1_cw);
    //}

//}

