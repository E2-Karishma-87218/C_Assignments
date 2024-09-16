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

	result=strcmp(str1,str2);
	printf("result=%d\n",result);

	if(result==0)
		printf("String 1 and string 2 are equal\n");
	else if(result<0)
		printf("String 1 is less than string 2\n");
	else
		printf("String 1 is greater than string 2\n");

	return 0;
}
