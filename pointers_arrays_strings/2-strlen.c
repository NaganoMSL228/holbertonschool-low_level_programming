#include "main.h"

/**
 * _strlen - Retourne la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 *
 * Return: La longueur de la chaîne
 */

int _strlen(char *s)
{
int nur = 0;

while (*s != '\0')
{
nur++;
s++;
}
return (nur);
}
