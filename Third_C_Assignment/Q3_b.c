#include<stdio.h>

int main()
{
	int num,rev=0,rem,temp;

	printf("Enter the number: \n");
	scanf("%d",&num);

	temp=num;

	while(temp!=0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp/=10;
	}

	printf("The reverse of the number %d is %d\n",num,rev);

	return 0;
}
