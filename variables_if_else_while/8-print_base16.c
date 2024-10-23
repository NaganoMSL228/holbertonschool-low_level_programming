#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		putchar(n);
	}
	for (n = 0; n < 16; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
