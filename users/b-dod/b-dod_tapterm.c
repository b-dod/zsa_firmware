uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LV_LM1:
        case LV_LM2:
        case LV_LM3:
        case LV_LM4:
            return TAPPING_TERM/4;
        default:
            return TAPPING_TERM;
    }
}