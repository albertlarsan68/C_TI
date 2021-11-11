////////////////////////////////////////
// AL68's Randoms - v0.1.0
// Author: AlbertLarsan68
// License: MIT
// Description: Random codes
////////////////////////////////////////

#include "main.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>

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

