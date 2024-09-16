#include<stdio.h>
#include<string.h>

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
	else if(result
		printf("String
	return 0;
}
