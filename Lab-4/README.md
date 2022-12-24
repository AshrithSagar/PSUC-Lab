# PSUC Lab-4 Looping control structures - `for` loops

---

## Question 1

> Generate the *multiplication table* for $n$ numbers up to $k$ terms. (Using *nested* `for` loops).
[Hint:$\begin{array}{cc}
1 & 2 & 3 & 4 & 5 & \cdots & k 
\\
2 & 4 & 6 & 8 & 10 & \cdots & 2k
\\
\vdots & \vdots & \vdots & \vdots & \vdots & \ddots & \vdots 
\\
n & \cdots & \cdots & \cdots & \cdots & \cdots & nk
\end{array}$]
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n, k;
	
	// Ask user for input.
	printf("Enter the number of multiplication tables to generate: \n");
	scanf("%d", &n);
	printf("Enter the number of terms to generate upto: \n");
	scanf("%d", &k);

	// Display output.
	printf("\nThe multiplication tables from 1 to %d upto %d terms:\n", n, k);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			printf("%d\t", i*j);
		}
		printf("\n");
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q1-Output](Q1-Output.png)

---

## Question 2

> Generate *Floyd’s triangle* using natural numbers for a given limit $N$. (Using `for` loops).
[Hint: Floyd’s triangle is a right-angled triangle using the natural numbers.]
Eg: **Input:** $N = 4$, 
**Output:** $\begin{array}{cc}
1 &  &  &  \\
2 & 3 &  &  \\
4 & 5 & 6 &  \\
7 & 8 & 9 & 10
\end{array}$
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int i, j, k;
	
	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	// Display output.
	printf("\nFloyd's triangle for N=%d:\n", N);
	k = 1;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			if (j <= i)
			{
				printf("%d\t", k++); // Print k, then increment k.
			}
		}
		printf("\n");
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q2-Output](Q2-Output.png)

---

## Question 3

> Evaluate the *sine series*, $\sin(x) = x - x^3/3! + x^5/5! – x^7 /7! + \cdots$ to $n$ terms.
> 

```c
// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n;
	long double x, sin_x;
	int f;
	long double t;

	// Ask user for input.
	printf("Enter x (in radians):\n");
	scanf("%LF", &x);
	printf("Enter number of terms to compute up to:\n");
	scanf("%d", &n);

	// Sin(x) series.
	sin_x = 0; // Initialize the sin variable.
	for (int i = 1; i <= (2*n-1); i += 2)
	{
		// n terms in the series implies that the 
		// maximum power of x in the series be (2n-1).

		if (i == 1)
		{
			// Factorial.
			f = 1; // Initialize the factorial variable.
			
			t = (long double) x;
		}
		else
		{
			// Factorial.
			f *= i*(i-1);

			t *= (long double) -x*x;	
		}

		sin_x += (long double) t / f;
		
		// Also can do this instead with the pow() function.
		// sin_x += (long double) pow(-1,i/2) * (long double) pow(x,i) / f;
	}

	// Display output.
	printf("\nsin(%LF rad) = %LF\n", x, sin_x);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q3-Output](Q3-Output.png)

---

## Question 4

> Check whether a given number is *perfect* or not.
[Hint: Sum of all positive divisors of a given number excluding the given number is equal to the number]. Eg: $28 = 1+ 2 + 4 + 7 + 14 = 28$ is a perfect number.
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int S;
	
	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &N);

	S = 0; // Initialize the sum variable.
	for (int i = 1; i < N; i++)
	{
		if (N%i == 0)
		{
			// i is a divisor of N.
			S += i;
		}
	}

	// Display output.
	if (S == N)
	{
		// Perfect number.
		printf("The given number is a Perfect number.\n");
	}
	else
	{
		// Not a Perfect number.
		printf("The given number is NOT a Perfect number.\n");
		printf("The sum of all positive divisors of %d excluding itself is %d.\n", N, S);
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q4-Output](Q4-Output.png)

---

## Question 5

> Find out the *generic root* of any number.
[Hint: Generic root is the sum of digits of a number until a single digit is obtained.]
Ex: Generic root of $456$ is $4 + 5 + 6 = 15 = 1+5 = 6$.
> 

```c
// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int N;
	int S, n;

	// Ask user for input.
	printf("Enter a number:\n");
	scanf("%d", &N);

	S = N; // Make a copy of the original number.
	do
	{
		n = S; // Compute the generic root of S since it is lesser than 10.
		S = 0; // Initialise the generic root of n.
		while (n > 0)
		{
			S += n%10;
			n = n/10;
		}
		// S stores the value of the generic root of n.
	} while (S >= 10);
	
	// Display output.
	printf("The generic root of %d is %d.\n", N, S);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q5-Output](Q5-Output.png)

---

## Question 6

> Write a program to demonstrate the use of `break` and `continue` statements in `for` loop.
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int i;

	// For loop WITHOUT break and continue.
	printf("Print 1 to 10: Using for loop WITHOUT break and continue.\n\t");
	for (int i = 1; i <= 10; i++)
	{
		printf("%d, ", i);
	}

	// For loop WITH break and continue.
	printf("\n\nUsing for loop WITH break and continue.\n\t");
	for (int i = 1; i <= 10; i++)
	{
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

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q6-Output](Q6-Output.png)

---