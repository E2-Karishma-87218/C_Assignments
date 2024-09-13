#include <stdio.h>
#include <stdlib.h>

int main() {
    int magicNumber, guess;
    int chances = 10;

    magicNumber = rand() % 1000 + 1;

    printf("You have %d chances to guess the magic number correctly.\n", chances);

    for (int i = 0; i <chances; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == magicNumber) {
            printf("Congrats! You won.\n");
            break;
        } else if (guess < magicNumber) {
            printf("Left\n");
        } else {
            printf("Right\n");
        }

        if (i < chances - 1) {
            printf("You have %d chances left.\n", chances - i - 1);
        } else {
            printf("Sorry, you're out of chances. The magic number was %d.\n", magicNumber);
        }
    }

    return 0;
}
