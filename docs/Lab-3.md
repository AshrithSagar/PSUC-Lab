# Lab-3

## Questions

### Question-1

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int R, n;
	int p; // Flag variable.

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	n = N;
	R = 0;
	while (n > 0)
	{
		R = 10*R + n%10;
		n = n/10;
	}

	// Check for palindrome.
	if (N == R)
	{
		// Palindrome.
		printf("The given number is a palindrome.\n");
	}
	else
	{
		// Not a palindrome.
		printf("The given number is NOT a palindrome.\n");
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Question-2

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b;
	int n, i;
	int p; // Flag variable.

	// Ask user for input.
	printf("Enter the lower limit and upper limit: \n");
	scanf("%d %d", &a, &b);

	// Display.
	printf("Primes between %d and %d: \n", a, b);

	n = a;
	while (n <= b)
	{
		// Check for prime.
		p = 1; // Initialize the flag variable.
		i = 2;
		while (i <= n/2)
		{
			if (n%i == 0)
			{
				p = 0; // Not a prime.
				break;
			}
			i++;
		}

		if (p == 1)
		{
			// Prime.
			printf("%d, ", n);
		}

		n++;
	}

	printf("\n");

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
	int N;
	int S, n, d;

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	S = 0;
	n = N;
	while (n > 0)
	{
		d = n%10; // Last digit.
		S = S + d*d*d;
		n = n/10;
	}

	// Display output.
	if (S == N)
	{
		// Armstrong number.
		printf("The given number is an Armstrong number.\n");
	}
	else
	{
		// Not an Armstrong number.
		printf("The given number is NOT an Armstrong number.\n");
		printf("The sum of the cubes of all the digits = %d.\n", S);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Question-4

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n;
	int p, cp; // Prime and composite counters.
	int f; // Flag variable.

	// Initialize the prime and composite counter variables.
	p = 0;
	cp = 0;

	// Ask user for input.
	printf("Input numbers (Enter -1 to stop): \n");

	do
	{
		scanf("%d", &n);

		// Check for prime.
		f = 1; // Initialize the flag variable.
		for (int i = 2; i <= n/2; i++)
		{
			if (n%i == 0)
			{
				f = 0; // Not a prime.
				break;
			}
		}

		// Update counter variables.
		if ((n != -1) && (n != 1))
		{
			if (f == 1)
			{
				// Prime.
				p++;
			}
			else
			{
				// Composite.
				cp++;
			}
			// Also can be done with:
			// (f == 1)? p++ : cp++;
		}
	} while (n != -1);

	// Display output.
	printf("Primes: %d\tComposites: %d\n", p, cp);

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
	int N;
	int S, d, n, f;

	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	n = N; // Make a copy of the original number.
	S = 0; // Initialize the sum variable.
	while (n > 0)
	{
		d = n%10; // The last digit of n.

		// Factorial.
		f = 1; // Initialize the factorial variable.
		for (int i = 1; i <= d; i++)
		{
			f *= i;
		}
		S += f;

		n = n/10;
	}

	// Display output.
	if (S == N)
	{
		// Strong number.
		printf("The given number is a Strong number.\n");
	}
	else
	{
		// Not a Strong number.
		printf("The given number is NOT a Strong number.\n");
		printf("The sum of the factorials of all the digits = %d.\n", S);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Question-6

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int i;

	// While loop without break and continue.
	printf("Print 1 to 10: Using while loop WITHOUT break and continue.\n\t");
	i = 0;
	while (i < 10)
	{
		i++;

		printf("%d, ", i);
	}

	// While loop with break and continue.
	printf("\n\nUsing while loop WITH break and continue.\n\t");
	i = 0;
	while (i < 10)
	{
		i++;

		if (i == 4)
		{
			continue;
		}
		else if (i == 9)
		{
			break;
		}

		printf("%d, ", i);
	}
	printf("\nA continue statements is used to skip the number 4.");
	printf("\nA break statements is used to terminate the loop at 8.\n");

	// Do-while loop WITHOUT break and continue.
	printf("\nPrint 10 to 1: Using do-while loop WITHOUT break and continue.\n\t");
	i = 11;
	do
	{
		i--;

		printf("%d, ", i);
	} while (i > 1);

	// Do-while loop WITH break and continue.
	printf("\n\nUsing do-while loop WITH break and continue.\n\t");
	i = 11;
	do
	{
		i--;

		if (i == 4)
		{
			continue;
		}
		else if (i == 2)
		{
			break;
		}

		printf("%d, ", i);
	} while (i > 1);
	printf("\nA continue statements is used to skip the number 4.");
	printf("\nA break statements is used to terminate the loop at 3.\n");


	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```
