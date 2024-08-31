#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number to check whether it is +ve,-ve or zero: \n");
	scanf("%d",&number);

	if(number>0)
	{
		printf("The number %d is a positive number\n",number);
	}
	else if(number<0)
	{
		printf("The number %d is a negative number\n",number);
	}
	else
	{
		printf("The number is zero\n");
	}
	return 0;
}
