// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n;
	long double x, sin_x;
	int f;
	long double t;

	// Ask user for input.
	printf("Enter x (in radians):\n");
	scanf("%LF", &x);
	printf("Enter number of terms to compute up to:\n");
	scanf("%d", &n);

	// Sin(x) series.
	sin_x = 0; // Initialize the sin variable.
	for (int i = 1; i <= (2*n-1); i += 2)
	{
		// n terms in the series implies that the
		// maximum power of x in the series be (2n-1).

		if (i == 1)
		{
			// Factorial.
			f = 1; // Initialize the factorial variable.

			t = (long double) x;
		}
		else
		{
			// Factorial.
			f *= i*(i-1);

			t *= (long double) -x*x;
		}

		sin_x += (long double) t / f;

		// Also can do this instead with the pow() function.
		// sin_x += (long double) pow(-1,i/2) * (long double) pow(x,i) / f;
	}

	// Display output.
	printf("\nsin(%LF rad) = %LF\n", x, sin_x);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
