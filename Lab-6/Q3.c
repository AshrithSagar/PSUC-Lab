// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 50; // 2D array size.

	int Matrix_A[s][s], Matrix_B[s][s];
	int row_dimension_A, column_dimension_A;
	int row_dimension_B, column_dimension_B;

	int Product_AB[s][s];

	// Read matrix from user.
	printf("Matrix dimensions of A: \n");
	scanf("%d %d", &row_dimension_A, &column_dimension_A);

	printf("Matrix values of A [row-wise]: \n");
	for (int i = 0; i < row_dimension_A; i++)
	{
		for (int j = 0; j < column_dimension_A; j++)
		{
			scanf("%d", &Matrix_A[i][j]);
		}
	}

	printf("\nMatrix dimensions of B: \n");
	scanf("%d %d", &row_dimension_B, &column_dimension_B);

	printf("Matrix values of B [row-wise]: \n");
	for (int i = 0; i < row_dimension_B; i++)
	{
		for (int j = 0; j < column_dimension_B; j++)
		{
			scanf("%d", &Matrix_B[i][j]);
		}
	}

	// Display matrix.
	printf("\nMatrix A [Dimensions: %d x %d]:\n", row_dimension_A, column_dimension_A);
	for (int i = 0; i < row_dimension_A; i++)
	{
		for (int j = 0; j < column_dimension_A; j++)
		{
			printf(" %d \t", Matrix_A[i][j]);
		}
		printf("\n");
	}

	printf("Matrix B [Dimensions: %d x %d]:\n", row_dimension_B, column_dimension_B);
	for (int i = 0; i < row_dimension_B; i++)
	{
		for (int j = 0; j < column_dimension_B; j++)
		{
			printf(" %d \t", Matrix_B[i][j]);
		}
		printf("\n");
	}

	// Check matrix dimensions for multiplication.
	if (column_dimension_A != row_dimension_B)
	{
		printf("The given matrices are not compatible for matrix multiplication.\n");
	}
	else
	{
		for (int i = 0; i < row_dimension_A; i++)
		{
			for (int j = 0; j < column_dimension_B; j++)
			{
				for (int k = 0; k < row_dimension_B; k++)
				// Note that row_dimension_A is equal to column_dimension_A.
				{
					Product_AB[i][j] += Matrix_A[i][k] * Matrix_B[k][j];
				}
			}
		}

		// Display the output.
		printf("Product AB [Dimensions: %d x %d]:\n", row_dimension_A, column_dimension_B);
		for (int i = 0; i < row_dimension_A; i++)
		{
			for (int j = 0; j < column_dimension_B; j++)
			{
				printf(" %d \t", Product_AB[i][j]);
			}
			printf("\n");
		}
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
