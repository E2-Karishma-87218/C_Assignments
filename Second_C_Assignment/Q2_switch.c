#include<stdio.h>
int main()
{
	int num1,num2,result;
	char operator;

	printf("Enter the 1st number: \n");
	scanf("%d",&num1);

	printf("Enter the operator:[+,-,*,/] \n");
	scanf("%*c%c",&operator);

	printf("Enter the 2nd number: \n");
	scanf("%d",&num2);

	switch(operator)
	{
		case '+' : printf("Addition= %d \n",num1+num2);
				  break;

	    case '-' : printf("Subraction= %d \n",num1-num2);
	   		      break;

	   case '*' : printf("Multiplication= %d \n",num1*num2);
	  			 break;

	  case '/' : printf("Division= %d \n",num1/num2);
	  			 break;

	 default: printf("You have entered an invalid operator\n");			 
	}

	
	return 0;
}

