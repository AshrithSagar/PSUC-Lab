# PSUC Lab-1 Simple C programs

## Question 1

> Write a C program to *add* two integers $a$ and $b$ read through the keyboard.
Display the result using third variable $sum$.

```c
#include <stdio.h> // Preprocessor directive.

int main() // Start main.
{ // Start.

	int a, b, sum; // Variable initialisations.

	// Ask user for input.
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);

	sum = a + b; // Sum of values stored in variables a and b.

	// Display output.
	printf("The sum of %d and %d is %d.\n", a, b, sum);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q1-Output](Q1-Output.png)

---

## Question 2

> Write a C program to find the *sum, difference, product* and *quotient* of 2 numbers.
> 

```c
#include <stdio.h> // Preprocessor directive.

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, sum, diff, prod;
	float quot;

	// Ask user for input.
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);

	// Sum.
	sum = a + b;

	// Difference.
	if (a > b)
	{
		diff = a - b;
	}
	else
	{
		diff = b - a;
	}

	// Product.
	prod = a * b;

	// Quotient.
	quot = (float) a / b;

	// Display output.
	printf("The sum of %d and %d is %d.\n", a, b, sum);
	printf("The difference of %d and %d is %d.\n", a, b, diff);
	printf("The product of %d and %d is %d.\n", a, b, prod);
	printf("The quotient of %d and %d is %f.\n", a, b, quot);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q2-Output](Q2-Output.png)

---

## Question 3

> Write a C program to print the *ASCII* value of a *character*.
> 

```c
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
```

### Output

![Q3-Output](Q3-Output.png)

---

## Question 4

> Write a C program to display the *size of* the data type *`int`, `char`, `float`, `double`, `long int`* and *`long double`* using $\text{sizeof()}$ operator.
> 

```c
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
```

### Output

![Q4-Output](Q4-Output.png)

---

## Question 5

> Input $P$, $N$ and $R$ to compute *simple* and *compound interest*. 
[Hint: $SI = PNR/100$, $CI = P(1+R/100)^N -P$]
> 

```c
// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	float P, N, R;
	float SI, CI;
	
	// Ask user for input.
	printf("Enter P (in INR or USD), N (in years), R (in percentage per annum): \n");
	scanf("%f %f %f", &P, &N, &R);

	// Simple interest.
	SI = P*N*R / 100.0;

	// Compound interest.
	CI = P * pow( (1+R/100.0), N ) - P;

	// Display output.
	printf("The Simple interest is %f.\n", SI);
	printf("The Compound interest is %f.\n", CI);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q5-Output](Q5-Output.png)

---

## Question 6

> Input **radius** to find the *volume* and *surface area* of a sphere. 
[Hint: $\text{Volume} = (4\pi r^3 )/3,\ \text{Area}=4\pi r^2$ ]
> 

```c
// Preprocessor directives.
#include <stdio.h>
#include <math.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	const double pi = 3.14159265;
	int r;
	float Vol, SA;
	
	// Ask user for input.
	printf("Enter radius: \n");
	scanf("%d", &r);

	Vol = (4.0 * pi * pow(r, 3)) / 3.0;
	SA = 4.0 * pi * pow(r, 2);

	// Display output.
	printf("The Volume of the sphere is %f.\n", Vol);
	printf("The Surface Area of the sphere is %f.\n", SA);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q6-Output](Q6-Output.png)

---

## Question 7

> Convert the given *temperature* in *Fahrenheit* to *Centigrade*. 
[Hint: $C=5/9(F-32)$]

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	float C, F;
	
	// Ask user for input.
	printf("Enter temperature in Fahrenheit: \n");
	scanf("%f", &F);

	C = (5.0/9) * (F - 32);

	// Display output.
	printf("The given temperature in Centigrade is %f C.\n", C);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q7-Output](Q7-Output.png)

---

## Question 8

> Write a C program to evaluate the following expression for the values 
$a = 30, b=10, c=5, d=15$.
$\text{(i)}\ \ (a + b) * c / d 
\\
\text{(ii)}\ \ ((a + b) * c) / d
\\
\text{(iii)}\ \ a + (b * c) / d 
\\
\text{(iv)}\ \ (a + b) * (c / d)$
> 

```c
// Preprocessor directives.
#include <stdio.h>

int main() // Start main.
{ // Start.

	// Variable initialisations.
	int a, b, c, d;
	int A_1, A_2, A_3, A_4;
	
	// Ask user for input.
	printf("Enter a, b, c, d: \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	A_1 = (a + b) * c / d;
	A_2 = ((a + b) * c) / d;
	A_3 = a + (b * c) / d;
	A_4 = (a + b) * (c / d);

	// Display output.
	printf("(a+b)*c/d = %d\n", A_1);
	printf("((a+b)*c)/d = %d\n", A_2);
	printf("a+(b*c)/d = %d\n", A_3);
	printf("(a+b)*(c/d) = %d\n", A_4);

	printf("\nMy name is Ashrith Sagar Yedlapalli.\n");

} // End.
```

### Output

![Q8-Output](Q8-Output.png)

---