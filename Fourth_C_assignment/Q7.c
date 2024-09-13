#include <stdio.h>

void fibonacci(int n) {
    if (n <= 0)
	{
        printf("Enter positive number.\n");
        return;
    }

    int n1 = 0, n2 = 1;
    int next;

  
    for (int i = 0; i < n; i++)
	{
        if (i == 0)
		{
            printf("%d", n1);
        }
		else if (i == 1)
		{
            printf(" %d", n2);
        }
		else
		{
            next = n1 + n2;
            printf(" %d", next);
            n1 = n2;
            n2 = next;
        }
    }
    printf("\n");
}

int main()
{
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}

