#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - Helper function to recursively calculate square root
 * @n: The number to find the square root of
 * @i: Current guess
 *
 * Return: The natural square root if it exists, -1 otherwise
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}
