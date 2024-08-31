#include<stdio.h>
int main()
{
   int num1,num2,result;
   printf("Enter the two numbers: ");
   scanf("%d %d",&num1,&num2);

   //1.By using if-else
   if(num1>num2)
   {
		printf("The number %d is greater than %d\n",num1,num2);
   }
   else
   {
		printf("The number %d is greater than %d\n",num2,num1);
   }

   //2.By using conditional operator
   result=(num1>num2?num1:num2);

   printf("The number which is greater among %d and %d is: %d\n",num1,num2,result);
	return 0;
}
