#include <stdio.h>
#include<string.h>

union Result {
	char grade;    
	float percentage; 
};

struct Student {
	char name[50];
	int standard;
	union Result result;
};


void inputStudentInfo(struct Student *student) 
{
	printf("Enter student name: ");
	fgets(student->name, sizeof(student->name), stdin);
	size_t length = strlen(student->name);
	if (length > 0 && student->name[length - 1] == '\n') 
	{
		student->name[length - 1] = '\0';
	}

	printf("Enter standard (1-12): ");
	scanf("%d", &student->standard);

	if(student->standard <= 4) 
	{
		printf("Enter grade (A, B, C): ");
		scanf("%*c%c",&student->result.grade);

	}
	else 
	{
		printf("Enter percentage (0-100): ");
		scanf("%f", &student->result.percentage);

	}
}

void printStudentInfo(const struct Student *student) 
{
	printf("\nStudent Information:\n");
	printf("Name: %s\n", student->name);
	printf("Standard: %d\n", student->standard);
	if (student->standard <= 4) 
	{
		printf("Grade: %c\n", student->result.grade);
	} else {
		printf("Percentage: %.2f%%\n", student->result.percentage);
	}
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

