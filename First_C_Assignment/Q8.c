#include<stdio.h>

int main()
{

    int num1,num2,num3;
	float average;

	printf("Enter the numbers: \n");
	scanf("%d%d%d",&num1,&num2,&num3);

	average=(num1+num2+num3)/3.0f;
	printf("The average of the given 3 numbers is: %f \n",average);

	return 0;

}
