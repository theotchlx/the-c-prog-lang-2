#include <stdio.h>

/* count digits, white space, others */
int main()
{
	int c;           /* Current input character */
	int nwhite;      /* Counts spaces, newlines and tabs */
	int nother;      /* Counts all other characters */
	int ndigit[10];  /* Counts digits. Each array index is the digit (0-9), each value is the count of the array index digit */

	/* Initialization */
	int i;
	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	/* Input counting loop */
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	/* Print the final results */
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d: %d,", i, ndigit[i]);
	printf(" whitespace = %d, other = %d\n",
		nwhite, nother);
}
