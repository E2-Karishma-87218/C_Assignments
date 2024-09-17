#include <stdio.h>
#include <time.h>


void printDayOfWeek(int dayOfWeek) 
{
    switch(dayOfWeek) 
	{
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }
}

int main()
{
    int day, month, year;
    struct tm timeinfo = {0};
    time_t t;

    printf("Enter day (1-31): ");
    scanf("%d", &day);
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    timeinfo.tm_year = year - 1900;  
    timeinfo.tm_mon = month - 1;    
    timeinfo.tm_mday = day;         

     t = mktime(&timeinfo);

    if (t == -1) 
	{
        printf("Invalid date.\n");
    }
	else
	{
        
        printDayOfWeek(timeinfo.tm_wday);
    }

    return 0;
}

