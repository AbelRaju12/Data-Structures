def heapify(arr, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    # Compare the left child with the largest
    if left < n and arr[left] > arr[largest]:
        largest = left

    # Compare the right child with the largest
    if right < n and arr[right] > arr[largest]:
        largest = right

    # Swap the root (i) with the largest element if needed
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]  # Swap
        heapify(arr, n, largest)  # Recursively heapify the affected subtree

def heap_sort(arr):
    n = len(arr)

    # Build a max-heap from the array
    for i in range(n // 2 - 1, -1, -1):
        heapify(arr, n, i)

    # Extract elements from the max-heap one by one
    for i in range(n - 1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]  # Swap the root with the last element
        heapify(arr, i, 0)  # Call heapify on the reduced heap

arr = [3, 6, 8, 10, 1, 2, 1]

heap_sort(arr)
print(arr)