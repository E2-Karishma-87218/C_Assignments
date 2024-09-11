#include<stdio.h>
int main()
{
	int rows;
	char ch;

	printf("Enter the no. of rows: \n");
	scanf("%d",&rows);

	ch='A';

	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
