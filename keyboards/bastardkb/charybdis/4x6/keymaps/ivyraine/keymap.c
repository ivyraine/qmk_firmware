/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_LOWER,
    LAYER_RAISE,
};

#define LOWER MO(LAYER_LOWER)
#define RAISE MO(LAYER_RAISE)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT(
     // need to put in x and z
  // ╭────────────────────────────────────────────────────────────────────────────────────────────────────────────╮ ╭────────────────────────────────────────────────────────────────────────────────────╮
        MO(LAYER_RAISE),       KC_1,             KC_2,             KC_3,             KC_4,             KC_5,          KC_6,          KC_7,          KC_8,          KC_9,          KC_0,          KC_MINS,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────────────────┤
        KC_TAB,                KC_L,             KC_H,             KC_D,             KC_C,             KC_LBRC,       KC_RBRC,       KC_W,          KC_V,          KC_COMM,       KC_SCLN,       KC_SLSH,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────────────────┤
        KC_ESC,                KC_R,             KC_N,             KC_S,             KC_T,             KC_P,          KC_U,          KC_I,          KC_A,          KC_E,          KC_O,          KC_ENT,
  // ├────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────────────────┤
        KC_J,                  MT(MOD_LSFT, KC_GRV),KC_M,          KC_B,             KC_F,             KC_G,          KC_QUOT,       KC_Y,          KC_K,          KC_DOT,        KC_RSFT,       KC_Q,          
  // ╰────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├────────────────────────────────────────────────────────────────────────────────────╯
                                                                MT(MOD_LCTL, KC_Z),     KC_SPC,   KC_BTN1,             KC_BSPC,  MT(MOD_RGUI, KC_PGUP),   /* MacOS */
                                                            //     MT(MOD_LCTL, KC_Z),     KC_SPC,   KC_BTN1,             KC_BSPC,  MT(MOD_RCTL, KC_PGUP), /* Non-MacOS*/
                                                                        MT(MOD_LALT, KC_X),       KC_LGUI,            MT(MOD_RALT, KC_PGDN)
  //                                                                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_LOWER] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       RGB_MOD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_LBRC,   KC_P7,   KC_P8,   KC_P9, KC_RBRC, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       RGB_TOG, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,    KC_PPLS,   KC_P4,   KC_P5,   KC_P6, KC_PMNS, KC_PEQL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
      RGB_RMOD, XXXXXXX, XXXXXXX, XXXXXXX, EE_CLR,  QK_BOOT,    KC_PAST,   KC_P1,   KC_P2,   KC_P3, KC_PSLS, KC_PDOT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  XXXXXXX, XXXXXXX, _______,    XXXXXXX, _______,
                                           XXXXXXX, XXXXXXX,      KC_P0
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_RAISE] = LAYOUT(
  // ╭───────────────────────────────────────────────────────────────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────────────────────────────────────────────╮
       KC_F1,                KC_F2,              KC_F3,            KC_F4,               KC_F5,              KC_F6,       KC_F7,           KC_F8,           KC_F9,           KC_F10,          KC_F11,          KC_F12,            
  // ├───────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────────────────────────────────────────────┤
       KC_BRIGHTNESS_DOWN,   KC_BRIGHTNESS_UP,   KC_AUDIO_MUTE,    KC_AUDIO_VOL_DOWN,   KC_AUDIO_VOL_UP,    XXXXXXX,     XXXXXXX,         XXXXXXX,         XXXXXXX,         KC_UP,           XXXXXXX,         XXXXXXX,
  // ├───────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────────────────────────────────────────────┤
       KC_CAPS_LOCK,         KC_LEFT,            KC_UP,            KC_DOWN,             KC_RGHT,            XXXXXXX,     XXXXXXX,         KC_RSFT,         KC_LEFT,         KC_DOWN,         KC_RIGHT,        KC_MUTE,
  // ├───────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────────────────────────────────────────────┤
       KC_MPRV,              KC_HOME,            KC_PGUP,          KC_PGDN,             KC_END,             XXXXXXX,     QK_BOOT,         EE_CLR,          XXXXXXX,         XXXXXXX,         XXXXXXX,         KC_VOLD,
  // ╰───────────────────────────────────────────────────────────────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────────────────────────────────────────────╯
                                  _______, _______, XXXXXXX,    _______, XXXXXXX,
                                           _______, _______,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on

// ko_make_basic(modifiers, key, replacement)
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t underscore_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SPC, KC_UNDERSCORE);
const key_override_t mouse_2_override = ko_make_basic(MOD_MASK_SHIFT, KC_BTN1, KC_BTN2);
const key_override_t mouse_3_override = ko_make_basic(MOD_MASK_CTRL, KC_BTN1, KC_BTN3);
const key_override_t shift_pgup_to_end_override = ko_make_basic(MOD_MASK_SHIFT, KC_PGUP, KC_END);
const key_override_t shift_pgdn_to_home_override = ko_make_basic(MOD_MASK_SHIFT, KC_PGDN, KC_HOME);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
     &underscore_key_override,
     &mouse_2_override,
     &mouse_3_override,
     &shift_pgup_to_end_override,
     &shift_pgdn_to_home_override,
	NULL // Null terminate the array of overrides!
};