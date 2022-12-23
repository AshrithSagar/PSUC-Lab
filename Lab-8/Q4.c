// Preprocessor directives.
#include <stdio.h>

int Largest( int * , int );

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50;

	int Array[s], Array_length;

	// Ask user for input.
	printf("Array length: ");
	scanf("%d", &Array_length);

	printf("Array values: \n");
	for (int i = 0; i < Array_length; i++)
	{
		scanf("%d", &Array[i]);
	}

	// Display array.
	printf("\nArray [Length: %d]:\n {", Array_length);
	for (int i = 0; i < Array_length-1 ; i++)
	{
		printf(" %d, ", Array[i]);
	}
	printf(" %d } \n", Array[Array_length-1]);

	// Display output.
	printf("\nThe largest among the given numbers is %d.\n", Largest(Array, Array_length));
		// Passes the address of the 0th element of the Array to the function Largest().

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.

int Largest( int *arr , int arr_len )
{
	int index_of_largest = 0;

	for (int i = 0; i < arr_len; i++)
	{
		if (*(arr+index_of_largest) <= *(arr+i))
		{
			index_of_largest = i;
		}
	}
	return *(arr+index_of_largest);
}
