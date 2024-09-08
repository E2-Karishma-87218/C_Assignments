#include<stdio.h>

int main()
{
	int n1,n2,numerator,denominator;
	int rem,gcd;

	printf("Enter the 2 numbers\n");
	scanf("%d%d",&n1,&n2);

	if(n1>n2)
	{
		numerator=n1;
		denominator=n2;
	}
	else
	{
		numerator=n2;
		denominator=n1;
	}
	rem=numerator%denominator;
	while(rem!=0)
	{
		numerator=denominator;
		denominator=rem;
		rem=numerator%denominator;
	}
	gcd=denominator;
	printf("GCD of %d & %d is %d\n",n1,n2,gcd);

	
	return 0;
}


