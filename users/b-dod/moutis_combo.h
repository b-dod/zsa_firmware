#define combo_OLED_row 5

#define EXTRA_SHORT_COMBOS // because I don't believ in big combos-use layers or leader_key


//
// where's the file with the combo definitions to be included in the keymap.c
//
#define HD_combo_def "moutis_combo_def.c"

// #include "personalizedmacros.h"

#ifndef At_ComboHeld
#define At_ComboHeld "@gmail.com"
#endif
#ifndef LeftComboTapE
#define LeftComboTapE "LeftCombo tapped"
#endif
#ifndef LeftComboHeldE
#define LeftComboHeldE "LeftCombo held"
#endif
#ifndef LeftComboTapJ
#define LeftComboTapJ "hidarikombotappu"
#endif
#ifndef LeftComboHeldJ
#define LeftComboHeldJ "hidarikombochouosi"
#endif
#ifndef RightComboTapE
#define RightComboTapE "ashellinthepit"
#endif
#ifndef RightComboHeldE
#define RightComboHeldE "@ashellinthepit.com"
#endif
#ifndef RightComboTapJ
#define RightComboTapJ "migikombotappu"
#endif
#ifndef RightComboHeldJ
#define RightComboHeldJ "migikombochouosi"
#endif


enum my_combos {
    FC_ESC, // ESCape SIMPLE COMBO must be first (used as FALSE for combo_on)
    HC_CFG,  // The keyboard and media config/settings layer
    HC_APP,
    HC_APPNAV, // App menu on Nav layer
    HC_CAPW, // CAPS WORD for all others
    FC_CAPS, // CAPS LOCK (others)
    FC_LANG2, // eisuu/mhen (others)
    FC_LANG1, // kana/henk (others)

    HC_TAB,
    HC_STAB,
    HC_DOLR, // $
    HC_HASH, // #
    HC_QUES, // ?
    HC_EXLM, // !
    HC_SCLN, // ;
    HC_UNDS, // _ underscore
    HC_NDSH, // – N-dash
    HC_MDSH, // — M-dash
    HC_TILD, // ~ tilde
    HC_TIC, // ` tic (not a dead key)
    HC_ENT3, // Semkey "Next Paragraph" then ENTER
//    HC_ACUT, // ´ acute
//    HC_GRV, // ` grave (dead key)
//    HC_CIRC, // ˆ circumflex
//    HC_MACR, // - macron
//    HC_DIER, // ¨ dieresis
//    HC_RING, // ˚ ring
//    HC_CEDILLE, // ¸ cedille
//    HC_ENYE, // ñ/Ñ enye
//    HC_OSLSH, // ø/Ø

    HC_Q, // Q is not on the map
    HC_L1, // ex. z not on the map (remappable)?
//    HC_L2, // ex. x not on the map (remappable)?
//    HC_L3, // ex. j not on the map (remappable)?

    

//    HC_OE, // Œ
//    HC_AE, // Æ
/*
    HC_1E, // É acute
    HC_2E, // È grave
    HC_3E, // Ê circumflex
    HC_4E, // Ë diarisis/umlaut
    HC_5E, // Ē macron
    HC_6E, // E̊

    HC_UM, // Ü
    HC_OM, // Ö
    HC_UK, // Ů
    HC_OK, // O̊
    HC_UV, // Û
    HC_OV, // Ô
    HC_UF, // Ú
    HC_OF, // Ó
 */


    
    //
    // ACTION COMBOS (ie, not simple combos as above)
    //
    // This group all have actions on press (no hold-delay),
    // may be repeated if held (register_code) or not (tap_code)
    // to be handled in process_combo_event and/or matrix_scan_user_process_combo
    //
    PC_PENT, // <enter> on num
    PC_BSPC, // <bksp> on num
    PC_DEL, // <del> on num
    PC_TAB, // <tab> on num

    HC_AT, // @
    HC_COLN, // :
    // Fast entry 4grams
    // since combos are a bit slower,
    // needs to be a 4gram+ or more to be worth it
    HC_Th, // treat as θ
    HC_Sh, // TYPE "sh"
    HC_Wh, // treat as digraph 'WH'
    HC_Ch, // treat as digraph 'CH'
    HC_Gh, // treat as digraph 'GH'
    HC_Ph, // treat as φ
    HC_Sch, // treat as digraph 'SCH'

    HC_xing, // TYPE "xing"
    HC_wing, // TYPE "wing"
    HC_ming, // TYPE "ming"
    HC_ging, // TYPE "ging"
    HC_jing, // TYPE "jing"
    HC_sing, // TYPE "sing"
    HC_cing, // TYPE "cing"
    HC_ning, // TYPE "ning"
    HC_ting, // TYPE "ting"
    HC_king, // TYPE "king"
    HC_bing, // TYPE "bing"
    HC_ping, // TYPE "ping"
    HC_ling, // TYPE "ling"
    HC_ding, // TYPE "ding"
    HC_ving, // TYPE "ving"
    HC_ring, // TYPE "ring"
    HC_quing, // TYPE "quing"
    HC_zing, // TYPE "zing"
    HC_shing, // TYPE "shing"
    HC_ching, // TYPE "ching"
    HC_thing, // TYPE "thing"
    HC_phing, // TYPE "phing"
    HC_whing, // TYPE "whing"

#ifdef EN_PRONOUN_COMBOS
// Pronoun combos. KEEP these together!
    HC_I, // Cap I + "'ve " if lingered
    HC_Id, // "I'd " …
    HC_Ill, // "I'll " …
    HC_Im, // "I'm " …
    HC_Iv, // "I've " …

#ifdef EN_PRONOUN_COMBOS_ALL
#ifdef EN_W_PRONOUNS
    HC_wed_4gram, // we'd
    HC_well_5gram, // we'll
    HC_were_5gram, // we're
    HC_weve_5gram, // we've
    HC_where_5gram, // TYPE "where"
#endif // EN_W_PRONOUNS

    HC_youd_5gram,
    HC_youll_6gram,
    HC_youre_6gram,
    HC_youve_6gram,
    HC_your_4gram,

    HC_there_5gram, // "there" #7
    HC_here_4gram, // TYPE "here" #9

    HC_they_4gram, // TYPE "they" #23
    HC_theyd_6gram, // TYPE "they'd " #23
    HC_theyll_7gram, // TYPE "they'll" #23
    HC_theyre_7gram, // "they're"
    HC_theyve_7gram, // "they've"
    HC_their_5gram, // "their" #6

// END of PRONOUN combos ()
#endif // EN_PRONOUN_COMBOS_ALL
#endif // EN_PRONOUN_COMBOS


    //
    // DELAYED ACTION COMBOS -- this block must be contiguous!!
    //
    // no action on press, action (in matrix_scan_user),
    // underlying keys seng if the hold threshold is not met.
    // may repeat as appropriate. (tap_code vs register_code)
    //
    PC_STAB,  // Shift-<tab>
    PC_TGNM, // TOGGLE NUMLCK on numpad layer
    PC_DASH, // – on number layer (keypad)
    PC_TILD, // ˜
    PC_ELIP, // …
    HC_EQL, // = equal
    HC_ELIP, // …
    PC_COLN, // :
    PC_DEG, //
    PC_NEQL, // ≠
    PC_ENTR, // <enter> on num layer
    PC_SENT,  // Shift-<enter>
    PC_DIV, // ÷
    PC_PLMN, // ±
    PC_PERC, // %
    PC_EURO, // €
    PC_DOLR, // $
    PC_CENT, // ¢
    PC_JYEN, // ¥
    PC_BPND, // £
    PC_LPRN,
    PC_RPRN,
    PC_CLR,
    PC_AC,   // END OF DELAY BLOCK
    
    HC_TYPE_LEFTCOMBO, // TYPE "LeftComboTapE" and hold for "LeftComboHeldE"
    HC_TYPE_RIGHTCOMBO, // TYPE "RightComboTapE" and hold for "RightComboHeldE"

    //    HC_2DQUO, // "|" insertion point between double quotes

    // THESE ALL USE SemKeys for platform independence
    FC_KILL, // Force quit
    FC_SCAP, // Screen Capture Selection
    FC_SCLP, // Screen Capture Selection to clipboard

    HC_ENT,
    HC_ENT2, // hard enter (cmd/ctrl-enter)
    HC_SPC,
    HC_NEW,
    HC_OPEN,
    HC_CLOZ,
    HC_QUIT,
    HC_SAVE,
    HC_FIND, // Find the selection
    HC_SWRD, // select current word
//    HC_SLNE, // select current line
    HC_SALL, // select all

    HC_UNDO,
    HC_REDO,
//    HC_CUT,   // Do I use this anymore?
    HC_COPY,  // hold for cut
    HC_PSTE,  // hold for paste+match style


    COMBO_LENGTH
};
