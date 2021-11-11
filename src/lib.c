#include "lib.h"

#include <tice.h>

void printText(const char *text, uint8_t xpos, uint8_t ypos)
{
    os_SetCursorPos(ypos, xpos);
    os_PutStrFull(text);
}

void float2str(float value, char *str)
{
    real_t tmp_real = os_FloatToReal(value);
    os_RealToStr(str, &tmp_real, 8, 1, 2);
}