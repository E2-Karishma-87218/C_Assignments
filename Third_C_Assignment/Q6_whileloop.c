#include<stdio.h>

int main()
{
	int num;
	printf("Enter the number: \n");
	scanf("%d",&num);

	printf("The factors of the number %d are : ",num);
	int i=1;
	while(i<num)
	{
		if(num%i==0)
			printf("%d ",i);
		i++;	
	}

	return 0;
}
