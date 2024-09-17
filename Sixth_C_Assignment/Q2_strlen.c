#include <stdio.h>
#include<string.h>

size_t my_strlen(const char *str) 
{
    const char *s = str;
    while (*s) 
	{
        s++;
    }
    return s - str;
}

int main() 
{
    const char *string = "Hello, World!";
    size_t length = my_strlen(string);

    printf("The length of the string \"%s\" is: %zu\n", string, length);

    return 0;
}

