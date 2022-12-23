// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 2D array size.

	int Matrix[s][s];
	int row_dimension, column_dimension;

	int symmetric; // Flag variable.

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

	// Check for symmetric.
	if (row_dimension != column_dimension)
	{
		printf("Given matrix is not a square matrix.\n");
	}
	else
	{
		symmetric = 1; // Initialize flag variable.
		for (int i = 0; i < row_dimension; i++)
		{
			for (int j = 0; j < column_dimension; j++)
			{
				if (Matrix[i][j] != Matrix[j][i])
				{
					symmetric = 0;
					break;
				}
			}
		}

		// Display output.
		if (symmetric == 1)
		{
			printf("The given matrix is symmetric.\n");
		}
		else
		{
			printf("The given matrix is NOT symmetric.\n");
		}
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
