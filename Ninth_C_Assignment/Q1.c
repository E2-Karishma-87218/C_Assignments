#include <stdio.h>

void readFile(const char *filename) 
{
    FILE *file = fopen(filename, "r");  
    if (file == NULL) 
	{  
        perror("Error opening file");  
        return;
    }

    int ch;  
    while ((ch = fgetc(file)) != EOF) 
	{  
		putchar(ch);  
    }

    fclose(file);  
}

int main() {
    const char *filename = "file.txt";  
    
     readFile(filename);

    return 0;
}

