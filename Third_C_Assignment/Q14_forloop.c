#include<stdio.h>
int main()
{
	int number;
	int prime=1;

	printf("Enter the number: \n");
	scanf("%d",&number);

	if(number<2)
	{
		prime=0;
	}
	else
	{
		for(int i=2;i<number;i++)
		{
			if(number%i==0)
			{
				prime=0;
				break;
			}
		}
	}
	if(prime)
		printf("%d is a  prime\n",number);
	else
		printf("%d is not a prime\n",number);
	return 0;
}
