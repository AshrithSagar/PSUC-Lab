// Preprocessor directives.
#include <stdio.h>
#include <string.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 100;

	char string[s];
	int word_count, i;

	// Ask user for input.
	printf("Enter a string: \n");
	scanf("%[^\n]s", string);
	// gets(string);

	i = 1; // Initialize.
	word_count = 1; // The initial word is counted here.
	do
	{
		if ((string[i] == ' ') && (string[i+1] != ' ') && (string[i+1] != '\0'))
		{
			// Every space marks the next word only if the next
			// character is not a space and the string has not ended yet.

			// The check for '\0' is necessary to prevent a trailing space to count as a word.

			// Increment word_count.
			word_count++;
		}
		i++;
	} while (string[i] != '\0');

	// Display output.
	printf("\nThe entered string contains %d words.\n", word_count);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
