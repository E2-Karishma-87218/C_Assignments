#include <stdio.h>

int main() 
{
    char start = 'A';  
    char end = 'D';    

     for (char rowChar = start; rowChar <= end; rowChar++) 
	{
            for (char ch = rowChar; ch <= end; ch++) 
			{
            printf("%c ", ch);
            }
                printf("\n");
    }

    return 0;
}
    

