#include <stdio.h>
#include <string.h>

int main() 
{
    const char *str1 = "Hello, There!";
    const char *str2 = "Hello, There!";
    const char *str3 = "Hello, Welcome!";
    
    int result1 = strncmp(str1, str2, 5);

    int result2 = strncmp(str1, str3, 5);

    printf("Comparison of first 5 characters of str1 and str2: %d\n", result1);
    printf("Comparison of first 5 characters of str1 and str3: %d\n", result2);

    return 0;
}

