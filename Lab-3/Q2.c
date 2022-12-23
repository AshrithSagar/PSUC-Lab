// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b;
	int n, i;
	int p; // Flag variable.

	// Ask user for input.
	printf("Enter the lower limit and upper limit: \n");
	scanf("%d %d", &a, &b);

	// Display.
	printf("Primes between %d and %d: \n", a, b);

	n = a;
	while (n <= b)
	{
		// Check for prime.
		p = 1; // Initialize the flag variable.
		i = 2;
		while (i <= n/2)
		{
			if (n%i == 0)
			{
				p = 0; // Not a prime.
				break;
			}
			i++;
		}

		if (p == 1)
		{
			// Prime.
			printf("%d, ", n);
		}

		n++;
	}

	printf("\n");

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
