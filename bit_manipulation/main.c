#include "main.h"

/**
 * main - Check the code for printing binary representation
 * Return: Always 0.
 */
int main(void)
{
print_binary(0);
_putchar('\n');
print_binary(1);
_putchar('\n');
print_binary(98);
_putchar('\n');
print_binary(1024);
_putchar('\n');
print_binary((1 << 10) + 1);
_putchar('\n');

return (0);
}
