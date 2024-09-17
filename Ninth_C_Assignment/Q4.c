#include <stdio.h>
#include <stdlib.h> 

#define MAX_LINE_LENGTH 1024

void copyFileLineByLine(FILE *source, FILE *destination) 
{
    char buffer[MAX_LINE_LENGTH];  
    
    
	while (fgets(buffer, sizeof(buffer), source) != NULL) 
	{
        fputs(buffer, destination);
    }
}

int main(int argc, char *argv[]) 
{
    
    if (argc != 3) 
	{
        fprintf(stderr, " %s source file destination1 file\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *sourceFilename = argv[1];        
    const char *destinationFilename = argv[2];   
    FILE *sourceFile, *destinationFile;

     sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) 
	{
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

      destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) 
	{
        perror("Error opening destination file");
        fclose(sourceFile);  
        return EXIT_FAILURE;
    }

      copyFileLineByLine(sourceFile, destinationFile);

     fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully from %s to %s\n", sourceFilename, destinationFilename);

    return EXIT_SUCCESS;
}

