#include "main.h"

/**
 * print_rev - Imprime une chaîne en sens inverse, suivie d'une nouvelle ligne
 * @s: Pointeur vers la chaîne à imprimer en sens inverse
 */
void print_rev(char *s)
{
int jsp = 0;
int i;

while (s[jsp] != '\0')
{
jsp++;
}

for (i = jsp - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
