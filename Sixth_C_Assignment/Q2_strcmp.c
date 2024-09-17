#include <stdio.h>
#include<string.h>

int my_strcmp(const char *str1, const char *str2) 
{
    while (*str1 && *str2) 
	{
        if (*str1 != *str2) 
		{
            return (unsigned char)*str1 - (unsigned char)*str2;
        }
        str1++;
        str2++;
    }

    return (unsigned char)*str1 - (unsigned char)*str2;
}

int main() 
{
    const char *string1 = "Hello";
    const char *string2 = "Hello";
    const char *string3 = "World";
    const char *string4 = "Hell";


    printf("Comparison of \"%s\" and \"%s\": %d\n", string1, string2, my_strcmp(string1, string2));
    printf("Comparison of \"%s\" and \"%s\": %d\n", string1, string3, my_strcmp(string1, string3));
    printf("Comparison of \"%s\" and \"%s\": %d\n", string1, string4, my_strcmp(string1, string4));

    return 0;
}

