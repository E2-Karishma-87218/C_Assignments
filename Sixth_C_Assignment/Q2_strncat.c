#include <stdio.h>
#include<string.h>


char* my_strncat(char *dest, const char *src, size_t n) 
{
	char *d = dest;

	while (*d) 
	{
		d++;
	}


	while (n > 0 && *src) 
	{
		*d++ = *src++;
		n--;
	}


	*d = '\0';

	return dest;
}

int main() 
{
	char dest[50] = "Hello, ";
	const char *src = "World!";


	my_strncat(dest, src, 3);

	printf("Resulting string: %s\n", dest);  

	return 0;
}

