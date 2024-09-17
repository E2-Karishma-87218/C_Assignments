#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};


void inputStudentArray(struct Student students[], int count) 
{
    for (int i = 0; i < count; i++) 
	{
        printf("\nEnter information for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);    

        printf("Enter name: ");
		scanf("%*c%s",students[i].name);

         size_t length = strlen(students[i].name);
        if (length > 0 && students[i].name[length - 1] == '\n') 
		{
            students[i].name[length - 1] = '\0';
        }

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

    
        }
}

void printStudentArray(const struct Student students[], int count) 
{
    printf("\nStudent Information:\n");
    for (int i = 0; i < count; i++) 
	{
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() 
{
    int numStudents;

    printf("Enter the number of students: ");
 	scanf("%d", &numStudents);

	struct Student students[numStudents];

    inputStudentArray(students, numStudents);

    printStudentArray(students, numStudents);

    return 0;
}

