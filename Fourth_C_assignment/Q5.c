#include<stdio.h>

void print_char(char c,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%c\t",c);
	}
	printf("\n");
}

int main()
{
	char ch;
	int num;

	printf("Enter the character : \n");
	scanf("%c",&ch);

	printf("Enter the number of times you want to print the character: \n");
	scanf("%d",&num);

	print_char(ch,num);

	return 0;
}
