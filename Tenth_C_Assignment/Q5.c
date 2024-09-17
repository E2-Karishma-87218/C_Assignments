#include <stdio.h>

void checkAndXORChar(char ch) 
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
	{
        
        printf("Original character: %c\n", ch);
        printf("Original ASCII value: %d\n", (int)ch);

		char result = ch ^ 32;

        printf("Character after XOR with 32: %c\n", result);
        printf("ASCII value after XOR: %d\n", (int)result);
    } 
	else 
	{
        printf("The character '%c' is not an alphabet.\n", ch);
    }
}

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 

    checkAndXORChar(ch);

    return 0;
}

