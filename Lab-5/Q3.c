// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 1D array length.

	int Array[s], Array_length;

	char order;
	int t, a;

	// Ask user for input.
	printf("Sort in ascending [a] OR descending [d] order: ");
	scanf("%c", &order);

	printf("Array length: ");
	scanf("%d", &Array_length);

	printf("Array values: \n");
	for (int i = 0; i < Array_length; i++)
	{
		scanf("%d", &Array[i]);
	}

	// Display array.
	printf("Given array [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length-1; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length-1]);

	switch(order)
	{
		case 'a':
		{
			// Ascending order using bubble sort.
			for (int i = 0; i < Array_length-1; i++) // Repeat (Array_length-1) times.
			{
				for (int j = 0; j < Array_length-1; j++) // Loop through the array.
				// Note that j+1 can only go till (Array_length-1) [included].
				{
					if (Array[j] > Array[j+1])
					{
						// Swap.
				        t = Array[j];
				        Array[j] = Array[j+1];
				        Array[j+1] = t;
					}
				}
			}

			// Display the output.
			printf("Sorted array in ascending order [Length: %d]:\n {", Array_length);
			for (int i = 0; i < Array_length-1; i++)
			{
				printf(" %d, ", Array[i]);
			}
			printf(" %d } \n", Array[Array_length-1]);

			break;
		}
		case 'd':
		{
			// Descending order using selection sort.
			for (int i = 0; i < Array_length-1; i++) // Repeat (Array_length-1) times.
			{
				a = i; // Initialize.

				for (int j = i+1; j < Array_length; j++) // Loop through the array.
				{
					if (Array[j] > Array[a])
					{
						a = j;
					}
				}

				// Swap.
		        t = Array[i];
		        Array[i] = Array[a];
		        Array[a] = t;
			}

			// Display the output.
			printf("Sorted array in descending order [Length: %d]:\n {", Array_length);
			for (int i = 0; i < Array_length-1 ; i++)
			{
				printf(" %d, ", Array[i]);
			}
			printf(" %d } \n", Array[Array_length-1]);

			break;
		}
		default:
		{
			printf("Error: Enter either 'a' or 'd'.\n");

			break;
		}
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
