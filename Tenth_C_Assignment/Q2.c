#include <stdio.h>

void printBinary(unsigned int num) 
{
	int bitSize = sizeof(num) * 8; 

	int leadingZeroes = 1;
	for (int i = bitSize - 1; i >= 0; i--) 
	{
		if ((num >> i) & 1) 
		{
			leadingZeroes = 0;
		}
		if (!leadingZeroes) 
		{
			printf("%d", (num >> i) & 1);
		}
	}

	if (leadingZeroes) 
	{
		printf("0");
	}

	printf("\n");
}

int main() 
{
	unsigned int number;

	printf("Enter a number: ");
	scanf("%u", &number);

	printf("Binary representation of %u is: ", number);
	printBinary(number);

	return 0;
}

