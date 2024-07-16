# Lab-5

## Questions

### Question-1

```c
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
```

### Question-2

```c
// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 1D array length.

	int Array[s], Array_length;
	int f; // Flag variable.

	// Ask user for input.
	printf("Array length: ");
	scanf("%d", &Array_length);

	printf("Array values: \n");
	for (int i = 0; i < Array_length ; i++)
	{
		scanf("%d", &Array[i]);
	}

	// Display array.
	printf("Array [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length-1 ; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length-1]);

	// Display output.
	printf("Primes in the array:\n {");
	for (int i = 0; i < Array_length ; i++)
	{
		f = 1; // Initialize the flag variable.

		// Check for prime.
		for (int j = 2; j <= sqrt(Array[i]); j++)
		{
			if (Array[i]%j == 0)
			{
				f = 0; // Not a prime.
				break;
			}
		}

		// Prime.
		if ((f == 1) && (Array[i] != 1)) // 1 won't be considered as a prime here.
		{
			printf(" %d, ", Array[i]);
		}
	}
	printf("}\n");

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Question-3

```c
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
```

### Question-4

```c
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
```

### Question-5

```c
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
```
