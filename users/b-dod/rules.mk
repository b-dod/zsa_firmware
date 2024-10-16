# Build Options
#   change yes to no to disable
#

LEADER_ENABLE = no       # Enable the Leader Key feature
MOUSEKEY_ENABLE = no     # Mouse keys
UNICODE_ENABLE = no      # will need this for HD Polyglot
NKRO_ENABLE = no         # USB Nkey Rollover
KEY_OVERRIDE_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no        # Commands for debug and configuration
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
TAP_DANCE_ENABLE = no

#AUTO_SHIFT_ENABLE = yes
AUTO_SHIFT_ENABLE = no  # requires 1936 bytes!

EXTRAKEY_ENABLE = yes    # Audio control and System control
COMBO_ENABLE = yes       # chording
LTO_ENABLE = yes
EXTRAFLAGS += -flto

# userspace .c file
SRC += b-dod.c

CFLAGS += -fcommon
