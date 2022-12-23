// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 1D array length.

	int Array[s], Array_length;
	int f; // Flag variable.

	// Ask user for input.
	printf("Array length: ");
	scanf("%d", &Array_length);

	printf("Array values: \n");
	for (int i = 0; i < Array_length ; i++)
	{
		scanf("%d", &Array[i]);
	}

	// Display array.
	printf("Array [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length-1 ; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length-1]);

	// Display output.
	printf("Primes in the array:\n {");
	for (int i = 0; i < Array_length ; i++)
	{
		f = 1; // Initialize the flag variable.

		// Check for prime.
		for (int j = 2; j <= sqrt(Array[i]); j++)
		{
			if (Array[i]%j == 0)
			{
				f = 0; // Not a prime.
				break;
			}
		}

		// Prime.
		if ((f == 1) && (Array[i] != 1)) // 1 won't be considered as a prime here.
		{
			printf(" %d, ", Array[i]);
		}
	}
	printf("}\n");

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
