#include <stdio.h>
#include <string.h>

int main() 
{
    const char *haystack = "This is a simple example";
    const char *needle = "simple";
    char *ptr = strstr(haystack, needle);

    if (ptr) 
	{
        printf("Substring \"%s\" found at position: %ld\n", needle, ptr - haystack);
    }
	else
	{
        printf("Substring \"%s\" not found.\n", needle);
    }

    return 0;
}

