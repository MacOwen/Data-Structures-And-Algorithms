# Runtime Complexity: O(N^2)
# Space Complexity: O(1)
def bubble_sort(arr):
	N = len(arr)
	for i in range(N):
		for j in range(1, N - i):
			# Swap current element with previous element, if unordered
			if arr[j-1] > arr[j]:
				temp = arr[j-1]
				arr[j-1] = arr[j]
				arr[j] = temp

def main():
	arr = [5,74,12,9,0,55,19,-5,8,4]
	print(f"Unsorted array: {arr}")
	bubble_sort(arr)
	print(f"Sorted array:   {arr}")

if __name__ == "__main__":
	main()
