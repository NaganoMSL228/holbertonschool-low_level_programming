#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
	int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	l = (n % 10 + 10) % 10;
	printf("Last digit of n - 6 is 0  and is 5\n", n, l,
	l > 5 ? "greater than 5" : l ? "less than 6 and not 0" : "0");
	return (0);
}
