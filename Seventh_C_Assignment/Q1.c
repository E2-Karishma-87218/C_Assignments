#include <stdio.h>

void accept_arr(int rows, int cols, int arr[rows][cols]);
void print_arr(int rows, int cols, int arr[rows][cols]);

int main()
{
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols]; 

    accept_arr(rows, cols, arr); 
    print_arr(rows, cols, arr); 

    return 0;
}

void accept_arr(int rows, int cols, int arr[rows][cols]) 
{
    printf("Enter the elements row by row:\n");
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j)
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_arr(int rows, int cols, int arr[rows][cols]) 
{
    printf("The 2-D array is:\n");
    for (int i = 0; i < rows; ++i) 
	{
        for (int j = 0; j < cols; ++j)
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


