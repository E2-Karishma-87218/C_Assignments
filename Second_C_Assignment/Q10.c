#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character: \n");
	scanf("%c",&ch);

	if(ch>='A' &&  ch<='Z')
	{
		printf("%d",ch);
	}
	return 0;
}
