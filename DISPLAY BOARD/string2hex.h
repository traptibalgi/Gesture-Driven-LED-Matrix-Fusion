#ifndef STRING2HEX_H_INCLUDED
#define STRING2HEX_H_INCLUDED
#include <stdbool.h>

uint8_t hexStringtoInt(char *hexString , uint8_t length);
uint8_t hexCharToInt(char c);
bool GetValue(uint8_t* dataInt);
#endif // STRING2HEX_H_INCLUDED
