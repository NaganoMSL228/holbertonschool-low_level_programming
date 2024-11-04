#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int bref = 0;
int jenpeutplus;
char *a;

while (*s)
{
jenpeutplus = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
jenpeutplus = 1;
}
}
if (jenpeutplus)
{
bref++;
s++;
}
else
{
return (berf);
}
}

return (bref);
}
