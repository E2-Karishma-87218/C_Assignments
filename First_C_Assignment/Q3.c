#include<stdio.h>
int main()
{

	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);

	int asc;

	printf("The ASCII value of %c is : %d\n",ch,ch);
	printf("The Octal value of %d is: %o\n",ch,ch);
	printf("The Hexadecimal value of %d is: %x\n",ch,ch);

	printf("Enter the ASCII value: ");
	scanf("%d",&asc);

	printf("The ASCII value %d holds character: %c\n",asc,asc);
	return 0;
}
