#pragma once

#ifndef USERSPACE
    #define USERSPACE
#endif

#include <quantum.h>

//
// which HD alpha variation are we using?
//
// defines all variation dependent constants/files/keycodes, etc.
// they will be used in the respective keymap for each keyboard

#include "handsdown/vb-config.h" // definitions for the Alpha layer and mnemonic combos
// #include "moutis_layers.h" // definitions for all the other layers

/*
#ifdef COMBO_HOLD
    #undef ADAPTIVE_TERM
    #define ADAPTIVE_TERM COMBO_HOLD  // use COMBO_HOLD time as a standard threshold (same recation time)
#else
    #define ADAPTIVE_TERM (TAPPING_TERM/5) // rolling threshold
#endif

#define LINGER_TIME TAPPING_TERM * 1.2 // how long to hold before a time-depentant behavior begins
// how long to leave a state active before resetting like APPMENU or CAPSWORD
#define STATE_RESET_TIME LINGER_TIME * 3

#define ADAPTIVE_ENABLE
// #define ADAPTIVE_TRAILER KC_3

//#define THUMB_REPEATER
#ifdef THUMB_REPEATER
#define HD_REPEATER_A HD_BSPC
#define HD_REPEATER_B KC_ENT
#endif
*/

#ifdef COMBO_ENABLE
    #include "process_combo.h"
#endif

// #include "moutis_casemods.h"

#include "b-dod_combo.h"