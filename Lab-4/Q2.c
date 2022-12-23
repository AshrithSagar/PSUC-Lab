// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int i, j, k;

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	// Display output.
	printf("\nFloyd's triangle for N=%d:\n", N);
	k = 1;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (j <= i)
			{
				printf("%d\t", k++); // Print k, then increment k.
			}
		}
		printf("\n");
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
