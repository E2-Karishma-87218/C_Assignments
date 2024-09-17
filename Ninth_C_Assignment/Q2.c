#include <stdio.h>

#define MAX_INPUT_SIZE 1024

void copyFile(FILE *source, FILE *destination) 
{
	int ch;  

	while ((ch = fgetc(source)) != EOF) 
	{
		fputc(ch, destination);
	}
}

int main() {
	const char *sourceFilename = "file.txt";     
	const char *destinationFilename = "destination.txt";  
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

	copyFile(sourceFile, destinationFile);


	fclose(sourceFile);
	fclose(destinationFile);


	destinationFile = fopen(destinationFilename, "r");
	if (destinationFile == NULL) 
	{
		perror("Error reopening destination file");
		return 1;
	}


	printf("Contents of the destination file:\n");
	int ch;
	while ((ch = fgetc(destinationFile)) != EOF) 
	{
		putchar(ch);
	}
	printf("\n");

	fclose(destinationFile);

	printf("Enter text to append to the destination file:\n");

	destinationFile = fopen(destinationFilename, "a");
	if (destinationFile == NULL) 
	{
		perror("Error opening destination file for appending");
		return 1;
	}


	char buffer[MAX_INPUT_SIZE];
	while (fgets(buffer, sizeof(buffer), stdin) != NULL) 
	{
		fputs(buffer, destinationFile);
	}

	fclose(destinationFile);

	return 0;
}

