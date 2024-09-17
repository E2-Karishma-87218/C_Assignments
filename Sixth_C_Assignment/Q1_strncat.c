#include <stdio.h>
#include <string.h>

int main() 
{
    char dest[50] = "Hello, ";
    const char *src = "World!";
    
    strncat(dest, src, 3);

    printf("Resulting string: %s\n", dest);  

    return 0;
}

