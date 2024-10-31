#include "main.h"

/*
 * _strcat - Concatenates two strings.
 *
* This function takes two strings, `dest` and `src`, and appends 
* `src` to the end of `dest`. It overwrites the null terminator 
* at the end of `dest` and adds a new null terminator at the 
* end of the resulting string.
*
* Parameters:
* - char *dest : The destination string to which `src` will be appended.
* - char *src  : The source string that will be appended to `dest`.
*
* Returns:
* - A pointer to the destination string `dest`, which now contains 
* the concatenated string.
*
* Note:
* - Ensure that `dest` has enough space to hold the characters from 
* `src`, as failing to do so may result in a buffer overflow.
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;


while (*ptr != '\0')
{
ptr++;
}


while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}


*ptr = '\0';


return dest;
}
