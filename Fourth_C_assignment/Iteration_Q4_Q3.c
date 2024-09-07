#include<stdio.h>

void addition(int,int);
int accept_number();
void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
	int n1,n2;
	enum calculator{EXIT,ADDITION,SUBTRACTION,MULTIPLICATION,DIVISION}ch;


	n1=accept_number();
	n2=accept_number();
	printf("0.EXIT \n1.ADDITION \n2.SUBTRACTION \n3.MULTIPLICATION \n4.DIVISION \n ");
	printf("Enter your choice: \n");
	scanf("%d",(int *)&ch);



	switch(ch)
	{

		case EXIT:printf("Thank you!!!....\n");
				  break;


		case ADDITION: addition(n1,n2);
					   break;

		case SUBTRACTION: subtraction(n1,n2);
						  break;

		case MULTIPLICATION:multiplication(n1,n2);
							break;

		case DIVISION:division(n1,n2);
					  break;

		default: printf("The input is invalid!!\n");

	}


	return 0;
}

int accept_number()
{

	int temp;
	printf("Enter the number: \n");
	scanf("%d",&temp);
	return temp;
}

void addition(int a,int b)
{
	printf("Addition: %d\n",a+b);
}

void subtraction(int a,int b)
{
	printf("Subtraction: %d\n",a-b);
}

void multiplication(int a,int b)
{
	printf("Multiplication: %d\n",a*b);
}

void division(int a,int b)
{
	if(b!=0)
	{
		printf("Division: %d\n",a/b);
	}

	else
	{
		printf("Cant take zero as a denominator!!\n");
	}
}
