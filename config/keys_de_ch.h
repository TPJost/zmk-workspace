#pragma once

#include <dt-bindings/zmk/keys.h>

/*
 * Swiss German (de_CH, Windows) key aliases for ZMK.
 *
 * ASCII layout reference (ISO, three levels: unshifted / Shift / AltGr)
 *
 * ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────────┐
 * │ §  │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │ 0  │ '  │ ^  │ <-      │
 * │ °  │ +  │ "  │ *  │ ç  │ %  │ &  │ /  │ (  │ )  │ =  │ ?  │ `  │         │
 * │    │ ¦  │ @  │ #  │    │    │ ¬  │ |  │ ¢  │    │    │ ´  │ ~  │         │
 * ├────┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬───────┤
 * │ Tab  │ Q  │ W  │ E  │ R  │ T  │ Z  │ U  │ I  │ O  │ P  │ ü  │ ¨  │ Enter │
 * │      │    │    │    │    │    │    │    │    │    │    │ è  │ !  │       │
 * │      │    │    │ €  │    │    │    │    │    │    │    │ [  │ ]  │       │
 * ├──────┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴───────┤
 * │ Caps  │ A  │ S  │ D  │ F  │ G  │ H  │ J  │ K  │ L  │ ö  │ ä  │ $         │
 * │       │    │    │    │    │    │    │    │    │    │ é  │ à  │ £         │
 * │       │    │    │    │    │    │    │    │    │    │    │ {  │ }         │
 * ├──────┬┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬────────┤
 * │ Shift│ < │ Y  │ X  │ C  │ V  │ B  │ N  │ M  │ ,  │ .  │ -  │Shift│        │
 * │      │ > │    │    │    │    │    │    │    │ ;  │ :  │ _  │     │        │
 * │      │ \ │    │    │    │    │    │    │    │    │    │    │     │        │
 * └──────┴───┴────┴────┴────┴────┴────┴────┴────┴────┴────┴────┴─────┴────────┘
 */

/* ========================================================================== */
/* Unmodified keys that differ from US                                        */
/* ========================================================================== */

/*
 * Number row (unshifted) is numerically identical to US, but listed here
 * because the same physical keys have different Shift/AltGr symbols on de_CH.
 */

/*
 * Internal | US (1) | de_CH (1) | Unicode (U+0031)
 */
#define DE_CH_N1 N1

/*
 * Internal | US (2) | de_CH (2) | Unicode (U+0032)
 */
#define DE_CH_N2 N2

/*
 * Internal | US (3) | de_CH (3) | Unicode (U+0033)
 */
#define DE_CH_N3 N3

/*
 * Internal | US (4) | de_CH (4) | Unicode (U+0034)
 */
#define DE_CH_N4 N4

/*
 * Internal | US (5) | de_CH (5) | Unicode (U+0035)
 */
#define DE_CH_N5 N5

/*
 * Internal | US (6) | de_CH (6) | Unicode (U+0036)
 */
#define DE_CH_N6 N6

/*
 * Internal | US (7) | de_CH (7) | Unicode (U+0037)
 */
#define DE_CH_N7 N7

/*
 * Internal | US (8) | de_CH (8) | Unicode (U+0038)
 */
#define DE_CH_N8 N8

/*
 * Internal | US (9) | de_CH (9) | Unicode (U+0039)
 */
#define DE_CH_N9 N9

/*
 * Internal | US (0) | de_CH (0) | Unicode (U+0030)
 */
#define DE_CH_N0 N0

/*
 * Internal | US (`) | de_CH (§) | Unicode (U+00A7)
 */
#define DE_CH_SECTION GRAVE

/*
 * Internal | US (-) | de_CH (') | Unicode (U+0027)
 */
#define DE_CH_APOSTROPHE MINUS

/*
 * Internal | US (=) | de_CH (^ dead) | Unicode (U+005E)
 */
#define DE_CH_DEAD_CIRCUMFLEX EQUAL

/*
 * Internal | US ([) | de_CH (ü) | Unicode (U+00FC)
 */
#define DE_CH_U_UMLAUT LBKT

/*
 * Internal | US (]) | de_CH (¨ dead) | Unicode (U+00A8)
 */
#define DE_CH_DEAD_DIAERESIS RBKT

/*
 * Internal | US (\) | de_CH ($) | Unicode (U+0024)
 */
#define DE_CH_DOLLAR BSLH

/*
 * Internal | US (;) | de_CH (ö) | Unicode (U+00F6)
 */
#define DE_CH_O_UMLAUT SEMI

/*
 * Internal | US (') | de_CH (ä) | Unicode (U+00E4)
 */
#define DE_CH_A_UMLAUT SQT

/*
 * Internal | US (/) | de_CH (-) | Unicode (U+002D)
 */
#define DE_CH_MINUS FSLH

/*
 * Internal | US (Y) | de_CH (Z) | Unicode (U+005A)
 */
#define DE_CH_Z Y

/*
 * Internal | US (Z) | de_CH (Y) | Unicode (U+0059)
 */
#define DE_CH_Y Z

/*
 * Internal | US (ISO: none) | de_CH (<) | Unicode (U+003C)
 */
#define DE_CH_LESS_THAN NUBS

/* ========================================================================== */
/* Shifted keys that differ from US                                           */
/* ========================================================================== */

/*
 * Internal | US (~) | de_CH (°) | Unicode (U+00B0)
 */
#define DE_CH_DEGREE LS(GRAVE)

/*
 * Internal | US (!) | de_CH (+) | Unicode (U+002B)
 */
#define DE_CH_PLUS LS(N1)

/*
 * Internal | US (@) | de_CH (") | Unicode (U+0022)
 */
#define DE_CH_DQUOTE LS(N2)

/*
 * Internal | US (#) | de_CH (*) | Unicode (U+002A)
 */
#define DE_CH_ASTERISK LS(N3)

/*
 * Internal | US ($) | de_CH (ç) | Unicode (U+00E7)
 */
#define DE_CH_C_CEDILLA LS(N4)

/*
 * Internal | US (%) | de_CH (%) | Unicode (U+0025)
 */
#define DE_CH_PERCENT LS(N5)

/*
 * Internal | US (^) | de_CH (&) | Unicode (U+0026)
 */
#define DE_CH_AMPERSAND LS(N6)

/*
 * Internal | US (&) | de_CH (/) | Unicode (U+002F)
 */
#define DE_CH_SLASH LS(N7)

/*
 * Internal | US (*) | de_CH (() | Unicode (U+0028)
 */
#define DE_CH_LPAREN LS(N8)

/*
 * Internal | US (() | de_CH ()) | Unicode (U+0029)
 */
#define DE_CH_RPAREN LS(N9)

/*
 * Internal | US ()) | de_CH (=) | Unicode (U+003D)
 */
#define DE_CH_EQUAL LS(N0)

/*
 * Internal | US (_) | de_CH (?) | Unicode (U+003F)
 */
#define DE_CH_QUESTION LS(MINUS)

/*
 * Internal | US (+) | de_CH (` dead) | Unicode (U+0060)
 */
#define DE_CH_DEAD_GRAVE LS(EQUAL)

/*
 * Internal | US ({) | de_CH (è) | Unicode (U+00E8)
 */
#define DE_CH_E_GRAVE LS(LBKT)

/*
 * Internal | US (}) | de_CH (!) | Unicode (U+0021)
 */
#define DE_CH_EXCL LS(RBKT)

/*
 * Internal | US (|) | de_CH (£) | Unicode (U+00A3)
 */
#define DE_CH_POUND LS(BSLH)

/*
 * Internal | US (:) | de_CH (é) | Unicode (U+00E9)
 */
#define DE_CH_E_ACUTE LS(SEMI)

/*
 * Internal | US (") | de_CH (à) | Unicode (U+00E0)
 */
#define DE_CH_A_GRAVE LS(SQT)

/*
 * Internal | US (<) | de_CH (>) | Unicode (U+003E)
 */
#define DE_CH_GREATER_THAN LS(NUBS)

/*
 * Internal | US (,) | de_CH (;) | Unicode (U+003B)
 */
#define DE_CH_SEMICOLON LS(COMMA)

/*
 * Internal | US (.) | de_CH (:) | Unicode (U+003A)
 */
#define DE_CH_COLON LS(DOT)

/*
 * Internal | US (_) | de_CH (_) | Unicode (U+005F)
 */
#define DE_CH_UNDERSCORE LS(FSLH)

/* ========================================================================== */
/* AltGr (Right Alt) third-level keys                                         */
/* ========================================================================== */

/*
 * Internal | US (AltGr+1: none) | de_CH (¦) | Unicode (U+00A6)
 */
#define DE_CH_BROKEN_BAR RA(N1)

/*
 * Internal | US (AltGr+2: none) | de_CH (@) | Unicode (U+0040)
 */
#define DE_CH_AT RA(N2)

/*
 * Internal | US (AltGr+3: none) | de_CH (#) | Unicode (U+0023)
 */
#define DE_CH_HASH RA(N3)

/*
 * Internal | US (AltGr+6: none) | de_CH (¬) | Unicode (U+00AC)
 */
#define DE_CH_NOT_SIGN RA(N6)

/*
 * Internal | US (AltGr+7: none) | de_CH (|) | Unicode (U+007C)
 */
#define DE_CH_PIPE RA(N7)

/*
 * Internal | US (AltGr+8: none) | de_CH (¢) | Unicode (U+00A2)
 */
#define DE_CH_CENT RA(N8)

/*
 * Internal | US (AltGr+E: none) | de_CH (€) | Unicode (U+20AC)
 */
#define DE_CH_EURO RA(E)

/*
 * Internal | US (AltGr+': none) | de_CH (´ dead) | Unicode (U+00B4)
 */
#define DE_CH_DEAD_ACUTE RA(MINUS)

/*
 * Internal | US (AltGr+=: none) | de_CH (~ dead) | Unicode (U+007E)
 */
#define DE_CH_DEAD_TILDE RA(EQUAL)

/*
 * Internal | US (AltGr+[: none) | de_CH ([) | Unicode (U+005B)
 */
#define DE_CH_LBRACKET RA(LBKT)

/*
 * Internal | US (AltGr+]: none) | de_CH (]) | Unicode (U+005D)
 */
#define DE_CH_RBRACKET RA(RBKT)

/*
 * Internal | US (AltGr+': none) | de_CH ({) | Unicode (U+007B)
 */
#define DE_CH_LBRACE RA(SQT)

/*
 * Internal | US (AltGr+\: none) | de_CH (}) | Unicode (U+007D)
 */
#define DE_CH_RBRACE RA(BSLH)

/*
 * Internal | US (AltGr+ISO: none) | de_CH (\) | Unicode (U+005C)
 */
#define DE_CH_BSLASH RA(NUBS)

/* ========================================================================== */
/* Dead key usage reference (visible accent output in macros)                 */
/* ========================================================================== */
/*
 * To emit visible accent characters with dead keys, send dead key + SPACE:
 * - ^ : &kp DE_CH_DEAD_CIRCUMFLEX, &kp SPACE
 * - ` : &kp DE_CH_DEAD_GRAVE,      &kp SPACE
 * - ~ : &kp DE_CH_DEAD_TILDE,      &kp SPACE
 * - ´ : &kp DE_CH_DEAD_ACUTE,      &kp SPACE
 * - ¨ : &kp DE_CH_DEAD_DIAERESIS,  &kp SPACE
 */

/*
 * Internal | US (.) | de_CH (.) | Unicode (U+002E)
 */
#define DE_CH_DOT DOT
