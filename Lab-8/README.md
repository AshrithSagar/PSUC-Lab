# PSUC Lab - 8
Modular programming - Functions

---

## Question 4

> Write a function `Largest()` to find the maximum of a given list of numbers. Also write a main program to read N numbers and find the *largest* among them using this function.
> 

```c
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
```

---

## Question 5

> Write a function `CornerSum()` which takes as a parameter, no. of rows and no. of columns of a matrix and returns the sum of the elements in the four corners of the matrix. Write a main function to test the function.
> 

```c
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
```

---