// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 1D array length.

	int Array[s], Array_length;
	int element, element_count, removed;

	// Read array from user.
	printf("Array length: ");
	scanf("%d", &Array_length);

	printf("Array values: \n");
	for (int i = 0; i < Array_length; i++)
	{
		scanf("%d", &Array[i]);
	}

	printf("Element to delete: ");
	scanf("%d", &element);

	// Display array.
	printf("\nGiven array [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length-1; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length-1]);

	// Find the number of elements to delete.
	element_count = 0; // Initialize.
	for (int i = 0; i < Array_length; i++)
	{
		if (Array[i] == element)
		{
			element_count++;
		}
	}

	if (element_count == 0)
	{
		// Element to delete does not exist.
		printf("Error: Element to delete does not exist in the array.\n");
	}
	else
	{
		// Delete the element(s) from the array.
		removed = 0; // Initialize the current number of removed elements.

		if (Array_length <= element_count)
		{
			// All elements deleted. New_array is an empty array.
			printf("New array [Length: 0]:\n {  } \n");
		}
		else
		{
			// Note that the array would contain (Array_length-element_count) elements in the end.
			for (int i = 0; i < Array_length-element_count; i++)
			{
				if (Array[i] == element)
				{
					removed++;

					// Shift the array to the left.
					for (int j = i; j < Array_length-removed; j++)
					{
						Array[j] = Array[j+1];
					}
				}
			}

			// Display the output.
			printf("New array [Length: %d]:\n {", Array_length-element_count);
			for (int i = 0; i < Array_length-1-element_count ; i++)
			{
				printf(" %d, ", Array[i]);
			}
			printf(" %d } \n", Array[Array_length-1-element_count]);
		}
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
