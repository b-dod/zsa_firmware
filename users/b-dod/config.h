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

#define COMBO_TERM 44

#define PERMISSIVE_HOLD

#define AUTO_SHIFT_TIMEOUT 145
#define NO_AUTO_SHIFT_TAB
#define NO_AUTO_SHIFT_ALPHA
#define COMBO_COUNT 33

/* disable a bunch of things to save space
#ifndef NO_ACTION_ONESHOT
#define NO_ACTION_ONESHOT
#endif
*/