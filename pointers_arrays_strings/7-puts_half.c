#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int (length = 0);

	while (str[length])
		length++;

	for (int i = ((length + 1) / 2; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
