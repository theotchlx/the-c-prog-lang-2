#include <stdio.h>

/*Count lines on input char stream*/
int main()
{
    int c;

    int n = 0; int nc = 0;
    for (nc = 0; (c = getchar()) != EOF; ++nc)
        if (c == '\n')
            ++n;
    printf("lines: %d\ncharacters: %d\n", n, nc);
}
