#include<stdio.h>

int main()
{
	int num;

	printf("Enter the number: \n");
	scanf("%d",&num);

	int i=1,j;
	while(i<num)
	{
		if(num%i==0)
		{
			if(i<num/i)
				printf("%d * %d = %d\n",i,num/i,num); 
		}
		i++;
	}
	return 0;
}
