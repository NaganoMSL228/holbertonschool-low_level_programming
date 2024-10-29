#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int fau = 0;

	while (str[fau])
		fau++;

	for (int i = (fau + 1) / 2; str[i]; i++)
		_putchar(str[i]);

	_putchar('\n');
}
