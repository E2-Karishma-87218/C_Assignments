#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void findAndReplace(char *source, const char *find, const char *replace) 
{
	char buffer[1024]; 
	char *pos;
	int find_len = strlen(find);
	int replace_len = strlen(replace);

	buffer[0] = '\0';

	while ((pos = strstr(source, find)) != NULL) 
	{

		strncpy(buffer, source, pos - source);
		buffer[pos - source] = '\0';


		strcat(buffer, replace);


		strcat(buffer, pos + find_len);

		strcpy(source, buffer);
	}
}

int main() 
{
	char source[1024];
	char find[100];
	char replace[100];


	printf("Enter source string: ");
	fgets(source, sizeof(source), stdin);
	source[strcspn(source, "\n")] = '\0'; 

	printf("Enter string to find: ");
	fgets(find, sizeof(find), stdin);
	find[strcspn(find, "\n")] = '\0'; 

	printf("Enter replacement string: ");
	fgets(replace, sizeof(replace), stdin);
	replace[strcspn(replace, "\n")] = '\0'; 

	findAndReplace(source, find, replace);

	printf("Resulting string: %s\n", source);

	return 0;
}

