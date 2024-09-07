#include<stdio.h>
int main()
{
	int month,year;

	printf("Enter the year: \n");
	scanf("%d",&year);

	printf("Enter the month: \n");
	scanf("%d",&month);

	if((year%400==0) || (year%100!=0) &&(year%4==0))
	{
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			printf("No of days : 31\n");
		else if(month==4 || month==6 || month==9 || month==11)
			printf("No of days : 30\n");
		else
			printf("No of days : 29\n");
	}
	else
	{
		
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			printf("No of days : 31\n");
		else if(month==4 || month==6 || month==9 || month==11)
			printf("No of days : 30\n");
		else
			printf("No of days : 28\n");
	}
	 

	//Using if else ladder
/*	if(year%400==0)
		{
		
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			printf("No of days : 31\n");
		else if(month==4 || month==6 || month==9 || month==11)
			printf("No of days : 30\n");
		else
			printf("No of days : 29\n");
		}

	else if(year%100!=0)
	{
		
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			printf("No of days : 31\n");
		else if(month==4 || month==6 || month==9 || month==11)
			printf("No of days : 30\n");
		else
			printf("No of days : 28\n");
	}
	else if(year%4==0)
	{
		
		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
			printf("No of days : 31\n");
		else if(month==4 || month==6 || month==9 || month==11)
			printf("No of days : 30\n");
		else
			printf("No of days : 29\n");
	}
	else
		printf("Invalid input\n");*/
	return 0;
}
