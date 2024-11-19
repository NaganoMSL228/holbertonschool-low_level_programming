#include <stdarg.h>

/**
 * sum_them_all - Calcule la somme de tous les paramètres
 * @n: Nombre de paramètres
 *
 * Return: Somme de tous les paramètres, ou 0 si n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned int i;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
sum += va_arg(args, int);

va_end(args);

return (sum);
}
