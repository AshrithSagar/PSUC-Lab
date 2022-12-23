// Preprocessor directives.
#include <stdio.h>

const int s = 50; // 2D array size.

int CornerSum( int row_dim, int col_dim, int mat[s][s] )
{
	int sum_of_corners;
	int top_left, top_right, bottom_left, bottom_right;

	top_left = mat[0][0];
	top_right = mat[0][col_dim-1];
	bottom_left = mat[row_dim-1][0];
	bottom_right = mat[row_dim-1][col_dim-1];

	sum_of_corners = top_left + top_right + bottom_left + bottom_right;

	return sum_of_corners;
}

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int Matrix[s][s];
	int row_dimension, column_dimension;

	int corner_sum;

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

	corner_sum = CornerSum( row_dimension, column_dimension, Matrix );

	// Display the output.
	printf("\nThe sum of the elements in the four corners of the matrix is %d.\n", corner_sum);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
