#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str1[20],str2[20];
	int result;

	printf("Enter the 1st string: ");
	scanf("%[^\n]s",str1);

	printf("Enter the 2nd string: ");
	scanf("%*c%[^\n]s",str2);

	result=stricmp(str1,str2);

	if(result==0)
		printf("Strings are equal\n");
	else if(result>0)
		printf("String1 is greater than string2\n");
	else
		printf("String1 is less than String2\n");
	return 0;
}
