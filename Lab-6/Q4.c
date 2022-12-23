// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 2D array size.

	int Matrix[s][s];
	int row_dimension, column_dimension;

	int t;

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

	// Check for square matrix.
	if (row_dimension != column_dimension)
	{
		printf("Given matrix is not a square matrix.\n");
	}
	else
	{
		for (int i = 0; i < row_dimension; i++) // Loop through each row.
		{
			// Swap.
			t = Matrix[i][i];
			Matrix[i][i] = Matrix[i][column_dimension-1-i];
			Matrix[i][column_dimension-1-i] = t;
		}

		// Display the output.
		printf("New matrix [Dimensions: %d x %d]: \n", row_dimension, column_dimension);
		for (int i = 0; i < row_dimension; i++)
		{
			for (int j = 0; j < column_dimension; j++)
			{
				printf(" %d \t", Matrix[i][j]);
			}
			printf("\n");
		}
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
