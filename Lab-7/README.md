# PSUC Lab - 7
Strings

---

## Question 1

> Count the number of *words* in a sentence.
> 

```c
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
```

### Output

![Q1-Output](Q1-Output-1.png)

![Q1-Output](Q1-Output-2.png)

![Q1-Output](Q1-Output-3.png)

---

## Question 2

> Input a string and *toggle* the case of every character in the input string.
[ Eg: *INPUT*: aBcDe
*OUTPUT*: AbCdE ]
> 

```c
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
```

### Output

![Q2-Output](Q2-Output-1.png)

![Q2-Output](Q2-Output-2.png)

---

## Question 3

> Arrange ‘n’ names in *alphabetical* order (Hint: use string handling function-`strcpy`)
> 

```c
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
```

### Output

![Q3-Output](Q3-Output.png)

---