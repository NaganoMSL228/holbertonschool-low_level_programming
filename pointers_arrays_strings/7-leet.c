#include "main.h"

/**
 * leet - Encode une chaîne de caractères en 1337 (leet speak)
 * @str: La chaîne de caractères à encoder
 *
 * Description:
 * Cette fonction prend une chaîne de caractères en entrée et la modifie
 * en remplaçant certaines lettres par leurs équivalents en 1337 :
 * - 'a' et 'A' sont remplacés par '4'
 * - 'e' et 'E' sont remplacés par '3'
 * - 'o' et 'O' sont remplacés par '0'
 * - 't' et 'T' sont remplacés par '7'
 * - 'l' et 'L' sont remplacés par '1'
 *
 * La fonction utilise deux boucles :
 * - Une boucle externe pour parcourir chaque caractère de la chaîne
 * - Une boucle interne pour vérifier si le caractère doit être remplacé
 *
 * La fonction ne modifie que les caractères spécifiés et laisse les autres inchangés.
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
