#include <stdio.h>

/* Counts words, that is character sequences surrounded by blanks */
int main()
{
    int c;
    int wn = 0; /* word counter */

    while ((c = getchar()) != EOF)
    {
        while ((c == '\n' || c == '\t' || c == ' ') && c != EOF)
            c = getchar();
        while ((c != '\n' || c != '\t' || c != ' ') && c != EOF)
            c = getchar();
        ++wn;
    }
    printf("%d", wn);
    /* This program does not work. It always returns 1, somehow... */
}
