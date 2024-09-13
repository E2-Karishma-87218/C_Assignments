#include<stdio.h>
int binary_function(int);

int main()
{
	int n,binary;

	printf("Enter the decimal number: \n");
	scanf("%d",&n);

	binary=binary_function(n);
	printf("The binary equivalent of %d is %d\n",n,binary);

	return 0;
}
int binary_function(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return (n%2)+10*binary_function(n/2);
	}
}
