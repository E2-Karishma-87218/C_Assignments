#include <stdio.h>

#define MAX_NAME_LENGTH 100

typedef struct {
	int rollNumber;
	char name[MAX_NAME_LENGTH];
	float marks;
} Student;

void writeStudentRecord(FILE *file, const Student *student) 
{
	fprintf(file, "%d %s %.2f\n", student->rollNumber, student->name, student->marks);
}


void readStudentRecord(FILE *file, Student *student) 
{
	fscanf(file, "%d %s %f", &student->rollNumber, student->name, &student->marks);
}

int main() 
{
	const char *filename = "students.txt";
	FILE *file;

	Student student1 = {1, "abc", 85.5};
	Student student2;

	file = fopen(filename, "w");
	if (file == NULL) 
	{
		perror("Error opening file for writing");
		return 1;
	}
	writeStudentRecord(file, &student1);
	fclose(file);


	file = fopen(filename, "r");
	if (file == NULL) 
	{
		perror("Error opening file for reading");
		return 1;
	}
	readStudentRecord(file, &student2);
	fclose(file);

	printf("Student Record Read from File:\n");
	printf("Roll Number: %d\n", student2.rollNumber);
	printf("Name: %s\n", student2.name);
	printf("Marks: %.2f\n", student2.marks);

	return 0;
}

