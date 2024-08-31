#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);

	if(number%2==0)
	{
		printf("The number %d is an even number\n",number);
	}
	else
	{
		printf("The number %d is an odd number\n",number);
	}
	return 0;
}
