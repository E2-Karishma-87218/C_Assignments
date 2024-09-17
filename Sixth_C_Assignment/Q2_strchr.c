#include <stdio.h>
#include<string.h>

char* my_strchr(const char *str, int ch) 
{
    while (*str) 
	{
        if (*str == (char)ch) 
		{
            return (char *)str;
        }
        str++;
    }
    
    if (*str == (char)ch) 
	{
        return (char *)str;
    }
    return NULL; 
}

int main() 
{
    const char *str = "Hello, World!";
    char ch = 'W';
    char *ptr = my_strchr(str, ch);

    if (ptr) 
	{
        printf("Character '%c' found at position: %ld\n", ch, ptr - str);
    } 
	else 
	{
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}


