#include <stdio.h>
#include<string.h>
char* my_strtok(char *str, const char *delim) 
{
	static char *last;
	if (str) 
	{
		last = str;
	}
	if (!last) 
	{
		return NULL;
	}

	char *start = last;
	while (*start && strchr(delim, *start)) 
	{
		start++;
	}

	if (*start == '\0') 
	{
		last = NULL;
		return NULL;
	}

	char *end = start;

	while (*end && !strchr(delim, *end)) 
	{
		end++;
	}

	if (*end) 
	{
		*end = '\0';
		last = end + 1;
	}
	else
	{
		last = NULL;
	}

	return start;
}

int main() 
{
	char str[] = "This is a simple example";
	const char *delim = " ";

	char *token = my_strtok(str, delim);
	while (token != NULL) 
	{
		printf("Token: %s\n", token);
		token = my_strtok(NULL, delim);
	}

	return 0;
}

