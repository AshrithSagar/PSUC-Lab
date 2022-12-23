# PSUC Lab-2 Branching control structures

---

## Question 1

> Check whether the given number is *odd* or even.
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int n;
	
	// Ask user for input.
	printf("Enter a number: \n");
	scanf("%d", &n);

	switch (n%2)
	{
		case 0:
			// Even.
			printf("The given number is even.\n");
			break;
		case 1:
			// Odd.
			printf("The given number is odd.\n");
			break;
		default:
			// Default case.
			printf("Error.\n");
			break;
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

---

## Question 2

> Find the *largest* among given 3 numbers.
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, c;
	int L;
	
	// Ask user for input.
	printf("Enter three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);

	if(a > b && a > c)
	{
		L = a;
	}
	else if (b > c)
	{
		L = b;
	}
	else
	{
		L = c;
	}

	// Display output.
	printf("%d is the largest.\n", L);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

---

## Question 3

> *Swap* two numbers **without** using third variable.
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b;
	
	// Ask user for input.
	printf("Enter two number: \n");
	scanf("%d %d", &a, &b);

	// Display.
	printf("Before swap: %d, %d.\n", a, b);

	// Swap.
	a = a + b;
	b = a - b;
	a = a - b;

	// Display output.
	printf("After swap: %d, %d.\n", a, b);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

---

## Question 4

> Compute all the *roots* of a *quadratic* *equation* using `switch case` statement.
[ Hint: $x = (-b \pm \sqrt{b^2 -4ac})\ /\ 2a$ ]
> 

```c
// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variables initialization.
	float a, b, c; // Coefficients of the quadratic equation.
	float D, r, i; // Discriminant, real part, imaginary part.
	int d; // Sign of the discriminant.

	// Input.
	printf("Enter {a, b, c} in the quadratic equation ax^2+bx+c=0:\n");
	scanf("%f %f %f", &a, &b, &c);

	// Determinant.
	D = b*b - 4*a*c;
	d = (D > 0) - (D < 0); // Sign of D.
	printf("Discriminant = %f\n", D);

	r = -b/(2*a);
	i = sqrt(d*D)/(2*a); // (d*D) is always positive.

	switch (d)
	{
		case 1: // Discriminant is positive.
		{
			printf("The roots are real and unequal.\n");
			printf("root_1 = %f,\troot_2 = %f\n", r-i, r+i);
			break;
		}
		case 0: // Discriminant is equal to zero.
		{
			printf("The roots are real and equal.\n");
			printf("root_1 = root_2 = %f\n", r);
			break;
		}
		case -1: // Discriminant is negative.
		{
			printf("The roots are imaginary.\n");
			printf("root_1 = (%f) - i(%f)\nroot_2 = (%f) + i(%f)\n", r, i, r, i);
			break;
		}
		default:
		{
			printf("Error.\n");
			return -1;
			break;
		}
	}

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

---

## Question 5

> Write a program that will read the value of $x$ and evaluate the following function.
Use `else if` statements and print the result ($Y$value).
> 

![Untitled](PSUC%20Lab%20-%202%20Branching%20control%20structures%202b9c077b7bd44dbf97e41a7183caec1b/Untitled%204.png)

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variables initialization.
	int x;
	int Y;

	// Input.
	printf("Enter x:\n");
	scanf("%d", &x);

	if (x > 0)
	{
		Y = 1;
	}
	else if (x == 0)
	{
		Y = 0;
	}
	else if (x < 0)
	{
		Y = -1;
	}

	// Display output.
	printf("Y = %d.\n", Y);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

---

## Question 6

> Find the *smallest* among three numbers using **conditional** **operator**.
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, c;
	int s;
	
	// Ask user for input.
	printf("Enter three numbers: \n");
	scanf("%d %d %d", &a, &b, &c);

	s = (a < b) ? a : b; // Minimum of a and b;
	s = (s < c) ? s : c; // Minimum of the previous smallest and c;

	// Also can be done by a single line of code.
	// s = (a < b)? ((a < c)? a : c) : ((b < c)? b : c) ;

	// Display output.
	printf("%d is the smallest.\n", s);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

---