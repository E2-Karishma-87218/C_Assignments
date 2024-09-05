#include<stdio.h>

int main()
{
	int num,sum=0,temp,rem;

	printf("Enter the number: \n");
	scanf("%d",&num);

	temp=num;
	
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp/=10;
	}
	printf("Sum of the number %d is: %d\n",num,sum);


	return 0;
}
