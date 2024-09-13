#include<stdio.h>
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

int main()
{
	int n1,n2,result;
//	char operator;

	typedef enum menu{EXIT,ADD,SUBTRACT,MULTIPLY,DIVIDE}MENU;
	MENU choice;
	do{
		
//	printf("0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division \n");
//	printf("Your choice ");
//	scanf("%d",&choice);

	printf("Enter the 1st number: \n");
	scanf("%d",&n1);

//	printf("Enter the operator: \n");
//	scanf("%*c%c",&operator);

	printf("Enter the 2nd number: \n");
	scanf("%d",&n2);

	
	printf("0.Exit\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division \n");
	printf("Your choice ");
	scanf("%d",&choice);
		switch(choice)
		{
			case EXIT : 
				printf("Thank you!!!\n");
				break;

			case ADD : 
					result=addition(n1,n2);
					printf("ADDITION : %d\n",result);
				break;

			case SUBTRACT : 
					result=subtraction(n1,n2);
					printf("SUBTRACTION : %d\n",result);
					break;

			case MULTIPLY : 
					result=multiplication(n1,n2);
					printf("MULTIPLICATION : %d\n",result);
					break;

			case DIVIDE :
					if(n2!=0)
					{
						result=division(n1,n2);
						printf("DIVISION : %d\n",result);
					}
					else
					{
						printf("Division by zero is not allowed!!\n");
					}
					break;

			default : 
				printf("INVALID INPUT!!\n");

		}
	}while(choice!=0);
	return 0;
}

int addition(int a,int b)
{
	return a+b;
}
int subtraction(int a,int b)
{
	return a-b;
}
int multiplication(int a,int b)
{
	return a*b;
}

int division(int a,int b)
{
	return a/b;
}
