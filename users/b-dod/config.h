#pragma once

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#undef TAPPING_TERM
#define TAPPING_TERM 175

//#define TAPPING_TOGGLE 2

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 1250

// #define COMBO_TERM 44
// #define COMBO_COUNT 33

#ifdef COMBO_ENABLE
    // #undef HD_combo_def
    // #define HD_combo_def "b-dod_combo_def.c"

    #ifdef COMBO_COUNT
        #undef COMBO_COUNT
    #endif

    #define COMBO_ALLOW_ACTION_KEYS
    #define COMBO_STRICT_TIMER
    #define EXTRA_SHORT_COMBOS
    #ifdef COMBO_TERM
        #undef COMBO_TERM
    #endif
// these COMBO_TERM have dilicate interactions with ADAPTIVE_TERM below.
    #define COMBO_TERM (TAPPING_TERM/4) // time to get all combo keys down
    #define COMBO_HOLD (TAPPING_TERM) // time to hold to trigger delayed combo
#endif

// Pick good defaults for enabling homerow modifiers
#define TAP_CODE_DELAY 10
#define TAP_HOLD_CAPS_DELAY 10
#define PERMISSIVE_HOLD

#define AUTO_SHIFT_TIMEOUT 145
#define NO_AUTO_SHIFT_TAB
#define NO_AUTO_SHIFT_ALPHA

/* disable a bunch of things to save space
#ifndef NO_ACTION_ONESHOT
#define NO_ACTION_ONESHOT
#endif
*/

#define EN_HDIGRAPH_COMBOS // English H-Digraph combos (Th,Ch,Wh,Sh,Gh,Ph,Sch)
#define EN_PRONOUN_COMBOS // English First Person pronoun combos (I, I'm, I've I'd I'll etc) (184 bytes on AVR)
#define EN_PRONOUN_COMBOS_ALL  // combos for you('ve), We('ve), They('ve) etc. (616 bytes on AVR)
#define EN_W_PRONOUNS
