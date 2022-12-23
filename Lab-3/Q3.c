// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int S, n, d;

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	S = 0;
	n = N;
	while (n > 0)
	{
		d = n%10; // Last digit.
		S = S + d*d*d;
		n = n/10;
	}

	// Display output.
	if (S == N)
	{
		// Armstrong number.
		printf("The given number is an Armstrong number.\n");
	}
	else
	{
		// Not an Armstrong number.
		printf("The given number is NOT an Armstrong number.\n");
		printf("The sum of the cubes of all the digits = %d.\n", S);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
