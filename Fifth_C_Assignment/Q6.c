#include <stdio.h>

int rm_duplicates(int arr[], int size) {

    int newSize = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;


        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }


        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
}

int main() {
    int arr[] = {12,23,89,23,56,56,89};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = rm_duplicates(arr, size);


    printf("Updated array: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("Number of unique elements: %d\n", newSize);

    return 0;
}

