#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	size_t len;
	printf("Enter the string: ");
	scanf("%[^\n]",str);

	printf("String=%s\n",str);

	//strlen
	len=strlen(str);
	printf("Length=%d\n",len);

	return 0;
}
