#include<stdio.h>
#include<math.h>

int power(int,int);
int main()
{
	int base,exp,num;
	printf("Enter the value of base: \n");
	scanf("%d",&base);

	printf("Enter the value of exp: \n");
	scanf("%d",&exp);
	
	num=power(base,exp);

	printf("The output will be: %d \n",num);


	return 0;
}

int power(int base,int exp)
{
	int num=pow(base,exp);
	return num;
}
