#include "main.h"
/**
 * _memcpy - Copie n octets de la zone mémoire src vers dest
 * @dest: Pointeur vers la zone mémoire de destination
 * @src: Pointeur vers la zone mémoire source
 * @n: Nombre d'octets à copier
 *
 * Return: Pointeur vers la zone mémoire de destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
