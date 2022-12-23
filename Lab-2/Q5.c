// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variables initialization.
	int x;
	int Y;

	// Input.
	printf("Enter x:\n");
	scanf("%d", &x);

	if (x > 0)
	{
		Y = 1;
	}
	else if (x == 0)
	{
		Y = 0;
	}
	else if (x < 0)
	{
		Y = -1;
	}

	// Display output.
	printf("Y = %d.\n", Y);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
