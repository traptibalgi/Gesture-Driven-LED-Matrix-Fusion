#include <at89c51ed2.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "string2hex.h"
#include "uart.h"

uint8_t hexCharToInt(char c)
{
    if (c >= '0' && c <= '9') {
        return (c - '0');
    } else if (c >= 'a' && c <= 'f') {
        return (c - 'a' + 10);
    } else if (c >= 'A' && c <= 'F') {
        return (c - 'A' + 10);
    }
    else
        return -1;
}

uint8_t hexStringtoInt(char *hexString , uint8_t length)
{

    uint8_t result =0;
    int i=0;
    while (hexString[i] != '\0' && i<length) {
        int hexValue = hexCharToInt(hexString[i]);
        if (hexValue == -1) {
            // Handle invalid characters here
            return 0; // Return 0 for invalid input
        }
        result = (result << 4) | hexValue;
        i++;
    }
    return result;
}

int getString(char* dataString)
{
    int i;
    char temp;
    for(i=0; i<2; i++)
    {
        temp = echo();

        if(temp ==ENTER)
            break;
        if( (temp>='0' && temp <='9') || (temp>='A' && temp <='F') || (temp>='a' && temp <='f'))
        {
            *(dataString + i)= temp;
        }
        else
        {
         printf_tiny("Enter valid value between 0x00 and 0xFF\n\r");
         return -1;
        }
    }
    printf_tiny("\r\n");
    return i;
}

bool GetValue(uint8_t* dataInt)
{
    char dataString[2] ;
    int len =0;
    len = getString(dataString);
    if(len == -1)
        return 0;
    *dataInt= hexStringtoInt(dataString, len);
    return 1;

}

