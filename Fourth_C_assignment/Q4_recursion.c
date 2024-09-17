#include <stdio.h>

int fibonacci(int n) 
{
	if (n <= 1) 
	{
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n) 
{
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", fibonacci(i));
	}
	printf("\n");
}

int main() 
{
	int numTerms;

	printf("Enter the number of terms to print in the Fibonacci series: ");
	scanf("%d", &numTerms);


	if (numTerms <= 0) 
	{
		printf("Number of terms must be a positive integer.\n");
	}
	else
	{
		printFibonacciSeries(numTerms);
	}

	return 0;
}

