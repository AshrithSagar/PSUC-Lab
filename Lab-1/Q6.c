// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const double pi = 3.14159265;
	int r;
	float Vol, SA;
	
	// Ask user for input.
	printf("Enter radius: \n");
	scanf("%d", &r);

	Vol = (4.0 * pi * pow(r, 3)) / 3.0;
	SA = 4.0 * pi * pow(r, 2);

	// Display output.
	printf("The Volume of the sphere is %f.\n", Vol);
	printf("The Surface Area of the sphere is %f.\n", SA);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
