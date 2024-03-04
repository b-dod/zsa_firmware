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

// Pick good defaults for enabling homerow modifiers
#define TAP_CODE_DELAY 10
#define TAP_HOLD_CAPS_DELAY 10
#define PERMISSIVE_HOLD

#ifdef COMBO_ENABLE
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

#ifdef COMBO_HOLD
    #undef ADAPTIVE_TERM
    #define ADAPTIVE_TERM COMBO_HOLD  // use COMBO_HOLD time as a standard threshold (same recation time)
#else
    #define ADAPTIVE_TERM (TAPPING_TERM/5) // rolling threshold
#endif

#define LINGER_TIME TAPPING_TERM * 1.2 // how long to hold before a time-depentant behavior begins
// how long to leave a state active before resetting like APPMENU or SHIFTWORD
#define STATE_RESET_TIME LINGER_TIME * 3

#define ADAPTIVE_ENABLE
#define ADAPTIVE_TRAILER KC_3

//#define THUMB_REPEATER
#ifdef THUMB_REPEATER
#define HD_REPEATER_A HD_BSPC
#define HD_REPEATER_B KC_ENT
#endif

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
