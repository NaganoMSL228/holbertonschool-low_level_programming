#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: size of the triangle
 */
void print_triangle(int size)
#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar(j < size - i - 1 && ' ' : '#');
		i < size - 1 && _putchar('\n') : 0;
	}
	_putchar('\n');
}
