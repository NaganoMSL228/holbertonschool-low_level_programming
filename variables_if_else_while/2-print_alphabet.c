#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in uppercase
 *
 * Description: This program prints the alphabet in uppercase,
 * followed by a new line. Only putchar can be used.
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}

putchar('\n');

return (0);
