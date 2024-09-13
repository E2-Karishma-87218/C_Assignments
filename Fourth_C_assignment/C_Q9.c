#include<stdio.h>

int addition(int,int,int *);
int subtraction(int,int,int *);
int multiplication(int,int,int *);
int division(int,int,int *);

int main()
{
	int n1,n2,result;
	int add,subtract,multiply,divide;
	int choice;
	//	char operator;
	do
	{
	printf("Enter your choice: 0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n ");
	scanf("%d",&choice);

	//	printf("Enter the operation you want to perform: \n");
	//	scanf("%c",&operator);

	printf("Enter the values of n1 and n2: \n");
	scanf("%d%d",&n1,&n2);

	switch(choice)
	{
		case 0:
			printf("Thank you!!...");
			break;

		case 1: 
			result=addition(n1,n2,&add);
			printf("Addition: %d\n",result);
			break;

		case 2:
			result=subtraction(n1,n2,&subtract);
			printf("Subtraction: %d\n",result);
			break;

		case 3:
			result=multiplication(n1,n2,&multiply);
			printf("Multiplication: %d\n",result);
			break;

		case 4:
			result=division(n1,n2,&divide);
			if(n2!=0)
			{
				printf("Division:%d\n",result);
		//	printf("Not allowed\n");
			}
			else
			{
				printf("Division by zero is not allowed\n");
			//printf("1");
			}
			break;

		default: 
			printf("Enter the correct value\n");

	}
}while(choice!=0);
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

		*divide=n1/n2;
		return *divide;
}
