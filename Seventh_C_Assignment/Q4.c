#include <stdio.h>
#include <string.h>

void accept_names(char names[5][50]) {
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Student %d: ", i + 1);
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
}


void print_names(char names[5][50]) 
{
    printf("\nStudent names are:\n");
    for (int i = 0; i < 5; ++i) 
	{
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}


void sort_names(char names[5][50]) 
{
    char temp[50];
    for (int i = 0; i < 5 - 1; ++i) 
	{
        for (int j = i + 1; j < 5; ++j) 
		{
            if (strcmp(names[i], names[j]) > 0) 
			{
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() 
{
    char names[5][50];

    accept_names(names);

     print_names(names);

     sort_names(names);

     printf("\nStudent names after sorting:\n");
    print_names(names);

    return 0;
}

