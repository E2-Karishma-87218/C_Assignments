#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

void numberToWordsLessThan1000(int number, char *words) 
{
    static const char *units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    static const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    static const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    static const char *hundred = "Hundred";

    words[0] = '\0'; 

    if (number >= 100) 
	{
        int h = number / 100;
        strcat(words, units[h]);
        strcat(words, " ");
        strcat(words, hundred);
        strcat(words, " ");
        number %= 100;
    }

    if (number >= 20) 
	{
        int t = number / 10;
        strcat(words, tens[t]);
        strcat(words, " ");
        number %= 10;
    } else if (number >= 10) 
	{
        strcat(words, teens[number - 10]);
        strcat(words, " ");
        number = 0;
    }

    if (number > 0) 
	{
        strcat(words, units[number]);
        strcat(words, " ");
    }
}


void numberToWords(int number, char *words) 
{
    if (number == 0) 
	{
        strcpy(words, "Zero");
        return;
    }

    char buffer[MAX_SIZE];
    buffer[0] = '\0';

    if (number >= 1000000) 
	{
        numberToWordsLessThan1000(number / 1000000, buffer);
        strcat(buffer, "Million ");
        number %= 1000000;
    }
    if (number >= 1000) 
	{
        numberToWordsLessThan1000(number / 1000, buffer);
        strcat(buffer, "Thousand ");
        number %= 1000;
    }
    if (number > 0) 
	{
        numberToWordsLessThan1000(number, buffer);
    }

     
	 strcpy(words, buffer);
    size_t len = strlen(words);
    if (len > 0 && words[len - 1] == ' ') 
	{
        words[len - 1] = '\0';
    }
}

int main() 
{
    int number;
    char words[MAX_SIZE];

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        printf("Negative numbers are not supported.\n");
        return 1;
    }

    numberToWords(number, words);
    printf("Number in words: %s\n", words);

    return 0;
}

