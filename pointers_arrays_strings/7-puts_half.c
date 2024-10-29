#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
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
