#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str);
{
int fautjedors = 0, i, n


while (str[fautjedors] != '\0')
fautjedors++;


n = (fautjedors - 1) / 2;


for (i = fautjedors - n; i < fautjedors; i++)
_putchar(str[i]);

_putchar('\n');
}
