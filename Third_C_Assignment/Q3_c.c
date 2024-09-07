#include<stdio.h>

int main()
{
	int num,rev=0,rem,temp;

	printf("Enter the number to check for palindrome: \n");
	scanf("%d",&num);

	temp=num;

	while(temp!=0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp/=10;
	}

	if(num==rev)
	{
		printf("%d is a palindrome\n",num);
	}
	else
	{
		printf("%d is not a palindrome\n",num);
	}
	return 0;	
}
