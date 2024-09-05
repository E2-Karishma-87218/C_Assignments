#include<stdio.h>
extern int flag;
void check_prime(int n)
{
	for(int i=2;i<n/2;i++)
	{
		if(n%2==0)
		{
			flag=1;
			return ;
		}
	}
	return ;



}
