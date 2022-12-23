// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	float P, N, R;
	float SI, CI;
	
	// Ask user for input.
	printf("Enter P (in INR or USD), N (in years), R (in percentage per annum): \n");
	scanf("%f %f %f", &P, &N, &R);

	// Simple interest.
	SI = P*N*R / 100.0;

	// Compound interest.
	CI = P * pow( (1+R/100.0), N ) - P;

	// Display output.
	printf("The Simple interest is %f.\n", SI);
	printf("The Compound interest is %f.\n", CI);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
