# Runtime Complexity: O(N^2)
# Space Complexity: O(1)
def insertion_sort(arr):
	N = len(arr)
	for i in range(1, N):
		# Keep track of the original value for insertion
		insertion_value = arr[i] 
		# Shift all elements greater than the insertion value to the right
		j = i
		while j > 0 and arr[j-1] > insertion_value:
			arr[j] = arr[j-1]
			j -= 1
		# Insert the value at the correct position
		arr[j] = insertion_value

def main():
	arr = [5,74,12,9,0,55,19,-5,8,4]
	print(f"Unsorted array: {arr}")
	insertion_sort(arr)
	print(f"Sorted array:   {arr}")

if __name__ == "__main__":
	main()
