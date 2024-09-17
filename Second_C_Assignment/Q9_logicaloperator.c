#include <stdio.h>

int isLeapYear(int year) 
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int getDaysInMonth(int month, int year) 
{
    int daysInMonth = 31; 

    daysInMonth -= (month == 4 || month == 6 || month == 9 || month == 11) ? 1 : 0;
    
    daysInMonth = (month == 2) ? (isLeapYear(year) ? 29 : 28) : daysInMonth;

    return (month >= 1 && month <= 12) ? daysInMonth : -1; 
}

int main() 
{
    int month, year;

    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    int days = getDaysInMonth(month, year);

    if (days == -1) 
	{
        printf("Invalid month.\n");
    }
	else
	{
        printf("Number of days in month %d of year %d is: %d\n", month, year, days);
    }

    return 0;
}

