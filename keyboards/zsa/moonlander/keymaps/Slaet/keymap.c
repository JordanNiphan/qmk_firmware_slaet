#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL

enum tap_dance {
    Dance_1_F1,
    Dance_2_F2,
    Dance_3_F3,
    Dance_4_F4,
    Dance_8_H,
    Dance_M_U,
    Dance_P_O,
    Dance_Esc_Alt,

};

enum layers {
    _ColemakDHm,
    _Numbers,
    _Arrows,
    _Planetside,
    _MiscGame,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ColemakDHm] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,               KC_4,               KC_5,           TT(_Planetside),                 KC_MS_WH_UP,    KC_MS_BTN3,     KC_MS_BTN2,     DM_PLY1,        DM_PLY2,            KC_TRANSPARENT, KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_F,               KC_P,               KC_B,           TT(_MiscGame),                   KC_MS_BTN1,     KC_J,           KC_L,           KC_U,           KC_Y,               KC_SCLN,        KC_BSLS,
    KC_MS_BTN2,     KC_A,           KC_R,           KC_S,               KC_T,               KC_G,           KC_TRANSPARENT,                  KC_MS_WH_DOWN,  KC_M,           KC_N,           KC_E,           LT(_Arrows,KC_I),   KC_O,           MT(MOD_RCTL, KC_QUOTE),
    KC_F17,         KC_Z,           KC_X,           KC_C,               KC_D,               KC_V,                                                            KC_K,           KC_H,           KC_COMMA,       KC_DOT,             KC_SLASH,       OSM(MOD_RSFT),
    KC_ENTER,       KC_HASH,        KC_SPACE,       KC_MS_WH_DOWN,      KC_MS_WH_UP,                        KC_LEFT_GUI,                    KC_NO,                           KC_RIGHT_ALT,   DM_REC1,        DM_REC2,            KC_TRANSPARENT, DM_RSTP,

                                                                        KC_LEFT_CTRL, LT(_Numbers,KC_SPACE), OSM(MOD_LSFT),                 KC_NO,  KC_NO,  KC_NO
  ),

  [_Numbers] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_EQUAL,
    KC_LEFT_SHIFT,  KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_DOT,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_PLUS,        KC_MINUS,
    KC_TRANSPARENT, KC_SLASH,       KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                                                        KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_AMPR,
    KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT,                 KC_TRANSPARENT,                                 KC_0,           KC_0,           KC_DOT,         KC_EQUAL,       TT(_ColemakDHm),

                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_Arrows] = LAYOUT_moonlander(
    RGB_HUD,        RGB_SAD,            RGB_MODE_BREATHE,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,         RGB_SPI,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    RGB_MOD,        KC_TRANSPARENT,     KC_PGDN,            KC_UP,          KC_PAGE_UP,     KC_TRANSPARENT,         RGB_SPD,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI(LCTL(KC_LEFT)),KC_LEFT,            KC_DOWN,        KC_RIGHT,       LGUI(LCTL(KC_RIGHT)),   KC_TRANSPARENT,             KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    QK_BOOT,        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,                         KC_TRANSPARENT,             KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TT(_ColemakDHm),

                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_Planetside] = LAYOUT_moonlander(
    TD(Dance_Esc_Alt),  TD(Dance_1_F1),     TD(Dance_2_F2),     TD(Dance_3_F3),     TD(Dance_4_F4), KC_5,           KC_6,                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, KC_7,                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_SHIFT,      KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT, TD(Dance_8_H),                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_CTRL,       KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CAPS,            KC_KP_7,            KC_TRANSPARENT,     KC_J,               KC_MS_BTN1,                     TD(Dance_M_U),                  KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TT(_ColemakDHm),

                                                                                            KC_SPACE,   KC_MS_BTN2, TD(Dance_P_O),                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [_MiscGame] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_7,                                           KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_LEFT_SHIFT,  KC_TRANSPARENT, KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_8,                                           KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT,
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V,           KC_B,                                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                     KC_LEFT_GUI,                KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TT(_ColemakDHm),

                                                                        KC_SPACE,       KC_SPACE,       KC_TRANSPARENT,             KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo_bspc[] = { KC_N, KC_E, COMBO_END};
const uint16_t PROGMEM combo_enter[] = { KC_H, KC_COMMA, COMBO_END};
const uint16_t PROGMEM combo_del[] = { KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM combo_tab[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo_quote[] = { KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo_Rmouse[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM combo_Mmouse[] = { KC_R, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM combo_Lmouse[] = { KC_T, KC_S, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_bspc, KC_BSPC),
    COMBO(combo_enter, KC_ENTER),
    COMBO(combo_del, KC_DELETE),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_quote, KC_QUOTE),
    COMBO(combo_Rmouse, KC_MS_BTN2),
    COMBO(combo_Mmouse, KC_MS_BTN3),
    COMBO(combo_Lmouse, KC_MS_BTN1),
};

tap_dance_action_t tap_dance_actions[] = {
        [Dance_Esc_Alt] = ACTION_TAP_DANCE_DOUBLE(KC_ESCAPE, KC_LEFT_ALT),
        [Dance_1_F1] = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_F1),
        [Dance_2_F2] = ACTION_TAP_DANCE_DOUBLE(KC_2, KC_F2),
        [Dance_3_F3] = ACTION_TAP_DANCE_DOUBLE(KC_3, KC_F3),
        [Dance_4_F4] = ACTION_TAP_DANCE_DOUBLE(KC_4, KC_F4),
        [Dance_8_H] = ACTION_TAP_DANCE_DOUBLE(KC_8, KC_H),
        [Dance_M_U] = ACTION_TAP_DANCE_DOUBLE(KC_M, KC_U),
        [Dance_P_O] = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_O),
};
