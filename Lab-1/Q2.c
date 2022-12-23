// Write a C program to find the sum, difference, product and quotient of 2 numbers.

#include <stdio.h> // Preprocessor directive.

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, sum, diff, prod;
	float quot;

	// Ask user for input.
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);

	// Sum.
	sum = a + b;

	// Difference.
	if (a > b)
	{
		diff = a - b;
	}
	else
	{
		diff = b - a;
	}

	// Product.
	prod = a * b;

	// Quotient.
	quot = (float) a / b;

	// Display output.
	printf("The sum of %d and %d is %d.\n", a, b, sum);
	printf("The difference of %d and %d is %d.\n", a, b, diff);
	printf("The product of %d and %d is %d.\n", a, b, prod);
	printf("The quotient of %d and %d is %f.\n", a, b, quot);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
