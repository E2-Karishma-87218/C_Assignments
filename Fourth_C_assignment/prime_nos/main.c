#include<stdio.h>
#include "header.h"
int flag=0;
int main()
{
	int num;
	printf("Enter the number: \n");
	scanf("%d",&num);

	check_prime(num);

	if(flag==0)
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not a prime number\n",num);
	}
	return 0;
}
