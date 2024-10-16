#pragma once

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

//#undef ONESHOT_TIMEOUT
//#define ONESHOT_TIMEOUT 1250
/*
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
*/
// This enables Link Time Optimization, saving a significant amount of space. Because the Macro and Function features are incompatible with Link Time Optimization, disable those features in config.h:

// disable a bunch of things to save space
#ifndef NO_ACTION_MACRO
#define NO_ACTION_MACRO
#endif
#ifndef NO_ACTION_FUNCTION
#define NO_ACTION_FUNCTION
#endif
//#ifndef NO_ACTION_ONESHOT
//#define NO_ACTION_ONESHOT
//#endif
#ifndef NO_MUSIC_MODE
#define NO_MUSIC_MODE
#endif
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#ifndef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2
#endif

//#ifdef TAPPING_TERM
#undef TAPPING_TERM
#define TAPPING_TERM 175 // Mod TAP VS HOLD timing in milliseconds
//#endif

// Pick good defaults for enabling homerow modifiers
#define TAP_CODE_DELAY 10
#define TAP_HOLD_CAPS_DELAY 100
#define PERMISSIVE_HOLD
#define TAPPING_TERM_PER_KEY

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
    #define ADAPTIVE_TERM COMBO_HOLD // use COMBO_HOLD time as a standard threshold (same recation time)
#else
    #define ADAPTIVE_TERM (TAPPING_TERM/4) // rolling threshold
#endif

#define LINGER_TIME TAPPING_TERM * 1.2 // how long to hold before a time-depentant behavior begins
// how long to leave a state active before resetting like APPMENU or SHIFTWORD
#define STATE_RESET_TIME LINGER_TIME * 3

#define ADAPTIVE_ENABLE
#define ADAPTIVE_TRAILER KC_3

// #define THUMB_REPEATER
#ifdef THUMB_REPEATER
#define HD_REPEATER_A HD_BSPC
#define HD_REPEATER_B KC_ENT
#endif

#define AUTO_SHIFT_TIMEOUT 145
#define NO_AUTO_SHIFT_TAB
#define NO_AUTO_SHIFT_ALPHA


#define EN_HDIGRAPH_COMBOS // English H-Digraph combos (Th,Ch,Wh,Sh,Gh,Ph,Sch)
#define EN_PRONOUN_COMBOS // English First Person pronoun combos (I, I'm, I've I'd I'll etc) (184 bytes on AVR)
#define EN_PRONOUN_COMBOS_ALL  // combos for you('ve), We('ve), They('ve) etc. (616 bytes on AVR)
#define EN_W_PRONOUNS
