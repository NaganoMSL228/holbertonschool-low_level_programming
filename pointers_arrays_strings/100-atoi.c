#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Description: This function converts a string to an integer, handling:
 * - Positive and negative numbers
 * - Leading non-numeric characters
 * - Multiple signs before the number
 * - Overflow conditions for both INT_MAX and INT_MIN
 *
 * The function stops at the first non-digit after number conversion starts.
 * It doesn't use long, doesn't declare new array variables, and avoids
 * hard-coding special values except for overflow checks.
 *
 * Return: The converted integer value, or 0 if no valid conversion
 */
int _atoi(char *s)
{
unsigned int result = 0;
int sign = 1;
int started = 0;
int digit;

while (*s)
{
if (*s == '-' && !started)
{
sign = -sign;
}
else if (*s >= '0' && *s <= '9')
{
started = 1;
digit = *s - '0';

if (sign == 1 && (result > 214748364 || (result == 214748364 && digit > 7)))
{
return 2147483647;
}
if (sign == -1 && (result > 214748364 || (result == 214748364 && digit > 8)))
{
return -2147483648;
}

result = result * 10 + digit;
}
else if (started)
{
break;
}
s++;
}

return result * sign;
}
