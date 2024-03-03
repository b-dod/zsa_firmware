
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

const uint16_t PROGMEM combo0[] = { HD_Gh_keys, COMBO_END};
const uint16_t PROGMEM combo1[] = { HD_Gh_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo2[] = { HD_Ph_keys, COMBO_END};
const uint16_t PROGMEM combo3[] = { HD_Ph_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo4[] = { HD_Th_keys, COMBO_END};
const uint16_t PROGMEM combo5[] = { HD_Th_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo6[] = { HD_Sh_keys, COMBO_END};
const uint16_t PROGMEM combo7[] = { HD_Sh_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo8[] = { HD_Wh_keys, COMBO_END};
const uint16_t PROGMEM combo9[] = { HD_Wh_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo10[] = { HD_RM2, HD_RM3, COMBO_END};
const uint16_t PROGMEM combo11[] = { HD_RM2, HD_RM3, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo12[] = { HD_RB1, HD_RB2, COMBO_END};
const uint16_t PROGMEM combo13[] = { HD_RH2, HD_RB1, HD_RB2, COMBO_END};
const uint16_t PROGMEM combo14[] = { HD_RM1, HD_RM2, COMBO_END};
const uint16_t PROGMEM combo15[] = { HD_RM1, HD_RM2, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo16[] = { HD_Ch_keys, COMBO_END};
const uint16_t PROGMEM combo17[] = { HD_Qu_keys, COMBO_END};
const uint16_t PROGMEM combo18[] = { HD_Qu_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo19[] = { HD_L1_keys, COMBO_END};
const uint16_t PROGMEM combo20[] = { HD_L1_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo21[] = { HD_LT1, HD_LT0, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_BSPC, KC_DELETE, COMBO_END};
const uint16_t PROGMEM combo23[] = { HD_undo_keys, COMBO_END};
const uint16_t PROGMEM combo24[] = { HD_LB4, HD_LB2, COMBO_END};
const uint16_t PROGMEM combo25[] = { HD_copy_keys, COMBO_END};
const uint16_t PROGMEM combo26[] = { HD_pste_keys, COMBO_END};
const uint16_t PROGMEM combo28[] = { HD_tab_keys, COMBO_END};
const uint16_t PROGMEM combo29[] = { HD_sall_keys, COMBO_END};
const uint16_t PROGMEM combo30[] = { HD_find_keys, COMBO_END};
const uint16_t PROGMEM combo31[] = { HD_slne_keys, COMBO_END};
const uint16_t PROGMEM combo32[] = { HD_Ch_keys, HD_RH2, COMBO_END};
const uint16_t PROGMEM combo33[] = { HD_stab_keys, COMBO_END};
const uint16_t PROGMEM combo34[] = { HD_swrd_keys, COMBO_END};
const uint16_t PROGMEM Hspc_combo[] = {HD_spc_keys, COMBO_END};    // SPACE
const uint16_t PROGMEM Hent_combo[] = {HD_ent_keys, COMBO_END};    // ENTER
const uint16_t PROGMEM Hent2_combo[] = {HD_ent2_keys, COMBO_END};  // hard-ENTER/page break

// Off map and other letter/symbol thingies typically on keyboard

// RIGHT HAND
// should work for most Neu variations (Gold/Titanium/Rhodium/Vibranium)
// Bronze/Silver/Platinum (C on right hand, H on left/thumb) may need changes...
//
const uint16_t PROGMEM F_ESC_combo[] = {HD_esc_keys, COMBO_END}; // ESCape
// const uint16_t PROGMEM Hndsh_combo[] = {HD_RB0, HD_RB1, COMBO_END}; // – n dash
// const uint16_t PROGMEM Hmdsh_combo[] = {HD_RB0, HD_RB2, COMBO_END}; // — m dash
// const uint16_t PROGMEM Htild_combo[] = {HD_RB1, HD_RB4, COMBO_END}; // ~ tilde (not the deadkey for eñye)
// const uint16_t PROGMEM Hunds_combo[] = {HD_RB1, HD_RB3, COMBO_END}; // _ underscore
// const uint16_t PROGMEM Hequal_combo[] = {HD_RB2, HD_RB3, COMBO_END}; // = equal (hold for %)

// spatially arranged characters and diacritics
// const uint16_t PROGMEM Hscln_combo[] = {HD_RM0, HD_RM1, COMBO_END}; // ; semicolon
// const uint16_t PROGMEM Hcoln_combo[] = {HD_RT1, HD_RT3, COMBO_END}; // : colon
// const uint16_t PROGMEM Hexlm_combo[] = {HD_RT1, HD_RT2, COMBO_END}; // !
// const uint16_t PROGMEM Hques_combo[] = {HD_RT2, HD_RT3, COMBO_END}; // ?
// const uint16_t PROGMEM Hdolr_combo[] = {HD_RT2, HD_RT4, COMBO_END}; // " DOUBLE QUOTE  // " hijacked for $
const uint16_t PROGMEM Htic_combo[] = {HD_RT3, HD_RT4, COMBO_END}; // ` tic (not dead key grave)

// const uint16_t PROGMEM Hhash_combo[] = {HD_RT0, HD_RT2, COMBO_END}; // # HASH hijacked for §
// const uint16_t PROGMEM Hat_combo[] = {HD_RT0, HD_RT1, COMBO_END}; // @

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
    [FC_ESC] = COMBO(F_ESC_combo, KC_ESCAPE),
    [HC_combo28] = COMBO(combo28, KC_TAB),
    [HC_combo29] = COMBO(combo29, LGUI(KC_A)),
    [HC_combo30] = COMBO(combo30, LGUI(KC_F)),
    [HC_combo31] = COMBO_ACTION(combo31),
    [HC_combo32] = COMBO_ACTION(combo32),
    [HC_combo33] = COMBO(combo33, RSFT(KC_TAB)),
    [HC_combo34] = COMBO_ACTION(combo34),
    [HC_TIC] = COMBO(Htic_combo, KC_GRAVE),  // ` (not dead)
    [HC_SPC] = COMBO(Hspc_combo, KC_SPC), // SPACE
    [HC_ENT] = COMBO(Hent_combo, KC_ENT), // ENTER
    [HC_ENT2] = COMBO(Hent2_combo, LGUI(KC_ENT)) // hard-ENTER
};
/* COMBO_ACTION(x) is same as COMBO(x, KC_NO) */