#include <stdio.h>

void add(int a[3][3], int b[3][3], int result[3][3]);
void subtract(int a[3][3], int b[3][3], int result[3][3]);
void multiply(int a[3][3], int b[3][3], int result[3][3]);
void print_matrix(int matrix[3][3]);

int main() 
{
    int matrix1[3][3], matrix2[3][3];
    int result[3][3];

    
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < 3; ++i)
	{
        for (int j = 0; j < 3; ++j)
		{
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j)
		{
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    add(matrix1, matrix2, result);
    printf("Matrix addition result:\n");
    print_matrix(result);

    
    subtract(matrix1, matrix2, result);
    printf("Matrix subtraction result:\n");
    print_matrix(result);

    
    multiply(matrix1, matrix2, result);
    printf("Matrix multiplication result:\n");
    print_matrix(result);

    return 0;
}

void add(int a[3][3], int b[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtract(int a[3][3], int b[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiply(int a[3][3], int b[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; ++i)
	{
        for (int j = 0; j < 3; ++j) 
		{
            result[i][j] = 0; 
            for (int k = 0; k < 3; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void print_matrix(int matrix[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

