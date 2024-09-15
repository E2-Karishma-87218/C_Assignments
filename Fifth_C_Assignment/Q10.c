#include <stdio.h>

int* linear_search(int arr[], int size, int target) {
    
    for (int i = 0; i < size; i++) {
        
        if (arr[i] == target) {
            return &arr[i]; 
        }
    }
 
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int* result = linear_search(arr, size, target);


    if (result != NULL) {
        printf("Element %d found at address %p.\n", target, (void*)result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

