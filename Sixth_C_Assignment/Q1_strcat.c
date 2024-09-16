#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	printf("Enter the string: ");
	scanf("%[^\n]s",str1);

	printf("Enter the string for str2: ");
	scanf("%*c%[^\n]s",str2);

	strcat(str2,str1);

	printf("Concatenated string : %s\n",str2);
	return 0;
}
