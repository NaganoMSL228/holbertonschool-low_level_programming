#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
char *program_name = argv[0];


char *last_slash = strrchr(program_name, '/');

if (last_slash != NULL) {

printf("%s\n", last_slash + 1);
} else
{

printf("%s\n", program_name);
}

return 0;
}
