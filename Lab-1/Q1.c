// Write a C program to add two integers a and b read through the keyboard.
// Display the result using third variable sum.

#include <stdio.h> // Preprocessor directive.

int main() // Start main.
{ // Start.

	int a, b, sum; // Variable initialisations.

	// Ask user for input.
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);

	sum = a + b; // Sum of values stored in variables a and b.

	// Display output.
	printf("The sum of %d and %d is %d.\n", a, b, sum);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
