#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STUDENTS 5
#define MAX_NAME_LENGTH 100


void acceptNames(char *names[]) 
{
    for (int i = 0; i < NUM_STUDENTS; i++) 
	{
        names[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (names[i] == NULL) 
		{
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter name of student %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        
		names[i][strcspn(names[i], "\n")] = '\0';
    }
}

void printNames(char *names[]) 
{
    for (int i = 0; i < NUM_STUDENTS; i++) 
	{
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}

int compareNames(const void *a, const void *b) 
{
    return strcmp(*(const char **)a, *(const char **)b);
}

void sortNames(char *names[]) 
{
    qsort(names, NUM_STUDENTS, sizeof(char *), compareNames);
}

void freeNames(char *names[]) 
{
    for (int i = 0; i < NUM_STUDENTS; i++) 
	{
        free(names[i]);
    }
}

int main() 
{
    char *names[NUM_STUDENTS];

    acceptNames(names);

    printf("\nNames before sorting:\n");
    printNames(names);

    sortNames(names);

    printf("\nNames after sorting:\n");
    printNames(names);

    freeNames(names);

    return 0;
}

