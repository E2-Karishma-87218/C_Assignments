#include <stdio.h>
#include <string.h>


void reverse(char *str) 
{
	int len = strlen(str);
	int start = 0;
	int end = len - 1;
	while (start < end) 
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}


char* itoa(int value, char *str, int base) 
{

	if (base < 2 || base > 36) 
	{

		return NULL;
	}

	int i = 0;
	int isNegative = 0;


	if (value == 0) 
	{
		str[i++] = '0';
		str[i] = '\0';
		return str;
	}

	if (value < 0 && base == 10) 
	{
		isNegative = 1;
		value = -value;
	}


	while (value != 0) 
	{
		int digit = value % base;
		if (digit < 10) 
		{
			str[i++] = digit + '0';
		}
		else 
		{
			str[i++] = (digit - 10) + 'A';
		}
		value /= base;
	}


	if (isNegative)
	{
		str[i++] = '-';
	}

	str[i] = '\0'; 

	reverse(str);

	return str;
}

int main() 
{
	char buffer[50];
	int number, base;

	printf("Enter an integer: ");
	scanf("%d", &number);

	printf("Enter base (2-36): ");
	scanf("%d", &base);

	if (itoa(number, buffer, base) != NULL) 
	{
		printf("Number in base %d: %s\n", base, buffer);
	}
	else
	{
		printf("Invalid base.\n");
	}

	return 0;
}

