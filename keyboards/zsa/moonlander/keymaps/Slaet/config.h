/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define ONESHOT_TAP_TOGGLE 1

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 10

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 5

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 30

#define FIRMWARE_VERSION u8"0pNON/ooowQ"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_16BIT
#define COMBO_COUNT 16

#define RGB_MATRIX_STARTUP_SPD 60

