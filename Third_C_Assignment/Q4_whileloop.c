#include<stdio.h>
int main()
{
	int fact=1,num;
	
	printf("Enter the number: \n");
	scanf("%d",&num);

	int i=1;
	while(i<=num)
	{
		fact*=i;
		i++;

	}
	for(i=1;i<num;i++)
		printf("%d *",i);
		
	printf("%d ",i);	

	printf(" = %d",fact);

	return 0;
}

