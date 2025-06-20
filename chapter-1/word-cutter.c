#include <stdio.h>

/* Cut a line into one word per line. from input */
int main()
{
    int c, state = 1;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            putchar('\n');
            while (c == '\n' || c == '\t' || c == ' ')
                c = getchar();
            putchar(c);
        }
        else
            putchar(c);
    }
}
