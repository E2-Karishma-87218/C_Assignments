#include <stdio.h>
#include<string.h>

int my_strncmp(const char *str1, const char *str2, size_t n) 
{
    while (n > 0 && *str1 && *str2) 
	{
        if (*str1 != *str2) {
            return (unsigned char)*str1 - (unsigned char)*str2;
        }
        str1++;
        str2++;
        n--;
    }

    
    if (n > 0)
	{
        return (unsigned char)*str1 - (unsigned char)*str2;
    }

    return 0; 
}

int main() 
{
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    const char *str3 = "Hello, C!";


    int result1 = my_strncmp(str1, str2, 5);

    int result2 = my_strncmp(str1, str3, 5);

    printf("Comparison of first 5 characters of str1 and str2: %d\n", result1);
    printf("Comparison of first 5 characters of str1 and str3: %d\n", result2);

    return 0;
}

