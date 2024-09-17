#include <stdio.h>
#include<string.h>

int myAtoi(const char *string) 
{
	int result = 0;      
	int sign = 1;      
	int i = 0;         



	if (string[i] == '-') 
	{
		sign = -1;
		i++;
	}
	else if (string[i] == '+')
	{
		i++;
	}


	while (string[i] != '\0') 
	{

		if (string[i] < '0' || string[i] > '9') 
		{
			break; 
		}
		result = result * 10 + (string[i] - '0');
		i++;
	}

	return sign * result;
}

int main() 
{
	char str[100];

	printf("Enter a string of digits: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = '\0';

	int num = myAtoi(str);

	printf("Numeric equivalent: %d\n", num);

	return 0;
}

