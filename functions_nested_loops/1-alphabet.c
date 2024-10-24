#include "main.h"

/**
 * main - Prints the alphabet in uppercase
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a new line. Only _putchar can be used.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
