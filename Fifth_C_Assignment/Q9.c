#include <stdio.h>

int binary_search(int arr[], int size, int target) {
	int left = 0;        
	int right = size - 1; 

	while (left <= right) {
		int mid = left + (right - left) / 2; 

		if (arr[mid] == target) {
			return mid;
		}

		else if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}


	return -1;
}

int main() {
	int arr[] = {43,78,12,34,68,89}; 
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 89; 

	int index = binary_search(arr, size, target);


	if (index != -1) {
		printf("Element %d found at index %d.\n", target, index);
	} else {
		printf("Element %d not found in the array.\n", target);
	}

	return 0;
}

