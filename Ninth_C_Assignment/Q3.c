#include <stdio.h>

#define MAX_LINE_LENGTH 1024

void copyFileLineByLine(FILE *source, FILE *destination) 
{
	char buffer[MAX_LINE_LENGTH];  

	while (fgets(buffer, sizeof(buffer), source) != NULL) 
	{
		fputs(buffer, destination);
	}
}

int main() 
{
	const char *sourceFilename = "source.txt";     
	const char *destinationFilename = "destination1.txt";
	FILE *sourceFile, *destinationFile;

	sourceFile = fopen(sourceFilename, "r");
	if (sourceFile == NULL) 
	{
		perror("Error opening source file");
		return 1;
	}

	destinationFile = fopen(destinationFilename, "w");
	if (destinationFile == NULL) 
	{
		perror("Error opening destination file");
		fclose(sourceFile);  
		return 1;
	}

	copyFileLineByLine(sourceFile, destinationFile);

	fclose(sourceFile);
	fclose(destinationFile);

	printf("File copied successfully from %s to %s\n", sourceFilename, destinationFilename);

	return 0;
}

