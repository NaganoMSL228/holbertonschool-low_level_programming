#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string using dynamic memory allocation
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or if
 *         memory allocation fails
 */
char *_strdup(char *str)
{
char *duplicate;
size_t len;

if (str == NULL)
return (NULL);

len = strlen(str);
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);

strcpy(duplicate, str);
return (duplicate);
}