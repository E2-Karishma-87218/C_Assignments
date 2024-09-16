#include <stdio.h>

int sum_row(int matrix[3][3], int row);
int sum_column(int matrix[3][3], int col);

int main() {
    int matrix[3][3];
    int row, col;

   printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Enter the row index to calculate sum (0-2): ");
    scanf("%d", &row);
    int row_sum = sum_row(matrix, row);
    if (row_sum != -1) 
	{
        printf("Sum of elements in row %d: %d\n", row, row_sum);
    }


    printf("Enter the column index to calculate sum (0-2): ");
    scanf("%d", &col);
    int col_sum = sum_column(matrix, col);
    if (col_sum != -1) 
	{
        printf("Sum of elements in column %d: %d\n", col, col_sum);
    }

    return 0;
}

int sum_row(int matrix[3][3], int row) 
{
    int sum = 0;
    if (row < 0 || row >= 3) 
	{
        printf("Invalid row index.\n");
        return -1; 
    }
    for (int j = 0; j < 3; ++j) 
	{
        sum += matrix[row][j];
    }
    return sum;
}

int sum_column(int matrix[3][3], int col) 
{
    int sum = 0;
    if (col < 0 || col >= 3) 
	{
        printf("Invalid column index.\n");
        return -1; 
	}
    for (int i = 0; i < 3; ++i) 
	{
        sum += matrix[i][col];
    }
    return sum;
}

