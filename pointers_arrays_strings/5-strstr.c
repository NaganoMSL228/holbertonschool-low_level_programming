#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (*needle == '\0')

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n != '\0' && *h == *n)
{
h++;
}

if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
