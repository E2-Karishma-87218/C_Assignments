#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "This is a simple example";
    const char *delim = " ";

    char *token = strtok(str, delim);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}

