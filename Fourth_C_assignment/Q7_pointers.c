#include<stdio.h>
int n1=20,n2=10;
void calculate(int,int,int *,int *);
int main()
{
	int calculation,sum,product;
	calculate(n1,n2,&sum,&product);

	return 0;
}
void calculate(int n1,int n2,int *ptr1,int *ptr2)
{
	*ptr1=n1+n2;
	*ptr2=n1*n2;
	printf("%d + %d = %d\n",n1,n2,*ptr1);
	printf("%d * %d = %d\n",n1,n2,*ptr2);
}
