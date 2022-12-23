// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, c, d;
	int A_1, A_2, A_3, A_4;
	
	// Ask user for input.
	printf("Enter a, b, c, d: \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	A_1 = (a + b) * c / d;
	A_2 = ((a + b) * c) / d;
	A_3 = a + (b * c) / d;
	A_4 = (a + b) * (c / d);

	// Display output.
	printf("(a+b)*c/d = %d\n", A_1);
	printf("((a+b)*c)/d = %d\n", A_2);
	printf("a+(b*c)/d = %d\n", A_3);
	printf("(a+b)*(c/d) = %d\n", A_4);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
