#include <stdio.h>

int main()
{
    long n;
    for (n = 0; getchar() != EOF; ++n);
    printf("%ld\n", n);
}
