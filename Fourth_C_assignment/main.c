#include<stdio.h>
#include "header.h"
int flag=0;

int main()
{
	int start,end;
	printf("Enter the start of the range: \n");
	scanf("%d",&start);

	printf("Enter the end of the range: \n");
	scanf("%d",&end);

	check_prime(start,end);

	
	return 0;
}
