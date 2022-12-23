// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 1D array length.

	int Array[s], Array_length;
	int element, position;

	// Read array from user.
	printf("Array length: ");
	scanf("%d", &Array_length);

	printf("Array values: \n");
	for (int i = 0; i < Array_length ; i++)
	{
		scanf("%d", &Array[i]);
	}

	printf("Element: ");
	scanf("%d", &element);

	printf("Position: ");
	scanf("%d", &position);

	// Display array.
	printf("\nGiven array [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length-1 ; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length-1]);

	// Shift the array to the right.
	for (int i = Array_length; i >= position ; i--)
	{
		Array[i] = Array[i-1];
	}

	// Insert element at position in the array.
	Array[position-1] = element;

	// Display the output.
	printf("New array [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length ; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length]);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
