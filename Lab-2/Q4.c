// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variables initialization.
	float a, b, c; // Coefficients of the quadratic equation.
	float D, r, i; // Discriminant, real part, imaginary part.
	int d; // Sign of the discriminant.

	// Input.
	printf("Enter {a, b, c} in the quadratic equation ax^2+bx+c=0:\n");
	scanf("%f %f %f", &a, &b, &c);

	// Determinant.
	D = b*b - 4*a*c;
	d = (D > 0) - (D < 0); // Sign of D.
	printf("Discriminant = %f\n", D);

	r = -b/(2*a);
	i = sqrt(d*D)/(2*a); // (d*D) is always positive.

	switch (d)
	{
		case 1: // Discriminant is positive.
		{
			printf("The roots are real and unequal.\n");
			printf("root_1 = %f,\troot_2 = %f\n", r-i, r+i);
			break;
		}
		case 0: // Discriminant is equal to zero.
		{
			printf("The roots are real and equal.\n");
			printf("root_1 = root_2 = %f\n", r);
			break;
		}
		case -1: // Discriminant is negative.
		{
			printf("The roots are imaginary.\n");
			printf("root_1 = (%f) - i(%f)\nroot_2 = (%f) + i(%f)\n", r, i, r, i);
			break;
		}
		default:
		{
			printf("Error.\n");
			return -1;
			break;
		}
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
