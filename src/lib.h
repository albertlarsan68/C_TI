#ifndef LIB_H
#define LIB_H

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     * @brief Prints text at position in main screen
     * 
     * @param text Text to print
     * @param x Column to start text
     * @param y Line to print text
     */
    void printText(const char *text, uint8_t x, uint8_t y);

    /**
     * @brief Converts a float into a str
     * 
     * @param value the float to convert
     * @param str the string that will be filled
     */
    void float2str(float value, char *str);

#ifdef __cplusplus
}
#endif

#endif // LIB_H