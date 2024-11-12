#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes it with a specific
 * @size: The size of the array to be created
 * @c: The char to initialize the array with
 *
 * Description: This function creates an array of chars and initializes
 * each element with the specified char
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *tab;
unsigned int i;
if (size == 0)
{
return (0);
}
tab = (char *) malloc(size * sizeof(char));
if (tab == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
tab[i] = c;
}
tab[i] = '\0';
return (tab);
free(tab);
}
