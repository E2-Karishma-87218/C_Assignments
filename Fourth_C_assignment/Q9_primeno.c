#include <stdio.h>


int isPrime(int num)
{
	if (num <= 1) 
	{
		return 0; 
	}
	if (num <= 3) 
	{
		return 1; 
	}
	if (num % 2 == 0 || num % 3 == 0) 
	{
		return 0; 
	}
	for (int i = 5; i * i <= num; i += 6) 
	{
		if (num % i == 0 || num % (i + 2) == 0) 
		{
			return 0; 
		}
	}
	return 1; 
}


void printPrimesInRange(int start, int end) 
{
	if (start > end) 
	{
		printf("Invalid range: start should be less than or equal to end.\n");
		return;
	}

	printf("Prime numbers between %d and %d are:\n", start, end);
	for (int num = start; num <= end; num++) 
	{
		if (isPrime(num)) 
		{
			printf("%d ", num);
		}
	}
	printf("\n"); 
}

int main() 
{
	int start, end;

	printf("Enter the start of the range: ");
	scanf("%d", &start);
	printf("Enter the end of the range: ");
	scanf("%d", &end);


	printPrimesInRange(start, end);

	return 0;
}

