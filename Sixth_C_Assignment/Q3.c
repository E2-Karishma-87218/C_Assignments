#include <stdio.h>
#include<string.h>

void removeChar(char *str, char charToRemove) 
{
	int i, j = 0;
	int length = 0;

	while (str[length] != '\0') 
	{
		length++;
	}


	for (i = 0; i < length; i++) 
	{
		if (str[i] != charToRemove) 
		{
			str[j++] = str[i]; 
		}
	}

	str[j] = '\0'; 
}

int main() 
{
	char str[100];
	char charToRemove;

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = '\0';

	printf("Enter the character to remove: ");
	scanf("%c", &charToRemove);

	removeChar(str, charToRemove);

	printf("String after removing '%c': %s\n", charToRemove, str);

	return 0;
}

