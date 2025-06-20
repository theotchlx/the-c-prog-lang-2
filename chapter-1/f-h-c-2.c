#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300
    With float accuracy */
int main()
{
    float fahr, celsius;
    int upper, step;

    fahr = 0; celsius = 0; /* lower limit of temperature table */
    #define UPPER 300 /* upper limit */
    #define STEP 20 /* step size*/

    printf("       F           C\t\t\tC           F\n");

    while (fahr <= UPPER) {
        printf("%8.0f    %8.2f\t\t%8.0f    %8.2f\n", fahr, 5.0/9.0*(fahr-32), celsius, (9.0/5.0)*celsius + 32);
        fahr = fahr + STEP;
        celsius = celsius + STEP;
    }
}

