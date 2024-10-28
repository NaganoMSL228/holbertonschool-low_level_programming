#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Description: If size is 0 or less, only prints a newline
 * Uses the character # to print the triangle
 */

void print_triangle(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
if (col <= size - row)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
