# PSUC Lab - End Semester Examination

---

# Question 1

> Write a single C Program to:
a. Read and display an MxN matrix, mat consisting of integer numbers in main().
b. Replace every boundary elements by their reversed value and display the resultant matrix
mat in the main program. 
c. Store the non-boundary elements from “part b” in a 2D array. Write a function Replace() that
accepts this 2D array as parameter and replaces all 2-digit elements by the sum of its digits. Display the resultant matrix in the main program.
> 

```c
// Preprocessor directives.
#include <stdio.h>

const int MAX_DIMENSIONS = 100; // 2D array size.

// Function prototypes.
void Replace( int row_dim, int col_dim, int matrix[MAX_DIMENSIONS][MAX_DIMENSIONS] );

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int mat[MAX_DIMENSIONS][MAX_DIMENSIONS];
	int M, N;

	int mat_non_boundary[MAX_DIMENSIONS][MAX_DIMENSIONS];
	
	int reverse, original_number;

	/* a. Read and display an MxN matrix, mat consisting of integer numbers in main(). */
	
	// Read matrix from user.
	printf("Enter the size of Matrix: \n");
	scanf("%d %d", &M, &N);
	
	printf("\nEnter the elements: \n");
	for (int i = 0; i < M; i++) // Loop through the rows.
	{
		for (int j = 0; j < N; j++) // Loop through the columns.
		{
			scanf("%d", &mat[i][j]);
		}
	}

	// Display output.
	printf("\na. Entered elements: \n");
	for (int i = 0; i < M; i++) // Loop through the rows.
	{
		for (int j = 0; j < N; j++) // Loop through the columns.
		{
			printf(" %d \t", mat[i][j]);
		}
		printf("\n");
	}

	/* b. Replace every boundary elements by their reversed value 
	and display the resultant matrix mat in the main program. */

	for (int i = 0; i < M; i++) // Loop through the rows.
	{
		for (int j = 0; j < N; j++) // Loop through the columns.
		{
			if ((i == 0) || (j == 0) || (i == M-1) || (j == N-1))
			{
				// The element is a boundary element.
				
				// Reverse the element.
				original_number = mat[i][j];
				reverse = 0; // Initialise.
				while (original_number > 0)
				{
					reverse = 10 * reverse + original_number % 10;
					original_number = original_number / 10;
				}
				mat[i][j] = reverse; // Update the value in the matrix.
			}
			else
			{
				// The element is NOT a boundary element.

				// Store the element to the 2D array: mat_non_boundary.
				mat_non_boundary[i-1][j-1] = mat[i][j];
			}
		}
	}

	// Display output.
	printf("\nb. After Boundary Elements Reverse: \n");
	for (int i = 0; i < M; i++) // Loop through the rows.
	{
		for (int j = 0; j < N; j++) // Loop through the columns.
		{
			printf(" %d \t", mat[i][j]);
		}
		printf("\n");
	}

	/* c. Store the non-boundary elements from “part b” in a 2D array. Write a function Replace() 
		that accepts this 2D array as parameter and replaces all 2-digit elements by the sum of 
		its digits. Display the resultant matrix in the main program. */
	
	Replace( M-2, N-2, mat_non_boundary );
		// Note that mat_non_boundary is of dimensions (M-2)x(N-2);
	
	// Display output.
	printf("\nc. After replacement: \n");
	for (int i = 0; i < M-2; i++) // Loop through the rows.
	{
		for (int j = 0; j < N-2; j++) // Loop through the columns.
		{
			printf(" %d \t", mat_non_boundary[i][j]);
		}
		printf("\n");
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli and my registration number is 200902016.\n");

} // End.

void Replace( int row_dim, int col_dim, int matrix[MAX_DIMENSIONS][MAX_DIMENSIONS] )
{
	int sum_of_digits, original_number;

	for (int i = 0; i < row_dim; i++) // Loop through the rows.
	{
		for (int j = 0; j < col_dim; j++) // Loop through the columns.
		{
			// Check for 2-digit elements.
			if ((matrix[i][j] > 9) && (matrix[i][j] < 100))
			{
				// Find sum of digits of the element.
				original_number = matrix[i][j];
				sum_of_digits = 0; // Initialise.
				while (original_number > 0)
				{
					sum_of_digits += original_number % 10;
					original_number = original_number / 10;
				}
				matrix[i][j] = sum_of_digits; // Update the value in the matrix.
			}
		}
	}
}
```

---