#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	int started = 0;

	for (int i = sizeof(n) * 8 - 1; i >= 0; i--)

	{
		unsigned long int bit = (n >> i) & 1;

		if (bit == 1 || started)
		{
			putchar(bit + '0');
			started = 1;
		}
	}

	if (!started)
	{
		putchar('0');
	}
}

{
	unsigned long int n = 10;

	print_binary(n);

	return (0);
}
