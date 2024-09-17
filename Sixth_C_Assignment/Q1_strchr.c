#include <stdio.h>
#include <string.h>

int main() 
{
    const char *str = "Hello, Welcome!";
    char ch = 'm';
    char *ptr = strchr(str, ch);

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

