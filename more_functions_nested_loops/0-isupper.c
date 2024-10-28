#include "main.h"
#include <stdio.h>

int _isupper(int c);

int main(void)
{
char test_char = 'G';

if (_isupper(test_char))
printf("%c is uppercase\n", test_char);
else
printf("%c is not uppercase\n", test_char);

return 0;
}
