#include<stdio.h>
int main()
{
    int number1,number2,number3,result;
	printf("Enter the three numbers: \n");
	scanf("%d %d %d",&number1,&number2,&number3);

    //By using if-else
	if((number1>number2) && (number1>number3))
	{
		printf("The number %d is greater than %d and %d\n",number1,number2,number3);
	}
	else if((number2>number1) && (number2>number3))
	{
		printf("The number %d is greater than %d and %d\n",number2,number1,number3);
	}
	else
	{
		printf("The number %d is greater than %d and %d\n",number3,number1,number2);
	}

	//By using conditional operator
	result=(number1>number2?(number1>number3?number1:number3):number2>number3?number2:number3);
	printf("%d is greater\n",result);
	return 0;
}
