#include <stdio.h>
#include <ctype.h>  
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

char* my_strcpy(char *dest, const char *src) 
{
	char *d = dest;
	while ((*d++ = *src++)) 
	{
		; 
	}
	return dest;
}


char* my_strcat(char *dest, const char *src) 
{
	char *d = dest;
	while (*d) 
	{
		d++;
	}
	while ((*d++ = *src++)) 
	{
		; 
	}
	return dest;
}

int my_strcmp(const char *str1, const char *str2) 
{
	while (*str1 && (*str1 == *str2)) 
	{
		str1++;
		str2++;
	}
	return *(unsigned char *)str1 - *(unsigned char *)str2;
}


int my_stricmp(const char *str1, const char *str2) 
{
	while (*str1 && tolower((unsigned char)*str1) == tolower((unsigned char)*str2)) 
	{
		str1++;
		str2++;
	}
	return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}


char* my_strrev(char *str) 
{
	char *start = str;
	char *end = str;
	char temp;


	while (*end) 
	{
		end++;
	}
	end--; 


	while (start < end) 
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	return str;
}


char* my_strchr(const char *str, int ch) 
{
	while (*str != (char)ch) 
	{
		if (*str == '\0') 
		{

			return NULL; 
		}
		str++;
	}
	return (char *)str;
}


char* my_strstr(const char *str, const char *substr) 
{
	if (*substr == '\0') 
	{
		return (char *)str; 
	}

	while (*str) 
	{
		const char *s1 = str;
		const char *s2 = substr;


		while (*s2 && *s1 == *s2) 
		{
			s1++;
			s2++;
		}

		if (*s2 == '\0') 
		{
			return (char *)str; 
		}

		str++;
	}
	return NULL; 
}

int main() {
	char str1[100], str2[100];
	char result[200];

	strcpy(str1, "Hello, World!");
	printf("Length of \"%s\": %zu\n", str1, my_strlen(str1));


	strcpy(str1, "Source string");
	my_strcpy(str2, str1);
	printf("Copied string: %s\n", str2);

	strcpy(result, "Hello, ");
	my_strcat(result, "World!");
	printf("Concatenated string: %s\n", result);

	printf("Comparing \"hello\" and \"hello\": %d\n", my_strcmp("hello", "hello"));
	printf("Comparing \"hello\" and \"world\": %d\n", my_strcmp("hello", "world"));

	printf("Case-insensitive comparing \"hello\" and \"HELLO\": %d\n", my_stricmp("hello", "HELLO"));
	printf("Case-insensitive comparing \"hello\" and \"WORLD\": %d\n", my_stricmp("hello", "WORLD"));

	strcpy(str1, "Reverse me!");
	printf("Original string: %s\n", str1);
	my_strrev(str1);
	printf("Reversed string: %s\n", str1);

	strcpy(str1, "Find character");
	printf("First occurrence of 'a': %s\n", my_strchr(str1, 'a'));

	strcpy(str1, "Find the substring in this string");
	strcpy(str2, "substring");
	printf("First occurrence of \"%s\": %s\n", str2, my_strstr(str1, str2));

	return 0;
}

