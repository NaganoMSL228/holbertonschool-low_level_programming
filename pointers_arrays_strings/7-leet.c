#include "main.h"

/**
 * leet - Encode une chaîne de caractères en 1337 (leet speak)
 * @str: La chaîne de caractères à encoder
 *
 * Description: Cette fonction remplace certaines lettres par leurs
 * équivalents en 1337 :
 * 'a'/'A' -> '4', 'e'/'E' -> '3', 'o'/'O' -> '0',
 * 't'/'T' -> '7', 'l'/'L' -> '1'
 *
 * Return: Un pointeur vers la chaîne modifiée
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
		{
		if (str[i] == leet[j])
			{
			str[i] = leet_replace[j];
			break;
			}
		}
	}

	return (ptr);
}
