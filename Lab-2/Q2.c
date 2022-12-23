// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, c;
	int L;

	// Ask user for input.
	printf("Enter three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b && a > c)
	{
		L = a;
	}
	else if (b > c)
	{
		L = b;
	}
	else
	{
		L = c;
	}

	// Display output.
	printf("%d is the largest.\n", L);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
