#include <stdio.h>

void printPascalsTriangle(int rows) 
{
	int pascal[rows][rows];

	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{

			if (j == 0 || j == i) 
			{
				pascal[i][j] = 1;
			} 
			else
			{

				pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			}
		}
	}

	for (int i = 0; i < rows; i++) 
	{

		for (int s = 0; s < rows - i - 1; s++) 
		{
			printf("   ");
		}
		for (int j = 0; j <= i; j++) 
		{
			printf("%4d", pascal[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int rows;

	// Accept the number of rows from the user
	printf("Enter the number of rows for Pascal's Triangle: ");
	scanf("%d", &rows);

	// Validate input
	if (rows <= 0) {
		printf("Number of rows must be a positive integer.\n");
		return 1;
	}

	// Print Pascal's Triangle
	printPascalsTriangle(rows);

	return 0;
}

