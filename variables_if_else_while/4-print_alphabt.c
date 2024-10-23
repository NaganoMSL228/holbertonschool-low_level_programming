#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter == 'q' || letter == 'e') // Sauter 'q' et 'e'
            continue;
        putchar(letter); // Affiche la lettre
    }
    putchar('\n'); // Nouvelle ligne à la fin

return (0);
}
