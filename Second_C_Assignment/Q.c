#include<stdio.h>

int main()
{
	int month,year;

	printf("Enter the year: \n");
	scanf("%d",&year);

	//	printf("Enter the month: \n");
	//	scanf("%d",&month);

	/*	if(year%400==0)
		{
		printf("The year %d has 366 days as it is a leap year\n",year);
		}
		else if(year%100==0)
		{
		printf("The year %d has 365 days as it is not a leap year\n",year);
		}
		else if(year%4==0)
		{
		printf("The year %d has 366 days as it is a leap year\n",year);
		}*/

	/*	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		printf("No of days : 31\n");
		else if(month==4 || month==6 || month==9 || month==11)
		printf("No of days : 30\n");
		else if(month==2)
		printf("No of days : 29\n");*/


	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		printf("No of days : 31\n");
	else if(month==4 || month==6 || month==9 || month==11)
		printf("No of days : 30\n");
	else if(month==2)
	{
		if(year%400==0)
		{
			if(year%100!=0)
			{
				if(year%4==0)
				{

					printf("No of days : 29\n");
				}
				else

					printf("Days : 28\n");
			}
		}
	}
	//   printf("No of days : 29\n");




	return 0;
}
