/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//     [1] = LAYOUT_split_3x6_3_ex2(
//   //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
//      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
//      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
//      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//   //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
//                                           XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX
//                                       //`--------------------------'            `--------------------------'
//   ),

    [0] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------------------------.--------|            |-------------------------------------------------------------------------------------------------.
     KC_GRV,      KC_Q,        LGUI_T(KC_W), KC_E,        KC_R,        KC_T,       KC_LBRC,                   KC_RBRC,   KC_Y,        KC_U,         KC_I,        KC_O,           KC_P,            TG(7),
  //|------------+------------+------------+------------+------------+------------|------------|            |-----------|------------+------------+------------+------------+-------------------+------------|
     KC_EXLM,    KC_A,         ALT_T(KC_S),  CTL_T(KC_D), SFT_T(KC_F), KC_G,       KC_LPRN,                   KC_RPRN,   KC_H,        LSFT_T(KC_J), CTL_T(KC_K), LALT_T(KC_L),   KC_QUOT,         KC_MINS,
  //|------------+------------+------------+------------+------------+------------|------------|            |-----------|------------+------------+------------+------------+-------------------+------------|
    KC_CIRC,      KC_Z,        RALT_T(KC_X), KC_C,        KC_V,        KC_B,                                             KC_N,        KC_M,         KC_COMM,     RALT_T(KC_DOT), KC_SLSH,  RALT(KC_COMM),
  //|------------+------------+------------+------------+------------+------------|                                     |------------+------------+------------+------------+-------------------+------------|
                                           LT(3,KC_ESC), LT(2,KC_SPC), LT(1,KC_TAB),                                     LT(4,KC_ENT),  LT(5,KC_BSPC), LT(6,KC_DEL)
                                           //`--------------------------'                                                  `--------------------------'

  ),



    [1] = LAYOUT_split_3x6_3_ex2(
  //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
     XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, MS_ACL0, MS_ACL1, MS_ACL2, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX,                               XXXXXXX, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, _______,            MS_BTN2, MS_BTN1, MS_BTN3
                                      //`--------------------------'            `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3_ex2(
  //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
     XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, LCTL(KC_Y), LCTL(KC_V), LCTL(KC_C), LCTL(KC_X), LCTL(KC_Y), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX,             XXXXXXX, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX,                               KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,            KC_ENT,  KC_BSPC, KC_DEL
                                      //`--------------------------'            `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3_ex2(
  //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
     QK_BOOT, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             UG_SPDD, UG_TOGG, UG_NEXT, UG_HUEU, UG_SATU,  UG_VALU, UG_SPDU,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     EE_CLR,  XXXXXXX, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     QK_RBT,  XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX,                               XXXXXXX, DT_PRNT, DT_DOWN, DT_UP  , XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
                                          _______, XXXXXXX, XXXXXXX,            KC_MSTP, KC_MPLY, KC_MUTE
                                      //`--------------------------'            `--------------------------'
  ),

    [4] = LAYOUT_split_3x6_3_ex2(
  //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
     XXXXXXX, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_COLN, KC_DLR, KC_PERC,  KC_CIRC, KC_PLUS, XXXXXXX,             XXXXXXX, XXXXXXX, LSFT_T(KC_LEFT), CTL_T(KC_DOWN), LALT_T(KC_UP),  KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,                               XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LPRN, KC_RPRN, KC_UNDS,            _______, XXXXXXX, XXXXXXX
                                      //`--------------------------'            `--------------------------'
  ),

    [5] = LAYOUT_split_3x6_3_ex2(
  //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
     XXXXXXX, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     KC_ASTR, KC_SCLN,    KC_4,    KC_5,    KC_6, KC_EQL,  XXXXXXX,             XXXXXXX, XXXXXXX, LSFT_T(KC_LEFT), CTL_T(KC_DOWN), LALT_T(KC_UP),  KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, KC_GRV,     KC_1,    KC_2,     KC_3, KC_BSLS,                               KC_ASTR, KC_PPLS, KC_COMM, RALT_T(KC_DOT), KC_SLSH, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
                                          KC_0, KC_MINS, KC_TAB,                  XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'            `--------------------------'
  ),

    [6] = LAYOUT_split_3x6_3_ex2(
  //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
     XXXXXXX,  KC_F12,   KC_F7,   KC_F8,   KC_F9, KC_PSCR, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX, QK_BOOT,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX,  KC_F11,   KC_F4,   KC_F5,   KC_F6, KC_SCRL, XXXXXXX,             XXXXXXX, XXXXXXX, LSFT_T(KC_LEFT), CTL_T(KC_DOWN), LALT_T(KC_UP),  KC_RIGHT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX,  KC_F10,   KC_F1,   KC_F2,   KC_F3, KC_PAUS,                               XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
                                          KC_APP, KC_SPC,   KC_TAB,             XXXXXXX, XXXXXXX, _______
                                      //`--------------------------'            `--------------------------'
  ),

      [7] = LAYOUT_split_3x6_3_ex2(
  //,-------------------------------------------------------------.           ,-------------------------------------------------------------.
     MI_A3  , MI_Gs3 , MI_G3  , MI_Fs3 , MI_F3  , MI_E3  , MI_Eb3 ,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|           |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, TG(7)
                                      //`--------------------------'            `--------------------------'
  ),


};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
