// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 1D array length.

	int Array[s], Array_length;
	int S, L;

	// Read array from user.
	printf("Array length: ");
	scanf("%d", &Array_length);

	printf("Array values: \n");
	for (int i = 0; i < Array_length ; i++)
	{
		scanf("%d", &Array[i]);
	}

	S = L = *Array; // First element in Arr.
	for (int i = 1; i < Array_length; i++) // Start from the second element.
	{
		if (S > Array[i])
		{
			// Current smallest.
			S = Array[i];
		}

		if (L < Array[i])
		{
			// Current largest.
			L = Array[i];
		}
	}

	// Display output.
	printf("\nArray [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length-1 ; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length-1]);

	printf("Smallest: %d\t Largest: %d\n", S, L);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
