#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

typedef enum {
	WRITE_RECORD = 1,
	READ_RECORD,
	SEARCH_BY_ROLL,
	SEARCH_BY_NAME,
	MODIFY_RECORD,
	REMOVE_RECORD,
	EXIT
} MenuOption;

typedef struct {
	int rollNumber;
	char name[MAX_NAME_LENGTH];
	float marks;
} Student;

void writeStudentRecord(FILE *file, const Student *student) 
{
	fwrite(student, sizeof(Student), 1, file);
}

void readStudentRecords(FILE *file) 
{
	Student student;
	rewind(file);
	while (fread(&student, sizeof(Student), 1, file)) 
	{
		printf("Roll Number: %d\n", student.rollNumber);
		printf("Name: %s\n", student.name);
		printf("Marks: %.2f\n\n", student.marks);
	}
}

Student* searchByRollNumber(FILE *file, int rollNumber) 
{
	Student student;
	rewind(file);
	while (fread(&student, sizeof(Student), 1, file)) 
	{
		if (student.rollNumber == rollNumber) 
		{
			Student *result = malloc(sizeof(Student));
			*result = student;
			return result;
		}
	}
	return NULL;
}

Student* searchByName(FILE *file, const char *name) 
{
	Student student;
	rewind(file);
	while (fread(&student, sizeof(Student), 1, file)) 
	{
		if (strcmp(student.name, name) == 0) 
		{
			Student *result = malloc(sizeof(Student));
			*result = student;
			return result;
		}
	}
	return NULL;
}

void modifyStudentRecord(FILE *file, int rollNumber, const Student *newData) 
{
	Student student;
	long pos;
	rewind(file);
	while ((pos = ftell(file)) >= 0 && fread(&student, sizeof(Student), 1, file)) 
	{
		if (student.rollNumber == rollNumber) 
		{
			fseek(file, pos, SEEK_SET);
			fwrite(newData, sizeof(Student), 1, file);
			return;
		}
	}
	printf("Student with Roll Number %d not found.\n", rollNumber);
}

void removeStudentRecord(FILE *file, int rollNumber) 
{
	FILE *tempFile = fopen("temp.dat", "wb");
	if (!tempFile) {
		perror("Error opening temporary file");
		return;
	}

	Student student;
	rewind(file);
	while (fread(&student, sizeof(Student), 1, file)) 
	{
		if (student.rollNumber != rollNumber) 
		{
			fwrite(&student, sizeof(Student), 1, tempFile);
		}
	}
	fclose(file);
	fclose(tempFile);
	remove("student.dat");
	rename("temp.dat", "student.dat");
}


void menu() 
{
	printf("Student Database Menu:\n");
	printf("1. Write Student Record\n");
	printf("2. Read All Student Records\n");
	printf("3. Search Student by Roll Number\n");
	printf("4. Search Student by Name\n");
	printf("5. Modify Student Record\n");
	printf("6. Remove Student Record\n");
	printf("7. Exit\n");
}

int main() 
{
	FILE *file;
	MenuOption option;
	Student student;
	int rollNumber;
	char name[MAX_NAME_LENGTH];

	file = fopen("student.dat", "rb+");
	if (!file) 
	{
		file = fopen("student.dat", "wb+");
		if (!file) 
		{
			perror("Error opening file");
			return 1;
		}
	}

	while (1) 
	{
		menu();
		printf("Enter your choice: ");
		scanf("%d", &option);

		switch (option) 
		{
			case WRITE_RECORD:
				printf("Enter Roll Number: ");
				scanf("%d", &student.rollNumber);
				printf("Enter Name: ");
				scanf("%*c%s",student.name);
 
				printf("Enter Marks: ");
				scanf("%f", &student.marks);
				writeStudentRecord(file, &student);
				break;

			case READ_RECORD:
				readStudentRecords(file);
				break;

			case SEARCH_BY_ROLL:
				printf("Enter Roll Number to search: ");
				scanf("%d", &rollNumber);
				Student *foundStudent = searchByRollNumber(file, rollNumber);
				if (foundStudent) 
				{
					printf("Student found:\n");
					printf("Roll Number: %d\n", foundStudent->rollNumber);
					printf("Name: %s\n", foundStudent->name);
					printf("Marks: %.2f\n", foundStudent->marks);
					free(foundStudent);
				}
				else 
				{
					printf("Student with Roll Number %d not found.\n", rollNumber);
				}
				break;

			case SEARCH_BY_NAME:
				printf("Enter Name to search: ");
				fgets(name, MAX_NAME_LENGTH, stdin);
				foundStudent = searchByName(file, name);
				if (foundStudent) 
				{
					printf("Student found:\n");
					printf("Roll Number: %d\n", foundStudent->rollNumber);
					printf("Name: %s\n", foundStudent->name);
					printf("Marks: %.2f\n", foundStudent->marks);
					free(foundStudent);
				}
				else 
				{
					printf("Student with Name %s not found.\n", name);
				}
				break;

			case MODIFY_RECORD:
				printf("Enter Roll Number of student to modify: ");
				scanf("%d", &rollNumber);
				printf("Enter new Name: ");
				fgets(student.name, MAX_NAME_LENGTH, stdin);

				printf("Enter new Marks: ");
				scanf("%f", &student.marks);
				student.rollNumber = rollNumber;
				modifyStudentRecord(file, rollNumber, &student);
				break;

			case REMOVE_RECORD:
				printf("Enter Roll Number of student to remove: ");
				scanf("%d", &rollNumber);
				removeStudentRecord(file, rollNumber);
				break;

			case EXIT:
				fclose(file);
				return 0;

			default:
				printf("Invalid option. Please try again.\n");
		}
	}

	return 0;
}

