#include <stdio.h>
#include<string.h>

char* my_strcat(char *dest, const char *src) 
{
    char *original_dest = dest;

    
    while (*dest) 
	{
        dest++;
    }

      while (*src) 
	{
        *dest++ = *src++;
    }

    *dest = '\0';

    return original_dest;
}

int main() 
{
    char dest[100] = "Hello, ";
    const char *src = "World!";

    my_strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}

