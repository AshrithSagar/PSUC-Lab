// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int R, n;
	int p; // Flag variable.

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	n = N;
	R = 0;
	while (n > 0)
	{
		R = 10*R + n%10;
		n = n/10;
	}

	// Check for palindrome.
	if (N == R)
	{
		// Palindrome.
		printf("The given number is a palindrome.\n");
	}
	else
	{
		// Not a palindrome.
		printf("The given number is NOT a palindrome.\n");
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
