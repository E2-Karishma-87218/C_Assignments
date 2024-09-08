#include<stdio.h>

int main()
{
	int num,fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);

	printf("The factorial of number %d is : \n",num);
	for(int i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("%d \n",fact);
	return 0;
}
