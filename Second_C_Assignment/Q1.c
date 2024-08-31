#include<stdio.h>
int main()
{
	int num1,num2,result;
	printf("Enter the value of the 2 numbers: \n");
	scanf("%d %d",&num1,&num2);

	if(num2!=0)
	{
		result=num1/num2;
		printf("%d divided by %d = %d\n",num1,num2,result);
	}
	else
	{
		printf("The number cant be divided by zero\n");
	}
	return 0;
}
