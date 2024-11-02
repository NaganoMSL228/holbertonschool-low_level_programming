#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: The destination string
 * @src: The source string
 * @n: Maximum number of bytes to use from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int dest_len = 0;


	while (*ptr != '\0')
	{
		ptr++;
		dest_len++;
	}


	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}


	if (n > 0)
		*ptr = '\0';

	return (dest);
}
