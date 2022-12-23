// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int S;

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	S = 0; // Initialize the sum variable.
	for (int i = 1; i < N; i++)
	{
		if (N%i == 0)
		{
			// i is a divisor of N.
			S += i;
		}
	}

	// Display output.
	if (S == N)
	{
		// Perfect number.
		printf("The given number is a Perfect number.\n");
	}
	else
	{
		// Not a Perfect number.
		printf("The given number is NOT a Perfect number.\n");
		printf("The sum of all positive divisors of %d excluding itself is %d.\n", N, S);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
