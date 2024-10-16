
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

const uint16_t PROGMEM HC_cfg_combo[] = {HD_RH1, HD_RH2, COMBO_END}; // keyboard settings/config layer
#ifdef APPMENU_keys
const uint16_t PROGMEM H_menu_combo[] = {APPMENU_keys, COMBO_END}; // AppMENU
const uint16_t PROGMEM H_menu_nav_combo[] = {APPMENU_nav_keys, COMBO_END}; // AppMENU
#else
const uint16_t PROGMEM H_menu_combo[] = {HD_LB3, HD_LB1, COMBO_END}; // AppMENU // default Appmenu location
const uint16_t PROGMEM H_menu_nav_combo[] = {LN_LB3, LN_LB1, COMBO_END}; // AppMENU on Nav layer
#endif

// Spatially arranged on the QWERTY ZXCV locations
//
const uint16_t PROGMEM Htab_combo[] = {HD_tab_keys, COMBO_END};    // tab
const uint16_t PROGMEM Hstab_combo[] = {HD_stab_keys, COMBO_END};  // shift-tab
const uint16_t PROGMEM Hspc_combo[] = {HD_spc_keys, COMBO_END};    // SPACE
const uint16_t PROGMEM Hent_combo[] = {HD_ent_keys, COMBO_END};    // ENTER
const uint16_t PROGMEM Hent2_combo[] = {HD_ent2_keys, COMBO_END};  // hard-ENTER/page break
const uint16_t PROGMEM Hent3_combo[] = {HD_ent3_keys, COMBO_END};  // Semkey "Next Paragraph" then ENTER

// SEMANTIC FUNCTIONS  ** usinp SemKeys **
const uint16_t PROGMEM Hnew_combo[] = {HD_new_keys, COMBO_END}; // new
const uint16_t PROGMEM Hopen_combo[] = {HD_open_keys, COMBO_END}; // open
const uint16_t PROGMEM Hclose_combo[] = {HD_close_keys, COMBO_END}; // close
const uint16_t PROGMEM Hquit_combo[] = {HD_quit_keys, COMBO_END}; // quit
const uint16_t PROGMEM Hsave_combo[] = {HD_save_keys, COMBO_END}; // save
const uint16_t PROGMEM Hfind_combo[] = {HD_find_keys, COMBO_END}; // find selection
const uint16_t PROGMEM Hsall_combo[] = {HD_sall_keys, COMBO_END}; // select all
const uint16_t PROGMEM Hswrd_combo[] = {HD_swrd_keys, COMBO_END}; // select word
//const uint16_t PROGMEM Hslne_combo[] = {HD_slne_keys, COMBO_END}; // select word
const uint16_t PROGMEM Hundo_combo[] = {HD_undo_keys, COMBO_END}; // undo
const uint16_t PROGMEM Hredo_combo[] = {HD_redo_keys, COMBO_END}; // redo
const uint16_t PROGMEM Hcopy_combo[] = {HD_copy_keys, COMBO_END}; // copy (hold for cut)
const uint16_t PROGMEM Hpste_combo[] = {HD_pste_keys, COMBO_END}; // paste (hold for paste-match)




/* examples of text entry combos */
const uint16_t PROGMEM H_Left_combo[] = {HD_LT3, HD_LT2, HD_LT1, COMBO_END}; // SIRI
const uint16_t PROGMEM H_Right_combo[] = {HD_RT1, HD_RT2, HD_RT3, COMBO_END}; // some demonstrator macro placeholder

const uint16_t PROGMEM F_KILL_combo[] = {HD_RT3, HD_RT0, COMBO_END}; // KILL = Force quit OR CTRL-ALT-DEL
const uint16_t PROGMEM F_SCLP_combo[] = {HD_LT2, HD_LT1, HD_LT0, COMBO_END}; // SCREEN shot SELECTION to clipboard
const uint16_t PROGMEM F_SCAP_combo[] = {HD_LT3, HD_LT2, HD_LT1, HD_LT0, COMBO_END}; //  SCREEN shot SELECTION to file


const uint16_t PROGMEM F_CAPS_combo[] = {HD_LM3, HD_LM2, HD_RM2, HD_RM3, COMBO_END}; // CAPS LOCK (on until hit again)
const uint16_t PROGMEM H_CAPW_combo[] = {HD_LM1, HD_LM2, HD_RM1, HD_RM2, COMBO_END}; // CAPS WORD (on until word delimiter)
//const uint16_t PROGMEM H_EISUU_combo[] = {HD_LM3, HD_LM2, HD_LM1, COMBO_END}; // KC_MHEN
//const uint16_t PROGMEM H_KANA_combo[] = {HD_RM3, HD_RM2, HD_RM1, COMBO_END}; // KC_HENK



// Off map and other letter/symbol thingies typically on keyboard

// RIGHT HAND
// should work for most Neu variations (Gold/Titanium/Rhodium/Vibranium)
// Bronze/Silver/Platinum (C on right hand, H on left/thumb) may need changes...
//
const uint16_t PROGMEM F_ESC_combo[] = {HD_esc_keys, COMBO_END}; // ESCape
const uint16_t PROGMEM Hndsh_combo[] = {HD_RB0, HD_RB1, COMBO_END}; // – n dash
const uint16_t PROGMEM Hmdsh_combo[] = {HD_RB0, HD_RB2, COMBO_END}; // — m dash
const uint16_t PROGMEM Htild_combo[] = {HD_RB1, HD_RB4, COMBO_END}; // ~ tilde (not the deadkey for eñye)
const uint16_t PROGMEM Hunds_combo[] = {HD_RB1, HD_RB3, COMBO_END}; // _ underscore
const uint16_t PROGMEM Hequal_combo[] = {HD_RB2, HD_RB3, COMBO_END}; // = equal (hold for %)
//const uint16_t PROGMEM Hpercent_combo[] = {HD_RB3, HD_RB4, COMBO_END}; // % percent


// spatially arranged characters and diacritics
const uint16_t PROGMEM Hscln_combo[] = {HD_RM0, HD_RM1, COMBO_END}; // ; semicolon
const uint16_t PROGMEM Hcoln_combo[] = {HD_RT1, HD_RT3, COMBO_END}; // : colon
const uint16_t PROGMEM Hexlm_combo[] = {HD_RT1, HD_RT2, COMBO_END}; // !
const uint16_t PROGMEM Hques_combo[] = {HD_RT2, HD_RT3, COMBO_END}; // ?
const uint16_t PROGMEM Hdolr_combo[] = {HD_RT2, HD_RT4, COMBO_END}; // " DOUBLE QUOTE  // " hijacked for $
const uint16_t PROGMEM Htic_combo[] = {HD_RT3, HD_RT4, COMBO_END}; // ` tic (not dead key grave)

const uint16_t PROGMEM Hhash_combo[] = {HD_RT0, HD_RT2, COMBO_END}; // # HASH hijacked for §
const uint16_t PROGMEM Hat_combo[] = {HD_RT0, HD_RT1, COMBO_END}; // @

// spatially arranged diacritics
//const uint16_t PROGMEM Hdier_combo[] = {HD_RB1, HD_RB2, COMBO_END}; // ¨ dieresis (dead key)
//const uint16_t PROGMEM Henye_combo[] = {HD_LT4, HD_LT0, COMBO_END}; // ˜ enye (dead key) (ñ only?)
//const uint16_t PROGMEM Hacut_combo[] = {HD_RM1, HD_RM2, COMBO_END}; // ´ acute (dead key)é

// for Neu/Au/Ti/Rh
//const uint16_t PROGMEM Hgrv_combo[] = {HD_RM2, HD_RM3, COMBO_END}; // ` grave (dead key)
//const uint16_t PROGMEM Hcirc_combo[] = {HD_RM1, HD_RM3, COMBO_END}; // ˆ circumflex (dead key)
//const uint16_t PROGMEM Hmacr_combo[] = {HD_RM2, HD_RM4, COMBO_END}; // - macron (dead key)
//const uint16_t PROGMEM Hring_combo[] = {HD_RM1, HD_RM4, COMBO_END}; // ˚ ring (dead key)
//const uint16_t PROGMEM Hcedi_combo[] = {HD_LM4, HD_LM2, COMBO_END}; // ¸ cedille (dead key)
//const uint16_t PROGMEM Hoslsh_combo[] = {HD_RB2, HD_LB0, COMBO_END}; // ø/Ø or Wh

// TEXT ENTRY - off map standard alphas (also on Layer L_SYM @ J & G respectively)byby=
const uint16_t PROGMEM H_Q_combo[] = {HD_Qu_keys, COMBO_END}; // TYPE "q" (Qu & Linger deletes u)
const uint16_t PROGMEM H_L1_combo[] = {HD_L1_keys, COMBO_END}; // ex. TYPE "z"
//const uint16_t PROGMEM H_L2_combo[] = {HD_L2_keys, COMBO_END}; // ex. TYPE "x"
//const uint16_t PROGMEM H_L3_combo[] = {HD_L3_keys, COMBO_END}; // ex. TYPE "j"

// H digraph combos (ideally, these are phonetically/mnemonically arranged

const uint16_t PROGMEM H_Th_combo[] = {HD_Th_keys, COMBO_END}; // TYPE "th"
const uint16_t PROGMEM H_Ch_combo[] = {HD_Ch_keys, COMBO_END}; // TYPE "ch"
const uint16_t PROGMEM H_Wh_combo[] = {HD_Wh_keys, COMBO_END}; // TYPE "wh"
const uint16_t PROGMEM H_Sh_combo[] = {HD_Sh_keys, COMBO_END}; // TYPE "sh"
const uint16_t PROGMEM H_Ph_combo[] = {HD_Ph_keys, COMBO_END}; // TYPE "ph"
const uint16_t PROGMEM H_Gh_combo[] = {HD_Gh_keys, COMBO_END}; // TYPE "gh"
const uint16_t PROGMEM H_Sch_combo[] = {HD_Sch_keys, COMBO_END}; // TYPE "Sch"

//
// 'ing' combos
//
const uint16_t PROGMEM H_xing_combo[] = {HD_xing_keys, COMBO_END}; // TYPE "xing"
const uint16_t PROGMEM H_wing_combo[] = {HD_wing_keys, COMBO_END}; // TYPE "wing"
const uint16_t PROGMEM H_ming_combo[] = {HD_ming_keys, COMBO_END}; // TYPE "ming"
const uint16_t PROGMEM H_ging_combo[] = {HD_ging_keys, COMBO_END}; // TYPE "ging"
const uint16_t PROGMEM H_jing_combo[] = {HD_jing_keys, COMBO_END}; // TYPE "jing"
const uint16_t PROGMEM H_sing_combo[] = {HD_sing_keys, COMBO_END}; // TYPE "sing"
const uint16_t PROGMEM H_cing_combo[] = {HD_cing_keys, COMBO_END}; // TYPE "cing"
const uint16_t PROGMEM H_ning_combo[] = {HD_ning_keys, COMBO_END}; // TYPE "ning"
const uint16_t PROGMEM H_ting_combo[] = {HD_ting_keys, COMBO_END}; // TYPE "ting"
const uint16_t PROGMEM H_king_combo[] = {HD_king_keys, COMBO_END}; // TYPE "king"
const uint16_t PROGMEM H_bing_combo[] = {HD_bing_keys, COMBO_END}; // TYPE "bing"
const uint16_t PROGMEM H_ping_combo[] = {HD_ping_keys, COMBO_END}; // TYPE "ping"
const uint16_t PROGMEM H_ling_combo[] = {HD_ling_keys, COMBO_END}; // TYPE "ling"
const uint16_t PROGMEM H_ding_combo[] = {HD_ding_keys, COMBO_END}; // TYPE "ding"
const uint16_t PROGMEM H_ving_combo[] = {HD_ving_keys, COMBO_END}; // TYPE "ving"
const uint16_t PROGMEM H_ring_combo[] = {HD_ring_keys, COMBO_END}; // TYPE "ring"
const uint16_t PROGMEM H_quing_combo[] = {HD_quing_keys, COMBO_END}; // TYPE "quing"
const uint16_t PROGMEM H_zing_combo[] = {HD_zing_keys, COMBO_END}; // TYPE "zing"
const uint16_t PROGMEM H_shing_combo[] = {HD_shing_keys, COMBO_END}; // TYPE "shing"
const uint16_t PROGMEM H_ching_combo[] = {HD_ching_keys, COMBO_END}; // TYPE "ching"
const uint16_t PROGMEM H_thing_combo[] = {HD_thing_keys, COMBO_END}; // TYPE "thing"
const uint16_t PROGMEM H_phing_combo[] = {HD_phing_keys, COMBO_END}; // TYPE "phing"
const uint16_t PROGMEM H_whing_combo[] = {HD_whing_keys, COMBO_END}; // TYPE "whing"

// TEXT ENTRY - (ANY ROW/ MIXED ROWS)

//const uint16_t PROGMEM HOE_lig_combo[] = {HD_OE_lig_keys, COMBO_END}; // Œ
//const uint16_t PROGMEM HAE_lig_combo[] = {HD_AE_lig_keys, COMBO_END}; // Æ


// Fast 4grams

#ifdef EN_PRONOUN_COMBOS // the entirely unnecessary pronoun combo shenanigans

// PRONOUNS Fast 4-7grams
const uint16_t PROGMEM H_Icap_combo[] = {HD_Icap_keys, COMBO_END}; // TYPE "I"
const uint16_t PROGMEM H_Id_combo[] = {HD_Id_keys, COMBO_END}; // TYPE "I'd"+"'ve "
const uint16_t PROGMEM H_Ill_combo[] = {HD_Ill_keys, COMBO_END}; // TYPE "I'll"+"'ve "
const uint16_t PROGMEM H_Im_combo[] = {HD_Im_keys, COMBO_END}; // TYPE "I'm "
const uint16_t PROGMEM H_Iv_combo[] = {HD_Iv_keys, COMBO_END}; // TYPE "I've "

#ifdef EN_PRONOUN_COMBOS_ALL
const uint16_t PROGMEM H_youd_combo[] = {HD_youd_keys, COMBO_END}; // TYPE "you'd" + 've
const uint16_t PROGMEM H_youll_combo[] = {HD_youll_keys, COMBO_END}; // TYPE "you'll" + 've
const uint16_t PROGMEM H_youre_combo[] = {HD_youre_keys, COMBO_END}; // TYPE "you're"
const uint16_t PROGMEM H_youve_combo[] = {HD_youve_keys, COMBO_END}; // TYPE "you've"
const uint16_t PROGMEM H_your_combo[] = {HD_your_keys, COMBO_END}; // TYPE "your" "P" for "possessive" case
const uint16_t PROGMEM H_their_combo[] = {HD_their_keys, COMBO_END}; // TYPE "their" #6
const uint16_t PROGMEM H_they_combo[] = {HD_they_keys, COMBO_END}; // "they" #23 + 've
const uint16_t PROGMEM H_theyd_combo[] = {HD_theyd_keys, COMBO_END}; // "they'd" #23 + 've
const uint16_t PROGMEM H_theyll_combo[] = {HD_theyll_keys, COMBO_END}; // "they'll" #23 + 've
const uint16_t PROGMEM H_theyre_combo[] = {HD_theyre_keys, COMBO_END}; // "they're"

const uint16_t PROGMEM H_there_combo[] = {HD_there_keys, COMBO_END}; // TYPE "there" #7 + 's
const uint16_t PROGMEM H_here_combo[] = {HD_here_keys, COMBO_END}; // TYPE "here" #5 + 's

#ifdef EN_W_PRONOUNS
const uint16_t PROGMEM H_where_combo[] = {HD_where_keys, COMBO_END}; // "where" + 's
const uint16_t PROGMEM H_were_combo[] = {HD_were_keys, COMBO_END}; // TYPE "we're"
const uint16_t PROGMEM H_wed_combo[] = {HD_wed_keys, COMBO_END}; // TYPE "we'd" + 've
const uint16_t PROGMEM H_well_combo[] = {HD_well_keys, COMBO_END}; // TYPE "we'll" + 've
const uint16_t PROGMEM H_weve_combo[] = {HD_weve_keys, COMBO_END}; // TYPE "we've"
#endif // EN_W_PRONOUNS

#endif // EN_PRONOUN_COMBOS_ALL

#endif // EN_PRONOUN_COMBOS // the entirely unnecessary pronoun combo shenanigans

// TWO HANDS

//
//  (22) keypad combos
// These are not abstracted to location, as they are not on an HD alpha layer
//
const uint16_t PROGMEM PNLCK_combo[] = {RSFT_T(KC_P4), RGUI_T(KC_P5), RALT_T(KC_P6), COMBO_END}; // toggle numlck from num layer
const uint16_t PROGMEM P0E_combo[] = {KC_P0, KC_PEQL, COMBO_END};
const uint16_t PROGMEM PCME_combo[] = {KC_PDOT, KC_PEQL, COMBO_END};
const uint16_t PROGMEM PCM1_combo[] = {KC_PDOT, KC_P1, COMBO_END};
const uint16_t PROGMEM PCM2_combo[] = {KC_PDOT, KC_P2, COMBO_END};
const uint16_t PROGMEM P01_combo[] = {KC_P0, KC_P1, COMBO_END};
const uint16_t PROGMEM P02_combo[] = {KC_P0, KC_P2, COMBO_END};
const uint16_t PROGMEM P04_combo[] = {KC_P0, RSFT_T(KC_P4), COMBO_END};
const uint16_t PROGMEM P05_combo[] = {KC_P0, RGUI_T(KC_P5), COMBO_END};
const uint16_t PROGMEM P12_combo[] = {KC_P1, KC_P2, COMBO_END};
const uint16_t PROGMEM P23_combo[] = {KC_P2, KC_P3, COMBO_END};
const uint16_t PROGMEM P13_combo[] = {KC_P1, KC_P3, COMBO_END};
const uint16_t PROGMEM P1E_combo[] = {KC_P1, KC_PEQL, COMBO_END};
const uint16_t PROGMEM P2E_combo[] = {KC_P2, KC_PEQL, COMBO_END};
const uint16_t PROGMEM P3E_combo[] = {KC_P3, KC_PEQL, COMBO_END};
const uint16_t PROGMEM P45_combo[] = {RSFT_T(KC_P4), RGUI_T(KC_P5), COMBO_END};
const uint16_t PROGMEM P56_combo[] = {RGUI_T(KC_P5), RALT_T(KC_P6), COMBO_END};
const uint16_t PROGMEM P46_combo[] = {RSFT_T(KC_P4), RALT_T(KC_P6), COMBO_END};
const uint16_t PROGMEM P5PLS_combo[] = {RGUI_T(KC_P5), RCTL_T(KC_PPLS), COMBO_END};
const uint16_t PROGMEM P6PLS_combo[] = {RALT_T(KC_P6), RCTL_T(KC_PPLS), COMBO_END};
const uint16_t PROGMEM PS7_combo[] = {KC_PSLS, KC_P7, COMBO_END};
const uint16_t PROGMEM P78_combo[] = {KC_P7, KC_P8, COMBO_END};
const uint16_t PROGMEM P79_combo[] = {KC_P7, KC_P9, COMBO_END};
const uint16_t PROGMEM P89_combo[] = {KC_P8, KC_P9, COMBO_END};
const uint16_t PROGMEM P9M_combo[] = {KC_P9, KC_PMNS, COMBO_END};
const uint16_t PROGMEM PSLT_combo[] = {KC_P7, KC_PMNS, COMBO_END};
const uint16_t PROGMEM PPLMN_combo[] = {RSFT_T(KC_P4), RCTL_T(KC_PPLS), COMBO_END};


combo_t key_combos[] = {
    // These simple combos trigger on press, repeat. HC_cfg_combo
    [HC_CFG] = COMBO(HC_cfg_combo, MO(L_CFG)), // keyboard/media settings/config layer
    [HC_APP] = COMBO(H_menu_combo, KC_APP), // app menu
    [HC_APPNAV] = COMBO(H_menu_nav_combo, KC_APP), // app menu
    [HC_SCLN] = COMBO(Hscln_combo, KC_SCLN), // ;
    [HC_COLN] = COMBO_ACTION(Hcoln_combo), // :  (hold for elipsis)
    [HC_UNDS] = COMBO_ACTION(Hunds_combo), // _ underscore
    [HC_TILD] = COMBO(Htild_combo, KC_TILD),  // ~ or SK_TILD?
    [HC_TIC] = COMBO(Htic_combo, KC_GRAVE),  // ` (not dead)
    [HC_EXLM] = COMBO(Hexlm_combo, KC_EXLM), // !
    [HC_QUES] = COMBO(Hques_combo, KC_QUES), // ?
    [HC_DOLR] = COMBO(Hdolr_combo, KC_DLR), // $
    [HC_HASH] = COMBO(Hhash_combo, SK_SECT), // # hijacked for §
    [HC_AT] = COMBO_ACTION(Hat_combo), // @ (hold for .com)
    [HC_TAB] = COMBO(Htab_combo, KC_TAB),
    [HC_STAB] = COMBO(Hstab_combo, S(KC_TAB)),

    [HC_Q] = COMBO_ACTION(H_Q_combo),
    [HC_L1] = COMBO(H_L1_combo, HD_L1),
//    [HC_L2] = COMBO(H_L2_combo, HD_L2),
//    [HC_L3] = COMBO(H_L3_combo, HD_L3),
    [HC_Ch] = COMBO_ACTION(H_Ch_combo),
    [HC_Sch] = COMBO_ACTION(H_Sch_combo),
    [HC_Gh] = COMBO_ACTION(H_Gh_combo),
    [HC_Ph] = COMBO_ACTION(H_Ph_combo),
    [HC_Th] = COMBO_ACTION(H_Th_combo),
    [HC_Sh] = COMBO_ACTION(H_Sh_combo),
    [HC_Wh] = COMBO_ACTION(H_Wh_combo),

    //
    // 'ing' combos
    //
    [HC_xing] = COMBO_ACTION(H_xing_combo), // TYPE "xing"
    [HC_wing] = COMBO_ACTION(H_wing_combo), // TYPE "wing"
    [HC_ming] = COMBO_ACTION(H_ming_combo), // TYPE "ming"
    [HC_ging] = COMBO_ACTION(H_ging_combo), // TYPE "ging"
    [HC_jing] = COMBO_ACTION(H_jing_combo), // TYPE "jing"
    [HC_sing] = COMBO_ACTION(H_sing_combo), // TYPE "sing"
    [HC_cing] = COMBO_ACTION(H_cing_combo), // TYPE "cing"
    [HC_ning] = COMBO_ACTION(H_ning_combo), // TYPE "ning"
    [HC_ting] = COMBO_ACTION(H_ting_combo), // TYPE "ting"
    [HC_king] = COMBO_ACTION(H_king_combo), // TYPE "king"
    [HC_bing] = COMBO_ACTION(H_bing_combo), // TYPE "bing"
    [HC_ping] = COMBO_ACTION(H_ping_combo), // TYPE "ping"
    [HC_ling] = COMBO_ACTION(H_ling_combo), // TYPE "ling"
    [HC_ding] = COMBO_ACTION(H_ding_combo), // TYPE "ding"
    [HC_ving] = COMBO_ACTION(H_ving_combo), // TYPE "ving"
    [HC_ring] = COMBO_ACTION(H_ring_combo), // TYPE "ring"
    [HC_quing] = COMBO_ACTION(H_quing_combo), // TYPE "quing"
    [HC_zing] = COMBO_ACTION(H_zing_combo), // TYPE "zing"
    [HC_shing] = COMBO_ACTION(H_shing_combo), // TYPE "shing"
    [HC_ching] = COMBO_ACTION(H_ching_combo), // TYPE "ching"
    [HC_thing] = COMBO_ACTION(H_thing_combo), // TYPE "thing"
    [HC_phing] = COMBO_ACTION(H_phing_combo), // TYPE "phing"
    [HC_whing] = COMBO_ACTION(H_whing_combo), // TYPE "whing"

//    [HC_OE] = COMBO_ACTION(HOE_lig_combo),  // Œ
//    [HC_AE] = COMBO_ACTION(HAE_lig_combo),  // Æ


    [PC_PENT] = COMBO(P3E_combo, KC_PENT), // <enter> on num
    [PC_BSPC] = COMBO(P01_combo, KC_BSPC), // <bksp> on num
    [PC_DEL] = COMBO(P02_combo, KC_DEL), // <del> on num
    [PC_TAB] = COMBO(PCM1_combo, KC_TAB), // <tab> on num

    // action combos below
    // This group have custom actions on trigger (no hold-delay), repeat if held

    // this block should be contiguous,
    // Delayed action (COMBO_HOLD threshold). No repeat if held (tap_code)
    // should send the underlying combo keys if COMBO_HOLD is not met.

    // Keypad combos (all need actions or mods, so must be here)
    [PC_STAB] = COMBO_ACTION(PCM2_combo), // shift-<tab> on num
    
    [HC_EQL] = COMBO_ACTION(Hequal_combo), // =  (hold for %)
    [PC_SENT] = COMBO_ACTION(P2E_combo), // shift-<enter> on num
    [PC_TGNM] = COMBO(PNLCK_combo, KC_NUM), // toggle num lock
    [PC_DASH] = COMBO_ACTION(P12_combo), // – for time span on number layer
    [PC_TILD] = COMBO_ACTION(P13_combo), // ~ for time span on number layer
    [PC_ELIP] = COMBO_ACTION(P23_combo), // … for time span on number layer
    [PC_LPRN] = COMBO_ACTION(P45_combo), // ( on number layer
    [PC_RPRN] = COMBO_ACTION(P56_combo), // ) on number layer
    [PC_COLN] = COMBO_ACTION(P46_combo), // : on number layer for time 12:30xx
    [PC_PERC] = COMBO_ACTION(P6PLS_combo), // % on numbers
    [PC_DEG] = COMBO_ACTION(P5PLS_combo), // degree symbol on number layer
    [PC_JYEN] = COMBO_ACTION(PS7_combo), // €
    [PC_DOLR] = COMBO_ACTION(P78_combo), // $
    [PC_CENT] = COMBO_ACTION(P79_combo), // ¢
    [PC_EURO] = COMBO_ACTION(P89_combo), // ¥
    [PC_BPND] = COMBO_ACTION(P9M_combo), // £
    [PC_DIV] = COMBO_ACTION(PSLT_combo), // ÷
    [PC_PLMN] = COMBO_ACTION(PPLMN_combo), // ±
    [PC_NEQL] = COMBO_ACTION(P1E_combo), // ≠
    [PC_CLR] = COMBO(P0E_combo, KC_C), // C for "CLEAR"
    [PC_AC] = COMBO(PCME_combo, KC_ESC), // ESC for "ALL CLEAR"
    [PC_PLMN] = COMBO_ACTION(PPLMN_combo), // ±

    [FC_ESC] = COMBO(F_ESC_combo, KC_ESC),  // ESCape
    [FC_KILL] = COMBO(F_KILL_combo, SK_KILL), // Force quit
    [FC_SCAP] = COMBO(F_SCAP_combo, SK_SCAP), // SCREEN CAPTURE SELECTION
    [FC_SCLP] = COMBO(F_SCLP_combo, SK_SCLP), // SCREEN CAPTURE SELECTION to clipboard
    [FC_CAPS] = COMBO(F_CAPS_combo, KC_CAPS), // CAPS LOCK
    [HC_CAPW] = COMBO_ACTION(H_CAPW_combo), // CAPS_WORD

//    [FC_LANG2] = COMBO(H_EISUU_combo, SK_MHEN), // eisuu (others)
//    [FC_LANG1] = COMBO(H_KANA_combo, SK_HENK), // kana (others)

    [HC_NDSH] = COMBO_ACTION(Hndsh_combo), // – N-DASH
    [HC_MDSH] = COMBO_ACTION(Hmdsh_combo), // — M-DASH
    
// Dead keys (Mac only, for now)
//    [HC_ACUT] = COMBO_ACTION(Hacut_combo), // ´ acute
//    [HC_GRV] = COMBO_ACTION(Hgrv_combo), // ` grave
//    [HC_CIRC] = COMBO_ACTION(Hcirc_combo), // ˆ circumflex
//    [HC_MACR] = COMBO_ACTION(Hmacr_combo), // - macron
//    [HC_DIER] = COMBO_ACTION(Hdier_combo), // ¨ dieresis
//    [HC_RING] = COMBO_ACTION(Hring_combo), // ˚ ring
//    [HC_CEDILLE] = COMBO_ACTION(Hcedi_combo), // ¸ cedille
//    [HC_ENYE] = COMBO_ACTION(Henye_combo), // ˜ tilde (dead)
//    [HC_OSLSH] = COMBO_ACTION(Hoslsh_combo), // ø/Ø or Wh

//    [HC_ENYE] = COMBO(Henye_combo, SK_ENYE), // ñ/Ñ enye
//    [HC_ELIP] = COMBO_ACTION(Helip_combo),  // …


// Fast entry 4grams

#ifdef EN_PRONOUN_COMBOS
// PRONOUNS Fast entry 4-7gram PRONOUNS (an English quirk)
    [HC_I] = COMBO_ACTION(H_Icap_combo),// TYPE "I"+"'ve "
    [HC_Id] = COMBO_ACTION(H_Id_combo),// TYPE "I'd "
    [HC_Ill] = COMBO_ACTION(H_Ill_combo),// TYPE "I'll "
    [HC_Im] = COMBO_ACTION(H_Im_combo),// TYPE "I'm  "
    [HC_Iv] = COMBO_ACTION(H_Iv_combo),// TYPE "I've  "

#ifdef EN_PRONOUN_COMBOS_ALL
#ifdef EN_W_PRONOUNS
    [HC_wed_4gram] = COMBO_ACTION(H_wed_combo),// TYPE "we'd"
    [HC_well_5gram] = COMBO_ACTION(H_well_combo),// TYPE "we'll"
    [HC_were_5gram] = COMBO_ACTION(H_were_combo),// TYPE "we're"
    [HC_weve_5gram] = COMBO_ACTION(H_weve_combo),// TYPE "we've"
    [HC_where_5gram] = COMBO_ACTION(H_where_combo), // TYPE "where"
#endif // EN_W_PRONOUNS
    [HC_youd_5gram] = COMBO_ACTION(H_youd_combo),// TYPE "you'd"
    [HC_youll_6gram] = COMBO_ACTION(H_youll_combo),// TYPE "you'll"
    [HC_youre_6gram] = COMBO_ACTION(H_youre_combo),// TYPE "you're"
    [HC_youve_6gram] = COMBO_ACTION(H_youve_combo),// TYPE "you've"
    [HC_your_4gram] = COMBO_ACTION(H_your_combo),// TYPE "your"
    [HC_theyve_7gram] = COMBO_ACTION(H_they_combo), // TYPE "they" #23
    [HC_their_5gram] = COMBO_ACTION(H_their_combo), // TYPE "their" #6
    [HC_theyd_6gram] = COMBO_ACTION(H_theyd_combo), // TYPE "they'd"
    [HC_theyll_7gram] = COMBO_ACTION(H_theyll_combo), // TYPE "they'll"
    [HC_theyre_7gram] = COMBO_ACTION(H_theyre_combo), // TYPE "they're"

    [HC_there_5gram] = COMBO_ACTION(H_there_combo), // TYPE "there" #7
    [HC_here_4gram] = COMBO_ACTION(H_here_combo), // TYPE "here" #9

#endif // EN_PRONOUN_COMBOS_ALL
#endif // EN_PRONOUN_COMBOS

    [HC_TYPE_LEFTCOMBO] = COMBO(H_Left_combo, MAC_SIRI), // a personally useful 5-8gram!
    [HC_TYPE_RIGHTCOMBO] = COMBO_ACTION(H_Right_combo), // a demonstrator, how long autotypes can be!
    
    [HC_SPC] = COMBO(Hspc_combo, KC_SPC), // SPACE
    [HC_ENT] = COMBO(Hent_combo, KC_ENT), // ENTER
    [HC_ENT2] = COMBO(Hent2_combo, SK_HENT), // hard-ENTER
    [HC_ENT3] = COMBO_ACTION(Hent3_combo), // Semkey "Next Paragraph" then ENTER

/* These all use SemKeys, even as simple combos (handled by process_semkey from process_record_user) */
    [HC_NEW] = COMBO(Hnew_combo, SK_NEW),
    [HC_OPEN] = COMBO(Hopen_combo, SK_OPEN),
    [HC_CLOZ] = COMBO(Hclose_combo, SK_CLOZ),
    [HC_QUIT] = COMBO(Hquit_combo, SK_QUIT),
    [HC_SAVE] = COMBO(Hsave_combo, SK_SAVE),
    [HC_FIND] = COMBO_ACTION(Hfind_combo),
    [HC_SALL] = COMBO(Hsall_combo, SK_SALL),
    [HC_SWRD] = COMBO_ACTION(Hswrd_combo), // hold for select-line
//    [HC_SLNE] = COMBO(Hslne_combo, SK_SLNE),
    [HC_UNDO] = COMBO(Hundo_combo, SK_UNDO),
    [HC_REDO] = COMBO(Hredo_combo, SK_REDO),
//    [HC_CUT] = COMBO(Hcut_combo, SK_CUT), // also hold copy (no longer used?)
    [HC_COPY] = COMBO_ACTION(Hcopy_combo), // using hold for cut
//    [HC_PSTM] = COMBO(Hpstm_combo, SK_PSTM),  // also hold paste (no longer used?)
    [HC_PSTE] = COMBO_ACTION(Hpste_combo) // using hold for paste-match
    
};
