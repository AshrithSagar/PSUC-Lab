// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b;

	// Ask user for input.
	printf("Enter two number: \n");
	scanf("%d %d", &a, &b);

	// Display.
	printf("Before swap: %d, %d.\n", a, b);

	// Swap.
	a = a + b;
	b = a - b;
	a = a - b;

	// Display output.
	printf("After swap: %d, %d.\n", a, b);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
