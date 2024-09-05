#include<stdio.h>

int main()
{
	int n1,n2;
	enum calculator{EXIT,ADDITION,SUBTRACTION,MILTIPLICATION,DIVISION}ch;

	printf("0.EXIT \n1.ADDITION \n2.SUBTRACTION \n 3.MULTIPLICATION \n4.DIVISION \n");
	printf("Enter your choice: \n");
	scanf("%d",(int *)&ch);

	switch(ch)
	{
		case EXIT:printf("Thank you!!....\n");
				break;

	   case ADDITION: 
	   			break;

	  case SUBTRACTION:
	  			break;

	  case MULTIPLICATION:
	  			break;

	 case DIVISION:
	 			break;
	default:printf("The input is invalid!!\n");			
	}
	return 0;
}

int accept_number()
{
	int temp;

}
