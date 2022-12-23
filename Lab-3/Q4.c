// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n;
	int p, cp; // Prime and composite counters.
	int f; // Flag variable.

	// Initialize the prime and composite counter variables.
	p = 0;
	cp = 0;

	// Ask user for input.
	printf("Input numbers (Enter -1 to stop): \n");

	do
	{
		scanf("%d", &n);

		// Check for prime.
		f = 1; // Initialize the flag variable.
		for (int i = 2; i <= n/2; i++)
		{
			if (n%i == 0)
			{
				f = 0; // Not a prime.
				break;
			}
		}

		// Update counter variables.
		if ((n != -1) && (n != 1))
		{
			if (f == 1)
			{
				// Prime.
				p++;
			}
			else
			{
				// Composite.
				cp++;
			}
			// Also can be done with:
			// (f == 1)? p++ : cp++;
		}
	} while (n != -1);

	// Display output.
	printf("Primes: %d\tComposites: %d\n", p, cp);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
