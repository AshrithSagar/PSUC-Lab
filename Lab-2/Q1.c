// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n;

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &n);

	switch (n%2)
	{
		case 0:
			// Even.
			printf("The given number is even.\n");
			break;
		case 1:
			// Odd.
			printf("The given number is odd.\n");
			break;
		default:
			// Default case.
			printf("Error.\n");
			break;
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
