
uint16_t COMBO_LEN = COMBO_LENGTH;
// remove the COMBO_COUNT define and use this instead!

void process_combo_event(uint16_t combo_index, bool pressed) {
	if (pressed) {
		switch(combo_index) {
			case HC_combo0:
		      SEND_STRING(SS_TAP(X_G) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo1:
		      SEND_STRING(SS_RSFT(SS_TAP(X_G)) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo2:
		      SEND_STRING(SS_TAP(X_P) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo3:
		      SEND_STRING(SS_RSFT(SS_TAP(X_P)) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo4:
		      SEND_STRING(SS_TAP(X_T) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo5:
		      SEND_STRING(SS_RSFT(SS_TAP(X_T)) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo6:
		      SEND_STRING(SS_TAP(X_S) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo7:
		      SEND_STRING(SS_RSFT(SS_TAP(X_S)) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo8:
		      SEND_STRING(SS_TAP(X_W) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo9:
		      SEND_STRING(SS_RSFT(SS_TAP(X_W)) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo10:
		      SEND_STRING(SS_TAP(X_E) SS_DELAY(90) SS_TAP(X_O));
		    break;
		    case HC_combo11:
		      SEND_STRING(SS_RSFT(SS_TAP(X_E)) SS_DELAY(90) SS_TAP(X_O));
		    break;
		    case HC_combo12:
		      SEND_STRING(SS_TAP(X_U) SS_DELAY(90) SS_TAP(X_A));
		    break;
		    case HC_combo13:
		      SEND_STRING(SS_RSFT(SS_TAP(X_U)) SS_DELAY(90) SS_TAP(X_A));
		    break;
		    case HC_combo14:
		      SEND_STRING(SS_TAP(X_A) SS_DELAY(90) SS_TAP(X_U));
		    break;
		    case HC_combo15:
		      SEND_STRING(SS_RSFT(SS_TAP(X_A)) SS_DELAY(90) SS_TAP(X_U));
		    break;
		    case HC_combo16:
		      SEND_STRING(SS_TAP(X_C) SS_DELAY(90) SS_TAP(X_H));
		    break;
		    case HC_combo21:
		      SEND_STRING(SS_TAP(X_L) SS_DELAY(90) SS_TAP(X_V));
		    break;
		    case HC_combo31:
		      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)) SS_DELAY(90) SS_LGUI(SS_LSFT(SS_TAP(X_RIGHT))));
		    break;
		    case HC_combo32:
		      SEND_STRING(SS_RSFT(SS_TAP(X_C)) SS_DELAY(90) SS_TAP(X_H));
		    break;
		} // switch(combo_index)
	} // if (pressed) - so after this is keyup
} // process_combo_event
