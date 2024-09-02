#include<stdio.h>
int main()
{
	int year;

	printf("Enter the year: \n");
	scanf("%d",&year);

	//Using Logical operators
	if((year%400==0)||(year%100!=0) &&(year%4==0))
	{
		printf("Their are 366 days in the year %d\n",year);
	}
	else
	{
		printf("Their are 365 days in the year %d\n",year);
	}

	//Without using logical operator
	if(year%400==0)
	{

		printf("Their are 366 days in the year %d\n",year);
	}
	else if(year%100==0)
	{
		printf("Their are 365 days in the year %d\n",year);
	}
	else if(year%4==0)
	{
		printf("Their are 366 days in the year%d\n",year);
	}

	else
	{
		printf("Their are 365 days in the year %d\n",year);
	}

	//Using conditional operator

	((year%400==0)||(year%100!=0) && (year%4==0)?printf("The year %d has 366 days\n",year):printf("The year %d has 365 days\n",year));

	return 0;
}
