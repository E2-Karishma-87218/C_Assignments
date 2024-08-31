#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	
	printf("The number in character format is: %c\n",number);
	printf("The number in decimal format is: %d\n",number);
	printf("The number in hexadecimal format is: %x\n",number);
	printf("The number in octal format is: %o\n",number); 
	return 0;
}
