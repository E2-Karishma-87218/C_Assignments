#include<stdio.h>

int main()
{
	int num,fact=1;
	int i=1;

	printf("Enter the number: \n");
	scanf("%d",&num);

	while(i<=num)
	{
		fact*=i;
		i++;
	}

	for(i=num;i>1;i--)
		printf("%d * ",i);

	printf("%d ",i);

	printf(" = %d",fact);
	return 0;
}
