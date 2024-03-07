#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL


#ifdef COMBO_ENABLE
#include HD_combo_def // this has the combo definitions
#endif

/*
enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  MAC_SIRI,
};
*/
/*
enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};
*/
#define ______ KC_TRNS
#define __no__ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_HD] = LAYOUT_moonlander(
    ______, ______, ______, ______, ______, ______, ______,                 ______, ______, ______, ______, ______, ______, ______, 
    ______, HD_LT4, HD_LT3, HD_LT2, HD_LT1, HD_LT0, ______,                 ______, HD_RT0, HD_RT1, HD_RT2, HD_RT3, HD_RT4, ______, 
    ______, HD_LM4, HD_LM3, HD_LM2, HD_LM1, HD_LM0, ______,                 ______, HD_RM0, HD_RM1, HD_RM2, HD_RM3, HD_RM4, ______, 
    ______, HD_LB4, HD_LB3, HD_LB2, HD_LB1, HD_LB0,                                 HD_RB0, HD_RB1, HD_RB2, HD_RB3, HD_RB4, ______, 
    ______, ______, ______, ______, HD_LH3,         ______,                 ______,         ______, ______, ______, ______, ______, 
                                            HD_LH2, HD_LH1, ______, ______, HD_RH1, HD_RH2
  ),
  [L_SYM] = LAYOUT_moonlander(
    ______, ______, ______, ______, ______, ______, ______,                 ______, ______, ______, ______, ______, ______, ______, 
    ______, LS_LT4, LS_LT3, ______, ______, ______, ______,                 ______, ______, ______, KC_BSLS, ______, ______, ______, 
    ______, LS_LM4, LS_LM3, LS_LM2, LS_LM1, ______, ______,                 ______, ______, LS_RM1, LS_RM2, LS_RM3, LS_RM4, ______, 
    ______, LS_LB4, LS_LB3, LS_LB2, LS_LB1, LS_LB0,                                 LS_RB0, LS_RB1, LS_RB2, LS_RB3, LS_RB4, ______, 
    ______, ______, ______, ______, ______,         ______,                 ______,         ______, ______, ______, ______, ______, 
                                            LS_LH2, LS_LH1, ______, ______, ______, ______
  ),
  [L_FUN] = LAYOUT_moonlander(
    ______, ______, ______, ______, ______, ______, ______,                 ______, ______, ______, ______, ______, ______, ______, 
    ______, ______, ______, KC_UP, ______, ______, ______,             ______, KC_SLSH, KC_7, KC_8, KC_9, KC_MINUS, ______, 
    ______, ______, KC_LEFT, KC_DOWN, KC_RIGHT, ______, ______,             ______, KC_PAST, KC_4, KC_5, KC_6, KC_PLUS, ______, 
    ______, KC_CAPS, ______, ______, ______, ______,                                ______, KC_1, KC_2, KC_3, KC_EQUAL, ______, 
    ______, ______, ______, ______, ______,        ______,                 ______,          ______, ______, ______, ______, ______, 
                                           ______, ______, ______, ______, KC_DOT, KC_0
  ),
  [L_NAV] = LAYOUT_moonlander(
    ______, ______, ______, ______, ______, ______, ______,                 ______, ______, ______, ______, ______, ______, ______, 
    ______, ______, KC_BSPC, LV_LT2, LV_LT1, ______, ______,   ______, ______, KC_HOME, KC_UP, KC_PGUP, ______, ______, 
    ______, LV_LM4, LV_LM3, LV_LM2, LV_LM1, LV_LM0, ______,             ______, ______, KC_LEFT, KC_DOWN, KC_RIGHT, ______, ______, 
    ______, LV_LB4, ______, ______, MAC_SIRI, ______,                             ______, KC_END, ______, KC_PGDN, ______, ______, 
    ______, ______, ______, ______, ______,         ______,                 ______,         ______, ______, ______, ______, ______, 
                                            ______, ______, ______, ______, ______, ______
  ),
    [L_CFG] = LAYOUT_moonlander(
    ______, ______, ______, ______, ______, ______, ______,                 ______, ______, ______, ______, ______, ______, ______, 
    ______, ______, LC_LT3, LC_LT2, LC_LT1, LC_LT0, ______,                 ______, ______, ______, ______, ______, ______, ______, 
    ______, LC_LM4, ______, ______, ______, ______, ______,                 ______, ______, ______, ______, ______, ______, ______, 
    ______, LC_LB4, ______, ______, ______, ______,                                 ______, ______, ______, ______, ______, ______, 
    ______, ______, ______, ______, ______,         ______,                 ______,         ______, ______, ______, ______, ______, 
                                            ______, ______, ______, ______, ______, ______
  ),
};
/*
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [L_HD] = { {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255}, {82,56,255} },

    [L_SYM] = { {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255}, {74,126,255} },

    [L_FUN] = { {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255}, {74,186,255} },

    [L_NAV] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

    [L_CFG] = { {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255} },

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
    case L_HD:
      set_layer_color(0);
      break;
    case L_SYM:
      set_layer_color(1);
      break;
    case L_FUN:
      set_layer_color(2);
      break;
    case L_NAV:
      set_layer_color(3);
      break;
    case L_CFG:
      set_layer_color(1);
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}
*/
/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
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
*/
/*
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
*/
