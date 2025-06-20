#include <stdio.h>

/*Count lines on input char stream*/
int main()
{
    int c;

    int n = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n;
    printf("%d\n", n);
}
