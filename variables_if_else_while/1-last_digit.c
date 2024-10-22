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
	int l;

	srand(time(0));

	n = rand() - RAND_MAX / 2;


	l = n % 10;


	printf("Last digit of %d is %d and is 0\n", n, l);

	if (l > 6)
	{
	printf("and is greater than 5\n")
	}
	else if (l == 0)
	{
	printf("and is 0\n")
	}
	else
	printf{"and is less than 6 and not 0\n"}

	return (0);
}
