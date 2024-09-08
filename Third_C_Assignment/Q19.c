#include<stdio.h>

int main()
{
	int start,end,product;
	printf("Enter the starting range: \n");
	scanf("%d",&start);

	printf("Enter the ending range: \n");
	scanf("%d",&end);

	for(int i=1;i<=10;i++)
	{
		for(int j=start;j<=end;j++)
		{
			product=i*j;
			printf("%d \t",product);
		}
		printf("\n");
	}
	return 0;
}
