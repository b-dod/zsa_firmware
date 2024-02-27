
//
//     Key Position Names for a 34 (-54) key split form factor
//        Should cover Ferris through Atreus-Kyria-Ergodox
//     ╭─────────────────────╮                  ╭─────────────────────╮
// LT5 │ LT4 LT3 LT2 LT1 LT0 │ LTA          RTB │ RT0 RT1 RT2 RT3 RT4 │ RT5
// LM5 │ LM4 LM3 LM2 LM1 LM0 | LMA          RMA | RT0 RM1 RM2 RM3 RM4 │ RM5
// LB5 │ LB4 LB3 LB2 LB1 LB0 │ LBA LBB  RBB RBA │ RB0 RB1 RB2 RB3 RB4 │ RB5
//     ╰───────────╮ LH2 LH1 │ LH0 LHA  RHA RH0 │ RH1 RH2 ╭───────────╯
//     LH5 LH4 LH3 ╰─────────╯                  ╰─────────╯ RH3 RH4 RH5
//
// These definitions based on Hands Down Neu & variations'
// combo keycodes defined in the variation config
// ex "handsdonu-config.h"
//
// Combo definitions defined spatially
// Other variation dependent combos have predetermined
// positions for 34 key boards

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

combo_t key_combos[] = {
    [HC_combo0] = COMBO_ACTION(combo0),
    [HC_combo1] = COMBO_ACTION(combo1),
    [HC_combo2] = COMBO_ACTION(combo2),
    [HC_combo3] = COMBO_ACTION(combo3),
    [HC_combo4] = COMBO_ACTION(combo4),
    [HC_combo5] = COMBO_ACTION(combo5),
    [HC_combo6] = COMBO_ACTION(combo6),
    [HC_combo7] = COMBO_ACTION(combo7),
    [HC_combo8] = COMBO_ACTION(combo8),
    [HC_combo9] = COMBO_ACTION(combo9),
    [HC_combo10] = COMBO_ACTION(combo10),
    [HC_combo11] = COMBO_ACTION(combo11),
    [HC_combo12] = COMBO_ACTION(combo12),
    [HC_combo13] = COMBO_ACTION(combo13),
    [HC_combo14] = COMBO_ACTION(combo14),
    [HC_combo15] = COMBO_ACTION(combo15),
    [HC_combo16] = COMBO_ACTION(combo16),
    [HC_combo17] = COMBO(combo17, KC_Q),
    [HC_combo18] = COMBO(combo18, RSFT(KC_Q)),
    [HC_combo19] = COMBO(combo19, KC_Z),
    [HC_combo20] = COMBO(combo20, RSFT(KC_Z)),
    [HC_combo21] = COMBO_ACTION(combo21),
    [HC_combo22] = COMBO(combo22, LALT(KC_BSPC)),
    [HC_combo23] = COMBO(combo23, LGUI(KC_Z)),
    [HC_combo24] = COMBO(combo24, LGUI(KC_X)),
    [HC_combo25] = COMBO(combo25, LGUI(KC_C)),
    [HC_combo26] = COMBO(combo26, LGUI(KC_V)),
    [HC_combo27] = COMBO(combo27, KC_ESCAPE),
    [HC_combo28] = COMBO(combo28, KC_TAB),
    [HC_combo29] = COMBO(combo29, LGUI(KC_A)),
    [HC_combo30] = COMBO(combo30, LGUI(KC_F)),
    [HC_combo31] = COMBO_ACTION(combo31),
    [HC_combo32] = COMBO_ACTION(combo32)
};
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */