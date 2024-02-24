#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

/*
#ifdef COMBO_ENABLE
#include HD_combo_def // this has the combo definitions
#endif
*/

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  MAC_SIRI,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_J,           KC_G,           KC_M,           KC_P,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT,        KC_SCLN,         KC_DOT,       KC_SLASH,        KC_DQUO,       KC_QUOTE, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_R,           KC_S,           KC_N,           KC_D,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT,       KC_COMMA, MT(MOD_RGUI, KC_A),       KC_E,           KC_I,           KC_H, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_X,           KC_F,           KC_L,           KC_C,           KC_W,                                                                                 KC_MINUS,           KC_U,           KC_O,           KC_Y,           KC_K, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                                        LT(3,KC_T),  LT(2,KC_BSPC), KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(1,KC_ENTER), MT(MOD_RSFT, KC_SPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT,           KC_Z,           KC_Q, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,        KC_BSLS,       KC_GRAVE, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT,        KC_LBRC, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT,        KC_RBRC, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RSFT, KC_SPACE)
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT,    TD(DANCE_0),          KC_UP, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT,           KC_7,           KC_8,           KC_9,       KC_MINUS, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT,        KC_LEFT,        KC_DOWN,       KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT,    TD(DANCE_1),           KC_4,           KC_5,           KC_6,        KC_PLUS, KC_TRANSPARENT, 
    KC_TRANSPARENT,        KC_CAPS, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT,           KC_1,           KC_2,           KC_3,       KC_EQUAL, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT,         KC_DOT, KC_0
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT,    TD(DANCE_3),        KC_BSPC,      KC_DELETE,    TD(DANCE_2), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT,        KC_HOME,          KC_UP,        KC_PGUP, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT,  OSM(MOD_RCTL),  OSM(MOD_RALT),  OSM(MOD_RGUI),  OSM(MOD_RSFT), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT,        KC_LEFT,        KC_DOWN,       KC_RIGHT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, CW_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, MAC_SIRI,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT,         KC_END, KC_TRANSPARENT,        KC_PGDN, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { KC_G, KC_M, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_G, KC_M, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_M, KC_P, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_P, KC_M, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_N, KC_D, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_N, KC_D, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_S, KC_N, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_N, KC_S, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_H, KC_I, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_I, KC_H, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_E, KC_I, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM combo13[] = { MT(MOD_RSFT, KC_SPACE), KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM combo14[] = { MT(MOD_RGUI, KC_A), KC_E, COMBO_END};
const uint16_t PROGMEM combo15[] = { MT(MOD_RSFT, KC_SPACE), MT(MOD_RGUI, KC_A), KC_E, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_U, KC_Y, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_J, KC_G, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_J, KC_G, MT(MOD_RSFT, KC_SPACE), COMBO_END};
const uint16_t PROGMEM combo21[] = { KC_P, KC_V, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_BSPC, KC_DELETE, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_X, KC_F, COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_X, KC_L, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_F, KC_L, COMBO_END};
const uint16_t PROGMEM combo26[] = { KC_L, KC_C, KC_F, COMBO_END};
const uint16_t PROGMEM combo27[] = { KC_R, KC_D, COMBO_END};
const uint16_t PROGMEM combo28[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM combo29[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo30[] = { KC_C, KC_W, COMBO_END};
const uint16_t PROGMEM combo31[] = { KC_X, KC_L, KC_C, COMBO_END};
const uint16_t PROGMEM combo32[] = { MT(MOD_RSFT, KC_SPACE), KC_C, KC_L, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_0),
    COMBO(combo1, ST_MACRO_1),
    COMBO(combo2, ST_MACRO_2),
    COMBO(combo3, ST_MACRO_3),
    COMBO(combo4, ST_MACRO_4),
    COMBO(combo5, ST_MACRO_5),
    COMBO(combo6, ST_MACRO_6),
    COMBO(combo7, ST_MACRO_7),
    COMBO(combo8, ST_MACRO_8),
    COMBO(combo9, ST_MACRO_9),
    COMBO(combo10, ST_MACRO_10),
    COMBO(combo11, ST_MACRO_11),
    COMBO(combo12, ST_MACRO_12),
    COMBO(combo13, ST_MACRO_13),
    COMBO(combo14, ST_MACRO_14),
    COMBO(combo15, ST_MACRO_15),
    COMBO(combo16, ST_MACRO_16),
    COMBO(combo17, KC_Q),
    COMBO(combo18, RSFT(KC_Q)),
    COMBO(combo19, KC_Z),
    COMBO(combo20, RSFT(KC_Z)),
    COMBO(combo21, ST_MACRO_17),
    COMBO(combo22, LALT(KC_BSPC)),
    COMBO(combo23, LGUI(KC_Z)),
    COMBO(combo24, LGUI(KC_X)),
    COMBO(combo25, LGUI(KC_C)),
    COMBO(combo26, LGUI(KC_V)),
    COMBO(combo27, KC_ESCAPE),
    COMBO(combo28, KC_TAB),
    COMBO(combo29, LGUI(KC_A)),
    COMBO(combo30, LGUI(KC_F)),
    COMBO(combo31, ST_MACRO_18),
    COMBO(combo32, ST_MACRO_19),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255} },

    [1] = { {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255} },

    [2] = { {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255} },

    [3] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_G)) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_P) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_P)) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_T)) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_S)) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_W)) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(90) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_E)) SS_DELAY(90) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(90) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_U)) SS_DELAY(90) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(90) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_A)) SS_DELAY(90) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(90) SS_TAP(X_V));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)) SS_DELAY(90) SS_LGUI(SS_LSFT(SS_TAP(X_RIGHT))));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_C)) SS_DELAY(90) SS_TAP(X_H));
    }
    break;
    case MAC_SIRI:
      HCS(0xCF);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(LGUI(LSFT(KC_O))))); break;
        case DOUBLE_TAP: register_code16(KC_LPRN); register_code16(KC_LPRN); break;
        case DOUBLE_HOLD: register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_O))))); break;
        case DOUBLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_HOLD: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ASTR);
        tap_code16(KC_ASTR);
        tap_code16(KC_ASTR);
    }
    if(state->count > 3) {
        tap_code16(KC_ASTR);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_ASTR); break;
        case SINGLE_HOLD: register_code16(KC_SLASH); break;
        case DOUBLE_TAP: register_code16(KC_ASTR); register_code16(KC_ASTR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ASTR); register_code16(KC_ASTR);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_ASTR); break;
        case SINGLE_HOLD: unregister_code16(KC_SLASH); break;
        case DOUBLE_TAP: unregister_code16(KC_ASTR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ASTR); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_4)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_4)))));
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_4)))));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(LGUI(LSFT(KC_4)))));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(LGUI(KC_4)))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); register_code16(LALT(LCTL(LGUI(LSFT(KC_4)))));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(LGUI(KC_4)))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(LGUI(LSFT(KC_4))))); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};
