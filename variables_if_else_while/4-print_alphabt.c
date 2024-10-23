#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in uppercase
 *
 * Description: This program prints the alphabet in uppercase,
 * followed by a new line. Only putchar can be used.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'q' || letter == 'e')
		continue;
	putchar(letter);
	}
	putchar('\n');

return (0);
}
