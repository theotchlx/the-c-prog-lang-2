#include <stdio.h>

/* Replaces blanks by their C representation */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            printf("\\n");
        else if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\b");
        else if (c == '\\')
            printf("\\");
        else
            putchar(c);
    }
}
