// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int i;

	// For loop WITHOUT break and continue.
	printf("Print 1 to 10: Using for loop WITHOUT break and continue.\n\t");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d, ", i);
	}

	// For loop WITH break and continue.
	printf("\n\nUsing for loop WITH break and continue.\n\t");
	for (int i = 1; i <= 10; i++)
	{
		if (i == 4)
		{
			continue;
		}
		else if (i == 9)
		{
			break;
		}
		printf("%d, ", i);
	}
	printf("\nA continue statements is used to skip the number 4.");
	printf("\nA break statements is used to terminate the loop at 8.\n");

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
