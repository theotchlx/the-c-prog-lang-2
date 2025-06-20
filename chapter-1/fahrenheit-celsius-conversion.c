#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300
    With float accuracy */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size*/

    printf("       F           C\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5.0/9.0 * (fahr-32.0);
        printf("%8.0f    %8.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

