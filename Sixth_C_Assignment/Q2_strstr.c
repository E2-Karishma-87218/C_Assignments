#include <stdio.h>
#include<string.h>

char* my_strstr(const char *haystack, const char *needle) 
{
    if (*needle == '\0') 
	{
        return (char *)haystack; 
    }

    while (*haystack) 
	{
        const char *h = haystack;
        const char *n = needle;

          while (*h && *n && *h == *n) 
		{
            h++;
            n++;
        }

        
        if (*n == '\0') 
		{
            return (char *)haystack;
        }

        haystack++;
    }

    return NULL; 
}

int main() 
{
    const char *haystack = "This is a simple example";
    const char *needle = "simple";
    char *ptr = my_strstr(haystack, needle);

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

