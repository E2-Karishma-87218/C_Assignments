#include<stdio.h>

int fact(int);
int main()
{
	int no, factorial;
	printf("Enter the number: \n");
	scanf("%d",&no);

	factorial=fact(no);
	printf("The factorial of the number %d is : %d\n",no,factorial);

	return 0;
}

int fact(int num)
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}

	return fact;
}
