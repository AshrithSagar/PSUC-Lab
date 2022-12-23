// Write a C program to display the size of the data type int, char,
// float, double, long int and long double using sizeof() operator.

#include <stdio.h> // Preprocessor directive.

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int i;
	char c;
	float f;
	double d;
	long int li;
	long double ld;
	int S_i, S_c, S_f, S_d, S_li, S_ld;

	S_i = sizeof(i);
	S_c = sizeof(c);
	S_f = sizeof(f);
	S_d = sizeof(d);
	S_li = sizeof(li);
	S_ld = sizeof(ld);

	// Display output.
	printf("The size of data type int is %d.\n", S_i);
	printf("The size of data type char is %d.\n", S_c);
	printf("The size of data type float is %d.\n", S_f);
	printf("The size of data type double is %d.\n", S_d);
	printf("The size of data type long int is %d.\n", S_li);
	printf("The size of data type long double is %d.\n", S_ld);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
