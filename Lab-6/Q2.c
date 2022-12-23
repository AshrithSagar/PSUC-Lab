// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 2D array size.

	int Matrix[s][s];
	int row_dimension, column_dimension;

	int trace, sum_of_squares_of_elements;
	float norm;

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
		trace = sum_of_squares_of_elements = 0; // Initialize.

		for (int i = 0; i < row_dimension; i++)
		{
			for (int j = 0; j < column_dimension; j++)
			{
				// Trace.
				if (i == j) // Principal diagonal elements.
				{
					trace += Matrix[i][j];
				}

				// Norm.
				sum_of_squares_of_elements += Matrix[i][j] * Matrix[i][j];
			}
		}

		// Norm.
		norm = sqrt(sum_of_squares_of_elements);

		// Display output.
		printf("Trace: %d\t Norm: %f\n", trace, norm);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
