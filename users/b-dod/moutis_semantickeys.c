/*
 Semantic Keys is as STUB for platform independence. Anything
 that must be interpreted by the host, in order to produce a glyph
 or keystroke(s) that issues a command, can be abstracted to a
 semantic function here, enabling platform specific keystroke(s)
 to be sent as appropriate.

 Phase 1: simple 1:1 keystroke mapping
   complete.
 
 Phase 2: Requires w/Sevanteri's early combos.
 Integrate all combo and keymap processing so they both queue
 SemKeys to be handled in process_record_user, reducing the code
 and simplifying maintenance.
  -- IN PROCESS --
 
 Phase 3: expand to multi-keystrokes, which would enable sending
 different compose sequences based on platform (diacritics),
 and possibly facilitate editor support (vim/emacs)?
 
 Phase 4: use in Hands Down Polyglot.
 
 */



/*
unsigned char BCD_TO_ASCII(uint8 src) {
    return (unsigned char)((src - 0x30) * 0x10 + src[1] - 0x30);
*/


//
// SemKey table is a uint16 keycode, unless MSB is high, then it
// is BCD of the 3 digit Windows/DOS character codes
//
/*
void tap_SemKey(uint16_t semkeycode) {

    if (semkeycode && 0x8000 ) { // highest bit set = Windows AltGR code
        clear_keyboard(); // must have clean buffer.
        register_code(KC_RALT);
        if (semkeycode && 0xE000 ) // need to send 4 digits
            tap_code(KC_0); // send 4th to last digit (always 0)
        if (semkeycode && 0xC000 ) // need to send 3 more digits
            tap_code((uint16_t)(((semkeycode>>8) && 0x000F) + KC_0)); // send 3rd to last digit
        if (semkeycode && 0xA000 ) // need to send 2 more digits
            tap_code((uint16_t)(((semkeycode>>4) && 0x000F) + KC_0)); // send 2nd to last digit
        tap_code((uint16_t)((semkeycode && 0x000F) + KC_0)); // send last digit
        unregister_code(KC_RALT);
    } else {
        tap_code16(semkeycode); // Just send the keycode as-is
    }
}
*/

/*
* based on the table at:
* https://en.wikipedia.org/wiki/Table_of_keyboard_shortcuts
* tested on my own machines, seems to work fine.
*
*/

const uint16_t SemKeys_t[SK_count][OS_count] = {
    // Mac, Win, (Phase 3, add others if necessary)
    [SK_idx(SK_KILL)] = {G(A(KC_ESC)),C(A(KC_DEL))},          // Force quit / ctrl-alt-del
    [SK_idx(SK_HENK)] = {KC_LNG1, C(S(KC_1))},                // 変換/かな
    [SK_idx(SK_MHEN)] = {KC_LNG2, C(S(KC_0))},                // 無変換/英数
//    [SK_idx(SK_DKT8)] = {C(S(KC_3)),G(KC_H)},             // Dictate speech to text
//    [SK_idx(SK_AIVC)] = {C(S(KC_4)),G(KC_C)},             // AI voice control (mac Siri/Win Cortana)
        // extended characters/ editing commands
    [SK_idx(SK_HENT)] = {G(KC_ENT),C(KC_ENT)},                // Hard ENTER
    [SK_idx(SK_UNDO)] = {G(KC_Z),C(KC_Z)},                    // undo
    [SK_idx(SK_REDO)] = {G(S(KC_Z)),C(S(KC_Z))},              // Redo
    [SK_idx(SK_CUT)] = {G(KC_X),C(KC_X)},                     // cut
    [SK_idx(SK_COPY)] = {G(KC_C),C(KC_C)},                    // copy
    [SK_idx(SK_PSTE)] = {G(KC_V),C(KC_V)},                    // paste
    [SK_idx(SK_PSTM)] = {G(S(A(KC_V))),C(S(A(KC_V)))},        // paste_match
    [SK_idx(SK_SALL)] = {G(KC_A),C(KC_A)},                    // select all
    [SK_idx(SK_CLOZ)] = {G(KC_W),C(KC_W)},                    // close
    [SK_idx(SK_QUIT)] = {G(KC_Q),C(KC_Q)},                    // quit
    [SK_idx(SK_NEW)] = {G(KC_N),C(KC_N)},                     // new
    [SK_idx(SK_OPEN)] = {G(KC_O),C(KC_O)},                    // open
    [SK_idx(SK_SAVE)] = {G(KC_S),C(KC_S)},                    // save
    [SK_idx(SK_FIND)] = {G(KC_F),C(KC_F)},                    // find
    [SK_idx(SK_FAGN)] = {G(KC_G),KC_F3},                      // find again
    [SK_idx(SK_SCAP)] = {S(G(KC_4)),KC_PSCR},                 // Screen Capture
    [SK_idx(SK_SCLP)] = {C(S(G(KC_4))),A(KC_PSCR)},           // Selection Capture
    [SK_idx(SK_DELWDL)] = {A(KC_BSPC),C(KC_BSPC)},            // DELETE WORD LEFT
    [SK_idx(SK_DELWDR)] = {A(KC_DEL),C(KC_DEL)},              // DELETE WORD RIGHT
    [SK_idx(SK_DELLNL)] = {G(KC_BSPC),C(KC_BSPC)},            // Delete line left of cursor
    [SK_idx(SK_DELLNR)] = {G(KC_DEL),C(KC_DEL)},              // Delete line right of cursor
        // extended navigation
    [SK_idx(SK_WORDPRV)] = {A(KC_LEFT),C(KC_LEFT)},           // WORD LEFT
    [SK_idx(SK_WORDNXT)] = {A(KC_RIGHT),C(KC_RIGHT)},         // WORD RIGHT
    [SK_idx(SK_DOCBEG)] = {G(KC_UP),C(KC_HOME)},              // Go to start of document
    [SK_idx(SK_DOCEND)] = {G(KC_DOWN),C(KC_END)},             // Go to end of document
    [SK_idx(SK_LINEBEG)] = {G(KC_LEFT),C(KC_END)},            // Go to beg of line
    [SK_idx(SK_LINEEND)] = {G(KC_RIGHT),C(KC_END)},           // Go to end of line
    [SK_idx(SK_PARAPRV)] = {A(KC_UP),C(KC_UP)},               // Go to previous paragraph
    [SK_idx(SK_PARANXT)] = {A(KC_DOWN),C(KC_DOWN)},           // Go to next paragraph
    [SK_idx(SK_HISTPRV)] = {G(KC_LBRC),A(KC_LEFT)},           // BROWSER BACK
    [SK_idx(SK_HISTNXT)] = {G(KC_RBRC),A(KC_RIGHT)},          // BROWSER FWD
    [SK_idx(SK_ZOOMIN)] = {G(KC_EQL),C(KC_EQL)},              // ZOOM IN
    [SK_idx(SK_ZOOMOUT)] = {G(KC_MINS),C(KC_MINS)},           // ZOOM OUT
    [SK_idx(SK_ZOOMRST)] = {G(KC_0),C(KC_0)},                 // ZOOM RESET
    [SK_idx(SK_APPNXT)] = {RGUI(KC_TAB),A(KC_TAB)},           // APP switcher Next (last used)
    [SK_idx(SK_APPPRV)] = {RGUI(RSFT(KC_TAB)),A(S(KC_TAB))},  // APP switcher Prev (least recently used)
    [SK_idx(SK_WINNXT)] = {RCTL(KC_TAB),C(KC_TAB)},           // Window/tab switcher Next
    [SK_idx(SK_WINPRV)] = {RCTL(RSFT(KC_TAB)),C(S(KC_TAB))},  // Window/tab switcher Prev
        // Punctuation & typography
    [SK_idx(SK_UNDS)] = {S(KC_MINS),S(KC_MINS)},          // _ Underscore
    [SK_idx(SK_NDSH)] = {A(KC_MINS),0x8150},              // — N-Dash
    [SK_idx(SK_MDSH)] = {LSA(KC_MINS),0x8151},            // — M-Dash
    [SK_idx(SK_ELPS)] = {A(KC_SCLN),0x8133},              // …
    [SK_idx(SK_SCRS)] = {LSA(KC_5),0x8134},               // † Single Cross
    [SK_idx(SK_DCRS)] = {LSA(KC_7),0x8135},               // ‡ Double Cross
    [SK_idx(SK_BBLT)] = {A(KC_8),0x8149},                 // • Bold Bullet
    [SK_idx(SK_SBLT)] = {LSA(KC_9),0x8183},               // · Small Bullet
    [SK_idx(SK_PARA)] = {A(KC_7),0x8182},                 // ¶ Paragraph
    [SK_idx(SK_SECT)] = {A(KC_5),0x8167},                 // § Section
        // Number & Math symbols
    [SK_idx(SK_DEGR)] = {LSA(KC_8),0x8176},               // ° DEGREE
    [SK_idx(SK_GTEQ)] = {A(KC_DOT),0x4242},               // ≥ Greater Than or Equal to
    [SK_idx(SK_LTEQ)] = {A(KC_COMM),0x4243},              // ≤ Less Than or Equal to
    [SK_idx(SK_PLMN)] = {LSA(KC_EQL),0x8177},             // ± Plus/Minus
    [SK_idx(SK_NOTEQ)] = {A(KC_EQL),ALGR(KC_EQL)},        // ≠ NOT Equal to ** need Win Compose via UNICODE
    [SK_idx(SK_APXEQ)] = {A(KC_X),0x4247},                // ≈ APPROX Equal to
    [SK_idx(SK_OMEGA)] = {A(KC_Z),0x4234},                // Ω OMEGA
        // Currency
    [SK_idx(SK_EURO)] = {LSA(KC_2),0x8128},               // €
    [SK_idx(SK_CENT)] = {A(KC_4),0x8162},                 // ¢
    [SK_idx(SK_BPND)] = {A(KC_3),0x8163},                 // £
    [SK_idx(SK_JPY )] = {A(KC_Y),0x8165},                 // ¥
        // Quotations
    [SK_idx(SK_SQUL)] = {A(KC_RBRC),0x8145},              // ’ ** Left single quote
    [SK_idx(SK_SQUR)] = {LSA(KC_RBRC),0x8146},            // ’ ** Right single quote
    [SK_idx(SK_SDQL)] = {A(KC_LBRC),0x8147},              // “ ** Left double quote
    [SK_idx(SK_SDQR)] = {LSA(KC_LBRC),0x8148},            // ” ** Right double quote
    [SK_idx(SK_FDQL)] = {A(KC_BSLS),0x8171},              // « Left double French quote
    [SK_idx(SK_FDQR)] = {LSA(KC_BSLS),0x8187},            // » Right double French quote
    [SK_idx(SK_FSQL)] = {LSA(KC_3),0x8139},               // ‹ Left single French quote
    [SK_idx(SK_FSQR)] = {LSA(KC_4),0x8155},               // › Right single French quote
    [SK_idx(SK_IQUE)] = {LSA(KC_SLASH),0x8191},           // ¿ Spanish inverted Question Mark
    [SK_idx(SK_IEXC)] = {A(KC_1),0x8161},                 // ¡ Spanish inverted Exclamation Mark
        // Composed letters with diacritics
    [SK_idx(SK_ENYE)] = {A(KC_N),ALGR(KC_N)}             // ñ/Ñ

};

// build off BCD code from above, would have to comment out definition of tap_SemKey(sk) in moutis_semantickeys.h:

void send_alt_code(uint16_t sk) {

    if (sk & 0x8000) {
    // Always start with numpad 0 if sk starts with 0x8
    tap_code(KC_P0);
    }

    // Extract & send digits using keypad keys
    tap_code((sk >> 8) & 0x0F ? KC_P0 - ((10 - (sk >> 8)) & 0x0F) : KC_P0);
    tap_code((sk >> 4) & 0x0F ? KC_P0 - ((10 - (sk >> 4)) & 0x0F) : KC_P0);
    tap_code((sk >> 0) & 0x0F ? KC_P0 - ((10 - (sk >> 0)) & 0x0F) : KC_P0);

};

void tap_SemKey(uint16_t sk) {
    uint16_t semkeycode = get_SemKeyCode(sk);

    if ((semkeycode & 0x8000) || (semkeycode & 0x4000)) {
        clear_keyboard();           // must have clean buffer.
        register_code(KC_LALT);     // hold Left Alt

        send_alt_code(semkeycode); // send 3 or 4-digit alt code

        unregister_code(KC_LALT);    // release Left Alt

    } else {
        tap_code16(semkeycode);      // regular keycode
    }
};

void register_SemKey(uint16_t sk) {
    uint16_t semkeycode = get_SemKeyCode(sk);
    if ((semkeycode & 0x8000) || (semkeycode & 0x4000)) {
        clear_keyboard();           // must have clean buffer.
        register_code(KC_LALT);     // hold Left Alt

        send_alt_code(semkeycode); // send 3 or 4-digit alt code

        // Alt must stay held here

    } else {
        register_code16(semkeycode);
    }
};

void unregister_SemKey(uint16_t sk) {
    uint16_t semkeycode = get_SemKeyCode(sk);
    if ((semkeycode & 0x8000) || (semkeycode & 0x4000)) {
        // Release Alt to finish Unicode input
        unregister_code(KC_LALT);
    } else {
        unregister_code16(semkeycode);
    }
};

bool process_semkey(uint16_t keycode, const keyrecord_t *record) {
    // custom processing could hapen here
    uint8_t  held_mods;
    if (!(is_SemKey(keycode)))
        return true; // nothing to do. continue processing this record

    held_mods = get_mods();
    if (record->event.pressed) {
        switch (keycode) {
//
// handle multi-keystroke semkeys here
//
#ifdef SK_DELLINE
            case SK_WORDPRV: //
                if (!(held_mods & MOD_MASK_GUI))
                    register_SemKey(SK_WORDPRV);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    register_SemKey(SK_LINEBEG);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
            case SK_WORDNXT: //
                if (!(held_mods & MOD_MASK_GUI))
                    register_SemKey(SK_WORDNXT);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    register_SemKey(SK_LINEEND);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
            case SK_DELWDL: //
                if (!(held_mods & MOD_MASK_GUI))
                    register_SemKey(SK_DELWDL);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    register_SemKey(SK_DELLNL);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
            case SK_DELWDR: //
                if (!(held_mods & MOD_MASK_GUI))
                    register_SemKey(SK_DELWDR);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    register_SemKey(SK_DELLNR);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
#endif // SK_DELLINE
/*  hacky, I know, but I'm moving this into combo.c process              
            case SK_SWRD: // Select current word
                tap_SemKey(SK_WORDPRV);
                register_code(KC_LSFT); // shift for select is close to universal?
                tap_SemKey(SK_WORDNXT); // of course, not for VIM and the like,
                unregister_code(KC_LSFT); // but we're talking OS platforms?
                break;
            case SK_SLNE: // Select current line
                tap_SemKey(SK_LINEBEG);
                register_code(KC_LSFT); // shift for select is close to universal?
                tap_SemKey(SK_LINEEND); // of course, not for VIM and the like,
                unregister_code(KC_LSFT); // but we're talking OS platforms?
                break;
*/                    
            case SK_ENYE: // ñ/Ñ ENYE
                // Doing it this way until proper multi-keystroke table is implemented
                if (user_config.AdaptiveKeys) { // if  in English mode
                    clear_keyboard(); // clean record to tinker with.
                    tap_SemKey(SK_ENYE);
                    set_mods(held_mods & MOD_MASK_SHIFT); // Preserve shift state
                    tap_code16(KC_N);
                    // set_mods(held_mods); // restore mods just in case? (not necessary?)
                }
                break;
            case SK_HENK: // Japanese
                tap_SemKey(SK_HENK); // Mac/Win/iOS all different?
//                    return_state = false; // stop processing this record.
                break;
            case SK_MHEN: // English
                tap_SemKey(SK_MHEN); // Mac/Win/iOS/Lux all different?
//                    return_state = false; // stop processing this record.
                break;
            case SK_PHENT:
                tap_SemKey(SK_PARANXT);  // Next Paragraph
                tap_code(KC_ENT);
                set_sentence_case_state_primed(); // prime sentence case
                break;
            default: // default keydown event (from the semkey table)
                register_SemKey(keycode);
                break;
        }
    } else { // The keyup event
        switch (keycode) {
#ifdef SK_DELLINE
            case SK_WORDPRV: //
                if (!(held_mods & MOD_MASK_GUI))
                    unregister_SemKey(SK_WORDPRV);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    unregister_SemKey(SK_LINEBEG);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
            case SK_WORDNXT: //
                if (!(held_mods & MOD_MASK_GUI))
                    unregister_SemKey(SK_WORDNXT);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    unregister_SemKey(SK_LINEEND);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
            case SK_DELWDL: //
                if (!(held_mods & MOD_MASK_GUI))
                    unregister_SemKey(SK_DELWDL);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    unregister_SemKey(SK_DELLNL);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
            case SK_DELWDR: //
                if (!(held_mods & MOD_MASK_GUI))
                    unregister_SemKey(SK_DELWDR);
                else {
                    clear_keyboard(); // clean record to tinker with.
                    unregister_SemKey(SK_DELLNR);
                    set_mods(held_mods); // restore mods just in case?
                }
                break;
#endif // SK_DELLINE
            default:
                unregister_SemKey(keycode);
                break;
        }

    }
    return false; // don't do more with this record.
};
