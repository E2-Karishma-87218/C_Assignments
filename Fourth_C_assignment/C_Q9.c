#include<stdio.h>

int addition(int,int,int *);
int subtraction(int,int,int *);
int main()
{
	int n1,n2;
	int add,subtract,multiply,divide;



	printf("Enter the values of n1 and n2: \n");
	scanf("%d%d",&n1,&n2);

//	addition1=addition(n1,n2,&add);

//	printf("Addition is: %d\n",addition1);
	return 0;
}

int addition(int n1,int n2,int *add)
{
	*add=n1+n2;
	return *add;
}

int subtraction(int n1,int n2,int *subtract)
{
	*subtract=n1-n2;
	return *subtract;
}

int multiplication(int n1,int n2,int *multiply)
{
	*multiply=n1*n2;
	return *multiply;
}

int division(int n1,int n2,int *divide)
{
	if(n2==0)
	{
		printf("The number cannot be divided by zero.\n");
	}
	else
	{
		*divide=n1/n2;
		return *divide;
	}

}
