# Lab-6

## Questions

### Question-1

```c
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
```

### Question-2

```c
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
```

### Question-3

```c
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
```

### Question-4

```c
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
```

### Question-5

```c
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
```

### Question-6

```c
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
```