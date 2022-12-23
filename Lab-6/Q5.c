// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 2D array size.

	int Matrix[s][s];
	int row_dimension, column_dimension;

	int row_1, row_2, column_1, column_2;
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
	printf("\nOriginal matrix [Dimensions: %d x %d]: \n", row_dimension, column_dimension);
	for (int i = 0; i < row_dimension; i++)
	{
		for (int j = 0; j < column_dimension; j++)
		{
			printf(" %d \t", Matrix[i][j]);
		}
		printf("\n");
	}

	printf("\nRows to interchange: ");
	scanf("%d %d", &row_1, &row_2);

	if ((row_1 > row_dimension) | (row_2 > row_dimension))
	{
		printf("Error: Entered row(s) out of matrix dimensions.\n");
	}
	else
	{
		// Swap.
		for (int j = 0; j < column_dimension; j++)
		{
			t = Matrix[row_1-1][j];
			Matrix[row_1-1][j] = Matrix[row_2-1][j];
			Matrix[row_2-1][j] = t;
		}

		// Display the output.
		printf("New matrix with interchanged rows [Dimensions: %d x %d]: \n", row_dimension, column_dimension);
		for (int i = 0; i < row_dimension; i++)
		{
			for (int j = 0; j < column_dimension; j++)
			{
				printf(" %d \t", Matrix[i][j]);
			}
			printf("\n");
		}
	}

	printf("\nColumns to interchange: ");
	scanf("%d %d", &column_1, &column_2);

	if ((column_1 > column_dimension) | (column_2 > column_dimension))
	{
		printf("Error: Entered column(s) out of matrix dimensions.\n");
	}
	else
	{
		// Swap.
		for (int i = 0; i < row_dimension; i++)
		{
			t = Matrix[i][column_1-1];
			Matrix[i][column_1-1] = Matrix[i][column_2-1];
			Matrix[i][column_2-1] = t;
		}

		// Display the output.
		printf("New matrix with interchanged columns [Dimensions: %d x %d]: \n", row_dimension, column_dimension);
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
