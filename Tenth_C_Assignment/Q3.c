#include <stdio.h>
#include <stdlib.h> 

void printBinary(unsigned int num) 
{
	int bitSize = sizeof(num) * 8; 

	int zeroes = 1;
	for (int i = bitSize - 1; i >= 0; i--) 
	{
		if ((num >> i) & 1) 
		{
			zeroes = 0;
		}
		if (!zeroes) 
		{
			printf("%d", (num >> i) & 1);
		}
	}

	if (zeroes) 
	{
		printf("0");
	}

	printf("\n");
}

int main(int argc, char *argv[]) 
{
	if (argc != 2) 
	{
		fprintf(stderr, "Usage: %s <number>\n", argv[0]);
		return 1;
	}

	unsigned int number = (unsigned int)atoi(argv[1]);

	printf("Binary representation of %u is: ", number);
	printBinary(number);

	return 0;
}

