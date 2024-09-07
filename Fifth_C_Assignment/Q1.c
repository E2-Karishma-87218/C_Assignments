#include<stdio.h>

int main()
{
	int marks[6];
	float avg,total;

	for(int i=0;i<5;i++)
	{
		printf("Enter the marks for subject %d : \n", i+1);
		scanf("%d",&marks[i]);
		total+=marks[i];
	}

	for(int i=0;i<5;i++)
	{
		printf("The marks of subject  %d  is : %d \n",i+1,marks[i]);
	}

	avg=total/5;

	printf("The average of the marks of 5 subjects is %f \n",avg);


	return 0;
}
