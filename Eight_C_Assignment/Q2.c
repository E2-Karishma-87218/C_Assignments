#include <stdio.h>
#include<string.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};


void inputStudentInfo(struct Student *student) 
{
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter name: ");
    scanf("%*c%s",student->name);

     size_t length = strlen(student->name);
    if (length > 0 && student->name[length - 1] == '\n') 
	{
        student->name[length - 1] = '\0';
    }

    printf("Enter marks: ");
    scanf("%f", &student->marks);
}

void printStudentInfo(const struct Student *student)
{
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
}

int main() 
{
    struct Student student;

     inputStudentInfo(&student);

     printStudentInfo(&student);

    return 0;
}

