#include "system.h"
#include "specKeyMap.h"

CMatrixRecord const keyMatrixMain[] =
{
    { KEY_LSHIFT, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_NONE },
    { KEY_Z, SPEC_KEY_Z, SPEC_KEY_NONE },
    { KEY_X, SPEC_KEY_X, SPEC_KEY_NONE },
    { KEY_C, SPEC_KEY_C, SPEC_KEY_NONE },
    { KEY_V, SPEC_KEY_V, SPEC_KEY_NONE },
    { KEY_A, SPEC_KEY_A, SPEC_KEY_NONE },
    { KEY_S, SPEC_KEY_S, SPEC_KEY_NONE },
    { KEY_D, SPEC_KEY_D, SPEC_KEY_NONE },
    { KEY_F, SPEC_KEY_F, SPEC_KEY_NONE },
    { KEY_G, SPEC_KEY_G, SPEC_KEY_NONE },
    { KEY_Q, SPEC_KEY_Q, SPEC_KEY_NONE },
    { KEY_W, SPEC_KEY_W, SPEC_KEY_NONE },
    { KEY_E, SPEC_KEY_E, SPEC_KEY_NONE },
    { KEY_R, SPEC_KEY_R, SPEC_KEY_NONE },
    { KEY_T, SPEC_KEY_T, SPEC_KEY_NONE },
    { KEY_1, SPEC_KEY_1, SPEC_KEY_NONE },
    { KEY_2, SPEC_KEY_2, SPEC_KEY_NONE },
    { KEY_3, SPEC_KEY_3, SPEC_KEY_NONE },
    { KEY_4, SPEC_KEY_4, SPEC_KEY_NONE },
    { KEY_5, SPEC_KEY_5, SPEC_KEY_NONE },
    { KEY_0, SPEC_KEY_0, SPEC_KEY_NONE },
    { KEY_9, SPEC_KEY_9, SPEC_KEY_NONE },
    { KEY_8, SPEC_KEY_8, SPEC_KEY_NONE },
    { KEY_7, SPEC_KEY_7, SPEC_KEY_NONE },
    { KEY_6, SPEC_KEY_6, SPEC_KEY_NONE },
    { KEY_P, SPEC_KEY_P, SPEC_KEY_NONE },
    { KEY_O, SPEC_KEY_O, SPEC_KEY_NONE },
    { KEY_I, SPEC_KEY_I, SPEC_KEY_NONE },
    { KEY_U, SPEC_KEY_U, SPEC_KEY_NONE },
    { KEY_Y, SPEC_KEY_Y, SPEC_KEY_NONE },
    { KEY_RETURN, SPEC_KEY_ENTER, SPEC_KEY_NONE },
    { KEY_L, SPEC_KEY_L, SPEC_KEY_NONE },
    { KEY_K, SPEC_KEY_K, SPEC_KEY_NONE },
    { KEY_J, SPEC_KEY_J, SPEC_KEY_NONE },
    { KEY_H, SPEC_KEY_H, SPEC_KEY_NONE },
    { KEY_SPACE, SPEC_KEY_SPACE, SPEC_KEY_NONE },
    { KEY_RSHIFT, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_NONE },
    { KEY_M, SPEC_KEY_M, SPEC_KEY_NONE },
    { KEY_N, SPEC_KEY_N, SPEC_KEY_NONE },
    { KEY_B, SPEC_KEY_B, SPEC_KEY_NONE },

    { KEY_BACKSPACE, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_0 },
    { KEY_HOME, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_7 },
    { KEY_END, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_6 },
    { KEY_PAGEUP, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_5 },
    { KEY_PAGEDOWN, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_8 },

    { KEY_MINUS, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_J },
    { KEY_EQUALS, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_K },
    { KEY_LEFTBRACKET, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_V },
    { KEY_RIGHTBRACKET, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_B },
    { KEY_SEMICOLON, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_O },
    { KEY_QUOTE, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_P },
    { KEY_COMMA, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_N },
    { KEY_PERIOD, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_M },
    { KEY_SLASH, SPEC_KEY_SYMBOL_SHIFT, SPEC_KEY_Z },

    { KEY_BACKQUOTE, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_9 },
    { KEY_CAPSLOCK, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_2 },
    { KEY_TAB, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_1 },
    { KEY_BACKSLASH, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_SYMBOL_SHIFT },

    { KEY_NONE }
};

CMatrixRecord const keyMatrixCursor[] =
{
    { KEY_UP, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_7 },
    { KEY_DOWN, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_6 },
    { KEY_LEFT, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_5 },
    { KEY_RIGHT, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_8 },
    { KEY_LCTRL, SPEC_KEY_CAPS_SHIFT, SPEC_KEY_1 },
    { KEY_NONE }
};

CMatrixRecord const keyMatrixKempston[] =
{
    { KEY_UP, SPEC_KEY_UP, SPEC_KEY_NONE },
    { KEY_DOWN, SPEC_KEY_DOWN, SPEC_KEY_NONE },
    { KEY_LEFT, SPEC_KEY_LEFT, SPEC_KEY_NONE },
    { KEY_RIGHT, SPEC_KEY_RIGHT, SPEC_KEY_NONE },
    { KEY_LCTRL, SPEC_KEY_FIRE, SPEC_KEY_NONE },
    { KEY_NONE }
};

CMatrixRecord const keyMatrixSinclair1[] =
{
    { KEY_UP, SPEC_KEY_4, SPEC_KEY_NONE },
    { KEY_DOWN, SPEC_KEY_3, SPEC_KEY_NONE },
    { KEY_LEFT, SPEC_KEY_1, SPEC_KEY_NONE },
    { KEY_RIGHT, SPEC_KEY_2, SPEC_KEY_NONE },
    { KEY_LCTRL, SPEC_KEY_5, SPEC_KEY_NONE },
    { KEY_NONE }
};

CMatrixRecord const keyMatrixSinclair2[] =
{
    { KEY_UP, SPEC_KEY_9, SPEC_KEY_NONE },
    { KEY_DOWN, SPEC_KEY_8, SPEC_KEY_NONE },
    { KEY_LEFT, SPEC_KEY_6, SPEC_KEY_NONE },
    { KEY_RIGHT, SPEC_KEY_7, SPEC_KEY_NONE },
    { KEY_LCTRL, SPEC_KEY_0, SPEC_KEY_NONE },
    { KEY_NONE }
};

CMatrixRecord const keyMatrixQaopm[] =
{
    { KEY_UP, SPEC_KEY_Q, SPEC_KEY_NONE },
    { KEY_DOWN, SPEC_KEY_A, SPEC_KEY_NONE },
    { KEY_LEFT, SPEC_KEY_O, SPEC_KEY_NONE },
    { KEY_RIGHT, SPEC_KEY_P, SPEC_KEY_NONE },
    { KEY_LCTRL, SPEC_KEY_M, SPEC_KEY_NONE },
    { KEY_NONE }
};
