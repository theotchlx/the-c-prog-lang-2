#include <stdio.h>

int main()
{
    int c; /* Current character */

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            putchar(c);
            while ((c = getchar()) == '\n');
            putchar(c);
        }
        else if (c == '\t')
        {
            putchar(c);
            while ((c = getchar()) == '\t');
            putchar(c);
        }
        else if (c == ' ')
        {
            putchar(c);
            while ((c = getchar()) == ' ');
            putchar(c);
        }
        else
            putchar(c);
    }
}
