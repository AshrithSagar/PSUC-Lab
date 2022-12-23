// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int S, n;

	// Ask user for input.
	printf("Enter a number:\n");
	scanf("%d", &N);

	S = N; // Make a copy of the original number.
	do
	{
		n = S; // Compute the generic root of S since it is lesser than 10.
		S = 0; // Initialise the generic root of n.
		while (n > 0)
		{
			S += n%10;
			n = n/10;
		}
		// S stores the value of the generic root of n.
	} while (S >= 10);

	// Display output.
	printf("The generic root of %d is %d.\n", N, S);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
