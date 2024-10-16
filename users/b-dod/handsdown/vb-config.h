
//
// The Hands Down Variation dependent defs & files
//
#define HD_adaptive_code "handsdown/vb2-adaptive.c"
//

//
// First, let's define HD alpha keycodes with any hold-taps/custom keycodes
//
#define HD_A RSFT_T(KC_A)
#define HD_B KC_B
#define HD_C LALT_T(KC_C)
#define HD_D KC_D
#define HD_E RGUI_T(KC_E)
#define HD_F KC_F
#define HD_G KC_G
#define HD_H RCTL_T(KC_H)
#define HD_I RALT_T(KC_I)
#define HD_J KC_J
#define HD_K LT(L_CFG,KC_K)
#define HD_L KC_L
#define HD_M KC_M
#define HD_N LGUI_T(KC_N)
#define HD_O KC_O
#define HD_P KC_P
#define HD_Q KC_Q
#define HD_R LT(L_NAV,KC_R)
#define HD_S LCTL_T(KC_S)
#define HD_T LSFT_T(KC_T)
#define HD_U KC_U
#define HD_V KC_V
#define HD_W KC_W
#define HD_X KC_X
#define HD_Y KC_Y
#define HD_Z KC_Z

#define HD_MINS KC_MINS
#define HD_HASH KC_HASH
#define HD_SPC  LT(L_SYM,KC_SPC)
#define HD_BSPC LT(L_FUN,KC_BSPC)
#define HD_ENT  LT(L_NAV,KC_ENT)
#define HD_QUOT KC_QUOT
#define HD_DQUO KC_DQUO
#define HD_SLSH KC_SLSH
#define HD_DOT  KC_DOT
#define HD_COMM LT(L_CFG,KC_COMM)

// Now let's place these HD keycodes on the keymap
// for variation independent spatial referencing by key position
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
//
//    Base (alpha) Layer  Hands Down Vibranium-vb (HRMs /+ thumb mods)
//      ╭─────────────────────╮                 ╭─────────────────────╮
// esc  │  X   W   M   G   J  │ L_CFG     L_NUM │  #$  .:  /*  "[  '] │ LANG2/henk
// tab  │  S   C   N   T   K  | (             ) |  ,;   A   E   I   H │ LANG1/mhen
//  Z   │  B   P   L   D   V  │ [ copy   pste ] │  -+   U   O   Y   F │ Q
//      ╰───────────╮ bsp  R  │ &             | │ spc  ret ╭──────────╯
//    left rght app ╰─────────╯                 ╰──────────╯ tgLN  up  dn
//
// For small boards, Q (LT3) & Z (LT4) are (also) on the sym layer
// and accessible combos (defined below)
//

//#define HD_LT5 KC_ESC
#define HD_LT4 HD_X
#define HD_LT3 HD_W
#define HD_LT2 HD_M
#define HD_LT1 HD_G
#define HD_LT0 HD_J
//#define HD_LTA LT(L_CFG, KC_MUTE)
//#define HD_RTA LT(L_CFG, KC_MPLY)
#define HD_RT0 HD_HASH
#define HD_RT1 HD_DOT
#define HD_RT2 HD_SLSH
#define HD_RT3 HD_DQUO
#define HD_RT4 HD_QUOT
//#define HD_RT5 KC_LNG2

//#define HD_LM5 KC_TAB
#define HD_LM4 HD_S
#define HD_LM3 HD_C
#define HD_LM2 HD_N
#define HD_LM1 HD_T
#define HD_LM0 HD_K
//#define HD_LMA KC_LPRN
//#define HD_RMA KC_RPRN
#define HD_RM0 HD_COMM
#define HD_RM1 HD_A
#define HD_RM2 HD_E
#define HD_RM3 HD_I
#define HD_RM4 HD_H
//#define HD_RM5 KC_LNG1

//#define HD_LB5 HD_Z
#define HD_LB4 HD_B
#define HD_LB3 HD_P
#define HD_LB2 HD_L
#define HD_LB1 HD_D
#define HD_LB0 HD_V
//#define HD_LBA LT(L_NUM, KC_LBRC)
//#define HD_LBB LT(L_CFG, KC_LNG2)
//#define HD_RBB LT(L_FUN, KC_LNG1)
//#define HD_RBA LT(L_NAV, KC_RBRC)
#define HD_RB0 HD_MINS
#define HD_RB1 HD_U
#define HD_RB2 HD_O
#define HD_RB3 HD_Y
#define HD_RB4 HD_F
//#define HD_RB5 HD_Q

//Primary Thumbs 1-3 (others are unique to the board)
//#define HD_LH5 KC_LEFT
//#define HD_LH4 KC_RGHT
#define HD_LH3 KC_MEH // USED TO BE KC_APP
#define HD_LH2 HD_R
#define HD_LH1 HD_BSPC
//#define HD_LH0 LT(L_CFG,KC_MUTE)
//#define HD_LHA LT(L_NAV,KC_LNG2)
//#define HD_RHA LT(L_SYM,KC_LNG1)
//#define HD_RH0 LT(L_CFG,KC_MPLY)
#define HD_RH1 HD_ENT
#define HD_RH2 HD_SPC
#define HD_RH3 TG(L_NUM)
//#define HD_RH4 KC_UP
//#define HD_RH5 KC_DOWN

#ifdef COMBO_ENABLE
//
// We want to be able to define a combo by location
// for variation independent, spatial referencing, or
// by letter for mnemonic/phonetic referencing (variation dependent)
// put this sort of obscures the definitions…so…
//
// BE CAREFUL to not double define a combo!
//
// Combo definitions that rely on phonetics/mnemonics for their locations.
//
// Combos that are spacially organized don't need to be redefined
// to match the base alpha layer, so they are not included here.
//
// These few spatial combos may move to accommodate some mnemonic combos,
// notably the H-digraph combos that inhabit close areas.
//
// SEMANTIC FUNCTIONS  ** uses SemKeys **
// Spatially arranged on the QWERTY ZXCV locations
// independent of the HD Alphas, though since some of
// the above combos may compete for the same locations,
// we'll define them all here.
//
#define HD_quit_keys  HD_LB0, HD_LM0   // quit
#define HD_open_keys  HD_LM1, HD_LB1   // open
#define HD_new_keys   HD_LM2, HD_LB2   // new
#define HD_close_keys HD_LM3, HD_LB3   // close
#define HD_save_keys  HD_LM4, HD_LB4   // save
#define HD_find_keys  HD_LM4, HD_LM0   // find selection
#define HD_sall_keys  HD_LB4, HD_LB1   // select all
#define HD_slne_keys  HD_LB4, HD_LB2, HD_LB1   // select line
#define HD_swrd_keys  HD_LB4, HD_LB0   // select word
#define HD_undo_keys  HD_LB4, HD_LB3   // undo
#define HD_redo_keys  HD_LB4, HD_LB3, HD_LB2   // redo
#define HD_copy_keys  HD_LB3, HD_LB2   // copy (hold for cut)
#define HD_pste_keys  HD_LB2, HD_LB1   // paste (hold for paste-match)
#define HD_esc_keys   HD_LM1, HD_LM4   // esc

#define HD_tab_keys  HD_LT4, HD_LT3     // tab
#define HD_stab_keys HD_LT4, HD_LT3, HD_LT2  // Shift-tab
#define HD_spc_keys  HD_LM1, HD_LM0     // SPACE
#define HD_ent_keys  HD_LB0, HD_LB1     // ENTER
#define HD_ent2_keys HD_LB0, HD_LB1, HD_LB2 // hard-ENTER/page break
#define HD_ent3_keys HD_LB0, HD_LB1, HD_LB2, HD_LB3 // Semkey "Next Paragraph" then ENTER
#define APPMENU_keys  HD_LT1, HD_LT0  // APPMENU
#define APPMENU_nav_keys  LN_LT1, LN_LT0  // APPMENU

// TEXT ENTRY - off map standard alphas (also on Layer L_SYM @ Z=LT4 & Q=LT3)
//
#define HD_Qu_keys HD_LT3, HD_LT1 // TYPE "q" (Qu & Linger deletes u)
#define HD_L1_keys HD_LM3, HD_LM1 // ex. TYPE "z"
#define HD_L1 HD_Z
//#define HD_L2_keys HD_LM3, HD_LM1 // ex. TYPE "x"
//#define HD_L2 HD_X
//#define HD_L3_keys HD_LM3, HD_LM1 // ex. TYPE "j"
//#define HD_L3 HD_J

//
// H digraph combos
// try to make these use the lead letter and a neighbor.
//
#define HD_Th_keys HD_LM2, HD_LM1 // TYPE "th"
#define HD_Ch_keys HD_LM3, HD_LM2 // TYPE "ch"
#define HD_Wh_keys HD_LT3, HD_LT2 // TYPE "wh"
#define HD_Sh_keys HD_LM4, HD_LM3 // TYPE "sh"
#define HD_Ph_keys HD_LB3, HD_LB1 // TYPE "ph"
#define HD_Gh_keys HD_LT2, HD_LT1 // TYPE "gh"
#define HD_Sch_keys HD_LM4, HD_LM3, HD_LM2 // TYPE "Sch"

//
// 'ing' combos
// going to try as an experiment and see if I like using these
// they seem efficient in principle
//
#define HD_xing_keys HD_X, HD_I // TYPE "xing"
#define HD_wing_keys HD_W, HD_I // TYPE "wing"
#define HD_ming_keys HD_M, HD_I // TYPE "ming"
#define HD_ging_keys HD_G, HD_I // TYPE "ging"
#define HD_jing_keys HD_J, HD_I // TYPE "jing"
#define HD_sing_keys HD_S, HD_I // TYPE "sing"
#define HD_cing_keys HD_C, HD_I // TYPE "cing"
#define HD_ning_keys HD_N, HD_I // TYPE "ning"
#define HD_ting_keys HD_T, HD_I // TYPE "ting"
#define HD_king_keys HD_K, HD_I // TYPE "king"
#define HD_bing_keys HD_B, HD_I // TYPE "bing"
#define HD_ping_keys HD_P, HD_I // TYPE "ping"
#define HD_ling_keys HD_L, HD_I // TYPE "ling"
#define HD_ding_keys HD_D, HD_I // TYPE "ding"
#define HD_ving_keys HD_V, HD_I // TYPE "ving"
#define HD_ring_keys HD_R, HD_I // TYPE "ring"
#define HD_quing_keys HD_LT3, HD_LT1, HD_I // TYPE "quing"
#define HD_zing_keys HD_LM3, HD_LM1, HD_I // TYPE "zing"
#define HD_shing_keys HD_LM4, HD_LM3, HD_I // TYPE "shing"
#define HD_ching_keys HD_LM3, HD_LM2, HD_I // TYPE "ching"
#define HD_thing_keys HD_LM2, HD_LM1, HD_I // TYPE "thing"
#define HD_phing_keys HD_LB3, HD_LB1, HD_I // TYPE "phing"
#define HD_whing_keys HD_LT3, HD_LT2, HD_I // TYPE "whing"


// Should we put all the diacritic keys here?
// or get keep them all in the common area (if they all share
// HD Neu vowel block)?
#define HD_OE_lig_keys HD_RM2, HD_RB2 // Œ
#define HD_AE_lig_keys HD_RM1, HD_RB1 // Æ

#ifdef EN_PRONOUN_COMBOS
// the entirely unnecessary pronoun combo shenanigans

// PRONOUNS Fast 4-7grams
#define HD_Icap_keys  HD_I, HD_H  // TYPE "I"
#define HD_Id_keys    HD_RT3, HD_D  // TYPE "I'd"+"'ve "
#define HD_Ill_keys   HD_RT3, HD_L  // TYPE "I'll"+"'ve "
#define HD_Im_keys    HD_RT3, HD_M  // TYPE "I'm "
#define HD_Iv_keys    HD_RT3, HD_V  // TYPE "I've "

#ifdef EN_PRONOUN_COMBOS_ALL // Admittedly of questionable value
#define HD_youd_keys  HD_Y, HD_D  // TYPE "you'd" + 've
#define HD_youll_keys HD_Y, HD_L  // TYPE "you'll" + 've
#define HD_youre_keys HD_Y, HD_R  // TYPE "you're"
#define HD_youve_keys HD_Y, HD_V  // TYPE "you've"
#define HD_your_keys  HD_Y, HD_F  // TYPE "your"

#define HD_their_keys HD_O, HD_F  // TYPE "their" #6 (R on same finger in Neu)
#define HD_theyre_keys HD_O, HD_R // "they're"  (R on same finger in Neu)
#define HD_they_keys  HD_O, HD_V  // "they" #23 + 've (near they)
#define HD_theyll_keys HD_O, HD_L // "they'll" #23 + 've (M is easier to combo, also in We'll)
#define HD_theyd_keys HD_O, HD_D  // "they'd" #23 + 've (no rationale for this, but no SFCombo)

// deictics. Are these really necessary?
#define HD_there_keys HD_T, HD_R  // TYPE "there" #7 + 's
#define HD_here_keys  HD_H, HD_R  // TYPE "here" #5 + 's


#ifdef EN_W_PRONOUNS
#define HD_where_keys HD_W, HD_R  // "where" + 's
#define HD_were_keys  HD_U, HD_R  // TYPE "we're"
#define HD_wed_keys   HD_U, HD_D  // TYPE "we'd" + 've
#define HD_well_keys  HD_U, HD_L  // TYPE "we'll" + 've
#define HD_weve_keys  HD_U, HD_V  // TYPE "we've"
#endif // EN_W_PRONOUNS

#endif // EN_PRONOUNS_ALL
#endif // EN_PRONOUNS // the entirely unnecessary pronoun combo shenanigans

#endif // COMBO_ENABLE
