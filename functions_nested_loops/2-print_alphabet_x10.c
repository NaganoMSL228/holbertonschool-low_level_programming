#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point of the program
 *
 * Description: Prints a quote using the puts function
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
const char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";
int num;
for (num = 0; num < 10; num++)
{
const char *current = alphabet;
while (*current)
{_putchar(*current++);
}
}
}
