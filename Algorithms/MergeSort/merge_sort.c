#include <stdio.h>

// Runtime Complexity: O(Nlog(N))
// Space Complexity: O(N)
void merge_sort(int arr[], int N) {
	// Return if there are less than 2 elements (no sorting required)
	if (N <= 1) return;

	// Split array into two halves and sort them
	int left_size = N/2;
	int right_size = (N+1)/2;

	int left[left_size];
	int right[right_size];

	for (int i = 0; i < left_size; i++)
		left[i] = arr[i];
	for (int i = 0; i < right_size; i++)
		right[i] = arr[i+left_size];
	
	merge_sort(left, left_size);
	merge_sort(right, right_size);

	// Merge both sorted halves
	int left_index = 0;
	int right_index = 0;
	int merged_index = 0;
	while (left_index < left_size && right_index < right_size) {
		if (left[left_index] < right[right_index]) {
			arr[merged_index] = left[left_index];
			left_index++;
		}
		else {
			arr[merged_index] = right[right_index];
			right_index++;
		}
		merged_index++;
	}
	// Add remaining values to merged array
	while (left_index < left_size) {
		arr[merged_index] = left[left_index];
		left_index++;
		merged_index++;
	}
	while (right_index < right_size) {
		arr[merged_index] = right[right_index];
		right_index++;
		merged_index++;
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

	merge_sort(arr, N);

	// Print elements of sorted array
	printf("Sorted array:  ");
	for (int i = 0; i < N; i++)
		printf(" %d", arr[i]);
	printf("\n");

	return 0;
}
