#include "main.h"

/**
 * _print_rev_recursion - Imprime une chaine de caracteres a l'envers
 * @s: La chaine de caracteres a imprimer
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}