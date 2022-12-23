// Preprocessor directives.
#include <stdio.h>
#include <string.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 100;

	char string[s];

	// Ask user for input.
	printf("Enter a string: \n");
	scanf("%[^\n]s", string);
	// gets(string);

	for (int i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'A' && string[i] <= 'Z') // Uppercase.
		{
			string[i] += ('a' - 'A'); // Add the deficit.
		}
		else if (string[i] >= 'a' && string[i] <= 'z') // Lowercase.
		{
			string[i] += ('A' - 'a'); // Subtract the excess.
		}
	}

	// Display output.
	printf("\nModified string: \n");
	puts(string);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
