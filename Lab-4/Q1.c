// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n, k;

	// Ask user for input.
	printf("Enter the number of multiplication tables to generate: \n");
	scanf("%d", &n);
	printf("Enter the number of terms to generate upto: \n");
	scanf("%d", &k);

	// Display output.
	printf("\nThe multiplication tables from 1 to %d upto %d terms:\n", n, k);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			printf("%d\t", i*j);
		}
		printf("\n");
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
