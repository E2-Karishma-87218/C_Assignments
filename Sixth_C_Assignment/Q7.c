
#include <stdio.h>
#include <string.h>

void decimalToRoman(int num, char *roman) 
{

	const char *romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

	int i = 0;
	roman[0] = '\0'; 

	while (num > 0) 
	{
		while (num >= values[i]) 
		{
			strcat(roman, romanSymbols[i]);
			num -= values[i];
		}
		i++;
	}
}

int romanCharToValue(char c) 
{
	switch (c) 
	{
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default: return 0; 
	}
}


int romanToDecimal(const char *roman) 
{
	int decimal = 0;
	int i = 0;

	while (roman[i] != '\0') 
	{
		int value1 = romanCharToValue(roman[i]);
		int value2 = romanCharToValue(roman[i + 1]);


		if (value1 < value2) 
		{
			decimal += (value2 - value1);
			i += 2; 
		}
		else
		{
			decimal += value1;
			i++;
		}
	}

	return decimal;
}

int main() 
{
	int num;
	char roman[100];

	printf("Enter a decimal number (1-3999): ");
	scanf("%d", &num);

	if (num < 1 || num > 3999) 
	{
		printf("Please enter a number between 1 and 3999.\n");
		return 1;
	}

	decimalToRoman(num, roman);
	printf("Roman numeral: %s\n", roman);


	printf("Enter a Roman numeral: ");
	scanf("%s", roman);

	int decimal = romanToDecimal(roman);
	printf("Decimal number: %d\n", decimal);

	return 0;
}

