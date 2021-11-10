#ifndef MAIN_H_INCLUDE
#define MAIN_H_INCLUDE

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int main(void);

/**
 * @brief Prints text at position in main screen
 * 
 * @param text Text to print
 * @param x Column to start text
 * @param y Line to print text
 */
void printText(const char *text, uint8_t x, uint8_t y);

#ifdef __cplusplus
}
#endif


#endif // MAIN_H_INCLUDE