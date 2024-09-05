#include<stdio.h>
extern int flag;
int check_prime(int start,int end)
{
	printf("Enter the start range: \n");
	scanf("%d",&start);

	printf("Enter the end range: \n");
	scanf("%d",&end);

	for(int i=start;i<=end;i++)
	{
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		return i;
	}
}
