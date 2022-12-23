// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int i;

	// While loop without break and continue.
	printf("Print 1 to 10: Using while loop WITHOUT break and continue.\n\t");
	i = 0;
	while (i < 10)
	{
		i++;

		printf("%d, ", i);
	}

	// While loop with break and continue.
	printf("\n\nUsing while loop WITH break and continue.\n\t");
	i = 0;
	while (i < 10)
	{
		i++;

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

	// Do-while loop WITHOUT break and continue.
	printf("\nPrint 10 to 1: Using do-while loop WITHOUT break and continue.\n\t");
	i = 11;
	do
	{
		i--;

		printf("%d, ", i);
	} while (i > 1);

	// Do-while loop WITH break and continue.
	printf("\n\nUsing do-while loop WITH break and continue.\n\t");
	i = 11;
	do
	{
		i--;

		if (i == 4)
		{
			continue;
		}
		else if (i == 2)
		{
			break;
		}

		printf("%d, ", i);
	} while (i > 1);
	printf("\nA continue statements is used to skip the number 4.");
	printf("\nA break statements is used to terminate the loop at 3.\n");


	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
