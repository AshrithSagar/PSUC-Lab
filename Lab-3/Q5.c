// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int S, d, n, f;

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	n = N; // Make a copy of the original number.
	S = 0; // Initialize the sum variable.
	while (n > 0)
	{
		d = n%10; // The last digit of n.

		// Factorial.
		f = 1; // Initialize the factorial variable.
		for (int i = 1; i <= d; i++)
		{
			f *= i;
		}
		S += f;

		n = n/10;
	}

	// Display output.
	if (S == N)
	{
		// Strong number.
		printf("The given number is a Strong number.\n");
	}
	else
	{
		// Not a Strong number.
		printf("The given number is NOT a Strong number.\n");
		printf("The sum of the factorials of all the digits = %d.\n", S);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
