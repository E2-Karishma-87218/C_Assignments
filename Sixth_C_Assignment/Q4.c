#include <stdio.h>
#include <string.h>

int isCharInString(char c, const char *str) 
{
	while (*str) 
	{
		if (c == *str) 
		{
			return 1;
		}
		str++;
	}
	return 0; 
}
void removeChars(char *string2, const char *string1) 
{
	int i, j = 0;


	for (i = 0; string2[i] != '\0'; i++) 
	{

		if (!isCharInString(string2[i], string1)) 
		{
			string2[j++] = string2[i];
		}
	}

	string2[j] = '\0';
}

int main() 
{
	char string1[100];
	char string2[100];

	printf("Enter the first string (characters to remove): ");
	fgets(string1, sizeof(string1), stdin);

	string1[strcspn(string1, "\n")] = '\0';

	printf("Enter the second string (from which characters will be removed): ");
	fgets(string2, sizeof(string2), stdin);

	string2[strcspn(string2, "\n")] = '\0';



	removeChars(string2, string1);

	printf("String after removing characters: %s\n", string2);

	return 0;
}

