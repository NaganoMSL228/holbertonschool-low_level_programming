#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	while (str[i] != '\0')
{

	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
{
	capitalize_next = 1;
}
	else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
		str[i] = str[i] - 32;
	capitalize_next = 0;
}
	else
{
	capitalize_next = 0;
}
	i++;
}

return (str);
}
