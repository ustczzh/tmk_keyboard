/*
Copyright 2016 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "unimap_trans.h"

enum macro_id {
    OPEN_TAB,
    SAVE_AS,
    COPY_LINK,
    RUN_NOTEPAD,
    RUN_CALC,
    M_1,
    //ALT_TAB,
};

// Macro: 
#define AC_OPTB    ACTION_MACRO(OPEN_TAB)       //Open in new tab;
#define AC_SVAS    ACTION_MACRO(SAVE_AS)        //Save As in IE;
#define AC_CPLK    ACTION_MACRO(COPY_LINK)      //Copy link;
#define AC_RNPD    ACTION_MACRO(RUN_NOTEPAD)    //Open Notepad;
#define AC_RCAL    ACTION_MACRO(RUN_CALC)       //Open Calculator;
#define AC_M_1     ACTION_MACRO(M_1)            //Run Macro 1;

//Layer keys and dual role keys;
#define AC_L4      ACTION_LAYER_MOMENTARY(4)
#define AC_L5      ACTION_LAYER_MOMENTARY(5)
#define AC_L6      ACTION_LAYER_MOMENTARY(6)
#define AC_L7      ACTION_LAYER_MOMENTARY(7)
#define AC_DL0     ACTION_DEFAULT_LAYER_SET(0)
#define AC_DL1     ACTION_DEFAULT_LAYER_SET(1)
#define AC_ESC4    ACTION_LAYER_TAP_KEY(4, KC_ESC)
#define AC_TAB5    ACTION_LAYER_TAP_KEY(5, KC_TAB)
#define AC_SPC6    ACTION_LAYER_TAP_KEY(6, KC_SPC)
#define AC_CAP5    ACTION_LAYER_TAP_KEY(5, KC_CAPS)
#define AC_CMPT    ACTION_MODS_KEY(MOD_LGUI, KC_E)      //Open My Computer
#define AC_DSKT    ACTION_MODS_KEY(MOD_LGUI, KC_D)      //Show Desktop
#define AC_BACK    ACTION_MODS_KEY(MOD_LALT, KC_LEFT)
#define AC_FRWD    ACTION_MODS_KEY(MOD_LALT, KC_RGHT)
#define AC_LTAB    ACTION_MODS_KEY(MOD_LCTL, KC_PGUP)
#define AC_RTAB    ACTION_MODS_KEY(MOD_LCTL, KC_PGDN)
#define AC_CLSE    ACTION_MODS_KEY(MOD_LALT, KC_F4)
#define AC_ENT_    ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT)


#ifdef KEYMAP_SECTION_ENABLE
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const action_t actionmaps[][UNIMAP_ROWS][UNIMAP_COLS] PROGMEM = {
#endif
// 0, HHKB, Colemak
    [0] = UNIMAP_HHKB(
    ESC4,1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,
    TAB5,Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC,     BSPC,
    LCTL,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,          ENT_,
    LSFT,     Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,     RSFT,L7,
         L5,  LALT,               SPC6,                    CAP5,RGUI ),
// 1, HHKB, QWERTY, Game
    [1] = UNIMAP_HHKB(
    ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,
    TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,     BSPC,
    LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,          ENT_,
    LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,L7,
         L5,  LALT,               SPC,                     RALT,RGUI ),

    [2] = UNIMAP_HHKB(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,
         TRNS,TRNS,               TRNS,                    TRNS,TRNS ),
    [3] = UNIMAP_HHKB(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,
         TRNS,TRNS,               TRNS,                    TRNS,TRNS ),
    [4] = UNIMAP_HHKB(
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,
         TRNS,TRNS,               TRNS,                    TRNS,TRNS ),
    [5] = UNIMAP_HHKB(
    ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,
    CAPS,M_1 ,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,UP,  PGDN,TRNS,DL1, DL0,      BSPC,
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,HOME,LEFT,DOWN,RGHT,END, TRNS,          ENT,
    MPLY,     MNXT,MPRV,MSTP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,
         TRNS,TRNS,               SPC,                     TRNS,TRNS ),
    [6] = UNIMAP_HHKB(
    CLSE,F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,
    CAPS,WH_L,WH_U,MS_U,WH_D,WH_R,DEL, PGUP,UP,  PGDN,TRNS,TRNS,TRNS,     BSPC,
    TRNS,LTAB,MS_L,MS_D,MS_R,RTAB,HOME,LEFT,DOWN,RGHT,END, BSPC,          ENT,
    TRNS,     BACK,FRWD,BTN1,BTN2,BTN3,BSPC,ENT, TRNS,TRNS,TRNS,     TRNS,TRNS,
         CMPT,RNPD,               SPC,                     RCAL,DSKT ),
    [7] = UNIMAP_HHKB(
    PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,
    CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,     BSPC,
    TRNS,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,          ENT,
    TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,     TRNS,TRNS,
         TRNS,TRNS,               SPC,                     TRNS,TRNS ),
};



/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case OPEN_TAB:
            return (record->event.pressed ?
                    MACRO( D(BTN2), U(BTN2), W(255), T(T), END ) :
                    MACRO_NONE );
        case SAVE_AS:
            return (record->event.pressed ?
                    MACRO( D(BTN2), U(BTN2), W(255), T(K), W(255), W(255), W(255), W(255), W(255), W(255), W(255), W(255), T(ENT), END ) :
                    MACRO_NONE );
        case COPY_LINK:
            return (record->event.pressed ?
                    MACRO( D(BTN2), U(BTN2), W(255), T(E), END ) :
                    MACRO_NONE );
        case RUN_NOTEPAD:
            return (record->event.pressed ?
                    MACRO( D(LGUI), D(R), U(R), U(LGUI), W(255), T(N), T(O), T(T), T(E), T(P), T(A), T(D), T(ENT), END ) :
                    MACRO_NONE );
        case RUN_CALC:
            return (record->event.pressed ?
                    MACRO( D(LGUI), D(R), U(R), U(LGUI), W(255), T(C), T(A), T(L), T(C), T(ENT), END ) :
                    MACRO_NONE );
        case M_1:
            return (record->event.pressed ?
                    MACRO( T(1),T(2),T(1),T(0),T(0),T(0),T(0),T(0),T(4),T(0),T(0),T(0),T(0),T(0),T(6),T(2),T(4),D(LSFT),T(D),U(LSFT), END ) :
                    MACRO_NONE );
        //case ALT_TAB:
        //    // XXX: doesn't work after stuck key fix
        //    return (record->event.pressed ?
        //            MACRO( D(LALT), D(TAB), END ) :
        //            MACRO( U(TAB), END ));
    }
    return MACRO_NONE;
}

