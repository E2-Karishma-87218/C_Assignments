#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	int rollNumber;
	char name[50];
	float marks;
};


int compareByRollNumber(const void *a, const void *b) 
{
	struct Student *studentA = (struct Student *)a;
	struct Student *studentB = (struct Student *)b;
	return studentA->rollNumber - studentB->rollNumber;
}

int compareByName(const void *a, const void *b) 
{
	struct Student *studentA = (struct Student *)a;
	struct Student *studentB = (struct Student *)b;
	return strcmp(studentA->name, studentB->name);
}

void inputStudentArray(struct Student students[], int count) 
{
	for (int i = 0; i < count; i++) 
	{
		printf("\nEnter information for student %d:\n", i + 1);

		printf("Enter roll number: ");
		scanf("%d", &students[i].rollNumber);

		while (getchar() != '\n');

		printf("Enter name: ");
		fgets(students[i].name, sizeof(students[i].name), stdin);


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
	for (int i = 0; i < count; i++) {
		printf("\nStudent %d:\n", i + 1);
		printf("Roll Number: %d\n", students[i].rollNumber);
		printf("Name: %s\n", students[i].name);
		printf("Marks: %.2f\n", students[i].marks);
	}
}

void sortByRollNumber(struct Student students[], int count) 
{
	qsort(students, count, sizeof(struct Student), compareByRollNumber);
}

void sortByName(struct Student students[], int count) 
{
	qsort(students, count, sizeof(struct Student), compareByName);
}

int main() 
{
	int numStudents;

	printf("Enter the number of students: ");
	scanf("%d", &numStudents);

	struct Student students[numStudents];

	inputStudentArray(students, numStudents);

	printf("\nUnsorted Student Information:");
	printStudentArray(students, numStudents);

	sortByRollNumber(students, numStudents);
	printf("\nStudent Information Sorted by Roll Number:");
	printStudentArray(students, numStudents);

	sortByName(students, numStudents);
	printf("\nStudent Information Sorted by Name:");
	printStudentArray(students, numStudents);

	return 0;
}


