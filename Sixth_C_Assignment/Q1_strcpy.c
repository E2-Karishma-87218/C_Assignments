#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	printf("Enter the string: ");
	scanf("%[^\n]s",str1);

	strcpy(str2,str1);

	printf("%s\n",str1);
	printf("%s\n",str2);

	return 0;
}
