#include<stdio.h>

int main()
{
	int number,result;
	printf("Enter the number: \n");
	scanf("%d",&number);

	int i=1;
	while(i<=10)
	{
		result=number*i;
		printf("%d x %d = %d\n",number,i,result);
		i++;
	}
	return 0;
}
