#include <stdio.h>

void printHexadecimal(int num) 
{
        if (num < 16) 
		{
        if (num < 10) 
		{
            printf("%c", '0' + num);
        }
		else
		{
            printf("%c", 'A' + (num - 10));
        }
        return;
    }
    
       printHexadecimal(num / 16);
    
       int remainder = num % 16;
    if (remainder < 10) 
	{
        printf("%c", '0' + remainder);
    }
	else
	{
        printf("%c", 'A' + (remainder - 10));
    }
}

int main() 
{
    int number;
    
     printf("Enter a number to convert to hexadecimal: ");
    scanf("%d", &number);
    
        if (number == 0) 
		{
        printf("0");
    } 
	else
	{
        printHexadecimal(number);
    }
    printf("\n");

    return 0;
}

