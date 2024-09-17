#include <stdio.h>
#include<string.h>

// Define the structure for student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() 
{
    struct Student student;

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

     printf("Enter name: ");
//    fgets(student.name, sizeof(student.name), stdin);
     scanf("%*c%s",student.name);
	
    size_t length = strlen(student.name);
    if (length > 0 && student.name[length - 1] == '\n') 
	{
        student.name[length - 1] = '\0';
    }

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}

