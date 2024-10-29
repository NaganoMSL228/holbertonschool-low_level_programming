#include "main.h"

/**
 * _puts - Imprime une chaîne suivie d'une nouvelle ligne
 * @str: Pointeur vers la chaîne à imprimer
 *
 * Description: Cette fonction imprime chaque caractère de la chaîne
 * à stdout, suivie d'une nouvelle ligne.
 */
void _puts(char *str)
{
	while (*str !'\0')
	{	
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
