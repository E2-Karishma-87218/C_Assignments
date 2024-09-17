#include <stdio.h>
#include<string.h>

char* my_strcpy(char *dest, const char *src) 
{
	char *original_dest = dest;

	while (*src) 
	{
		*dest++ = *src++;
	}


	*dest = '\0';

	return original_dest;
}

int main() 
{
	char source[] = "Hello, World!";
	char destination[50]; 

	my_strcpy(destination, source);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return 0;
}

