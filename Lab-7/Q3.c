// Preprocessor directives.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const int s = 100;

	int N;
	char string[s][s], temp[s];

	// Ask user for input.
	printf("Enter the number of strings: \n");
	scanf("%d", &N);

    fflush(stdin);

	printf("Enter the strings: \n");
	for (int i = 0; i < N; i++)
	{
		fgets(string[i], s, stdin);
		fflush(stdin);
		// scanf ("%[^\n]%*c", string[i]);
		// gets(string[i]);
	}

	for (int i = 0; i < N ; i++) // Loop through all the strings, starting from the second string.
	{
		for (int j = i+1; j < N ; j++)
		{
			if(strcmp(string[i],string[j]) > 0)
			{
				// Swap.
     			strcpy(temp,string[i]);
    			strcpy(string[i],string[j]);
				strcpy(string[j],temp);
			}
		}
	}

	// Display output.
	printf("\nAlphabetical order: \n");
	for (int i = 0; i < N; i++)
	{
		// fputs(string[i], stdout);
		puts(string[i]);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
