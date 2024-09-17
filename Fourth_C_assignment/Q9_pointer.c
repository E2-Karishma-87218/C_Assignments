#include <stdio.h>

#define NO_ERROR 0
#define DIVIDE_BY_ZERO_ERROR 1

int calculator(char operation, double num1, double num2, double *result) 
{
	switch (operation) 
	{
		case '+':
			*result = num1 + num2;
			return NO_ERROR;
		case '-':
			*result = num1 - num2;
			return NO_ERROR;
		case '*':
			*result = num1 * num2;
			return NO_ERROR;
		case '/':
			if (num2 == 0) 
			{
				return DIVIDE_BY_ZERO_ERROR; 
			}
			*result = num1 / num2;
			return NO_ERROR;
		default:
			return DIVIDE_BY_ZERO_ERROR;
	}
}

int main() 
{
	char operation;
	double num1, num2, result;
	int errorCode;

	printf("Enter the operation (+, -, *, /): ");
	scanf(" %c", &operation);  
	printf("Enter the first number: ");
	scanf("%lf", &num1);
	printf("Enter the second number: ");
	scanf("%lf", &num2);

	errorCode = calculator(operation, num1, num2, &result);

	
		if (errorCode == NO_ERROR) 
		{
			printf("Result: %.2f\n", result);
		} else if (errorCode == DIVIDE_BY_ZERO_ERROR) 
		{
			printf("Error: Division by zero or invalid operation.\n");
		}

	return 0;
}

