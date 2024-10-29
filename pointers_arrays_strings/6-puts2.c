#include "main.h"

/**
 * puts2 - Imprime un caractère sur deux d'une chaîne, en commençant par le premier
 * @str: Pointeur vers la chaîne à imprimer
 */
void puts2(char *str)
{
int i = 0;

while (*str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(*str[i]);
}
i++;
}

_putchar('\n');
}
