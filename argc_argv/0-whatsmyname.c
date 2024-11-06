#include <string.h>
#include <stdio.h>

/**
 * main - Prints the name of the program followed by its arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("Argument %d: %s\n", i, argv[i]);
}
return 0;
}
