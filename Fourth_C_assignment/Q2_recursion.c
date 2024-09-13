#include<stdio.h>
int power(int,int);

int main()
{
	int base,n,result;
	printf("Enter the base number: \n");
	scanf("%d",&base);
	printf("Enter the power : \n");
	scanf("%d",&n);

	result=power(base,n);
	printf("%d ^ %d = %d\n",base,n,result);
	return 0;
}
int power(int base,int n)
{
	if(n!=0)
		return(base*power(base,n-1));
	else
		return 1;
}
