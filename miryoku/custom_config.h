// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//* -------------------------- Sources/Inspirations -------------------------- *//
// https://github.com/LilRooks/miryoku_zmk/blob/master/miryoku/custom_config.h#L1
// https://github.com/manna-harbour/miryoku/discussions/158


// #define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define XXX &none

//* -------------------------- Example for Reference ------------------------- *//
// #define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
// &kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
// &kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
// &kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
// U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


//* --------------------------- Remap Normal Layers -------------------------- *//
// layer name obtained from miryoku_layer_selection.h
// obtained from #define MIRYOKU_ALTERNATIVES_NUM from miryoku_layer_alternatives.h
#define MIRYOKU_LAYER_NAV \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          &to U_GENSHIN,   \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


//* -------------------------- Genshin Keymap Layer -------------------------- *//
//! remember to add these into the additional config when building in github actions (separate with \n)
// view combo keys in miryoku_babel/miryoku.h
#define MIRYOKU_LAYER_GENSHIN \
&kp NUM_1,         &kp NUM_2,         &kp NUM_3,                  &kp NUM_4,         &kp NUM_5,         U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
&U_MT(V, Z)        &kp Q,             &kp W,                      &kp E,             &kp R,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
&U_MT(X, T),       &kp A,             &kp S,                      &kp D,             &kp F,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              &U_LT(U_GENSHIN_EXTRA, ESC),&kp SPC,           &kp LALT,          U_NU,              &u_to_U_BASE,      U_NU,              U_NP,              U_NP

#define MIRYOKU_LAYER_GENSHIN_EXTRA \
&kp F1,            &kp F2,            &kp F3,            &kp F4,            &kp F5,            U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
&kp F6,            &kp O,             &kp J,             &kp P,             &kp Y,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
&kp L,             &kp B,             &kp M,             &kp C,             &kp G,             U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              U_NP,              U_NP


//* ------------------------------ Klein Keymap ------------------------------ *//
#define MIRYOKU_LAYOUTMAPPING_KLEIN( \
K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04                 K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24                 K25  K26  K27  K28  K29 \
          K32  K33  K34  XXX       XXX  K35  K36  K37

//! remember to add the backslash (\) when adding new layer
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GENSHIN,   "Genshin") \
MIRYOKU_X(GENSHIN_EXTRA,   "Genshin Extra")

#define MIRYOKU_LAYERMAPPING_GENSHIN MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GENSHIN_EXTRA MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GENSHIN   10
#define U_GENSHIN_EXTRA   11    