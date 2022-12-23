// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 2D array size.

	int Matrix[s][s];
	int row_dimension, column_dimension;

	int element, count;

	// Read matrix from user.
	printf("Matrix dimensions: \n");
	scanf("%d %d", &row_dimension, &column_dimension);

	printf("Matrix values [row-wise]: \n");
	for (int i = 0; i < row_dimension; i++)
	{
		for (int j = 0; j < column_dimension; j++)
		{
			scanf("%d", &Matrix[i][j]);
		}
	}

	printf("\nElement to search: ");
	scanf("%d", &element);

	// Display matrix.
	printf("\nMatrix [Dimensions: %d x %d]: \n", row_dimension, column_dimension);
	for (int i = 0; i < row_dimension; i++)
	{
		for (int j = 0; j < column_dimension; j++)
		{
			printf(" %d \t", Matrix[i][j]);
		}
		printf("\n");
	}

	count = 0; // Initialize count variable.

	for (int i = 0; i < row_dimension; i++)
	{
		for (int j = 0; j < column_dimension; j++)
		{
			if (Matrix[i][j] == element)
			{
				count++;
			}
		}
	}

	// Display the output.
	if (count == 0)
	{
		printf("Element %d not found in the matrix.\n", element);
	}
	else
	{
		printf("Element: %d\t Occurence: %d\n", element, count);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
