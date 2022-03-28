#include <stdio.h>

// Runtime Complexity: O(N^2)
// Space Complexity: O(1)
void insertion_sort(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		// Keep track of the original value for insertion
		int insertion_value = arr[i];
		// Shift all elements greater than the insertion value to the right
		int j = i;
		while (j > 0 && arr[j-1] > insertion_value) {
			arr[j] = arr[j-1];
			j--;
		}
		// Insert the value at the correct position
		arr[j] = insertion_value;
	}
}

int main() {
	int arr[] = {5,74,12,9,0,55,19,-5,8,4};
	// Calculate array length by dividing total size by size of each element
	int N = sizeof(arr) / sizeof(arr[0]);

	// Print elements of unsorted array
	printf("Unsorted array:");
	for (int i = 0; i < N; i++)
		printf(" %d", arr[i]);
	printf("\n");

	insertion_sort(arr, N);

	// Print elements of sorted array
	printf("Sorted array:  ");
	for (int i = 0; i < N; i++)
		printf(" %d", arr[i]);
	printf("\n");

	return 0;
}
