#include <stdio.h>

#include "b-dod.h"


/*
    My globals
*/
user_config_t user_config;
uint8_t  saved_mods = 0; // to pass state between process_record_user and matrix_scan_user
uint16_t record_keycode = 0; // the keykcode we poke at in process_record
uint16_t key_trap = 0; // the actual keycode registered (need to unregister)
#ifdef ADAPTIVE_ENABLE
uint16_t preprior_keycode = KC_NO;
uint16_t prior_keycode = KC_NO;
uint16_t prior_keydown = 0; // timer of keydown for adaptive threshhold.
#endif

uint16_t linger_key = 0;  // keycode for linger actions (ex. "Qu")
uint32_t linger_timer = 0; // time to hold a key before something else happens.
uint32_t appmenu_timer = 0;  // time to leave appmenu active before shutting it down automatically.
bool appmenu_on = false;  // appmenu triggered (after holding key)
bool mods_held = false;  // need to remember how we entered the appmenu state

/*
#ifdef JP_MODE_ENABLE
bool IS_ENGLISH_MODE = true;
#endif

#ifdef RGBLIGHT_ENABLE
int RGB_current_mode;
#endif
*/

uint8_t  combo_on = 0;           // for combo actions to hold before triggering
bool  combo_triggered = false;   // for one-shot-combo-actions


void keyboard_post_init_user(void) {
    // Read the user config from EEPROM to facilitate
    // appropriate platform support

    /*
    user_config.OSIndex use 0 for Mac; 1 for Win
     */
    user_config.raw = eeconfig_read_user();
    eeconfig_read_default_layer(); // get the default layer from eeprom.
/*
#ifdef OLED_DRIVER_ENABLE
    oled_clear();
    switch (user_config.OSIndex) {
        case OS_Mac:
            oled_set_cursor(oled_max_chars() - 3, 0);
            oled_write_P(PSTR("WIN"), false);
            break;
        case OS_Win:
            oled_set_cursor(oled_max_chars() - 3, 0);
            oled_write_P(PSTR("MAC"), false);
        }
    oled_render();
    oled_on();
#endif
*/
}

#include "moutis_app_menu.c" // my custom app_menu handler (mac/win)

#include "moutis_semantickeys.c" // anything could send a semantic, so…first
/*
#ifdef OLED_DRIVER_ENABLE
    #include "moutis_OLED.c"
#endif

#ifdef ENCODER_ENABLE
    #include "moutis_ENCODER.c"
#endif
*/
#ifdef COMBO_ENABLE
    #include "moutis_combo.c"  // combo processing code (def in keymap)
#endif

#ifdef TAPPING_TERM_PER_KEY
#include "b-dod_tapterm.c"
#endif

#include "moutis_casemods.c"

#ifdef ADAPTIVE_ENABLE
#include HD_adaptive_code   // this is HD variation dependent
#endif

// #include HD_process_record_code   // this might need to be HD variation dependent?
#include "moutis_process_record.c"

#include "moutis_matrix.c"
