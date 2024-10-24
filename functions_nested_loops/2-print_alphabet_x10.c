#include "main.h"

/**
 * print_alphabet_x10 -  Prints the alphabet 10 times
 *
 * Description: PRINTS "print_alphabet" followed by a new line
 * followed by a new line. Only _putchar can be used.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	print_alphabet();
	}
}
