#include <stdio.h>

/* Copy input to output - version 1 */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}
