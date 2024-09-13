#include<stdio.h>
int gcd(int,int);

int main()
{
	int a,b,result;
	printf("Enter the two numbers: \n");
	scanf("%d%d",&a,&b);
	result=gcd(a,b);
	printf("The GCD of %d %d is: %d\n",a,b,result);
	return 0;
}

int gcd(int a,int b)
{

	while(a!=b)
	{
		if(a>b)
		{
			return gcd(a-b,b);
		}
		else
		{
			return gcd(a,b-a);
		}
	}
	return a;
}
