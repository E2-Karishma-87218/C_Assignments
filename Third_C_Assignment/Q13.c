#include<stdio.h>

int main()
{
	int n1=0,n2=1,n3,i,number;
	n3=n1+n2;
	printf("Enter the number of elements: \n");
	scanf("%d",&number);

	printf("Fibonacci series: %d  %d  ", n1, n2);

	for(i=3;i<=number;i++)
	{
		printf("%d  ",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	return 0;
}
