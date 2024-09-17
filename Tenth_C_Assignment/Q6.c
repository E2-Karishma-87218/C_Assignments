#include <stdio.h>

void swapUsingXOR(int *a, int *b) {
    
    *a = *a ^ *b;
    
     *b = *a ^ *b;
    
     *a = *a ^ *b;
}

int main() 
{
    int num1, num2;

    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    swapUsingXOR(&num1, &num2);

    printf("After swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

