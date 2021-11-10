////////////////////////////////////////
// AL68's Randoms - v0.1.0
// Author: AlbertLarsan68
// License: MIT
// Description: Random codes
////////////////////////////////////////

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>

/**
 * @brief Prints text at position in main screen
 * 
 * @param text Text to print
 * @param x Column to start text
 * @param y Line to print text
 */
void printText(const char *text, uint8_t x, uint8_t y);


int main(void)
{
    const char* HelloWorld = "Hello World!";
    const char* Welcome    = "Welcome to C!";

    os_ClrHome();

    printText(HelloWorld, 0, 0);
    printText(Welcome, 0, 1);

    while (!os_GetCSC());

    return 0;
}

void printText(const char *text, uint8_t xpos, uint8_t ypos)
{
    os_SetCursorPos(ypos, xpos);
    os_PutStrFull(text);
}

