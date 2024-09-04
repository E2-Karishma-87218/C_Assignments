#include<stdio.h>
void swap(int *ptr1,int *ptr2);

int main()
{
	int n1,n2;
	printf("Enter the number1 and number2: \n");
	scanf("%d%d",&n1,&n2);

	swap(&n1,&n2);

	return 0;
}

void swap(int *ptr1,int *ptr2)
{
	printf("Before swap: number1:%d, number2:%d\n",*ptr1,*ptr2);
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("After swap: number1:%d, number2:%d\n",*ptr1,*ptr2);
}
