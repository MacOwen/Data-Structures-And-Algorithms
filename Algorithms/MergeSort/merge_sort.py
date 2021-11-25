# Runtime Complexity: O(Nlog(N))
# Space Complexity: O(N)
def merge_sort(arr):
	# Return if there are less than 2 elements (no sorting required)
	N = len(arr)
	if N <= 1:
		return
	# Split array into two halves and sort them
	left = []
	right = []
	for i in range(0,N//2):
		left.append(arr[i])
	for i in range(N//2,N):
		right.append(arr[i])
	merge_sort(left)
	merge_sort(right)

	# Merge both sorted halves (until one of the arrays reaches the end)
	left_index = 0
	right_index = 0
	merged_index = 0
	while left_index < len(left) and right_index < len(right):
		if left[left_index] < right[right_index]:
			arr[merged_index] = left[left_index]
			left_index += 1
		else:
			arr[merged_index] = right[right_index]
			right_index += 1
		merged_index += 1
	# Add remaining values to merged array
	while left_index < len(left):
		arr[merged_index] = left[left_index]
		left_index += 1
		merged_index += 1
	while right_index < len(right):
		arr[merged_index] = right[right_index]
		right_index += 1
		merged_index += 1

def main():
	arr = [5,74,12,9,0,55,19,-5,8,4]
	print(f"Unsorted array: {arr}")
	merge_sort(arr)
	print(f"Sorted array:   {arr}")

if __name__ == "__main__":
	main()
