#include <stdio.h>

/* Count blank characters on input */
int main()
{
    int c;

    int nt = 0; /* Tab counter */
    int ns = 0; /* Space counter */
    int nl = 0; /* Newline counter */

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++ns;
        if (c == '\n')
            ++nl;
    }
    printf("tabs: %d\nspaces: %d\nnewlines:%d\n", nt, ns, nl);
}
