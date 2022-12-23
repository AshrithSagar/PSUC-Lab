// Write a C program to print the ASCII value of a character.

#include <stdio.h> // Preprocessor directive.

int main() // Start main.
{ // Start.

	// Variable initialisations.
	char c;
	int ascii;

	// Ask user for input.
	printf("Enter a character: \n");
	scanf("%c", &c);

	ascii = (int) c;

	// Display output.
	printf("The ASCII value of %c is %d.\n", c, ascii);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
