#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t node_count = 0;
char *str;
unsigned int len;

while (h != NULL)
{
str = h->str;
len = h->len;

_putchar('[');
if (str == NULL)
{
_putchar('0');
_putchar(']');
_putchar(' ');
_putchar('(');
_putchar('n');
_putchar('i');
_putchar('l');
_putchar(')');
}
else
{
print_number(len);
_putchar(']');
_putchar(' ');
print_string(str);
}
_putchar('\n');

h = h->next;
node_count++;
}

return (node_count);
}

/**
 * print_number - prints an unsigned integer
 * @n: number to print
 */
void print_number(unsigned int n)
{
if (n / 10)
print_number(n / 10);
_putchar((n % 10) + '0');
}

/**
 * print_string - prints a string
 * @s: string to print
 */
void print_string(char *s)
{
while (*s)
{
_putchar(*s);
s++;
}
}
