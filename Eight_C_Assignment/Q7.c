#include <stdio.h>
#include <string.h>


struct Student {
	int standard;   
	int gender;     
	int age;        
	char name[50];  
};


void inputStudentInfo(struct Student *student) 
{
	printf("Enter student name: ");
	scanf("%*c%s",student->name);

	size_t length = strlen(student->name);
	if (length > 0 && student->name[length - 1] == '\n') 
	{
		student->name[length - 1] = '\0';
	}

	printf("Enter standard (1-12): ");
	scanf("%d", &student->standard);

	if (student->standard < 1 || student->standard > 12) 
	{
		printf("Invalid standard. Setting to 1.\n");
		student->standard = 1;
	}

	printf("Enter gender (0 for male, 1 for female): ");
	scanf("%d", &student->gender);

	if (student->gender < 0 || student->gender > 1) 
	{
		printf("Invalid gender. Setting to 0 (male).\n");
		student->gender = 0;
	}

	printf("Enter age (0-32): ");
	scanf("%d", &student->age);

	if (student->age < 0 || student->age > 32) 
	{
		printf("Invalid age. Setting to 32.\n");
		student->age = 32;
	}
}

void printStudentInfo(const struct Student *student) 
{
	printf("\nStudent Information:\n");
	printf("Name: %s\n", student->name);
	printf("Standard: %d\n", student->standard);
	printf("Gender: %s\n", student->gender == 0 ? "Male" : "Female");
	printf("Age: %d\n", student->age);
}

int main() 
{
	struct Student students[3];

	for (int i = 0; i < 3; i++) 
	{
		printf("\nEnter information for student %d:\n", i + 1);
		inputStudentInfo(&students[i]);
	}


	for (int i = 0; i < 3; i++) 
	{
		printStudentInfo(&students[i]);
	}

	return 0;
}

