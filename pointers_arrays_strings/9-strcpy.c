#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
int length = 0;
int i;

while (str[length] != '\0')
length++;

i = (length + 1) / 2;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
