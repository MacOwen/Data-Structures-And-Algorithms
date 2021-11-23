#include <iostream>
using namespace std;

// Runtime Complexity: O(N^2)
// Space Complexity: O(1)
void bubble_sort(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N - i; j++) {
			// Swap current element with previous element, if unordered
			if (arr[j-1] > arr[j]) {
				int temp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int arr[] = {5,74,12,9,0,55,19,-5,8,4};
	// Calculate array length by dividing total size by size of each element
	int N = sizeof(arr) / sizeof(arr[0]);

	// Print elements of unsorted array
	cout << "Unsorted array:";
	for (int i = 0; i < N; i++)
		cout << " " << arr[i];
	cout << endl;
	
	bubble_sort(arr, N);

	// Print elements of sorted array
	cout << "Sorted array:  ";
	for (int i = 0; i < N; i++)
		cout << " " << arr[i]; 
	cout << endl;
}
