#pragma once

//
// which HD alpha variation are we using?
//
// defines all variation dependent constants/files/keycodes, etc.
// they will be used in the respective keymap for each keyboard

#include "handsdown/au-config-bd.h" // definitions for the Alpha layer and mnemonic combos
#include "b-dod_layers.h" // definitions for all the other layers

#ifndef USERSPACE
    #define USERSPACE
#endif

#include <quantum.h>

#ifdef COMBO_ENABLE
    #include "process_combo.h"
#endif

#include "moutis_casemods.h"

#include "b-dod_combo.h"

//
// These COULD be made variation/platform dependent, to allow
// them to adapt to geometry differences. Ex.
// most NEU variations have " ' on ring/pinky
// but Bronze/Silver heve ' " (inverted)
// since [ ] and « » are SHIFT/ALT of " '
// the paired brackets would be inverted.
// Perhaps simply redefining these in the xx-config.h
// to override these defs would be the right approach?
//
#define DQUO_S  KC_RBRC // ] (via Double quote shifted)
#define SQUO_S  KC_LBRC // [ (via Single quote shifted)
#define JRQU KC_RBRC //  「 (via " in Japanese mode)
#define JLQU KC_LBRC //  」 (via ' in Japanese mode)

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  MAC_SIRI,
  HD_CAPW
};

typedef union {
    uint32_t raw;
    struct {
        uint8_t OSIndex; // index of platforms (0=mac, 1=win, 2=lux)? // used by semantickeys
        bool AdaptiveKeys; // Adaptive Keys On? (and advanced combos)
    };
} user_config_t;


// enum my_layers for layout layers
enum my_layers {// must be difined before semantickeys.h
    // L_QWERTY,   // 0 - QWERTY compatibility layer
    L_HD,       // 1 - Hands Down Alpha layer
    L_SYM,      // 2 - symbols, punctuation, off-map alphas
    L_FUN,      // 3 - function & number rows
    L_NUM,      // 4 - numpad (right); navpad (left)
    L_NAV,      // 5 - nav pad (right); meta keys (left)
    L_CFG       // 6 - Media/Consumer controls; Keyboard settings
};

enum OS_Platform { // Used for platform support via SemKeys
    OS_Mac,     // Mac with ANSI_US_EXTENDED layout
//    OS_iOS,     // iOS?
    OS_Win,     // Win with default English/ANSI layout?
//    OS_Lux,     // Linux (Gnome?/KDE?)
//    OS_And,     // Android (flavors?)
    OS_count
};

#include "moutis_semantickeys.h"

#define register_linger_key(kc) {((kc > (uint16_t)SK_KILL) && (kc < (uint16_t)SemKeys_COUNT)) ? register_SemKey(kc) : register_code16(kc);linger_key = kc;linger_timer = state_reset_timer = timer_read();}

#define unregister_linger_key() {((linger_key > (uint16_t)SK_KILL) && (linger_key < (uint16_t)SemKeys_COUNT)) ? unregister_SemKey(linger_key) : unregister_code16(linger_key);linger_key = 0;}

void matrix_scan_user_process_combo(void);
