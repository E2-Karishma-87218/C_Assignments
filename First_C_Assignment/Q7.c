#include <stdio.h>

int main() 
{
    int number;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    
    if (number < 1000 || number > 9999) 
	{
        printf("The number must be a 4-digit number.\n");
        return 1;
    }
    
    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = (number / 100) % 10;
    int thousands = number / 1000;

    printf("a. Face values:\n");
    printf("%d\n", thousands);
    printf("%d\n", hundreds);
    printf("%d\n", tens);
    printf("%d\n", units);

    printf("b. Place values:\n");
    printf("%d = %d000 + %d00 + %d0 + %d\n", number, thousands, hundreds, tens, units);

    printf("c. Reversed order:\n");
    printf("%d%d%d%d\n", units, tens, hundreds, thousands);

    return 0;
}

