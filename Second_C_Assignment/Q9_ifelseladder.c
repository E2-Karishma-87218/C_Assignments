#include <stdio.h>


int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int getDaysInMonth(int month, int year) 
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
	{
        return 31;
    }
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        return 30;
    } 
	else if (month == 2) 
	{
        if (isLeapYear(year)) 
		{
            return 29;
        }
		else 
		{
            return 28;
        }
    } 
	else 
	{
        return -1; 
    }
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

