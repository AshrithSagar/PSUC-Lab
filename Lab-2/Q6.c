// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, c;
	int s;

	// Ask user for input.
	printf("Enter three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);

	s = (a < b) ? a : b; // Minimum of a and b;
	s = (s < c) ? s : c; // Minimum of the previous smallest and c;

	// Also can be done by a single line of code.
	// s = (a < b)? ((a < c)? a : c) : ((b < c)? b : c) ;

	// Display output.
	printf("%d is the smallest.\n", s);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
