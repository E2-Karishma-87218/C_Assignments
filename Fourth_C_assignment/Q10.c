#include<stdio.h>
void leap_yr(int);
void month(int);

int main()
{
	int year,m;
	printf("Enter the year: \n");
	scanf("%d",&year);
 
 	printf("Enter the month: \n");
	scanf("%d",&m);

	leap_yr(year);
	 month(m);
	return 0;
}

void leap_yr(int year)
{
	if((year%400==0) ||(year%100!=0) &&(year%4==0))
	{
		printf("The year is a leap year\n");
	}
	else
	{	
		printf("The year is not a leap year\n");
	}
}

void month(int m)
{
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		printf("No of days :  31\n");
	}
	else if(m==4 || m==6 || m==9 || m==11)
	{
		printf("No of days : 30\n");
	}	
	else if(m==2)
		{
			int year;
			if((year%400==0) || (year%100!=0) && (year%4==0))
			{
				printf("No of days: 29\n");
			}
			else
			{
				printf("No of days: 28\n");
			}
		}


}


