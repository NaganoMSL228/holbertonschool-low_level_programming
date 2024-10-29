#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères
 * @s: Pointeur vers la chaîne à inverser
 */

void rev_string(char *s)
{
int jsp = 0;
int i;
char temp;

while (s[jsp] != '\0')
{
jsp++;
}

for (i = 0; i < jsp / 2; i++)
{
temp = s[i];
s[i] = s[jsp - 1 - i];
s[jsp - 1 - i] = temp;
}
}
