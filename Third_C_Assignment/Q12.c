#include<stdio.h>
int main()
{
	int base,index,power=1;

	printf("Enter the base value: ");
	scanf("%d",&base);

	printf("Enter the index value: ");
	scanf("%d",&index);

	for(int i=1;i<=index;i++)
	{
		power=power *base;
	}
	printf("%d ^ %d = %d\n",base,index,power);

	return 0;

}
